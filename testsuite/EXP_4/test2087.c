#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -2;
volatile uint64_t x20 = 1545361578776643LLU;
static volatile uint8_t x46 = 1U;
uint8_t x48 = UINT8_MAX;
int16_t x79 = INT16_MAX;
int8_t x114 = 1;
static uint16_t x313 = UINT16_MAX;
uint32_t x315 = UINT32_MAX;
uint64_t x316 = UINT64_MAX;
int32_t t10 = 127305368;
uint32_t x320 = UINT32_MAX;
int32_t t11 = 59;
uint16_t x350 = 6U;
uint64_t t14 = UINT64_MAX;
volatile uint64_t t15 = 125750LLU;
volatile uint8_t x441 = UINT8_MAX;
volatile int8_t x444 = INT8_MIN;
uint64_t x456 = UINT64_MAX;
int64_t t18 = INT64_MAX;
uint64_t t19 = 27021986152040809LLU;
uint8_t x666 = UINT8_MAX;
volatile int32_t t20 = -69838;
uint64_t x729 = 1818338951416533560LLU;
int64_t x732 = INT64_MIN;
static volatile uint64_t t22 = 1743192356103830LLU;
int16_t x784 = -1;
volatile int32_t t24 = 524379;
static int32_t t26 = -24359346;
int8_t x895 = -1;
uint8_t x904 = UINT8_MAX;
static int8_t x993 = INT8_MAX;
volatile int32_t x1073 = INT32_MAX;
uint8_t x1126 = 10U;
volatile int64_t x1127 = INT64_MIN;
int32_t t33 = 24;
int8_t x1153 = 18;
int32_t x1154 = INT32_MAX;
volatile int32_t t34 = 17260479;
uint8_t x1179 = 1U;
volatile int64_t x1180 = INT64_MIN;
int32_t t35 = -2;
static int8_t x1206 = 1;
int16_t x1234 = 1;
int16_t x1303 = INT16_MIN;
volatile int32_t t39 = 32235;
int64_t x1305 = 2LL;
int64_t t41 = -3276145595572LL;
uint16_t x1454 = 14U;
volatile uint32_t t42 = 221364U;
volatile int64_t x1552 = INT64_MAX;
int16_t x1586 = 1;
static uint64_t x1602 = UINT64_MAX;
volatile uint8_t x1650 = 7U;
static uint8_t x1652 = 11U;
static uint8_t x1682 = 2U;
volatile int64_t x1775 = INT64_MAX;
int16_t x1813 = INT16_MAX;
volatile int32_t x1922 = INT32_MAX;
int32_t t59 = 19;
static uint8_t x1946 = 12U;
volatile uint8_t x1947 = 8U;
volatile uint16_t x1948 = 5U;
volatile uint64_t t62 = 29129LLU;
uint8_t x2041 = 48U;
volatile int8_t x2049 = 43;
static int16_t x2089 = 1762;
uint8_t x2105 = UINT8_MAX;
int32_t x2141 = 50;
int8_t x2143 = -1;
uint8_t x2182 = 24U;
int8_t x2183 = 0;
uint32_t t69 = 60U;
static uint8_t x2255 = 2U;
uint32_t x2272 = 301959U;
uint32_t t71 = 5653U;
volatile int64_t x2329 = 9LL;
uint8_t x2345 = 8U;
uint64_t x2346 = 343288543613626080LLU;
int64_t x2348 = 57LL;
int64_t x2403 = INT64_MAX;
int64_t x2404 = -2858129069LL;
uint16_t x2417 = UINT16_MAX;
int32_t t76 = -55131;
static volatile int16_t x2504 = INT16_MIN;
int64_t x2517 = 299310929395LL;
static volatile int16_t x2519 = INT16_MIN;
int32_t x2535 = INT32_MAX;
int32_t x2536 = INT32_MIN;
volatile uint32_t x2537 = 8673U;
uint8_t x2554 = 1U;
int16_t x2611 = 1;
static volatile uint64_t t83 = 121817819742589LLU;
int64_t x2635 = INT64_MIN;
volatile int16_t x2636 = 1;
volatile int32_t t86 = 38199280;
uint16_t x2732 = 657U;
int32_t t87 = -10698892;
volatile uint8_t x2768 = 1U;
static int32_t t89 = 176867;
static uint32_t x2818 = UINT32_MAX;
static int64_t x2820 = -1LL;
int8_t x2833 = INT8_MAX;
int32_t x2851 = -1;
static volatile int32_t t93 = 31;
int32_t x2914 = INT32_MIN;
int32_t x2916 = -1;
int64_t x2919 = -1LL;
volatile int32_t t96 = 10;
static uint64_t x2971 = 61588391568821451LLU;
static uint32_t x2996 = UINT32_MAX;


void f0(void) {
	int16_t x1 = 1;
	volatile int64_t x2 = 6LL;
	int64_t x3 = INT64_MIN;
	int64_t x4 = -56761LL;

	t0 = (x1>>(x2%(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = UINT64_MAX;
	volatile uint8_t x18 = 3U;
	uint16_t x19 = 12U;
	uint64_t t1 = 445243407681274343LLU;

	t1 = (x17>>(x18%(x19^x20)));

	if (t1 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x45 = INT64_MAX;
	int8_t x47 = INT8_MAX;
	static volatile int64_t t2 = 1401845813276LL;

	t2 = (x45>>(x46%(x47^x48)));

	if (t2 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x77 = UINT64_MAX;
	uint16_t x78 = 0U;
	static int8_t x80 = -1;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x77>>(x78%(x79^x80)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x89 = INT8_MAX;
	static int8_t x90 = 3;
	volatile uint16_t x91 = 26U;
	int8_t x92 = -1;
	int32_t t4 = 38;

	t4 = (x89>>(x90%(x91^x92)));

	if (t4 != 15) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x101 = 124;
	volatile int16_t x102 = 1;
	static uint8_t x103 = UINT8_MAX;
	static uint16_t x104 = 132U;
	static int32_t t5 = 10;

	t5 = (x101>>(x102%(x103^x104)));

	if (t5 != 62) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x113 = 1LL;
	uint16_t x115 = UINT16_MAX;
	volatile int64_t x116 = INT64_MIN;
	volatile int64_t t6 = -4228157LL;

	t6 = (x113>>(x114%(x115^x116)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x137 = 722187283376LLU;
	int16_t x138 = INT16_MAX;
	static int8_t x139 = INT8_MIN;
	uint8_t x140 = 5U;
	uint64_t t7 = 155117LLU;

	t7 = (x137>>(x138%(x139^x140)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x177 = 3174040618LL;
	int64_t x178 = 3LL;
	static int8_t x179 = -1;
	volatile int16_t x180 = INT16_MIN;
	volatile int64_t t8 = 1LL;

	t8 = (x177>>(x178%(x179^x180)));

	if (t8 != 396755077LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x189 = UINT8_MAX;
	uint16_t x190 = 5U;
	int64_t x191 = -1LL;
	uint8_t x192 = 5U;
	volatile int32_t t9 = -17;

	t9 = (x189>>(x190%(x191^x192)));

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x314 = 29;

	t10 = (x313>>(x314%(x315^x316)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int8_t x318 = -1;
	uint8_t x319 = 2U;

	t11 = (x317>>(x318%(x319^x320)));

	if (t11 != 16383) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x345 = 82U;
	static int64_t x346 = INT64_MIN;
	uint16_t x347 = 63U;
	static int16_t x348 = -1;
	int32_t t12 = -514799;

	t12 = (x345>>(x346%(x347^x348)));

	if (t12 != 82) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x349 = INT8_MAX;
	uint8_t x351 = UINT8_MAX;
	static int32_t x352 = 277;
	int32_t t13 = 897762024;

	t13 = (x349>>(x350%(x351^x352)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x429 = UINT64_MAX;
	volatile uint32_t x430 = 8797122U;
	int32_t x431 = -2;
	static uint32_t x432 = UINT32_MAX;

	t14 = (x429>>(x430%(x431^x432)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x433 = 939221796665343LLU;
	volatile uint32_t x434 = 1U;
	uint64_t x435 = 256LLU;
	int64_t x436 = -1LL;

	t15 = (x433>>(x434%(x435^x436)));

	if (t15 != 469610898332671LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x442 = 0;
	static uint8_t x443 = UINT8_MAX;
	static volatile int32_t t16 = -118463;

	t16 = (x441>>(x442%(x443^x444)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x453 = 0U;
	int32_t x454 = INT32_MIN;
	int32_t x455 = INT32_MAX;
	volatile int32_t t17 = 551877;

	t17 = (x453>>(x454%(x455^x456)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x589 = INT64_MAX;
	static volatile int64_t x590 = INT64_MIN;
	int64_t x591 = INT64_MAX;
	static int8_t x592 = -1;

	t18 = (x589>>(x590%(x591^x592)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x653 = 43375139047918710LLU;
	volatile uint8_t x654 = 1U;
	uint64_t x655 = 69LLU;
	int16_t x656 = INT16_MAX;

	t19 = (x653>>(x654%(x655^x656)));

	if (t19 != 21687569523959355LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x665 = 0U;
	int8_t x667 = -34;
	uint64_t x668 = UINT64_MAX;

	t20 = (x665>>(x666%(x667^x668)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x730 = INT64_MIN;
	static volatile int64_t x731 = INT64_MAX;
	volatile uint64_t t21 = 3001849171263LLU;

	t21 = (x729>>(x730%(x731^x732)));

	if (t21 != 1818338951416533560LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x745 = 17584129193823LLU;
	volatile uint32_t x746 = UINT32_MAX;
	int8_t x747 = INT8_MAX;
	volatile uint16_t x748 = 10U;

	t22 = (x745>>(x746%(x747^x748)));

	if (t22 != 8384766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x781 = 0LL;
	uint32_t x782 = 1U;
	int64_t x783 = 2764367LL;
	static int64_t t23 = 1354258446675325LL;

	t23 = (x781>>(x782%(x783^x784)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x825 = 59U;
	uint8_t x826 = 31U;
	volatile int32_t x827 = -1;
	static int64_t x828 = 182424624520613LL;

	t24 = (x825>>(x826%(x827^x828)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x837 = 0;
	int32_t x838 = 268616;
	int16_t x839 = -1;
	static int8_t x840 = 18;
	static volatile int32_t t25 = 17000;

	t25 = (x837>>(x838%(x839^x840)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x873 = 1;
	int64_t x874 = 388154723594LL;
	int8_t x875 = -1;
	int32_t x876 = 9;

	t26 = (x873>>(x874%(x875^x876)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x893 = INT16_MAX;
	uint8_t x894 = 7U;
	volatile uint8_t x896 = UINT8_MAX;
	static volatile int32_t t27 = 1;

	t27 = (x893>>(x894%(x895^x896)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x901 = 57U;
	int16_t x902 = 6148;
	static volatile int8_t x903 = -1;
	int32_t t28 = 433;

	t28 = (x901>>(x902%(x903^x904)));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x994 = 0U;
	int32_t x995 = -1;
	int32_t x996 = -5403;
	int32_t t29 = -2923;

	t29 = (x993>>(x994%(x995^x996)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1074 = INT16_MIN;
	static int32_t x1075 = INT32_MIN;
	int32_t x1076 = INT32_MAX;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x1073>>(x1074%(x1075^x1076)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1113 = 25561624LLU;
	volatile int8_t x1114 = INT8_MAX;
	uint8_t x1115 = 78U;
	int64_t x1116 = -1LL;
	uint64_t t31 = 58460740846366LLU;

	t31 = (x1113>>(x1114%(x1115^x1116)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1125 = UINT32_MAX;
	int64_t x1128 = -14496869309255LL;
	volatile uint32_t t32 = 7957U;

	t32 = (x1125>>(x1126%(x1127^x1128)));

	if (t32 != 4194303U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1149 = 10U;
	volatile uint8_t x1150 = 3U;
	static uint16_t x1151 = 23U;
	volatile uint8_t x1152 = 60U;

	t33 = (x1149>>(x1150%(x1151^x1152)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1155 = INT8_MIN;
	static int8_t x1156 = INT8_MAX;

	t34 = (x1153>>(x1154%(x1155^x1156)));

	if (t34 != 18) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1177 = INT16_MAX;
	uint16_t x1178 = 2U;

	t35 = (x1177>>(x1178%(x1179^x1180)));

	if (t35 != 8191) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1205 = 1753867U;
	static int16_t x1207 = INT16_MIN;
	uint64_t x1208 = 121618LLU;
	volatile uint32_t t36 = 7701829U;

	t36 = (x1205>>(x1206%(x1207^x1208)));

	if (t36 != 876933U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1229 = INT16_MAX;
	int8_t x1230 = 12;
	int16_t x1231 = INT16_MAX;
	volatile int64_t x1232 = 7903750344368858LL;
	int32_t t37 = -22277;

	t37 = (x1229>>(x1230%(x1231^x1232)));

	if (t37 != 7) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x1233 = 3U;
	int64_t x1235 = 326166560LL;
	int32_t x1236 = INT32_MIN;
	volatile int32_t t38 = -21546;

	t38 = (x1233>>(x1234%(x1235^x1236)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1301 = 22U;
	int64_t x1302 = INT64_MIN;
	int8_t x1304 = 0;

	t39 = (x1301>>(x1302%(x1303^x1304)));

	if (t39 != 22) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x1306 = INT64_MIN;
	volatile uint8_t x1307 = UINT8_MAX;
	int16_t x1308 = -1;
	int64_t t40 = -1899551982464421274LL;

	t40 = (x1305>>(x1306%(x1307^x1308)));

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1449 = INT64_MAX;
	uint16_t x1450 = 57U;
	int32_t x1451 = 52835;
	volatile int16_t x1452 = INT16_MAX;

	t41 = (x1449>>(x1450%(x1451^x1452)));

	if (t41 != 63LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1453 = 6U;
	int16_t x1455 = INT16_MIN;
	volatile uint32_t x1456 = 905322U;

	t42 = (x1453>>(x1454%(x1455^x1456)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1545 = 3538920885901849LLU;
	static uint16_t x1546 = 18U;
	uint8_t x1547 = UINT8_MAX;
	uint32_t x1548 = 28U;
	uint64_t t43 = 22853009580658924LLU;

	t43 = (x1545>>(x1546%(x1547^x1548)));

	if (t43 != 13499911826LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x1549 = UINT32_MAX;
	int16_t x1550 = 1;
	int16_t x1551 = INT16_MAX;
	static volatile uint32_t t44 = 6U;

	t44 = (x1549>>(x1550%(x1551^x1552)));

	if (t44 != 2147483647U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1585 = 111U;
	uint32_t x1587 = 286U;
	int64_t x1588 = INT64_MAX;
	int32_t t45 = -99218;

	t45 = (x1585>>(x1586%(x1587^x1588)));

	if (t45 != 55) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1601 = 0U;
	uint8_t x1603 = 0U;
	volatile int16_t x1604 = -1;
	int32_t t46 = 53026;

	t46 = (x1601>>(x1602%(x1603^x1604)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1649 = 7U;
	uint64_t x1651 = 4467235LLU;
	static volatile uint32_t t47 = 32259015U;

	t47 = (x1649>>(x1650%(x1651^x1652)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x1657 = 0U;
	static volatile uint16_t x1658 = 14U;
	int16_t x1659 = INT16_MIN;
	static volatile uint64_t x1660 = 18010988009919112LLU;
	volatile int32_t t48 = -16;

	t48 = (x1657>>(x1658%(x1659^x1660)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x1665 = 947209U;
	static int8_t x1666 = 24;
	int16_t x1667 = INT16_MAX;
	int64_t x1668 = INT64_MAX;
	volatile uint32_t t49 = 0U;

	t49 = (x1665>>(x1666%(x1667^x1668)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1673 = UINT32_MAX;
	volatile uint16_t x1674 = 7U;
	int8_t x1675 = INT8_MAX;
	int64_t x1676 = INT64_MIN;
	uint32_t t50 = 708154U;

	t50 = (x1673>>(x1674%(x1675^x1676)));

	if (t50 != 33554431U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x1681 = INT32_MAX;
	int16_t x1683 = INT16_MIN;
	int8_t x1684 = -1;
	int32_t t51 = 278;

	t51 = (x1681>>(x1682%(x1683^x1684)));

	if (t51 != 536870911) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1773 = INT64_MAX;
	uint16_t x1774 = 24U;
	uint64_t x1776 = UINT64_MAX;
	volatile int64_t t52 = -724106111925815080LL;

	t52 = (x1773>>(x1774%(x1775^x1776)));

	if (t52 != 549755813887LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1777 = 25074173923015LL;
	volatile uint32_t x1778 = 7U;
	static int32_t x1779 = -84;
	int8_t x1780 = INT8_MAX;
	static int64_t t53 = -21914651029LL;

	t53 = (x1777>>(x1778%(x1779^x1780)));

	if (t53 != 195891983773LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x1785 = 8U;
	int64_t x1786 = -1LL;
	uint64_t x1787 = UINT64_MAX;
	int16_t x1788 = INT16_MIN;
	int32_t t54 = -479;

	t54 = (x1785>>(x1786%(x1787^x1788)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1789 = UINT8_MAX;
	static volatile int16_t x1790 = 0;
	static volatile uint64_t x1791 = 224837188029957462LLU;
	static int32_t x1792 = -738807294;
	static int32_t t55 = 9273479;

	t55 = (x1789>>(x1790%(x1791^x1792)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1814 = 2LL;
	int8_t x1815 = -43;
	int64_t x1816 = INT64_MAX;
	volatile int32_t t56 = -168;

	t56 = (x1813>>(x1814%(x1815^x1816)));

	if (t56 != 8191) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1881 = 1305966473LLU;
	uint16_t x1882 = 0U;
	volatile uint16_t x1883 = 1520U;
	int16_t x1884 = -778;
	volatile uint64_t t57 = 107312179LLU;

	t57 = (x1881>>(x1882%(x1883^x1884)));

	if (t57 != 1305966473LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1885 = UINT32_MAX;
	uint32_t x1886 = 1U;
	int64_t x1887 = INT64_MAX;
	uint64_t x1888 = UINT64_MAX;
	static uint32_t t58 = 286888173U;

	t58 = (x1885>>(x1886%(x1887^x1888)));

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1921 = INT32_MAX;
	int8_t x1923 = -25;
	volatile int32_t x1924 = -1;

	t59 = (x1921>>(x1922%(x1923^x1924)));

	if (t59 != 16777215) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x1929 = INT8_MAX;
	static uint64_t x1930 = 26LLU;
	int32_t x1931 = -1;
	int8_t x1932 = INT8_MAX;
	volatile int32_t t60 = 39148851;

	t60 = (x1929>>(x1930%(x1931^x1932)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x1945 = INT32_MAX;
	int32_t t61 = 35511560;

	t61 = (x1945>>(x1946%(x1947^x1948)));

	if (t61 != 524287) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1961 = 36089479LLU;
	static int8_t x1962 = 0;
	uint16_t x1963 = UINT16_MAX;
	uint32_t x1964 = 9U;

	t62 = (x1961>>(x1962%(x1963^x1964)));

	if (t62 != 36089479LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2042 = UINT8_MAX;
	int16_t x2043 = -42;
	int32_t x2044 = -1;
	volatile int32_t t63 = -45558;

	t63 = (x2041>>(x2042%(x2043^x2044)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2050 = 2;
	volatile int16_t x2051 = INT16_MIN;
	int64_t x2052 = INT64_MAX;
	volatile int32_t t64 = 49718;

	t64 = (x2049>>(x2050%(x2051^x2052)));

	if (t64 != 10) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x2090 = 6;
	uint32_t x2091 = 474U;
	volatile uint64_t x2092 = 1120LLU;
	int32_t t65 = -918;

	t65 = (x2089>>(x2090%(x2091^x2092)));

	if (t65 != 27) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x2106 = INT64_MIN;
	static volatile int32_t x2107 = -1;
	int16_t x2108 = 7;
	volatile int32_t t66 = -1854933;

	t66 = (x2105>>(x2106%(x2107^x2108)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2117 = 56;
	volatile uint8_t x2118 = 5U;
	static uint8_t x2119 = 118U;
	volatile uint64_t x2120 = 31839636257525LLU;
	volatile int32_t t67 = -1569799;

	t67 = (x2117>>(x2118%(x2119^x2120)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2142 = UINT64_MAX;
	int16_t x2144 = INT16_MIN;
	volatile int32_t t68 = 178886;

	t68 = (x2141>>(x2142%(x2143^x2144)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2181 = 1359957237U;
	int64_t x2184 = -1LL;

	t69 = (x2181>>(x2182%(x2183^x2184)));

	if (t69 != 1359957237U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2253 = UINT32_MAX;
	int32_t x2254 = INT32_MIN;
	uint32_t x2256 = 17U;
	volatile uint32_t t70 = 25U;

	t70 = (x2253>>(x2254%(x2255^x2256)));

	if (t70 != 536870911U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2269 = 15U;
	volatile uint8_t x2270 = 2U;
	int16_t x2271 = INT16_MIN;

	t71 = (x2269>>(x2270%(x2271^x2272)));

	if (t71 != 3U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2330 = UINT64_MAX;
	volatile int32_t x2331 = INT32_MIN;
	int32_t x2332 = INT32_MAX;
	int64_t t72 = -28916495162512453LL;

	t72 = (x2329>>(x2330%(x2331^x2332)));

	if (t72 != 9LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2347 = 44U;
	volatile int32_t t73 = 4;

	t73 = (x2345>>(x2346%(x2347^x2348)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2353 = 360014345495931278LLU;
	uint8_t x2354 = 15U;
	int64_t x2355 = INT64_MIN;
	uint8_t x2356 = 10U;
	static volatile uint64_t t74 = 141815504493512868LLU;

	t74 = (x2353>>(x2354%(x2355^x2356)));

	if (t74 != 10986765914792LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2401 = 0U;
	static uint8_t x2402 = 1U;
	volatile int32_t t75 = -196317926;

	t75 = (x2401>>(x2402%(x2403^x2404)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x2418 = INT16_MIN;
	volatile int8_t x2419 = INT8_MIN;
	static volatile uint64_t x2420 = UINT64_MAX;

	t76 = (x2417>>(x2418%(x2419^x2420)));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2501 = 124619042U;
	volatile uint16_t x2502 = 6U;
	int64_t x2503 = INT64_MAX;
	volatile uint32_t t77 = 322579U;

	t77 = (x2501>>(x2502%(x2503^x2504)));

	if (t77 != 1947172U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2518 = 5;
	int16_t x2520 = -1;
	volatile int64_t t78 = 7105957827479053LL;

	t78 = (x2517>>(x2518%(x2519^x2520)));

	if (t78 != 9353466543LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x2533 = INT64_MAX;
	uint16_t x2534 = UINT16_MAX;
	static int64_t t79 = INT64_MAX;

	t79 = (x2533>>(x2534%(x2535^x2536)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2538 = 0;
	int64_t x2539 = INT64_MIN;
	int16_t x2540 = INT16_MAX;
	uint32_t t80 = 2U;

	t80 = (x2537>>(x2538%(x2539^x2540)));

	if (t80 != 8673U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x2553 = INT16_MAX;
	uint8_t x2555 = 7U;
	volatile int64_t x2556 = -1LL;
	static volatile int32_t t81 = 993844571;

	t81 = (x2553>>(x2554%(x2555^x2556)));

	if (t81 != 16383) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2597 = UINT64_MAX;
	volatile int8_t x2598 = INT8_MAX;
	volatile uint8_t x2599 = 25U;
	static int32_t x2600 = -1;
	volatile uint64_t t82 = 4312291228234455223LLU;

	t82 = (x2597>>(x2598%(x2599^x2600)));

	if (t82 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2609 = 136495361937LLU;
	int8_t x2610 = INT8_MIN;
	int8_t x2612 = -1;

	t83 = (x2609>>(x2610%(x2611^x2612)));

	if (t83 != 136495361937LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2633 = INT8_MAX;
	uint64_t x2634 = 3LLU;
	static volatile int32_t t84 = -297;

	t84 = (x2633>>(x2634%(x2635^x2636)));

	if (t84 != 15) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2677 = INT32_MAX;
	uint64_t x2678 = 21LLU;
	int32_t x2679 = INT32_MIN;
	volatile int16_t x2680 = INT16_MIN;
	static volatile int32_t t85 = 0;

	t85 = (x2677>>(x2678%(x2679^x2680)));

	if (t85 != 1023) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2701 = 1U;
	int8_t x2702 = 1;
	static uint8_t x2703 = 9U;
	int8_t x2704 = INT8_MIN;

	t86 = (x2701>>(x2702%(x2703^x2704)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x2729 = 0U;
	static int8_t x2730 = 7;
	static int32_t x2731 = -64492246;

	t87 = (x2729>>(x2730%(x2731^x2732)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x2765 = INT8_MAX;
	static volatile uint8_t x2766 = 1U;
	static uint64_t x2767 = UINT64_MAX;
	static int32_t t88 = 251489749;

	t88 = (x2765>>(x2766%(x2767^x2768)));

	if (t88 != 63) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2769 = UINT16_MAX;
	int16_t x2770 = 10;
	uint32_t x2771 = 24054758U;
	uint32_t x2772 = 9529847U;

	t89 = (x2769>>(x2770%(x2771^x2772)));

	if (t89 != 63) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2793 = 17U;
	uint16_t x2794 = 0U;
	int16_t x2795 = -1;
	volatile uint64_t x2796 = 66743154040109896LLU;
	int32_t t90 = 2641;

	t90 = (x2793>>(x2794%(x2795^x2796)));

	if (t90 != 17) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2817 = 223U;
	uint16_t x2819 = 1U;
	volatile uint32_t t91 = 1U;

	t91 = (x2817>>(x2818%(x2819^x2820)));

	if (t91 != 111U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x2834 = 0;
	int8_t x2835 = INT8_MIN;
	int16_t x2836 = 2;
	int32_t t92 = 38;

	t92 = (x2833>>(x2834%(x2835^x2836)));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2849 = UINT16_MAX;
	static volatile int8_t x2850 = 3;
	static int32_t x2852 = INT32_MAX;

	t93 = (x2849>>(x2850%(x2851^x2852)));

	if (t93 != 8191) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2861 = 28U;
	static uint64_t x2862 = UINT64_MAX;
	uint64_t x2863 = UINT64_MAX;
	static int8_t x2864 = 7;
	int32_t t94 = -267964746;

	t94 = (x2861>>(x2862%(x2863^x2864)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x2913 = 240324U;
	uint8_t x2915 = 63U;
	volatile uint32_t t95 = 3262U;

	t95 = (x2913>>(x2914%(x2915^x2916)));

	if (t95 != 240324U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2917 = INT8_MAX;
	int32_t x2918 = INT32_MAX;
	static uint32_t x2920 = 1U;

	t96 = (x2917>>(x2918%(x2919^x2920)));

	if (t96 != 63) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2969 = 181193U;
	uint8_t x2970 = 8U;
	static int16_t x2972 = INT16_MIN;
	volatile uint32_t t97 = 16902464U;

	t97 = (x2969>>(x2970%(x2971^x2972)));

	if (t97 != 707U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2993 = 2U;
	int8_t x2994 = 4;
	volatile uint8_t x2995 = 27U;
	volatile int32_t t98 = -17971;

	t98 = (x2993>>(x2994%(x2995^x2996)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3037 = INT8_MAX;
	uint8_t x3038 = UINT8_MAX;
	int16_t x3039 = -4;
	uint8_t x3040 = 30U;
	int32_t t99 = -562874;

	t99 = (x3037>>(x3038%(x3039^x3040)));

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

