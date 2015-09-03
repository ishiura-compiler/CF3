#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x36 = INT64_MIN;
uint64_t x102 = 192280395298LLU;
uint8_t x103 = 2U;
int16_t x202 = INT16_MAX;
static int64_t x204 = INT64_MIN;
uint64_t x208 = 250LLU;
int8_t x253 = INT8_MIN;
int64_t x254 = 36113873297337LL;
static int8_t x256 = 1;
int32_t t6 = 69606040;
volatile int32_t t7 = -450;
int8_t x481 = INT8_MIN;
uint16_t x536 = UINT16_MAX;
int32_t t11 = -147672275;
uint32_t x637 = UINT32_MAX;
volatile uint64_t x638 = 1939491295513352LLU;
volatile int8_t x761 = -3;
int32_t t16 = 241269662;
static int16_t x870 = INT16_MAX;
volatile uint32_t x872 = UINT32_MAX;
volatile int32_t t17 = -4;
int32_t x953 = -204098;
volatile int32_t t19 = 3;
volatile int64_t x1204 = INT64_MAX;
static uint8_t x1215 = 3U;
int64_t x1216 = INT64_MIN;
uint32_t x1266 = UINT32_MAX;
int32_t x1268 = -1;
int32_t t24 = -3924874;
uint8_t x1415 = 1U;
static int32_t t25 = -25;
int32_t t27 = -63326;
int16_t x1459 = 1;
uint16_t x1506 = 36U;
volatile int32_t t34 = -3863;
uint16_t x1644 = 1449U;
int32_t t36 = -13254;
static uint8_t x1829 = 3U;
int32_t t37 = -59;
volatile uint32_t x2001 = 3883U;
static int32_t x2022 = 2217;
volatile uint16_t x2093 = 10644U;
int16_t x2197 = 1;
uint64_t x2198 = 763459283335LLU;
volatile uint16_t x2199 = 0U;
int32_t x2227 = 1;
static int64_t x2385 = -1LL;
uint32_t x2387 = 3U;
static int16_t x2388 = INT16_MIN;
volatile int32_t t47 = -27;
uint32_t x2508 = 158109U;
int32_t t49 = -977;
volatile uint64_t x2545 = 1467817934LLU;
uint8_t x2548 = 2U;
int16_t x2833 = -1;
uint64_t x2834 = 71LLU;
int32_t x2991 = 4;
uint64_t x3039 = 5LLU;
int8_t x3163 = 1;
int32_t x3169 = INT32_MAX;
int16_t x3171 = 28;
int16_t x3172 = -2692;
static uint16_t x3290 = UINT16_MAX;
int32_t t64 = 97;
int8_t x3319 = 11;
volatile int16_t x3475 = 1;
uint64_t x3531 = 0LLU;
static volatile int32_t x3541 = INT32_MAX;
uint8_t x3543 = 1U;
volatile int8_t x3552 = INT8_MIN;
static volatile int32_t t70 = -162554362;
uint8_t x3559 = 12U;
volatile uint32_t x3591 = 1U;
volatile uint16_t x3592 = 30568U;
volatile uint8_t x3751 = 1U;
uint8_t x3915 = 11U;
volatile uint8_t x3923 = 3U;
uint32_t x3924 = 53642882U;
static uint32_t x4169 = 31870622U;
static int8_t x4186 = INT8_MAX;
int32_t t81 = -81077;
uint32_t x4282 = 674983U;
int8_t x4284 = -1;
volatile int16_t x4357 = INT16_MIN;
int8_t x4358 = INT8_MAX;
int16_t x4360 = INT16_MIN;
uint32_t x4365 = UINT32_MAX;
static volatile int8_t x4387 = 7;
static int32_t t86 = 3122492;
int16_t x4489 = -6;
uint32_t x4491 = 4U;
volatile uint32_t x4518 = 5U;
static uint8_t x4579 = 1U;
static volatile uint16_t x4647 = 0U;
int16_t x4729 = -1;
uint32_t x4937 = 3857214U;
uint16_t x4939 = 11U;
volatile int32_t t99 = 141187;


void f0(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MAX;
	int16_t x11 = 1;
	int32_t x12 = INT32_MAX;
	volatile int32_t t0 = 3785;

	t0 = (x9<((x10<<x11)&x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	uint64_t x35 = 43LLU;
	volatile int32_t t1 = 0;

	t1 = (x33<((x34<<x35)&x36));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x101 = 9U;
	int8_t x104 = INT8_MIN;
	volatile int32_t t2 = 9398520;

	t2 = (x101<((x102<<x103)&x104));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x201 = -162;
	volatile int32_t x203 = 0;
	int32_t t3 = 5;

	t3 = (x201<((x202<<x203)&x204));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x205 = 350016902U;
	uint64_t x206 = 3073254LLU;
	volatile uint8_t x207 = 0U;
	int32_t t4 = 7529;

	t4 = (x205<((x206<<x207)&x208));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x255 = 0;
	static volatile int32_t t5 = 613646;

	t5 = (x253<((x254<<x255)&x256));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x305 = -62;
	uint16_t x306 = 1826U;
	uint8_t x307 = 16U;
	int8_t x308 = -1;

	t6 = (x305<((x306<<x307)&x308));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x393 = -117;
	int8_t x394 = INT8_MAX;
	volatile uint8_t x395 = 3U;
	int32_t x396 = -1;

	t7 = (x393<((x394<<x395)&x396));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x482 = 42222691;
	int16_t x483 = 0;
	uint16_t x484 = 1752U;
	int32_t t8 = -31442;

	t8 = (x481<((x482<<x483)&x484));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x533 = INT16_MAX;
	static volatile int32_t x534 = 64047;
	uint16_t x535 = 10U;
	static int32_t t9 = 142883;

	t9 = (x533<((x534<<x535)&x536));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x545 = INT32_MIN;
	volatile int16_t x546 = 41;
	uint32_t x547 = 0U;
	static volatile uint64_t x548 = 97676479LLU;
	volatile int32_t t10 = 681;

	t10 = (x545<((x546<<x547)&x548));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x569 = -1;
	volatile uint64_t x570 = UINT64_MAX;
	uint8_t x571 = 60U;
	volatile int8_t x572 = -1;

	t11 = (x569<((x570<<x571)&x572));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x609 = INT64_MIN;
	volatile uint16_t x610 = UINT16_MAX;
	int8_t x611 = 0;
	volatile int64_t x612 = INT64_MIN;
	static int32_t t12 = 412030320;

	t12 = (x609<((x610<<x611)&x612));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x639 = 0U;
	volatile int32_t x640 = -1;
	int32_t t13 = 135;

	t13 = (x637<((x638<<x639)&x640));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x673 = 3U;
	int32_t x674 = INT32_MAX;
	int32_t x675 = 0;
	int64_t x676 = -51171LL;
	static volatile int32_t t14 = 4722;

	t14 = (x673<((x674<<x675)&x676));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x749 = INT8_MAX;
	uint64_t x750 = 955117928381476LLU;
	int32_t x751 = 8;
	int64_t x752 = 285072LL;
	volatile int32_t t15 = -1024291318;

	t15 = (x749<((x750<<x751)&x752));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x762 = INT8_MAX;
	uint16_t x763 = 4U;
	uint16_t x764 = UINT16_MAX;

	t16 = (x761<((x762<<x763)&x764));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x869 = -1;
	static int32_t x871 = 2;

	t17 = (x869<((x870<<x871)&x872));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x954 = 151581351LLU;
	int8_t x955 = 51;
	uint64_t x956 = 124483832265LLU;
	int32_t t18 = -3105;

	t18 = (x953<((x954<<x955)&x956));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x997 = -1;
	volatile uint64_t x998 = 2622788391208LLU;
	volatile int16_t x999 = 1;
	int64_t x1000 = INT64_MIN;

	t19 = (x997<((x998<<x999)&x1000));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1201 = -1LL;
	int16_t x1202 = INT16_MAX;
	uint8_t x1203 = 3U;
	volatile int32_t t20 = 39471445;

	t20 = (x1201<((x1202<<x1203)&x1204));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1213 = 503081020LLU;
	static int32_t x1214 = 274587;
	volatile int32_t t21 = -134;

	t21 = (x1213<((x1214<<x1215)&x1216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1265 = 1U;
	uint32_t x1267 = 8U;
	volatile int32_t t22 = 158616910;

	t22 = (x1265<((x1266<<x1267)&x1268));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x1389 = -636669;
	static uint32_t x1390 = 250641U;
	int32_t x1391 = 20;
	uint64_t x1392 = UINT64_MAX;
	volatile int32_t t23 = -112;

	t23 = (x1389<((x1390<<x1391)&x1392));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1409 = INT16_MAX;
	int64_t x1410 = 236LL;
	uint16_t x1411 = 1U;
	uint64_t x1412 = UINT64_MAX;

	t24 = (x1409<((x1410<<x1411)&x1412));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1413 = -9711;
	static uint8_t x1414 = 3U;
	volatile uint64_t x1416 = 36LLU;

	t25 = (x1413<((x1414<<x1415)&x1416));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1429 = 3U;
	uint16_t x1430 = UINT16_MAX;
	static int8_t x1431 = 1;
	int16_t x1432 = INT16_MAX;
	int32_t t26 = 271165527;

	t26 = (x1429<((x1430<<x1431)&x1432));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1441 = 3312;
	uint16_t x1442 = UINT16_MAX;
	int64_t x1443 = 1LL;
	volatile int16_t x1444 = -1;

	t27 = (x1441<((x1442<<x1443)&x1444));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1449 = INT16_MIN;
	uint32_t x1450 = 5679U;
	uint8_t x1451 = 7U;
	uint64_t x1452 = 899356LLU;
	volatile int32_t t28 = -56;

	t28 = (x1449<((x1450<<x1451)&x1452));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1457 = 46U;
	uint8_t x1458 = 6U;
	int8_t x1460 = INT8_MIN;
	int32_t t29 = 976215114;

	t29 = (x1457<((x1458<<x1459)&x1460));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1505 = 0U;
	static uint16_t x1507 = 17U;
	int64_t x1508 = -1LL;
	int32_t t30 = 12972;

	t30 = (x1505<((x1506<<x1507)&x1508));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1517 = INT16_MAX;
	int32_t x1518 = 2;
	uint8_t x1519 = 14U;
	int32_t x1520 = -1;
	volatile int32_t t31 = -70657;

	t31 = (x1517<((x1518<<x1519)&x1520));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1545 = INT8_MIN;
	uint8_t x1546 = UINT8_MAX;
	volatile uint8_t x1547 = 0U;
	uint64_t x1548 = 9354780960LLU;
	int32_t t32 = 0;

	t32 = (x1545<((x1546<<x1547)&x1548));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1601 = INT8_MAX;
	volatile int8_t x1602 = INT8_MAX;
	uint8_t x1603 = 1U;
	int16_t x1604 = -1;
	volatile int32_t t33 = 19943837;

	t33 = (x1601<((x1602<<x1603)&x1604));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x1613 = 1U;
	uint64_t x1614 = UINT64_MAX;
	int8_t x1615 = 0;
	volatile int8_t x1616 = INT8_MAX;

	t34 = (x1613<((x1614<<x1615)&x1616));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1641 = INT32_MIN;
	uint8_t x1642 = 33U;
	static int8_t x1643 = 1;
	int32_t t35 = 378861819;

	t35 = (x1641<((x1642<<x1643)&x1644));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1677 = -1;
	uint8_t x1678 = 1U;
	uint16_t x1679 = 0U;
	uint16_t x1680 = UINT16_MAX;

	t36 = (x1677<((x1678<<x1679)&x1680));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x1830 = UINT32_MAX;
	static uint8_t x1831 = 1U;
	uint32_t x1832 = UINT32_MAX;

	t37 = (x1829<((x1830<<x1831)&x1832));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x1833 = UINT32_MAX;
	static int32_t x1834 = 31767;
	int8_t x1835 = 3;
	volatile uint64_t x1836 = UINT64_MAX;
	int32_t t38 = -3289988;

	t38 = (x1833<((x1834<<x1835)&x1836));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1953 = -1;
	static volatile int64_t x1954 = 160LL;
	static volatile uint32_t x1955 = 3U;
	static int16_t x1956 = 1242;
	static int32_t t39 = 4;

	t39 = (x1953<((x1954<<x1955)&x1956));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2002 = 0;
	uint8_t x2003 = 2U;
	static int16_t x2004 = -1;
	volatile int32_t t40 = 1;

	t40 = (x2001<((x2002<<x2003)&x2004));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2021 = UINT64_MAX;
	uint16_t x2023 = 7U;
	volatile uint16_t x2024 = 627U;
	volatile int32_t t41 = 1000;

	t41 = (x2021<((x2022<<x2023)&x2024));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2037 = 3024066624147982587LLU;
	int32_t x2038 = 53826;
	uint16_t x2039 = 3U;
	int64_t x2040 = 97LL;
	volatile int32_t t42 = -2;

	t42 = (x2037<((x2038<<x2039)&x2040));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2094 = UINT32_MAX;
	uint32_t x2095 = 8U;
	uint32_t x2096 = 2U;
	int32_t t43 = -1586404;

	t43 = (x2093<((x2094<<x2095)&x2096));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2200 = INT8_MIN;
	int32_t t44 = -27693;

	t44 = (x2197<((x2198<<x2199)&x2200));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2225 = -1;
	static uint32_t x2226 = 91158U;
	int32_t x2228 = INT32_MIN;
	int32_t t45 = 42123;

	t45 = (x2225<((x2226<<x2227)&x2228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2386 = 14338U;
	int32_t t46 = 13;

	t46 = (x2385<((x2386<<x2387)&x2388));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2441 = INT8_MAX;
	int16_t x2442 = 6486;
	int32_t x2443 = 1;
	int32_t x2444 = INT32_MAX;

	t47 = (x2441<((x2442<<x2443)&x2444));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2505 = UINT32_MAX;
	uint16_t x2506 = 0U;
	uint8_t x2507 = 0U;
	static volatile int32_t t48 = 1095;

	t48 = (x2505<((x2506<<x2507)&x2508));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x2533 = UINT8_MAX;
	volatile int8_t x2534 = 4;
	int64_t x2535 = 3LL;
	volatile uint32_t x2536 = 23817U;

	t49 = (x2533<((x2534<<x2535)&x2536));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2537 = -50;
	uint32_t x2538 = 105206U;
	uint16_t x2539 = 9U;
	static int8_t x2540 = INT8_MIN;
	volatile int32_t t50 = -742653;

	t50 = (x2537<((x2538<<x2539)&x2540));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2546 = 888959LL;
	uint8_t x2547 = 0U;
	int32_t t51 = -6775860;

	t51 = (x2545<((x2546<<x2547)&x2548));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2549 = 13U;
	volatile uint16_t x2550 = 340U;
	static int8_t x2551 = 1;
	int16_t x2552 = INT16_MIN;
	int32_t t52 = 109;

	t52 = (x2549<((x2550<<x2551)&x2552));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2593 = INT64_MIN;
	uint64_t x2594 = UINT64_MAX;
	static int32_t x2595 = 10;
	volatile uint32_t x2596 = UINT32_MAX;
	int32_t t53 = -344503;

	t53 = (x2593<((x2594<<x2595)&x2596));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x2657 = UINT8_MAX;
	uint64_t x2658 = 10325LLU;
	uint8_t x2659 = 50U;
	uint32_t x2660 = 102253U;
	static int32_t t54 = -34;

	t54 = (x2657<((x2658<<x2659)&x2660));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2725 = INT8_MIN;
	uint64_t x2726 = 408964LLU;
	volatile uint64_t x2727 = 57LLU;
	int64_t x2728 = -1LL;
	int32_t t55 = -12422450;

	t55 = (x2725<((x2726<<x2727)&x2728));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2835 = 3U;
	int32_t x2836 = -1;
	volatile int32_t t56 = -619058437;

	t56 = (x2833<((x2834<<x2835)&x2836));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x2989 = INT64_MIN;
	volatile uint64_t x2990 = 1LLU;
	uint32_t x2992 = 1U;
	volatile int32_t t57 = 78643594;

	t57 = (x2989<((x2990<<x2991)&x2992));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2993 = INT8_MIN;
	uint16_t x2994 = 1U;
	int16_t x2995 = 0;
	uint32_t x2996 = 5U;
	int32_t t58 = -84;

	t58 = (x2993<((x2994<<x2995)&x2996));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3037 = UINT64_MAX;
	volatile int64_t x3038 = 2LL;
	static uint32_t x3040 = UINT32_MAX;
	int32_t t59 = 152651;

	t59 = (x3037<((x3038<<x3039)&x3040));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3161 = 138861U;
	int16_t x3162 = INT16_MAX;
	uint16_t x3164 = UINT16_MAX;
	volatile int32_t t60 = -149;

	t60 = (x3161<((x3162<<x3163)&x3164));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x3170 = UINT32_MAX;
	int32_t t61 = -100242;

	t61 = (x3169<((x3170<<x3171)&x3172));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x3205 = INT64_MIN;
	int32_t x3206 = 856866213;
	volatile int8_t x3207 = 1;
	uint64_t x3208 = 36728935159816LLU;
	static volatile int32_t t62 = 20796;

	t62 = (x3205<((x3206<<x3207)&x3208));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3273 = -1;
	uint32_t x3274 = 172216363U;
	uint8_t x3275 = 6U;
	int16_t x3276 = INT16_MIN;
	int32_t t63 = -6;

	t63 = (x3273<((x3274<<x3275)&x3276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3289 = 2449;
	int8_t x3291 = 2;
	static int8_t x3292 = INT8_MAX;

	t64 = (x3289<((x3290<<x3291)&x3292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x3317 = -1;
	int32_t x3318 = 0;
	uint64_t x3320 = 23LLU;
	volatile int32_t t65 = -2742;

	t65 = (x3317<((x3318<<x3319)&x3320));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3473 = INT64_MIN;
	volatile uint32_t x3474 = 0U;
	volatile int16_t x3476 = -1;
	static volatile int32_t t66 = -197;

	t66 = (x3473<((x3474<<x3475)&x3476));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3485 = INT64_MAX;
	int64_t x3486 = 65093469LL;
	static volatile uint32_t x3487 = 1U;
	uint64_t x3488 = UINT64_MAX;
	int32_t t67 = 3728942;

	t67 = (x3485<((x3486<<x3487)&x3488));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x3529 = 133583690924LL;
	static uint32_t x3530 = 0U;
	volatile uint8_t x3532 = UINT8_MAX;
	int32_t t68 = 36;

	t68 = (x3529<((x3530<<x3531)&x3532));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x3542 = UINT32_MAX;
	volatile uint64_t x3544 = UINT64_MAX;
	static int32_t t69 = 4586;

	t69 = (x3541<((x3542<<x3543)&x3544));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3549 = 7653U;
	int32_t x3550 = INT32_MAX;
	uint64_t x3551 = 0LLU;

	t70 = (x3549<((x3550<<x3551)&x3552));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3557 = 76U;
	int16_t x3558 = 789;
	volatile uint8_t x3560 = 115U;
	volatile int32_t t71 = 76680364;

	t71 = (x3557<((x3558<<x3559)&x3560));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3589 = UINT32_MAX;
	int16_t x3590 = INT16_MAX;
	int32_t t72 = -1520;

	t72 = (x3589<((x3590<<x3591)&x3592));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3597 = INT64_MIN;
	uint8_t x3598 = 12U;
	volatile uint16_t x3599 = 3U;
	uint64_t x3600 = 8451470274764296LLU;
	int32_t t73 = 2902;

	t73 = (x3597<((x3598<<x3599)&x3600));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3749 = -9953597;
	static uint64_t x3750 = 11752746491LLU;
	int32_t x3752 = 408;
	static volatile int32_t t74 = 304270;

	t74 = (x3749<((x3750<<x3751)&x3752));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x3761 = -54;
	uint64_t x3762 = 16182894861075LLU;
	uint64_t x3763 = 15LLU;
	uint16_t x3764 = UINT16_MAX;
	static volatile int32_t t75 = 134411811;

	t75 = (x3761<((x3762<<x3763)&x3764));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3913 = INT8_MIN;
	static volatile int16_t x3914 = INT16_MAX;
	int8_t x3916 = INT8_MIN;
	static volatile int32_t t76 = 443352;

	t76 = (x3913<((x3914<<x3915)&x3916));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3921 = INT64_MAX;
	volatile uint32_t x3922 = UINT32_MAX;
	int32_t t77 = -30471;

	t77 = (x3921<((x3922<<x3923)&x3924));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x3925 = UINT64_MAX;
	uint32_t x3926 = 2U;
	uint8_t x3927 = 0U;
	int64_t x3928 = -62061LL;
	static volatile int32_t t78 = -899339;

	t78 = (x3925<((x3926<<x3927)&x3928));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3997 = INT32_MIN;
	static int32_t x3998 = INT32_MAX;
	volatile int8_t x3999 = 0;
	volatile uint16_t x4000 = 132U;
	volatile int32_t t79 = -103574627;

	t79 = (x3997<((x3998<<x3999)&x4000));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x4170 = 29U;
	static int32_t x4171 = 0;
	uint64_t x4172 = 190571272206545LLU;
	int32_t t80 = -31;

	t80 = (x4169<((x4170<<x4171)&x4172));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4185 = 3U;
	int16_t x4187 = 10;
	int8_t x4188 = 0;

	t81 = (x4185<((x4186<<x4187)&x4188));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4281 = 31;
	int8_t x4283 = 1;
	static volatile int32_t t82 = 893;

	t82 = (x4281<((x4282<<x4283)&x4284));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4325 = 19297627218214916LL;
	uint64_t x4326 = 1297551553LLU;
	int8_t x4327 = 24;
	int16_t x4328 = -7437;
	int32_t t83 = -7305953;

	t83 = (x4325<((x4326<<x4327)&x4328));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4359 = 14U;
	volatile int32_t t84 = 4786;

	t84 = (x4357<((x4358<<x4359)&x4360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4366 = 2U;
	uint8_t x4367 = 2U;
	int8_t x4368 = INT8_MIN;
	volatile int32_t t85 = 91700880;

	t85 = (x4365<((x4366<<x4367)&x4368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x4385 = INT64_MIN;
	uint64_t x4386 = 206643538395597828LLU;
	static int32_t x4388 = INT32_MIN;

	t86 = (x4385<((x4386<<x4387)&x4388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4490 = UINT32_MAX;
	uint64_t x4492 = UINT64_MAX;
	volatile int32_t t87 = -778;

	t87 = (x4489<((x4490<<x4491)&x4492));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4517 = 3229703536691559696LL;
	volatile uint8_t x4519 = 5U;
	uint32_t x4520 = UINT32_MAX;
	int32_t t88 = -3464388;

	t88 = (x4517<((x4518<<x4519)&x4520));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4577 = 9589U;
	uint16_t x4578 = 916U;
	static int16_t x4580 = INT16_MIN;
	int32_t t89 = 1;

	t89 = (x4577<((x4578<<x4579)&x4580));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x4593 = 1884736775699LL;
	int16_t x4594 = 818;
	static uint8_t x4595 = 18U;
	uint16_t x4596 = 3U;
	static int32_t t90 = -43610072;

	t90 = (x4593<((x4594<<x4595)&x4596));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x4645 = INT32_MAX;
	static uint32_t x4646 = UINT32_MAX;
	volatile uint64_t x4648 = 1730164699823415LLU;
	int32_t t91 = 67009453;

	t91 = (x4645<((x4646<<x4647)&x4648));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4709 = INT32_MIN;
	uint16_t x4710 = 1696U;
	static volatile uint8_t x4711 = 3U;
	volatile int64_t x4712 = 25903487486978304LL;
	volatile int32_t t92 = -29717533;

	t92 = (x4709<((x4710<<x4711)&x4712));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4730 = UINT8_MAX;
	static volatile int32_t x4731 = 22;
	int32_t x4732 = INT32_MAX;
	int32_t t93 = 574;

	t93 = (x4729<((x4730<<x4731)&x4732));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4938 = INT16_MAX;
	int64_t x4940 = -1LL;
	static volatile int32_t t94 = 9;

	t94 = (x4937<((x4938<<x4939)&x4940));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4941 = -3283LL;
	int16_t x4942 = 105;
	static volatile int16_t x4943 = 6;
	uint64_t x4944 = 16672797241819659LLU;
	int32_t t95 = 789;

	t95 = (x4941<((x4942<<x4943)&x4944));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4977 = INT8_MIN;
	static int16_t x4978 = INT16_MAX;
	int32_t x4979 = 2;
	int64_t x4980 = 248329279357197245LL;
	static int32_t t96 = 889;

	t96 = (x4977<((x4978<<x4979)&x4980));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x5021 = 516072204662449202LLU;
	volatile int8_t x5022 = INT8_MAX;
	int32_t x5023 = 1;
	uint16_t x5024 = 2492U;
	volatile int32_t t97 = -255524;

	t97 = (x5021<((x5022<<x5023)&x5024));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5109 = INT16_MAX;
	uint64_t x5110 = 938853LLU;
	static uint32_t x5111 = 44U;
	static volatile int32_t x5112 = INT32_MIN;
	int32_t t98 = -960;

	t98 = (x5109<((x5110<<x5111)&x5112));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5205 = -1LL;
	int32_t x5206 = 741914;
	uint64_t x5207 = 0LLU;
	volatile int8_t x5208 = INT8_MIN;

	t99 = (x5205<((x5206<<x5207)&x5208));

	if (t99 != 1) { NG(); } else { ; }
	
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

