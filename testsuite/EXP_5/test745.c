#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x101 = 27916505U;
static uint16_t x102 = 6496U;
int8_t x103 = -25;
uint64_t x125 = 2426248060LLU;
uint16_t x126 = 8U;
static int32_t x127 = INT32_MIN;
volatile int16_t x138 = INT16_MAX;
static uint64_t x141 = 3509978023909LLU;
uint64_t t4 = 285773822768247844LLU;
int8_t x178 = INT8_MIN;
int64_t x180 = 3LL;
int16_t x187 = INT16_MAX;
volatile int16_t x210 = INT16_MAX;
int64_t x233 = INT64_MIN;
volatile int64_t x235 = INT64_MIN;
uint64_t x236 = 3LLU;
uint8_t x290 = 11U;
volatile uint32_t x292 = 13U;
static volatile int16_t x329 = INT16_MIN;
static uint16_t x330 = 40U;
int64_t x331 = 676225LL;
int8_t x332 = 5;
static uint8_t x363 = 18U;
static volatile uint8_t x604 = 24U;
int64_t x657 = -1909561049LL;
uint32_t x671 = 32374U;
volatile int8_t x672 = 0;
static volatile int32_t x785 = INT32_MIN;
int32_t x787 = INT32_MIN;
int8_t x1022 = -1;
volatile uint64_t x1023 = 932127102LLU;
static uint64_t t18 = 613581573564799159LLU;
int64_t x1124 = 6LL;
volatile uint64_t t20 = 325890331360LLU;
int8_t x1168 = 31;
int8_t x1657 = INT8_MIN;
uint8_t x1658 = UINT8_MAX;
int8_t x1660 = 3;
static int16_t x1713 = INT16_MAX;
static uint32_t t25 = 12563533U;
int32_t x1753 = INT32_MAX;
volatile int8_t x1754 = INT8_MAX;
volatile int32_t x1814 = 178;
int64_t x1815 = 26048LL;
volatile int64_t t27 = -40287LL;
volatile int64_t x1826 = INT64_MAX;
volatile int32_t t29 = 1612;
volatile uint64_t x1923 = 868LLU;
uint32_t x1998 = 3590U;
uint8_t x2000 = 15U;
static int16_t x2056 = 2;
static int16_t x2266 = INT16_MAX;
int64_t x2268 = 0LL;
uint64_t x2329 = 1008731568970LLU;
static int16_t x2357 = 2;
static int32_t x2437 = INT32_MIN;
volatile int64_t t38 = -17010260512825923LL;
volatile uint64_t x2507 = 63296LLU;
volatile uint64_t t39 = 0LLU;
uint16_t x2551 = 114U;
static uint32_t x2559 = 15U;
volatile uint16_t x2563 = 7U;
volatile uint32_t x2613 = 9910832U;
int32_t x2614 = INT32_MAX;
volatile int32_t x2799 = INT32_MIN;
int8_t x2907 = INT8_MIN;
int8_t x2950 = 3;
static uint64_t x3334 = 7LLU;
int16_t x3444 = 13;
static uint16_t x3464 = 20U;
uint16_t x3590 = 2592U;
static volatile uint32_t t60 = 380696U;
uint64_t t61 = 81800024LLU;
int8_t x3877 = INT8_MIN;
volatile uint32_t x3879 = UINT32_MAX;
static uint8_t x3889 = 30U;
int64_t x3956 = 18LL;
uint64_t t65 = 1108342292362531187LLU;
volatile uint64_t t66 = 986520LLU;
volatile uint64_t x3993 = 15868758838414LLU;
static int64_t x4013 = INT64_MIN;
int64_t t70 = 758341586302LL;
uint64_t x4334 = UINT64_MAX;
int64_t x4621 = INT64_MAX;
volatile uint8_t x4624 = 56U;
volatile int32_t x4708 = 2;
volatile int32_t t73 = -806;
static int8_t x4719 = INT8_MIN;
uint32_t x4727 = 13U;
int8_t x4898 = 23;
volatile int16_t x4966 = 9;
uint8_t x5170 = UINT8_MAX;
int16_t x5274 = INT16_MAX;
volatile uint8_t x5438 = 5U;
uint8_t x5512 = 57U;
int16_t x5516 = 29;
volatile int16_t x5554 = INT16_MIN;
volatile uint32_t t90 = 1048U;
volatile uint64_t x5822 = 486928686803LLU;
int16_t x5823 = INT16_MIN;
volatile uint64_t t93 = 1169362666LLU;
volatile uint8_t x5988 = 5U;
uint32_t t94 = 107U;
int64_t t95 = -1742LL;
uint32_t t96 = 79408U;
volatile int64_t x6117 = INT64_MIN;
uint32_t x6166 = 5803U;
volatile int32_t x6168 = 1;


void f0(void) {
	uint16_t x37 = 127U;
	volatile int32_t x38 = INT32_MIN;
	uint64_t x39 = 1277996398549808763LLU;
	static uint16_t x40 = 1U;
	volatile uint64_t t0 = 13LLU;

	t0 = (x37/((x38%x39)<<x40));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x104 = 7LL;
	volatile uint32_t t1 = 129959U;

	t1 = (x101/((x102%x103)<<x104));

	if (t1 != 10385U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x128 = 3U;
	uint64_t t2 = 1057290728LLU;

	t2 = (x125/((x126%x127)<<x128));

	if (t2 != 37910125LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x137 = 2;
	uint8_t x139 = 33U;
	uint16_t x140 = 5U;
	static volatile int32_t t3 = 181449;

	t3 = (x137/((x138%x139)<<x140));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x142 = 3;
	uint64_t x143 = 336725268582569LLU;
	static uint8_t x144 = 2U;

	t4 = (x141/((x142%x143)<<x144));

	if (t4 != 292498168659LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x177 = INT8_MIN;
	volatile uint32_t x179 = UINT32_MAX;
	volatile uint32_t t5 = 0U;

	t5 = (x177/((x178%x179)<<x180));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x185 = -1LL;
	int8_t x186 = 26;
	volatile uint8_t x188 = 5U;
	static volatile int64_t t6 = 451LL;

	t6 = (x185/((x186%x187)<<x188));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x209 = 4505U;
	static uint64_t x211 = UINT64_MAX;
	int16_t x212 = 28;
	static uint64_t t7 = 75871202886315LLU;

	t7 = (x209/((x210%x211)<<x212));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x234 = 10;
	volatile int64_t t8 = 1783477362228752LL;

	t8 = (x233/((x234%x235)<<x236));

	if (t8 != -115292150460684697LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x289 = 69;
	int64_t x291 = INT64_MAX;
	static int64_t t9 = -85110940LL;

	t9 = (x289/((x290%x291)<<x292));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t t10 = 14504165LL;

	t10 = (x329/((x330%x331)<<x332));

	if (t10 != -25LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x353 = -1;
	int32_t x354 = 15;
	volatile int16_t x355 = INT16_MIN;
	uint8_t x356 = 25U;
	volatile int32_t t11 = -59267729;

	t11 = (x353/((x354%x355)<<x356));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x361 = -29886LL;
	int32_t x362 = 47823939;
	uint8_t x364 = 5U;
	int64_t t12 = -118818757LL;

	t12 = (x361/((x362%x363)<<x364));

	if (t12 != -103LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x601 = 247U;
	uint32_t x602 = 2U;
	static uint64_t x603 = 268LLU;
	uint64_t t13 = 464874261LLU;

	t13 = (x601/((x602%x603)<<x604));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x658 = 25;
	static int64_t x659 = INT64_MIN;
	uint8_t x660 = 13U;
	volatile int64_t t14 = 3272329416702628207LL;

	t14 = (x657/((x658%x659)<<x660));

	if (t14 != -9324LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x669 = 2U;
	int32_t x670 = INT32_MIN;
	uint32_t t15 = 4450U;

	t15 = (x669/((x670%x671)<<x672));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x717 = INT64_MAX;
	uint64_t x718 = 978927623LLU;
	int8_t x719 = 7;
	int64_t x720 = 1LL;
	uint64_t t16 = 328021137LLU;

	t16 = (x717/((x718%x719)<<x720));

	if (t16 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x786 = 1U;
	uint8_t x788 = 11U;
	volatile int32_t t17 = 10856;

	t17 = (x785/((x786%x787)<<x788));

	if (t17 != -1048576) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1021 = -1;
	volatile uint8_t x1024 = 4U;

	t18 = (x1021/((x1022%x1023)<<x1024));

	if (t18 != 2263712899LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1121 = INT64_MIN;
	volatile uint16_t x1122 = 2937U;
	uint32_t x1123 = 78803U;
	volatile int64_t t19 = -168145LL;

	t19 = (x1121/((x1122%x1123)<<x1124));

	if (t19 != -49068841701006LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1141 = 242078LLU;
	int64_t x1142 = -1LL;
	uint64_t x1143 = 1034328347745150956LLU;
	uint8_t x1144 = 14U;

	t20 = (x1141/((x1142%x1143)<<x1144));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1165 = 1608U;
	uint32_t x1166 = 811783384U;
	int64_t x1167 = INT64_MIN;
	static volatile int64_t t21 = 1396614733442LL;

	t21 = (x1165/((x1166%x1167)<<x1168));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x1209 = 0U;
	uint8_t x1210 = 2U;
	static volatile int8_t x1211 = INT8_MIN;
	volatile uint32_t x1212 = 3U;
	volatile uint32_t t22 = 19U;

	t22 = (x1209/((x1210%x1211)<<x1212));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1469 = -431;
	volatile uint32_t x1470 = 1361344861U;
	int32_t x1471 = 4;
	static int8_t x1472 = 1;
	volatile uint32_t t23 = 58U;

	t23 = (x1469/((x1470%x1471)<<x1472));

	if (t23 != 2147483432U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1659 = INT8_MIN;
	int32_t t24 = -4115331;

	t24 = (x1657/((x1658%x1659)<<x1660));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1714 = 22307U;
	static uint8_t x1715 = UINT8_MAX;
	uint8_t x1716 = 23U;

	t25 = (x1713/((x1714%x1715)<<x1716));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1755 = UINT8_MAX;
	uint32_t x1756 = 1U;
	int32_t t26 = -41361469;

	t26 = (x1753/((x1754%x1755)<<x1756));

	if (t26 != 8454660) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1813 = INT8_MIN;
	static uint16_t x1816 = 6U;

	t27 = (x1813/((x1814%x1815)<<x1816));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1825 = INT8_MAX;
	static int8_t x1827 = INT8_MIN;
	uint8_t x1828 = 31U;
	volatile int64_t t28 = 372240LL;

	t28 = (x1825/((x1826%x1827)<<x1828));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1877 = 26U;
	int16_t x1878 = INT16_MAX;
	volatile int32_t x1879 = INT32_MAX;
	int32_t x1880 = 2;

	t29 = (x1877/((x1878%x1879)<<x1880));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1921 = -1;
	int64_t x1922 = INT64_MIN;
	int32_t x1924 = 0;
	volatile uint64_t t30 = 126224408614293857LLU;

	t30 = (x1921/((x1922%x1923)<<x1924));

	if (t30 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1997 = 4957029LLU;
	uint8_t x1999 = UINT8_MAX;
	volatile uint64_t t31 = 1420623596LLU;

	t31 = (x1997/((x1998%x1999)<<x2000));

	if (t31 != 7LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2053 = 5U;
	uint32_t x2054 = 57391U;
	uint32_t x2055 = UINT32_MAX;
	volatile uint32_t t32 = 2U;

	t32 = (x2053/((x2054%x2055)<<x2056));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x2097 = 2120953882862465688LL;
	uint16_t x2098 = 704U;
	int64_t x2099 = INT64_MAX;
	int8_t x2100 = 1;
	int64_t t33 = 74894569057664LL;

	t33 = (x2097/((x2098%x2099)<<x2100));

	if (t33 != 1506359291805728LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2265 = 2;
	int16_t x2267 = 149;
	int32_t t34 = -62380;

	t34 = (x2265/((x2266%x2267)<<x2268));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2309 = -104826LL;
	uint8_t x2310 = 1U;
	int16_t x2311 = INT16_MIN;
	volatile int16_t x2312 = 2;
	int64_t t35 = 309884580877712933LL;

	t35 = (x2309/((x2310%x2311)<<x2312));

	if (t35 != -26206LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2330 = UINT64_MAX;
	static uint8_t x2331 = 31U;
	int8_t x2332 = 10;
	volatile uint64_t t36 = 42355LLU;

	t36 = (x2329/((x2330%x2331)<<x2332));

	if (t36 != 65672628LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2358 = UINT64_MAX;
	int8_t x2359 = 9;
	uint16_t x2360 = 14U;
	static uint64_t t37 = 11955700865232LLU;

	t37 = (x2357/((x2358%x2359)<<x2360));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2438 = 37;
	int64_t x2439 = 3661754963969LL;
	uint16_t x2440 = 7U;

	t38 = (x2437/((x2438%x2439)<<x2440));

	if (t38 != -453438LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2505 = INT8_MIN;
	uint64_t x2506 = 12LLU;
	static int16_t x2508 = 0;

	t39 = (x2505/((x2506%x2507)<<x2508));

	if (t39 != 1537228672809129290LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2549 = 2U;
	int64_t x2550 = 1663753120LL;
	int16_t x2552 = 18;
	volatile int64_t t40 = 1LL;

	t40 = (x2549/((x2550%x2551)<<x2552));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2557 = INT8_MIN;
	int8_t x2558 = INT8_MAX;
	volatile uint32_t x2560 = 3U;
	uint32_t t41 = 357331U;

	t41 = (x2557/((x2558%x2559)<<x2560));

	if (t41 != 76695842U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2561 = -1LL;
	uint16_t x2562 = UINT16_MAX;
	volatile int8_t x2564 = 2;
	volatile int64_t t42 = 9480706640632449LL;

	t42 = (x2561/((x2562%x2563)<<x2564));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2565 = -18;
	uint64_t x2566 = 2077749719853LLU;
	static int16_t x2567 = 734;
	static volatile uint32_t x2568 = 34U;
	volatile uint64_t t43 = 2404419270LLU;

	t43 = (x2565/((x2566%x2567)<<x2568));

	if (t43 != 8454660LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2597 = UINT8_MAX;
	uint64_t x2598 = UINT64_MAX;
	static volatile int16_t x2599 = INT16_MAX;
	int8_t x2600 = 0;
	static volatile uint64_t t44 = 11611101368LLU;

	t44 = (x2597/((x2598%x2599)<<x2600));

	if (t44 != 17LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2615 = INT8_MAX;
	uint8_t x2616 = 16U;
	uint32_t t45 = 773249U;

	t45 = (x2613/((x2614%x2615)<<x2616));

	if (t45 != 21U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2681 = INT64_MAX;
	static volatile int16_t x2682 = 10187;
	uint16_t x2683 = 251U;
	volatile int8_t x2684 = 1;
	int64_t t46 = 282664324070LL;

	t46 = (x2681/((x2682%x2683)<<x2684));

	if (t46 != 31372013730798557LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2709 = 691824748899LLU;
	int16_t x2710 = 12;
	volatile int8_t x2711 = INT8_MAX;
	uint64_t x2712 = 2LLU;
	volatile uint64_t t47 = 44272834LLU;

	t47 = (x2709/((x2710%x2711)<<x2712));

	if (t47 != 14413015602LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2797 = UINT16_MAX;
	uint64_t x2798 = 530721421509147LLU;
	volatile uint8_t x2800 = 33U;
	volatile uint64_t t48 = 306279276LLU;

	t48 = (x2797/((x2798%x2799)<<x2800));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x2905 = 0U;
	uint64_t x2906 = 3579578LLU;
	int32_t x2908 = 0;
	static volatile uint64_t t49 = 32LLU;

	t49 = (x2905/((x2906%x2907)<<x2908));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x2949 = 978115955080LLU;
	int32_t x2951 = INT32_MIN;
	int64_t x2952 = 1LL;
	static uint64_t t50 = 7560521103LLU;

	t50 = (x2949/((x2950%x2951)<<x2952));

	if (t50 != 163019325846LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3185 = -4;
	uint16_t x3186 = 436U;
	int16_t x3187 = INT16_MAX;
	uint32_t x3188 = 12U;
	int32_t t51 = 215;

	t51 = (x3185/((x3186%x3187)<<x3188));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3333 = INT64_MIN;
	uint64_t x3335 = 265000720LLU;
	static volatile uint32_t x3336 = 1U;
	uint64_t t52 = 69736875693672302LLU;

	t52 = (x3333/((x3334%x3335)<<x3336));

	if (t52 != 658812288346769700LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x3441 = UINT32_MAX;
	uint8_t x3442 = 1U;
	uint64_t x3443 = 3852588296995586LLU;
	volatile uint64_t t53 = 159946948326429LLU;

	t53 = (x3441/((x3442%x3443)<<x3444));

	if (t53 != 524287LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3445 = INT8_MIN;
	int8_t x3446 = INT8_MIN;
	static uint64_t x3447 = UINT64_MAX;
	int16_t x3448 = 16;
	static uint64_t t54 = 65405LLU;

	t54 = (x3445/((x3446%x3447)<<x3448));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3461 = -1086473586169LL;
	int32_t x3462 = 3978140;
	int64_t x3463 = -548540159451683269LL;
	int64_t t55 = -10214022896LL;

	t55 = (x3461/((x3462%x3463)<<x3464));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x3497 = -1LL;
	uint16_t x3498 = 6U;
	static int8_t x3499 = INT8_MIN;
	int16_t x3500 = 2;
	int64_t t56 = 30697376LL;

	t56 = (x3497/((x3498%x3499)<<x3500));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3589 = INT32_MAX;
	int16_t x3591 = INT16_MAX;
	uint8_t x3592 = 7U;
	volatile int32_t t57 = -27679;

	t57 = (x3589/((x3590%x3591)<<x3592));

	if (t57 != 6472) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3673 = 404U;
	uint64_t x3674 = 498269038723LLU;
	int64_t x3675 = 61420851048LL;
	uint8_t x3676 = 0U;
	volatile uint64_t t58 = 1LLU;

	t58 = (x3673/((x3674%x3675)<<x3676));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x3785 = INT32_MAX;
	int32_t x3786 = 1616;
	uint8_t x3787 = UINT8_MAX;
	uint8_t x3788 = 0U;
	int32_t t59 = 248;

	t59 = (x3785/((x3786%x3787)<<x3788));

	if (t59 != 24970740) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3833 = INT8_MIN;
	uint32_t x3834 = 171003U;
	static volatile int16_t x3835 = -1;
	uint16_t x3836 = 0U;

	t60 = (x3833/((x3834%x3835)<<x3836));

	if (t60 != 25116U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x3853 = 1604U;
	uint64_t x3854 = 91643059619LLU;
	uint16_t x3855 = 9315U;
	static uint8_t x3856 = 1U;

	t61 = (x3853/((x3854%x3855)<<x3856));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3878 = INT32_MIN;
	uint8_t x3880 = 0U;
	volatile uint32_t t62 = 1928256413U;

	t62 = (x3877/((x3878%x3879)<<x3880));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3890 = 3U;
	volatile uint16_t x3891 = UINT16_MAX;
	int8_t x3892 = 21;
	int32_t t63 = 54798477;

	t63 = (x3889/((x3890%x3891)<<x3892));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3893 = 3U;
	int32_t x3894 = INT32_MAX;
	static int16_t x3895 = INT16_MAX;
	int16_t x3896 = 3;
	int32_t t64 = -6734;

	t64 = (x3893/((x3894%x3895)<<x3896));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3953 = -50;
	int8_t x3954 = INT8_MIN;
	uint64_t x3955 = UINT64_MAX;

	t65 = (x3953/((x3954%x3955)<<x3956));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x3989 = INT32_MIN;
	uint64_t x3990 = 233390046LLU;
	int32_t x3991 = INT32_MAX;
	static uint8_t x3992 = 12U;

	t66 = (x3989/((x3990%x3991)<<x3992));

	if (t66 != 19296451LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x3994 = 56963528952503LLU;
	volatile int32_t x3995 = INT32_MIN;
	volatile int16_t x3996 = 5;
	uint64_t t67 = 3554208562LLU;

	t67 = (x3993/((x3994%x3995)<<x3996));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4009 = 1U;
	uint16_t x4010 = UINT16_MAX;
	int64_t x4011 = INT64_MAX;
	uint8_t x4012 = 0U;
	int64_t t68 = -476979789138756033LL;

	t68 = (x4009/((x4010%x4011)<<x4012));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x4014 = 3;
	int16_t x4015 = 2957;
	static uint8_t x4016 = 1U;
	volatile int64_t t69 = 32257466905LL;

	t69 = (x4013/((x4014%x4015)<<x4016));

	if (t69 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x4265 = 460215LL;
	int16_t x4266 = INT16_MAX;
	int64_t x4267 = -4419635414260456700LL;
	int8_t x4268 = 13;

	t70 = (x4265/((x4266%x4267)<<x4268));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4333 = INT64_MIN;
	int8_t x4335 = -61;
	int8_t x4336 = 9;
	static uint64_t t71 = 488180892299LLU;

	t71 = (x4333/((x4334%x4335)<<x4336));

	if (t71 != 300239975158033LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4622 = UINT64_MAX;
	int8_t x4623 = -3;
	uint64_t t72 = 762707650431LLU;

	t72 = (x4621/((x4622%x4623)<<x4624));

	if (t72 != 63LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4705 = 0;
	int32_t x4706 = 130499683;
	int16_t x4707 = INT16_MIN;

	t73 = (x4705/((x4706%x4707)<<x4708));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4717 = INT8_MAX;
	volatile int32_t x4718 = 184423;
	uint16_t x4720 = 0U;
	static volatile int32_t t74 = 2639;

	t74 = (x4717/((x4718%x4719)<<x4720));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4725 = -1;
	static uint16_t x4726 = 1U;
	int16_t x4728 = 11;
	uint32_t t75 = 489309U;

	t75 = (x4725/((x4726%x4727)<<x4728));

	if (t75 != 2097151U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x4821 = 1LLU;
	int8_t x4822 = INT8_MIN;
	uint64_t x4823 = 53557732LLU;
	int8_t x4824 = 1;
	uint64_t t76 = 6066678LLU;

	t76 = (x4821/((x4822%x4823)<<x4824));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4857 = INT64_MIN;
	uint16_t x4858 = UINT16_MAX;
	volatile int16_t x4859 = -4074;
	static volatile int8_t x4860 = 3;
	int64_t t77 = 301LL;

	t77 = (x4857/((x4858%x4859)<<x4860));

	if (t77 != -3284676651301558LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4861 = -1LL;
	int8_t x4862 = 2;
	static int16_t x4863 = 13420;
	uint8_t x4864 = 0U;
	int64_t t78 = -7077053114935208LL;

	t78 = (x4861/((x4862%x4863)<<x4864));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4865 = -876;
	int32_t x4866 = -1;
	uint64_t x4867 = 36632085755597108LLU;
	int8_t x4868 = 44;
	volatile uint64_t t79 = 9765655919771LLU;

	t79 = (x4865/((x4866%x4867)<<x4868));

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4897 = INT8_MIN;
	int32_t x4899 = -28014240;
	volatile int8_t x4900 = 13;
	int32_t t80 = -2094;

	t80 = (x4897/((x4898%x4899)<<x4900));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4965 = -1050346224236008214LL;
	int8_t x4967 = INT8_MIN;
	uint16_t x4968 = 21U;
	int64_t t81 = 562LL;

	t81 = (x4965/((x4966%x4967)<<x4968));

	if (t81 != -55649345410LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x5001 = 324550160LLU;
	int16_t x5002 = 448;
	static int64_t x5003 = INT64_MIN;
	int16_t x5004 = 2;
	static volatile uint64_t t82 = 1756929423975794337LLU;

	t82 = (x5001/((x5002%x5003)<<x5004));

	if (t82 != 181110LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5169 = 4376239U;
	int16_t x5171 = INT16_MIN;
	uint8_t x5172 = 2U;
	static uint32_t t83 = 12943U;

	t83 = (x5169/((x5170%x5171)<<x5172));

	if (t83 != 4290U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5273 = INT8_MIN;
	int64_t x5275 = INT64_MIN;
	volatile int8_t x5276 = 1;
	int64_t t84 = -20517LL;

	t84 = (x5273/((x5274%x5275)<<x5276));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x5337 = INT8_MIN;
	int64_t x5338 = INT64_MAX;
	uint64_t x5339 = 180701394171LLU;
	volatile uint64_t x5340 = 14LLU;
	static volatile uint64_t t85 = 3746LLU;

	t85 = (x5337/((x5338%x5339)<<x5340));

	if (t85 != 12319LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x5437 = 7862LLU;
	int32_t x5439 = 901;
	uint16_t x5440 = 1U;
	volatile uint64_t t86 = 6407220607690278425LLU;

	t86 = (x5437/((x5438%x5439)<<x5440));

	if (t86 != 786LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x5509 = 722065236U;
	static uint64_t x5510 = 1762473LLU;
	static volatile int64_t x5511 = INT64_MAX;
	uint64_t t87 = 14222LLU;

	t87 = (x5509/((x5510%x5511)<<x5512));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5513 = 0;
	volatile uint64_t x5514 = 1411343236073080LLU;
	int32_t x5515 = INT32_MAX;
	uint64_t t88 = 181931612518280LLU;

	t88 = (x5513/((x5514%x5515)<<x5516));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5553 = INT16_MIN;
	volatile uint32_t x5555 = UINT32_MAX;
	uint8_t x5556 = 2U;
	volatile uint32_t t89 = 25529496U;

	t89 = (x5553/((x5554%x5555)<<x5556));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x5589 = INT16_MIN;
	uint32_t x5590 = 383423U;
	uint16_t x5591 = 2U;
	static uint16_t x5592 = 22U;

	t90 = (x5589/((x5590%x5591)<<x5592));

	if (t90 != 1023U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x5797 = 3U;
	uint16_t x5798 = 7U;
	uint8_t x5799 = 123U;
	volatile int8_t x5800 = 8;
	static int32_t t91 = 1;

	t91 = (x5797/((x5798%x5799)<<x5800));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x5805 = 77U;
	int64_t x5806 = -1LL;
	static uint64_t x5807 = 2100887LLU;
	uint8_t x5808 = 8U;
	static volatile uint64_t t92 = 486667937619333LLU;

	t92 = (x5805/((x5806%x5807)<<x5808));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5821 = 1U;
	uint16_t x5824 = 2U;

	t93 = (x5821/((x5822%x5823)<<x5824));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5985 = INT32_MIN;
	volatile int32_t x5986 = INT32_MAX;
	uint32_t x5987 = 1642U;

	t94 = (x5985/((x5986%x5987)<<x5988));

	if (t94 != 130308U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x6013 = -184LL;
	int16_t x6014 = INT16_MAX;
	volatile int8_t x6015 = INT8_MAX;
	static int8_t x6016 = 19;

	t95 = (x6013/((x6014%x6015)<<x6016));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x6029 = INT16_MIN;
	static uint32_t x6030 = UINT32_MAX;
	int8_t x6031 = INT8_MIN;
	uint32_t x6032 = 2U;

	t96 = (x6029/((x6030%x6031)<<x6032));

	if (t96 != 8454595U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6118 = 73U;
	static volatile int8_t x6119 = INT8_MIN;
	volatile uint8_t x6120 = 3U;
	int64_t t97 = -674554892783141LL;

	t97 = (x6117/((x6118%x6119)<<x6120));

	if (t97 != -15793445268586944LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6137 = UINT64_MAX;
	uint64_t x6138 = 256235308586LLU;
	int64_t x6139 = -1LL;
	uint32_t x6140 = 1U;
	uint64_t t98 = 22048430358081755LLU;

	t98 = (x6137/((x6138%x6139)<<x6140));

	if (t98 != 35995710LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6165 = INT16_MAX;
	uint32_t x6167 = 20132U;
	uint32_t t99 = 1U;

	t99 = (x6165/((x6166%x6167)<<x6168));

	if (t99 != 2U) { NG(); } else { ; }
	
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

