#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x33 = INT16_MAX;
int16_t x35 = INT16_MIN;
uint8_t x64 = 22U;
volatile int64_t t2 = 622429LL;
uint32_t x301 = UINT32_MAX;
int8_t x350 = INT8_MIN;
int64_t x370 = INT64_MIN;
int64_t x371 = INT64_MIN;
uint64_t x372 = 3LLU;
static int8_t x508 = 0;
int64_t t10 = -340425462663827LL;
static int16_t x543 = 7254;
static uint8_t x586 = 7U;
volatile uint64_t x588 = 13LLU;
static int8_t x613 = INT8_MAX;
volatile int16_t x615 = INT16_MIN;
uint32_t x681 = UINT32_MAX;
uint64_t x682 = 2LLU;
int64_t x771 = -1LL;
int64_t x826 = INT64_MIN;
uint8_t x827 = UINT8_MAX;
static uint8_t x828 = 2U;
uint8_t x919 = UINT8_MAX;
volatile uint8_t x920 = 3U;
int64_t x966 = INT64_MAX;
volatile int16_t x974 = -58;
int8_t x1003 = INT8_MAX;
static int64_t x1023 = -1LL;
int16_t x1028 = 1;
int64_t x1159 = INT64_MAX;
volatile int64_t t32 = -44644330243LL;
volatile int64_t x1230 = INT64_MIN;
int32_t x1231 = -1;
static int16_t x1268 = 1;
uint64_t t37 = 338471LLU;
uint32_t x1367 = 32451025U;
volatile int64_t t38 = -8LL;
int16_t x1395 = 1;
uint32_t x1534 = UINT32_MAX;
int64_t x1535 = INT64_MIN;
uint64_t x1709 = 1225557471512104LLU;
uint64_t t45 = 792LLU;
static int32_t x1722 = -1;
uint32_t x1729 = UINT32_MAX;
int64_t x1731 = INT64_MIN;
uint16_t x1732 = 1U;
uint32_t x1738 = 179384U;
uint32_t x1768 = 0U;
static volatile int32_t t51 = 3438;
static int32_t x1775 = -84;
volatile uint8_t x1776 = 3U;
uint64_t x1835 = UINT64_MAX;
volatile int8_t x1836 = 1;
uint64_t t53 = 28143LLU;
int8_t x1918 = -6;
int8_t x2083 = 1;
static int8_t x2092 = 0;
uint32_t x2293 = 8609407U;
int32_t x2327 = INT32_MAX;
int16_t x2358 = -78;
static volatile int32_t t63 = 265206;
int8_t x2403 = -1;
volatile uint16_t x2404 = 0U;
volatile int16_t x2415 = INT16_MAX;
int64_t t65 = -164742LL;
int16_t x2496 = 3;
volatile int64_t t67 = 10236902LL;
static int64_t x2791 = -1LL;
volatile int8_t x2810 = INT8_MIN;
int32_t x2841 = 1000175;
volatile uint64_t x2842 = UINT64_MAX;
uint64_t t73 = 5803450979LLU;
static uint16_t x2904 = 2U;
int32_t x2978 = INT32_MIN;
static uint16_t x2980 = 1U;
volatile uint64_t t76 = 5LLU;
volatile int32_t x2982 = INT32_MAX;
uint32_t x2983 = 39435576U;
int64_t x3014 = INT64_MIN;
int16_t x3015 = -11638;
uint64_t x3016 = 8LLU;
volatile int16_t x3037 = -24;
volatile int64_t x3038 = INT64_MIN;
int8_t x3116 = 1;
volatile int32_t x3150 = -1;
volatile uint64_t x3151 = UINT64_MAX;
int32_t x3185 = INT32_MIN;
volatile int16_t x3188 = 13;
int32_t t84 = -56739;
static int16_t x3232 = 6;
uint64_t x3242 = UINT64_MAX;
volatile int16_t x3244 = 11;
static uint64_t x3338 = UINT64_MAX;
volatile uint16_t x3340 = 1U;
int32_t x3420 = 30;
uint8_t x3442 = 1U;
static uint64_t x3450 = 1336154119LLU;
volatile uint64_t t91 = 374593657289LLU;
volatile int64_t t92 = -130032661LL;
static uint64_t x3519 = 1159835722930293LLU;
volatile uint8_t x3520 = 20U;
volatile uint64_t t94 = 0LLU;
int16_t x3717 = 26;
int64_t x3727 = INT64_MAX;
int16_t x3743 = -20;


void f0(void) {
	int16_t x34 = INT16_MIN;
	int8_t x36 = 1;
	int32_t t0 = 1922328;

	t0 = (((x33/x34)%x35)<<x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MIN;
	static int8_t x63 = -22;
	int64_t t1 = 232424985643766LL;

	t1 = (((x61/x62)%x63)<<x64);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x141 = INT64_MAX;
	int64_t x142 = INT64_MIN;
	int64_t x143 = 434525695269930LL;
	int16_t x144 = 1;

	t2 = (((x141/x142)%x143)<<x144);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x153 = INT64_MAX;
	uint32_t x154 = 28U;
	int8_t x155 = 1;
	volatile uint64_t x156 = 47LLU;
	volatile int64_t t3 = -1326026LL;

	t3 = (((x153/x154)%x155)<<x156);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MAX;
	int64_t x227 = -305734824300082662LL;
	uint32_t x228 = 13U;
	int64_t t4 = 67680912LL;

	t4 = (((x225/x226)%x227)<<x228);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x245 = 937U;
	static volatile int32_t x246 = INT32_MIN;
	int32_t x247 = -25670;
	int8_t x248 = 3;
	volatile int32_t t5 = 347567663;

	t5 = (((x245/x246)%x247)<<x248);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x302 = UINT32_MAX;
	static uint16_t x303 = UINT16_MAX;
	uint8_t x304 = 3U;
	static uint32_t t6 = 16565U;

	t6 = (((x301/x302)%x303)<<x304);

	if (t6 != 8U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x341 = -60;
	uint32_t x342 = 118U;
	static int32_t x343 = -1;
	int16_t x344 = 12;
	uint32_t t7 = 10U;

	t7 = (((x341/x342)%x343)<<x344);

	if (t7 != 3057430528U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = 0U;
	uint32_t t8 = 115330U;

	t8 = (((x349/x350)%x351)<<x352);

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x369 = 2132U;
	static volatile int64_t t9 = -5118013550626914LL;

	t9 = (((x369/x370)%x371)<<x372);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x505 = 33;
	int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MIN;

	t10 = (((x505/x506)%x507)<<x508);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x513 = 492175240;
	uint32_t x514 = 1186U;
	volatile int16_t x515 = 2;
	int8_t x516 = 4;
	uint32_t t11 = 2U;

	t11 = (((x513/x514)%x515)<<x516);

	if (t11 != 16U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x541 = UINT8_MAX;
	uint8_t x542 = UINT8_MAX;
	volatile uint16_t x544 = 0U;
	int32_t t12 = -1891;

	t12 = (((x541/x542)%x543)<<x544);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x585 = UINT16_MAX;
	volatile uint64_t x587 = 4710350LLU;
	volatile uint64_t t13 = 173875540991LLU;

	t13 = (((x585/x586)%x587)<<x588);

	if (t13 != 76693504LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x614 = 5U;
	volatile uint64_t x616 = 1LLU;
	volatile int32_t t14 = -105;

	t14 = (((x613/x614)%x615)<<x616);

	if (t14 != 50) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x653 = 3844122U;
	int16_t x654 = -1;
	static int8_t x655 = -1;
	uint32_t x656 = 1U;
	uint32_t t15 = 65488511U;

	t15 = (((x653/x654)%x655)<<x656);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x683 = UINT8_MAX;
	uint16_t x684 = 0U;
	uint64_t t16 = 10739LLU;

	t16 = (((x681/x682)%x683)<<x684);

	if (t16 != 127LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x769 = 496042650U;
	volatile int32_t x770 = INT32_MIN;
	uint8_t x772 = 4U;
	int64_t t17 = 35207366423274706LL;

	t17 = (((x769/x770)%x771)<<x772);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x825 = 128035995U;
	int64_t t18 = 35161300196873LL;

	t18 = (((x825/x826)%x827)<<x828);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x877 = -1913;
	volatile int64_t x878 = INT64_MAX;
	static int16_t x879 = -5474;
	static volatile uint8_t x880 = 7U;
	static int64_t t19 = -1415974918246701LL;

	t19 = (((x877/x878)%x879)<<x880);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x881 = UINT32_MAX;
	uint64_t x882 = 61306LLU;
	int16_t x883 = INT16_MIN;
	uint8_t x884 = 45U;
	uint64_t t20 = 1479650LLU;

	t20 = (((x881/x882)%x883)<<x884);

	if (t20 != 2464911555427303424LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x885 = INT64_MIN;
	uint64_t x886 = 7321739761LLU;
	uint16_t x887 = 1621U;
	static volatile uint8_t x888 = 29U;
	volatile uint64_t t21 = 5437624542LLU;

	t21 = (((x885/x886)%x887)<<x888);

	if (t21 != 661961834496LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x897 = 9;
	int16_t x898 = INT16_MIN;
	uint64_t x899 = UINT64_MAX;
	static volatile int8_t x900 = 2;
	uint64_t t22 = 285118239227626461LLU;

	t22 = (((x897/x898)%x899)<<x900);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x917 = -1;
	int16_t x918 = INT16_MAX;
	int32_t t23 = -4;

	t23 = (((x917/x918)%x919)<<x920);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x941 = 1194910412358710290LLU;
	int16_t x942 = -153;
	int16_t x943 = -84;
	volatile uint64_t x944 = 4LLU;
	volatile uint64_t t24 = 11LLU;

	t24 = (((x941/x942)%x943)<<x944);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x965 = UINT32_MAX;
	int16_t x967 = -1;
	static volatile int16_t x968 = 23;
	int64_t t25 = -3466930654284354LL;

	t25 = (((x965/x966)%x967)<<x968);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x973 = -1;
	int8_t x975 = INT8_MIN;
	static int8_t x976 = 0;
	volatile int32_t t26 = 3911;

	t26 = (((x973/x974)%x975)<<x976);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1001 = -1;
	volatile int8_t x1002 = 7;
	int16_t x1004 = 0;
	int32_t t27 = 8713;

	t27 = (((x1001/x1002)%x1003)<<x1004);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1021 = -1;
	uint16_t x1022 = 5U;
	int8_t x1024 = 6;
	volatile int64_t t28 = -6731018851LL;

	t28 = (((x1021/x1022)%x1023)<<x1024);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x1025 = UINT32_MAX;
	static int64_t x1026 = INT64_MAX;
	uint32_t x1027 = 430U;
	static volatile int64_t t29 = 450337952334974978LL;

	t29 = (((x1025/x1026)%x1027)<<x1028);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1157 = 75U;
	uint64_t x1158 = 39859653023LLU;
	int8_t x1160 = 0;
	volatile uint64_t t30 = 3634931015298LLU;

	t30 = (((x1157/x1158)%x1159)<<x1160);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1165 = INT32_MAX;
	int16_t x1166 = -1;
	uint32_t x1167 = 2153U;
	static int8_t x1168 = 14;
	uint32_t t31 = 844U;

	t31 = (((x1165/x1166)%x1167)<<x1168);

	if (t31 != 29294592U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1173 = -43706LL;
	int32_t x1174 = INT32_MAX;
	uint32_t x1175 = UINT32_MAX;
	uint8_t x1176 = 20U;

	t32 = (((x1173/x1174)%x1175)<<x1176);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1189 = INT64_MAX;
	int8_t x1190 = 9;
	static int16_t x1191 = INT16_MIN;
	static int32_t x1192 = 3;
	volatile int64_t t33 = -11563985607066925LL;

	t33 = (((x1189/x1190)%x1191)<<x1192);

	if (t33 != 29120LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1229 = INT64_MIN;
	int8_t x1232 = 4;
	int64_t t34 = 62771694841317458LL;

	t34 = (((x1229/x1230)%x1231)<<x1232);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1241 = 24U;
	int32_t x1242 = -1233;
	static uint64_t x1243 = 1424823LLU;
	uint16_t x1244 = 13U;
	volatile uint64_t t35 = 852LLU;

	t35 = (((x1241/x1242)%x1243)<<x1244);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1265 = 2U;
	static uint8_t x1266 = 45U;
	int64_t x1267 = -1LL;
	static volatile int64_t t36 = -1993888321LL;

	t36 = (((x1265/x1266)%x1267)<<x1268);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1325 = UINT32_MAX;
	int8_t x1326 = -2;
	uint64_t x1327 = 1643935061LLU;
	static volatile int16_t x1328 = 5;

	t37 = (((x1325/x1326)%x1327)<<x1328);

	if (t37 != 32LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1365 = 41223;
	int64_t x1366 = INT64_MAX;
	static uint8_t x1368 = 54U;

	t38 = (((x1365/x1366)%x1367)<<x1368);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1393 = -96;
	int32_t x1394 = 427861634;
	static int32_t x1396 = 20;
	int32_t t39 = 3300624;

	t39 = (((x1393/x1394)%x1395)<<x1396);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1533 = 5622U;
	uint16_t x1536 = 14U;
	int64_t t40 = -65598716LL;

	t40 = (((x1533/x1534)%x1535)<<x1536);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1537 = INT16_MIN;
	int8_t x1538 = -32;
	volatile int16_t x1539 = INT16_MAX;
	uint32_t x1540 = 1U;
	int32_t t41 = 15531682;

	t41 = (((x1537/x1538)%x1539)<<x1540);

	if (t41 != 2048) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1569 = 471U;
	static uint16_t x1570 = UINT16_MAX;
	int8_t x1571 = -1;
	int8_t x1572 = 1;
	volatile uint32_t t42 = 117U;

	t42 = (((x1569/x1570)%x1571)<<x1572);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1581 = INT32_MIN;
	int64_t x1582 = INT64_MIN;
	volatile int32_t x1583 = INT32_MAX;
	uint16_t x1584 = 12U;
	int64_t t43 = -212896764976LL;

	t43 = (((x1581/x1582)%x1583)<<x1584);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x1697 = 248U;
	static int16_t x1698 = INT16_MIN;
	int8_t x1699 = INT8_MIN;
	int8_t x1700 = 1;
	static int32_t t44 = 0;

	t44 = (((x1697/x1698)%x1699)<<x1700);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1710 = 251539U;
	int32_t x1711 = -1;
	uint8_t x1712 = 1U;

	t45 = (((x1709/x1710)%x1711)<<x1712);

	if (t45 != 9744472796LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1721 = -1066255519117927LL;
	uint32_t x1723 = UINT32_MAX;
	uint8_t x1724 = 0U;
	static volatile int64_t t46 = 3747750LL;

	t46 = (((x1721/x1722)%x1723)<<x1724);

	if (t46 != 4118330407LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1730 = INT32_MAX;
	volatile int64_t t47 = 357449000550LL;

	t47 = (((x1729/x1730)%x1731)<<x1732);

	if (t47 != 4LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1733 = 314501;
	static uint16_t x1734 = 60U;
	uint16_t x1735 = 213U;
	int16_t x1736 = 3;
	volatile int32_t t48 = -773942;

	t48 = (((x1733/x1734)%x1735)<<x1736);

	if (t48 != 1032) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x1737 = INT64_MAX;
	uint16_t x1739 = UINT16_MAX;
	static uint8_t x1740 = 15U;
	volatile int64_t t49 = -129628LL;

	t49 = (((x1737/x1738)%x1739)<<x1740);

	if (t49 != 338329600LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1745 = 35U;
	volatile int16_t x1746 = INT16_MIN;
	int32_t x1747 = 15155;
	static uint8_t x1748 = 3U;
	volatile int32_t t50 = 29075562;

	t50 = (((x1745/x1746)%x1747)<<x1748);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x1765 = INT32_MAX;
	static int8_t x1766 = 1;
	uint8_t x1767 = UINT8_MAX;

	t51 = (((x1765/x1766)%x1767)<<x1768);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1773 = 1106U;
	uint64_t x1774 = 951667446963692LLU;
	volatile uint64_t t52 = 2588957545563958LLU;

	t52 = (((x1773/x1774)%x1775)<<x1776);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1833 = -33;
	int32_t x1834 = -13332470;

	t53 = (((x1833/x1834)%x1835)<<x1836);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1917 = INT64_MIN;
	int32_t x1919 = 248431;
	uint8_t x1920 = 1U;
	volatile int64_t t54 = -1581LL;

	t54 = (((x1917/x1918)%x1919)<<x1920);

	if (t54 != 263532LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2081 = -16;
	static uint32_t x2082 = UINT32_MAX;
	volatile uint16_t x2084 = 3U;
	volatile uint32_t t55 = 4114U;

	t55 = (((x2081/x2082)%x2083)<<x2084);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2089 = 1;
	int32_t x2090 = INT32_MIN;
	volatile int64_t x2091 = INT64_MIN;
	volatile int64_t t56 = -16LL;

	t56 = (((x2089/x2090)%x2091)<<x2092);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2213 = 27824U;
	int8_t x2214 = INT8_MAX;
	int16_t x2215 = INT16_MAX;
	int16_t x2216 = 4;
	uint32_t t57 = 180U;

	t57 = (((x2213/x2214)%x2215)<<x2216);

	if (t57 != 3504U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2221 = INT16_MIN;
	uint64_t x2222 = 91879LLU;
	volatile int16_t x2223 = INT16_MAX;
	volatile int8_t x2224 = 1;
	static uint64_t t58 = 11020069LLU;

	t58 = (((x2221/x2222)%x2223)<<x2224);

	if (t58 != 60642LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2265 = 1885043LL;
	uint64_t x2266 = 9LLU;
	int8_t x2267 = INT8_MIN;
	int16_t x2268 = 1;
	volatile uint64_t t59 = 71400LLU;

	t59 = (((x2265/x2266)%x2267)<<x2268);

	if (t59 != 418898LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x2294 = 16950664151026LLU;
	volatile int8_t x2295 = -8;
	uint8_t x2296 = 1U;
	volatile uint64_t t60 = 1473545506575LLU;

	t60 = (((x2293/x2294)%x2295)<<x2296);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x2325 = 60U;
	uint8_t x2326 = 1U;
	int8_t x2328 = 0;
	int32_t t61 = 22312195;

	t61 = (((x2325/x2326)%x2327)<<x2328);

	if (t61 != 60) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2357 = INT16_MAX;
	int8_t x2359 = -1;
	int8_t x2360 = 5;
	int32_t t62 = -362595377;

	t62 = (((x2357/x2358)%x2359)<<x2360);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2385 = -2128;
	static int32_t x2386 = -52447;
	volatile int8_t x2387 = -2;
	uint64_t x2388 = 31LLU;

	t63 = (((x2385/x2386)%x2387)<<x2388);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2401 = INT8_MAX;
	static volatile int32_t x2402 = -1;
	int32_t t64 = 0;

	t64 = (((x2401/x2402)%x2403)<<x2404);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2413 = -8;
	int64_t x2414 = -1LL;
	uint8_t x2416 = 0U;

	t65 = (((x2413/x2414)%x2415)<<x2416);

	if (t65 != 8LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x2441 = 1U;
	int16_t x2442 = -1;
	static uint32_t x2443 = 6U;
	int32_t x2444 = 1;
	volatile uint32_t t66 = 7U;

	t66 = (((x2441/x2442)%x2443)<<x2444);

	if (t66 != 6U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2493 = INT32_MIN;
	int64_t x2494 = -1LL;
	int8_t x2495 = INT8_MAX;

	t67 = (((x2493/x2494)%x2495)<<x2496);

	if (t67 != 64LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2529 = -55;
	int32_t x2530 = INT32_MAX;
	int8_t x2531 = INT8_MIN;
	uint16_t x2532 = 5U;
	static int32_t t68 = -14068;

	t68 = (((x2529/x2530)%x2531)<<x2532);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2717 = INT32_MIN;
	int64_t x2718 = INT64_MIN;
	int32_t x2719 = INT32_MIN;
	uint8_t x2720 = 1U;
	volatile int64_t t69 = -1LL;

	t69 = (((x2717/x2718)%x2719)<<x2720);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2789 = 1908579209774374LL;
	volatile uint8_t x2790 = UINT8_MAX;
	uint32_t x2792 = 7U;
	volatile int64_t t70 = -931233599860159LL;

	t70 = (((x2789/x2790)%x2791)<<x2792);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2809 = INT16_MIN;
	int16_t x2811 = -1;
	volatile int8_t x2812 = 1;
	volatile int32_t t71 = -19610;

	t71 = (((x2809/x2810)%x2811)<<x2812);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2821 = 3U;
	static int8_t x2822 = INT8_MAX;
	volatile int64_t x2823 = INT64_MIN;
	uint8_t x2824 = 36U;
	static int64_t t72 = 122537908LL;

	t72 = (((x2821/x2822)%x2823)<<x2824);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2843 = -89;
	int8_t x2844 = 19;

	t73 = (((x2841/x2842)%x2843)<<x2844);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x2901 = -2LL;
	int16_t x2902 = -8004;
	int16_t x2903 = INT16_MAX;
	static int64_t t74 = 215358178LL;

	t74 = (((x2901/x2902)%x2903)<<x2904);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x2949 = INT64_MAX;
	volatile int16_t x2950 = 1118;
	static int32_t x2951 = INT32_MIN;
	uint8_t x2952 = 14U;
	volatile int64_t t75 = 52LL;

	t75 = (((x2949/x2950)%x2951)<<x2952);

	if (t75 != 11329493680128LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x2977 = INT64_MIN;
	uint64_t x2979 = UINT64_MAX;

	t76 = (((x2977/x2978)%x2979)<<x2980);

	if (t76 != 8589934592LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2981 = -1;
	static uint8_t x2984 = 10U;
	uint32_t t77 = 2390762U;

	t77 = (((x2981/x2982)%x2983)<<x2984);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2997 = -7;
	int32_t x2998 = INT32_MIN;
	volatile int64_t x2999 = -1LL;
	volatile uint32_t x3000 = 3U;
	volatile int64_t t78 = -114905LL;

	t78 = (((x2997/x2998)%x2999)<<x3000);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3013 = 1347U;
	volatile int64_t t79 = -4LL;

	t79 = (((x3013/x3014)%x3015)<<x3016);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x3039 = -1;
	int8_t x3040 = 10;
	int64_t t80 = -27723068932642LL;

	t80 = (((x3037/x3038)%x3039)<<x3040);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3113 = 9549U;
	static volatile int32_t x3114 = INT32_MIN;
	int16_t x3115 = INT16_MIN;
	int32_t t81 = -1835;

	t81 = (((x3113/x3114)%x3115)<<x3116);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3149 = 29;
	int16_t x3152 = 1;
	volatile uint64_t t82 = 78345621794LLU;

	t82 = (((x3149/x3150)%x3151)<<x3152);

	if (t82 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3165 = INT64_MIN;
	int32_t x3166 = INT32_MIN;
	static uint32_t x3167 = UINT32_MAX;
	static uint8_t x3168 = 2U;
	static volatile int64_t t83 = 426654508106462750LL;

	t83 = (((x3165/x3166)%x3167)<<x3168);

	if (t83 != 4LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3186 = -21;
	static uint16_t x3187 = 246U;

	t84 = (((x3185/x3186)%x3187)<<x3188);

	if (t84 != 1277952) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x3229 = -1LL;
	uint32_t x3230 = 229U;
	volatile int16_t x3231 = -1;
	volatile int64_t t85 = -3671114345800LL;

	t85 = (((x3229/x3230)%x3231)<<x3232);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3241 = UINT64_MAX;
	uint8_t x3243 = 6U;
	static uint64_t t86 = 10466LLU;

	t86 = (((x3241/x3242)%x3243)<<x3244);

	if (t86 != 2048LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3325 = -29712;
	int64_t x3326 = INT64_MAX;
	static int32_t x3327 = INT32_MIN;
	int64_t x3328 = 0LL;
	volatile int64_t t87 = 65448782LL;

	t87 = (((x3325/x3326)%x3327)<<x3328);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3337 = -1;
	uint64_t x3339 = 7568LLU;
	uint64_t t88 = 128642845019LLU;

	t88 = (((x3337/x3338)%x3339)<<x3340);

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3417 = 1045826499739707726LL;
	uint16_t x3418 = UINT16_MAX;
	static uint8_t x3419 = 1U;
	volatile int64_t t89 = -2412177620489186LL;

	t89 = (((x3417/x3418)%x3419)<<x3420);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3441 = 0LLU;
	int16_t x3443 = -61;
	int8_t x3444 = 7;
	uint64_t t90 = 6LLU;

	t90 = (((x3441/x3442)%x3443)<<x3444);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x3449 = 2U;
	volatile int64_t x3451 = INT64_MAX;
	static volatile int16_t x3452 = 0;

	t91 = (((x3449/x3450)%x3451)<<x3452);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x3509 = 90244113927973LL;
	int32_t x3510 = INT32_MIN;
	static int32_t x3511 = -1;
	int8_t x3512 = 20;

	t92 = (((x3509/x3510)%x3511)<<x3512);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x3517 = INT8_MIN;
	volatile int8_t x3518 = INT8_MIN;
	volatile uint64_t t93 = 45230LLU;

	t93 = (((x3517/x3518)%x3519)<<x3520);

	if (t93 != 1048576LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3673 = INT32_MIN;
	static int8_t x3674 = INT8_MIN;
	static uint64_t x3675 = 957763LLU;
	int16_t x3676 = 1;

	t94 = (((x3673/x3674)%x3675)<<x3676);

	if (t94 != 990490LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x3718 = 60406627;
	uint32_t x3719 = 3497293U;
	volatile uint32_t x3720 = 12U;
	uint32_t t95 = 0U;

	t95 = (((x3717/x3718)%x3719)<<x3720);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3725 = 3U;
	volatile int32_t x3726 = -5;
	uint32_t x3728 = 0U;
	int64_t t96 = -4431632033034926826LL;

	t96 = (((x3725/x3726)%x3727)<<x3728);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x3729 = INT64_MAX;
	static int32_t x3730 = -194188;
	uint64_t x3731 = 5261038069691938581LLU;
	uint8_t x3732 = 0U;
	volatile uint64_t t97 = 41837LLU;

	t97 = (((x3729/x3730)%x3731)<<x3732);

	if (t97 != 2663582367507050111LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3741 = -1LL;
	static volatile uint16_t x3742 = UINT16_MAX;
	int8_t x3744 = 16;
	static int64_t t98 = -4075201408281029LL;

	t98 = (((x3741/x3742)%x3743)<<x3744);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3753 = UINT8_MAX;
	int32_t x3754 = INT32_MIN;
	int32_t x3755 = INT32_MIN;
	int16_t x3756 = 3;
	int32_t t99 = 1;

	t99 = (((x3753/x3754)%x3755)<<x3756);

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

