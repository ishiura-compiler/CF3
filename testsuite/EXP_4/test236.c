#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x228 = UINT64_MAX;
uint64_t x481 = UINT64_MAX;
static volatile uint16_t x498 = 125U;
static volatile int32_t x499 = INT32_MIN;
static uint32_t t5 = 4082365U;
volatile int8_t x769 = INT8_MAX;
volatile int8_t x771 = -1;
volatile uint32_t t9 = 662U;
int64_t t11 = -739466498583500LL;
uint16_t x1299 = UINT16_MAX;
uint8_t x1373 = UINT8_MAX;
static uint64_t x1450 = 7335577186540325LLU;
uint64_t x1533 = 46130608302392LLU;
static volatile uint32_t x1535 = UINT32_MAX;
int8_t x1655 = 3;
uint32_t t20 = 28653077U;
int16_t x1756 = -1;
static uint64_t t22 = 1063500896746278LLU;
uint16_t x1838 = 11U;
int32_t x2024 = INT32_MIN;
uint32_t x2038 = 19702U;
int32_t x2082 = INT32_MAX;
volatile uint64_t t29 = 1281LLU;
uint16_t x2554 = 206U;
uint64_t x2734 = 34316685326042077LLU;
int16_t x2899 = -1;
uint64_t x2930 = 137398418142800LLU;
int32_t x2953 = INT32_MAX;
int32_t x2981 = INT32_MAX;
uint32_t x2984 = UINT32_MAX;
volatile int64_t t38 = 10LL;
int16_t x3220 = -1;
uint64_t t41 = 53223417534803850LLU;
int64_t x3402 = INT64_MAX;
int8_t x3404 = -1;


void f0(void) {
	int16_t x53 = -1;
	uint32_t x54 = UINT32_MAX;
	uint64_t x55 = UINT64_MAX;
	int8_t x56 = -4;
	uint32_t t0 = 0U;

	t0 = (x53-(x54<<(x55-x56)));

	if (t0 != 7U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x225 = -3;
	uint64_t x226 = 270723658219105197LLU;
	int8_t x227 = -1;
	uint64_t t1 = 4LLU;

	t1 = (x225-(x226<<(x227-x228)));

	if (t1 != 18176020415490446416LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x413 = INT16_MIN;
	static uint16_t x414 = UINT16_MAX;
	int32_t x415 = INT32_MAX;
	volatile int32_t x416 = INT32_MAX;
	int32_t t2 = 360;

	t2 = (x413-(x414<<(x415-x416)));

	if (t2 != -98303) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x482 = 65057046U;
	volatile int64_t x483 = 1LL;
	int8_t x484 = -1;
	static volatile uint64_t t3 = 19272415579290828LLU;

	t3 = (x481-(x482<<(x483-x484)));

	if (t3 != 18446744073449323431LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x497 = 62;
	int32_t x500 = INT32_MIN;
	int32_t t4 = 13093;

	t4 = (x497-(x498<<(x499-x500)));

	if (t4 != -63) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x613 = 39U;
	static volatile uint8_t x614 = UINT8_MAX;
	volatile int8_t x615 = 1;
	volatile uint64_t x616 = UINT64_MAX;

	t5 = (x613-(x614<<(x615-x616)));

	if (t5 != 4294966315U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x693 = -1;
	int8_t x694 = 1;
	int8_t x695 = 1;
	static uint32_t x696 = UINT32_MAX;
	volatile int32_t t6 = -1060549083;

	t6 = (x693-(x694<<(x695-x696)));

	if (t6 != -5) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x737 = INT32_MIN;
	volatile int64_t x738 = 10286083LL;
	uint8_t x739 = 6U;
	int8_t x740 = 1;
	volatile int64_t t7 = -23310731690570721LL;

	t7 = (x737-(x738<<(x739-x740)));

	if (t7 != -2476638304LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x770 = 1U;
	int64_t x772 = -1LL;
	volatile int32_t t8 = -2866470;

	t8 = (x769-(x770<<(x771-x772)));

	if (t8 != 126) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x817 = INT32_MIN;
	uint32_t x818 = 179269U;
	int16_t x819 = 9;
	volatile int32_t x820 = 0;

	t9 = (x817-(x818<<(x819-x820)));

	if (t9 != 2055697920U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x901 = 2073541380086335380LL;
	static uint8_t x902 = 2U;
	int16_t x903 = -1;
	int32_t x904 = -1;
	int64_t t10 = -340685838117433LL;

	t10 = (x901-(x902<<(x903-x904)));

	if (t10 != 2073541380086335378LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x1053 = 384886943063216LL;
	uint16_t x1054 = 14U;
	int8_t x1055 = 0;
	int32_t x1056 = -1;

	t11 = (x1053-(x1054<<(x1055-x1056)));

	if (t11 != 384886943063188LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1085 = -1;
	uint8_t x1086 = 37U;
	static int16_t x1087 = 1;
	static uint64_t x1088 = UINT64_MAX;
	static int32_t t12 = -14834;

	t12 = (x1085-(x1086<<(x1087-x1088)));

	if (t12 != -149) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1297 = 40U;
	int32_t x1298 = INT32_MAX;
	uint16_t x1300 = UINT16_MAX;
	volatile int32_t t13 = 4848456;

	t13 = (x1297-(x1298<<(x1299-x1300)));

	if (t13 != -2147483607) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1374 = 0U;
	static uint8_t x1375 = 3U;
	static uint32_t x1376 = UINT32_MAX;
	volatile uint32_t t14 = 8139240U;

	t14 = (x1373-(x1374<<(x1375-x1376)));

	if (t14 != 255U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1449 = INT32_MIN;
	static uint8_t x1451 = 0U;
	volatile int16_t x1452 = -1;
	volatile uint64_t t15 = 84790133320489LLU;

	t15 = (x1449-(x1450<<(x1451-x1452)));

	if (t15 != 18432072917188987318LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1534 = 2U;
	uint32_t x1536 = UINT32_MAX;
	uint64_t t16 = 9923LLU;

	t16 = (x1533-(x1534<<(x1535-x1536)));

	if (t16 != 46130608302390LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1617 = INT8_MAX;
	static int64_t x1618 = 477656838LL;
	static volatile uint16_t x1619 = 0U;
	int8_t x1620 = -1;
	int64_t t17 = 62177LL;

	t17 = (x1617-(x1618<<(x1619-x1620)));

	if (t17 != -955313549LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1653 = -1;
	int16_t x1654 = 9;
	int64_t x1656 = -1LL;
	int32_t t18 = 1;

	t18 = (x1653-(x1654<<(x1655-x1656)));

	if (t18 != -145) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1677 = 3;
	int64_t x1678 = 8802LL;
	static int32_t x1679 = -1;
	int8_t x1680 = -1;
	volatile int64_t t19 = 112447986266036585LL;

	t19 = (x1677-(x1678<<(x1679-x1680)));

	if (t19 != -8799LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1725 = -1;
	uint32_t x1726 = 263U;
	static uint8_t x1727 = UINT8_MAX;
	static uint8_t x1728 = UINT8_MAX;

	t20 = (x1725-(x1726<<(x1727-x1728)));

	if (t20 != 4294967032U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1733 = -1;
	int16_t x1734 = 2;
	static int16_t x1735 = 0;
	uint64_t x1736 = UINT64_MAX;
	static int32_t t21 = 60092331;

	t21 = (x1733-(x1734<<(x1735-x1736)));

	if (t21 != -5) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1753 = UINT32_MAX;
	uint64_t x1754 = 26492223308619515LLU;
	int16_t x1755 = 2;

	t22 = (x1753-(x1754<<(x1755-x1756)));

	if (t22 != 18234806291535562791LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1837 = INT8_MIN;
	int16_t x1839 = INT16_MIN;
	int16_t x1840 = INT16_MIN;
	int32_t t23 = 0;

	t23 = (x1837-(x1838<<(x1839-x1840)));

	if (t23 != -139) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x2021 = INT8_MIN;
	volatile uint8_t x2022 = 1U;
	int32_t x2023 = INT32_MIN;
	volatile int32_t t24 = 121;

	t24 = (x2021-(x2022<<(x2023-x2024)));

	if (t24 != -129) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2037 = -80095;
	static int32_t x2039 = INT32_MIN;
	volatile int32_t x2040 = INT32_MIN;
	volatile uint32_t t25 = 297U;

	t25 = (x2037-(x2038<<(x2039-x2040)));

	if (t25 != 4294867499U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2081 = 53351313;
	int32_t x2083 = INT32_MIN;
	static int32_t x2084 = INT32_MIN;
	int32_t t26 = -757019532;

	t26 = (x2081-(x2082<<(x2083-x2084)));

	if (t26 != -2094132334) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2153 = INT16_MIN;
	uint64_t x2154 = UINT64_MAX;
	int16_t x2155 = 31;
	uint8_t x2156 = 10U;
	uint64_t t27 = 5431284738975LLU;

	t27 = (x2153-(x2154<<(x2155-x2156)));

	if (t27 != 2064384LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2197 = -868;
	uint16_t x2198 = 924U;
	int8_t x2199 = INT8_MAX;
	int16_t x2200 = 125;
	volatile int32_t t28 = -781;

	t28 = (x2197-(x2198<<(x2199-x2200)));

	if (t28 != -4564) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2209 = -7;
	volatile uint64_t x2210 = 15126271659LLU;
	uint64_t x2211 = UINT64_MAX;
	uint64_t x2212 = UINT64_MAX;

	t29 = (x2209-(x2210<<(x2211-x2212)));

	if (t29 != 18446744058583279950LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x2553 = -1;
	static int16_t x2555 = -1;
	int64_t x2556 = -1LL;
	volatile int32_t t30 = -672;

	t30 = (x2553-(x2554<<(x2555-x2556)));

	if (t30 != -207) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2733 = INT8_MIN;
	volatile int64_t x2735 = INT64_MIN;
	int64_t x2736 = INT64_MIN;
	static volatile uint64_t t31 = 20595LLU;

	t31 = (x2733-(x2734<<(x2735-x2736)));

	if (t31 != 18412427388383509411LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2849 = 1062616208U;
	int32_t x2850 = 1569;
	static uint16_t x2851 = UINT16_MAX;
	uint16_t x2852 = UINT16_MAX;
	volatile uint32_t t32 = 58724U;

	t32 = (x2849-(x2850<<(x2851-x2852)));

	if (t32 != 1062614639U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2897 = 30;
	static uint8_t x2898 = 53U;
	int16_t x2900 = -1;
	volatile int32_t t33 = -8045395;

	t33 = (x2897-(x2898<<(x2899-x2900)));

	if (t33 != -23) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x2929 = INT32_MAX;
	static int8_t x2931 = -1;
	int16_t x2932 = -1;
	uint64_t t34 = 8158177467935LLU;

	t34 = (x2929-(x2930<<(x2931-x2932)));

	if (t34 != 18446606677438892463LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2954 = INT8_MAX;
	uint8_t x2955 = 16U;
	volatile int8_t x2956 = -1;
	int32_t t35 = -51;

	t35 = (x2953-(x2954<<(x2955-x2956)));

	if (t35 != 2130837503) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x2982 = 347U;
	uint32_t x2983 = 8U;
	volatile int32_t t36 = -3152766;

	t36 = (x2981-(x2982<<(x2983-x2984)));

	if (t36 != 2147305983) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x3033 = 47U;
	int16_t x3034 = 4;
	uint16_t x3035 = 15U;
	volatile uint32_t x3036 = UINT32_MAX;
	volatile uint32_t t37 = 0U;

	t37 = (x3033-(x3034<<(x3035-x3036)));

	if (t37 != 4294705199U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x3189 = 44U;
	int64_t x3190 = 1LL;
	static int16_t x3191 = 8;
	uint32_t x3192 = UINT32_MAX;

	t38 = (x3189-(x3190<<(x3191-x3192)));

	if (t38 != -468LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3217 = UINT64_MAX;
	int16_t x3218 = 3263;
	uint32_t x3219 = 0U;
	uint64_t t39 = 516LLU;

	t39 = (x3217-(x3218<<(x3219-x3220)));

	if (t39 != 18446744073709545089LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x3233 = -1;
	uint16_t x3234 = 0U;
	volatile int8_t x3235 = 11;
	int64_t x3236 = -1LL;
	volatile int32_t t40 = -84392;

	t40 = (x3233-(x3234<<(x3235-x3236)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3297 = INT64_MAX;
	volatile uint64_t x3298 = 1942206826354891LLU;
	int16_t x3299 = 2;
	static volatile int8_t x3300 = 2;

	t41 = (x3297-(x3298<<(x3299-x3300)));

	if (t41 != 9221429830028420916LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x3401 = -1;
	static int8_t x3403 = -1;
	int64_t t42 = INT64_MIN;

	t42 = (x3401-(x3402<<(x3403-x3404)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
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


    return 0;
}

