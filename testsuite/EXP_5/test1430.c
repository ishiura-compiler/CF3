#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x150 = 0;
static int32_t x151 = 179;
int16_t x166 = INT16_MIN;
int16_t x185 = 1;
volatile int8_t x186 = -1;
int64_t x188 = 16LL;
int32_t t8 = -19556718;
int32_t x278 = INT32_MIN;
uint8_t x280 = 14U;
static uint64_t x306 = 75906835657LLU;
int16_t x322 = INT16_MAX;
int64_t t15 = 478LL;
volatile uint32_t x447 = 4282U;
static volatile uint32_t t18 = 99U;
volatile uint8_t x463 = 25U;
uint8_t x513 = 0U;
uint8_t x586 = UINT8_MAX;
uint32_t t23 = 4430U;
int16_t x670 = 0;
volatile uint16_t x672 = 0U;
uint16_t x824 = 10U;
int64_t x877 = INT64_MAX;
int64_t x882 = INT64_MAX;
uint16_t x884 = 1U;
int32_t x936 = 0;
static int32_t t30 = 220;
volatile uint64_t x1053 = 22019663620LLU;
uint8_t x1054 = 3U;
int8_t x1170 = INT8_MIN;
int8_t x1218 = INT8_MIN;
int64_t x1219 = -14612LL;
volatile int8_t x1220 = 1;
int64_t x1335 = INT64_MIN;
volatile int32_t t41 = 37;
volatile int8_t x1363 = -1;
uint8_t x1364 = 6U;
volatile int64_t x1519 = INT64_MAX;
int16_t x1526 = -1;
uint64_t x1528 = 8LLU;
volatile int16_t x1529 = 1021;
int64_t x1530 = -1LL;
uint8_t x1531 = 38U;
volatile int32_t t47 = -7;
int64_t x1583 = 414922623329LL;
int8_t x1584 = 3;
volatile int32_t t48 = -28188;
uint64_t x1586 = UINT64_MAX;
volatile int32_t t49 = INT32_MIN;
static int8_t x1615 = -15;
volatile int32_t t51 = -13720900;
uint8_t x1688 = 11U;
static uint16_t x1752 = 5U;
static volatile int64_t t55 = INT64_MIN;
int64_t x1781 = -1LL;
static int32_t x1784 = 1;
int64_t t57 = -2942839595LL;
volatile int64_t x1886 = 147857116063531702LL;
int32_t x1918 = INT32_MIN;
int32_t x1919 = -6732;
static uint16_t x1920 = 0U;
static int32_t x2003 = INT32_MIN;
int8_t x2004 = 10;
int16_t x2017 = -1;
uint8_t x2044 = 27U;
uint64_t t64 = 2327986300295010682LLU;
static int8_t x2207 = -1;
uint16_t x2242 = UINT16_MAX;
volatile uint8_t x2244 = 11U;
volatile int32_t t71 = -14;
static int32_t x2277 = INT32_MAX;
uint16_t x2280 = 9U;
int32_t x2317 = -10;
static int32_t t77 = 3512;
int32_t t78 = 278448897;
static int16_t x2400 = 4;
int64_t x2542 = 0LL;
int8_t x2543 = -1;
static volatile int32_t t83 = -588856;
int32_t t85 = INT32_MIN;
int8_t x2632 = 24;
int64_t x2690 = -1LL;
static uint16_t x2863 = 44U;
int16_t x2874 = -1;
static int16_t x2876 = 2;
int32_t x2947 = 9991762;
static int64_t x2963 = 894131929LL;
int8_t x2972 = 6;
volatile int32_t t93 = -24588463;
int64_t x3035 = INT64_MAX;
volatile uint64_t x3123 = 966437796059134LLU;
static uint64_t x3177 = 14674902LLU;
int64_t x3178 = INT64_MIN;
static int8_t x3187 = INT8_MIN;
int32_t t99 = INT32_MIN;


void f0(void) {
	static int32_t x5 = INT32_MIN;
	uint8_t x6 = 90U;
	int32_t x7 = -1;
	uint8_t x8 = 1U;
	volatile int32_t t0 = INT32_MIN;

	t0 = (x5^((x6<x7)<<x8));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MIN;
	int16_t x139 = -1;
	uint8_t x140 = 1U;
	volatile int32_t t1 = -27393;

	t1 = (x137^((x138<x139)<<x140));

	if (t1 != -2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x149 = -1LL;
	volatile int16_t x152 = 3;
	int64_t t2 = -69LL;

	t2 = (x149^((x150<x151)<<x152));

	if (t2 != -9LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x157 = INT16_MAX;
	uint32_t x158 = UINT32_MAX;
	uint64_t x159 = 121LLU;
	int32_t x160 = 1;
	volatile int32_t t3 = 8288162;

	t3 = (x157^((x158<x159)<<x160));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x165 = 3;
	static volatile int64_t x167 = INT64_MIN;
	static int8_t x168 = 1;
	volatile int32_t t4 = 96;

	t4 = (x165^((x166<x167)<<x168));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x181 = 5;
	static int16_t x182 = -1;
	int64_t x183 = 17532427630425LL;
	int8_t x184 = 9;
	int32_t t5 = 53;

	t5 = (x181^((x182<x183)<<x184));

	if (t5 != 517) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x187 = INT8_MAX;
	int32_t t6 = -1;

	t6 = (x185^((x186<x187)<<x188));

	if (t6 != 65537) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x197 = 208LLU;
	uint64_t x198 = 3LLU;
	static int16_t x199 = 99;
	int64_t x200 = 15LL;
	uint64_t t7 = 515891902446524LLU;

	t7 = (x197^((x198<x199)<<x200));

	if (t7 != 32976LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x245 = 27;
	static int64_t x246 = -1LL;
	int64_t x247 = -1LL;
	int8_t x248 = 17;

	t8 = (x245^((x246<x247)<<x248));

	if (t8 != 27) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x277 = 338U;
	volatile uint64_t x279 = 55207LLU;
	uint32_t t9 = 0U;

	t9 = (x277^((x278<x279)<<x280));

	if (t9 != 338U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x305 = INT64_MIN;
	int16_t x307 = INT16_MIN;
	uint16_t x308 = 1U;
	volatile int64_t t10 = 1LL;

	t10 = (x305^((x306<x307)<<x308));

	if (t10 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x317 = INT16_MAX;
	int8_t x318 = INT8_MIN;
	uint64_t x319 = UINT64_MAX;
	uint8_t x320 = 6U;
	int32_t t11 = 2351336;

	t11 = (x317^((x318<x319)<<x320));

	if (t11 != 32703) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x321 = INT32_MIN;
	static volatile int32_t x323 = -2;
	int16_t x324 = 0;
	volatile int32_t t12 = INT32_MIN;

	t12 = (x321^((x322<x323)<<x324));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x365 = 2945U;
	int16_t x366 = INT16_MIN;
	static int8_t x367 = -1;
	int16_t x368 = 28;
	int32_t t13 = 1;

	t13 = (x365^((x366<x367)<<x368));

	if (t13 != 268438401) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x389 = 13U;
	uint32_t x390 = 69308U;
	uint8_t x391 = 1U;
	volatile int8_t x392 = 30;
	int32_t t14 = -1129533;

	t14 = (x389^((x390<x391)<<x392));

	if (t14 != 13) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x413 = INT64_MIN;
	static int16_t x414 = -936;
	volatile int32_t x415 = -61;
	static int8_t x416 = 0;

	t15 = (x413^((x414<x415)<<x416));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x441 = INT16_MAX;
	uint8_t x442 = 71U;
	static int8_t x443 = INT8_MIN;
	uint8_t x444 = 1U;
	volatile int32_t t16 = 30;

	t16 = (x441^((x442<x443)<<x444));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x445 = -1;
	volatile int64_t x446 = INT64_MAX;
	uint16_t x448 = 0U;
	static volatile int32_t t17 = -55333;

	t17 = (x445^((x446<x447)<<x448));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x457 = 5456U;
	volatile uint64_t x458 = 80570LLU;
	int8_t x459 = 37;
	uint64_t x460 = 0LLU;

	t18 = (x457^((x458<x459)<<x460));

	if (t18 != 5456U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x461 = INT32_MAX;
	int64_t x462 = INT64_MIN;
	uint8_t x464 = 7U;
	volatile int32_t t19 = 331;

	t19 = (x461^((x462<x463)<<x464));

	if (t19 != 2147483519) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x514 = 1U;
	volatile int8_t x515 = INT8_MIN;
	volatile int8_t x516 = 0;
	static int32_t t20 = -460;

	t20 = (x513^((x514<x515)<<x516));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x537 = -1;
	volatile int16_t x538 = INT16_MIN;
	int16_t x539 = -1;
	volatile uint32_t x540 = 19U;
	volatile int32_t t21 = -1525882;

	t21 = (x537^((x538<x539)<<x540));

	if (t21 != -524289) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x585 = -1LL;
	int16_t x587 = INT16_MAX;
	static uint8_t x588 = 4U;
	int64_t t22 = -1LL;

	t22 = (x585^((x586<x587)<<x588));

	if (t22 != -17LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x589 = 16U;
	uint8_t x590 = UINT8_MAX;
	int8_t x591 = INT8_MIN;
	static uint8_t x592 = 21U;

	t23 = (x589^((x590<x591)<<x592));

	if (t23 != 16U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x633 = 827U;
	static uint8_t x634 = 2U;
	static int16_t x635 = -13;
	int8_t x636 = 0;
	volatile int32_t t24 = -939;

	t24 = (x633^((x634<x635)<<x636));

	if (t24 != 827) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x669 = -1;
	int16_t x671 = INT16_MAX;
	static int32_t t25 = 480262708;

	t25 = (x669^((x670<x671)<<x672));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x821 = INT16_MAX;
	volatile uint16_t x822 = 157U;
	static int32_t x823 = INT32_MIN;
	static int32_t t26 = 813720621;

	t26 = (x821^((x822<x823)<<x824));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x857 = UINT32_MAX;
	static uint64_t x858 = 61793682LLU;
	static int16_t x859 = 910;
	int32_t x860 = 0;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x857^((x858<x859)<<x860));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x878 = 2003695753685LLU;
	int8_t x879 = INT8_MIN;
	uint16_t x880 = 6U;
	volatile int64_t t28 = -126702LL;

	t28 = (x877^((x878<x879)<<x880));

	if (t28 != 9223372036854775743LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x881 = -1;
	int16_t x883 = -1;
	volatile int32_t t29 = 56726;

	t29 = (x881^((x882<x883)<<x884));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x933 = 7U;
	int64_t x934 = -137134405LL;
	int32_t x935 = -1;

	t30 = (x933^((x934<x935)<<x936));

	if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1049 = UINT8_MAX;
	int16_t x1050 = 0;
	uint32_t x1051 = UINT32_MAX;
	static volatile uint8_t x1052 = 15U;
	volatile int32_t t31 = 298236334;

	t31 = (x1049^((x1050<x1051)<<x1052));

	if (t31 != 33023) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1055 = INT16_MAX;
	static volatile uint64_t x1056 = 3LLU;
	volatile uint64_t t32 = 5965959553659028LLU;

	t32 = (x1053^((x1054<x1055)<<x1056));

	if (t32 != 22019663628LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1057 = 124369915LL;
	volatile uint8_t x1058 = UINT8_MAX;
	static volatile int16_t x1059 = 1855;
	uint8_t x1060 = 0U;
	int64_t t33 = -188654324493485771LL;

	t33 = (x1057^((x1058<x1059)<<x1060));

	if (t33 != 124369914LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1061 = INT32_MAX;
	int32_t x1062 = INT32_MIN;
	int64_t x1063 = -1LL;
	int16_t x1064 = 2;
	volatile int32_t t34 = 33;

	t34 = (x1061^((x1062<x1063)<<x1064));

	if (t34 != 2147483643) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1105 = INT16_MIN;
	uint32_t x1106 = UINT32_MAX;
	uint16_t x1107 = UINT16_MAX;
	volatile int8_t x1108 = 12;
	static volatile int32_t t35 = 19;

	t35 = (x1105^((x1106<x1107)<<x1108));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1169 = 36U;
	uint8_t x1171 = 1U;
	static uint16_t x1172 = 4U;
	int32_t t36 = -415;

	t36 = (x1169^((x1170<x1171)<<x1172));

	if (t36 != 52) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x1217 = UINT32_MAX;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x1217^((x1218<x1219)<<x1220));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1293 = INT16_MAX;
	int64_t x1294 = 6224378LL;
	int64_t x1295 = INT64_MAX;
	int8_t x1296 = 1;
	volatile int32_t t38 = -51462;

	t38 = (x1293^((x1294<x1295)<<x1296));

	if (t38 != 32765) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1317 = UINT8_MAX;
	static volatile int16_t x1318 = -1;
	uint8_t x1319 = 1U;
	static volatile uint8_t x1320 = 3U;
	static volatile int32_t t39 = -754389;

	t39 = (x1317^((x1318<x1319)<<x1320));

	if (t39 != 247) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x1325 = 36794U;
	volatile int16_t x1326 = -29;
	int8_t x1327 = INT8_MIN;
	static volatile int32_t x1328 = 26;
	uint32_t t40 = 1017094848U;

	t40 = (x1325^((x1326<x1327)<<x1328));

	if (t40 != 36794U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1333 = -1;
	int8_t x1334 = -4;
	volatile int8_t x1336 = 1;

	t41 = (x1333^((x1334<x1335)<<x1336));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1361 = INT32_MAX;
	uint8_t x1362 = UINT8_MAX;
	static volatile int32_t t42 = INT32_MAX;

	t42 = (x1361^((x1362<x1363)<<x1364));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1449 = INT64_MIN;
	uint64_t x1450 = UINT64_MAX;
	int16_t x1451 = -1;
	uint32_t x1452 = 3U;
	volatile int64_t t43 = INT64_MIN;

	t43 = (x1449^((x1450<x1451)<<x1452));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1457 = -1LL;
	int64_t x1458 = -30825LL;
	uint32_t x1459 = UINT32_MAX;
	volatile int8_t x1460 = 0;
	volatile int64_t t44 = -1147824643627LL;

	t44 = (x1457^((x1458<x1459)<<x1460));

	if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1517 = -1;
	static int8_t x1518 = -1;
	int8_t x1520 = 3;
	volatile int32_t t45 = 399;

	t45 = (x1517^((x1518<x1519)<<x1520));

	if (t45 != -9) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x1525 = 16405U;
	int8_t x1527 = -1;
	volatile int32_t t46 = 435461;

	t46 = (x1525^((x1526<x1527)<<x1528));

	if (t46 != 16405) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1532 = 2LL;

	t47 = (x1529^((x1530<x1531)<<x1532));

	if (t47 != 1017) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1581 = INT32_MIN;
	static volatile int16_t x1582 = 495;

	t48 = (x1581^((x1582<x1583)<<x1584));

	if (t48 != -2147483640) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x1585 = INT32_MIN;
	int64_t x1587 = -134742697708LL;
	volatile uint8_t x1588 = 14U;

	t49 = (x1585^((x1586<x1587)<<x1588));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x1609 = -16039233882291529LL;
	uint32_t x1610 = 17175U;
	static volatile int16_t x1611 = 987;
	uint8_t x1612 = 14U;
	volatile int64_t t50 = -7490LL;

	t50 = (x1609^((x1610<x1611)<<x1612));

	if (t50 != -16039233882291529LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1613 = 0;
	uint64_t x1614 = UINT64_MAX;
	static uint8_t x1616 = 1U;

	t51 = (x1613^((x1614<x1615)<<x1616));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x1629 = UINT16_MAX;
	int8_t x1630 = INT8_MAX;
	static int64_t x1631 = INT64_MIN;
	int8_t x1632 = 15;
	volatile int32_t t52 = 117;

	t52 = (x1629^((x1630<x1631)<<x1632));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x1685 = INT64_MIN;
	int32_t x1686 = INT32_MAX;
	int64_t x1687 = -244994876190812491LL;
	volatile int64_t t53 = INT64_MIN;

	t53 = (x1685^((x1686<x1687)<<x1688));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1725 = INT16_MIN;
	uint64_t x1726 = 84473171252537LLU;
	uint64_t x1727 = 3569491624237LLU;
	uint32_t x1728 = 7U;
	int32_t t54 = -181;

	t54 = (x1725^((x1726<x1727)<<x1728));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x1749 = INT64_MIN;
	uint32_t x1750 = UINT32_MAX;
	static uint64_t x1751 = 1955LLU;

	t55 = (x1749^((x1750<x1751)<<x1752));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1777 = 0U;
	int64_t x1778 = -6020377206LL;
	volatile int16_t x1779 = INT16_MIN;
	uint64_t x1780 = 1LLU;
	int32_t t56 = 571925;

	t56 = (x1777^((x1778<x1779)<<x1780));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x1782 = -1;
	int32_t x1783 = 526477282;

	t57 = (x1781^((x1782<x1783)<<x1784));

	if (t57 != -3LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x1861 = -1;
	int16_t x1862 = INT16_MIN;
	uint32_t x1863 = 32690U;
	uint8_t x1864 = 11U;
	int32_t t58 = 1042498617;

	t58 = (x1861^((x1862<x1863)<<x1864));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1885 = 591845633329587219LLU;
	static volatile int64_t x1887 = -1LL;
	volatile int16_t x1888 = 4;
	volatile uint64_t t59 = 404590082374LLU;

	t59 = (x1885^((x1886<x1887)<<x1888));

	if (t59 != 591845633329587219LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x1917 = 32;
	int32_t t60 = -335429;

	t60 = (x1917^((x1918<x1919)<<x1920));

	if (t60 != 33) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x2001 = INT8_MAX;
	volatile int16_t x2002 = INT16_MIN;
	volatile int32_t t61 = -766;

	t61 = (x2001^((x2002<x2003)<<x2004));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x2005 = UINT32_MAX;
	int32_t x2006 = INT32_MIN;
	volatile uint8_t x2007 = 0U;
	uint8_t x2008 = 1U;
	volatile uint32_t t62 = 54U;

	t62 = (x2005^((x2006<x2007)<<x2008));

	if (t62 != 4294967293U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2018 = INT16_MIN;
	uint8_t x2019 = 55U;
	uint8_t x2020 = 1U;
	int32_t t63 = 469;

	t63 = (x2017^((x2018<x2019)<<x2020));

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x2041 = 219193LLU;
	uint64_t x2042 = 105LLU;
	int32_t x2043 = INT32_MAX;

	t64 = (x2041^((x2042<x2043)<<x2044));

	if (t64 != 134436921LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x2065 = 93U;
	static int8_t x2066 = -4;
	static volatile int16_t x2067 = INT16_MIN;
	int64_t x2068 = 1LL;
	int32_t t65 = 4735;

	t65 = (x2065^((x2066<x2067)<<x2068));

	if (t65 != 93) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2121 = INT32_MIN;
	volatile uint64_t x2122 = UINT64_MAX;
	static int8_t x2123 = -1;
	volatile uint8_t x2124 = 0U;
	static int32_t t66 = INT32_MIN;

	t66 = (x2121^((x2122<x2123)<<x2124));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x2129 = 51U;
	static int16_t x2130 = INT16_MAX;
	volatile int16_t x2131 = -1;
	uint64_t x2132 = 20LLU;
	int32_t t67 = -824686404;

	t67 = (x2129^((x2130<x2131)<<x2132));

	if (t67 != 51) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2177 = -7;
	static int32_t x2178 = INT32_MIN;
	volatile int32_t x2179 = INT32_MIN;
	uint16_t x2180 = 30U;
	int32_t t68 = 15;

	t68 = (x2177^((x2178<x2179)<<x2180));

	if (t68 != -7) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2205 = INT16_MIN;
	uint8_t x2206 = 15U;
	uint16_t x2208 = 15U;
	volatile int32_t t69 = -9;

	t69 = (x2205^((x2206<x2207)<<x2208));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2229 = 4U;
	uint16_t x2230 = 30U;
	int32_t x2231 = 1047;
	static int16_t x2232 = 0;
	volatile int32_t t70 = 3085;

	t70 = (x2229^((x2230<x2231)<<x2232));

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x2241 = INT8_MAX;
	volatile int64_t x2243 = -1LL;

	t71 = (x2241^((x2242<x2243)<<x2244));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2245 = 68900164892LL;
	volatile uint64_t x2246 = 13792387107599693LLU;
	int64_t x2247 = 4LL;
	uint16_t x2248 = 4U;
	static volatile int64_t t72 = 2736863634077244LL;

	t72 = (x2245^((x2246<x2247)<<x2248));

	if (t72 != 68900164892LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2249 = 1542564403LLU;
	volatile int64_t x2250 = -1LL;
	int16_t x2251 = INT16_MIN;
	int8_t x2252 = 13;
	static volatile uint64_t t73 = 51676801005504LLU;

	t73 = (x2249^((x2250<x2251)<<x2252));

	if (t73 != 1542564403LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2253 = UINT8_MAX;
	int8_t x2254 = -1;
	static volatile int16_t x2255 = INT16_MIN;
	int8_t x2256 = 0;
	int32_t t74 = 5132543;

	t74 = (x2253^((x2254<x2255)<<x2256));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2278 = 13U;
	uint32_t x2279 = 40U;
	int32_t t75 = -13578;

	t75 = (x2277^((x2278<x2279)<<x2280));

	if (t75 != 2147483135) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2318 = INT16_MIN;
	volatile uint16_t x2319 = UINT16_MAX;
	volatile int8_t x2320 = 2;
	int32_t t76 = 50286;

	t76 = (x2317^((x2318<x2319)<<x2320));

	if (t76 != -14) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x2341 = 8U;
	int8_t x2342 = -8;
	uint32_t x2343 = 18388U;
	uint16_t x2344 = 14U;

	t77 = (x2341^((x2342<x2343)<<x2344));

	if (t77 != 8) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x2381 = -1;
	int32_t x2382 = INT32_MIN;
	int32_t x2383 = 203;
	volatile int16_t x2384 = 0;

	t78 = (x2381^((x2382<x2383)<<x2384));

	if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x2397 = 0LLU;
	uint64_t x2398 = 1325262878506LLU;
	uint64_t x2399 = 8825453LLU;
	static uint64_t t79 = 200286105358732617LLU;

	t79 = (x2397^((x2398<x2399)<<x2400));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2405 = INT64_MIN;
	int32_t x2406 = INT32_MAX;
	uint8_t x2407 = 2U;
	uint32_t x2408 = 3U;
	int64_t t80 = INT64_MIN;

	t80 = (x2405^((x2406<x2407)<<x2408));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2481 = -1;
	static int64_t x2482 = -1LL;
	static int64_t x2483 = 1861358522547640386LL;
	int8_t x2484 = 0;
	int32_t t81 = -10669492;

	t81 = (x2481^((x2482<x2483)<<x2484));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2541 = -1;
	static uint16_t x2544 = 4U;
	int32_t t82 = -44934;

	t82 = (x2541^((x2542<x2543)<<x2544));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2577 = 0;
	int64_t x2578 = 803200LL;
	int8_t x2579 = -1;
	static volatile uint16_t x2580 = 3U;

	t83 = (x2577^((x2578<x2579)<<x2580));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x2589 = INT16_MIN;
	volatile uint16_t x2590 = 2U;
	int32_t x2591 = INT32_MAX;
	volatile uint32_t x2592 = 7U;
	int32_t t84 = 357209008;

	t84 = (x2589^((x2590<x2591)<<x2592));

	if (t84 != -32640) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x2597 = INT32_MIN;
	int32_t x2598 = -726;
	int64_t x2599 = -9026LL;
	uint16_t x2600 = 5U;

	t85 = (x2597^((x2598<x2599)<<x2600));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x2629 = INT32_MIN;
	volatile int32_t x2630 = INT32_MIN;
	int16_t x2631 = -1;
	volatile int32_t t86 = 58958;

	t86 = (x2629^((x2630<x2631)<<x2632));

	if (t86 != -2130706432) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2689 = 24U;
	uint16_t x2691 = 4775U;
	volatile uint64_t x2692 = 0LLU;
	volatile int32_t t87 = -16;

	t87 = (x2689^((x2690<x2691)<<x2692));

	if (t87 != 25) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2817 = UINT32_MAX;
	int8_t x2818 = INT8_MIN;
	int32_t x2819 = 132914513;
	uint8_t x2820 = 3U;
	static uint32_t t88 = 113U;

	t88 = (x2817^((x2818<x2819)<<x2820));

	if (t88 != 4294967287U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2861 = INT16_MAX;
	static int16_t x2862 = INT16_MAX;
	uint16_t x2864 = 29U;
	int32_t t89 = 396289014;

	t89 = (x2861^((x2862<x2863)<<x2864));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2873 = 0;
	int16_t x2875 = INT16_MAX;
	int32_t t90 = 3;

	t90 = (x2873^((x2874<x2875)<<x2876));

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2945 = INT64_MIN;
	uint64_t x2946 = 12340LLU;
	int32_t x2948 = 0;
	static int64_t t91 = -12LL;

	t91 = (x2945^((x2946<x2947)<<x2948));

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x2961 = INT8_MAX;
	volatile uint16_t x2962 = UINT16_MAX;
	uint8_t x2964 = 5U;
	int32_t t92 = -8;

	t92 = (x2961^((x2962<x2963)<<x2964));

	if (t92 != 95) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2969 = -48;
	volatile int32_t x2970 = -1;
	static int16_t x2971 = INT16_MAX;

	t93 = (x2969^((x2970<x2971)<<x2972));

	if (t93 != -112) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x2973 = 11274;
	uint8_t x2974 = 3U;
	int64_t x2975 = -12379944LL;
	int8_t x2976 = 5;
	int32_t t94 = 1;

	t94 = (x2973^((x2974<x2975)<<x2976));

	if (t94 != 11274) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x3033 = 1932LLU;
	uint16_t x3034 = UINT16_MAX;
	volatile int8_t x3036 = 3;
	volatile uint64_t t95 = 11820292970771LLU;

	t95 = (x3033^((x3034<x3035)<<x3036));

	if (t95 != 1924LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3093 = INT64_MAX;
	int16_t x3094 = 9;
	static int32_t x3095 = -1;
	static uint8_t x3096 = 1U;
	static volatile int64_t t96 = INT64_MAX;

	t96 = (x3093^((x3094<x3095)<<x3096));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x3121 = -1LL;
	int64_t x3122 = -1LL;
	int64_t x3124 = 0LL;
	static volatile int64_t t97 = 10LL;

	t97 = (x3121^((x3122<x3123)<<x3124));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3179 = INT32_MAX;
	volatile int8_t x3180 = 1;
	uint64_t t98 = 1381157LLU;

	t98 = (x3177^((x3178<x3179)<<x3180));

	if (t98 != 14674900LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3185 = INT32_MIN;
	uint8_t x3186 = 1U;
	static int8_t x3188 = 2;

	t99 = (x3185^((x3186<x3187)<<x3188));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

