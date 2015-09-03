#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x56 = 4;
static volatile int64_t t1 = 1LL;
uint32_t x67 = 2007U;
int32_t x119 = INT32_MIN;
uint16_t x316 = 0U;
uint16_t x353 = 6847U;
uint16_t x355 = 0U;
static int64_t x417 = -31673275091694037LL;
static uint64_t x445 = 7088648794591045669LLU;
uint8_t x454 = UINT8_MAX;
static uint8_t x487 = 13U;
int64_t t12 = 348646265831344LL;
int64_t t14 = -29507616LL;
static volatile int16_t x645 = INT16_MIN;
static int16_t x676 = 17;
volatile int64_t t20 = 482427125218750148LL;
uint64_t x773 = 237941875518780LLU;
volatile uint64_t t25 = 8103232LLU;
int64_t x950 = -1LL;
int8_t x995 = -1;
static uint32_t x1114 = 10653420U;
volatile int64_t t34 = -15847822417815LL;
int8_t x1144 = 33;
uint64_t t37 = 664643107LLU;
int16_t x1185 = 2957;
static uint64_t t38 = 719167234LLU;
uint16_t x1196 = 5U;
int64_t t40 = -180894520362131608LL;
int64_t x1337 = -1301997472476LL;
uint32_t x1340 = 0U;
int32_t x1350 = 108172;
int32_t x1351 = 64540735;
int8_t x1433 = INT8_MAX;
static int32_t x1505 = 6;
int64_t x1533 = INT64_MIN;
int8_t x1592 = 1;
volatile uint64_t t48 = 41191559739657676LLU;
volatile uint64_t t49 = 253143053579364020LLU;
int8_t x1605 = -7;
int32_t x1617 = -1;
static uint32_t x1619 = UINT32_MAX;
static uint16_t x1633 = 3U;
volatile uint64_t x1638 = 69296LLU;
int32_t x1661 = INT32_MIN;
static int32_t t55 = -65637;
volatile uint32_t x1689 = 8250450U;
int8_t x1713 = -1;
uint64_t t58 = 5LLU;
uint8_t x1813 = UINT8_MAX;
int8_t x1840 = 2;
uint8_t x1844 = 18U;
volatile int32_t t62 = -61450289;
uint16_t x1847 = 15212U;
static uint32_t x1848 = 4U;
int64_t x1985 = INT64_MIN;
volatile int8_t x2029 = -6;
static int16_t x2051 = -100;
uint8_t x2052 = 34U;
uint8_t x2116 = 28U;
uint32_t x2148 = 14U;
volatile int64_t t75 = 28646001044418148LL;
uint8_t x2169 = 7U;
uint64_t x2226 = UINT64_MAX;
uint32_t x2228 = 1U;
static volatile int8_t x2373 = INT8_MAX;
uint16_t x2478 = UINT16_MAX;
uint16_t x2485 = 214U;
int8_t x2488 = 35;
int16_t x2565 = -5;
static volatile uint64_t t88 = 12111LLU;
volatile uint16_t x2577 = 7505U;
static int32_t x2578 = INT32_MIN;
static volatile uint64_t x2602 = 28670LLU;
uint32_t x2649 = 1U;
int64_t x2650 = -1LL;
volatile uint64_t t92 = 922715672951716212LLU;
static int64_t x2723 = INT64_MAX;
uint8_t x2724 = 16U;
static int64_t x2733 = -188221LL;
volatile int32_t x2734 = 1159502;
int16_t x2778 = 2;
int32_t x2802 = INT32_MIN;
uint16_t x2856 = 0U;
volatile int64_t x2886 = INT64_MIN;
volatile int64_t t99 = 33564176883246LL;


void f0(void) {
	int64_t x49 = INT64_MAX;
	uint64_t x50 = 5419LLU;
	static int16_t x51 = INT16_MIN;
	uint8_t x52 = 33U;
	static uint64_t t0 = 11119044163145LLU;

	t0 = (((x49&x50)&x51)>>x52);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x53 = 1U;
	int64_t x54 = INT64_MIN;
	volatile int16_t x55 = INT16_MAX;

	t1 = (((x53&x54)&x55)>>x56);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x65 = UINT32_MAX;
	static int8_t x66 = INT8_MIN;
	volatile uint32_t x68 = 0U;
	volatile uint32_t t2 = 234U;

	t2 = (((x65&x66)&x67)>>x68);

	if (t2 != 1920U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x109 = INT16_MIN;
	int8_t x110 = INT8_MIN;
	int64_t x111 = 517462889907629372LL;
	uint16_t x112 = 0U;
	static int64_t t3 = -42LL;

	t3 = (((x109&x110)&x111)>>x112);

	if (t3 != 517462889907617792LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x117 = 11160167U;
	uint64_t x118 = 329558678452LLU;
	volatile uint8_t x120 = 7U;
	volatile uint64_t t4 = 73673665LLU;

	t4 = (((x117&x118)&x119)>>x120);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x285 = INT32_MIN;
	int8_t x286 = 0;
	uint8_t x287 = UINT8_MAX;
	int8_t x288 = 0;
	int32_t t5 = -9;

	t5 = (((x285&x286)&x287)>>x288);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x313 = 518429LLU;
	int8_t x314 = 28;
	int64_t x315 = INT64_MIN;
	uint64_t t6 = 4557896886LLU;

	t6 = (((x313&x314)&x315)>>x316);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x354 = 292750U;
	static uint8_t x356 = 3U;
	static volatile uint32_t t7 = 1U;

	t7 = (((x353&x354)&x355)>>x356);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x405 = -1;
	int32_t x406 = INT32_MIN;
	volatile uint8_t x407 = UINT8_MAX;
	static uint64_t x408 = 18LLU;
	int32_t t8 = -51254340;

	t8 = (((x405&x406)&x407)>>x408);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x418 = 3U;
	static volatile int8_t x419 = 1;
	uint16_t x420 = 21U;
	static int64_t t9 = -861581863769824LL;

	t9 = (((x417&x418)&x419)>>x420);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x446 = 46U;
	volatile uint16_t x447 = 3U;
	int8_t x448 = 3;
	uint64_t t10 = 7698862296141393572LLU;

	t10 = (((x445&x446)&x447)>>x448);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x453 = -24395760509866053LL;
	int16_t x455 = 6;
	int16_t x456 = 0;
	static int64_t t11 = 1200838652371840577LL;

	t11 = (((x453&x454)&x455)>>x456);

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x485 = -9750;
	static int64_t x486 = INT64_MIN;
	uint32_t x488 = 0U;

	t12 = (((x485&x486)&x487)>>x488);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x517 = -1125434LL;
	int16_t x518 = INT16_MIN;
	static uint32_t x519 = 3U;
	int16_t x520 = 3;
	int64_t t13 = -6727659466451166LL;

	t13 = (((x517&x518)&x519)>>x520);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x545 = INT64_MIN;
	int8_t x546 = INT8_MIN;
	int16_t x547 = INT16_MAX;
	int8_t x548 = 1;

	t14 = (((x545&x546)&x547)>>x548);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x553 = INT64_MIN;
	volatile uint32_t x554 = UINT32_MAX;
	volatile int16_t x555 = INT16_MAX;
	uint8_t x556 = 2U;
	int64_t t15 = -45889LL;

	t15 = (((x553&x554)&x555)>>x556);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x593 = INT32_MIN;
	static int8_t x594 = INT8_MAX;
	uint8_t x595 = 0U;
	int8_t x596 = 4;
	volatile int32_t t16 = -73;

	t16 = (((x593&x594)&x595)>>x596);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x617 = INT8_MAX;
	volatile int8_t x618 = -7;
	int64_t x619 = -5964LL;
	int16_t x620 = 30;
	int64_t t17 = -61LL;

	t17 = (((x617&x618)&x619)>>x620);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x646 = INT64_MAX;
	int8_t x647 = INT8_MAX;
	uint8_t x648 = 16U;
	int64_t t18 = 45917564532565LL;

	t18 = (((x645&x646)&x647)>>x648);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x673 = INT8_MIN;
	int32_t x674 = INT32_MIN;
	int8_t x675 = INT8_MAX;
	volatile int32_t t19 = 5978;

	t19 = (((x673&x674)&x675)>>x676);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x693 = -203153960299LL;
	int32_t x694 = INT32_MAX;
	uint16_t x695 = UINT16_MAX;
	int8_t x696 = 3;

	t20 = (((x693&x694)&x695)>>x696);

	if (t20 != 4690LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x774 = INT16_MIN;
	uint32_t x775 = UINT32_MAX;
	static uint32_t x776 = 30U;
	volatile uint64_t t21 = 139241325602244222LLU;

	t21 = (((x773&x774)&x775)>>x776);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x797 = UINT16_MAX;
	uint64_t x798 = 14621LLU;
	int16_t x799 = -26;
	uint32_t x800 = 29U;
	uint64_t t22 = 49004LLU;

	t22 = (((x797&x798)&x799)>>x800);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x817 = -1LL;
	int64_t x818 = INT64_MAX;
	int8_t x819 = INT8_MIN;
	volatile int8_t x820 = 18;
	volatile int64_t t23 = -7093381992LL;

	t23 = (((x817&x818)&x819)>>x820);

	if (t23 != 35184372088831LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x877 = 3;
	int32_t x878 = 1819656;
	int32_t x879 = INT32_MIN;
	uint8_t x880 = 12U;
	volatile int32_t t24 = -1995781;

	t24 = (((x877&x878)&x879)>>x880);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x917 = 24;
	int32_t x918 = INT32_MAX;
	uint64_t x919 = 800LLU;
	uint8_t x920 = 25U;

	t25 = (((x917&x918)&x919)>>x920);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x949 = -24;
	int16_t x951 = INT16_MAX;
	volatile uint16_t x952 = 5U;
	int64_t t26 = 33LL;

	t26 = (((x949&x950)&x951)>>x952);

	if (t26 != 1023LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x957 = INT64_MIN;
	volatile uint64_t x958 = UINT64_MAX;
	static uint32_t x959 = 13486462U;
	static uint8_t x960 = 38U;
	uint64_t t27 = 360121LLU;

	t27 = (((x957&x958)&x959)>>x960);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x981 = -3;
	static uint16_t x982 = 21U;
	uint8_t x983 = UINT8_MAX;
	uint32_t x984 = 0U;
	volatile int32_t t28 = -58;

	t28 = (((x981&x982)&x983)>>x984);

	if (t28 != 21) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x993 = INT64_MAX;
	uint64_t x994 = UINT64_MAX;
	uint16_t x996 = 3U;
	uint64_t t29 = 50424468LLU;

	t29 = (((x993&x994)&x995)>>x996);

	if (t29 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x997 = INT64_MIN;
	int64_t x998 = -601LL;
	uint16_t x999 = UINT16_MAX;
	int8_t x1000 = 0;
	int64_t t30 = -152893003LL;

	t30 = (((x997&x998)&x999)>>x1000);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1053 = UINT16_MAX;
	int32_t x1054 = INT32_MAX;
	int16_t x1055 = -1;
	static volatile int8_t x1056 = 12;
	volatile int32_t t31 = -1192;

	t31 = (((x1053&x1054)&x1055)>>x1056);

	if (t31 != 15) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1057 = -15401;
	static uint16_t x1058 = 509U;
	int32_t x1059 = 0;
	uint16_t x1060 = 0U;
	int32_t t32 = -224954;

	t32 = (((x1057&x1058)&x1059)>>x1060);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1105 = INT32_MIN;
	volatile uint64_t x1106 = 3478622876648LLU;
	static volatile int16_t x1107 = INT16_MIN;
	static int8_t x1108 = 0;
	uint64_t t33 = 6813744038991148LLU;

	t33 = (((x1105&x1106)&x1107)>>x1108);

	if (t33 != 3476776026112LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1113 = -1;
	int64_t x1115 = INT64_MIN;
	static uint8_t x1116 = 63U;

	t34 = (((x1113&x1114)&x1115)>>x1116);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1133 = -3467;
	int16_t x1134 = INT16_MIN;
	int16_t x1135 = 5;
	uint32_t x1136 = 3U;
	volatile int32_t t35 = 107203228;

	t35 = (((x1133&x1134)&x1135)>>x1136);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1141 = 0U;
	int8_t x1142 = INT8_MAX;
	int64_t x1143 = INT64_MIN;
	int64_t t36 = 5349LL;

	t36 = (((x1141&x1142)&x1143)>>x1144);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1149 = INT16_MIN;
	static uint64_t x1150 = 187207568367LLU;
	int32_t x1151 = -1;
	int8_t x1152 = 9;

	t37 = (((x1149&x1150)&x1151)>>x1152);

	if (t37 != 365639744LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x1186 = INT16_MAX;
	uint64_t x1187 = 1LLU;
	uint8_t x1188 = 7U;

	t38 = (((x1185&x1186)&x1187)>>x1188);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1193 = UINT32_MAX;
	static uint8_t x1194 = 14U;
	int32_t x1195 = INT32_MIN;
	volatile uint32_t t39 = 1767493U;

	t39 = (((x1193&x1194)&x1195)>>x1196);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1249 = 548754674979LL;
	static int8_t x1250 = INT8_MIN;
	uint32_t x1251 = 176424240U;
	volatile uint16_t x1252 = 13U;

	t40 = (((x1249&x1250)&x1251)>>x1252);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1338 = -1;
	static int8_t x1339 = INT8_MAX;
	volatile int64_t t41 = -1886670LL;

	t41 = (((x1337&x1338)&x1339)>>x1340);

	if (t41 != 36LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1349 = 1;
	uint32_t x1352 = 19U;
	volatile int32_t t42 = 15520;

	t42 = (((x1349&x1350)&x1351)>>x1352);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1369 = -86LL;
	volatile int8_t x1370 = INT8_MAX;
	uint64_t x1371 = 8310576LLU;
	uint8_t x1372 = 8U;
	volatile uint64_t t43 = 83412527498669LLU;

	t43 = (((x1369&x1370)&x1371)>>x1372);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x1373 = 42U;
	uint8_t x1374 = 5U;
	uint8_t x1375 = 1U;
	static uint32_t x1376 = 3U;
	int32_t t44 = 1;

	t44 = (((x1373&x1374)&x1375)>>x1376);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1434 = 3;
	volatile uint32_t x1435 = 1913230U;
	volatile uint8_t x1436 = 6U;
	volatile uint32_t t45 = 22501374U;

	t45 = (((x1433&x1434)&x1435)>>x1436);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1506 = 46;
	int8_t x1507 = 26;
	volatile int8_t x1508 = 2;
	static volatile int32_t t46 = -5;

	t46 = (((x1505&x1506)&x1507)>>x1508);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1534 = -1;
	int8_t x1535 = INT8_MAX;
	int64_t x1536 = 7LL;
	volatile int64_t t47 = 6869177252071199LL;

	t47 = (((x1533&x1534)&x1535)>>x1536);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1589 = INT64_MAX;
	volatile uint64_t x1590 = 15895010281200LLU;
	static volatile int8_t x1591 = INT8_MAX;

	t48 = (((x1589&x1590)&x1591)>>x1592);

	if (t48 != 56LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x1597 = UINT32_MAX;
	uint64_t x1598 = 276340175284758002LLU;
	volatile int16_t x1599 = INT16_MIN;
	static uint32_t x1600 = 0U;

	t49 = (((x1597&x1598)&x1599)>>x1600);

	if (t49 != 3775135744LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1606 = -1;
	uint16_t x1607 = UINT16_MAX;
	uint8_t x1608 = 25U;
	int32_t t50 = -7808390;

	t50 = (((x1605&x1606)&x1607)>>x1608);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1618 = 7U;
	int8_t x1620 = 0;
	uint32_t t51 = 192304U;

	t51 = (((x1617&x1618)&x1619)>>x1620);

	if (t51 != 7U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1634 = INT8_MIN;
	int32_t x1635 = INT32_MIN;
	int16_t x1636 = 1;
	int32_t t52 = -16;

	t52 = (((x1633&x1634)&x1635)>>x1636);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1637 = UINT8_MAX;
	volatile uint32_t x1639 = 1053222997U;
	static uint8_t x1640 = 35U;
	volatile uint64_t t53 = 267283875LLU;

	t53 = (((x1637&x1638)&x1639)>>x1640);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x1653 = -1;
	static volatile uint8_t x1654 = 44U;
	static int32_t x1655 = 41441;
	uint64_t x1656 = 3LLU;
	static int32_t t54 = -703871741;

	t54 = (((x1653&x1654)&x1655)>>x1656);

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x1662 = 1U;
	uint16_t x1663 = 1807U;
	volatile uint8_t x1664 = 12U;

	t55 = (((x1661&x1662)&x1663)>>x1664);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1690 = INT16_MIN;
	int16_t x1691 = -12;
	volatile int8_t x1692 = 0;
	volatile uint32_t t56 = 2U;

	t56 = (((x1689&x1690)&x1691)>>x1692);

	if (t56 != 8224768U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1714 = INT16_MIN;
	int64_t x1715 = 1345802680220192LL;
	static int16_t x1716 = 1;
	static int64_t t57 = -58943926816808736LL;

	t57 = (((x1713&x1714)&x1715)>>x1716);

	if (t57 != 672901340102656LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x1793 = UINT64_MAX;
	uint16_t x1794 = 43U;
	uint16_t x1795 = 4779U;
	int8_t x1796 = 0;

	t58 = (((x1793&x1794)&x1795)>>x1796);

	if (t58 != 43LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1797 = INT8_MAX;
	uint32_t x1798 = 11U;
	volatile int8_t x1799 = -1;
	int8_t x1800 = 6;
	volatile uint32_t t59 = 16U;

	t59 = (((x1797&x1798)&x1799)>>x1800);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1814 = 2;
	static volatile uint64_t x1815 = 105220568692382506LLU;
	uint64_t x1816 = 10LLU;
	uint64_t t60 = 2LLU;

	t60 = (((x1813&x1814)&x1815)>>x1816);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1837 = INT64_MIN;
	volatile uint32_t x1838 = UINT32_MAX;
	uint16_t x1839 = 176U;
	volatile int64_t t61 = 7021658LL;

	t61 = (((x1837&x1838)&x1839)>>x1840);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1841 = 0;
	volatile int32_t x1842 = INT32_MIN;
	int16_t x1843 = INT16_MAX;

	t62 = (((x1841&x1842)&x1843)>>x1844);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1845 = -1LL;
	int64_t x1846 = INT64_MIN;
	int64_t t63 = -41603112783490LL;

	t63 = (((x1845&x1846)&x1847)>>x1848);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1885 = INT64_MIN;
	int8_t x1886 = -11;
	uint64_t x1887 = 326881886393857830LLU;
	uint8_t x1888 = 1U;
	static volatile uint64_t t64 = 102162682857759LLU;

	t64 = (((x1885&x1886)&x1887)>>x1888);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1933 = 246;
	static uint64_t x1934 = 892373437265LLU;
	uint32_t x1935 = 2469163U;
	volatile int8_t x1936 = 12;
	volatile uint64_t t65 = 1324907514695437732LLU;

	t65 = (((x1933&x1934)&x1935)>>x1936);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1937 = UINT32_MAX;
	int32_t x1938 = INT32_MIN;
	int16_t x1939 = INT16_MIN;
	uint8_t x1940 = 14U;
	volatile uint32_t t66 = 6U;

	t66 = (((x1937&x1938)&x1939)>>x1940);

	if (t66 != 131072U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x1986 = 1420648;
	int64_t x1987 = INT64_MIN;
	uint8_t x1988 = 3U;
	int64_t t67 = -337LL;

	t67 = (((x1985&x1986)&x1987)>>x1988);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2005 = UINT8_MAX;
	int32_t x2006 = INT32_MIN;
	uint64_t x2007 = 1565511LLU;
	static volatile int8_t x2008 = 13;
	volatile uint64_t t68 = 119829960608800628LLU;

	t68 = (((x2005&x2006)&x2007)>>x2008);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2030 = INT16_MIN;
	static uint32_t x2031 = 297388775U;
	uint32_t x2032 = 6U;
	uint32_t t69 = 22271872U;

	t69 = (((x2029&x2030)&x2031)>>x2032);

	if (t69 != 4646400U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2033 = INT8_MAX;
	volatile int32_t x2034 = INT32_MIN;
	int64_t x2035 = -1LL;
	int16_t x2036 = 0;
	static int64_t t70 = 8285301LL;

	t70 = (((x2033&x2034)&x2035)>>x2036);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x2049 = 18428533;
	int64_t x2050 = 35045288LL;
	int64_t t71 = -3498794963197LL;

	t71 = (((x2049&x2050)&x2051)>>x2052);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2065 = INT64_MAX;
	int16_t x2066 = 7732;
	uint32_t x2067 = UINT32_MAX;
	static uint16_t x2068 = 23U;
	int64_t t72 = 13495335LL;

	t72 = (((x2065&x2066)&x2067)>>x2068);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2113 = 2LL;
	uint16_t x2114 = 6U;
	int64_t x2115 = 200LL;
	volatile int64_t t73 = -3462035181980904LL;

	t73 = (((x2113&x2114)&x2115)>>x2116);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2117 = UINT64_MAX;
	int16_t x2118 = INT16_MIN;
	uint16_t x2119 = UINT16_MAX;
	uint8_t x2120 = 28U;
	uint64_t t74 = 50764LLU;

	t74 = (((x2117&x2118)&x2119)>>x2120);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2145 = -2714LL;
	int64_t x2146 = INT64_MIN;
	static int16_t x2147 = 1;

	t75 = (((x2145&x2146)&x2147)>>x2148);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2170 = 30;
	int64_t x2171 = 1426LL;
	int16_t x2172 = 7;
	int64_t t76 = -1LL;

	t76 = (((x2169&x2170)&x2171)>>x2172);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x2225 = INT16_MIN;
	volatile int32_t x2227 = INT32_MAX;
	uint64_t t77 = 47813LLU;

	t77 = (((x2225&x2226)&x2227)>>x2228);

	if (t77 != 1073725440LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2229 = -1;
	static int32_t x2230 = -1;
	int16_t x2231 = INT16_MAX;
	uint8_t x2232 = 16U;
	static volatile int32_t t78 = -5288734;

	t78 = (((x2229&x2230)&x2231)>>x2232);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2317 = INT32_MIN;
	uint16_t x2318 = UINT16_MAX;
	int64_t x2319 = INT64_MIN;
	static volatile uint32_t x2320 = 2U;
	int64_t t79 = -1565531647LL;

	t79 = (((x2317&x2318)&x2319)>>x2320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2374 = INT64_MIN;
	int16_t x2375 = INT16_MIN;
	uint16_t x2376 = 26U;
	volatile int64_t t80 = -3203314484858LL;

	t80 = (((x2373&x2374)&x2375)>>x2376);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2445 = INT64_MAX;
	int32_t x2446 = INT32_MAX;
	static volatile uint8_t x2447 = 14U;
	static uint8_t x2448 = 2U;
	int64_t t81 = 150406LL;

	t81 = (((x2445&x2446)&x2447)>>x2448);

	if (t81 != 3LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2477 = 6941U;
	int32_t x2479 = INT32_MAX;
	volatile uint16_t x2480 = 3U;
	uint32_t t82 = 31U;

	t82 = (((x2477&x2478)&x2479)>>x2480);

	if (t82 != 867U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2481 = INT8_MIN;
	uint8_t x2482 = 1U;
	uint16_t x2483 = 3691U;
	static uint8_t x2484 = 1U;
	volatile int32_t t83 = -37238;

	t83 = (((x2481&x2482)&x2483)>>x2484);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x2486 = INT64_MIN;
	static uint16_t x2487 = UINT16_MAX;
	int64_t t84 = 2LL;

	t84 = (((x2485&x2486)&x2487)>>x2488);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2505 = INT32_MAX;
	int64_t x2506 = -13976335627LL;
	uint64_t x2507 = 14LLU;
	uint8_t x2508 = 3U;
	uint64_t t85 = 107433377LLU;

	t85 = (((x2505&x2506)&x2507)>>x2508);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x2529 = INT16_MIN;
	int32_t x2530 = 3;
	static volatile int32_t x2531 = INT32_MIN;
	int16_t x2532 = 4;
	volatile int32_t t86 = -17;

	t86 = (((x2529&x2530)&x2531)>>x2532);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2566 = 1U;
	int8_t x2567 = INT8_MIN;
	uint8_t x2568 = 6U;
	static volatile int32_t t87 = 1525772;

	t87 = (((x2565&x2566)&x2567)>>x2568);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x2573 = -2LL;
	uint64_t x2574 = UINT64_MAX;
	int64_t x2575 = INT64_MIN;
	volatile uint16_t x2576 = 14U;

	t88 = (((x2573&x2574)&x2575)>>x2576);

	if (t88 != 562949953421312LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2579 = -3;
	uint8_t x2580 = 28U;
	volatile int32_t t89 = -205710070;

	t89 = (((x2577&x2578)&x2579)>>x2580);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2589 = UINT16_MAX;
	int32_t x2590 = 40233;
	uint8_t x2591 = 61U;
	int8_t x2592 = 0;
	int32_t t90 = -6699;

	t90 = (((x2589&x2590)&x2591)>>x2592);

	if (t90 != 41) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2601 = -1;
	int8_t x2603 = -6;
	volatile int8_t x2604 = 0;
	uint64_t t91 = 1090LLU;

	t91 = (((x2601&x2602)&x2603)>>x2604);

	if (t91 != 28666LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x2651 = UINT64_MAX;
	uint8_t x2652 = 1U;

	t92 = (((x2649&x2650)&x2651)>>x2652);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x2721 = -1298824;
	uint16_t x2722 = 196U;
	static int64_t t93 = -151LL;

	t93 = (((x2721&x2722)&x2723)>>x2724);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x2735 = INT32_MAX;
	int8_t x2736 = 15;
	volatile int64_t t94 = -116379310059191871LL;

	t94 = (((x2733&x2734)&x2735)>>x2736);

	if (t94 != 34LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2765 = INT32_MIN;
	static uint32_t x2766 = 49759898U;
	volatile int32_t x2767 = INT32_MAX;
	uint8_t x2768 = 12U;
	uint32_t t95 = 3U;

	t95 = (((x2765&x2766)&x2767)>>x2768);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2777 = INT64_MIN;
	static int16_t x2779 = -1;
	uint8_t x2780 = 52U;
	volatile int64_t t96 = -148LL;

	t96 = (((x2777&x2778)&x2779)>>x2780);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x2801 = INT16_MAX;
	int16_t x2803 = INT16_MAX;
	uint16_t x2804 = 9U;
	volatile int32_t t97 = -57073;

	t97 = (((x2801&x2802)&x2803)>>x2804);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x2853 = 102U;
	int32_t x2854 = -6;
	static uint32_t x2855 = 968815U;
	volatile uint32_t t98 = 507U;

	t98 = (((x2853&x2854)&x2855)>>x2856);

	if (t98 != 98U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x2885 = 41U;
	int16_t x2887 = -9;
	volatile uint8_t x2888 = 40U;

	t99 = (((x2885&x2886)&x2887)>>x2888);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

