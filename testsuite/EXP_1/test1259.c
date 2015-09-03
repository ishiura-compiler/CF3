#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = -3743LL;
volatile int16_t x94 = INT16_MIN;
static int32_t t3 = 0;
int16_t x155 = 0;
int8_t x267 = 12;
static uint32_t x268 = 113419U;
uint8_t x397 = UINT8_MAX;
int8_t x447 = 12;
int64_t x448 = -42295960LL;
uint16_t x492 = UINT16_MAX;
static int64_t x514 = INT64_MIN;
int32_t t12 = -2029;
static int32_t x656 = INT32_MIN;
int32_t t14 = -1894295;
int64_t x702 = INT64_MIN;
int8_t x738 = INT8_MAX;
volatile int32_t t19 = -12269;
int16_t x824 = INT16_MIN;
int32_t x826 = INT32_MIN;
int8_t x827 = 5;
uint32_t x828 = 477084U;
int32_t t25 = 100;
volatile int32_t t29 = 10543;
uint32_t x999 = 3U;
volatile int32_t t31 = 96619137;
volatile int32_t t32 = -148873;
uint16_t x1039 = 1U;
uint16_t x1242 = 19U;
uint8_t x1266 = 28U;
int32_t t39 = 1165;
uint32_t x1298 = 38449U;
int16_t x1341 = 2;
volatile int32_t t42 = -1;
int16_t x1385 = -1914;
int32_t t44 = 0;
uint16_t x1436 = 283U;
static volatile int32_t t45 = -4315980;
volatile int32_t t46 = -30070839;
int8_t x1483 = 0;
static int8_t x1606 = INT8_MAX;
volatile int8_t x1607 = 1;
uint16_t x1630 = UINT16_MAX;
volatile int64_t t52 = -387730LL;
int32_t x1753 = INT32_MIN;
static uint32_t t55 = 2840183U;
volatile int32_t t56 = 11578648;
uint32_t x1822 = UINT32_MAX;
static int32_t t60 = 11014023;
int16_t x1984 = INT16_MIN;
static volatile int32_t t62 = 69;
static int32_t x2072 = INT32_MIN;
int32_t t67 = -12078;
static volatile int16_t x2114 = -14147;
uint8_t x2130 = 1U;
int32_t x2133 = -9349;
static int8_t x2134 = INT8_MAX;
volatile int32_t t71 = -322;
int8_t x2170 = -1;
volatile uint32_t t74 = 21283U;
volatile uint16_t x2286 = UINT16_MAX;
uint32_t x2287 = 17U;
int8_t x2319 = 0;
uint16_t x2320 = UINT16_MAX;
uint8_t x2329 = 8U;
static int8_t x2494 = INT8_MIN;
volatile int32_t t83 = 1;
int32_t x2530 = INT32_MAX;
uint16_t x2531 = 3U;
uint32_t x2558 = 355257U;
int8_t x2559 = 0;
int32_t t85 = 487703946;
int8_t x2613 = INT8_MIN;
int32_t t92 = -633250764;
static volatile uint16_t x2722 = 8069U;
int64_t t94 = -1373225136674392LL;
volatile uint8_t x2774 = 0U;
int16_t x2786 = -3;
volatile uint8_t x2787 = 4U;
uint32_t x2866 = 94747252U;


void f0(void) {
	int64_t x37 = -1LL;
	int64_t x38 = INT64_MAX;
	uint8_t x39 = 16U;
	static int64_t x40 = -1LL;
	int64_t t0 = 1LL;

	t0 = (((x37==x38)<<x39)&x40);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x85 = 60U;
	static volatile int32_t x86 = -1;
	int16_t x87 = 7;
	static int64_t x88 = 21329595134014LL;

	t1 = (((x85==x86)<<x87)&x88);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x93 = UINT16_MAX;
	static uint8_t x95 = 15U;
	int64_t x96 = -504170367LL;
	int64_t t2 = 2516593100383128LL;

	t2 = (((x93==x94)<<x95)&x96);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x129 = 32444U;
	volatile uint64_t x130 = 5277331LLU;
	uint32_t x131 = 10U;
	static int8_t x132 = -1;

	t3 = (((x129==x130)<<x131)&x132);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x141 = INT32_MIN;
	volatile uint8_t x142 = UINT8_MAX;
	static volatile uint8_t x143 = 3U;
	volatile int16_t x144 = -1;
	int32_t t4 = -83466943;

	t4 = (((x141==x142)<<x143)&x144);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x153 = 59;
	volatile int32_t x154 = INT32_MIN;
	int32_t x156 = -1;
	static volatile int32_t t5 = -4726612;

	t5 = (((x153==x154)<<x155)&x156);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x265 = INT8_MIN;
	int64_t x266 = INT64_MIN;
	volatile uint32_t t6 = 90281U;

	t6 = (((x265==x266)<<x267)&x268);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x297 = 3314711;
	int8_t x298 = -1;
	uint8_t x299 = 1U;
	int8_t x300 = INT8_MIN;
	volatile int32_t t7 = -4467;

	t7 = (((x297==x298)<<x299)&x300);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x305 = UINT16_MAX;
	int16_t x306 = -7112;
	volatile uint32_t x307 = 18U;
	int16_t x308 = 1;
	volatile int32_t t8 = 218;

	t8 = (((x305==x306)<<x307)&x308);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x398 = INT32_MIN;
	volatile int8_t x399 = 0;
	uint16_t x400 = 3652U;
	int32_t t9 = -333;

	t9 = (((x397==x398)<<x399)&x400);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x445 = INT16_MIN;
	int8_t x446 = INT8_MIN;
	static int64_t t10 = -10479LL;

	t10 = (((x445==x446)<<x447)&x448);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x489 = 1U;
	uint16_t x490 = 14U;
	int16_t x491 = 30;
	volatile int32_t t11 = 2462736;

	t11 = (((x489==x490)<<x491)&x492);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x513 = 1U;
	uint16_t x515 = 0U;
	static int8_t x516 = -1;

	t12 = (((x513==x514)<<x515)&x516);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x605 = INT8_MIN;
	int64_t x606 = -1LL;
	volatile int16_t x607 = 1;
	volatile uint16_t x608 = 1U;
	volatile int32_t t13 = -109044;

	t13 = (((x605==x606)<<x607)&x608);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x653 = 9913U;
	int32_t x654 = -38214;
	uint8_t x655 = 2U;

	t14 = (((x653==x654)<<x655)&x656);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x689 = -103866LL;
	static int32_t x690 = -9877379;
	volatile uint16_t x691 = 2U;
	int8_t x692 = -1;
	volatile int32_t t15 = 847;

	t15 = (((x689==x690)<<x691)&x692);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x701 = UINT16_MAX;
	uint16_t x703 = 7U;
	int8_t x704 = INT8_MIN;
	int32_t t16 = 52802;

	t16 = (((x701==x702)<<x703)&x704);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x721 = UINT16_MAX;
	static volatile int64_t x722 = INT64_MIN;
	static int32_t x723 = 0;
	int16_t x724 = -1;
	static volatile int32_t t17 = 1;

	t17 = (((x721==x722)<<x723)&x724);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x737 = -1281603;
	int32_t x739 = 0;
	static volatile int64_t x740 = INT64_MIN;
	int64_t t18 = 58108455489LL;

	t18 = (((x737==x738)<<x739)&x740);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x769 = -1;
	uint8_t x770 = UINT8_MAX;
	volatile uint8_t x771 = 11U;
	int8_t x772 = INT8_MIN;

	t19 = (((x769==x770)<<x771)&x772);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x785 = INT16_MAX;
	int8_t x786 = -1;
	uint8_t x787 = 15U;
	volatile int64_t x788 = 701454297673448608LL;
	static volatile int64_t t20 = 2388473327LL;

	t20 = (((x785==x786)<<x787)&x788);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x821 = -1;
	static volatile int64_t x822 = INT64_MIN;
	uint16_t x823 = 9U;
	int32_t t21 = 0;

	t21 = (((x821==x822)<<x823)&x824);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x825 = INT64_MIN;
	uint32_t t22 = 2U;

	t22 = (((x825==x826)<<x827)&x828);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x833 = -4404;
	int64_t x834 = INT64_MIN;
	int8_t x835 = 0;
	int32_t x836 = INT32_MIN;
	volatile int32_t t23 = 538598;

	t23 = (((x833==x834)<<x835)&x836);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x857 = -28090506276002012LL;
	int16_t x858 = -1633;
	uint64_t x859 = 9LLU;
	volatile int8_t x860 = 1;
	int32_t t24 = -13464;

	t24 = (((x857==x858)<<x859)&x860);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x869 = INT32_MIN;
	int8_t x870 = INT8_MIN;
	int8_t x871 = 0;
	int8_t x872 = INT8_MAX;

	t25 = (((x869==x870)<<x871)&x872);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x917 = INT64_MIN;
	int16_t x918 = -1;
	int8_t x919 = 3;
	int32_t x920 = -1;
	volatile int32_t t26 = 1;

	t26 = (((x917==x918)<<x919)&x920);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x921 = INT64_MIN;
	int64_t x922 = 20LL;
	uint8_t x923 = 4U;
	static int16_t x924 = INT16_MIN;
	volatile int32_t t27 = 0;

	t27 = (((x921==x922)<<x923)&x924);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x929 = -1;
	int16_t x930 = -30;
	volatile int8_t x931 = 1;
	int8_t x932 = -1;
	volatile int32_t t28 = 623819;

	t28 = (((x929==x930)<<x931)&x932);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x953 = -63;
	uint64_t x954 = 3379744725LLU;
	uint8_t x955 = 22U;
	volatile int8_t x956 = INT8_MIN;

	t29 = (((x953==x954)<<x955)&x956);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x989 = INT8_MIN;
	uint8_t x990 = UINT8_MAX;
	int8_t x991 = 3;
	volatile int64_t x992 = INT64_MIN;
	int64_t t30 = 531203011528659LL;

	t30 = (((x989==x990)<<x991)&x992);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x997 = 773238766U;
	int8_t x998 = INT8_MIN;
	int16_t x1000 = INT16_MAX;

	t31 = (((x997==x998)<<x999)&x1000);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1005 = INT16_MIN;
	int64_t x1006 = -15LL;
	static uint16_t x1007 = 1U;
	int16_t x1008 = INT16_MIN;

	t32 = (((x1005==x1006)<<x1007)&x1008);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x1037 = 160160737461LL;
	volatile int16_t x1038 = INT16_MIN;
	int8_t x1040 = 0;
	int32_t t33 = 402988;

	t33 = (((x1037==x1038)<<x1039)&x1040);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1073 = -18;
	uint16_t x1074 = UINT16_MAX;
	uint8_t x1075 = 5U;
	uint64_t x1076 = 765613733498LLU;
	volatile uint64_t t34 = 17LLU;

	t34 = (((x1073==x1074)<<x1075)&x1076);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1169 = -130;
	volatile uint16_t x1170 = 4131U;
	uint8_t x1171 = 11U;
	static uint32_t x1172 = 38940U;
	volatile uint32_t t35 = 24097003U;

	t35 = (((x1169==x1170)<<x1171)&x1172);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1237 = INT32_MIN;
	int32_t x1238 = 29795;
	static int64_t x1239 = 1LL;
	volatile int64_t x1240 = INT64_MAX;
	static int64_t t36 = -32772LL;

	t36 = (((x1237==x1238)<<x1239)&x1240);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1241 = UINT32_MAX;
	uint32_t x1243 = 1U;
	int16_t x1244 = INT16_MIN;
	volatile int32_t t37 = 1;

	t37 = (((x1241==x1242)<<x1243)&x1244);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1265 = INT8_MIN;
	int8_t x1267 = 13;
	int32_t x1268 = -16376203;
	volatile int32_t t38 = 17;

	t38 = (((x1265==x1266)<<x1267)&x1268);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1289 = -1;
	int8_t x1290 = -1;
	volatile uint32_t x1291 = 5U;
	int16_t x1292 = INT16_MAX;

	t39 = (((x1289==x1290)<<x1291)&x1292);

	if (t39 != 32) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1293 = 0U;
	volatile int32_t x1294 = INT32_MIN;
	static int16_t x1295 = 13;
	static int64_t x1296 = 12767078726142LL;
	static volatile int64_t t40 = 69823752239224LL;

	t40 = (((x1293==x1294)<<x1295)&x1296);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1297 = INT32_MIN;
	int32_t x1299 = 15;
	uint64_t x1300 = 414LLU;
	uint64_t t41 = 1283LLU;

	t41 = (((x1297==x1298)<<x1299)&x1300);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x1342 = 1U;
	int8_t x1343 = 16;
	int32_t x1344 = -1;

	t42 = (((x1341==x1342)<<x1343)&x1344);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1373 = INT32_MIN;
	int16_t x1374 = -1;
	volatile uint8_t x1375 = 3U;
	uint16_t x1376 = 0U;
	static int32_t t43 = 5288;

	t43 = (((x1373==x1374)<<x1375)&x1376);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1386 = 87;
	int16_t x1387 = 1;
	volatile int8_t x1388 = INT8_MIN;

	t44 = (((x1385==x1386)<<x1387)&x1388);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1433 = INT16_MIN;
	volatile int32_t x1434 = INT32_MIN;
	uint8_t x1435 = 10U;

	t45 = (((x1433==x1434)<<x1435)&x1436);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x1477 = INT32_MIN;
	volatile uint16_t x1478 = 29U;
	static uint8_t x1479 = 0U;
	int16_t x1480 = INT16_MIN;

	t46 = (((x1477==x1478)<<x1479)&x1480);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1481 = INT8_MAX;
	volatile uint8_t x1482 = UINT8_MAX;
	static int32_t x1484 = -17091;
	volatile int32_t t47 = -51097;

	t47 = (((x1481==x1482)<<x1483)&x1484);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1605 = 2;
	static uint16_t x1608 = 351U;
	int32_t t48 = -1;

	t48 = (((x1605==x1606)<<x1607)&x1608);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1621 = INT16_MIN;
	uint64_t x1622 = UINT64_MAX;
	uint8_t x1623 = 2U;
	int8_t x1624 = INT8_MIN;
	volatile int32_t t49 = -3;

	t49 = (((x1621==x1622)<<x1623)&x1624);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1629 = 14781;
	int16_t x1631 = 0;
	static int16_t x1632 = 902;
	int32_t t50 = 271835;

	t50 = (((x1629==x1630)<<x1631)&x1632);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1725 = -51;
	volatile int64_t x1726 = INT64_MIN;
	static int32_t x1727 = 7;
	static volatile int64_t x1728 = 185266660833LL;
	volatile int64_t t51 = 1792638115513430LL;

	t51 = (((x1725==x1726)<<x1727)&x1728);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x1749 = INT32_MIN;
	uint64_t x1750 = 189880643771238528LLU;
	volatile int16_t x1751 = 1;
	int64_t x1752 = INT64_MAX;

	t52 = (((x1749==x1750)<<x1751)&x1752);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1754 = 1;
	static uint8_t x1755 = 1U;
	int16_t x1756 = INT16_MAX;
	int32_t t53 = -550429717;

	t53 = (((x1753==x1754)<<x1755)&x1756);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1765 = INT16_MIN;
	volatile uint16_t x1766 = 7U;
	int16_t x1767 = 24;
	static uint8_t x1768 = 1U;
	volatile int32_t t54 = -782;

	t54 = (((x1765==x1766)<<x1767)&x1768);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1785 = 1874426251034461849LL;
	int32_t x1786 = INT32_MAX;
	static uint8_t x1787 = 0U;
	uint32_t x1788 = UINT32_MAX;

	t55 = (((x1785==x1786)<<x1787)&x1788);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x1809 = INT16_MIN;
	static int32_t x1810 = INT32_MIN;
	uint8_t x1811 = 9U;
	int32_t x1812 = -1;

	t56 = (((x1809==x1810)<<x1811)&x1812);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x1821 = INT32_MAX;
	uint32_t x1823 = 1U;
	int32_t x1824 = -6779381;
	int32_t t57 = 611046;

	t57 = (((x1821==x1822)<<x1823)&x1824);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x1861 = INT64_MIN;
	static int32_t x1862 = -1;
	uint16_t x1863 = 5U;
	volatile int8_t x1864 = 7;
	volatile int32_t t58 = -216404;

	t58 = (((x1861==x1862)<<x1863)&x1864);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1877 = UINT16_MAX;
	int16_t x1878 = 7368;
	uint8_t x1879 = 1U;
	uint32_t x1880 = 1727141662U;
	uint32_t t59 = 941891055U;

	t59 = (((x1877==x1878)<<x1879)&x1880);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x1909 = -97392;
	uint16_t x1910 = UINT16_MAX;
	volatile uint16_t x1911 = 0U;
	int32_t x1912 = 42;

	t60 = (((x1909==x1910)<<x1911)&x1912);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1981 = 954U;
	static volatile uint8_t x1982 = UINT8_MAX;
	uint32_t x1983 = 4U;
	volatile int32_t t61 = -1;

	t61 = (((x1981==x1982)<<x1983)&x1984);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1997 = INT32_MIN;
	uint8_t x1998 = 20U;
	static uint8_t x1999 = 0U;
	int32_t x2000 = INT32_MAX;

	t62 = (((x1997==x1998)<<x1999)&x2000);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x2057 = UINT8_MAX;
	volatile int64_t x2058 = -1LL;
	int8_t x2059 = 15;
	int64_t x2060 = INT64_MAX;
	volatile int64_t t63 = 95329883LL;

	t63 = (((x2057==x2058)<<x2059)&x2060);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2061 = INT8_MIN;
	int16_t x2062 = INT16_MIN;
	uint8_t x2063 = 1U;
	int8_t x2064 = INT8_MIN;
	static volatile int32_t t64 = 1945;

	t64 = (((x2061==x2062)<<x2063)&x2064);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x2069 = -795419;
	int32_t x2070 = INT32_MIN;
	uint8_t x2071 = 3U;
	int32_t t65 = -536887;

	t65 = (((x2069==x2070)<<x2071)&x2072);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x2077 = 3;
	int16_t x2078 = INT16_MIN;
	int8_t x2079 = 3;
	int8_t x2080 = -1;
	volatile int32_t t66 = 151431;

	t66 = (((x2077==x2078)<<x2079)&x2080);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x2097 = 1;
	static int8_t x2098 = 15;
	uint8_t x2099 = 5U;
	int8_t x2100 = 0;

	t67 = (((x2097==x2098)<<x2099)&x2100);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x2113 = 4U;
	static int32_t x2115 = 0;
	static int32_t x2116 = INT32_MIN;
	volatile int32_t t68 = 68009430;

	t68 = (((x2113==x2114)<<x2115)&x2116);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2125 = 98268U;
	int32_t x2126 = -1;
	static uint8_t x2127 = 2U;
	int16_t x2128 = -379;
	volatile int32_t t69 = 263045;

	t69 = (((x2125==x2126)<<x2127)&x2128);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x2129 = 36LL;
	uint8_t x2131 = 14U;
	int32_t x2132 = -24;
	static int32_t t70 = 73;

	t70 = (((x2129==x2130)<<x2131)&x2132);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x2135 = 3;
	static int8_t x2136 = INT8_MIN;

	t71 = (((x2133==x2134)<<x2135)&x2136);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2169 = INT16_MAX;
	uint32_t x2171 = 7U;
	int16_t x2172 = -1;
	int32_t t72 = 2347;

	t72 = (((x2169==x2170)<<x2171)&x2172);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2181 = 23U;
	volatile int8_t x2182 = -1;
	int8_t x2183 = 0;
	static uint8_t x2184 = 3U;
	static int32_t t73 = -15523;

	t73 = (((x2181==x2182)<<x2183)&x2184);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2237 = -1;
	int32_t x2238 = INT32_MIN;
	volatile uint32_t x2239 = 1U;
	volatile uint32_t x2240 = 81234U;

	t74 = (((x2237==x2238)<<x2239)&x2240);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2273 = 1U;
	static int16_t x2274 = INT16_MIN;
	uint8_t x2275 = 27U;
	int8_t x2276 = INT8_MIN;
	volatile int32_t t75 = -2;

	t75 = (((x2273==x2274)<<x2275)&x2276);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2281 = INT32_MIN;
	int16_t x2282 = INT16_MIN;
	uint8_t x2283 = 0U;
	int64_t x2284 = 5436205133065936LL;
	int64_t t76 = 1069215390290LL;

	t76 = (((x2281==x2282)<<x2283)&x2284);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2285 = INT8_MAX;
	int8_t x2288 = 1;
	static int32_t t77 = 582510;

	t77 = (((x2285==x2286)<<x2287)&x2288);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2317 = -198634;
	int8_t x2318 = INT8_MIN;
	int32_t t78 = 81980402;

	t78 = (((x2317==x2318)<<x2319)&x2320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x2330 = 623972LL;
	uint32_t x2331 = 0U;
	volatile uint64_t x2332 = UINT64_MAX;
	volatile uint64_t t79 = 13717149928LLU;

	t79 = (((x2329==x2330)<<x2331)&x2332);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2413 = 63U;
	int64_t x2414 = INT64_MIN;
	uint8_t x2415 = 0U;
	int8_t x2416 = INT8_MAX;
	volatile int32_t t80 = 1700580;

	t80 = (((x2413==x2414)<<x2415)&x2416);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2417 = UINT32_MAX;
	static uint16_t x2418 = 7U;
	static int8_t x2419 = 16;
	volatile int32_t x2420 = INT32_MIN;
	int32_t t81 = -1;

	t81 = (((x2417==x2418)<<x2419)&x2420);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2457 = 90;
	uint16_t x2458 = 1735U;
	uint64_t x2459 = 9LLU;
	volatile uint32_t x2460 = 401246473U;
	volatile uint32_t t82 = 14487928U;

	t82 = (((x2457==x2458)<<x2459)&x2460);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2493 = 21LLU;
	uint8_t x2495 = 1U;
	uint16_t x2496 = 15U;

	t83 = (((x2493==x2494)<<x2495)&x2496);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x2529 = INT16_MIN;
	volatile int16_t x2532 = INT16_MIN;
	volatile int32_t t84 = -11634;

	t84 = (((x2529==x2530)<<x2531)&x2532);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x2557 = INT64_MAX;
	int32_t x2560 = INT32_MIN;

	t85 = (((x2557==x2558)<<x2559)&x2560);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2601 = 35182726409245740LL;
	uint32_t x2602 = 9169766U;
	int8_t x2603 = 9;
	uint8_t x2604 = 0U;
	static int32_t t86 = 76;

	t86 = (((x2601==x2602)<<x2603)&x2604);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2614 = -56823409;
	uint32_t x2615 = 10U;
	uint32_t x2616 = 188520856U;
	static volatile uint32_t t87 = 39372421U;

	t87 = (((x2613==x2614)<<x2615)&x2616);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2645 = -1LL;
	uint8_t x2646 = 1U;
	int32_t x2647 = 25;
	volatile uint8_t x2648 = UINT8_MAX;
	volatile int32_t t88 = -40601505;

	t88 = (((x2645==x2646)<<x2647)&x2648);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2673 = 14U;
	int64_t x2674 = 1230790645520018289LL;
	uint8_t x2675 = 29U;
	uint64_t x2676 = 426261259209LLU;
	uint64_t t89 = 523669969366016127LLU;

	t89 = (((x2673==x2674)<<x2675)&x2676);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2677 = 66491799U;
	int8_t x2678 = -47;
	uint16_t x2679 = 4U;
	static uint64_t x2680 = 31693575622LLU;
	volatile uint64_t t90 = 5049915870LLU;

	t90 = (((x2677==x2678)<<x2679)&x2680);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2681 = INT32_MIN;
	uint32_t x2682 = 808U;
	volatile int16_t x2683 = 3;
	uint8_t x2684 = UINT8_MAX;
	volatile int32_t t91 = 22896606;

	t91 = (((x2681==x2682)<<x2683)&x2684);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2701 = INT16_MIN;
	int16_t x2702 = 4939;
	volatile int64_t x2703 = 16LL;
	volatile int8_t x2704 = INT8_MIN;

	t92 = (((x2701==x2702)<<x2703)&x2704);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x2721 = UINT8_MAX;
	volatile uint16_t x2723 = 0U;
	int64_t x2724 = INT64_MAX;
	int64_t t93 = 4326304389082LL;

	t93 = (((x2721==x2722)<<x2723)&x2724);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2769 = 69090163676838850LLU;
	uint16_t x2770 = 6559U;
	int16_t x2771 = 1;
	volatile int64_t x2772 = -1LL;

	t94 = (((x2769==x2770)<<x2771)&x2772);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x2773 = -15;
	int16_t x2775 = 12;
	int16_t x2776 = 13248;
	volatile int32_t t95 = 383379;

	t95 = (((x2773==x2774)<<x2775)&x2776);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2785 = -16677708947LL;
	volatile int16_t x2788 = 388;
	volatile int32_t t96 = -704421010;

	t96 = (((x2785==x2786)<<x2787)&x2788);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2849 = 1643608;
	static volatile int16_t x2850 = INT16_MIN;
	int8_t x2851 = 7;
	volatile int16_t x2852 = INT16_MAX;
	volatile int32_t t97 = 48227;

	t97 = (((x2849==x2850)<<x2851)&x2852);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2865 = INT8_MIN;
	uint32_t x2867 = 13U;
	uint64_t x2868 = UINT64_MAX;
	volatile uint64_t t98 = 44LLU;

	t98 = (((x2865==x2866)<<x2867)&x2868);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x2881 = UINT16_MAX;
	static int64_t x2882 = INT64_MIN;
	uint8_t x2883 = 1U;
	volatile int32_t x2884 = -646672;
	volatile int32_t t99 = -1;

	t99 = (((x2881==x2882)<<x2883)&x2884);

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

