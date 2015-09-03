#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x59 = INT8_MIN;
static int16_t x60 = 1;
int32_t x105 = INT32_MIN;
int32_t t2 = 124843016;
int64_t x113 = INT64_MIN;
uint8_t x116 = 2U;
int8_t x120 = 1;
volatile int32_t x196 = 0;
static int8_t x210 = 0;
int8_t x213 = INT8_MIN;
int8_t x235 = -30;
static volatile int32_t t11 = 478240;
static int16_t x274 = INT16_MAX;
volatile int32_t t14 = -673;
uint8_t x334 = 75U;
uint64_t x335 = UINT64_MAX;
int8_t x443 = -1;
uint32_t x444 = 1U;
int32_t t19 = 46239993;
int32_t x480 = 6;
volatile uint8_t x507 = 10U;
int8_t x508 = 0;
static uint16_t x540 = 20U;
int32_t x586 = -1;
int8_t x602 = INT8_MIN;
volatile int8_t x604 = 0;
volatile int16_t x649 = INT16_MAX;
int16_t x651 = INT16_MAX;
int16_t x652 = 0;
static volatile int32_t t25 = -3757;
static uint32_t x682 = 100U;
static int32_t x684 = 0;
int16_t x693 = 27;
int32_t t27 = 375956;
static int32_t x769 = -2421225;
int64_t x770 = -1LL;
uint32_t x772 = 21U;
int32_t t29 = 28694563;
int16_t x825 = INT16_MIN;
int32_t x843 = INT32_MAX;
uint8_t x844 = 1U;
static int32_t t31 = 676;
uint8_t x855 = UINT8_MAX;
int8_t x856 = 31;
static uint32_t x939 = 29289U;
int8_t x940 = 0;
static int32_t t36 = -844;
volatile int64_t x1022 = INT64_MIN;
volatile int32_t t39 = -352;
int32_t x1092 = 6;
static int8_t x1093 = INT8_MIN;
int8_t x1290 = -1;
volatile int32_t t43 = -322;
int32_t t45 = -181;
static uint8_t x1369 = UINT8_MAX;
volatile uint8_t x1372 = 1U;
uint8_t x1468 = 2U;
int16_t x1554 = -8147;
int16_t x1573 = INT16_MIN;
volatile int64_t x1575 = -101936LL;
uint8_t x1586 = UINT8_MAX;
uint32_t x1689 = UINT32_MAX;
static int8_t x1690 = INT8_MIN;
int32_t x1816 = 15;
int32_t t57 = 32;
int64_t x1928 = 0LL;
int16_t x1966 = INT16_MAX;
uint64_t x1974 = 1580069LLU;
uint32_t x1975 = 2376309U;
uint16_t x1987 = 1410U;
uint32_t x2004 = 0U;
uint32_t x2070 = 2U;
volatile int64_t x2133 = INT64_MAX;
static uint8_t x2136 = 1U;
uint8_t x2279 = UINT8_MAX;
volatile uint16_t x2310 = 8252U;
int32_t t76 = -306;
uint16_t x2354 = 129U;
static uint8_t x2390 = UINT8_MAX;
int64_t x2391 = INT64_MAX;
int16_t x2392 = 8;
volatile int32_t t79 = -22066;
static volatile int32_t t80 = -71928396;
int16_t x2603 = -1;
static int64_t x2613 = -3933772239132238LL;
volatile uint16_t x2678 = 1329U;
volatile int32_t t84 = -665330387;
uint16_t x2740 = 19U;
int32_t t86 = -27513;
volatile int64_t x2741 = 90804LL;
volatile int32_t t87 = 31;
int64_t x2941 = 140677377LL;
int32_t t93 = -691;
int16_t x3041 = INT16_MAX;
static int8_t x3091 = -53;
volatile int16_t x3202 = -1;


void f0(void) {
	static int64_t x13 = -1LL;
	uint16_t x14 = UINT16_MAX;
	volatile int16_t x15 = INT16_MIN;
	int8_t x16 = 12;
	static int32_t t0 = -1989154;

	t0 = (((x13==x14)==x15)>>x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x57 = UINT32_MAX;
	int64_t x58 = INT64_MAX;
	volatile int32_t t1 = 1;

	t1 = (((x57==x58)==x59)>>x60);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x106 = -1LL;
	int8_t x107 = INT8_MIN;
	uint8_t x108 = 12U;

	t2 = (((x105==x106)==x107)>>x108);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x114 = INT8_MIN;
	static uint32_t x115 = UINT32_MAX;
	volatile int32_t t3 = 20591630;

	t3 = (((x113==x114)==x115)>>x116);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x117 = -61;
	uint16_t x118 = UINT16_MAX;
	volatile int8_t x119 = INT8_MIN;
	volatile int32_t t4 = 6;

	t4 = (((x117==x118)==x119)>>x120);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x161 = 60U;
	uint64_t x162 = 3911629LLU;
	uint16_t x163 = 21U;
	static uint16_t x164 = 21U;
	static int32_t t5 = -8100031;

	t5 = (((x161==x162)==x163)>>x164);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x177 = 25967109519518LL;
	volatile int16_t x178 = -1;
	int16_t x179 = INT16_MIN;
	int8_t x180 = 13;
	volatile int32_t t6 = 1;

	t6 = (((x177==x178)==x179)>>x180);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x193 = 59774520U;
	uint32_t x194 = 23599731U;
	static int16_t x195 = -1056;
	volatile int32_t t7 = -15980;

	t7 = (((x193==x194)==x195)>>x196);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x201 = -152;
	int16_t x202 = INT16_MAX;
	int64_t x203 = INT64_MIN;
	int8_t x204 = 1;
	volatile int32_t t8 = -28999722;

	t8 = (((x201==x202)==x203)>>x204);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x209 = UINT8_MAX;
	uint16_t x211 = UINT16_MAX;
	int8_t x212 = 0;
	int32_t t9 = -157;

	t9 = (((x209==x210)==x211)>>x212);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x214 = 2811261081544434961LLU;
	volatile int32_t x215 = INT32_MIN;
	uint8_t x216 = 1U;
	int32_t t10 = 2733;

	t10 = (((x213==x214)==x215)>>x216);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x233 = INT32_MAX;
	int16_t x234 = 96;
	static uint8_t x236 = 0U;

	t11 = (((x233==x234)==x235)>>x236);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x265 = -1;
	static uint64_t x266 = UINT64_MAX;
	int64_t x267 = INT64_MIN;
	int32_t x268 = 10;
	volatile int32_t t12 = 175857793;

	t12 = (((x265==x266)==x267)>>x268);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x275 = INT8_MAX;
	int16_t x276 = 24;
	static volatile int32_t t13 = 347;

	t13 = (((x273==x274)==x275)>>x276);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x317 = 542333103302690LLU;
	volatile int16_t x318 = INT16_MAX;
	static int16_t x319 = -1;
	volatile int32_t x320 = 1;

	t14 = (((x317==x318)==x319)>>x320);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x333 = UINT64_MAX;
	uint16_t x336 = 3U;
	volatile int32_t t15 = -268155;

	t15 = (((x333==x334)==x335)>>x336);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x345 = 3977368109490848LLU;
	volatile uint32_t x346 = 5U;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = 1U;
	int32_t t16 = -44;

	t16 = (((x345==x346)==x347)>>x348);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x389 = INT64_MAX;
	uint64_t x390 = 49935606493LLU;
	int16_t x391 = 128;
	uint8_t x392 = 30U;
	int32_t t17 = 140;

	t17 = (((x389==x390)==x391)>>x392);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = 15445516LL;
	uint64_t x395 = 4627LLU;
	static uint16_t x396 = 17U;
	volatile int32_t t18 = -212;

	t18 = (((x393==x394)==x395)>>x396);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x441 = 1906972166LLU;
	volatile uint64_t x442 = 4252244LLU;

	t19 = (((x441==x442)==x443)>>x444);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x477 = -53073;
	uint16_t x478 = UINT16_MAX;
	static uint16_t x479 = 6848U;
	static volatile int32_t t20 = -3;

	t20 = (((x477==x478)==x479)>>x480);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x505 = 26U;
	uint16_t x506 = 263U;
	volatile int32_t t21 = -760857865;

	t21 = (((x505==x506)==x507)>>x508);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x537 = -1;
	int8_t x538 = INT8_MIN;
	int64_t x539 = -1LL;
	static int32_t t22 = 63;

	t22 = (((x537==x538)==x539)>>x540);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x585 = INT8_MIN;
	int64_t x587 = -21665519LL;
	volatile uint8_t x588 = 9U;
	int32_t t23 = -208082;

	t23 = (((x585==x586)==x587)>>x588);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x601 = 254692612504910LLU;
	volatile int64_t x603 = 106315579522983833LL;
	volatile int32_t t24 = 274;

	t24 = (((x601==x602)==x603)>>x604);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x650 = -1;

	t25 = (((x649==x650)==x651)>>x652);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x681 = 1;
	int64_t x683 = INT64_MIN;
	int32_t t26 = 2;

	t26 = (((x681==x682)==x683)>>x684);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x694 = UINT8_MAX;
	uint8_t x695 = 43U;
	int8_t x696 = 0;

	t27 = (((x693==x694)==x695)>>x696);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x721 = 5U;
	static uint8_t x722 = UINT8_MAX;
	volatile uint64_t x723 = 529090568LLU;
	static volatile uint8_t x724 = 22U;
	static int32_t t28 = 198;

	t28 = (((x721==x722)==x723)>>x724);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x771 = INT64_MIN;

	t29 = (((x769==x770)==x771)>>x772);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x826 = 40U;
	int32_t x827 = -428899;
	uint32_t x828 = 5U;
	int32_t t30 = 3;

	t30 = (((x825==x826)==x827)>>x828);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x841 = 4;
	int64_t x842 = -224980710317583LL;

	t31 = (((x841==x842)==x843)>>x844);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x845 = INT64_MAX;
	int16_t x846 = INT16_MIN;
	int64_t x847 = -1LL;
	int8_t x848 = 13;
	int32_t t32 = -4664;

	t32 = (((x845==x846)==x847)>>x848);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x853 = 15621352603LLU;
	int16_t x854 = INT16_MIN;
	int32_t t33 = 551142061;

	t33 = (((x853==x854)==x855)>>x856);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x865 = INT8_MIN;
	int32_t x866 = -1;
	int8_t x867 = 2;
	static uint8_t x868 = 2U;
	volatile int32_t t34 = -1072;

	t34 = (((x865==x866)==x867)>>x868);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x937 = -1;
	int64_t x938 = -32458224280274LL;
	volatile int32_t t35 = -164748321;

	t35 = (((x937==x938)==x939)>>x940);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x961 = 1240;
	volatile int8_t x962 = 1;
	static uint8_t x963 = UINT8_MAX;
	volatile int32_t x964 = 27;

	t36 = (((x961==x962)==x963)>>x964);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1021 = UINT16_MAX;
	uint32_t x1023 = 12492U;
	static uint8_t x1024 = 4U;
	int32_t t37 = 22;

	t37 = (((x1021==x1022)==x1023)>>x1024);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1061 = INT64_MAX;
	static int16_t x1062 = INT16_MIN;
	volatile int64_t x1063 = INT64_MAX;
	int16_t x1064 = 0;
	static int32_t t38 = -11;

	t38 = (((x1061==x1062)==x1063)>>x1064);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1077 = -2464069515040955356LL;
	uint8_t x1078 = UINT8_MAX;
	int8_t x1079 = -40;
	volatile uint16_t x1080 = 29U;

	t39 = (((x1077==x1078)==x1079)>>x1080);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1089 = 0;
	uint32_t x1090 = 1737U;
	static uint32_t x1091 = 384940U;
	int32_t t40 = -118716;

	t40 = (((x1089==x1090)==x1091)>>x1092);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x1094 = 3;
	int8_t x1095 = -1;
	int16_t x1096 = 7;
	static int32_t t41 = -12566;

	t41 = (((x1093==x1094)==x1095)>>x1096);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1285 = UINT32_MAX;
	int8_t x1286 = -7;
	volatile uint16_t x1287 = UINT16_MAX;
	volatile uint16_t x1288 = 0U;
	volatile int32_t t42 = -556178;

	t42 = (((x1285==x1286)==x1287)>>x1288);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1289 = -1;
	int32_t x1291 = INT32_MIN;
	int16_t x1292 = 10;

	t43 = (((x1289==x1290)==x1291)>>x1292);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1353 = 220825345;
	int16_t x1354 = -1;
	uint64_t x1355 = UINT64_MAX;
	int8_t x1356 = 3;
	static int32_t t44 = 1050;

	t44 = (((x1353==x1354)==x1355)>>x1356);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1365 = INT16_MAX;
	uint32_t x1366 = 389711U;
	int32_t x1367 = INT32_MAX;
	uint8_t x1368 = 6U;

	t45 = (((x1365==x1366)==x1367)>>x1368);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1370 = 4164;
	volatile int64_t x1371 = -1LL;
	int32_t t46 = -48823;

	t46 = (((x1369==x1370)==x1371)>>x1372);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1421 = INT8_MIN;
	uint64_t x1422 = 42027141644210602LLU;
	int64_t x1423 = INT64_MIN;
	uint8_t x1424 = 4U;
	volatile int32_t t47 = 11833514;

	t47 = (((x1421==x1422)==x1423)>>x1424);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1429 = -11;
	uint32_t x1430 = 27U;
	static int64_t x1431 = -3372LL;
	uint8_t x1432 = 29U;
	int32_t t48 = 1;

	t48 = (((x1429==x1430)==x1431)>>x1432);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1465 = INT8_MIN;
	static int16_t x1466 = 5567;
	int64_t x1467 = -3449614LL;
	int32_t t49 = 6;

	t49 = (((x1465==x1466)==x1467)>>x1468);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x1553 = -1;
	int64_t x1555 = -1LL;
	uint8_t x1556 = 23U;
	volatile int32_t t50 = 984614;

	t50 = (((x1553==x1554)==x1555)>>x1556);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1574 = INT64_MIN;
	static int8_t x1576 = 0;
	static volatile int32_t t51 = 6;

	t51 = (((x1573==x1574)==x1575)>>x1576);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1585 = 623U;
	int64_t x1587 = 576078375603547LL;
	uint8_t x1588 = 21U;
	volatile int32_t t52 = 15964350;

	t52 = (((x1585==x1586)==x1587)>>x1588);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1629 = INT32_MAX;
	int16_t x1630 = -1;
	int8_t x1631 = INT8_MAX;
	uint8_t x1632 = 5U;
	volatile int32_t t53 = 2259;

	t53 = (((x1629==x1630)==x1631)>>x1632);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1637 = 42U;
	int32_t x1638 = INT32_MIN;
	uint16_t x1639 = UINT16_MAX;
	uint16_t x1640 = 1U;
	int32_t t54 = 216691976;

	t54 = (((x1637==x1638)==x1639)>>x1640);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1645 = UINT64_MAX;
	static uint64_t x1646 = UINT64_MAX;
	uint32_t x1647 = 201U;
	static volatile int8_t x1648 = 31;
	int32_t t55 = 95668;

	t55 = (((x1645==x1646)==x1647)>>x1648);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1691 = -1;
	int8_t x1692 = 12;
	static volatile int32_t t56 = -241794;

	t56 = (((x1689==x1690)==x1691)>>x1692);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1813 = 23U;
	volatile int8_t x1814 = INT8_MIN;
	int32_t x1815 = -1;

	t57 = (((x1813==x1814)==x1815)>>x1816);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1817 = INT16_MIN;
	uint8_t x1818 = 15U;
	uint8_t x1819 = 1U;
	volatile int32_t x1820 = 14;
	volatile int32_t t58 = 121045;

	t58 = (((x1817==x1818)==x1819)>>x1820);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x1821 = INT32_MIN;
	int64_t x1822 = INT64_MIN;
	static uint16_t x1823 = 51U;
	int8_t x1824 = 0;
	int32_t t59 = 7728;

	t59 = (((x1821==x1822)==x1823)>>x1824);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1833 = 322765LL;
	int8_t x1834 = INT8_MAX;
	static int64_t x1835 = 7LL;
	uint64_t x1836 = 1LLU;
	static int32_t t60 = 0;

	t60 = (((x1833==x1834)==x1835)>>x1836);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x1921 = INT8_MIN;
	static int32_t x1922 = 219219;
	int32_t x1923 = 79209;
	static volatile int8_t x1924 = 0;
	int32_t t61 = -137873;

	t61 = (((x1921==x1922)==x1923)>>x1924);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1925 = INT8_MIN;
	volatile int32_t x1926 = -12964669;
	int8_t x1927 = INT8_MAX;
	static int32_t t62 = 1777596;

	t62 = (((x1925==x1926)==x1927)>>x1928);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x1965 = -1;
	int64_t x1967 = -1LL;
	uint8_t x1968 = 1U;
	int32_t t63 = 6;

	t63 = (((x1965==x1966)==x1967)>>x1968);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x1969 = 693U;
	volatile int32_t x1970 = 4414;
	static uint32_t x1971 = 6595869U;
	int16_t x1972 = 1;
	volatile int32_t t64 = -37720;

	t64 = (((x1969==x1970)==x1971)>>x1972);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x1973 = UINT64_MAX;
	uint16_t x1976 = 2U;
	int32_t t65 = -1802;

	t65 = (((x1973==x1974)==x1975)>>x1976);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1985 = -77;
	int32_t x1986 = -1;
	uint16_t x1988 = 1U;
	volatile int32_t t66 = 283134;

	t66 = (((x1985==x1986)==x1987)>>x1988);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x2001 = INT8_MIN;
	uint16_t x2002 = 7548U;
	int32_t x2003 = -1;
	volatile int32_t t67 = 1374387;

	t67 = (((x2001==x2002)==x2003)>>x2004);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x2041 = 17624220750531413LLU;
	uint64_t x2042 = UINT64_MAX;
	int32_t x2043 = INT32_MIN;
	volatile uint64_t x2044 = 0LLU;
	volatile int32_t t68 = -164;

	t68 = (((x2041==x2042)==x2043)>>x2044);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2053 = 1;
	static uint8_t x2054 = 0U;
	volatile int32_t x2055 = INT32_MIN;
	int8_t x2056 = 2;
	int32_t t69 = 376629007;

	t69 = (((x2053==x2054)==x2055)>>x2056);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x2069 = 4559906LLU;
	uint8_t x2071 = UINT8_MAX;
	uint32_t x2072 = 0U;
	int32_t t70 = 220090;

	t70 = (((x2069==x2070)==x2071)>>x2072);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2121 = 8U;
	uint32_t x2122 = UINT32_MAX;
	volatile uint64_t x2123 = 5183756388619278LLU;
	uint8_t x2124 = 2U;
	static volatile int32_t t71 = -239240;

	t71 = (((x2121==x2122)==x2123)>>x2124);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x2134 = 1U;
	uint8_t x2135 = 5U;
	static volatile int32_t t72 = -124;

	t72 = (((x2133==x2134)==x2135)>>x2136);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2189 = -3;
	uint8_t x2190 = UINT8_MAX;
	int64_t x2191 = INT64_MAX;
	uint16_t x2192 = 5U;
	volatile int32_t t73 = -2;

	t73 = (((x2189==x2190)==x2191)>>x2192);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2277 = -224548097;
	static volatile int8_t x2278 = INT8_MIN;
	uint8_t x2280 = 1U;
	volatile int32_t t74 = -30780878;

	t74 = (((x2277==x2278)==x2279)>>x2280);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2309 = 33U;
	int32_t x2311 = -434325641;
	uint8_t x2312 = 3U;
	volatile int32_t t75 = -644438033;

	t75 = (((x2309==x2310)==x2311)>>x2312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2329 = 60349535U;
	uint8_t x2330 = 2U;
	volatile int32_t x2331 = 45279005;
	int8_t x2332 = 1;

	t76 = (((x2329==x2330)==x2331)>>x2332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2345 = 6U;
	uint32_t x2346 = 3026U;
	int16_t x2347 = INT16_MIN;
	uint8_t x2348 = 23U;
	int32_t t77 = -288335570;

	t77 = (((x2345==x2346)==x2347)>>x2348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2353 = 12U;
	int64_t x2355 = 100573LL;
	volatile uint16_t x2356 = 17U;
	int32_t t78 = -155128;

	t78 = (((x2353==x2354)==x2355)>>x2356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2389 = 1199U;

	t79 = (((x2389==x2390)==x2391)>>x2392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2409 = -1;
	static int8_t x2410 = -1;
	int16_t x2411 = 12858;
	uint8_t x2412 = 14U;

	t80 = (((x2409==x2410)==x2411)>>x2412);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x2601 = 40;
	static int32_t x2602 = -355112587;
	int16_t x2604 = 6;
	int32_t t81 = -507;

	t81 = (((x2601==x2602)==x2603)>>x2604);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x2614 = -1;
	int8_t x2615 = INT8_MIN;
	int16_t x2616 = 3;
	static int32_t t82 = 114283;

	t82 = (((x2613==x2614)==x2615)>>x2616);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x2629 = INT64_MAX;
	uint8_t x2630 = 10U;
	static int32_t x2631 = 5033;
	static volatile uint8_t x2632 = 5U;
	int32_t t83 = -133950934;

	t83 = (((x2629==x2630)==x2631)>>x2632);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2677 = 1U;
	volatile uint64_t x2679 = 1248LLU;
	int8_t x2680 = 27;

	t84 = (((x2677==x2678)==x2679)>>x2680);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x2733 = 234501U;
	int8_t x2734 = -1;
	static int8_t x2735 = INT8_MIN;
	int16_t x2736 = 22;
	volatile int32_t t85 = 56546;

	t85 = (((x2733==x2734)==x2735)>>x2736);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x2737 = -1LL;
	uint32_t x2738 = 30037U;
	static uint16_t x2739 = UINT16_MAX;

	t86 = (((x2737==x2738)==x2739)>>x2740);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x2742 = 11U;
	static volatile int8_t x2743 = INT8_MAX;
	int8_t x2744 = 24;

	t87 = (((x2741==x2742)==x2743)>>x2744);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x2749 = 36280U;
	static int32_t x2750 = INT32_MAX;
	uint8_t x2751 = UINT8_MAX;
	static int8_t x2752 = 0;
	int32_t t88 = -47;

	t88 = (((x2749==x2750)==x2751)>>x2752);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2833 = INT32_MAX;
	volatile int8_t x2834 = -7;
	volatile uint16_t x2835 = 1U;
	static int32_t x2836 = 16;
	int32_t t89 = -365;

	t89 = (((x2833==x2834)==x2835)>>x2836);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2849 = 1230541620295LLU;
	int16_t x2850 = -1;
	static uint16_t x2851 = UINT16_MAX;
	volatile uint8_t x2852 = 9U;
	volatile int32_t t90 = 10586812;

	t90 = (((x2849==x2850)==x2851)>>x2852);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x2893 = INT16_MIN;
	volatile int32_t x2894 = INT32_MIN;
	volatile uint32_t x2895 = 27684483U;
	volatile uint16_t x2896 = 1U;
	int32_t t91 = 6;

	t91 = (((x2893==x2894)==x2895)>>x2896);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x2942 = 120U;
	uint16_t x2943 = 5U;
	volatile uint32_t x2944 = 10U;
	volatile int32_t t92 = 47113756;

	t92 = (((x2941==x2942)==x2943)>>x2944);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3013 = 61194366LLU;
	int32_t x3014 = -271994407;
	int16_t x3015 = INT16_MAX;
	static uint16_t x3016 = 22U;

	t93 = (((x3013==x3014)==x3015)>>x3016);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3042 = INT8_MAX;
	int16_t x3043 = 15209;
	uint16_t x3044 = 18U;
	static volatile int32_t t94 = 1801;

	t94 = (((x3041==x3042)==x3043)>>x3044);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x3077 = -1;
	static int8_t x3078 = INT8_MIN;
	uint64_t x3079 = 21968520LLU;
	uint8_t x3080 = 14U;
	int32_t t95 = 157247806;

	t95 = (((x3077==x3078)==x3079)>>x3080);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3089 = 16040247U;
	uint8_t x3090 = UINT8_MAX;
	int8_t x3092 = 0;
	int32_t t96 = 448176;

	t96 = (((x3089==x3090)==x3091)>>x3092);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3125 = -1LL;
	int64_t x3126 = INT64_MIN;
	int16_t x3127 = 30;
	int64_t x3128 = 0LL;
	static volatile int32_t t97 = -3857452;

	t97 = (((x3125==x3126)==x3127)>>x3128);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x3201 = INT32_MIN;
	uint64_t x3203 = 15997403LLU;
	int8_t x3204 = 0;
	volatile int32_t t98 = -111714625;

	t98 = (((x3201==x3202)==x3203)>>x3204);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3213 = INT32_MIN;
	volatile int32_t x3214 = -188;
	volatile int16_t x3215 = -1;
	int16_t x3216 = 3;
	volatile int32_t t99 = -308576584;

	t99 = (((x3213==x3214)==x3215)>>x3216);

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

