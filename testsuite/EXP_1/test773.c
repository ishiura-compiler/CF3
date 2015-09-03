#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = UINT64_MAX;
int8_t x73 = -1;
uint32_t x177 = 331145U;
int64_t x179 = 824LL;
uint16_t x180 = 22U;
volatile int32_t t5 = 905;
uint8_t x269 = 114U;
uint32_t x272 = 9U;
uint8_t x293 = 1U;
static int64_t x295 = INT64_MIN;
uint16_t x322 = UINT16_MAX;
static volatile uint16_t x323 = 3U;
int32_t t8 = 591;
int16_t x377 = -1;
uint16_t x405 = UINT16_MAX;
volatile int32_t t12 = -19036242;
int32_t t13 = 0;
int8_t x554 = INT8_MAX;
volatile int32_t t15 = 15522;
static int32_t t16 = -242773;
int8_t x617 = INT8_MAX;
int32_t t17 = 3277;
int32_t x769 = -1;
uint32_t x773 = 10U;
static int32_t x774 = -97789;
int8_t x794 = INT8_MAX;
int16_t x799 = -1;
int16_t x802 = INT16_MIN;
int8_t x871 = INT8_MIN;
int16_t x887 = 2777;
uint16_t x889 = UINT16_MAX;
volatile int32_t x911 = -6;
volatile int8_t x961 = 2;
volatile int32_t t32 = -322244;
volatile uint32_t x966 = UINT32_MAX;
uint8_t x968 = 22U;
uint8_t x972 = 0U;
static int64_t x982 = INT64_MAX;
int8_t x983 = INT8_MIN;
int32_t t36 = 408;
int64_t x1005 = -1LL;
int64_t x1007 = INT64_MAX;
uint8_t x1038 = 1U;
int32_t x1057 = -907;
static uint32_t x1058 = UINT32_MAX;
int16_t x1059 = 4524;
volatile int32_t t41 = 193084;
uint8_t x1121 = 90U;
static uint16_t x1124 = 6U;
int32_t t43 = -6;
volatile int16_t x1193 = INT16_MAX;
int32_t t45 = -15;
uint16_t x1291 = 2U;
static uint8_t x1409 = 2U;
static uint8_t x1412 = 0U;
uint16_t x1422 = UINT16_MAX;
volatile int32_t t50 = 48654;
uint32_t x1438 = 1107U;
int64_t x1439 = INT64_MIN;
int32_t t52 = -7004819;
int32_t x1467 = INT32_MIN;
volatile uint32_t x1523 = UINT32_MAX;
static int8_t x1609 = INT8_MAX;
int32_t x1611 = -1;
int32_t x1637 = -1;
int64_t x1655 = 10667466LL;
uint32_t x1709 = 3219538U;
volatile int8_t x1763 = 14;
static int16_t x1940 = 3;
uint16_t x1955 = 3U;
uint16_t x1973 = 12160U;
volatile uint64_t x1974 = 432091548LLU;
int32_t t67 = -1;
uint8_t x2010 = UINT8_MAX;
uint8_t x2100 = 18U;
int8_t x2122 = INT8_MIN;
int32_t t72 = -4023922;
int8_t x2144 = 5;
int32_t t73 = 52552060;
uint32_t x2178 = UINT32_MAX;
static uint16_t x2180 = 25U;
uint8_t x2232 = 2U;
volatile int64_t x2294 = INT64_MIN;
uint16_t x2351 = 7U;
int16_t x2377 = INT16_MIN;
int32_t x2401 = INT32_MIN;
static uint16_t x2465 = 18541U;
int64_t x2466 = -7589641940064LL;
int32_t t85 = -171;
volatile int32_t t87 = -1015734086;
volatile int64_t x2629 = -1LL;
static volatile int32_t t90 = 62834466;
volatile int32_t x2636 = 3;
volatile int32_t t93 = 13;
int32_t x2841 = INT32_MIN;
static int8_t x2877 = INT8_MAX;
int32_t t98 = 2083213;
int8_t x2894 = -1;


void f0(void) {
	int64_t x5 = -1LL;
	int64_t x6 = INT64_MIN;
	int32_t x7 = -74999;
	int8_t x8 = 0;
	static int32_t t0 = 2126774;

	t0 = (((x5%x6)==x7)<<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	uint32_t x11 = 176078559U;
	static int8_t x12 = 9;
	int32_t t1 = -100;

	t1 = (((x9%x10)==x11)<<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x74 = INT8_MIN;
	int64_t x75 = 7800037783966037LL;
	int32_t x76 = 2;
	volatile int32_t t2 = -1949683;

	t2 = (((x73%x74)==x75)<<x76);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x141 = INT64_MIN;
	static int32_t x142 = -1;
	volatile int64_t x143 = 11833626LL;
	int16_t x144 = 0;
	int32_t t3 = 195;

	t3 = (((x141%x142)==x143)<<x144);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x145 = 0;
	int16_t x146 = -1;
	int8_t x147 = 0;
	uint8_t x148 = 3U;
	volatile int32_t t4 = 680;

	t4 = (((x145%x146)==x147)<<x148);

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x178 = INT64_MIN;

	t5 = (((x177%x178)==x179)<<x180);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x270 = INT32_MIN;
	int64_t x271 = 238109800456003764LL;
	volatile int32_t t6 = 132485074;

	t6 = (((x269%x270)==x271)<<x272);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x294 = INT64_MIN;
	uint32_t x296 = 0U;
	int32_t t7 = 1;

	t7 = (((x293%x294)==x295)<<x296);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x321 = INT8_MIN;
	static int8_t x324 = 0;

	t8 = (((x321%x322)==x323)<<x324);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x378 = INT8_MAX;
	static int8_t x379 = INT8_MIN;
	volatile int32_t x380 = 0;
	int32_t t9 = 62597177;

	t9 = (((x377%x378)==x379)<<x380);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x406 = -1;
	int8_t x407 = -1;
	static uint8_t x408 = 7U;
	int32_t t10 = 234889;

	t10 = (((x405%x406)==x407)<<x408);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x409 = -27;
	static volatile int16_t x410 = INT16_MAX;
	volatile uint8_t x411 = 5U;
	uint32_t x412 = 3U;
	volatile int32_t t11 = -217;

	t11 = (((x409%x410)==x411)<<x412);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x429 = UINT16_MAX;
	int32_t x430 = -1;
	uint8_t x431 = UINT8_MAX;
	uint64_t x432 = 3LLU;

	t12 = (((x429%x430)==x431)<<x432);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x437 = INT64_MIN;
	int16_t x438 = -4;
	int64_t x439 = INT64_MIN;
	static uint16_t x440 = 6U;

	t13 = (((x437%x438)==x439)<<x440);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x537 = 380;
	int32_t x538 = -1;
	uint8_t x539 = 2U;
	uint8_t x540 = 3U;
	int32_t t14 = 26936;

	t14 = (((x537%x538)==x539)<<x540);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x553 = INT64_MIN;
	int32_t x555 = INT32_MIN;
	static int8_t x556 = 1;

	t15 = (((x553%x554)==x555)<<x556);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x577 = -1;
	int32_t x578 = -23;
	static uint32_t x579 = 2040810U;
	static uint32_t x580 = 3U;

	t16 = (((x577%x578)==x579)<<x580);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x618 = INT16_MIN;
	uint16_t x619 = UINT16_MAX;
	uint32_t x620 = 5U;

	t17 = (((x617%x618)==x619)<<x620);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x689 = INT32_MIN;
	int64_t x690 = -1LL;
	int64_t x691 = 91983276617677LL;
	uint16_t x692 = 8U;
	volatile int32_t t18 = 4;

	t18 = (((x689%x690)==x691)<<x692);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x693 = INT16_MIN;
	int64_t x694 = 64514750LL;
	static uint8_t x695 = 27U;
	volatile uint64_t x696 = 14LLU;
	static volatile int32_t t19 = -1;

	t19 = (((x693%x694)==x695)<<x696);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x753 = 7U;
	static int64_t x754 = -119755095LL;
	volatile int64_t x755 = INT64_MAX;
	int64_t x756 = 3LL;
	volatile int32_t t20 = -6276783;

	t20 = (((x753%x754)==x755)<<x756);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x770 = 57237023U;
	volatile uint64_t x771 = 6LLU;
	int16_t x772 = 0;
	volatile int32_t t21 = 261;

	t21 = (((x769%x770)==x771)<<x772);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x775 = -1;
	uint8_t x776 = 0U;
	volatile int32_t t22 = 8998952;

	t22 = (((x773%x774)==x775)<<x776);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x793 = INT8_MIN;
	volatile int64_t x795 = -2183570029798042LL;
	uint32_t x796 = 6U;
	volatile int32_t t23 = -61;

	t23 = (((x793%x794)==x795)<<x796);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x797 = INT16_MAX;
	uint64_t x798 = 4095761980088959LLU;
	uint32_t x800 = 1U;
	int32_t t24 = -47457;

	t24 = (((x797%x798)==x799)<<x800);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x801 = 2U;
	static uint32_t x803 = 5163063U;
	volatile uint16_t x804 = 16U;
	int32_t t25 = -6;

	t25 = (((x801%x802)==x803)<<x804);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x865 = INT32_MIN;
	int32_t x866 = INT32_MIN;
	uint8_t x867 = UINT8_MAX;
	int64_t x868 = 14LL;
	volatile int32_t t26 = 1;

	t26 = (((x865%x866)==x867)<<x868);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x869 = UINT16_MAX;
	static int16_t x870 = INT16_MAX;
	uint32_t x872 = 12U;
	volatile int32_t t27 = 890;

	t27 = (((x869%x870)==x871)<<x872);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x885 = -2;
	static volatile int16_t x886 = -1;
	uint8_t x888 = 23U;
	static volatile int32_t t28 = 12;

	t28 = (((x885%x886)==x887)<<x888);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x890 = -1;
	static volatile int16_t x891 = 11503;
	volatile uint16_t x892 = 1U;
	int32_t t29 = 673383386;

	t29 = (((x889%x890)==x891)<<x892);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x909 = 52U;
	int64_t x910 = -1LL;
	int8_t x912 = 27;
	static int32_t t30 = -9;

	t30 = (((x909%x910)==x911)<<x912);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x921 = INT8_MIN;
	volatile int32_t x922 = -731;
	static int8_t x923 = 1;
	uint16_t x924 = 2U;
	int32_t t31 = -35234647;

	t31 = (((x921%x922)==x923)<<x924);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x962 = INT16_MIN;
	int64_t x963 = INT64_MIN;
	uint8_t x964 = 12U;

	t32 = (((x961%x962)==x963)<<x964);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x965 = INT32_MAX;
	int64_t x967 = INT64_MIN;
	volatile int32_t t33 = 77218;

	t33 = (((x965%x966)==x967)<<x968);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x969 = INT8_MIN;
	static int16_t x970 = INT16_MAX;
	int32_t x971 = INT32_MIN;
	volatile int32_t t34 = -106753930;

	t34 = (((x969%x970)==x971)<<x972);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x977 = 12319U;
	int64_t x978 = INT64_MAX;
	volatile uint8_t x979 = UINT8_MAX;
	int16_t x980 = 0;
	int32_t t35 = 455377;

	t35 = (((x977%x978)==x979)<<x980);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x981 = INT16_MAX;
	volatile uint16_t x984 = 15U;

	t36 = (((x981%x982)==x983)<<x984);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1006 = INT64_MIN;
	static volatile int32_t x1008 = 1;
	volatile int32_t t37 = -3;

	t37 = (((x1005%x1006)==x1007)<<x1008);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1025 = INT16_MIN;
	uint64_t x1026 = UINT64_MAX;
	volatile uint16_t x1027 = UINT16_MAX;
	uint8_t x1028 = 1U;
	int32_t t38 = 1;

	t38 = (((x1025%x1026)==x1027)<<x1028);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1037 = 24U;
	int16_t x1039 = -1;
	int32_t x1040 = 2;
	static volatile int32_t t39 = -15;

	t39 = (((x1037%x1038)==x1039)<<x1040);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1060 = 6U;
	volatile int32_t t40 = -76209343;

	t40 = (((x1057%x1058)==x1059)<<x1060);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1105 = INT64_MIN;
	uint64_t x1106 = 1646868605608405645LLU;
	static int64_t x1107 = INT64_MIN;
	uint16_t x1108 = 15U;

	t41 = (((x1105%x1106)==x1107)<<x1108);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1122 = 1U;
	uint64_t x1123 = 5549192234215LLU;
	static int32_t t42 = -148368;

	t42 = (((x1121%x1122)==x1123)<<x1124);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1125 = -1;
	static int8_t x1126 = -2;
	int8_t x1127 = -1;
	uint8_t x1128 = 0U;

	t43 = (((x1125%x1126)==x1127)<<x1128);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x1153 = INT32_MIN;
	static uint64_t x1154 = 168977042339943LLU;
	static uint64_t x1155 = 1260673LLU;
	volatile int8_t x1156 = 2;
	int32_t t44 = -9097395;

	t44 = (((x1153%x1154)==x1155)<<x1156);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1194 = 11U;
	volatile int16_t x1195 = -1;
	int8_t x1196 = 6;

	t45 = (((x1193%x1194)==x1195)<<x1196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1289 = INT16_MIN;
	static int16_t x1290 = INT16_MIN;
	volatile int8_t x1292 = 20;
	volatile int32_t t46 = 10;

	t46 = (((x1289%x1290)==x1291)<<x1292);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1305 = INT64_MIN;
	static int32_t x1306 = 1;
	volatile uint32_t x1307 = 91U;
	static int8_t x1308 = 1;
	static volatile int32_t t47 = 161;

	t47 = (((x1305%x1306)==x1307)<<x1308);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1377 = 5681897U;
	static int32_t x1378 = INT32_MAX;
	int64_t x1379 = INT64_MIN;
	uint8_t x1380 = 1U;
	volatile int32_t t48 = -20550698;

	t48 = (((x1377%x1378)==x1379)<<x1380);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1410 = -10;
	int32_t x1411 = -1;
	int32_t t49 = -908098619;

	t49 = (((x1409%x1410)==x1411)<<x1412);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x1421 = 8;
	int8_t x1423 = -1;
	static uint8_t x1424 = 0U;

	t50 = (((x1421%x1422)==x1423)<<x1424);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x1437 = INT32_MAX;
	uint8_t x1440 = 11U;
	int32_t t51 = -838186;

	t51 = (((x1437%x1438)==x1439)<<x1440);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x1457 = 8287U;
	int32_t x1458 = -97843424;
	uint64_t x1459 = 65552827176635450LLU;
	uint8_t x1460 = 18U;

	t52 = (((x1457%x1458)==x1459)<<x1460);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1465 = 0U;
	static int8_t x1466 = INT8_MAX;
	uint16_t x1468 = 0U;
	static volatile int32_t t53 = 93;

	t53 = (((x1465%x1466)==x1467)<<x1468);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1473 = 54176034829LL;
	int16_t x1474 = INT16_MIN;
	volatile uint64_t x1475 = 6850913789498859LLU;
	int16_t x1476 = 3;
	volatile int32_t t54 = -289759;

	t54 = (((x1473%x1474)==x1475)<<x1476);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1481 = INT32_MAX;
	static uint16_t x1482 = 22066U;
	static uint64_t x1483 = 22121143900637LLU;
	volatile uint16_t x1484 = 0U;
	static int32_t t55 = 223;

	t55 = (((x1481%x1482)==x1483)<<x1484);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x1521 = 8U;
	uint32_t x1522 = 10206U;
	static uint16_t x1524 = 0U;
	int32_t t56 = 238156016;

	t56 = (((x1521%x1522)==x1523)<<x1524);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1593 = 73U;
	int8_t x1594 = INT8_MAX;
	static volatile int32_t x1595 = -1;
	volatile int8_t x1596 = 2;
	volatile int32_t t57 = 4283958;

	t57 = (((x1593%x1594)==x1595)<<x1596);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1610 = 529927639062036LL;
	int8_t x1612 = 1;
	volatile int32_t t58 = 1;

	t58 = (((x1609%x1610)==x1611)<<x1612);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x1638 = INT64_MAX;
	static int16_t x1639 = 3099;
	static uint8_t x1640 = 27U;
	int32_t t59 = -151257640;

	t59 = (((x1637%x1638)==x1639)<<x1640);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1653 = INT8_MAX;
	static int32_t x1654 = INT32_MIN;
	uint32_t x1656 = 0U;
	volatile int32_t t60 = -10235614;

	t60 = (((x1653%x1654)==x1655)<<x1656);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x1681 = INT8_MIN;
	int32_t x1682 = -231097;
	static int32_t x1683 = INT32_MIN;
	uint8_t x1684 = 2U;
	volatile int32_t t61 = -88;

	t61 = (((x1681%x1682)==x1683)<<x1684);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1710 = -1LL;
	int64_t x1711 = INT64_MIN;
	int8_t x1712 = 0;
	int32_t t62 = 0;

	t62 = (((x1709%x1710)==x1711)<<x1712);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x1761 = UINT8_MAX;
	uint32_t x1762 = 824507831U;
	volatile uint8_t x1764 = 22U;
	volatile int32_t t63 = -3;

	t63 = (((x1761%x1762)==x1763)<<x1764);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x1885 = UINT16_MAX;
	static int16_t x1886 = INT16_MIN;
	int16_t x1887 = INT16_MIN;
	int8_t x1888 = 2;
	int32_t t64 = -1;

	t64 = (((x1885%x1886)==x1887)<<x1888);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1937 = 47U;
	uint64_t x1938 = UINT64_MAX;
	uint8_t x1939 = 1U;
	int32_t t65 = -1;

	t65 = (((x1937%x1938)==x1939)<<x1940);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1953 = 14;
	int64_t x1954 = INT64_MIN;
	volatile int32_t x1956 = 11;
	static volatile int32_t t66 = -37303832;

	t66 = (((x1953%x1954)==x1955)<<x1956);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1975 = INT16_MIN;
	uint32_t x1976 = 0U;

	t67 = (((x1973%x1974)==x1975)<<x1976);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2009 = INT8_MIN;
	volatile uint32_t x2011 = 266905184U;
	int32_t x2012 = 22;
	int32_t t68 = 34583897;

	t68 = (((x2009%x2010)==x2011)<<x2012);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2017 = 186;
	int16_t x2018 = INT16_MIN;
	uint8_t x2019 = 63U;
	uint8_t x2020 = 11U;
	static volatile int32_t t69 = -114;

	t69 = (((x2017%x2018)==x2019)<<x2020);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x2045 = INT16_MAX;
	volatile int64_t x2046 = -1LL;
	int32_t x2047 = 5;
	volatile uint16_t x2048 = 22U;
	static int32_t t70 = 107;

	t70 = (((x2045%x2046)==x2047)<<x2048);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2097 = UINT8_MAX;
	int32_t x2098 = INT32_MIN;
	int8_t x2099 = 1;
	int32_t t71 = 10003723;

	t71 = (((x2097%x2098)==x2099)<<x2100);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2121 = INT8_MAX;
	int8_t x2123 = INT8_MIN;
	int32_t x2124 = 0;

	t72 = (((x2121%x2122)==x2123)<<x2124);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2141 = -1;
	volatile uint64_t x2142 = UINT64_MAX;
	int16_t x2143 = -1;

	t73 = (((x2141%x2142)==x2143)<<x2144);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2177 = -1;
	int64_t x2179 = INT64_MIN;
	int32_t t74 = 1965551;

	t74 = (((x2177%x2178)==x2179)<<x2180);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2229 = 1565U;
	uint8_t x2230 = 6U;
	volatile uint16_t x2231 = 2914U;
	int32_t t75 = -3937850;

	t75 = (((x2229%x2230)==x2231)<<x2232);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2277 = UINT64_MAX;
	static uint16_t x2278 = 2U;
	int64_t x2279 = -1LL;
	int16_t x2280 = 1;
	volatile int32_t t76 = -6168371;

	t76 = (((x2277%x2278)==x2279)<<x2280);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2293 = INT8_MIN;
	int32_t x2295 = -342;
	int8_t x2296 = 0;
	int32_t t77 = -8;

	t77 = (((x2293%x2294)==x2295)<<x2296);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2349 = 1U;
	int8_t x2350 = INT8_MIN;
	volatile int8_t x2352 = 7;
	volatile int32_t t78 = -388;

	t78 = (((x2349%x2350)==x2351)<<x2352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2361 = INT32_MAX;
	int32_t x2362 = INT32_MAX;
	static int8_t x2363 = 13;
	uint32_t x2364 = 13U;
	volatile int32_t t79 = 1863898;

	t79 = (((x2361%x2362)==x2363)<<x2364);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2369 = 10;
	int32_t x2370 = INT32_MIN;
	int32_t x2371 = INT32_MAX;
	int16_t x2372 = 1;
	int32_t t80 = 30;

	t80 = (((x2369%x2370)==x2371)<<x2372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2378 = -7315;
	volatile int64_t x2379 = INT64_MIN;
	volatile int8_t x2380 = 2;
	static int32_t t81 = 7208072;

	t81 = (((x2377%x2378)==x2379)<<x2380);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x2402 = 21078434707006873LL;
	static int64_t x2403 = -2690533503LL;
	int8_t x2404 = 0;
	volatile int32_t t82 = -3789;

	t82 = (((x2401%x2402)==x2403)<<x2404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x2429 = 176U;
	uint8_t x2430 = UINT8_MAX;
	uint64_t x2431 = UINT64_MAX;
	volatile int8_t x2432 = 1;
	volatile int32_t t83 = -1;

	t83 = (((x2429%x2430)==x2431)<<x2432);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2433 = INT8_MIN;
	int64_t x2434 = -1LL;
	static int8_t x2435 = 1;
	int8_t x2436 = 1;
	int32_t t84 = 99939;

	t84 = (((x2433%x2434)==x2435)<<x2436);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2467 = 0;
	volatile uint16_t x2468 = 2U;

	t85 = (((x2465%x2466)==x2467)<<x2468);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x2485 = INT16_MAX;
	int32_t x2486 = 83750556;
	volatile int16_t x2487 = INT16_MAX;
	int8_t x2488 = 1;
	volatile int32_t t86 = 0;

	t86 = (((x2485%x2486)==x2487)<<x2488);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2545 = INT16_MIN;
	int8_t x2546 = INT8_MIN;
	static uint8_t x2547 = 18U;
	volatile uint32_t x2548 = 1U;

	t87 = (((x2545%x2546)==x2547)<<x2548);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2589 = INT64_MIN;
	int8_t x2590 = 30;
	static int16_t x2591 = INT16_MIN;
	static volatile int8_t x2592 = 0;
	volatile int32_t t88 = 10260298;

	t88 = (((x2589%x2590)==x2591)<<x2592);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x2625 = INT32_MIN;
	uint16_t x2626 = 6U;
	volatile uint32_t x2627 = UINT32_MAX;
	uint8_t x2628 = 20U;
	volatile int32_t t89 = 11;

	t89 = (((x2625%x2626)==x2627)<<x2628);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2630 = INT32_MIN;
	int8_t x2631 = 2;
	volatile int8_t x2632 = 22;

	t90 = (((x2629%x2630)==x2631)<<x2632);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x2633 = 2830556426181LLU;
	static volatile int32_t x2634 = 1234685;
	int16_t x2635 = -1;
	int32_t t91 = 31032629;

	t91 = (((x2633%x2634)==x2635)<<x2636);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x2669 = -5688450;
	volatile int32_t x2670 = -1;
	int16_t x2671 = INT16_MIN;
	uint16_t x2672 = 2U;
	volatile int32_t t92 = 13365659;

	t92 = (((x2669%x2670)==x2671)<<x2672);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x2681 = 1022291920051LLU;
	uint64_t x2682 = 6317749852176065932LLU;
	int32_t x2683 = 3544422;
	uint8_t x2684 = 0U;

	t93 = (((x2681%x2682)==x2683)<<x2684);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x2789 = UINT16_MAX;
	uint32_t x2790 = 1U;
	int64_t x2791 = 59270503LL;
	uint8_t x2792 = 20U;
	int32_t t94 = 1460818;

	t94 = (((x2789%x2790)==x2791)<<x2792);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2809 = -1246479;
	int8_t x2810 = INT8_MAX;
	static int64_t x2811 = INT64_MAX;
	uint8_t x2812 = 4U;
	int32_t t95 = 1846493;

	t95 = (((x2809%x2810)==x2811)<<x2812);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x2842 = INT8_MAX;
	int8_t x2843 = -1;
	int16_t x2844 = 0;
	volatile int32_t t96 = 1442285;

	t96 = (((x2841%x2842)==x2843)<<x2844);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2845 = -1;
	int32_t x2846 = 18;
	volatile int16_t x2847 = INT16_MAX;
	uint16_t x2848 = 3U;
	volatile int32_t t97 = -2;

	t97 = (((x2845%x2846)==x2847)<<x2848);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2878 = 1349801529759614374LLU;
	int64_t x2879 = -6514LL;
	uint32_t x2880 = 3U;

	t98 = (((x2877%x2878)==x2879)<<x2880);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x2893 = 7U;
	int16_t x2895 = 6;
	static int32_t x2896 = 5;
	volatile int32_t t99 = -6488754;

	t99 = (((x2893%x2894)==x2895)<<x2896);

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

