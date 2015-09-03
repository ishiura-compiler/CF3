#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x65 = -1;
static volatile uint64_t t2 = 0LLU;
int16_t x302 = 25;
volatile uint8_t x303 = 0U;
int32_t t4 = 59967326;
static int64_t x414 = INT64_MAX;
int16_t x416 = -1;
volatile int64_t t5 = -66581629247LL;
int64_t x588 = -380980006563LL;
volatile int32_t x630 = INT32_MAX;
volatile int32_t t8 = -841;
int32_t x659 = 0;
volatile uint32_t t9 = 6U;
int64_t t10 = INT64_MIN;
volatile int8_t x941 = 37;
uint8_t x943 = 0U;
int16_t x955 = 2;
static volatile int8_t x975 = 14;
volatile uint16_t x1163 = 11U;
uint16_t x1244 = UINT16_MAX;
static int32_t t16 = 15265;
int32_t t17 = -310117;
volatile int16_t x1298 = INT16_MAX;
uint16_t x1299 = 7U;
int64_t t18 = -6271661156238LL;
static int32_t t19 = 311038840;
static uint8_t x1473 = UINT8_MAX;
static int64_t t20 = -3879LL;
volatile uint32_t x1601 = 429502U;
uint64_t x1702 = 1920230828049817LLU;
static int32_t x1704 = 96555;
int8_t x1769 = INT8_MIN;
volatile int32_t x1770 = INT32_MAX;
uint16_t x1909 = UINT16_MAX;
static uint16_t x1910 = UINT16_MAX;
static uint8_t x1911 = 14U;
int16_t x1912 = -26;
uint8_t x1956 = 15U;
volatile int32_t t28 = -16631610;
int64_t x2104 = -1LL;
static int64_t x2384 = -532598817LL;
int64_t t30 = -27970605965LL;
int64_t t32 = -1997LL;
volatile uint64_t x2478 = UINT64_MAX;
uint64_t t33 = 2736209832401693712LLU;
static volatile uint64_t t37 = 3914960488076531LLU;
static int32_t x2633 = -1;
uint8_t x2788 = 1U;
uint8_t x2832 = UINT8_MAX;
static uint64_t x3286 = UINT64_MAX;
int16_t x3349 = 1;
int32_t x3397 = -1;
int8_t x3517 = 1;
uint32_t x3521 = 4U;
uint16_t x3523 = 5U;
int64_t x3775 = 1LL;
uint16_t x3776 = 43U;
int64_t x3869 = INT64_MAX;
volatile int64_t t51 = 1037496083598340LL;
volatile uint32_t t52 = 3194550U;
volatile int8_t x3987 = 1;
int16_t x3988 = -17;
uint8_t x4079 = 1U;
uint8_t x4088 = 116U;
uint32_t x4266 = UINT32_MAX;
uint8_t x4295 = 3U;
volatile int16_t x4296 = -1;
uint64_t x4382 = 4137622292626LLU;
uint64_t x4762 = 1182316656LLU;
static int16_t x4891 = 2;
int32_t x4949 = INT32_MIN;
int16_t x4952 = INT16_MAX;
int8_t x5052 = -1;
volatile uint64_t t64 = 14363456LLU;
int64_t x5118 = 158LL;
volatile uint64_t t65 = 341920344955LLU;
int16_t x5193 = INT16_MAX;
uint16_t x5377 = UINT16_MAX;
int8_t x5595 = 2;
int64_t x5677 = INT64_MIN;
int16_t x5678 = INT16_MAX;
static int8_t x5684 = INT8_MIN;
static uint32_t t72 = 46U;
uint64_t x5737 = 532LLU;
uint64_t t74 = 191815850100810LLU;
uint32_t x5869 = UINT32_MAX;
uint8_t x6042 = UINT8_MAX;
volatile int8_t x6043 = 1;
uint8_t x6055 = 1U;
static volatile int16_t x6056 = -3364;
int32_t x6077 = INT32_MIN;
volatile int32_t t79 = INT32_MIN;


void f0(void) {
	uint32_t x66 = UINT32_MAX;
	static uint8_t x67 = 0U;
	int32_t x68 = INT32_MIN;
	uint32_t t0 = 328282576U;

	t0 = (x65/((x66>>x67)&x68));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x105 = 44;
	uint32_t x106 = UINT32_MAX;
	int8_t x107 = 0;
	int8_t x108 = -1;
	volatile uint32_t t1 = 1869293U;

	t1 = (x105/((x106>>x107)&x108));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x169 = -1;
	uint64_t x170 = UINT64_MAX;
	uint8_t x171 = 0U;
	int8_t x172 = INT8_MIN;

	t2 = (x169/((x170>>x171)&x172));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x217 = 2LLU;
	uint8_t x218 = UINT8_MAX;
	volatile int8_t x219 = 1;
	int16_t x220 = -1970;
	uint64_t t3 = 10LLU;

	t3 = (x217/((x218>>x219)&x220));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x301 = 20U;
	int16_t x304 = 3141;

	t4 = (x301/((x302>>x303)&x304));

	if (t4 != 20) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x413 = 158LL;
	int32_t x415 = 19;

	t5 = (x413/((x414>>x415)&x416));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x585 = -1;
	uint64_t x586 = UINT64_MAX;
	int8_t x587 = 0;
	uint64_t t6 = 5401589531LLU;

	t6 = (x585/((x586>>x587)&x588));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x629 = INT16_MAX;
	static uint8_t x631 = 0U;
	uint32_t x632 = UINT32_MAX;
	uint32_t t7 = 126U;

	t7 = (x629/((x630>>x631)&x632));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x653 = 1;
	static uint8_t x654 = UINT8_MAX;
	uint8_t x655 = 2U;
	int8_t x656 = INT8_MAX;

	t8 = (x653/((x654>>x655)&x656));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x657 = 1U;
	uint32_t x658 = 612743U;
	int16_t x660 = INT16_MIN;

	t9 = (x657/((x658>>x659)&x660));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x689 = INT64_MIN;
	uint16_t x690 = 15089U;
	uint16_t x691 = 13U;
	volatile int32_t x692 = -1;

	t10 = (x689/((x690>>x691)&x692));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x781 = INT8_MIN;
	static volatile int8_t x782 = 22;
	static int16_t x783 = 1;
	uint16_t x784 = 40U;
	volatile int32_t t11 = 108;

	t11 = (x781/((x782>>x783)&x784));

	if (t11 != -16) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x942 = 4360475826660354787LLU;
	static volatile int16_t x944 = INT16_MAX;
	volatile uint64_t t12 = 1014322802329LLU;

	t12 = (x941/((x942>>x943)&x944));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x953 = 417209;
	int32_t x954 = INT32_MAX;
	int8_t x956 = INT8_MIN;
	volatile int32_t t13 = 122073263;

	t13 = (x953/((x954>>x955)&x956));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x973 = UINT64_MAX;
	uint32_t x974 = 55934123U;
	uint8_t x976 = 14U;
	volatile uint64_t t14 = 85757LLU;

	t14 = (x973/((x974>>x975)&x976));

	if (t14 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1161 = INT8_MAX;
	int64_t x1162 = 71897040783989259LL;
	static uint32_t x1164 = 2U;
	int64_t t15 = -302393LL;

	t15 = (x1161/((x1162>>x1163)&x1164));

	if (t15 != 63LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1241 = 74U;
	volatile uint8_t x1242 = 2U;
	int8_t x1243 = 0;

	t16 = (x1241/((x1242>>x1243)&x1244));

	if (t16 != 37) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1285 = INT16_MAX;
	uint16_t x1286 = UINT16_MAX;
	static uint32_t x1287 = 2U;
	volatile uint16_t x1288 = 221U;

	t17 = (x1285/((x1286>>x1287)&x1288));

	if (t17 != 148) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1297 = INT64_MIN;
	volatile int8_t x1300 = INT8_MAX;

	t18 = (x1297/((x1298>>x1299)&x1300));

	if (t18 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x1309 = 1934;
	int32_t x1310 = INT32_MAX;
	volatile uint8_t x1311 = 2U;
	static volatile int8_t x1312 = -1;

	t19 = (x1309/((x1310>>x1311)&x1312));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1474 = INT16_MAX;
	uint8_t x1475 = 8U;
	int64_t x1476 = 908441525267922182LL;

	t20 = (x1473/((x1474>>x1475)&x1476));

	if (t20 != 42LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1485 = 2;
	static uint32_t x1486 = UINT32_MAX;
	int8_t x1487 = 0;
	int16_t x1488 = -811;
	uint32_t t21 = 1U;

	t21 = (x1485/((x1486>>x1487)&x1488));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1501 = INT32_MIN;
	static uint16_t x1502 = UINT16_MAX;
	uint64_t x1503 = 2LLU;
	int64_t x1504 = -250LL;
	volatile int64_t t22 = -2LL;

	t22 = (x1501/((x1502>>x1503)&x1504));

	if (t22 != -133102LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1602 = 6580;
	static int8_t x1603 = 4;
	int64_t x1604 = 69414LL;
	static int64_t t23 = 28LL;

	t23 = (x1601/((x1602>>x1603)&x1604));

	if (t23 != 1664LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1701 = 11688U;
	uint8_t x1703 = 14U;
	volatile uint64_t t24 = 156349941580LLU;

	t24 = (x1701/((x1702>>x1703)&x1704));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1771 = 0;
	int16_t x1772 = INT16_MIN;
	int32_t t25 = -1057;

	t25 = (x1769/((x1770>>x1771)&x1772));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t t26 = 17;

	t26 = (x1909/((x1910>>x1911)&x1912));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1921 = 219143U;
	volatile int32_t x1922 = INT32_MAX;
	static uint8_t x1923 = 3U;
	static volatile uint8_t x1924 = 41U;
	volatile uint32_t t27 = 2608389U;

	t27 = (x1921/((x1922>>x1923)&x1924));

	if (t27 != 5344U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1953 = INT32_MIN;
	int32_t x1954 = 883;
	uint64_t x1955 = 1LLU;

	t28 = (x1953/((x1954>>x1955)&x1956));

	if (t28 != -238609294) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2101 = INT64_MIN;
	int16_t x2102 = INT16_MAX;
	int8_t x2103 = 1;
	int64_t t29 = 3990898LL;

	t29 = (x2101/((x2102>>x2103)&x2104));

	if (t29 != -562984315256960LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2381 = -1;
	static uint8_t x2382 = UINT8_MAX;
	int8_t x2383 = 0;

	t30 = (x2381/((x2382>>x2383)&x2384));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2393 = -1;
	volatile uint32_t x2394 = UINT32_MAX;
	uint16_t x2395 = 29U;
	uint16_t x2396 = UINT16_MAX;
	uint32_t t31 = 1878620591U;

	t31 = (x2393/((x2394>>x2395)&x2396));

	if (t31 != 613566756U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2473 = INT64_MAX;
	int8_t x2474 = INT8_MAX;
	volatile uint8_t x2475 = 1U;
	uint32_t x2476 = UINT32_MAX;

	t32 = (x2473/((x2474>>x2475)&x2476));

	if (t32 != 146402730743726600LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2477 = UINT8_MAX;
	uint16_t x2479 = 1U;
	static uint8_t x2480 = UINT8_MAX;

	t33 = (x2477/((x2478>>x2479)&x2480));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2485 = 1U;
	uint8_t x2486 = 23U;
	int8_t x2487 = 1;
	static int16_t x2488 = 10734;
	int32_t t34 = 1;

	t34 = (x2485/((x2486>>x2487)&x2488));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2505 = INT8_MIN;
	int64_t x2506 = 75LL;
	static uint16_t x2507 = 5U;
	int32_t x2508 = 13439;
	int64_t t35 = 6963167988012353LL;

	t35 = (x2505/((x2506>>x2507)&x2508));

	if (t35 != -64LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x2517 = INT8_MAX;
	static uint32_t x2518 = UINT32_MAX;
	int16_t x2519 = 0;
	volatile int64_t x2520 = -1LL;
	int64_t t36 = -2261917546449768LL;

	t36 = (x2517/((x2518>>x2519)&x2520));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2609 = INT16_MAX;
	volatile uint64_t x2610 = UINT64_MAX;
	int32_t x2611 = 9;
	int64_t x2612 = -1LL;

	t37 = (x2609/((x2610>>x2611)&x2612));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2634 = INT64_MAX;
	uint8_t x2635 = 9U;
	static volatile uint8_t x2636 = UINT8_MAX;
	volatile int64_t t38 = -1083086246782668645LL;

	t38 = (x2633/((x2634>>x2635)&x2636));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2785 = UINT64_MAX;
	uint16_t x2786 = UINT16_MAX;
	uint8_t x2787 = 0U;
	uint64_t t39 = UINT64_MAX;

	t39 = (x2785/((x2786>>x2787)&x2788));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2829 = INT8_MIN;
	uint16_t x2830 = 88U;
	int8_t x2831 = 1;
	int32_t t40 = 165332;

	t40 = (x2829/((x2830>>x2831)&x2832));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2985 = INT64_MAX;
	volatile int64_t x2986 = 1LL;
	uint8_t x2987 = 0U;
	volatile uint16_t x2988 = 8757U;
	int64_t t41 = INT64_MAX;

	t41 = (x2985/((x2986>>x2987)&x2988));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x3193 = 10;
	volatile int64_t x3194 = INT64_MAX;
	int16_t x3195 = 3;
	int32_t x3196 = INT32_MIN;
	volatile int64_t t42 = -14419LL;

	t42 = (x3193/((x3194>>x3195)&x3196));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3285 = INT8_MAX;
	uint64_t x3287 = 2LLU;
	static volatile int64_t x3288 = -1527LL;
	uint64_t t43 = 77184LLU;

	t43 = (x3285/((x3286>>x3287)&x3288));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3350 = INT8_MAX;
	int16_t x3351 = 0;
	uint16_t x3352 = 5U;
	int32_t t44 = 29781;

	t44 = (x3349/((x3350>>x3351)&x3352));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3381 = UINT64_MAX;
	uint64_t x3382 = 8863847383730244970LLU;
	static uint8_t x3383 = 31U;
	uint16_t x3384 = UINT16_MAX;
	volatile uint64_t t45 = 213611628LLU;

	t45 = (x3381/((x3382>>x3383)&x3384));

	if (t45 != 664340550787249LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x3398 = UINT16_MAX;
	volatile int8_t x3399 = 0;
	int16_t x3400 = INT16_MIN;
	volatile int32_t t46 = -278;

	t46 = (x3397/((x3398>>x3399)&x3400));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x3518 = UINT16_MAX;
	uint16_t x3519 = 1U;
	static uint32_t x3520 = UINT32_MAX;
	volatile uint32_t t47 = 1169890U;

	t47 = (x3517/((x3518>>x3519)&x3520));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3522 = UINT8_MAX;
	int8_t x3524 = -1;
	uint32_t t48 = 187425U;

	t48 = (x3521/((x3522>>x3523)&x3524));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3773 = UINT16_MAX;
	uint64_t x3774 = 74472339718809724LLU;
	volatile uint64_t t49 = 284562336635490LLU;

	t49 = (x3773/((x3774>>x3775)&x3776));

	if (t49 != 1560LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3813 = UINT8_MAX;
	uint64_t x3814 = UINT64_MAX;
	uint16_t x3815 = 1U;
	int16_t x3816 = INT16_MIN;
	static volatile uint64_t t50 = 5711015243LLU;

	t50 = (x3813/((x3814>>x3815)&x3816));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3870 = 6037;
	static uint8_t x3871 = 1U;
	int16_t x3872 = -1609;

	t51 = (x3869/((x3870>>x3871)&x3872));

	if (t51 != 3789388675782570LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3961 = -1;
	uint32_t x3962 = 71129094U;
	volatile uint32_t x3963 = 3U;
	int8_t x3964 = -1;

	t52 = (x3961/((x3962>>x3963)&x3964));

	if (t52 != 483U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3985 = INT16_MIN;
	uint64_t x3986 = UINT64_MAX;
	static volatile uint64_t t53 = 1246016LLU;

	t53 = (x3985/((x3986>>x3987)&x3988));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x4077 = 16475272701356536LL;
	int32_t x4078 = 4108170;
	uint64_t x4080 = UINT64_MAX;
	uint64_t t54 = 481832691871472LLU;

	t54 = (x4077/((x4078>>x4079)&x4080));

	if (t54 != 8020735607LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x4085 = 47147781076166285LLU;
	int32_t x4086 = 434;
	int64_t x4087 = 2LL;
	volatile uint64_t t55 = 25LLU;

	t55 = (x4085/((x4086>>x4087)&x4088));

	if (t55 != 471477810761662LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x4265 = 1046245LLU;
	int8_t x4267 = 5;
	int16_t x4268 = -1;
	static uint64_t t56 = 2361983756774428723LLU;

	t56 = (x4265/((x4266>>x4267)&x4268));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4281 = INT8_MAX;
	uint32_t x4282 = 13969267U;
	int8_t x4283 = 8;
	int32_t x4284 = 75621;
	uint32_t t57 = 0U;

	t57 = (x4281/((x4282>>x4283)&x4284));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4293 = INT32_MIN;
	volatile uint16_t x4294 = 153U;
	int32_t t58 = 7;

	t58 = (x4293/((x4294>>x4295)&x4296));

	if (t58 != -113025455) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x4381 = -1;
	int8_t x4383 = 32;
	uint32_t x4384 = UINT32_MAX;
	uint64_t t59 = 4328354667LLU;

	t59 = (x4381/((x4382>>x4383)&x4384));

	if (t59 != 19155497480487592LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4633 = 2061939005U;
	volatile int32_t x4634 = INT32_MAX;
	volatile int16_t x4635 = 15;
	static int8_t x4636 = -1;
	static uint32_t t60 = 7793191U;

	t60 = (x4633/((x4634>>x4635)&x4636));

	if (t60 != 31463U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4761 = UINT8_MAX;
	int8_t x4763 = 2;
	int64_t x4764 = -24842LL;
	uint64_t t61 = 7451LLU;

	t61 = (x4761/((x4762>>x4763)&x4764));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4889 = UINT64_MAX;
	uint16_t x4890 = UINT16_MAX;
	volatile uint8_t x4892 = 4U;
	uint64_t t62 = 14LLU;

	t62 = (x4889/((x4890>>x4891)&x4892));

	if (t62 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4950 = 1795887621476LL;
	uint8_t x4951 = 7U;
	static volatile int64_t t63 = -1094159146839788LL;

	t63 = (x4949/((x4950>>x4951)&x4952));

	if (t63 != -67222LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x5049 = 12780165624856540LLU;
	uint32_t x5050 = 245U;
	uint8_t x5051 = 0U;

	t64 = (x5049/((x5050>>x5051)&x5052));

	if (t64 != 52163941325945LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x5117 = -1;
	int8_t x5119 = 0;
	uint64_t x5120 = 173719LLU;

	t65 = (x5117/((x5118>>x5119)&x5120));

	if (t65 != 122978293824730344LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x5194 = INT64_MAX;
	static int32_t x5195 = 10;
	volatile uint8_t x5196 = 6U;
	int64_t t66 = -859833989831275LL;

	t66 = (x5193/((x5194>>x5195)&x5196));

	if (t66 != 5461LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x5209 = INT8_MIN;
	static int16_t x5210 = 4908;
	int16_t x5211 = 1;
	int8_t x5212 = INT8_MIN;
	volatile int32_t t67 = -54;

	t67 = (x5209/((x5210>>x5211)&x5212));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x5378 = UINT32_MAX;
	volatile uint16_t x5379 = 1U;
	static volatile int16_t x5380 = INT16_MIN;
	static volatile uint32_t t68 = 154U;

	t68 = (x5377/((x5378>>x5379)&x5380));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x5425 = 6U;
	uint64_t x5426 = 13792229786174LLU;
	int16_t x5427 = 43;
	int8_t x5428 = INT8_MAX;
	static uint64_t t69 = 1074323319626917LLU;

	t69 = (x5425/((x5426>>x5427)&x5428));

	if (t69 != 6LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x5593 = -36;
	int16_t x5594 = 733;
	uint64_t x5596 = 117784372051171LLU;
	uint64_t t70 = 11LLU;

	t70 = (x5593/((x5594>>x5595)&x5596));

	if (t70 != 113170209041162893LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x5679 = 5U;
	static int32_t x5680 = -1;
	int64_t t71 = 54251244LL;

	t71 = (x5677/((x5678>>x5679)&x5680));

	if (t71 != -9016003946094600LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x5681 = INT32_MAX;
	uint32_t x5682 = 364689U;
	volatile int8_t x5683 = 0;

	t72 = (x5681/((x5682>>x5683)&x5684));

	if (t72 != 5888U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x5697 = 7422;
	uint32_t x5698 = 1006907U;
	static volatile uint16_t x5699 = 11U;
	int64_t x5700 = -2757164098672LL;
	int64_t t73 = -31399682341870LL;

	t73 = (x5697/((x5698>>x5699)&x5700));

	if (t73 != 19LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x5738 = 66053796867541LLU;
	int32_t x5739 = 11;
	int32_t x5740 = -14690;

	t74 = (x5737/((x5738>>x5739)&x5740));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x5870 = INT32_MAX;
	static int16_t x5871 = 0;
	int32_t x5872 = -1;
	volatile uint32_t t75 = 1690268218U;

	t75 = (x5869/((x5870>>x5871)&x5872));

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x5977 = -1LL;
	volatile uint32_t x5978 = 130866U;
	static int16_t x5979 = 6;
	uint64_t x5980 = 2041949LLU;
	uint64_t t76 = 111LLU;

	t76 = (x5977/((x5978>>x5979)&x5980));

	if (t76 != 200508087757712517LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x6041 = 398;
	uint16_t x6044 = 1U;
	volatile int32_t t77 = 6;

	t77 = (x6041/((x6042>>x6043)&x6044));

	if (t77 != 398) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x6053 = INT16_MIN;
	uint16_t x6054 = 17U;
	static volatile int32_t t78 = 28;

	t78 = (x6053/((x6054>>x6055)&x6056));

	if (t78 != -4096) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x6078 = 1;
	uint8_t x6079 = 0U;
	volatile int8_t x6080 = -1;

	t79 = (x6077/((x6078>>x6079)&x6080));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
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


    return 0;
}

