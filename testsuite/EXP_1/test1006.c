#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 3;
uint8_t x4 = UINT8_MAX;
uint16_t x258 = 8U;
static volatile int64_t x507 = INT64_MIN;
volatile int64_t t7 = -1LL;
volatile uint8_t x598 = 0U;
volatile uint64_t t8 = 149LLU;
uint8_t x674 = 11U;
static int16_t x676 = -1;
volatile uint8_t x712 = 25U;
int16_t x792 = 1;
static volatile int32_t x1121 = INT32_MAX;
uint64_t x1124 = 4LLU;
uint8_t x1142 = 15U;
volatile uint64_t t15 = 123937292075LLU;
uint64_t x1261 = 6214476972313361409LLU;
int64_t x1263 = -1LL;
volatile int32_t x1444 = INT32_MIN;
static int64_t t17 = 12277179LL;
uint16_t x1548 = UINT16_MAX;
static int32_t x1582 = 13;
volatile uint8_t x1645 = 28U;
int64_t t21 = 72264770LL;
static int64_t x1732 = -685887265896LL;
volatile int32_t t23 = -279853;
int64_t x1797 = INT64_MAX;
uint16_t x1798 = 0U;
static int16_t x1799 = -1;
int32_t x1824 = 1;
static uint8_t x1966 = 0U;
int64_t x1967 = -1LL;
static int64_t t27 = -4249469LL;
uint8_t x2009 = UINT8_MAX;
int16_t x2012 = INT16_MAX;
volatile int32_t x2096 = 4660;
uint8_t x2330 = 27U;
volatile uint64_t t31 = 322584811LLU;
int32_t x2449 = INT32_MAX;
uint64_t x2533 = UINT64_MAX;
volatile uint64_t x2535 = UINT64_MAX;
uint8_t x2682 = 0U;
volatile int8_t x2707 = INT8_MIN;
int8_t x2726 = 1;
uint16_t x2921 = 374U;
int32_t x3047 = -633;
int64_t t39 = 20235739LL;
uint64_t x3149 = UINT64_MAX;
int32_t x3152 = INT32_MIN;
uint8_t x3156 = 3U;
static int16_t x3204 = 243;
static volatile int32_t t43 = -5;
int8_t x3219 = -1;
volatile int32_t t44 = -28688561;
static int8_t x3226 = 0;
int32_t x3287 = -77096226;
uint8_t x3298 = 4U;
volatile int8_t x3501 = INT8_MAX;
volatile int64_t x3516 = INT64_MIN;
static int16_t x3525 = INT16_MAX;
volatile int32_t x3528 = INT32_MIN;
int64_t x3617 = 4860LL;
int32_t x3618 = 0;
uint16_t x3750 = 0U;
int16_t x3752 = INT16_MIN;
static uint32_t x3761 = UINT32_MAX;
uint32_t t61 = 753U;
int8_t x3853 = 1;
int16_t x3950 = 0;
int64_t t64 = 31LL;
uint64_t x4276 = 7064640432LLU;
int8_t x4302 = 0;
static volatile int8_t x4304 = INT8_MIN;
uint8_t x4394 = 2U;
volatile uint64_t x4449 = 447265199LLU;
uint64_t x4487 = UINT64_MAX;
uint8_t x4609 = UINT8_MAX;
static volatile uint8_t x4610 = 3U;
uint16_t x4642 = 15U;
uint16_t x4643 = 766U;
volatile uint32_t t78 = 249953U;
int8_t x4926 = 8;
static uint32_t x4986 = 7U;
volatile int16_t x5292 = 2;
uint8_t x5334 = 1U;
static int32_t x5379 = INT32_MAX;
static int8_t x5380 = -1;
uint64_t t88 = 1438286LLU;
static int32_t x5552 = -84185983;
uint64_t x5619 = 117508643254529LLU;
static uint8_t x5681 = 3U;
int32_t x5808 = INT32_MAX;
uint64_t t98 = 34067LLU;
static uint8_t x5862 = 0U;
int16_t x5863 = INT16_MIN;
int32_t t99 = 6990403;


void f0(void) {
	uint16_t x2 = 6U;
	static int8_t x3 = INT8_MIN;
	int32_t t0 = -47359005;

	t0 = (((x1<<x2)^x3)%x4);

	if (t0 != -192) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 3;
	volatile uint16_t x14 = 0U;
	static int16_t x15 = 124;
	int64_t x16 = INT64_MAX;
	int64_t t1 = -894052173592407LL;

	t1 = (((x13<<x14)^x15)%x16);

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x85 = 10LL;
	volatile int8_t x86 = 1;
	uint8_t x87 = UINT8_MAX;
	uint64_t x88 = 1339952710040LLU;
	uint64_t t2 = 1129057639544847LLU;

	t2 = (((x85<<x86)^x87)%x88);

	if (t2 != 235LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x161 = 1U;
	uint32_t x162 = 1U;
	uint64_t x163 = 9LLU;
	static int8_t x164 = INT8_MAX;
	uint64_t t3 = 106983861890404391LLU;

	t3 = (((x161<<x162)^x163)%x164);

	if (t3 != 11LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = 3;
	static int16_t x227 = INT16_MIN;
	volatile int16_t x228 = INT16_MIN;
	uint64_t t4 = 0LLU;

	t4 = (((x225<<x226)^x227)%x228);

	if (t4 != 32760LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x257 = 4U;
	static uint16_t x259 = UINT16_MAX;
	int8_t x260 = INT8_MAX;
	volatile int32_t t5 = -8;

	t5 = (((x257<<x258)^x259)%x260);

	if (t5 != 122) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x417 = 1;
	int8_t x418 = 1;
	uint64_t x419 = 30LLU;
	int8_t x420 = INT8_MIN;
	uint64_t t6 = 7569601075978LLU;

	t6 = (((x417<<x418)^x419)%x420);

	if (t6 != 28LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x505 = 2993U;
	uint8_t x506 = 7U;
	int8_t x508 = INT8_MAX;

	t7 = (((x505<<x506)^x507)%x508);

	if (t7 != -56LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x597 = 81486316387404LLU;
	int32_t x599 = -28955;
	int64_t x600 = 188136518602406LL;

	t8 = (((x597<<x598)^x599)%x600);

	if (t8 != 65074945853955LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x673 = 1609751480575638LLU;
	uint8_t x675 = 42U;
	volatile uint64_t t9 = 399LLU;

	t9 = (((x673<<x674)^x675)%x676);

	if (t9 != 3296771032218906666LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x709 = 122;
	int16_t x710 = 23;
	int16_t x711 = INT16_MIN;
	volatile int32_t t10 = 352046;

	t10 = (((x709<<x710)^x711)%x712);

	if (t10 != -19) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x789 = INT8_MAX;
	uint32_t x790 = 14U;
	int32_t x791 = 13;
	volatile int32_t t11 = 214241;

	t11 = (((x789<<x790)^x791)%x792);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x1122 = 0U;
	static int64_t x1123 = -1LL;
	uint64_t t12 = 73468650257LLU;

	t12 = (((x1121<<x1122)^x1123)%x1124);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1141 = UINT16_MAX;
	int64_t x1143 = INT64_MAX;
	static uint64_t x1144 = 163LLU;
	volatile uint64_t t13 = 13803831334404451LLU;

	t13 = (((x1141<<x1142)^x1143)%x1144);

	if (t13 != 64LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1205 = INT8_MAX;
	uint8_t x1206 = 2U;
	uint32_t x1207 = UINT32_MAX;
	int32_t x1208 = INT32_MAX;
	volatile uint32_t t14 = 14837159U;

	t14 = (((x1205<<x1206)^x1207)%x1208);

	if (t14 != 2147483140U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1225 = UINT64_MAX;
	volatile uint16_t x1226 = 42U;
	static volatile int8_t x1227 = 51;
	uint64_t x1228 = UINT64_MAX;

	t15 = (((x1225<<x1226)^x1227)%x1228);

	if (t15 != 18446739675663040563LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1262 = 0U;
	static int64_t x1264 = INT64_MIN;
	uint64_t t16 = 160355LLU;

	t16 = (((x1261<<x1262)^x1263)%x1264);

	if (t16 != 3008895064541414398LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1441 = 2200338183860165LL;
	volatile uint8_t x1442 = 5U;
	int16_t x1443 = INT16_MIN;

	t17 = (((x1441<<x1442)^x1443)%x1444);

	if (t17 != -2058717024LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1509 = INT32_MAX;
	int8_t x1510 = 0;
	static volatile int32_t x1511 = INT32_MIN;
	int32_t x1512 = INT32_MIN;
	int32_t t18 = -189812;

	t18 = (((x1509<<x1510)^x1511)%x1512);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x1545 = 12324980638277399LL;
	static volatile uint16_t x1546 = 2U;
	volatile int16_t x1547 = -4;
	static volatile int64_t t19 = -8797LL;

	t19 = (((x1545<<x1546)^x1547)%x1548);

	if (t19 != -22095LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1581 = 517227434LLU;
	static int16_t x1583 = -2298;
	static int16_t x1584 = -13;
	volatile uint64_t t20 = 774010311260LLU;

	t20 = (((x1581<<x1582)^x1583)%x1584);

	if (t20 != 18446739836582409990LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1646 = 2U;
	uint32_t x1647 = 10555U;
	int64_t x1648 = INT64_MIN;

	t21 = (((x1645<<x1646)^x1647)%x1648);

	if (t21 != 10571LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x1729 = UINT8_MAX;
	int64_t x1730 = 7LL;
	int32_t x1731 = INT32_MAX;
	int64_t t22 = 35872030720298197LL;

	t22 = (((x1729<<x1730)^x1731)%x1732);

	if (t22 != 2147451007LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1761 = 138;
	volatile int8_t x1762 = 1;
	static int16_t x1763 = -1;
	int16_t x1764 = 1;

	t23 = (((x1761<<x1762)^x1763)%x1764);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1800 = UINT32_MAX;
	int64_t t24 = -2190389LL;

	t24 = (((x1797<<x1798)^x1799)%x1800);

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1821 = UINT8_MAX;
	static volatile uint16_t x1822 = 1U;
	static uint32_t x1823 = UINT32_MAX;
	uint32_t t25 = 70793022U;

	t25 = (((x1821<<x1822)^x1823)%x1824);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1965 = UINT8_MAX;
	uint8_t x1968 = 99U;
	int64_t t26 = -2460382559680985LL;

	t26 = (((x1965<<x1966)^x1967)%x1968);

	if (t26 != -58LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x1997 = INT8_MAX;
	uint32_t x1998 = 3U;
	int8_t x1999 = 1;
	volatile int64_t x2000 = -1LL;

	t27 = (((x1997<<x1998)^x1999)%x2000);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x2010 = 3U;
	int8_t x2011 = -1;
	static volatile int32_t t28 = 343;

	t28 = (((x2009<<x2010)^x2011)%x2012);

	if (t28 != -2041) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x2093 = UINT32_MAX;
	uint64_t x2094 = 23LLU;
	int64_t x2095 = INT64_MIN;
	volatile int64_t t29 = 2690078087LL;

	t29 = (((x2093<<x2094)^x2095)%x2096);

	if (t29 != -4360LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x2197 = UINT8_MAX;
	static uint8_t x2198 = 3U;
	static volatile int64_t x2199 = INT64_MIN;
	int8_t x2200 = INT8_MAX;
	static int64_t t30 = -6286416131LL;

	t30 = (((x2197<<x2198)^x2199)%x2200);

	if (t30 != -120LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2329 = UINT64_MAX;
	int8_t x2331 = INT8_MIN;
	int64_t x2332 = -1LL;

	t31 = (((x2329<<x2330)^x2331)%x2332);

	if (t31 != 134217600LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2450 = 0;
	int64_t x2451 = -1LL;
	volatile int16_t x2452 = INT16_MIN;
	volatile int64_t t32 = 50319024059311319LL;

	t32 = (((x2449<<x2450)^x2451)%x2452);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2534 = 3U;
	int8_t x2536 = -1;
	volatile uint64_t t33 = 14880680918LLU;

	t33 = (((x2533<<x2534)^x2535)%x2536);

	if (t33 != 7LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x2681 = UINT32_MAX;
	volatile uint8_t x2683 = 98U;
	volatile uint64_t x2684 = 23LLU;
	static volatile uint64_t t34 = 69LLU;

	t34 = (((x2681<<x2682)^x2683)%x2684);

	if (t34 != 5LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2705 = 4U;
	int32_t x2706 = 12;
	uint32_t x2708 = 9547808U;
	volatile uint32_t t35 = 179U;

	t35 = (((x2705<<x2706)^x2707)%x2708);

	if (t35 != 7984992U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2725 = 3222607652577453201LLU;
	uint8_t x2727 = 11U;
	volatile int16_t x2728 = -1;
	static volatile uint64_t t36 = 5LLU;

	t36 = (((x2725<<x2726)^x2727)%x2728);

	if (t36 != 6445215305154906409LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2922 = 13;
	static int16_t x2923 = 0;
	int16_t x2924 = 7;
	volatile int32_t t37 = 477198020;

	t37 = (((x2921<<x2922)^x2923)%x2924);

	if (t37 != 6) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x3045 = 0;
	int8_t x3046 = 12;
	int16_t x3048 = INT16_MIN;
	static volatile int32_t t38 = -329;

	t38 = (((x3045<<x3046)^x3047)%x3048);

	if (t38 != -633) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x3073 = UINT32_MAX;
	int8_t x3074 = 0;
	static int16_t x3075 = INT16_MIN;
	int64_t x3076 = INT64_MAX;

	t39 = (((x3073<<x3074)^x3075)%x3076);

	if (t39 != 32767LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x3093 = 9U;
	uint8_t x3094 = 5U;
	int8_t x3095 = 13;
	int64_t x3096 = INT64_MAX;
	volatile int64_t t40 = 4452913LL;

	t40 = (((x3093<<x3094)^x3095)%x3096);

	if (t40 != 301LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x3150 = 1;
	uint16_t x3151 = UINT16_MAX;
	static uint64_t t41 = 676LLU;

	t41 = (((x3149<<x3150)^x3151)%x3152);

	if (t41 != 2147418113LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3153 = 2719U;
	int8_t x3154 = 15;
	volatile int32_t x3155 = 1180;
	uint32_t t42 = 1773U;

	t42 = (((x3153<<x3154)^x3155)%x3156);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x3201 = 2U;
	static uint16_t x3202 = 11U;
	volatile uint16_t x3203 = UINT16_MAX;

	t43 = (((x3201<<x3202)^x3203)%x3204);

	if (t43 != 203) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3217 = 8201U;
	volatile uint8_t x3218 = 0U;
	volatile int16_t x3220 = INT16_MIN;

	t44 = (((x3217<<x3218)^x3219)%x3220);

	if (t44 != -8202) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x3225 = 15290535U;
	int16_t x3227 = INT16_MIN;
	int32_t x3228 = 52932628;
	volatile uint32_t t45 = 0U;

	t45 = (((x3225<<x3226)^x3227)%x3228);

	if (t45 != 45075047U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x3285 = 406245LLU;
	int8_t x3286 = 0;
	int8_t x3288 = -1;
	volatile uint64_t t46 = 11556175075763469LLU;

	t46 = (((x3285<<x3286)^x3287)%x3288);

	if (t46 != 18446744073632065595LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3297 = 12U;
	uint64_t x3299 = 341814074LLU;
	int16_t x3300 = INT16_MIN;
	uint64_t t47 = 1176360238545927765LLU;

	t47 = (((x3297<<x3298)^x3299)%x3300);

	if (t47 != 341814266LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3337 = 4U;
	static volatile uint16_t x3338 = 15U;
	int32_t x3339 = INT32_MIN;
	int8_t x3340 = -52;
	volatile int32_t t48 = 22728488;

	t48 = (((x3337<<x3338)^x3339)%x3340);

	if (t48 != -44) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3345 = 1U;
	int8_t x3346 = 1;
	static uint8_t x3347 = 0U;
	static int8_t x3348 = -1;
	volatile int32_t t49 = -3682797;

	t49 = (((x3345<<x3346)^x3347)%x3348);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3502 = 21U;
	int8_t x3503 = INT8_MIN;
	int64_t x3504 = INT64_MAX;
	int64_t t50 = 1LL;

	t50 = (((x3501<<x3502)^x3503)%x3504);

	if (t50 != -266338432LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3513 = INT16_MAX;
	int8_t x3514 = 1;
	static volatile uint8_t x3515 = UINT8_MAX;
	volatile int64_t t51 = -1LL;

	t51 = (((x3513<<x3514)^x3515)%x3516);

	if (t51 != 65281LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3526 = 5U;
	int16_t x3527 = INT16_MIN;
	static volatile int32_t t52 = -55423146;

	t52 = (((x3525<<x3526)^x3527)%x3528);

	if (t52 != -1015840) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3545 = UINT16_MAX;
	uint8_t x3546 = 12U;
	volatile int8_t x3547 = INT8_MIN;
	volatile uint32_t x3548 = 748093165U;
	uint32_t t53 = 34431697U;

	t53 = (((x3545<<x3546)^x3547)%x3548);

	if (t53 != 286069983U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x3561 = 3U;
	uint8_t x3562 = 3U;
	uint8_t x3563 = 1U;
	uint32_t x3564 = 627749489U;
	static volatile uint32_t t54 = 51239214U;

	t54 = (((x3561<<x3562)^x3563)%x3564);

	if (t54 != 25U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x3605 = 61U;
	static uint64_t x3606 = 1LLU;
	int8_t x3607 = INT8_MIN;
	volatile uint64_t x3608 = 1671819340LLU;
	static volatile uint64_t t55 = 7060869515897492LLU;

	t55 = (((x3605<<x3606)^x3607)%x3608);

	if (t55 != 126119010LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3609 = INT16_MAX;
	int16_t x3610 = 2;
	static int16_t x3611 = INT16_MIN;
	volatile int8_t x3612 = INT8_MIN;
	int32_t t56 = 746061;

	t56 = (((x3609<<x3610)^x3611)%x3612);

	if (t56 != -4) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3619 = 119U;
	int8_t x3620 = INT8_MIN;
	volatile int64_t t57 = 66335172824055985LL;

	t57 = (((x3617<<x3618)^x3619)%x3620);

	if (t57 != 11LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3749 = 502LL;
	static volatile int32_t x3751 = INT32_MIN;
	int64_t t58 = -28LL;

	t58 = (((x3749<<x3750)^x3751)%x3752);

	if (t58 != -32266LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x3762 = 4;
	uint8_t x3763 = 20U;
	static uint8_t x3764 = 52U;
	uint32_t t59 = 3U;

	t59 = (((x3761<<x3762)^x3763)%x3764);

	if (t59 != 20U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3773 = INT8_MAX;
	volatile uint8_t x3774 = 0U;
	int32_t x3775 = INT32_MAX;
	static int64_t x3776 = INT64_MAX;
	int64_t t60 = 36344329223367LL;

	t60 = (((x3773<<x3774)^x3775)%x3776);

	if (t60 != 2147483520LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x3777 = 12;
	int8_t x3778 = 7;
	static uint32_t x3779 = 2326973U;
	uint8_t x3780 = UINT8_MAX;

	t61 = (((x3777<<x3778)^x3779)%x3780);

	if (t61 != 104U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3837 = 76172LLU;
	static uint8_t x3838 = 3U;
	int32_t x3839 = -96960;
	int16_t x3840 = -1;
	static volatile uint64_t t62 = 14609127LLU;

	t62 = (((x3837<<x3838)^x3839)%x3840);

	if (t62 != 18446744073709013280LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3854 = 2;
	volatile int64_t x3855 = -1LL;
	int32_t x3856 = -15318;
	static volatile int64_t t63 = 12420LL;

	t63 = (((x3853<<x3854)^x3855)%x3856);

	if (t63 != -5LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3949 = INT8_MAX;
	int64_t x3951 = 174703LL;
	int16_t x3952 = 6292;

	t64 = (((x3949<<x3950)^x3951)%x3952);

	if (t64 != 4724LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4053 = 1U;
	int8_t x4054 = 18;
	static uint64_t x4055 = UINT64_MAX;
	uint8_t x4056 = 1U;
	volatile uint64_t t65 = 1044960294066383LLU;

	t65 = (((x4053<<x4054)^x4055)%x4056);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4145 = INT16_MAX;
	uint8_t x4146 = 3U;
	static uint16_t x4147 = UINT16_MAX;
	static int32_t x4148 = INT32_MIN;
	volatile int32_t t66 = -18239;

	t66 = (((x4145<<x4146)^x4147)%x4148);

	if (t66 != 196615) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4153 = 418449467U;
	uint16_t x4154 = 2U;
	static int32_t x4155 = INT32_MIN;
	int32_t x4156 = INT32_MIN;
	uint32_t t67 = 313484U;

	t67 = (((x4153<<x4154)^x4155)%x4156);

	if (t67 != 1673797868U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x4245 = UINT8_MAX;
	int8_t x4246 = 20;
	int16_t x4247 = 0;
	uint64_t x4248 = 5875LLU;
	uint64_t t68 = 31585LLU;

	t68 = (((x4245<<x4246)^x4247)%x4248);

	if (t68 != 3880LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4273 = 12U;
	volatile int16_t x4274 = 1;
	int8_t x4275 = INT8_MIN;
	volatile uint64_t t69 = 408LLU;

	t69 = (((x4273<<x4274)^x4275)%x4276);

	if (t69 != 565884488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x4301 = 129826LLU;
	int8_t x4303 = -1;
	static uint64_t t70 = 3731LLU;

	t70 = (((x4301<<x4302)^x4303)%x4304);

	if (t70 != 18446744073709421789LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x4369 = 655U;
	volatile uint16_t x4370 = 1U;
	static uint64_t x4371 = UINT64_MAX;
	uint16_t x4372 = 1U;
	volatile uint64_t t71 = 821651403LLU;

	t71 = (((x4369<<x4370)^x4371)%x4372);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4393 = INT16_MAX;
	uint64_t x4395 = 187460600535204662LLU;
	uint8_t x4396 = UINT8_MAX;
	uint64_t t72 = 491767402482470LLU;

	t72 = (((x4393<<x4394)^x4395)%x4396);

	if (t72 != 32LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4450 = 17;
	uint8_t x4451 = UINT8_MAX;
	int8_t x4452 = -1;
	uint64_t t73 = 42520316381995252LLU;

	t73 = (((x4449<<x4450)^x4451)%x4452);

	if (t73 != 58623944163583LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4485 = 1351315U;
	volatile uint8_t x4486 = 2U;
	static int32_t x4488 = -9878519;
	static volatile uint64_t t74 = 233416LLU;

	t74 = (((x4485<<x4486)^x4487)%x4488);

	if (t74 != 4473258LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4611 = INT32_MAX;
	uint32_t x4612 = 89797020U;
	volatile uint32_t t75 = 0U;

	t75 = (((x4609<<x4610)^x4611)%x4612);

	if (t75 != 82150147U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4641 = 51568905U;
	volatile int64_t x4644 = INT64_MAX;
	static volatile int64_t t76 = 778804LL;

	t76 = (((x4641<<x4642)^x4643)%x4644);

	if (t76 != 1887732478LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x4765 = UINT32_MAX;
	int64_t x4766 = 0LL;
	static int64_t x4767 = 2LL;
	int8_t x4768 = INT8_MIN;
	static volatile int64_t t77 = -426451883345LL;

	t77 = (((x4765<<x4766)^x4767)%x4768);

	if (t77 != 125LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x4773 = UINT32_MAX;
	int8_t x4774 = 13;
	uint16_t x4775 = UINT16_MAX;
	int16_t x4776 = -900;

	t78 = (((x4773<<x4774)^x4775)%x4776);

	if (t78 != 4294909951U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4889 = 248511559;
	uint32_t x4890 = 1U;
	volatile int16_t x4891 = -1;
	int64_t x4892 = INT64_MIN;
	int64_t t79 = -2420LL;

	t79 = (((x4889<<x4890)^x4891)%x4892);

	if (t79 != -497023119LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x4921 = 1578U;
	volatile uint8_t x4922 = 12U;
	int64_t x4923 = 4570843229LL;
	volatile int8_t x4924 = INT8_MAX;
	volatile int64_t t80 = 206189LL;

	t80 = (((x4921<<x4922)^x4923)%x4924);

	if (t80 != 12LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4925 = INT16_MAX;
	uint32_t x4927 = UINT32_MAX;
	int8_t x4928 = INT8_MIN;
	static volatile uint32_t t81 = 1421U;

	t81 = (((x4925<<x4926)^x4927)%x4928);

	if (t81 != 4286578943U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4985 = 7882103LLU;
	volatile uint8_t x4987 = UINT8_MAX;
	int16_t x4988 = -9860;
	volatile uint64_t t82 = 562549651819418LLU;

	t82 = (((x4985<<x4986)^x4987)%x4988);

	if (t82 != 1008909183LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x5081 = 31712U;
	uint8_t x5082 = 0U;
	int16_t x5083 = INT16_MIN;
	uint32_t x5084 = UINT32_MAX;
	uint32_t t83 = 58687379U;

	t83 = (((x5081<<x5082)^x5083)%x5084);

	if (t83 != 4294966240U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5181 = INT16_MAX;
	int32_t x5182 = 9;
	uint16_t x5183 = 3U;
	int8_t x5184 = INT8_MAX;
	volatile int32_t t84 = -1296;

	t84 = (((x5181<<x5182)^x5183)%x5184);

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5289 = 0;
	int8_t x5290 = 1;
	int8_t x5291 = -1;
	static int32_t t85 = 417125;

	t85 = (((x5289<<x5290)^x5291)%x5292);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5333 = 38U;
	int8_t x5335 = -1;
	uint32_t x5336 = 95U;
	static uint32_t t86 = 0U;

	t86 = (((x5333<<x5334)^x5335)%x5336);

	if (t86 != 24U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5377 = UINT8_MAX;
	static int8_t x5378 = 6;
	volatile int32_t t87 = 39;

	t87 = (((x5377<<x5378)^x5379)%x5380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x5429 = 3752011023143LLU;
	static uint16_t x5430 = 21U;
	int8_t x5431 = INT8_MIN;
	int8_t x5432 = 1;

	t88 = (((x5429<<x5430)^x5431)%x5432);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x5453 = 418168403LL;
	uint8_t x5454 = 2U;
	uint16_t x5455 = UINT16_MAX;
	int8_t x5456 = -13;
	volatile int64_t t89 = 154LL;

	t89 = (((x5453<<x5454)^x5455)%x5456);

	if (t89 != 8LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5549 = UINT32_MAX;
	int8_t x5550 = 7;
	static uint64_t x5551 = UINT64_MAX;
	static uint64_t t90 = 614596083220871058LLU;

	t90 = (((x5549<<x5550)^x5551)%x5552);

	if (t90 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x5617 = 21501492LL;
	uint8_t x5618 = 15U;
	int16_t x5620 = -1;
	uint64_t t91 = 175499444509236210LLU;

	t91 = (((x5617<<x5618)^x5619)%x5620);

	if (t91 != 117079062245633LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x5673 = UINT32_MAX;
	int8_t x5674 = 0;
	int64_t x5675 = INT64_MAX;
	int8_t x5676 = INT8_MIN;
	int64_t t92 = -1LL;

	t92 = (((x5673<<x5674)^x5675)%x5676);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x5682 = 0;
	int64_t x5683 = -130872578801352759LL;
	static volatile int64_t x5684 = -27692323735181LL;
	volatile int64_t t93 = -22195951714LL;

	t93 = (((x5681<<x5682)^x5683)%x5684);

	if (t93 != -26349152622533LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5685 = INT8_MAX;
	volatile uint8_t x5686 = 15U;
	int32_t x5687 = -18251191;
	int16_t x5688 = INT16_MIN;
	volatile int32_t t94 = 256739;

	t94 = (((x5685<<x5686)^x5687)%x5688);

	if (t94 != -32183) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5741 = 1;
	volatile int8_t x5742 = 8;
	int64_t x5743 = 8699971712997503LL;
	int32_t x5744 = 3049811;
	int64_t t95 = 34774062161924LL;

	t95 = (((x5741<<x5742)^x5743)%x5744);

	if (t95 != 858338LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x5757 = INT16_MAX;
	volatile int16_t x5758 = 1;
	uint64_t x5759 = 918598743294LLU;
	uint64_t x5760 = 28LLU;
	volatile uint64_t t96 = 266702477LLU;

	t96 = (((x5757<<x5758)^x5759)%x5760);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5805 = 28;
	volatile uint32_t x5806 = 13U;
	volatile int64_t x5807 = INT64_MAX;
	static volatile int64_t t97 = 23278588537LL;

	t97 = (((x5805<<x5806)^x5807)%x5808);

	if (t97 != 2147254272LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5813 = UINT64_MAX;
	int8_t x5814 = 7;
	int16_t x5815 = -15827;
	volatile int16_t x5816 = -1448;

	t98 = (((x5813<<x5814)^x5815)%x5816);

	if (t98 != 15789LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5861 = UINT16_MAX;
	volatile int8_t x5864 = INT8_MIN;

	t99 = (((x5861<<x5862)^x5863)%x5864);

	if (t99 != -1) { NG(); } else { ; }
	
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

