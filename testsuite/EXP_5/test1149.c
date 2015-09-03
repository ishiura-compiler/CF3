#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x186 = 31LL;
uint8_t x187 = 1U;
int16_t x251 = 1;
int32_t x329 = INT32_MIN;
int16_t x331 = 0;
int32_t x332 = INT32_MAX;
int16_t x401 = -22;
static volatile int64_t x402 = INT64_MAX;
uint16_t x403 = 15U;
int16_t x413 = INT16_MIN;
volatile uint32_t x415 = 29U;
static volatile int64_t x490 = INT64_MAX;
uint64_t x510 = UINT64_MAX;
uint32_t t9 = 25630U;
int32_t x608 = 2015751;
int64_t x769 = -1LL;
uint64_t x821 = 0LLU;
uint16_t x824 = UINT16_MAX;
int32_t x1097 = INT32_MIN;
uint8_t x1099 = 26U;
uint64_t t15 = 33502243454LLU;
volatile int32_t t16 = -4;
volatile uint64_t x1234 = 13448941700750082LLU;
uint8_t x1235 = 11U;
volatile int16_t x1329 = INT16_MAX;
uint16_t x1331 = 19U;
int64_t t21 = 0LL;
uint64_t x1391 = 0LLU;
volatile uint32_t t23 = 14946U;
int32_t x1508 = -68;
uint64_t t24 = 806654172853342981LLU;
uint64_t x1540 = UINT64_MAX;
int64_t t26 = 171976517LL;
int64_t x1741 = -647759392174927463LL;
int16_t x1742 = 1;
volatile uint32_t x1754 = UINT32_MAX;
int64_t x1755 = 7LL;
int16_t x1756 = -1;
int16_t x1758 = INT16_MAX;
volatile uint64_t x1760 = UINT64_MAX;
uint16_t x1833 = UINT16_MAX;
int8_t x1838 = INT8_MAX;
uint8_t x1839 = 0U;
int64_t x1862 = 20LL;
int64_t t32 = -125703950638740LL;
int16_t x1913 = INT16_MIN;
int64_t x1914 = 15167482621205212LL;
int16_t x2249 = INT16_MAX;
int64_t t37 = 96805LL;
int64_t x2785 = INT64_MIN;
int64_t t39 = 136504284074210929LL;
static int32_t x2864 = 89573;
volatile uint64_t t41 = 12708LLU;
int64_t t42 = -1662718665637LL;
uint16_t x3189 = 501U;
int8_t x3190 = INT8_MAX;
uint8_t x3219 = 0U;
int8_t x3220 = -2;
volatile int32_t t44 = -4411727;
static uint8_t x3325 = UINT8_MAX;
int64_t x3326 = INT64_MAX;
uint16_t x3328 = 3951U;
volatile int64_t t45 = -3363899095LL;
static int64_t x3341 = INT64_MAX;
volatile uint64_t x3437 = 27691014331LLU;
uint16_t x3440 = UINT16_MAX;
uint16_t x3650 = 114U;
volatile uint8_t x3719 = 0U;
volatile uint64_t t52 = 154237314LLU;
int16_t x3936 = -1;
volatile int64_t t56 = -292LL;
static int32_t x4057 = INT32_MIN;
volatile int16_t x4058 = INT16_MAX;
uint64_t x4078 = UINT64_MAX;
static uint64_t t60 = 5LLU;
static uint32_t x4278 = 3925U;
int32_t t63 = 883;
uint8_t x4507 = 5U;
uint64_t x4538 = 5LLU;
static uint16_t x4540 = UINT16_MAX;
uint64_t x4834 = 17057050086946949LLU;
uint16_t x4873 = UINT16_MAX;
volatile uint32_t x4914 = 542669U;
volatile int64_t t69 = -3459300957043LL;
static int32_t t70 = 187;
volatile int32_t x5004 = 1;
int64_t x5102 = INT64_MAX;
int16_t x5103 = 12;
volatile uint8_t x5161 = UINT8_MAX;
int8_t x5162 = INT8_MAX;
int8_t x5164 = 2;
volatile int32_t t73 = -14792;
uint64_t x5189 = 2130581821151305632LLU;
volatile int8_t x5265 = INT8_MIN;
static int32_t t75 = -356;
uint8_t x5281 = 114U;
volatile int32_t t76 = -9612;
int64_t x5521 = -77633553LL;
volatile int32_t x5524 = -6273406;
int16_t x5557 = INT16_MIN;
uint32_t x5558 = UINT32_MAX;
int32_t x5560 = -7223;
volatile int32_t x5642 = 1069025938;
int16_t x5754 = INT16_MAX;
static int64_t x5797 = 923752444698LL;
volatile uint8_t x5799 = 17U;
int32_t x5965 = -6637;
static uint16_t x5966 = 175U;
int64_t x5968 = INT64_MAX;
volatile int64_t x6062 = INT64_MAX;
int8_t x6064 = -11;
volatile int64_t t91 = -28157LL;
volatile int64_t t92 = 4070504557940LL;
static volatile uint16_t x6280 = UINT16_MAX;
uint32_t x6303 = 60U;
volatile uint16_t x6337 = UINT16_MAX;
int16_t x6338 = INT16_MAX;
static int32_t t95 = 7791428;
volatile uint16_t x6628 = UINT16_MAX;
static volatile uint64_t t97 = 34LLU;
static int16_t x6770 = 939;


void f0(void) {
	volatile uint32_t x1 = 61045U;
	volatile uint64_t x2 = UINT64_MAX;
	uint16_t x3 = 14U;
	uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = 58853137651231839LLU;

	t0 = (x1%((x2>>x3)&x4));

	if (t0 != 61045LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x61 = INT16_MIN;
	uint64_t x62 = 910315146020690LLU;
	volatile int8_t x63 = 13;
	volatile int32_t x64 = INT32_MIN;
	volatile uint64_t t1 = 9415205099LLU;

	t1 = (x61%((x62>>x63)&x64));

	if (t1 != 4294934528LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x185 = 4794059687649LL;
	static volatile int64_t x188 = -1LL;
	int64_t t2 = -1LL;

	t2 = (x185%((x186>>x187)&x188));

	if (t2 != 9LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x249 = 180U;
	int32_t x250 = INT32_MAX;
	uint32_t x252 = 31698460U;
	volatile uint32_t t3 = 12621U;

	t3 = (x249%((x250>>x251)&x252));

	if (t3 != 180U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x330 = 2;
	volatile int32_t t4 = -60;

	t4 = (x329%((x330>>x331)&x332));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x404 = INT16_MAX;
	int64_t t5 = -2528909455363751LL;

	t5 = (x401%((x402>>x403)&x404));

	if (t5 != -22LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x414 = UINT32_MAX;
	static volatile int16_t x416 = -1;
	uint32_t t6 = 1U;

	t6 = (x413%((x414>>x415)&x416));

	if (t6 != 3U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x489 = INT64_MAX;
	uint8_t x491 = 0U;
	uint64_t x492 = 95093705346795LLU;
	uint64_t t7 = 250494806LLU;

	t7 = (x489%((x490>>x491)&x492));

	if (t7 != 43367858435167LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x509 = 0U;
	volatile uint32_t x511 = 10U;
	uint8_t x512 = 57U;
	volatile uint64_t t8 = 3949682253788687LLU;

	t8 = (x509%((x510>>x511)&x512));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x545 = 1U;
	uint32_t x546 = UINT32_MAX;
	uint8_t x547 = 4U;
	int8_t x548 = INT8_MIN;

	t9 = (x545%((x546>>x547)&x548));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x557 = INT32_MIN;
	uint64_t x558 = UINT64_MAX;
	uint8_t x559 = 3U;
	static volatile uint64_t x560 = 966883486584125LLU;
	volatile uint64_t t10 = 179022210148319LLU;

	t10 = (x557%((x558>>x559)&x560));

	if (t10 != 540914510131218LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x581 = UINT64_MAX;
	static int8_t x582 = INT8_MAX;
	static volatile int16_t x583 = 1;
	static volatile int16_t x584 = -1;
	uint64_t t11 = 1720887285122218LLU;

	t11 = (x581%((x582>>x583)&x584));

	if (t11 != 15LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x605 = 2U;
	uint64_t x606 = UINT64_MAX;
	uint16_t x607 = 7U;
	volatile uint64_t t12 = 5752671027135LLU;

	t12 = (x605%((x606>>x607)&x608));

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x770 = INT32_MAX;
	int32_t x771 = 13;
	static int16_t x772 = -31;
	static int64_t t13 = -511LL;

	t13 = (x769%((x770>>x771)&x772));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x822 = INT8_MAX;
	int16_t x823 = 1;
	volatile uint64_t t14 = 6LLU;

	t14 = (x821%((x822>>x823)&x824));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1098 = 333352501873028234LLU;
	static uint64_t x1100 = UINT64_MAX;

	t15 = (x1097%((x1098>>x1099)&x1100));

	if (t15 != 3796082672LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x1141 = UINT16_MAX;
	uint16_t x1142 = 1652U;
	static uint8_t x1143 = 1U;
	int8_t x1144 = -1;

	t16 = (x1141%((x1142>>x1143)&x1144));

	if (t16 != 281) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x1153 = UINT8_MAX;
	int8_t x1154 = 59;
	static uint8_t x1155 = 3U;
	int8_t x1156 = -1;
	volatile int32_t t17 = -266466;

	t17 = (x1153%((x1154>>x1155)&x1156));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1233 = 4LLU;
	uint16_t x1236 = UINT16_MAX;
	volatile uint64_t t18 = 6738274LLU;

	t18 = (x1233%((x1234>>x1235)&x1236));

	if (t18 != 4LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x1249 = -1LL;
	uint32_t x1250 = 316U;
	volatile int16_t x1251 = 0;
	uint16_t x1252 = UINT16_MAX;
	volatile int64_t t19 = -1074398LL;

	t19 = (x1249%((x1250>>x1251)&x1252));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x1289 = -1;
	uint16_t x1290 = UINT16_MAX;
	int8_t x1291 = 0;
	int32_t x1292 = -458923477;
	volatile int32_t t20 = -181701242;

	t20 = (x1289%((x1290>>x1291)&x1292));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1330 = 15968180U;
	int64_t x1332 = 29386777484LL;

	t21 = (x1329%((x1330>>x1331)&x1332));

	if (t21 != 7LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1389 = 339426318449731LLU;
	static uint64_t x1390 = UINT64_MAX;
	static int16_t x1392 = -1;
	volatile uint64_t t22 = 4177623959LLU;

	t22 = (x1389%((x1390>>x1391)&x1392));

	if (t22 != 339426318449731LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1437 = 6U;
	int8_t x1438 = INT8_MAX;
	uint8_t x1439 = 0U;
	volatile uint32_t x1440 = UINT32_MAX;

	t23 = (x1437%((x1438>>x1439)&x1440));

	if (t23 != 6U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x1505 = UINT16_MAX;
	volatile uint64_t x1506 = 155319573661LLU;
	int16_t x1507 = 24;

	t24 = (x1505%((x1506>>x1507)&x1508));

	if (t24 != 743LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1537 = INT32_MIN;
	uint16_t x1538 = UINT16_MAX;
	static int8_t x1539 = 1;
	uint64_t t25 = 11464702468392LLU;

	t25 = (x1537%((x1538>>x1539)&x1540));

	if (t25 != 14LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1701 = -129771LL;
	int32_t x1702 = 10;
	uint32_t x1703 = 3U;
	int8_t x1704 = -27;

	t26 = (x1701%((x1702>>x1703)&x1704));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1743 = 0;
	static uint64_t x1744 = 331LLU;
	static volatile uint64_t t27 = 169910796LLU;

	t27 = (x1741%((x1742>>x1743)&x1744));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1753 = INT8_MAX;
	static uint32_t t28 = 232549297U;

	t28 = (x1753%((x1754>>x1755)&x1756));

	if (t28 != 127U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1757 = INT32_MIN;
	volatile uint16_t x1759 = 0U;
	uint64_t t29 = 88671426LLU;

	t29 = (x1757%((x1758>>x1759)&x1760));

	if (t29 != 14LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1834 = UINT64_MAX;
	static uint8_t x1835 = 0U;
	int64_t x1836 = INT64_MIN;
	uint64_t t30 = 869326577961997241LLU;

	t30 = (x1833%((x1834>>x1835)&x1836));

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1837 = INT8_MAX;
	int64_t x1840 = -1LL;
	volatile int64_t t31 = -138220LL;

	t31 = (x1837%((x1838>>x1839)&x1840));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1861 = -498;
	static volatile uint8_t x1863 = 4U;
	int8_t x1864 = -1;

	t32 = (x1861%((x1862>>x1863)&x1864));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1915 = 1U;
	int16_t x1916 = INT16_MAX;
	int64_t t33 = -1431753064720299LL;

	t33 = (x1913%((x1914>>x1915)&x1916));

	if (t33 != -1826LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1969 = INT16_MAX;
	static uint64_t x1970 = 3722698660131307995LLU;
	int8_t x1971 = 0;
	int8_t x1972 = INT8_MIN;
	uint64_t t34 = 9853948207656493LLU;

	t34 = (x1969%((x1970>>x1971)&x1972));

	if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2250 = 20U;
	int64_t x2251 = 1LL;
	int32_t x2252 = -1;
	volatile int32_t t35 = -1;

	t35 = (x2249%((x2250>>x2251)&x2252));

	if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2305 = INT64_MIN;
	uint32_t x2306 = UINT32_MAX;
	static volatile uint8_t x2307 = 5U;
	uint16_t x2308 = 72U;
	int64_t t36 = -26459118LL;

	t36 = (x2305%((x2306>>x2307)&x2308));

	if (t36 != -8LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2325 = UINT8_MAX;
	int64_t x2326 = 1808LL;
	int8_t x2327 = 1;
	static int32_t x2328 = INT32_MAX;

	t37 = (x2325%((x2326>>x2327)&x2328));

	if (t37 != 255LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2453 = -3;
	uint64_t x2454 = UINT64_MAX;
	uint8_t x2455 = 5U;
	static int8_t x2456 = INT8_MIN;
	uint64_t t38 = 1953055199873817LLU;

	t38 = (x2453%((x2454>>x2455)&x2456));

	if (t38 != 4093LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2786 = INT16_MAX;
	uint8_t x2787 = 10U;
	int32_t x2788 = -1;

	t39 = (x2785%((x2786>>x2787)&x2788));

	if (t39 != -8LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x2861 = 635U;
	uint16_t x2862 = UINT16_MAX;
	volatile int16_t x2863 = 4;
	static volatile uint32_t t40 = 865038185U;

	t40 = (x2861%((x2862>>x2863)&x2864));

	if (t40 != 635U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2869 = 2562LLU;
	uint32_t x2870 = 5U;
	int8_t x2871 = 0;
	uint32_t x2872 = 62U;

	t41 = (x2869%((x2870>>x2871)&x2872));

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2909 = INT8_MAX;
	int64_t x2910 = INT64_MAX;
	uint8_t x2911 = 42U;
	static int64_t x2912 = -1LL;

	t42 = (x2909%((x2910>>x2911)&x2912));

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x3191 = 1U;
	uint8_t x3192 = UINT8_MAX;
	int32_t t43 = 7715698;

	t43 = (x3189%((x3190>>x3191)&x3192));

	if (t43 != 60) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3217 = 8;
	int8_t x3218 = 8;

	t44 = (x3217%((x3218>>x3219)&x3220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x3327 = 1U;

	t45 = (x3325%((x3326>>x3327)&x3328));

	if (t45 != 255LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x3342 = 3U;
	uint32_t x3343 = 1U;
	int64_t x3344 = 2821260362614171LL;
	volatile int64_t t46 = -1042358649147846LL;

	t46 = (x3341%((x3342>>x3343)&x3344));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x3385 = 0U;
	static int64_t x3386 = 11966LL;
	uint16_t x3387 = 1U;
	static int16_t x3388 = -145;
	int64_t t47 = 411537059986157LL;

	t47 = (x3385%((x3386>>x3387)&x3388));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3438 = 2279917817072166619LL;
	uint16_t x3439 = 1U;
	static uint64_t t48 = 177LLU;

	t48 = (x3437%((x3438>>x3439)&x3440));

	if (t48 != 14831LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x3601 = 1;
	static int16_t x3602 = 108;
	uint16_t x3603 = 0U;
	volatile uint64_t x3604 = 8LLU;
	volatile uint64_t t49 = 41835940237LLU;

	t49 = (x3601%((x3602>>x3603)&x3604));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3649 = INT32_MAX;
	int16_t x3651 = 1;
	static uint64_t x3652 = 1007736850164596759LLU;
	uint64_t t50 = 54336597081594461LLU;

	t50 = (x3649%((x3650>>x3651)&x3652));

	if (t50 != 8LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3673 = 11U;
	uint32_t x3674 = UINT32_MAX;
	static int16_t x3675 = 1;
	uint32_t x3676 = UINT32_MAX;
	uint32_t t51 = 283052344U;

	t51 = (x3673%((x3674>>x3675)&x3676));

	if (t51 != 11U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3717 = -1LL;
	static uint64_t x3718 = 2044258LLU;
	static volatile int8_t x3720 = INT8_MAX;

	t52 = (x3717%((x3718>>x3719)&x3720));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3721 = 0U;
	uint16_t x3722 = UINT16_MAX;
	uint8_t x3723 = 0U;
	static volatile uint16_t x3724 = 356U;
	volatile int32_t t53 = -125;

	t53 = (x3721%((x3722>>x3723)&x3724));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x3761 = -1;
	static volatile uint32_t x3762 = 141295676U;
	uint8_t x3763 = 0U;
	int16_t x3764 = -1;
	volatile uint32_t t54 = 534244577U;

	t54 = (x3761%((x3762>>x3763)&x3764));

	if (t54 != 56097015U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3837 = 5;
	uint32_t x3838 = 81741245U;
	uint8_t x3839 = 16U;
	static uint64_t x3840 = 63438303794398LLU;
	static uint64_t t55 = 6548LLU;

	t55 = (x3837%((x3838>>x3839)&x3840));

	if (t55 != 5LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3933 = 23U;
	volatile int64_t x3934 = INT64_MAX;
	int16_t x3935 = 9;

	t56 = (x3933%((x3934>>x3935)&x3936));

	if (t56 != 23LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4009 = 679602;
	int8_t x4010 = 14;
	static int64_t x4011 = 0LL;
	static int32_t x4012 = -1;
	int32_t t57 = -1;

	t57 = (x4009%((x4010>>x4011)&x4012));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4059 = 0;
	volatile uint16_t x4060 = UINT16_MAX;
	int32_t t58 = 4359;

	t58 = (x4057%((x4058>>x4059)&x4060));

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4077 = -4872;
	uint16_t x4079 = 6U;
	int16_t x4080 = INT16_MAX;
	static uint64_t t59 = 19LLU;

	t59 = (x4077%((x4078>>x4079)&x4080));

	if (t59 != 27911LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x4205 = 13LLU;
	uint16_t x4206 = UINT16_MAX;
	static volatile int16_t x4207 = 0;
	int8_t x4208 = 37;

	t60 = (x4205%((x4206>>x4207)&x4208));

	if (t60 != 13LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4249 = -1;
	static uint16_t x4250 = 3611U;
	uint16_t x4251 = 0U;
	static uint32_t x4252 = 623685U;
	uint32_t t61 = 62535608U;

	t61 = (x4249%((x4250>>x4251)&x4252));

	if (t61 != 1020U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x4277 = INT16_MIN;
	uint16_t x4279 = 9U;
	int8_t x4280 = INT8_MAX;
	volatile uint32_t t62 = 14U;

	t62 = (x4277%((x4278>>x4279)&x4280));

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4313 = -5;
	volatile int8_t x4314 = INT8_MAX;
	uint16_t x4315 = 2U;
	static uint8_t x4316 = UINT8_MAX;

	t63 = (x4313%((x4314>>x4315)&x4316));

	if (t63 != -5) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x4505 = 63U;
	uint32_t x4506 = 801U;
	static uint16_t x4508 = UINT16_MAX;
	volatile uint32_t t64 = 348U;

	t64 = (x4505%((x4506>>x4507)&x4508));

	if (t64 != 13U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4537 = 28;
	uint8_t x4539 = 2U;
	static volatile uint64_t t65 = 1522781730739LLU;

	t65 = (x4537%((x4538>>x4539)&x4540));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x4785 = 2538173U;
	static int64_t x4786 = INT64_MAX;
	uint16_t x4787 = 47U;
	static volatile int16_t x4788 = -1;
	volatile int64_t t66 = -46510451325288745LL;

	t66 = (x4785%((x4786>>x4787)&x4788));

	if (t66 != 47843LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x4833 = 32U;
	int8_t x4835 = 0;
	int64_t x4836 = INT64_MAX;
	uint64_t t67 = 996367821105LLU;

	t67 = (x4833%((x4834>>x4835)&x4836));

	if (t67 != 32LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4874 = INT64_MAX;
	int8_t x4875 = 1;
	uint32_t x4876 = UINT32_MAX;
	volatile int64_t t68 = -49806983824LL;

	t68 = (x4873%((x4874>>x4875)&x4876));

	if (t68 != 65535LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4913 = INT32_MAX;
	volatile uint8_t x4915 = 2U;
	static int64_t x4916 = -118920471122LL;

	t69 = (x4913%((x4914>>x4915)&x4916));

	if (t69 != 2315LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4961 = UINT8_MAX;
	uint16_t x4962 = 8454U;
	int32_t x4963 = 1;
	static int32_t x4964 = 1976;

	t70 = (x4961%((x4962>>x4963)&x4964));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x5001 = INT32_MAX;
	volatile uint16_t x5002 = 4346U;
	uint8_t x5003 = 1U;
	volatile int32_t t71 = -5217;

	t71 = (x5001%((x5002>>x5003)&x5004));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x5101 = 230U;
	int32_t x5104 = -1;
	static int64_t t72 = -135021078263532949LL;

	t72 = (x5101%((x5102>>x5103)&x5104));

	if (t72 != 230LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5163 = 0;

	t73 = (x5161%((x5162>>x5163)&x5164));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x5190 = 116554022690156LLU;
	int8_t x5191 = 0;
	int32_t x5192 = 878;
	volatile uint64_t t74 = 1683952160458626162LLU;

	t74 = (x5189%((x5190>>x5191)&x5192));

	if (t74 != 292LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x5266 = 5360U;
	int8_t x5267 = 2;
	uint16_t x5268 = 27227U;

	t75 = (x5265%((x5266>>x5267)&x5268));

	if (t75 != -8) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x5282 = INT32_MAX;
	uint8_t x5283 = 0U;
	int8_t x5284 = 39;

	t76 = (x5281%((x5282>>x5283)&x5284));

	if (t76 != 36) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x5341 = 0;
	int16_t x5342 = 70;
	uint8_t x5343 = 1U;
	uint32_t x5344 = 1261913U;
	static uint32_t t77 = 3U;

	t77 = (x5341%((x5342>>x5343)&x5344));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5381 = 28;
	static int16_t x5382 = 3660;
	uint16_t x5383 = 0U;
	uint32_t x5384 = 51999U;
	volatile uint32_t t78 = 25565325U;

	t78 = (x5381%((x5382>>x5383)&x5384));

	if (t78 != 28U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5413 = -46625977607418578LL;
	uint64_t x5414 = UINT64_MAX;
	uint32_t x5415 = 0U;
	static int32_t x5416 = INT32_MIN;
	uint64_t t79 = 598467LLU;

	t79 = (x5413%((x5414>>x5415)&x5416));

	if (t79 != 18400118096102133038LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x5457 = INT16_MIN;
	int16_t x5458 = 13990;
	uint8_t x5459 = 0U;
	int8_t x5460 = INT8_MAX;
	int32_t t80 = -357;

	t80 = (x5457%((x5458>>x5459)&x5460));

	if (t80 != -12) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5522 = INT32_MAX;
	int8_t x5523 = 4;
	volatile int64_t t81 = -250LL;

	t81 = (x5521%((x5522>>x5523)&x5524));

	if (t81 != -77633553LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x5559 = 0;
	uint32_t t82 = 6U;

	t82 = (x5557%((x5558>>x5559)&x5560));

	if (t82 != 4294934528U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5641 = 0;
	uint32_t x5643 = 1U;
	int16_t x5644 = INT16_MIN;
	int32_t t83 = 944243;

	t83 = (x5641%((x5642>>x5643)&x5644));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5661 = 73438187U;
	static int32_t x5662 = INT32_MAX;
	static volatile uint16_t x5663 = 0U;
	uint8_t x5664 = 1U;
	volatile uint32_t t84 = 2010U;

	t84 = (x5661%((x5662>>x5663)&x5664));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5753 = UINT16_MAX;
	volatile uint16_t x5755 = 0U;
	uint32_t x5756 = 10135U;
	static uint32_t t85 = 113824668U;

	t85 = (x5753%((x5754>>x5755)&x5756));

	if (t85 != 4725U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5773 = 1655065;
	uint32_t x5774 = 42U;
	uint8_t x5775 = 1U;
	static uint64_t x5776 = UINT64_MAX;
	uint64_t t86 = 30304265LLU;

	t86 = (x5773%((x5774>>x5775)&x5776));

	if (t86 != 13LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x5798 = UINT32_MAX;
	int64_t x5800 = -1LL;
	static int64_t t87 = 0LL;

	t87 = (x5797%((x5798>>x5799)&x5800));

	if (t87 != 24149LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x5817 = 6U;
	static uint16_t x5818 = 3U;
	int16_t x5819 = 1;
	volatile int64_t x5820 = INT64_MAX;
	int64_t t88 = -14LL;

	t88 = (x5817%((x5818>>x5819)&x5820));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5849 = INT8_MIN;
	static volatile uint8_t x5850 = UINT8_MAX;
	int8_t x5851 = 5;
	volatile int16_t x5852 = INT16_MAX;
	volatile int32_t t89 = -2;

	t89 = (x5849%((x5850>>x5851)&x5852));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x5967 = 1;
	static volatile int64_t t90 = -11713605992196LL;

	t90 = (x5965%((x5966>>x5967)&x5968));

	if (t90 != -25LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x6061 = INT16_MIN;
	int16_t x6063 = 8;

	t91 = (x6061%((x6062>>x6063)&x6064));

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x6225 = INT64_MAX;
	static int32_t x6226 = 216516538;
	uint8_t x6227 = 17U;
	uint16_t x6228 = 96U;

	t92 = (x6225%((x6226>>x6227)&x6228));

	if (t92 != 31LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x6277 = -1;
	uint32_t x6278 = 45128U;
	volatile uint32_t x6279 = 2U;
	static volatile uint32_t t93 = 46923U;

	t93 = (x6277%((x6278>>x6279)&x6280));

	if (t93 != 151U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x6301 = INT64_MIN;
	int64_t x6302 = INT64_MAX;
	volatile int64_t x6304 = 8293117030687450LL;
	static volatile int64_t t94 = -25LL;

	t94 = (x6301%((x6302>>x6303)&x6304));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x6339 = 9;
	int16_t x6340 = 1573;

	t95 = (x6337%((x6338>>x6339)&x6340));

	if (t95 != 8) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x6381 = -1LL;
	static int16_t x6382 = INT16_MAX;
	uint16_t x6383 = 0U;
	static volatile int16_t x6384 = -1;
	int64_t t96 = -523331097LL;

	t96 = (x6381%((x6382>>x6383)&x6384));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6625 = -1;
	uint64_t x6626 = UINT64_MAX;
	static int8_t x6627 = 1;

	t97 = (x6625%((x6626>>x6627)&x6628));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x6729 = -1735LL;
	volatile int64_t x6730 = 1288LL;
	uint16_t x6731 = 6U;
	volatile int32_t x6732 = 399537;
	static int64_t t98 = 347765389LL;

	t98 = (x6729%((x6730>>x6731)&x6732));

	if (t98 != -7LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6769 = -1;
	int16_t x6771 = 0;
	uint32_t x6772 = UINT32_MAX;
	static volatile uint32_t t99 = 11592711U;

	t99 = (x6769%((x6770>>x6771)&x6772));

	if (t99 != 75U) { NG(); } else { ; }
	
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

