#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x9 = -137385;
static int8_t x67 = 0;
static int8_t x68 = 0;
uint64_t x132 = 0LLU;
int8_t x157 = -1;
volatile int32_t x159 = INT32_MAX;
int16_t x205 = -24;
int32_t x223 = -1;
int32_t x298 = -1;
int64_t x309 = -246765678453809LL;
int32_t t10 = 195;
uint8_t x352 = 1U;
static volatile uint8_t x406 = 56U;
int32_t x525 = -22362;
int8_t x537 = -19;
uint32_t x540 = 10U;
static volatile int8_t x554 = 11;
int16_t x555 = INT16_MAX;
int32_t x570 = INT32_MIN;
volatile int64_t x630 = -4239461821LL;
static int64_t x631 = -2094472511LL;
uint8_t x692 = 6U;
int8_t x774 = -8;
static volatile int32_t t26 = -1;
int32_t t28 = 166798287;
int16_t x870 = -4;
volatile int32_t x886 = INT32_MAX;
static int8_t x924 = 3;
volatile int32_t t31 = -28990987;
static int8_t x974 = INT8_MIN;
static int64_t x975 = -1LL;
static uint8_t x977 = UINT8_MAX;
static int32_t x986 = -5118;
volatile uint8_t x1102 = UINT8_MAX;
int64_t x1155 = -46236872065LL;
uint8_t x1164 = 1U;
static int64_t x1173 = -69112705233380LL;
static uint32_t x1175 = 24290499U;
int8_t x1238 = INT8_MIN;
uint64_t x1240 = 24LLU;
volatile int32_t t42 = -2815;
int16_t x1259 = -498;
static int32_t t45 = 4132363;
int64_t x1325 = 135198LL;
int16_t x1327 = -15;
int64_t x1369 = INT64_MAX;
int32_t x1370 = INT32_MIN;
static int8_t x1433 = INT8_MIN;
int32_t t52 = -15592;
volatile int16_t x1474 = INT16_MIN;
volatile int8_t x1475 = -1;
uint8_t x1476 = 2U;
uint16_t x1530 = 2U;
uint8_t x1669 = UINT8_MAX;
uint8_t x1700 = 1U;
int32_t t58 = -11155;
int32_t x1733 = 1318863;
uint32_t x2015 = 180886467U;
int16_t x2069 = INT16_MAX;
volatile uint8_t x2072 = 25U;
uint32_t x2196 = 0U;
static uint16_t x2276 = 22U;
static uint16_t x2288 = 7U;
static uint64_t x2313 = UINT64_MAX;
int16_t x2316 = 5;
uint64_t x2321 = 800260485593LLU;
int8_t x2324 = 1;
static uint16_t x2342 = 1U;
int8_t x2345 = 31;
int32_t x2346 = INT32_MIN;
volatile uint64_t x2377 = UINT64_MAX;
uint32_t x2379 = UINT32_MAX;
int8_t x2409 = INT8_MIN;
int32_t x2424 = 14;
uint16_t x2440 = 18U;
int32_t t80 = -1;
static volatile int16_t x2573 = INT16_MIN;
uint64_t x2574 = UINT64_MAX;
uint32_t x2617 = 44550U;
int64_t x2649 = INT64_MIN;
static uint16_t x2685 = 347U;
int32_t t89 = 108334001;
volatile int8_t x2880 = 1;
int32_t t91 = 89919248;
int16_t x2895 = -1;
uint64_t x2917 = 2008806937738LLU;
int32_t t94 = 58131543;
static int16_t x3030 = 6;
int32_t t97 = -291;
volatile int32_t x3127 = 0;


void f0(void) {
	uint16_t x10 = 239U;
	int32_t x11 = INT32_MAX;
	int8_t x12 = 1;
	int32_t t0 = 3447560;

	t0 = (((x9%x10)<x11)<<x12);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = UINT32_MAX;
	uint16_t x51 = UINT16_MAX;
	static uint8_t x52 = 20U;
	int32_t t1 = 1;

	t1 = (((x49%x50)<x51)<<x52);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x61 = 61U;
	int16_t x62 = -348;
	uint16_t x63 = 2008U;
	volatile int16_t x64 = 4;
	int32_t t2 = -7;

	t2 = (((x61%x62)<x63)<<x64);

	if (t2 != 16) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	volatile int32_t t3 = -62;

	t3 = (((x65%x66)<x67)<<x68);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x129 = -1;
	int64_t x130 = INT64_MIN;
	volatile int64_t x131 = INT64_MAX;
	static volatile int32_t t4 = -13;

	t4 = (((x129%x130)<x131)<<x132);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x158 = 4;
	uint16_t x160 = 1U;
	volatile int32_t t5 = 175712;

	t5 = (((x157%x158)<x159)<<x160);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x185 = 0U;
	int16_t x186 = INT16_MIN;
	uint64_t x187 = UINT64_MAX;
	static uint16_t x188 = 29U;
	volatile int32_t t6 = 48185;

	t6 = (((x185%x186)<x187)<<x188);

	if (t6 != 536870912) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x206 = 55;
	volatile int8_t x207 = -6;
	volatile int16_t x208 = 0;
	volatile int32_t t7 = 61262730;

	t7 = (((x205%x206)<x207)<<x208);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x221 = UINT64_MAX;
	static volatile int64_t x222 = INT64_MAX;
	uint8_t x224 = 2U;
	static int32_t t8 = 31381;

	t8 = (((x221%x222)<x223)<<x224);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x297 = INT32_MAX;
	int32_t x299 = 926606;
	uint16_t x300 = 12U;
	volatile int32_t t9 = -6548175;

	t9 = (((x297%x298)<x299)<<x300);

	if (t9 != 4096) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x310 = INT16_MIN;
	int8_t x311 = -1;
	int16_t x312 = 17;

	t10 = (((x309%x310)<x311)<<x312);

	if (t10 != 131072) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x349 = 13;
	int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MAX;
	int32_t t11 = -657950323;

	t11 = (((x349%x350)<x351)<<x352);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x377 = 208643538618707472LLU;
	int32_t x378 = 16721;
	int16_t x379 = INT16_MAX;
	uint32_t x380 = 2U;
	static int32_t t12 = 96493;

	t12 = (((x377%x378)<x379)<<x380);

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x405 = UINT64_MAX;
	volatile int8_t x407 = -2;
	int16_t x408 = 0;
	volatile int32_t t13 = 48974713;

	t13 = (((x405%x406)<x407)<<x408);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x526 = INT8_MIN;
	int32_t x527 = INT32_MIN;
	uint8_t x528 = 0U;
	volatile int32_t t14 = 3128;

	t14 = (((x525%x526)<x527)<<x528);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x538 = 9U;
	int64_t x539 = INT64_MIN;
	volatile int32_t t15 = 117800550;

	t15 = (((x537%x538)<x539)<<x540);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x545 = UINT8_MAX;
	int64_t x546 = -1071LL;
	uint64_t x547 = UINT64_MAX;
	uint8_t x548 = 2U;
	int32_t t16 = -677285;

	t16 = (((x545%x546)<x547)<<x548);

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x553 = INT16_MIN;
	volatile uint8_t x556 = 6U;
	static int32_t t17 = 119267025;

	t17 = (((x553%x554)<x555)<<x556);

	if (t17 != 64) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x569 = -1;
	uint16_t x571 = 2U;
	volatile int32_t x572 = 0;
	static int32_t t18 = 1942167;

	t18 = (((x569%x570)<x571)<<x572);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x601 = 429U;
	static uint32_t x602 = 482U;
	uint64_t x603 = 4060LLU;
	int8_t x604 = 5;
	static int32_t t19 = -1;

	t19 = (((x601%x602)<x603)<<x604);

	if (t19 != 32) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x629 = INT64_MAX;
	int16_t x632 = 5;
	int32_t t20 = -462941;

	t20 = (((x629%x630)<x631)<<x632);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x641 = 234LLU;
	int64_t x642 = INT64_MIN;
	int32_t x643 = INT32_MIN;
	volatile uint8_t x644 = 1U;
	volatile int32_t t21 = 5213404;

	t21 = (((x641%x642)<x643)<<x644);

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x657 = 4878875749740379LLU;
	int16_t x658 = -1;
	volatile int16_t x659 = INT16_MAX;
	static uint8_t x660 = 14U;
	int32_t t22 = -11;

	t22 = (((x657%x658)<x659)<<x660);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x689 = 4944844LLU;
	static uint8_t x690 = 15U;
	int16_t x691 = INT16_MAX;
	int32_t t23 = 68;

	t23 = (((x689%x690)<x691)<<x692);

	if (t23 != 64) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x773 = 3513U;
	int64_t x775 = -1LL;
	int8_t x776 = 1;
	static int32_t t24 = -44139;

	t24 = (((x773%x774)<x775)<<x776);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x785 = INT32_MIN;
	volatile int16_t x786 = -538;
	int32_t x787 = -498321;
	uint8_t x788 = 4U;
	int32_t t25 = -1423899;

	t25 = (((x785%x786)<x787)<<x788);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x809 = INT32_MAX;
	volatile int8_t x810 = -1;
	int8_t x811 = INT8_MIN;
	uint16_t x812 = 8U;

	t26 = (((x809%x810)<x811)<<x812);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x817 = -1;
	int8_t x818 = -17;
	static uint32_t x819 = 14567U;
	uint8_t x820 = 2U;
	int32_t t27 = -24;

	t27 = (((x817%x818)<x819)<<x820);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x829 = INT64_MIN;
	int64_t x830 = -1LL;
	uint64_t x831 = 22LLU;
	volatile uint32_t x832 = 3U;

	t28 = (((x829%x830)<x831)<<x832);

	if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x869 = INT16_MIN;
	int32_t x871 = INT32_MIN;
	static int8_t x872 = 15;
	volatile int32_t t29 = -7712;

	t29 = (((x869%x870)<x871)<<x872);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x885 = 1380U;
	uint64_t x887 = 10928062LLU;
	uint8_t x888 = 6U;
	volatile int32_t t30 = 1;

	t30 = (((x885%x886)<x887)<<x888);

	if (t30 != 64) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x921 = -1LL;
	volatile int32_t x922 = INT32_MIN;
	uint8_t x923 = 14U;

	t31 = (((x921%x922)<x923)<<x924);

	if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x973 = 0U;
	static uint8_t x976 = 2U;
	static volatile int32_t t32 = -9370;

	t32 = (((x973%x974)<x975)<<x976);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x978 = INT64_MIN;
	volatile uint16_t x979 = UINT16_MAX;
	static volatile int8_t x980 = 0;
	volatile int32_t t33 = 833567953;

	t33 = (((x977%x978)<x979)<<x980);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x985 = 22559218342159086LL;
	uint8_t x987 = UINT8_MAX;
	int8_t x988 = 19;
	static volatile int32_t t34 = -11995;

	t34 = (((x985%x986)<x987)<<x988);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x1025 = 3720261581816603555LLU;
	volatile int32_t x1026 = INT32_MIN;
	static uint64_t x1027 = 690828126LLU;
	static int8_t x1028 = 1;
	int32_t t35 = -469;

	t35 = (((x1025%x1026)<x1027)<<x1028);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1073 = 49U;
	int8_t x1074 = INT8_MIN;
	int64_t x1075 = INT64_MIN;
	uint8_t x1076 = 7U;
	volatile int32_t t36 = 59;

	t36 = (((x1073%x1074)<x1075)<<x1076);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1101 = INT16_MAX;
	int8_t x1103 = 2;
	volatile uint16_t x1104 = 26U;
	volatile int32_t t37 = 19832;

	t37 = (((x1101%x1102)<x1103)<<x1104);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1153 = 196004U;
	int16_t x1154 = 7527;
	static uint8_t x1156 = 9U;
	static int32_t t38 = -2890319;

	t38 = (((x1153%x1154)<x1155)<<x1156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1161 = INT32_MIN;
	volatile uint8_t x1162 = UINT8_MAX;
	static uint16_t x1163 = 4U;
	static volatile int32_t t39 = 7755214;

	t39 = (((x1161%x1162)<x1163)<<x1164);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1174 = -12;
	uint8_t x1176 = 0U;
	volatile int32_t t40 = 44552271;

	t40 = (((x1173%x1174)<x1175)<<x1176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1217 = 2;
	int8_t x1218 = -1;
	int32_t x1219 = INT32_MIN;
	static int16_t x1220 = 0;
	static int32_t t41 = 1;

	t41 = (((x1217%x1218)<x1219)<<x1220);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1237 = INT64_MIN;
	int64_t x1239 = INT64_MIN;

	t42 = (((x1237%x1238)<x1239)<<x1240);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1257 = INT32_MIN;
	int8_t x1258 = 63;
	uint16_t x1260 = 2U;
	volatile int32_t t43 = -1;

	t43 = (((x1257%x1258)<x1259)<<x1260);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x1277 = 1U;
	int64_t x1278 = INT64_MIN;
	uint64_t x1279 = 1297LLU;
	int8_t x1280 = 2;
	static volatile int32_t t44 = -291525;

	t44 = (((x1277%x1278)<x1279)<<x1280);

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1293 = 96U;
	static int16_t x1294 = 1;
	static uint64_t x1295 = 5163LLU;
	int8_t x1296 = 0;

	t45 = (((x1293%x1294)<x1295)<<x1296);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1326 = INT16_MIN;
	uint64_t x1328 = 2LLU;
	volatile int32_t t46 = 51592398;

	t46 = (((x1325%x1326)<x1327)<<x1328);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x1357 = 479;
	int16_t x1358 = INT16_MIN;
	uint64_t x1359 = UINT64_MAX;
	int8_t x1360 = 9;
	int32_t t47 = 14;

	t47 = (((x1357%x1358)<x1359)<<x1360);

	if (t47 != 512) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1361 = -1;
	int32_t x1362 = -1;
	volatile int64_t x1363 = INT64_MIN;
	uint8_t x1364 = 1U;
	volatile int32_t t48 = 20216;

	t48 = (((x1361%x1362)<x1363)<<x1364);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x1371 = UINT64_MAX;
	uint8_t x1372 = 1U;
	volatile int32_t t49 = 3;

	t49 = (((x1369%x1370)<x1371)<<x1372);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1397 = -14743354735340LL;
	int32_t x1398 = INT32_MIN;
	static volatile uint64_t x1399 = UINT64_MAX;
	uint8_t x1400 = 0U;
	int32_t t50 = -1021;

	t50 = (((x1397%x1398)<x1399)<<x1400);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1417 = 0;
	int8_t x1418 = INT8_MAX;
	int32_t x1419 = -1;
	uint16_t x1420 = 2U;
	int32_t t51 = 1;

	t51 = (((x1417%x1418)<x1419)<<x1420);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1434 = UINT16_MAX;
	volatile uint16_t x1435 = 3703U;
	volatile int64_t x1436 = 1LL;

	t52 = (((x1433%x1434)<x1435)<<x1436);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1473 = INT8_MAX;
	int32_t t53 = 170024789;

	t53 = (((x1473%x1474)<x1475)<<x1476);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1529 = -915924LL;
	int8_t x1531 = -1;
	int32_t x1532 = 0;
	volatile int32_t t54 = 1;

	t54 = (((x1529%x1530)<x1531)<<x1532);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1565 = 117U;
	int8_t x1566 = -1;
	static uint32_t x1567 = 3575288U;
	volatile int16_t x1568 = 1;
	volatile int32_t t55 = 36273;

	t55 = (((x1565%x1566)<x1567)<<x1568);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x1661 = 0U;
	static uint8_t x1662 = UINT8_MAX;
	int32_t x1663 = INT32_MIN;
	static int8_t x1664 = 1;
	static int32_t t56 = 899642;

	t56 = (((x1661%x1662)<x1663)<<x1664);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x1670 = INT32_MAX;
	volatile int32_t x1671 = INT32_MIN;
	int16_t x1672 = 18;
	volatile int32_t t57 = 517548807;

	t57 = (((x1669%x1670)<x1671)<<x1672);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x1697 = 11271515U;
	static volatile int8_t x1698 = INT8_MAX;
	uint32_t x1699 = 1438648U;

	t58 = (((x1697%x1698)<x1699)<<x1700);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x1713 = -1;
	int32_t x1714 = INT32_MAX;
	int16_t x1715 = INT16_MIN;
	uint8_t x1716 = 1U;
	int32_t t59 = 9912;

	t59 = (((x1713%x1714)<x1715)<<x1716);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1734 = INT8_MIN;
	int32_t x1735 = INT32_MIN;
	int8_t x1736 = 1;
	volatile int32_t t60 = 10;

	t60 = (((x1733%x1734)<x1735)<<x1736);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1837 = 11229367295LLU;
	int8_t x1838 = 3;
	static uint32_t x1839 = UINT32_MAX;
	int32_t x1840 = 1;
	int32_t t61 = 15;

	t61 = (((x1837%x1838)<x1839)<<x1840);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1897 = INT8_MIN;
	uint8_t x1898 = 2U;
	int8_t x1899 = INT8_MIN;
	static volatile int8_t x1900 = 10;
	volatile int32_t t62 = 1;

	t62 = (((x1897%x1898)<x1899)<<x1900);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x1961 = -1;
	int64_t x1962 = INT64_MAX;
	int64_t x1963 = INT64_MIN;
	uint16_t x1964 = 14U;
	volatile int32_t t63 = -652;

	t63 = (((x1961%x1962)<x1963)<<x1964);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2013 = UINT64_MAX;
	int64_t x2014 = INT64_MAX;
	int8_t x2016 = 1;
	int32_t t64 = -5762629;

	t64 = (((x2013%x2014)<x2015)<<x2016);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2070 = -199667879246359776LL;
	int64_t x2071 = 430330035721024901LL;
	int32_t t65 = 658518;

	t65 = (((x2069%x2070)<x2071)<<x2072);

	if (t65 != 33554432) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2133 = INT32_MIN;
	static int32_t x2134 = 72498615;
	volatile int8_t x2135 = -1;
	uint8_t x2136 = 0U;
	int32_t t66 = 59423013;

	t66 = (((x2133%x2134)<x2135)<<x2136);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2193 = INT32_MIN;
	uint64_t x2194 = 361880407395835LLU;
	volatile int64_t x2195 = INT64_MAX;
	volatile int32_t t67 = 0;

	t67 = (((x2193%x2194)<x2195)<<x2196);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x2209 = INT16_MAX;
	int32_t x2210 = -121854348;
	volatile int8_t x2211 = INT8_MIN;
	uint16_t x2212 = 8U;
	int32_t t68 = 15;

	t68 = (((x2209%x2210)<x2211)<<x2212);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2273 = INT64_MAX;
	uint8_t x2274 = 2U;
	int32_t x2275 = -349;
	int32_t t69 = -28573;

	t69 = (((x2273%x2274)<x2275)<<x2276);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2285 = 13022U;
	int64_t x2286 = -1642057653732286LL;
	int64_t x2287 = INT64_MAX;
	int32_t t70 = -171;

	t70 = (((x2285%x2286)<x2287)<<x2288);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2314 = INT16_MIN;
	static uint8_t x2315 = UINT8_MAX;
	volatile int32_t t71 = 0;

	t71 = (((x2313%x2314)<x2315)<<x2316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2322 = INT32_MIN;
	int16_t x2323 = -8;
	int32_t t72 = 0;

	t72 = (((x2321%x2322)<x2323)<<x2324);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2337 = INT8_MIN;
	int64_t x2338 = INT64_MIN;
	static uint8_t x2339 = 46U;
	uint8_t x2340 = 3U;
	volatile int32_t t73 = -7;

	t73 = (((x2337%x2338)<x2339)<<x2340);

	if (t73 != 8) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2341 = 36;
	static int64_t x2343 = -1LL;
	int32_t x2344 = 7;
	int32_t t74 = 3807;

	t74 = (((x2341%x2342)<x2343)<<x2344);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2347 = 575336201;
	volatile uint8_t x2348 = 3U;
	static volatile int32_t t75 = 1549;

	t75 = (((x2345%x2346)<x2347)<<x2348);

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2357 = -1;
	volatile int32_t x2358 = INT32_MIN;
	static volatile int32_t x2359 = -1;
	uint16_t x2360 = 10U;
	volatile int32_t t76 = -4428365;

	t76 = (((x2357%x2358)<x2359)<<x2360);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2378 = -5564575LL;
	volatile int8_t x2380 = 3;
	int32_t t77 = 3;

	t77 = (((x2377%x2378)<x2379)<<x2380);

	if (t77 != 8) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2410 = -1LL;
	static volatile uint64_t x2411 = 2183006857601LLU;
	static int8_t x2412 = 3;
	int32_t t78 = -3463;

	t78 = (((x2409%x2410)<x2411)<<x2412);

	if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2421 = INT32_MIN;
	int8_t x2422 = INT8_MAX;
	static int64_t x2423 = INT64_MIN;
	static int32_t t79 = 58047131;

	t79 = (((x2421%x2422)<x2423)<<x2424);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2437 = INT32_MAX;
	int32_t x2438 = -1;
	int8_t x2439 = INT8_MIN;

	t80 = (((x2437%x2438)<x2439)<<x2440);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2525 = 1;
	volatile int16_t x2526 = INT16_MIN;
	static uint8_t x2527 = 8U;
	static volatile int16_t x2528 = 21;
	int32_t t81 = 40683;

	t81 = (((x2525%x2526)<x2527)<<x2528);

	if (t81 != 2097152) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x2541 = INT64_MAX;
	uint8_t x2542 = 3U;
	volatile int16_t x2543 = INT16_MAX;
	uint16_t x2544 = 9U;
	static volatile int32_t t82 = 1027867;

	t82 = (((x2541%x2542)<x2543)<<x2544);

	if (t82 != 512) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2575 = INT8_MIN;
	int8_t x2576 = 1;
	static int32_t t83 = 149030812;

	t83 = (((x2573%x2574)<x2575)<<x2576);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x2618 = -1;
	volatile int16_t x2619 = INT16_MIN;
	static uint16_t x2620 = 12U;
	int32_t t84 = -1977752;

	t84 = (((x2617%x2618)<x2619)<<x2620);

	if (t84 != 4096) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2650 = 762096359U;
	int16_t x2651 = 4338;
	static volatile uint8_t x2652 = 4U;
	volatile int32_t t85 = 94389541;

	t85 = (((x2649%x2650)<x2651)<<x2652);

	if (t85 != 16) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x2669 = INT32_MIN;
	int16_t x2670 = INT16_MIN;
	static int32_t x2671 = 367890404;
	uint16_t x2672 = 5U;
	int32_t t86 = 16219530;

	t86 = (((x2669%x2670)<x2671)<<x2672);

	if (t86 != 32) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x2686 = INT32_MAX;
	uint32_t x2687 = UINT32_MAX;
	static volatile uint8_t x2688 = 0U;
	int32_t t87 = 222282977;

	t87 = (((x2685%x2686)<x2687)<<x2688);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2709 = 0U;
	int32_t x2710 = -159;
	int8_t x2711 = 1;
	uint16_t x2712 = 0U;
	static volatile int32_t t88 = 1635529;

	t88 = (((x2709%x2710)<x2711)<<x2712);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x2733 = UINT16_MAX;
	uint64_t x2734 = 31LLU;
	volatile int64_t x2735 = INT64_MIN;
	static uint16_t x2736 = 10U;

	t89 = (((x2733%x2734)<x2735)<<x2736);

	if (t89 != 1024) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2809 = 0U;
	int16_t x2810 = -1;
	static uint16_t x2811 = 0U;
	volatile uint8_t x2812 = 0U;
	static int32_t t90 = 105;

	t90 = (((x2809%x2810)<x2811)<<x2812);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x2877 = 5U;
	uint8_t x2878 = UINT8_MAX;
	int32_t x2879 = -207;

	t91 = (((x2877%x2878)<x2879)<<x2880);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x2893 = INT64_MIN;
	static volatile uint64_t x2894 = 324584744340982LLU;
	uint16_t x2896 = 7U;
	int32_t t92 = -1;

	t92 = (((x2893%x2894)<x2895)<<x2896);

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2918 = 2U;
	int8_t x2919 = -1;
	uint16_t x2920 = 14U;
	volatile int32_t t93 = 119;

	t93 = (((x2917%x2918)<x2919)<<x2920);

	if (t93 != 16384) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x2993 = 21U;
	int32_t x2994 = INT32_MAX;
	int8_t x2995 = INT8_MIN;
	volatile int8_t x2996 = 1;

	t94 = (((x2993%x2994)<x2995)<<x2996);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x2997 = UINT16_MAX;
	int8_t x2998 = 1;
	uint64_t x2999 = 8836266703730LLU;
	uint8_t x3000 = 1U;
	volatile int32_t t95 = -59;

	t95 = (((x2997%x2998)<x2999)<<x3000);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x3021 = INT8_MIN;
	int16_t x3022 = -7064;
	volatile int64_t x3023 = INT64_MAX;
	uint8_t x3024 = 3U;
	static volatile int32_t t96 = 677949014;

	t96 = (((x3021%x3022)<x3023)<<x3024);

	if (t96 != 8) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x3029 = INT8_MAX;
	static int16_t x3031 = -13106;
	uint16_t x3032 = 0U;

	t97 = (((x3029%x3030)<x3031)<<x3032);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x3085 = INT32_MIN;
	static int32_t x3086 = INT32_MIN;
	static int8_t x3087 = INT8_MAX;
	volatile uint16_t x3088 = 6U;
	volatile int32_t t98 = -42;

	t98 = (((x3085%x3086)<x3087)<<x3088);

	if (t98 != 64) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x3125 = INT64_MIN;
	volatile int8_t x3126 = INT8_MAX;
	int16_t x3128 = 0;
	volatile int32_t t99 = -707717291;

	t99 = (((x3125%x3126)<x3127)<<x3128);

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

