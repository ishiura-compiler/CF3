#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x99 = INT16_MIN;
static uint64_t t2 = 582LLU;
uint32_t x187 = UINT32_MAX;
uint64_t x447 = UINT64_MAX;
volatile int32_t t8 = -14476;
int64_t x562 = INT64_MIN;
static int8_t x563 = -1;
static int64_t t9 = -6LL;
uint8_t x595 = 45U;
int32_t t11 = -80413111;
uint16_t x761 = 0U;
uint8_t x764 = 1U;
int64_t x833 = -1LL;
static int64_t x1157 = -543956243473LL;
volatile int16_t x1158 = INT16_MIN;
volatile uint64_t x1160 = UINT64_MAX;
volatile int64_t t21 = 1LL;
int32_t t22 = 2769308;
volatile uint64_t t23 = 333472LLU;
int16_t x1529 = INT16_MAX;
static int16_t x1530 = INT16_MIN;
int64_t x1532 = -23LL;
volatile int32_t t27 = -485504381;
int16_t x1537 = -15133;
int32_t x1580 = -1;
volatile int32_t t29 = -18157724;
uint8_t x1633 = 1U;
volatile int32_t t30 = -2879;
volatile int8_t x1771 = INT8_MAX;
static int8_t x1772 = INT8_MAX;
int8_t x1845 = -15;
int16_t x2173 = INT16_MIN;
static volatile int64_t x2176 = INT64_MIN;
uint32_t x2213 = UINT32_MAX;
volatile uint16_t x2327 = 1U;
int64_t t39 = -2260404796557LL;
int64_t x2438 = -1LL;
int64_t x2500 = INT64_MIN;
int64_t x2506 = INT64_MAX;
volatile uint64_t t43 = 1994881LLU;
int64_t x2593 = INT64_MAX;
static volatile int64_t t45 = 5532LL;
int64_t x2710 = INT64_MIN;
static volatile int8_t x2712 = -35;
int32_t x2765 = -1;
uint16_t x2853 = UINT16_MAX;
static volatile uint16_t x2890 = 114U;
int8_t x2892 = -1;
uint32_t x2937 = 2406067U;
uint32_t x2938 = UINT32_MAX;
uint32_t t52 = 218U;
uint64_t x3135 = UINT64_MAX;
uint32_t x3190 = 146197U;
int32_t x3339 = -1;
volatile int64_t t57 = 4861117256781029LL;
static int16_t x3388 = -5;
int64_t x3394 = INT64_MAX;
int32_t x3396 = -1;
volatile int16_t x3475 = -112;
static int8_t x3476 = INT8_MIN;
volatile int32_t t60 = -922880182;
int32_t x3650 = 611817585;
static uint16_t x3651 = 24U;
uint16_t x3781 = 3535U;
volatile uint32_t t66 = 0U;
volatile uint64_t t67 = 661266870549LLU;
uint16_t x3903 = 21U;
int8_t x3904 = 0;
int16_t x3915 = 6;
volatile uint64_t t70 = 121545980973795LLU;
static volatile int64_t t75 = 61305587899116106LL;
volatile int16_t x4568 = -1;
int8_t x4701 = INT8_MIN;
uint64_t x4721 = 4153708340678984LLU;
uint32_t x4723 = UINT32_MAX;
int32_t t80 = 875;
uint8_t x4844 = 4U;
int64_t x4861 = INT64_MIN;
int8_t x4863 = -1;
uint32_t x4977 = 1234266U;
static int16_t x5018 = -5198;
uint32_t x5020 = 0U;
volatile int32_t t84 = 493196740;
int16_t x5278 = INT16_MAX;
static int64_t x5281 = INT64_MIN;
int64_t x5283 = -1LL;
static int8_t x5307 = INT8_MIN;
int64_t x5344 = -1LL;
volatile int64_t t92 = 113022110LL;
int8_t x5391 = -1;
volatile int64_t t94 = 7192LL;
int16_t x5454 = 1;
static volatile uint16_t x5538 = 882U;
int8_t x5540 = -9;
volatile int32_t t97 = -15394289;
int16_t x5548 = INT16_MAX;
volatile int32_t t98 = 0;
volatile int8_t x5669 = 4;


void f0(void) {
	int64_t x37 = 1LL;
	static int32_t x38 = INT32_MAX;
	int8_t x39 = 1;
	int8_t x40 = -1;
	static int64_t t0 = -7068785921930660LL;

	t0 = ((x37/x38)<<(x39-x40));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x53 = 29U;
	int16_t x54 = INT16_MIN;
	static uint8_t x55 = 1U;
	static volatile int8_t x56 = -1;
	volatile int32_t t1 = -2150;

	t1 = ((x53/x54)<<(x55-x56));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x97 = UINT64_MAX;
	int16_t x98 = INT16_MAX;
	int16_t x100 = INT16_MIN;

	t2 = ((x97/x98)<<(x99-x100));

	if (t2 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x101 = INT64_MAX;
	int8_t x102 = INT8_MAX;
	int16_t x103 = -1;
	int32_t x104 = -1;
	volatile int64_t t3 = -14756187306240635LL;

	t3 = ((x101/x102)<<(x103-x104));

	if (t3 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int8_t x186 = -1;
	static volatile int16_t x188 = -31;
	uint32_t t4 = 159805U;

	t4 = ((x185/x186)<<(x187-x188));

	if (t4 != 1073741824U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int16_t x342 = INT16_MAX;
	volatile uint8_t x343 = 26U;
	int64_t x344 = -1LL;
	uint32_t t5 = 3423790U;

	t5 = ((x341/x342)<<(x343-x344));

	if (t5 != 536870912U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x373 = 15051U;
	int16_t x374 = INT16_MAX;
	int64_t x375 = -1LL;
	int64_t x376 = -1LL;
	volatile uint32_t t6 = 1063217U;

	t6 = ((x373/x374)<<(x375-x376));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x445 = INT64_MAX;
	volatile uint32_t x446 = 138006U;
	int16_t x448 = -2;
	int64_t t7 = 15906451851177367LL;

	t7 = ((x445/x446)<<(x447-x448));

	if (t7 != 133666246929188LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x521 = INT8_MIN;
	uint16_t x522 = UINT16_MAX;
	int32_t x523 = INT32_MIN;
	int32_t x524 = INT32_MIN;

	t8 = ((x521/x522)<<(x523-x524));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x561 = UINT16_MAX;
	static uint32_t x564 = UINT32_MAX;

	t9 = ((x561/x562)<<(x563-x564));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x593 = INT8_MIN;
	int64_t x594 = INT64_MAX;
	int16_t x596 = -1;
	int64_t t10 = 1334596476LL;

	t10 = ((x593/x594)<<(x595-x596));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x633 = 174U;
	volatile int32_t x634 = INT32_MAX;
	static int16_t x635 = INT16_MIN;
	int16_t x636 = INT16_MIN;

	t11 = ((x633/x634)<<(x635-x636));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x762 = -1;
	int8_t x763 = 26;
	static volatile int32_t t12 = 10057721;

	t12 = ((x761/x762)<<(x763-x764));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x785 = 1316978U;
	uint32_t x786 = UINT32_MAX;
	volatile uint16_t x787 = 11U;
	static int16_t x788 = 1;
	volatile uint32_t t13 = 8435210U;

	t13 = ((x785/x786)<<(x787-x788));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x834 = 4;
	uint16_t x835 = 1U;
	static int32_t x836 = -1;
	volatile int64_t t14 = -6255645909689670LL;

	t14 = ((x833/x834)<<(x835-x836));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1073 = -1;
	volatile int32_t x1074 = INT32_MIN;
	int16_t x1075 = -1;
	int8_t x1076 = -1;
	int32_t t15 = -336311852;

	t15 = ((x1073/x1074)<<(x1075-x1076));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1097 = -1LL;
	uint8_t x1098 = 27U;
	int64_t x1099 = INT64_MIN;
	int64_t x1100 = INT64_MIN;
	static volatile int64_t t16 = -13238113306385471LL;

	t16 = ((x1097/x1098)<<(x1099-x1100));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x1105 = 1189405U;
	int64_t x1106 = INT64_MAX;
	volatile int32_t x1107 = 2;
	static int16_t x1108 = -4;
	static int64_t t17 = -13339885LL;

	t17 = ((x1105/x1106)<<(x1107-x1108));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1113 = 141U;
	int32_t x1114 = INT32_MIN;
	volatile int32_t x1115 = 6;
	int16_t x1116 = -1;
	volatile uint32_t t18 = 188U;

	t18 = ((x1113/x1114)<<(x1115-x1116));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1141 = UINT64_MAX;
	int16_t x1142 = INT16_MIN;
	int16_t x1143 = 1;
	static uint64_t x1144 = UINT64_MAX;
	volatile uint64_t t19 = 1LLU;

	t19 = ((x1141/x1142)<<(x1143-x1144));

	if (t19 != 4LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1159 = 3U;
	int64_t t20 = -354330750LL;

	t20 = ((x1157/x1158)<<(x1159-x1160));

	if (t20 != 265603632LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1297 = 75U;
	static int64_t x1298 = -476LL;
	static int16_t x1299 = 6;
	static int16_t x1300 = -1;

	t21 = ((x1297/x1298)<<(x1299-x1300));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1321 = UINT8_MAX;
	uint8_t x1322 = UINT8_MAX;
	int64_t x1323 = INT64_MAX;
	int64_t x1324 = INT64_MAX;

	t22 = ((x1321/x1322)<<(x1323-x1324));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1353 = 478467352855777LLU;
	int16_t x1354 = INT16_MAX;
	uint8_t x1355 = 4U;
	int32_t x1356 = -1;

	t23 = ((x1353/x1354)<<(x1355-x1356));

	if (t23 != 467267534144LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1361 = INT16_MIN;
	volatile uint32_t x1362 = 299690U;
	int64_t x1363 = 1LL;
	uint64_t x1364 = UINT64_MAX;
	volatile uint32_t t24 = 20603U;

	t24 = ((x1361/x1362)<<(x1363-x1364));

	if (t24 != 57324U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x1373 = -17;
	static int32_t x1374 = -1;
	int8_t x1375 = INT8_MAX;
	uint8_t x1376 = 108U;
	volatile int32_t t25 = -14758;

	t25 = ((x1373/x1374)<<(x1375-x1376));

	if (t25 != 8912896) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1397 = INT32_MIN;
	static volatile int64_t x1398 = INT64_MAX;
	uint8_t x1399 = 2U;
	int64_t x1400 = -1LL;
	volatile int64_t t26 = -270880948134605414LL;

	t26 = ((x1397/x1398)<<(x1399-x1400));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1531 = -1;

	t27 = ((x1529/x1530)<<(x1531-x1532));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1538 = -1;
	int16_t x1539 = 1;
	int64_t x1540 = -1LL;
	int32_t t28 = -72;

	t28 = ((x1537/x1538)<<(x1539-x1540));

	if (t28 != 60532) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1577 = INT32_MAX;
	int16_t x1578 = INT16_MAX;
	int8_t x1579 = -1;

	t29 = ((x1577/x1578)<<(x1579-x1580));

	if (t29 != 65538) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1634 = UINT8_MAX;
	volatile uint8_t x1635 = 6U;
	static uint32_t x1636 = UINT32_MAX;

	t30 = ((x1633/x1634)<<(x1635-x1636));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1649 = -1;
	static int64_t x1650 = INT64_MAX;
	static int32_t x1651 = -1;
	static int16_t x1652 = -1;
	int64_t t31 = -103LL;

	t31 = ((x1649/x1650)<<(x1651-x1652));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1761 = 30U;
	int32_t x1762 = -1;
	uint64_t x1763 = UINT64_MAX;
	volatile int8_t x1764 = -5;
	uint32_t t32 = 7181417U;

	t32 = ((x1761/x1762)<<(x1763-x1764));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1769 = -1LL;
	uint64_t x1770 = UINT64_MAX;
	uint64_t t33 = 1544071131302556LLU;

	t33 = ((x1769/x1770)<<(x1771-x1772));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1825 = 1;
	static volatile int8_t x1826 = INT8_MAX;
	int8_t x1827 = -1;
	int32_t x1828 = -1;
	int32_t t34 = 580615167;

	t34 = ((x1825/x1826)<<(x1827-x1828));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1846 = INT16_MIN;
	int16_t x1847 = 1;
	int8_t x1848 = -1;
	volatile int32_t t35 = -18;

	t35 = ((x1845/x1846)<<(x1847-x1848));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2174 = -1;
	volatile int64_t x2175 = INT64_MIN;
	volatile int32_t t36 = -1003708765;

	t36 = ((x2173/x2174)<<(x2175-x2176));

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2214 = 1321;
	static int64_t x2215 = -1LL;
	int8_t x2216 = -19;
	uint32_t t37 = 9454782U;

	t37 = ((x2213/x2214)<<(x2215-x2216));

	if (t37 != 1905000448U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2325 = 383;
	int32_t x2326 = -35225;
	uint64_t x2328 = UINT64_MAX;
	int32_t t38 = -345905766;

	t38 = ((x2325/x2326)<<(x2327-x2328));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2345 = 535249LL;
	uint16_t x2346 = 496U;
	uint16_t x2347 = 0U;
	static uint32_t x2348 = UINT32_MAX;

	t39 = ((x2345/x2346)<<(x2347-x2348));

	if (t39 != 2158LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2437 = -1;
	volatile uint8_t x2439 = 22U;
	int8_t x2440 = -7;
	volatile int64_t t40 = -97544982LL;

	t40 = ((x2437/x2438)<<(x2439-x2440));

	if (t40 != 536870912LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2441 = 50U;
	uint8_t x2442 = 26U;
	int64_t x2443 = INT64_MIN;
	int64_t x2444 = INT64_MIN;
	static int32_t t41 = -199460;

	t41 = ((x2441/x2442)<<(x2443-x2444));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2497 = INT64_MIN;
	static volatile int8_t x2498 = INT8_MIN;
	int64_t x2499 = INT64_MIN;
	int64_t t42 = 1441059087465924LL;

	t42 = ((x2497/x2498)<<(x2499-x2500));

	if (t42 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2505 = 219661282212LLU;
	int32_t x2507 = 2;
	int8_t x2508 = -1;

	t43 = ((x2505/x2506)<<(x2507-x2508));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2594 = UINT32_MAX;
	uint64_t x2595 = UINT64_MAX;
	int32_t x2596 = -1;
	volatile int64_t t44 = 2126391722069LL;

	t44 = ((x2593/x2594)<<(x2595-x2596));

	if (t44 != 2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2705 = -1;
	volatile int64_t x2706 = INT64_MIN;
	int16_t x2707 = -1;
	int64_t x2708 = -1LL;

	t45 = ((x2705/x2706)<<(x2707-x2708));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2709 = UINT64_MAX;
	int8_t x2711 = -27;
	volatile uint64_t t46 = 19454745118247LLU;

	t46 = ((x2709/x2710)<<(x2711-x2712));

	if (t46 != 256LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2766 = -1;
	volatile int32_t x2767 = INT32_MIN;
	int32_t x2768 = INT32_MIN;
	volatile int32_t t47 = 0;

	t47 = ((x2765/x2766)<<(x2767-x2768));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x2793 = -6017;
	static int8_t x2794 = -1;
	static volatile uint64_t x2795 = UINT64_MAX;
	int8_t x2796 = -1;
	volatile int32_t t48 = -3385;

	t48 = ((x2793/x2794)<<(x2795-x2796));

	if (t48 != 6017) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2854 = 564812965588932578LL;
	static int16_t x2855 = INT16_MIN;
	int16_t x2856 = INT16_MIN;
	volatile int64_t t49 = 30846210500958617LL;

	t49 = ((x2853/x2854)<<(x2855-x2856));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x2885 = 0;
	static uint64_t x2886 = 472852185444LLU;
	uint8_t x2887 = 7U;
	volatile int32_t x2888 = -1;
	uint64_t t50 = 921164761LLU;

	t50 = ((x2885/x2886)<<(x2887-x2888));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2889 = 2U;
	uint16_t x2891 = 0U;
	static volatile uint32_t t51 = 7826U;

	t51 = ((x2889/x2890)<<(x2891-x2892));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2939 = 4U;
	static int16_t x2940 = 4;

	t52 = ((x2937/x2938)<<(x2939-x2940));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3097 = UINT64_MAX;
	int16_t x3098 = -10;
	uint32_t x3099 = UINT32_MAX;
	volatile int16_t x3100 = -1;
	static volatile uint64_t t53 = 4662440521090879LLU;

	t53 = ((x3097/x3098)<<(x3099-x3100));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x3125 = UINT8_MAX;
	int64_t x3126 = INT64_MIN;
	int32_t x3127 = -1;
	int16_t x3128 = -1;
	static int64_t t54 = 0LL;

	t54 = ((x3125/x3126)<<(x3127-x3128));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3133 = INT8_MIN;
	volatile int32_t x3134 = INT32_MIN;
	int16_t x3136 = -1;
	volatile int32_t t55 = -1;

	t55 = ((x3133/x3134)<<(x3135-x3136));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3189 = INT64_MAX;
	static int64_t x3191 = INT64_MIN;
	int64_t x3192 = INT64_MIN;
	int64_t t56 = -4121363LL;

	t56 = ((x3189/x3190)<<(x3191-x3192));

	if (t56 != 63088654602042LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3337 = 5300U;
	static int64_t x3338 = 34124921168288106LL;
	static int32_t x3340 = -1;

	t57 = ((x3337/x3338)<<(x3339-x3340));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x3385 = 45685860LLU;
	static int64_t x3386 = -213LL;
	int32_t x3387 = 16;
	volatile uint64_t t58 = 4276308706027972987LLU;

	t58 = ((x3385/x3386)<<(x3387-x3388));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3393 = INT16_MIN;
	uint32_t x3395 = UINT32_MAX;
	volatile int64_t t59 = -627171LL;

	t59 = ((x3393/x3394)<<(x3395-x3396));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3473 = INT16_MAX;
	static uint16_t x3474 = 165U;

	t60 = ((x3473/x3474)<<(x3475-x3476));

	if (t60 != 12976128) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3561 = INT8_MAX;
	int32_t x3562 = -341;
	int32_t x3563 = -1;
	int64_t x3564 = -1LL;
	int32_t t61 = 1235257;

	t61 = ((x3561/x3562)<<(x3563-x3564));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3649 = -1;
	static uint64_t x3652 = UINT64_MAX;
	volatile int32_t t62 = -5819507;

	t62 = ((x3649/x3650)<<(x3651-x3652));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x3689 = INT64_MIN;
	int64_t x3690 = -10198357153492LL;
	int32_t x3691 = INT32_MIN;
	int32_t x3692 = INT32_MIN;
	static volatile int64_t t63 = 0LL;

	t63 = ((x3689/x3690)<<(x3691-x3692));

	if (t63 != 904397LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3782 = 1;
	int16_t x3783 = -1;
	volatile uint32_t x3784 = UINT32_MAX;
	static volatile int32_t t64 = 0;

	t64 = ((x3781/x3782)<<(x3783-x3784));

	if (t64 != 3535) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x3821 = -1;
	int8_t x3822 = INT8_MIN;
	int32_t x3823 = INT32_MIN;
	int32_t x3824 = INT32_MIN;
	volatile int32_t t65 = -3783;

	t65 = ((x3821/x3822)<<(x3823-x3824));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x3845 = 0U;
	static int16_t x3846 = -3;
	int32_t x3847 = 14;
	static int64_t x3848 = -1LL;

	t66 = ((x3845/x3846)<<(x3847-x3848));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3865 = 108LLU;
	uint32_t x3866 = 27501933U;
	int32_t x3867 = -1;
	uint64_t x3868 = UINT64_MAX;

	t67 = ((x3865/x3866)<<(x3867-x3868));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3869 = INT64_MIN;
	static volatile int32_t x3870 = INT32_MIN;
	volatile int64_t x3871 = -1LL;
	uint64_t x3872 = UINT64_MAX;
	volatile int64_t t68 = 149379544155297324LL;

	t68 = ((x3869/x3870)<<(x3871-x3872));

	if (t68 != 4294967296LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3901 = INT16_MIN;
	uint32_t x3902 = 18041625U;
	uint32_t t69 = 84117642U;

	t69 = ((x3901/x3902)<<(x3903-x3904));

	if (t69 != 499122176U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3913 = -130213387841LL;
	uint64_t x3914 = UINT64_MAX;
	int64_t x3916 = 6LL;

	t70 = ((x3913/x3914)<<(x3915-x3916));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4053 = INT32_MAX;
	uint16_t x4054 = 322U;
	uint8_t x4055 = 0U;
	int16_t x4056 = -1;
	volatile int32_t t71 = -936548761;

	t71 = ((x4053/x4054)<<(x4055-x4056));

	if (t71 != 13338406) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4249 = INT8_MAX;
	uint8_t x4250 = 1U;
	static int64_t x4251 = INT64_MIN;
	int64_t x4252 = INT64_MIN;
	int32_t t72 = 1;

	t72 = ((x4249/x4250)<<(x4251-x4252));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4293 = UINT16_MAX;
	int16_t x4294 = INT16_MAX;
	static volatile int16_t x4295 = 660;
	volatile int32_t x4296 = 657;
	volatile int32_t t73 = 13741;

	t73 = ((x4293/x4294)<<(x4295-x4296));

	if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x4389 = 5LL;
	int16_t x4390 = INT16_MIN;
	static int16_t x4391 = -1;
	int64_t x4392 = -1LL;
	int64_t t74 = 3672246670691LL;

	t74 = ((x4389/x4390)<<(x4391-x4392));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x4485 = 2038U;
	static int64_t x4486 = INT64_MAX;
	static int64_t x4487 = 2LL;
	int8_t x4488 = -1;

	t75 = ((x4485/x4486)<<(x4487-x4488));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4565 = UINT64_MAX;
	static volatile int32_t x4566 = INT32_MIN;
	int8_t x4567 = -1;
	static volatile uint64_t t76 = 0LLU;

	t76 = ((x4565/x4566)<<(x4567-x4568));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4641 = 60704312LL;
	volatile int8_t x4642 = 4;
	int8_t x4643 = INT8_MIN;
	static volatile int8_t x4644 = INT8_MIN;
	int64_t t77 = 8204653305115LL;

	t77 = ((x4641/x4642)<<(x4643-x4644));

	if (t77 != 15176078LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4702 = 1884579U;
	int16_t x4703 = -1;
	int8_t x4704 = -2;
	volatile uint32_t t78 = 102659160U;

	t78 = ((x4701/x4702)<<(x4703-x4704));

	if (t78 != 4558U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4722 = 62235LLU;
	int8_t x4724 = -3;
	static uint64_t t79 = 46413412095946LLU;

	t79 = ((x4721/x4722)<<(x4723-x4724));

	if (t79 != 266969283564LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4725 = INT16_MIN;
	static int32_t x4726 = INT32_MIN;
	int64_t x4727 = -1LL;
	int64_t x4728 = -1LL;

	t80 = ((x4725/x4726)<<(x4727-x4728));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4841 = INT8_MAX;
	uint8_t x4842 = 39U;
	int8_t x4843 = 10;
	int32_t t81 = 13276;

	t81 = ((x4841/x4842)<<(x4843-x4844));

	if (t81 != 192) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4862 = INT8_MIN;
	volatile int64_t x4864 = -1LL;
	volatile int64_t t82 = 110920448880LL;

	t82 = ((x4861/x4862)<<(x4863-x4864));

	if (t82 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4978 = INT32_MIN;
	int16_t x4979 = -1;
	int32_t x4980 = -1;
	volatile uint32_t t83 = 845193U;

	t83 = ((x4977/x4978)<<(x4979-x4980));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5017 = 22U;
	static int32_t x5019 = 12;

	t84 = ((x5017/x5018)<<(x5019-x5020));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x5117 = 823014U;
	int8_t x5118 = -1;
	uint8_t x5119 = 2U;
	static int64_t x5120 = -1LL;
	volatile uint32_t t85 = 12122U;

	t85 = ((x5117/x5118)<<(x5119-x5120));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5137 = INT64_MAX;
	uint16_t x5138 = UINT16_MAX;
	int8_t x5139 = 1;
	int8_t x5140 = -1;
	int64_t t86 = 68891755276LL;

	t86 = ((x5137/x5138)<<(x5139-x5140));

	if (t86 != 562958543486976LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x5169 = UINT64_MAX;
	static int8_t x5170 = INT8_MIN;
	int16_t x5171 = INT16_MIN;
	int16_t x5172 = INT16_MIN;
	uint64_t t87 = 67775574542LLU;

	t87 = ((x5169/x5170)<<(x5171-x5172));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5277 = -1;
	int32_t x5279 = -1;
	int64_t x5280 = -1LL;
	int32_t t88 = 16;

	t88 = ((x5277/x5278)<<(x5279-x5280));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x5282 = -4865LL;
	int64_t x5284 = -1LL;
	int64_t t89 = -12692404181568LL;

	t89 = ((x5281/x5282)<<(x5283-x5284));

	if (t89 != 1895862700278473LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5305 = INT16_MIN;
	int16_t x5306 = -1;
	static int8_t x5308 = INT8_MIN;
	int32_t t90 = -1;

	t90 = ((x5305/x5306)<<(x5307-x5308));

	if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5341 = INT64_MIN;
	int64_t x5342 = INT64_MIN;
	static uint32_t x5343 = 28U;
	static volatile int64_t t91 = -607930355091883762LL;

	t91 = ((x5341/x5342)<<(x5343-x5344));

	if (t91 != 536870912LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5381 = -1LL;
	int16_t x5382 = -1;
	uint64_t x5383 = 13LLU;
	uint64_t x5384 = UINT64_MAX;

	t92 = ((x5381/x5382)<<(x5383-x5384));

	if (t92 != 16384LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5389 = 12693;
	static uint8_t x5390 = UINT8_MAX;
	static uint32_t x5392 = UINT32_MAX;
	volatile int32_t t93 = 3438;

	t93 = ((x5389/x5390)<<(x5391-x5392));

	if (t93 != 49) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5441 = 3287508264897053496LL;
	int8_t x5442 = 1;
	int16_t x5443 = INT16_MIN;
	int16_t x5444 = INT16_MIN;

	t94 = ((x5441/x5442)<<(x5443-x5444));

	if (t94 != 3287508264897053496LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x5453 = 43U;
	uint8_t x5455 = 1U;
	int32_t x5456 = -1;
	volatile int32_t t95 = -30745;

	t95 = ((x5453/x5454)<<(x5455-x5456));

	if (t95 != 172) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5501 = 519886LLU;
	volatile uint8_t x5502 = 4U;
	uint8_t x5503 = 45U;
	int8_t x5504 = 3;
	uint64_t t96 = 9993337537096619LLU;

	t96 = ((x5501/x5502)<<(x5503-x5504));

	if (t96 != 571618503094697984LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x5537 = INT8_MIN;
	int64_t x5539 = -1LL;

	t97 = ((x5537/x5538)<<(x5539-x5540));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x5545 = -1;
	int32_t x5546 = -1;
	int16_t x5547 = INT16_MAX;

	t98 = ((x5545/x5546)<<(x5547-x5548));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5670 = INT32_MIN;
	uint16_t x5671 = UINT16_MAX;
	uint16_t x5672 = UINT16_MAX;
	volatile int32_t t99 = 20;

	t99 = ((x5669/x5670)<<(x5671-x5672));

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

