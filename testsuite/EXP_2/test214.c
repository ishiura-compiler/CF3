#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = 47984LLU;
int16_t x11 = INT16_MAX;
volatile uint16_t x14 = 7956U;
static int64_t x15 = -548805LL;
uint8_t x16 = 22U;
int32_t x106 = -1;
uint8_t x107 = 7U;
int16_t x125 = -1;
volatile int8_t x179 = -1;
int8_t x180 = 1;
static int32_t t4 = 1081;
volatile int8_t x201 = -1;
int8_t x241 = INT8_MIN;
uint8_t x298 = UINT8_MAX;
int8_t x299 = INT8_MIN;
uint8_t x336 = 13U;
int64_t x369 = INT64_MIN;
uint64_t x370 = 1026LLU;
int16_t x371 = 3247;
int64_t x681 = INT64_MIN;
uint8_t x771 = UINT8_MAX;
static uint32_t x793 = UINT32_MAX;
uint32_t x794 = UINT32_MAX;
static int8_t x796 = 8;
uint32_t t17 = 381101U;
int8_t x801 = 0;
volatile int8_t x802 = 34;
int64_t t18 = 2LL;
uint16_t x896 = 1U;
int16_t x919 = 0;
volatile uint16_t x927 = 75U;
volatile int32_t t22 = -4;
uint16_t x934 = 29241U;
static volatile int16_t x936 = 12;
uint8_t x972 = 1U;
int32_t x1005 = INT32_MAX;
volatile uint64_t x1006 = UINT64_MAX;
uint16_t x1008 = 8U;
int8_t x1051 = INT8_MIN;
volatile uint16_t x1172 = 10U;
int8_t x1175 = -1;
int8_t x1205 = INT8_MIN;
uint64_t x1291 = 905970512626LLU;
uint16_t x1292 = 1U;
uint32_t x1307 = 6U;
static uint32_t x1308 = 43U;
volatile uint8_t x1320 = 1U;
int64_t x1471 = 58LL;
volatile int64_t t36 = 17085547LL;
static int64_t x1507 = INT64_MAX;
uint64_t t37 = 45658859745LLU;
static volatile uint8_t x1553 = 0U;
uint8_t x1556 = 0U;
int32_t x1618 = -1;
static volatile int32_t t39 = -70837356;
volatile int8_t x1626 = -1;
uint8_t x1848 = 3U;
uint32_t x1899 = 1064498U;
static volatile int32_t x2019 = INT32_MIN;
uint16_t x2025 = 12U;
volatile int32_t t50 = -35;
uint32_t x2083 = 1U;
int16_t x2114 = INT16_MAX;
int64_t x2140 = 2LL;
static volatile int64_t t55 = 2925770LL;
volatile uint64_t x2184 = 10LLU;
int16_t x2250 = INT16_MAX;
int16_t x2251 = -3;
uint8_t x2374 = 25U;
uint8_t x2408 = 3U;
volatile int32_t t61 = 913;
uint16_t x2450 = 332U;
int32_t t63 = 3;
static int64_t x2463 = INT64_MIN;
static int8_t x2464 = 22;
int16_t x2561 = 73;
static volatile uint64_t x2563 = 1165891LLU;
int16_t x2705 = INT16_MIN;
volatile int16_t x2707 = INT16_MAX;
static uint64_t t70 = 8608389911164879086LLU;
int64_t x2895 = -25135610LL;
int32_t x2896 = 3;
volatile int64_t t73 = 3119902289LL;
int16_t x2926 = INT16_MAX;
int8_t x2927 = 0;
static uint32_t t74 = 25U;
volatile int64_t x2979 = INT64_MAX;
static uint16_t x2980 = 2U;
int64_t t75 = -11044059LL;
int8_t x3034 = INT8_MAX;
int16_t x3035 = INT16_MIN;
static volatile int32_t t77 = -91037360;
volatile uint64_t t80 = 598028LLU;
volatile uint64_t x3241 = 985389572031LLU;
int8_t x3242 = 12;
int8_t x3315 = 1;
static int64_t x3354 = INT64_MAX;
volatile uint64_t t83 = 21574954308199LLU;
int32_t t84 = 133;
uint32_t x3434 = UINT32_MAX;
uint16_t x3473 = 201U;
int64_t x3474 = -9692026826174LL;
uint8_t x3538 = UINT8_MAX;
uint8_t x3596 = 11U;
int16_t x3670 = -176;
int64_t t94 = -1080653455967112674LL;
int64_t x3762 = 3808191475102LL;
int32_t x3770 = -1;
int16_t x3771 = 0;
uint64_t t98 = 75791777LLU;
int16_t x3849 = -683;
int32_t x3850 = -281;
volatile int32_t t99 = 11961010;


void f0(void) {
	uint16_t x9 = UINT16_MAX;
	uint16_t x12 = 3U;
	uint64_t t0 = 22051LLU;

	t0 = ((x9/(x10-x11))<<x12);

	if (t0 != 32LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x13 = INT8_MIN;
	int64_t t1 = -290830LL;

	t1 = ((x13/(x14-x15))<<x16);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x105 = -1;
	uint16_t x108 = 22U;
	int32_t t2 = 772467267;

	t2 = ((x105/(x106-x107))<<x108);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x126 = UINT64_MAX;
	int16_t x127 = INT16_MIN;
	uint8_t x128 = 8U;
	uint64_t t3 = 62LLU;

	t3 = ((x125/(x126-x127))<<x128);

	if (t3 != 144119586256588800LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x177 = INT32_MAX;
	int32_t x178 = 183089;

	t4 = ((x177/(x178-x179))<<x180);

	if (t4 != 23458) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x202 = 42U;
	volatile int32_t x203 = 0;
	int8_t x204 = 5;
	static int32_t t5 = 24042;

	t5 = ((x201/(x202-x203))<<x204);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x242 = -1;
	int32_t x243 = 471;
	uint16_t x244 = 25U;
	volatile int32_t t6 = -1;

	t6 = ((x241/(x242-x243))<<x244);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x261 = -1;
	int32_t x262 = INT32_MAX;
	static int64_t x263 = INT64_MAX;
	uint64_t x264 = 0LLU;
	static volatile int64_t t7 = -390706200513815810LL;

	t7 = ((x261/(x262-x263))<<x264);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x297 = 40U;
	static int16_t x300 = 2;
	volatile int32_t t8 = -174048237;

	t8 = ((x297/(x298-x299))<<x300);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x333 = -222856912542455354LL;
	int8_t x334 = INT8_MIN;
	int16_t x335 = 303;
	static int64_t t9 = -36659385684806480LL;

	t9 = ((x333/(x334-x335))<<x336);

	if (t9 != 4235832546514599936LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x372 = 2;
	volatile uint64_t t10 = 6LLU;

	t10 = ((x369/(x370-x371))<<x372);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x505 = 2;
	int8_t x506 = INT8_MIN;
	static uint16_t x507 = 1335U;
	uint8_t x508 = 3U;
	volatile int32_t t11 = 180;

	t11 = ((x505/(x506-x507))<<x508);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x513 = INT16_MAX;
	uint16_t x514 = 7601U;
	int16_t x515 = 523;
	uint8_t x516 = 8U;
	int32_t t12 = 0;

	t12 = ((x513/(x514-x515))<<x516);

	if (t12 != 1024) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x682 = INT16_MAX;
	uint64_t x683 = 355866351365LLU;
	uint16_t x684 = 15U;
	uint64_t t13 = 7857787LLU;

	t13 = ((x681/(x682-x683))<<x684);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x685 = INT32_MIN;
	uint64_t x686 = UINT64_MAX;
	static int16_t x687 = -27;
	static int8_t x688 = 2;
	uint64_t t14 = 224807453LLU;

	t14 = ((x685/(x686-x687))<<x688);

	if (t14 != 2837960626394164300LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x769 = 0LL;
	int16_t x770 = INT16_MAX;
	uint64_t x772 = 7LLU;
	int64_t t15 = -13095070905178766LL;

	t15 = ((x769/(x770-x771))<<x772);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x795 = 1972227186596290992LLU;
	volatile uint64_t t16 = 15291857776020101LLU;

	t16 = ((x793/(x794-x795))<<x796);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x797 = 2214;
	volatile uint8_t x798 = 2U;
	volatile uint32_t x799 = 7732U;
	volatile int8_t x800 = 0;

	t17 = ((x797/(x798-x799))<<x800);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x803 = -15LL;
	int8_t x804 = 1;

	t18 = ((x801/(x802-x803))<<x804);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x845 = INT16_MAX;
	int16_t x846 = -1;
	int64_t x847 = INT64_MIN;
	int32_t x848 = 1;
	int64_t t19 = -30040651379300LL;

	t19 = ((x845/(x846-x847))<<x848);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x893 = UINT8_MAX;
	int16_t x894 = INT16_MAX;
	uint64_t x895 = 1LLU;
	uint64_t t20 = 27LLU;

	t20 = ((x893/(x894-x895))<<x896);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x917 = -1;
	static uint64_t x918 = UINT64_MAX;
	static int8_t x920 = 25;
	static uint64_t t21 = 2634912LLU;

	t21 = ((x917/(x918-x919))<<x920);

	if (t21 != 33554432LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x925 = -1;
	uint8_t x926 = UINT8_MAX;
	int64_t x928 = 1LL;

	t22 = ((x925/(x926-x927))<<x928);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x933 = 38583202U;
	volatile int16_t x935 = -2;
	volatile uint32_t t23 = 222188U;

	t23 = ((x933/(x934-x935))<<x936);

	if (t23 != 5402624U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x969 = 111711037U;
	static int32_t x970 = 22;
	volatile int32_t x971 = INT32_MAX;
	volatile uint32_t t24 = 115U;

	t24 = ((x969/(x970-x971))<<x972);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1007 = INT32_MIN;
	volatile uint64_t t25 = 593LLU;

	t25 = ((x1005/(x1006-x1007))<<x1008);

	if (t25 != 256LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1049 = 3630U;
	static uint64_t x1050 = UINT64_MAX;
	uint8_t x1052 = 31U;
	uint64_t t26 = 231864LLU;

	t26 = ((x1049/(x1050-x1051))<<x1052);

	if (t26 != 60129542144LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1113 = INT64_MIN;
	int16_t x1114 = -1;
	uint64_t x1115 = 92148383880LLU;
	int16_t x1116 = 4;
	volatile uint64_t t27 = 190446968LLU;

	t27 = ((x1113/(x1114-x1115))<<x1116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x1169 = 117019U;
	int16_t x1170 = INT16_MIN;
	int64_t x1171 = 205162LL;
	volatile int64_t t28 = 27LL;

	t28 = ((x1169/(x1170-x1171))<<x1172);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x1173 = UINT32_MAX;
	int8_t x1174 = 2;
	uint16_t x1176 = 8U;
	volatile uint32_t t29 = 796916U;

	t29 = ((x1173/(x1174-x1175))<<x1176);

	if (t29 != 1431655680U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1206 = 2U;
	uint8_t x1207 = 70U;
	uint16_t x1208 = 2U;
	volatile int32_t t30 = -279042992;

	t30 = ((x1205/(x1206-x1207))<<x1208);

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1265 = UINT16_MAX;
	uint64_t x1266 = 202686703995223867LLU;
	uint64_t x1267 = 1901LLU;
	uint16_t x1268 = 1U;
	uint64_t t31 = 32755229541855724LLU;

	t31 = ((x1265/(x1266-x1267))<<x1268);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1289 = INT8_MIN;
	int16_t x1290 = -2639;
	volatile uint64_t t32 = 2LLU;

	t32 = ((x1289/(x1290-x1291))<<x1292);

	if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1305 = 404;
	static uint64_t x1306 = 72813084LLU;
	volatile uint64_t t33 = 3644893673418LLU;

	t33 = ((x1305/(x1306-x1307))<<x1308);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1317 = UINT16_MAX;
	int32_t x1318 = -164;
	volatile uint64_t x1319 = 2144061117680LLU;
	static uint64_t t34 = 421LLU;

	t34 = ((x1317/(x1318-x1319))<<x1320);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1405 = 2U;
	int8_t x1406 = 12;
	int32_t x1407 = -1;
	static uint8_t x1408 = 19U;
	int32_t t35 = 1603296;

	t35 = ((x1405/(x1406-x1407))<<x1408);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1469 = INT16_MAX;
	static volatile int16_t x1470 = INT16_MIN;
	static volatile uint8_t x1472 = 3U;

	t36 = ((x1469/(x1470-x1471))<<x1472);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1505 = INT64_MAX;
	uint64_t x1506 = UINT64_MAX;
	static uint8_t x1508 = 0U;

	t37 = ((x1505/(x1506-x1507))<<x1508);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1554 = 370505423413904159LLU;
	int64_t x1555 = -3007258207021810LL;
	uint64_t t38 = 12457104682650584LLU;

	t38 = ((x1553/(x1554-x1555))<<x1556);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1617 = -5;
	volatile int16_t x1619 = INT16_MIN;
	static volatile uint32_t x1620 = 0U;

	t39 = ((x1617/(x1618-x1619))<<x1620);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1625 = -1LL;
	int32_t x1627 = -484;
	uint8_t x1628 = 15U;
	int64_t t40 = 893716637272537206LL;

	t40 = ((x1625/(x1626-x1627))<<x1628);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1685 = -1;
	uint64_t x1686 = 5432619343LLU;
	int16_t x1687 = INT16_MIN;
	int32_t x1688 = 0;
	uint64_t t41 = 18269336642118LLU;

	t41 = ((x1685/(x1686-x1687))<<x1688);

	if (t41 != 3395531997LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1697 = -61;
	uint16_t x1698 = 14U;
	static volatile int16_t x1699 = 15727;
	volatile uint32_t x1700 = 11U;
	volatile int32_t t42 = 104642051;

	t42 = ((x1697/(x1698-x1699))<<x1700);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1785 = -325772694;
	uint64_t x1786 = UINT64_MAX;
	int64_t x1787 = INT64_MIN;
	static int32_t x1788 = 5;
	uint64_t t43 = 174208LLU;

	t43 = ((x1785/(x1786-x1787))<<x1788);

	if (t43 != 32LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1797 = 4;
	volatile int16_t x1798 = -5840;
	int64_t x1799 = 2887229086713215569LL;
	uint8_t x1800 = 3U;
	int64_t t44 = -474763LL;

	t44 = ((x1797/(x1798-x1799))<<x1800);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1845 = 2;
	int32_t x1846 = INT32_MIN;
	volatile int16_t x1847 = INT16_MIN;
	int32_t t45 = 43457;

	t45 = ((x1845/(x1846-x1847))<<x1848);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1897 = 12564945210837604LL;
	static int8_t x1898 = -1;
	static uint16_t x1900 = 0U;
	volatile int64_t t46 = -1553230981621LL;

	t46 = ((x1897/(x1898-x1899))<<x1900);

	if (t46 != 2926229LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1957 = INT64_MIN;
	int16_t x1958 = INT16_MIN;
	int8_t x1959 = INT8_MAX;
	uint8_t x1960 = 6U;
	static int64_t t47 = -1610041876LL;

	t47 = ((x1957/(x1958-x1959))<<x1960);

	if (t47 != 17944849076112000LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1993 = 7LL;
	static int64_t x1994 = 1168268LL;
	uint8_t x1995 = 83U;
	static int16_t x1996 = 7;
	volatile int64_t t48 = 60869LL;

	t48 = ((x1993/(x1994-x1995))<<x1996);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2017 = 6;
	uint64_t x2018 = 3369LLU;
	int8_t x2020 = 50;
	volatile uint64_t t49 = 73LLU;

	t49 = ((x2017/(x2018-x2019))<<x2020);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2026 = INT8_MIN;
	static int8_t x2027 = -23;
	uint16_t x2028 = 10U;

	t50 = ((x2025/(x2026-x2027))<<x2028);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2081 = 22U;
	int64_t x2082 = INT64_MAX;
	int8_t x2084 = 0;
	static int64_t t51 = -947227337275934110LL;

	t51 = ((x2081/(x2082-x2083))<<x2084);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x2085 = UINT64_MAX;
	uint8_t x2086 = 5U;
	int64_t x2087 = -1LL;
	uint8_t x2088 = 28U;
	static uint64_t t52 = 35800091718837959LLU;

	t52 = ((x2085/(x2086-x2087))<<x2088);

	if (t52 != 12297829382294077440LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2109 = INT64_MIN;
	uint64_t x2110 = 233740278625046LLU;
	static int8_t x2111 = 4;
	int8_t x2112 = 1;
	uint64_t t53 = 192437417440454729LLU;

	t53 = ((x2109/(x2110-x2111))<<x2112);

	if (t53 != 78918LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x2113 = 0U;
	int64_t x2115 = -1LL;
	static volatile int64_t x2116 = 10LL;
	volatile int64_t t54 = -1331912145734452LL;

	t54 = ((x2113/(x2114-x2115))<<x2116);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2137 = 1300U;
	uint32_t x2138 = UINT32_MAX;
	int64_t x2139 = -1LL;

	t55 = ((x2137/(x2138-x2139))<<x2140);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2145 = INT16_MAX;
	uint16_t x2146 = 1U;
	uint16_t x2147 = UINT16_MAX;
	int8_t x2148 = 26;
	volatile int32_t t56 = -4306475;

	t56 = ((x2145/(x2146-x2147))<<x2148);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2165 = 0U;
	static int16_t x2166 = INT16_MAX;
	volatile int8_t x2167 = -16;
	static int8_t x2168 = 1;
	int32_t t57 = 33889;

	t57 = ((x2165/(x2166-x2167))<<x2168);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2181 = -1;
	int64_t x2182 = INT64_MIN;
	int16_t x2183 = -4597;
	int64_t t58 = 18897695329LL;

	t58 = ((x2181/(x2182-x2183))<<x2184);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2249 = -1;
	uint16_t x2252 = 1U;
	int32_t t59 = 11788231;

	t59 = ((x2249/(x2250-x2251))<<x2252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2373 = 7U;
	int64_t x2375 = INT64_MAX;
	int16_t x2376 = 14;
	int64_t t60 = 18LL;

	t60 = ((x2373/(x2374-x2375))<<x2376);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2405 = 125U;
	static int16_t x2406 = INT16_MIN;
	volatile int16_t x2407 = -1;

	t61 = ((x2405/(x2406-x2407))<<x2408);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x2421 = -62969066320426661LL;
	static int32_t x2422 = INT32_MIN;
	volatile uint64_t x2423 = 4127467852LLU;
	uint8_t x2424 = 0U;
	volatile uint64_t t62 = 0LLU;

	t62 = ((x2421/(x2422-x2423))<<x2424);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x2449 = -23;
	int8_t x2451 = -1;
	uint8_t x2452 = 1U;

	t63 = ((x2449/(x2450-x2451))<<x2452);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2461 = 13756392U;
	static int16_t x2462 = INT16_MIN;
	static volatile int64_t t64 = 30696982571608LL;

	t64 = ((x2461/(x2462-x2463))<<x2464);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x2489 = 16U;
	volatile int16_t x2490 = INT16_MIN;
	int8_t x2491 = INT8_MAX;
	int32_t x2492 = 7;
	static int32_t t65 = 27342819;

	t65 = ((x2489/(x2490-x2491))<<x2492);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x2501 = INT8_MIN;
	uint32_t x2502 = 3U;
	static uint8_t x2503 = 0U;
	int8_t x2504 = 0;
	uint32_t t66 = 225U;

	t66 = ((x2501/(x2502-x2503))<<x2504);

	if (t66 != 1431655722U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2509 = 2928U;
	int8_t x2510 = 2;
	volatile int8_t x2511 = INT8_MIN;
	static int8_t x2512 = 0;
	static volatile int32_t t67 = -19490764;

	t67 = ((x2509/(x2510-x2511))<<x2512);

	if (t67 != 22) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2562 = 53;
	int8_t x2564 = 15;
	volatile uint64_t t68 = 481785848251809221LLU;

	t68 = ((x2561/(x2562-x2563))<<x2564);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2613 = -1;
	static uint64_t x2614 = UINT64_MAX;
	int64_t x2615 = INT64_MIN;
	volatile int16_t x2616 = 1;
	uint64_t t69 = 48046984754LLU;

	t69 = ((x2613/(x2614-x2615))<<x2616);

	if (t69 != 4LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2706 = UINT64_MAX;
	volatile int8_t x2708 = 20;

	t70 = ((x2705/(x2706-x2707))<<x2708);

	if (t70 != 1048576LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2869 = INT32_MIN;
	static int16_t x2870 = INT16_MIN;
	int8_t x2871 = INT8_MAX;
	volatile uint32_t x2872 = 11U;
	static int32_t t71 = 201858548;

	t71 = ((x2869/(x2870-x2871))<<x2872);

	if (t71 != 133697536) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2893 = INT32_MAX;
	int32_t x2894 = -1;
	volatile int64_t t72 = 438541603LL;

	t72 = ((x2893/(x2894-x2895))<<x2896);

	if (t72 != 680LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x2913 = 3U;
	int64_t x2914 = INT64_MIN;
	int64_t x2915 = -600173198446LL;
	int8_t x2916 = 55;

	t73 = ((x2913/(x2914-x2915))<<x2916);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2925 = UINT32_MAX;
	uint8_t x2928 = 0U;

	t74 = ((x2925/(x2926-x2927))<<x2928);

	if (t74 != 131076U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2977 = -431896900;
	int32_t x2978 = -1;

	t75 = ((x2977/(x2978-x2979))<<x2980);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2981 = -1;
	int16_t x2982 = -3;
	uint64_t x2983 = UINT64_MAX;
	uint32_t x2984 = 6U;
	uint64_t t76 = 57LLU;

	t76 = ((x2981/(x2982-x2983))<<x2984);

	if (t76 != 64LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x3033 = 1;
	volatile int16_t x3036 = 20;

	t77 = ((x3033/(x3034-x3035))<<x3036);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3105 = UINT64_MAX;
	int32_t x3106 = -142269;
	static int64_t x3107 = INT64_MIN;
	int32_t x3108 = 1;
	uint64_t t78 = 4LLU;

	t78 = ((x3105/(x3106-x3107))<<x3108);

	if (t78 != 4LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x3193 = 28;
	int16_t x3194 = INT16_MIN;
	uint64_t x3195 = 86741475919672467LLU;
	uint8_t x3196 = 1U;
	volatile uint64_t t79 = 3639358421907371608LLU;

	t79 = ((x3193/(x3194-x3195))<<x3196);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3225 = INT8_MIN;
	uint8_t x3226 = UINT8_MAX;
	uint64_t x3227 = 8989345603LLU;
	uint8_t x3228 = 19U;

	t80 = ((x3225/(x3226-x3227))<<x3228);

	if (t80 != 524288LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x3243 = -3427;
	uint16_t x3244 = 13U;
	uint64_t t81 = 4428491461196695LLU;

	t81 = ((x3241/(x3242-x3243))<<x3244);

	if (t81 != 2347284488192LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3313 = INT16_MIN;
	int64_t x3314 = -1LL;
	uint8_t x3316 = 0U;
	static int64_t t82 = 114LL;

	t82 = ((x3313/(x3314-x3315))<<x3316);

	if (t82 != 16384LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3353 = UINT64_MAX;
	uint64_t x3355 = 30313766699LLU;
	int16_t x3356 = 18;

	t83 = ((x3353/(x3354-x3355))<<x3356);

	if (t83 != 524288LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x3369 = -2;
	int16_t x3370 = -1;
	int16_t x3371 = INT16_MAX;
	int16_t x3372 = 6;

	t84 = ((x3369/(x3370-x3371))<<x3372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3425 = 0;
	volatile int32_t x3426 = 0;
	uint32_t x3427 = UINT32_MAX;
	int16_t x3428 = 0;
	static volatile uint32_t t85 = 116681359U;

	t85 = ((x3425/(x3426-x3427))<<x3428);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x3429 = 0;
	int32_t x3430 = 29855;
	int16_t x3431 = INT16_MAX;
	uint8_t x3432 = 2U;
	int32_t t86 = -28704;

	t86 = ((x3429/(x3430-x3431))<<x3432);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x3433 = 379;
	int32_t x3435 = INT32_MAX;
	uint16_t x3436 = 0U;
	static volatile uint32_t t87 = 2324197U;

	t87 = ((x3433/(x3434-x3435))<<x3436);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3475 = INT8_MIN;
	static uint16_t x3476 = 6U;
	volatile int64_t t88 = 43790468LL;

	t88 = ((x3473/(x3474-x3475))<<x3476);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x3477 = UINT64_MAX;
	int16_t x3478 = -1;
	int64_t x3479 = -82899149826LL;
	int16_t x3480 = 52;
	uint64_t t89 = 6517037875476438LLU;

	t89 = ((x3477/(x3478-x3479))<<x3480);

	if (t89 != 4539628424389459968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3537 = -376310130;
	volatile uint32_t x3539 = 199U;
	uint32_t x3540 = 29U;
	static uint32_t t90 = 1006392U;

	t90 = ((x3537/(x3538-x3539))<<x3540);

	if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x3577 = UINT8_MAX;
	int16_t x3578 = INT16_MIN;
	int64_t x3579 = -31389863LL;
	uint32_t x3580 = 0U;
	volatile int64_t t91 = 5065063651164068LL;

	t91 = ((x3577/(x3578-x3579))<<x3580);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3593 = 68U;
	uint32_t x3594 = UINT32_MAX;
	static int64_t x3595 = 5084121051533LL;
	volatile int64_t t92 = 2692791872774327269LL;

	t92 = ((x3593/(x3594-x3595))<<x3596);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x3629 = 27140LLU;
	static int32_t x3630 = -1229;
	int16_t x3631 = 1;
	uint16_t x3632 = 8U;
	static uint64_t t93 = 1LLU;

	t93 = ((x3629/(x3630-x3631))<<x3632);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3669 = -1;
	static int64_t x3671 = INT64_MIN;
	uint16_t x3672 = 2U;

	t94 = ((x3669/(x3670-x3671))<<x3672);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3761 = 454475LL;
	static int64_t x3763 = -1876544301LL;
	int8_t x3764 = 0;
	static volatile int64_t t95 = 630199251626LL;

	t95 = ((x3761/(x3762-x3763))<<x3764);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3769 = -12657LL;
	volatile int16_t x3772 = 18;
	static int64_t t96 = 3725LL;

	t96 = ((x3769/(x3770-x3771))<<x3772);

	if (t96 != 3317956608LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3785 = INT32_MIN;
	int8_t x3786 = INT8_MIN;
	uint32_t x3787 = 6852U;
	int8_t x3788 = 1;
	uint32_t t97 = 9815U;

	t97 = ((x3785/(x3786-x3787))<<x3788);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x3841 = INT8_MIN;
	volatile uint64_t x3842 = UINT64_MAX;
	int64_t x3843 = INT64_MAX;
	int16_t x3844 = 1;

	t98 = ((x3841/(x3842-x3843))<<x3844);

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3851 = -1;
	int8_t x3852 = 0;

	t99 = ((x3849/(x3850-x3851))<<x3852);

	if (t99 != 2) { NG(); } else { ; }
	
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

