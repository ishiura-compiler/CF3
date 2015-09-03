#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 7040434463LLU;
static volatile int16_t x4 = INT16_MIN;
static int32_t x74 = -1;
static int8_t x75 = 11;
volatile uint16_t x86 = 1U;
uint32_t x87 = 27U;
volatile uint16_t x142 = 28185U;
int8_t x144 = INT8_MIN;
volatile int64_t t8 = -2LL;
static int64_t x320 = INT64_MIN;
static volatile uint8_t x450 = 15U;
int8_t x452 = INT8_MIN;
uint32_t x453 = UINT32_MAX;
int8_t x487 = 0;
int32_t x506 = INT32_MIN;
int64_t t17 = -16LL;
static uint16_t x548 = 2685U;
int8_t x687 = 1;
volatile uint16_t x734 = 20733U;
volatile int8_t x735 = 13;
static uint16_t x889 = UINT16_MAX;
int32_t x904 = -1;
int64_t t25 = -165LL;
static int32_t t26 = 17872;
uint16_t x969 = 93U;
int8_t x971 = 2;
uint64_t x1007 = 28LLU;
volatile int32_t x1008 = INT32_MIN;
uint16_t x1041 = UINT16_MAX;
volatile int32_t t30 = -61;
volatile uint32_t x1090 = UINT32_MAX;
int8_t x1091 = 29;
volatile uint32_t t34 = 0U;
int16_t x1107 = 2;
uint32_t x1125 = 14U;
int16_t x1127 = 0;
uint64_t t36 = 96586387015184296LLU;
volatile int64_t t37 = -19021726215LL;
volatile int32_t t39 = 2;
volatile uint16_t x1417 = 3U;
uint64_t t40 = 257450766163794LLU;
int8_t x1464 = -1;
uint8_t x1495 = 7U;
int64_t x1529 = INT64_MAX;
volatile uint64_t t43 = 101694LLU;
volatile uint8_t x1563 = 12U;
uint32_t x1674 = 32233U;
uint8_t x1676 = 2U;
volatile uint32_t t49 = 980859U;
int8_t x1775 = 2;
volatile uint64_t x1777 = UINT64_MAX;
int8_t x1806 = INT8_MIN;
int8_t x1807 = 0;
int32_t x1808 = INT32_MIN;
int8_t x1828 = 45;
volatile int32_t x1837 = 501804;
uint8_t x1840 = 26U;
int16_t x1929 = INT16_MAX;
uint8_t x1967 = 1U;
uint64_t x2008 = 29LLU;
volatile uint64_t t59 = 5407832799352883281LLU;
uint64_t x2121 = UINT64_MAX;
static int64_t x2144 = -234365LL;
static uint8_t x2163 = 55U;
int32_t t66 = -503469685;
int32_t x2257 = 3;
volatile int16_t x2261 = 12372;
uint64_t x2265 = 2367596050490LLU;
uint32_t x2271 = 2U;
volatile uint64_t t73 = 111913675593648LLU;
uint16_t x2482 = UINT16_MAX;
uint32_t x2556 = 1U;
int16_t x2679 = 8;
uint32_t x3062 = UINT32_MAX;
static uint16_t x3075 = 35U;
volatile int32_t x3092 = -7661851;
volatile int32_t t84 = -322556;
volatile int32_t x3232 = INT32_MAX;
static int64_t t89 = -380441895450LL;
int64_t t91 = 118LL;
uint32_t x3414 = 1U;
uint32_t t92 = 392075632U;
uint8_t x3444 = 1U;
volatile int64_t t95 = 13306566805LL;
static int16_t x3574 = -1;
uint32_t x3691 = 6U;
static volatile uint64_t x3754 = 48808062006058240LLU;
uint64_t x3768 = 406519087LLU;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int8_t x3 = 24;
	volatile uint64_t t0 = 687778614423056LLU;

	t0 = (((x1%x2)>>x3)&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x29 = 7927;
	int8_t x30 = 48;
	int8_t x31 = 12;
	uint16_t x32 = 98U;
	int32_t t1 = -510074950;

	t1 = (((x29%x30)>>x31)&x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x53 = -1;
	int8_t x54 = -1;
	static uint64_t x55 = 7LLU;
	int8_t x56 = INT8_MIN;
	int32_t t2 = 379846;

	t2 = (((x53%x54)>>x55)&x56);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x57 = 5;
	static uint8_t x58 = 23U;
	uint8_t x59 = 0U;
	int8_t x60 = INT8_MIN;
	static int32_t t3 = -16546;

	t3 = (((x57%x58)>>x59)&x60);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x73 = UINT32_MAX;
	int8_t x76 = INT8_MIN;
	uint32_t t4 = 0U;

	t4 = (((x73%x74)>>x75)&x76);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x85 = UINT32_MAX;
	static int8_t x88 = INT8_MIN;
	uint32_t t5 = 952U;

	t5 = (((x85%x86)>>x87)&x88);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x141 = 1;
	volatile int16_t x143 = 1;
	volatile int32_t t6 = 253886;

	t6 = (((x141%x142)>>x143)&x144);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x149 = 52777135LL;
	int16_t x150 = 13;
	int8_t x151 = 1;
	int64_t x152 = -1LL;
	volatile int64_t t7 = 60393LL;

	t7 = (((x149%x150)>>x151)&x152);

	if (t7 != 4LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x221 = INT16_MAX;
	volatile int64_t x222 = 2LL;
	int8_t x223 = 0;
	volatile int16_t x224 = INT16_MIN;

	t8 = (((x221%x222)>>x223)&x224);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x317 = 29361LL;
	uint64_t x318 = UINT64_MAX;
	static int8_t x319 = 20;
	volatile uint64_t t9 = 77711LLU;

	t9 = (((x317%x318)>>x319)&x320);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x409 = UINT16_MAX;
	int8_t x410 = INT8_MAX;
	volatile uint8_t x411 = 26U;
	int32_t x412 = INT32_MAX;
	int32_t t10 = 79640556;

	t10 = (((x409%x410)>>x411)&x412);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x449 = -30;
	uint8_t x451 = 2U;
	int32_t t11 = 0;

	t11 = (((x449%x450)>>x451)&x452);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x454 = INT32_MIN;
	uint16_t x455 = 3U;
	uint16_t x456 = 158U;
	volatile uint32_t t12 = 497999U;

	t12 = (((x453%x454)>>x455)&x456);

	if (t12 != 158U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x473 = INT8_MAX;
	int8_t x474 = 1;
	static uint8_t x475 = 1U;
	int64_t x476 = -34567182753LL;
	volatile int64_t t13 = -4LL;

	t13 = (((x473%x474)>>x475)&x476);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x485 = INT16_MIN;
	uint32_t x486 = 690645U;
	uint64_t x488 = 21060654715324993LLU;
	uint64_t t14 = 51841027LLU;

	t14 = (((x485%x486)>>x487)&x488);

	if (t14 != 196672LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x493 = -46054;
	volatile uint64_t x494 = 501705683834850987LLU;
	uint32_t x495 = 3U;
	volatile int32_t x496 = INT32_MAX;
	uint64_t t15 = 334181916169LLU;

	t15 = (((x493%x494)>>x495)&x496);

	if (t15 != 797443969LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x505 = 2;
	uint8_t x507 = 0U;
	int16_t x508 = -4681;
	int32_t t16 = 10230;

	t16 = (((x505%x506)>>x507)&x508);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x541 = -1;
	static int64_t x542 = -1LL;
	uint64_t x543 = 28LLU;
	int8_t x544 = 0;

	t17 = (((x541%x542)>>x543)&x544);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x545 = UINT64_MAX;
	uint16_t x546 = 2U;
	static uint16_t x547 = 11U;
	static volatile uint64_t t18 = 48121680LLU;

	t18 = (((x545%x546)>>x547)&x548);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x685 = 0;
	uint32_t x686 = 75U;
	int64_t x688 = -1191098649819163804LL;
	static int64_t t19 = 52961LL;

	t19 = (((x685%x686)>>x687)&x688);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x733 = INT64_MAX;
	int16_t x736 = INT16_MAX;
	int64_t t20 = 16711368471335LL;

	t20 = (((x733%x734)>>x735)&x736);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x745 = UINT64_MAX;
	uint32_t x746 = UINT32_MAX;
	uint8_t x747 = 2U;
	volatile uint32_t x748 = UINT32_MAX;
	volatile uint64_t t21 = 12401LLU;

	t21 = (((x745%x746)>>x747)&x748);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x849 = UINT64_MAX;
	int16_t x850 = INT16_MIN;
	int8_t x851 = 13;
	volatile int16_t x852 = INT16_MAX;
	volatile uint64_t t22 = 14042LLU;

	t22 = (((x849%x850)>>x851)&x852);

	if (t22 != 3LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x873 = 294LL;
	volatile uint32_t x874 = 114U;
	uint64_t x875 = 10LLU;
	static volatile int64_t x876 = INT64_MAX;
	volatile int64_t t23 = -60448866LL;

	t23 = (((x873%x874)>>x875)&x876);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x890 = -1;
	int8_t x891 = 1;
	static int8_t x892 = INT8_MIN;
	int32_t t24 = -434956;

	t24 = (((x889%x890)>>x891)&x892);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x901 = -4321158453368257274LL;
	volatile int8_t x902 = -1;
	uint16_t x903 = 25U;

	t25 = (((x901%x902)>>x903)&x904);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x929 = 2;
	volatile int8_t x930 = -7;
	uint16_t x931 = 16U;
	uint8_t x932 = 100U;

	t26 = (((x929%x930)>>x931)&x932);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x970 = 14;
	static volatile int8_t x972 = -1;
	static volatile int32_t t27 = -372329080;

	t27 = (((x969%x970)>>x971)&x972);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x997 = UINT32_MAX;
	static int16_t x998 = 2;
	uint8_t x999 = 27U;
	uint32_t x1000 = 1930880U;
	uint32_t t28 = 50044606U;

	t28 = (((x997%x998)>>x999)&x1000);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1005 = -1;
	uint32_t x1006 = UINT32_MAX;
	volatile uint32_t t29 = 54484U;

	t29 = (((x1005%x1006)>>x1007)&x1008);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1042 = 4U;
	uint8_t x1043 = 1U;
	int8_t x1044 = 0;

	t30 = (((x1041%x1042)>>x1043)&x1044);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1057 = UINT8_MAX;
	uint64_t x1058 = 6LLU;
	static uint8_t x1059 = 47U;
	volatile int16_t x1060 = -1;
	volatile uint64_t t31 = 4829406339LLU;

	t31 = (((x1057%x1058)>>x1059)&x1060);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1065 = UINT8_MAX;
	static int32_t x1066 = 433991377;
	static int32_t x1067 = 19;
	int32_t x1068 = INT32_MAX;
	int32_t t32 = 109435;

	t32 = (((x1065%x1066)>>x1067)&x1068);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1085 = INT32_MAX;
	static uint16_t x1086 = 7U;
	int16_t x1087 = 0;
	int8_t x1088 = -1;
	static int32_t t33 = 6465500;

	t33 = (((x1085%x1086)>>x1087)&x1088);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1089 = -3;
	int8_t x1092 = INT8_MAX;

	t34 = (((x1089%x1090)>>x1091)&x1092);

	if (t34 != 7U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1105 = 1911U;
	int16_t x1106 = INT16_MIN;
	uint32_t x1108 = 281233U;
	uint32_t t35 = 406742369U;

	t35 = (((x1105%x1106)>>x1107)&x1108);

	if (t35 != 145U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1126 = INT32_MIN;
	uint64_t x1128 = 60LLU;

	t36 = (((x1125%x1126)>>x1127)&x1128);

	if (t36 != 12LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x1229 = UINT8_MAX;
	uint16_t x1230 = 1U;
	uint16_t x1231 = 3U;
	volatile int64_t x1232 = INT64_MIN;

	t37 = (((x1229%x1230)>>x1231)&x1232);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1333 = -1995;
	int16_t x1334 = -1;
	volatile uint8_t x1335 = 6U;
	volatile uint32_t x1336 = 10955U;
	static uint32_t t38 = 3U;

	t38 = (((x1333%x1334)>>x1335)&x1336);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1401 = 7U;
	int32_t x1402 = INT32_MIN;
	int8_t x1403 = 12;
	int32_t x1404 = INT32_MIN;

	t39 = (((x1401%x1402)>>x1403)&x1404);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x1418 = INT64_MIN;
	uint16_t x1419 = 56U;
	static uint64_t x1420 = UINT64_MAX;

	t40 = (((x1417%x1418)>>x1419)&x1420);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1461 = 46682199204438LL;
	static int8_t x1462 = INT8_MIN;
	int8_t x1463 = 1;
	static int64_t t41 = 20LL;

	t41 = (((x1461%x1462)>>x1463)&x1464);

	if (t41 != 43LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1493 = 464497U;
	int8_t x1494 = -53;
	volatile int32_t x1496 = -1;
	volatile uint32_t t42 = 1442U;

	t42 = (((x1493%x1494)>>x1495)&x1496);

	if (t42 != 3628U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1530 = -1;
	static uint16_t x1531 = 0U;
	static uint64_t x1532 = 119061199504LLU;

	t43 = (((x1529%x1530)>>x1531)&x1532);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1537 = INT64_MIN;
	static uint16_t x1538 = 1U;
	static uint32_t x1539 = 56U;
	int64_t x1540 = 5558425802746317LL;
	static volatile int64_t t44 = 415238107LL;

	t44 = (((x1537%x1538)>>x1539)&x1540);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1561 = UINT8_MAX;
	int8_t x1562 = -7;
	int16_t x1564 = INT16_MIN;
	volatile int32_t t45 = -187693954;

	t45 = (((x1561%x1562)>>x1563)&x1564);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1617 = INT32_MIN;
	int8_t x1618 = INT8_MIN;
	static int8_t x1619 = 4;
	int64_t x1620 = 1112046761557704272LL;
	int64_t t46 = 1031922162LL;

	t46 = (((x1617%x1618)>>x1619)&x1620);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1633 = 39U;
	int64_t x1634 = -4144320LL;
	static uint16_t x1635 = 0U;
	static volatile int16_t x1636 = INT16_MIN;
	volatile int64_t t47 = -589943885LL;

	t47 = (((x1633%x1634)>>x1635)&x1636);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1653 = 437400589041341658LLU;
	int64_t x1654 = 2257619985324451LL;
	int8_t x1655 = 59;
	static int8_t x1656 = -1;
	volatile uint64_t t48 = 3680678649972868LLU;

	t48 = (((x1653%x1654)>>x1655)&x1656);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1673 = UINT32_MAX;
	static volatile uint16_t x1675 = 26U;

	t49 = (((x1673%x1674)>>x1675)&x1676);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x1773 = 50041U;
	int32_t x1774 = -1;
	volatile int16_t x1776 = INT16_MIN;
	uint32_t t50 = 1987U;

	t50 = (((x1773%x1774)>>x1775)&x1776);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1778 = -512259;
	static int16_t x1779 = 48;
	volatile int32_t x1780 = -254226;
	volatile uint64_t t51 = 3053802LLU;

	t51 = (((x1777%x1778)>>x1779)&x1780);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1805 = INT64_MIN;
	static volatile int64_t t52 = 6LL;

	t52 = (((x1805%x1806)>>x1807)&x1808);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1817 = UINT16_MAX;
	int64_t x1818 = INT64_MAX;
	int8_t x1819 = 25;
	static uint16_t x1820 = 3942U;
	int64_t t53 = 40217091844LL;

	t53 = (((x1817%x1818)>>x1819)&x1820);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1825 = UINT16_MAX;
	static int64_t x1826 = -67910305581LL;
	static uint8_t x1827 = 0U;
	volatile int64_t t54 = -1778644796LL;

	t54 = (((x1825%x1826)>>x1827)&x1828);

	if (t54 != 45LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1838 = UINT64_MAX;
	static uint8_t x1839 = 1U;
	volatile uint64_t t55 = 59611LLU;

	t55 = (((x1837%x1838)>>x1839)&x1840);

	if (t55 != 18LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1930 = INT64_MIN;
	int64_t x1931 = 1LL;
	int8_t x1932 = INT8_MIN;
	volatile int64_t t56 = -7LL;

	t56 = (((x1929%x1930)>>x1931)&x1932);

	if (t56 != 16256LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1965 = 1U;
	volatile int32_t x1966 = INT32_MIN;
	static int16_t x1968 = INT16_MIN;
	volatile int32_t t57 = 7;

	t57 = (((x1965%x1966)>>x1967)&x1968);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1969 = UINT32_MAX;
	static volatile int16_t x1970 = INT16_MAX;
	uint8_t x1971 = 13U;
	uint32_t x1972 = 8809345U;
	volatile uint32_t t58 = 38U;

	t58 = (((x1969%x1970)>>x1971)&x1972);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2005 = 145131LL;
	static int8_t x2006 = INT8_MIN;
	int8_t x2007 = 0;

	t59 = (((x2005%x2006)>>x2007)&x2008);

	if (t59 != 9LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2065 = UINT64_MAX;
	volatile int64_t x2066 = INT64_MIN;
	static uint8_t x2067 = 1U;
	int16_t x2068 = -1;
	volatile uint64_t t60 = 236087927LLU;

	t60 = (((x2065%x2066)>>x2067)&x2068);

	if (t60 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2069 = INT16_MAX;
	static volatile int64_t x2070 = INT64_MIN;
	uint8_t x2071 = 46U;
	int8_t x2072 = INT8_MAX;
	int64_t t61 = -268363849833017LL;

	t61 = (((x2069%x2070)>>x2071)&x2072);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2122 = 3U;
	uint8_t x2123 = 13U;
	int16_t x2124 = -971;
	static uint64_t t62 = 3LLU;

	t62 = (((x2121%x2122)>>x2123)&x2124);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2141 = 3U;
	int16_t x2142 = -1;
	int16_t x2143 = 1;
	int64_t t63 = 1077239062060LL;

	t63 = (((x2141%x2142)>>x2143)&x2144);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2161 = 25;
	static uint64_t x2162 = 50247203822483096LLU;
	uint32_t x2164 = UINT32_MAX;
	uint64_t t64 = 5306935LLU;

	t64 = (((x2161%x2162)>>x2163)&x2164);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x2201 = UINT8_MAX;
	static int8_t x2202 = -1;
	static int8_t x2203 = 10;
	int16_t x2204 = INT16_MIN;
	volatile int32_t t65 = -1;

	t65 = (((x2201%x2202)>>x2203)&x2204);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x2213 = INT16_MIN;
	static int16_t x2214 = -1;
	uint16_t x2215 = 12U;
	int16_t x2216 = INT16_MAX;

	t66 = (((x2213%x2214)>>x2215)&x2216);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2258 = INT32_MAX;
	int16_t x2259 = 1;
	uint64_t x2260 = 299LLU;
	volatile uint64_t t67 = 214116393LLU;

	t67 = (((x2257%x2258)>>x2259)&x2260);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2262 = -1LL;
	int32_t x2263 = 1;
	int16_t x2264 = -1;
	volatile int64_t t68 = 2915862494LL;

	t68 = (((x2261%x2262)>>x2263)&x2264);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2266 = INT64_MIN;
	uint16_t x2267 = 6U;
	int64_t x2268 = INT64_MIN;
	volatile uint64_t t69 = 16776065LLU;

	t69 = (((x2265%x2266)>>x2267)&x2268);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2269 = 1U;
	int8_t x2270 = INT8_MIN;
	static uint32_t x2272 = 161U;
	static uint32_t t70 = 7861810U;

	t70 = (((x2269%x2270)>>x2271)&x2272);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2361 = INT32_MIN;
	volatile int16_t x2362 = -1;
	static uint8_t x2363 = 0U;
	uint16_t x2364 = UINT16_MAX;
	int32_t t71 = 15767694;

	t71 = (((x2361%x2362)>>x2363)&x2364);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2405 = 3070U;
	volatile int64_t x2406 = -1LL;
	uint32_t x2407 = 9U;
	static int16_t x2408 = -488;
	int64_t t72 = -21760972LL;

	t72 = (((x2405%x2406)>>x2407)&x2408);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x2465 = -1LL;
	static uint64_t x2466 = 33913309181LLU;
	uint8_t x2467 = 0U;
	volatile int64_t x2468 = INT64_MIN;

	t73 = (((x2465%x2466)>>x2467)&x2468);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x2481 = UINT64_MAX;
	int16_t x2483 = 1;
	volatile int64_t x2484 = INT64_MIN;
	static uint64_t t74 = 759201LLU;

	t74 = (((x2481%x2482)>>x2483)&x2484);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x2509 = 1313LLU;
	int8_t x2510 = -36;
	int16_t x2511 = 5;
	int8_t x2512 = INT8_MIN;
	uint64_t t75 = 1324988378110LLU;

	t75 = (((x2509%x2510)>>x2511)&x2512);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2553 = INT8_MIN;
	int16_t x2554 = -1;
	uint16_t x2555 = 7U;
	uint32_t t76 = 447816U;

	t76 = (((x2553%x2554)>>x2555)&x2556);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2625 = 1342U;
	int16_t x2626 = -183;
	uint8_t x2627 = 0U;
	int8_t x2628 = INT8_MIN;
	int32_t t77 = 1;

	t77 = (((x2625%x2626)>>x2627)&x2628);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x2677 = 3759LLU;
	volatile int8_t x2678 = INT8_MIN;
	int64_t x2680 = INT64_MIN;
	volatile uint64_t t78 = 17480683LLU;

	t78 = (((x2677%x2678)>>x2679)&x2680);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2689 = 195U;
	uint32_t x2690 = 1935U;
	volatile int16_t x2691 = 0;
	int32_t x2692 = -21;
	volatile uint32_t t79 = 3700486U;

	t79 = (((x2689%x2690)>>x2691)&x2692);

	if (t79 != 195U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x2909 = 105252962241234971LLU;
	static volatile uint16_t x2910 = UINT16_MAX;
	int16_t x2911 = 0;
	int32_t x2912 = INT32_MAX;
	uint64_t t80 = 306547LLU;

	t80 = (((x2909%x2910)>>x2911)&x2912);

	if (t80 != 10886LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2937 = -16;
	int64_t x2938 = -1LL;
	volatile int16_t x2939 = 0;
	volatile int16_t x2940 = INT16_MAX;
	static int64_t t81 = 484733375LL;

	t81 = (((x2937%x2938)>>x2939)&x2940);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x3061 = INT32_MIN;
	static uint8_t x3063 = 26U;
	static volatile uint32_t x3064 = 436U;
	volatile uint32_t t82 = 48U;

	t82 = (((x3061%x3062)>>x3063)&x3064);

	if (t82 != 32U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3073 = 59U;
	int64_t x3074 = -1LL;
	volatile int64_t x3076 = -1LL;
	static int64_t t83 = -4435259300431LL;

	t83 = (((x3073%x3074)>>x3075)&x3076);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x3089 = INT8_MAX;
	int8_t x3090 = INT8_MAX;
	static uint16_t x3091 = 6U;

	t84 = (((x3089%x3090)>>x3091)&x3092);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x3197 = UINT32_MAX;
	volatile int16_t x3198 = -1;
	uint8_t x3199 = 8U;
	static int16_t x3200 = -36;
	uint32_t t85 = 1881U;

	t85 = (((x3197%x3198)>>x3199)&x3200);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x3229 = 1;
	volatile int16_t x3230 = INT16_MIN;
	uint32_t x3231 = 0U;
	volatile int32_t t86 = -14;

	t86 = (((x3229%x3230)>>x3231)&x3232);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x3249 = 57U;
	uint8_t x3250 = 61U;
	int32_t x3251 = 8;
	static volatile int64_t x3252 = INT64_MIN;
	volatile int64_t t87 = 21351LL;

	t87 = (((x3249%x3250)>>x3251)&x3252);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3253 = -1;
	static int8_t x3254 = -1;
	int16_t x3255 = 1;
	int8_t x3256 = 0;
	int32_t t88 = 56817;

	t88 = (((x3253%x3254)>>x3255)&x3256);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3273 = UINT8_MAX;
	static uint16_t x3274 = 6U;
	uint8_t x3275 = 15U;
	volatile int64_t x3276 = -1LL;

	t89 = (((x3273%x3274)>>x3275)&x3276);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3333 = INT32_MAX;
	uint64_t x3334 = 27578036753071344LLU;
	volatile uint16_t x3335 = 4U;
	uint8_t x3336 = UINT8_MAX;
	static volatile uint64_t t90 = 954LLU;

	t90 = (((x3333%x3334)>>x3335)&x3336);

	if (t90 != 255LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3353 = 0;
	uint8_t x3354 = UINT8_MAX;
	uint32_t x3355 = 16U;
	static int64_t x3356 = INT64_MIN;

	t91 = (((x3353%x3354)>>x3355)&x3356);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3413 = 13U;
	uint8_t x3415 = 6U;
	volatile int32_t x3416 = 8;

	t92 = (((x3413%x3414)>>x3415)&x3416);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3441 = 1;
	uint8_t x3442 = 19U;
	volatile uint16_t x3443 = 11U;
	int32_t t93 = -63696481;

	t93 = (((x3441%x3442)>>x3443)&x3444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3533 = 1;
	int16_t x3534 = INT16_MIN;
	int8_t x3535 = 1;
	static int8_t x3536 = INT8_MIN;
	static int32_t t94 = 578;

	t94 = (((x3533%x3534)>>x3535)&x3536);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x3545 = 524944292LL;
	int8_t x3546 = INT8_MIN;
	volatile uint8_t x3547 = 11U;
	int16_t x3548 = -38;

	t95 = (((x3545%x3546)>>x3547)&x3548);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x3573 = 14U;
	int32_t x3575 = 4;
	int8_t x3576 = 10;
	static volatile int32_t t96 = -2318;

	t96 = (((x3573%x3574)>>x3575)&x3576);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3689 = -1;
	int16_t x3690 = 1;
	int8_t x3692 = INT8_MIN;
	static int32_t t97 = -127563;

	t97 = (((x3689%x3690)>>x3691)&x3692);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3753 = 4;
	uint8_t x3755 = 19U;
	uint16_t x3756 = 4283U;
	uint64_t t98 = 776806998LLU;

	t98 = (((x3753%x3754)>>x3755)&x3756);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3765 = UINT64_MAX;
	int64_t x3766 = -1LL;
	int8_t x3767 = 0;
	uint64_t t99 = 1059LLU;

	t99 = (((x3765%x3766)>>x3767)&x3768);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

