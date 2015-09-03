#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x15 = 0;
static int8_t x16 = INT8_MIN;
volatile int16_t x58 = 0;
static uint64_t x60 = 173619LLU;
static volatile int32_t t1 = 1;
uint16_t x131 = 23U;
int32_t t2 = -62740;
uint8_t x163 = 1U;
int32_t t3 = 1527990;
volatile int32_t x185 = INT32_MAX;
static int8_t x245 = -1;
int32_t x281 = -1;
int32_t t7 = -2454203;
static int64_t x324 = INT64_MAX;
int32_t t12 = 31285;
static uint8_t x505 = 0U;
static volatile int64_t x508 = INT64_MIN;
volatile int32_t t17 = 5112;
static int16_t x826 = 0;
static int8_t x827 = 0;
int64_t x909 = -1LL;
static uint32_t x912 = 3U;
int32_t t22 = -42758492;
volatile uint32_t x1086 = 108338563U;
uint64_t x1090 = 2071193416426192365LLU;
static int64_t x1136 = INT64_MAX;
volatile int32_t t26 = -166266;
uint16_t x1613 = 79U;
uint64_t x1689 = UINT64_MAX;
static uint16_t x1690 = 22U;
uint8_t x1692 = 2U;
volatile int32_t t30 = 2551668;
uint64_t x1729 = UINT64_MAX;
volatile uint32_t x1732 = 117791345U;
static int8_t x1811 = 0;
int32_t x1842 = 10801840;
volatile int16_t x1889 = 454;
volatile int16_t x1892 = -1;
static volatile uint32_t x1990 = 1111U;
static int64_t x2065 = -1LL;
uint8_t x2066 = 1U;
static volatile int32_t t38 = 271373;
int32_t x2248 = INT32_MAX;
int8_t x2272 = -1;
volatile int32_t t40 = 0;
uint32_t x2310 = 12U;
int8_t x2311 = 1;
int64_t x2312 = -1354LL;
static int16_t x2325 = -1;
uint8_t x2432 = 10U;
int32_t t45 = -11862154;
volatile uint32_t x2470 = 200U;
int32_t t46 = 2785526;
int64_t x2496 = 3934267263LL;
uint16_t x2523 = 16U;
int32_t t48 = -910;
volatile int32_t t49 = 176506;
volatile int32_t x2654 = 19321;
volatile uint16_t x2655 = 7U;
uint8_t x2656 = 7U;
volatile int32_t t53 = 1687;
int16_t x3149 = 3719;
volatile int32_t t57 = 3018331;
uint8_t x3263 = 17U;
int32_t t58 = -56;
uint8_t x3394 = 1U;
uint8_t x3406 = 0U;
uint16_t x3490 = 2U;
uint8_t x3526 = 36U;
uint32_t x3570 = 395U;
uint32_t x3571 = 1U;
volatile int32_t t64 = 226551556;
int32_t t65 = -23717345;
int32_t t66 = 493;
uint64_t x3665 = UINT64_MAX;
uint8_t x3667 = 11U;
static int32_t x3677 = INT32_MIN;
int16_t x3737 = INT16_MIN;
int8_t x3740 = INT8_MIN;
uint8_t x4045 = 0U;
int8_t x4046 = INT8_MAX;
uint64_t x4078 = 3842097LLU;
static uint32_t x4160 = 47U;
uint64_t x4230 = 359469884904349LLU;
volatile int32_t x4289 = 1;
int32_t x4373 = 310;
volatile int32_t t79 = 171;
volatile uint16_t x4818 = 3830U;
int16_t x4819 = 5;
volatile int16_t x4865 = 12032;
uint8_t x4867 = 0U;
static int32_t x4868 = INT32_MIN;
static volatile int32_t t86 = -84848;
static uint8_t x5371 = 5U;
volatile int64_t x5377 = -1LL;
int16_t x5419 = 15;
static uint32_t x5453 = 975077321U;
int16_t x5526 = INT16_MAX;
static int64_t x5527 = 0LL;
static int16_t x5528 = INT16_MAX;
static volatile int32_t x5535 = 0;
uint16_t x5560 = UINT16_MAX;
int32_t x5644 = -1;
volatile uint8_t x5723 = 3U;
volatile int32_t t96 = -109;
int32_t x5834 = 10744667;
int32_t t97 = 1476145;
uint8_t x5943 = 12U;


void f0(void) {
	volatile int64_t x13 = -1LL;
	uint32_t x14 = 11268U;
	volatile int32_t t0 = -1138048;

	t0 = (x13<=((x14<<x15)==x16));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x57 = 62124731U;
	int64_t x59 = 4LL;

	t1 = (x57<=((x58<<x59)==x60));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x129 = INT16_MAX;
	static uint8_t x130 = UINT8_MAX;
	volatile uint64_t x132 = 19330256934391LLU;

	t2 = (x129<=((x130<<x131)==x132));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x161 = 6;
	int8_t x162 = 14;
	int32_t x164 = INT32_MAX;

	t3 = (x161<=((x162<<x163)==x164));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x186 = 74U;
	uint64_t x187 = 0LLU;
	static int64_t x188 = -49LL;
	static volatile int32_t t4 = -3167;

	t4 = (x185<=((x186<<x187)==x188));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x246 = 156204692933836686LLU;
	static uint8_t x247 = 56U;
	int32_t x248 = INT32_MAX;
	volatile int32_t t5 = -271872;

	t5 = (x245<=((x246<<x247)==x248));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x257 = INT64_MIN;
	static int64_t x258 = INT64_MAX;
	uint8_t x259 = 0U;
	volatile uint16_t x260 = 739U;
	volatile int32_t t6 = -47587504;

	t6 = (x257<=((x258<<x259)==x260));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x282 = 0;
	int32_t x283 = 1;
	int64_t x284 = INT64_MIN;

	t7 = (x281<=((x282<<x283)==x284));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x321 = -1;
	volatile uint64_t x322 = 8722649476722LLU;
	volatile int16_t x323 = 1;
	volatile int32_t t8 = -38209;

	t8 = (x321<=((x322<<x323)==x324));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x345 = INT32_MIN;
	uint64_t x346 = 26546650149211LLU;
	static uint64_t x347 = 3LLU;
	int64_t x348 = 28945LL;
	static volatile int32_t t9 = 101;

	t9 = (x345<=((x346<<x347)==x348));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x373 = 11494640180411LLU;
	uint8_t x374 = 0U;
	uint32_t x375 = 2U;
	volatile uint64_t x376 = 5027159325093LLU;
	int32_t t10 = -54084;

	t10 = (x373<=((x374<<x375)==x376));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x421 = 8006969U;
	int16_t x422 = 296;
	uint16_t x423 = 15U;
	uint64_t x424 = 19092LLU;
	volatile int32_t t11 = 161;

	t11 = (x421<=((x422<<x423)==x424));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x445 = INT64_MIN;
	volatile uint8_t x446 = 4U;
	volatile uint8_t x447 = 1U;
	volatile int8_t x448 = INT8_MIN;

	t12 = (x445<=((x446<<x447)==x448));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x506 = 0U;
	static uint32_t x507 = 0U;
	volatile int32_t t13 = 118445448;

	t13 = (x505<=((x506<<x507)==x508));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x509 = INT32_MIN;
	int64_t x510 = 186718620LL;
	static uint8_t x511 = 1U;
	int16_t x512 = INT16_MIN;
	static int32_t t14 = -4748573;

	t14 = (x509<=((x510<<x511)==x512));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x577 = INT8_MIN;
	volatile uint64_t x578 = UINT64_MAX;
	uint16_t x579 = 1U;
	volatile int32_t x580 = INT32_MAX;
	int32_t t15 = -10;

	t15 = (x577<=((x578<<x579)==x580));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x585 = INT32_MIN;
	int16_t x586 = 1264;
	static uint16_t x587 = 2U;
	uint16_t x588 = 7830U;
	int32_t t16 = 15952513;

	t16 = (x585<=((x586<<x587)==x588));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x597 = INT32_MAX;
	static uint64_t x598 = 711213752232223241LLU;
	int8_t x599 = 45;
	int64_t x600 = -652415570LL;

	t17 = (x597<=((x598<<x599)==x600));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x645 = -1;
	uint32_t x646 = 219864429U;
	uint16_t x647 = 7U;
	int64_t x648 = -1LL;
	int32_t t18 = -91605822;

	t18 = (x645<=((x646<<x647)==x648));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x757 = 3LL;
	uint16_t x758 = 1793U;
	uint8_t x759 = 15U;
	int64_t x760 = INT64_MIN;
	volatile int32_t t19 = -61053424;

	t19 = (x757<=((x758<<x759)==x760));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x825 = -179;
	int8_t x828 = INT8_MIN;
	static volatile int32_t t20 = 693948;

	t20 = (x825<=((x826<<x827)==x828));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x901 = UINT8_MAX;
	volatile int8_t x902 = 1;
	int8_t x903 = 0;
	int32_t x904 = -1;
	volatile int32_t t21 = 12;

	t21 = (x901<=((x902<<x903)==x904));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x910 = UINT32_MAX;
	static int16_t x911 = 19;

	t22 = (x909<=((x910<<x911)==x912));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1045 = INT64_MIN;
	volatile uint8_t x1046 = UINT8_MAX;
	static uint8_t x1047 = 9U;
	int8_t x1048 = -1;
	volatile int32_t t23 = 12;

	t23 = (x1045<=((x1046<<x1047)==x1048));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1085 = INT16_MIN;
	static volatile int16_t x1087 = 7;
	volatile uint16_t x1088 = UINT16_MAX;
	volatile int32_t t24 = 19;

	t24 = (x1085<=((x1086<<x1087)==x1088));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1089 = -1;
	int8_t x1091 = 0;
	int32_t x1092 = -1;
	int32_t t25 = -6147825;

	t25 = (x1089<=((x1090<<x1091)==x1092));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1133 = INT16_MIN;
	int8_t x1134 = INT8_MAX;
	int8_t x1135 = 0;

	t26 = (x1133<=((x1134<<x1135)==x1136));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1221 = 6702580526278LL;
	volatile uint16_t x1222 = 5542U;
	int8_t x1223 = 16;
	int64_t x1224 = INT64_MAX;
	int32_t t27 = 24658480;

	t27 = (x1221<=((x1222<<x1223)==x1224));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1614 = UINT8_MAX;
	uint8_t x1615 = 1U;
	uint16_t x1616 = 12694U;
	int32_t t28 = 501249;

	t28 = (x1613<=((x1614<<x1615)==x1616));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1657 = UINT32_MAX;
	uint32_t x1658 = UINT32_MAX;
	uint32_t x1659 = 0U;
	int32_t x1660 = INT32_MAX;
	int32_t t29 = -319977;

	t29 = (x1657<=((x1658<<x1659)==x1660));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x1691 = 2U;

	t30 = (x1689<=((x1690<<x1691)==x1692));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1730 = 268U;
	int8_t x1731 = 11;
	volatile int32_t t31 = 14160715;

	t31 = (x1729<=((x1730<<x1731)==x1732));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1793 = UINT64_MAX;
	int16_t x1794 = 22;
	int8_t x1795 = 5;
	static volatile uint32_t x1796 = UINT32_MAX;
	int32_t t32 = -1985180;

	t32 = (x1793<=((x1794<<x1795)==x1796));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1809 = 83U;
	int64_t x1810 = 243085938LL;
	volatile int8_t x1812 = 31;
	int32_t t33 = -75476342;

	t33 = (x1809<=((x1810<<x1811)==x1812));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1841 = INT32_MAX;
	int8_t x1843 = 1;
	static int8_t x1844 = -1;
	volatile int32_t t34 = 11456;

	t34 = (x1841<=((x1842<<x1843)==x1844));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1890 = 1U;
	uint8_t x1891 = 22U;
	volatile int32_t t35 = 5213445;

	t35 = (x1889<=((x1890<<x1891)==x1892));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1989 = UINT8_MAX;
	uint8_t x1991 = 5U;
	static int8_t x1992 = INT8_MIN;
	volatile int32_t t36 = -109;

	t36 = (x1989<=((x1990<<x1991)==x1992));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2067 = 3U;
	int16_t x2068 = INT16_MIN;
	volatile int32_t t37 = 1845;

	t37 = (x2065<=((x2066<<x2067)==x2068));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2101 = -20348;
	uint32_t x2102 = 355411082U;
	uint16_t x2103 = 2U;
	volatile int8_t x2104 = -1;

	t38 = (x2101<=((x2102<<x2103)==x2104));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2245 = INT16_MIN;
	int8_t x2246 = 1;
	int32_t x2247 = 2;
	static volatile int32_t t39 = 222;

	t39 = (x2245<=((x2246<<x2247)==x2248));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2269 = 0;
	int16_t x2270 = INT16_MAX;
	uint8_t x2271 = 9U;

	t40 = (x2269<=((x2270<<x2271)==x2272));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2309 = 22511U;
	volatile int32_t t41 = 13;

	t41 = (x2309<=((x2310<<x2311)==x2312));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2326 = 8U;
	uint16_t x2327 = 3U;
	uint32_t x2328 = 104253690U;
	int32_t t42 = -62013431;

	t42 = (x2325<=((x2326<<x2327)==x2328));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2341 = -1LL;
	volatile uint64_t x2342 = UINT64_MAX;
	uint8_t x2343 = 25U;
	uint16_t x2344 = 14U;
	static int32_t t43 = -4;

	t43 = (x2341<=((x2342<<x2343)==x2344));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2369 = INT64_MAX;
	int64_t x2370 = 8416651666LL;
	uint16_t x2371 = 0U;
	volatile uint8_t x2372 = 2U;
	volatile int32_t t44 = 4186;

	t44 = (x2369<=((x2370<<x2371)==x2372));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2429 = 0U;
	uint16_t x2430 = UINT16_MAX;
	int64_t x2431 = 11LL;

	t45 = (x2429<=((x2430<<x2431)==x2432));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2469 = INT64_MAX;
	uint8_t x2471 = 17U;
	volatile int16_t x2472 = INT16_MIN;

	t46 = (x2469<=((x2470<<x2471)==x2472));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x2493 = 6703LLU;
	uint64_t x2494 = 90LLU;
	uint8_t x2495 = 4U;
	volatile int32_t t47 = -245263227;

	t47 = (x2493<=((x2494<<x2495)==x2496));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2521 = INT16_MIN;
	uint64_t x2522 = 2211911120045LLU;
	static uint32_t x2524 = UINT32_MAX;

	t48 = (x2521<=((x2522<<x2523)==x2524));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2525 = 0U;
	static int32_t x2526 = 3;
	static uint16_t x2527 = 4U;
	static volatile int64_t x2528 = INT64_MAX;

	t49 = (x2525<=((x2526<<x2527)==x2528));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x2553 = 430607471LLU;
	uint8_t x2554 = 19U;
	volatile int8_t x2555 = 1;
	int16_t x2556 = INT16_MIN;
	volatile int32_t t50 = -3;

	t50 = (x2553<=((x2554<<x2555)==x2556));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2621 = INT8_MIN;
	uint64_t x2622 = UINT64_MAX;
	static uint32_t x2623 = 4U;
	volatile uint64_t x2624 = 266173558057190829LLU;
	static volatile int32_t t51 = -426122;

	t51 = (x2621<=((x2622<<x2623)==x2624));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2653 = INT16_MIN;
	volatile int32_t t52 = 410;

	t52 = (x2653<=((x2654<<x2655)==x2656));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2753 = INT8_MIN;
	static volatile int8_t x2754 = INT8_MAX;
	int16_t x2755 = 1;
	static int8_t x2756 = INT8_MIN;

	t53 = (x2753<=((x2754<<x2755)==x2756));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x2777 = 3427365828838LLU;
	uint16_t x2778 = 8163U;
	int8_t x2779 = 1;
	static int8_t x2780 = INT8_MIN;
	int32_t t54 = -170459;

	t54 = (x2777<=((x2778<<x2779)==x2780));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2865 = 3LLU;
	static uint64_t x2866 = 35LLU;
	uint8_t x2867 = 5U;
	uint64_t x2868 = 894405254937LLU;
	volatile int32_t t55 = -15;

	t55 = (x2865<=((x2866<<x2867)==x2868));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3017 = UINT16_MAX;
	int8_t x3018 = INT8_MAX;
	static uint16_t x3019 = 3U;
	int16_t x3020 = 817;
	volatile int32_t t56 = 0;

	t56 = (x3017<=((x3018<<x3019)==x3020));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3150 = INT16_MAX;
	int8_t x3151 = 2;
	volatile int64_t x3152 = INT64_MIN;

	t57 = (x3149<=((x3150<<x3151)==x3152));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3261 = INT16_MAX;
	uint64_t x3262 = 801966LLU;
	int32_t x3264 = -6;

	t58 = (x3261<=((x3262<<x3263)==x3264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3393 = UINT8_MAX;
	volatile uint8_t x3395 = 2U;
	int32_t x3396 = INT32_MAX;
	static volatile int32_t t59 = 829126258;

	t59 = (x3393<=((x3394<<x3395)==x3396));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3405 = -1LL;
	int8_t x3407 = 13;
	int16_t x3408 = INT16_MAX;
	volatile int32_t t60 = -598811068;

	t60 = (x3405<=((x3406<<x3407)==x3408));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3425 = INT32_MIN;
	static int16_t x3426 = INT16_MAX;
	volatile int8_t x3427 = 1;
	int64_t x3428 = INT64_MAX;
	int32_t t61 = -8164359;

	t61 = (x3425<=((x3426<<x3427)==x3428));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3489 = -27;
	uint8_t x3491 = 8U;
	volatile int32_t x3492 = INT32_MIN;
	static int32_t t62 = 124;

	t62 = (x3489<=((x3490<<x3491)==x3492));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x3525 = INT16_MIN;
	uint16_t x3527 = 25U;
	int8_t x3528 = INT8_MAX;
	static volatile int32_t t63 = -507841;

	t63 = (x3525<=((x3526<<x3527)==x3528));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x3569 = 1U;
	int64_t x3572 = -1LL;

	t64 = (x3569<=((x3570<<x3571)==x3572));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3589 = INT64_MIN;
	uint64_t x3590 = 3606936633355LLU;
	uint16_t x3591 = 3U;
	volatile int16_t x3592 = -877;

	t65 = (x3589<=((x3590<<x3591)==x3592));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3609 = -1;
	volatile uint8_t x3610 = 0U;
	uint16_t x3611 = 1U;
	uint16_t x3612 = 50U;

	t66 = (x3609<=((x3610<<x3611)==x3612));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3666 = 43369802U;
	int16_t x3668 = INT16_MIN;
	int32_t t67 = 0;

	t67 = (x3665<=((x3666<<x3667)==x3668));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3678 = 508;
	uint8_t x3679 = 3U;
	static uint16_t x3680 = 33U;
	volatile int32_t t68 = 2356;

	t68 = (x3677<=((x3678<<x3679)==x3680));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3738 = 79063LL;
	uint8_t x3739 = 3U;
	int32_t t69 = 462;

	t69 = (x3737<=((x3738<<x3739)==x3740));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x4047 = 1;
	int8_t x4048 = INT8_MAX;
	int32_t t70 = 55;

	t70 = (x4045<=((x4046<<x4047)==x4048));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4077 = 2870976;
	int8_t x4079 = 1;
	int8_t x4080 = INT8_MIN;
	volatile int32_t t71 = 7243777;

	t71 = (x4077<=((x4078<<x4079)==x4080));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x4085 = 12;
	uint64_t x4086 = UINT64_MAX;
	static uint16_t x4087 = 25U;
	static uint64_t x4088 = 159631445160436LLU;
	int32_t t72 = 2;

	t72 = (x4085<=((x4086<<x4087)==x4088));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4157 = 13U;
	static uint8_t x4158 = 18U;
	static int8_t x4159 = 3;
	volatile int32_t t73 = 16488741;

	t73 = (x4157<=((x4158<<x4159)==x4160));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4177 = -1;
	int32_t x4178 = 92715;
	uint8_t x4179 = 4U;
	int8_t x4180 = INT8_MAX;
	int32_t t74 = 4556059;

	t74 = (x4177<=((x4178<<x4179)==x4180));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x4229 = INT8_MIN;
	int32_t x4231 = 0;
	int8_t x4232 = INT8_MAX;
	volatile int32_t t75 = -52749555;

	t75 = (x4229<=((x4230<<x4231)==x4232));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4290 = 1462U;
	static uint8_t x4291 = 3U;
	int8_t x4292 = INT8_MIN;
	volatile int32_t t76 = 27;

	t76 = (x4289<=((x4290<<x4291)==x4292));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4353 = -50311912LL;
	static uint64_t x4354 = 6616LLU;
	uint8_t x4355 = 30U;
	int32_t x4356 = -1;
	int32_t t77 = 1765;

	t77 = (x4353<=((x4354<<x4355)==x4356));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4357 = -23;
	int16_t x4358 = INT16_MAX;
	volatile uint16_t x4359 = 0U;
	volatile int64_t x4360 = INT64_MIN;
	int32_t t78 = -441;

	t78 = (x4357<=((x4358<<x4359)==x4360));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4374 = 11845U;
	static uint8_t x4375 = 15U;
	int8_t x4376 = -1;

	t79 = (x4373<=((x4374<<x4375)==x4376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4777 = UINT32_MAX;
	uint32_t x4778 = UINT32_MAX;
	int16_t x4779 = 1;
	static volatile int8_t x4780 = -17;
	volatile int32_t t80 = -463997;

	t80 = (x4777<=((x4778<<x4779)==x4780));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4817 = INT8_MAX;
	int32_t x4820 = -18;
	static int32_t t81 = 13;

	t81 = (x4817<=((x4818<<x4819)==x4820));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4866 = INT8_MAX;
	volatile int32_t t82 = -803068;

	t82 = (x4865<=((x4866<<x4867)==x4868));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4905 = UINT16_MAX;
	int32_t x4906 = 5099989;
	uint8_t x4907 = 3U;
	static volatile uint8_t x4908 = 7U;
	volatile int32_t t83 = -820960327;

	t83 = (x4905<=((x4906<<x4907)==x4908));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5005 = UINT32_MAX;
	uint8_t x5006 = UINT8_MAX;
	uint16_t x5007 = 1U;
	int64_t x5008 = INT64_MIN;
	int32_t t84 = -52;

	t84 = (x5005<=((x5006<<x5007)==x5008));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5049 = INT8_MAX;
	uint64_t x5050 = 13865916LLU;
	volatile int8_t x5051 = 1;
	int64_t x5052 = INT64_MIN;
	volatile int32_t t85 = 11988;

	t85 = (x5049<=((x5050<<x5051)==x5052));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x5289 = -11;
	uint8_t x5290 = UINT8_MAX;
	int16_t x5291 = 12;
	int16_t x5292 = INT16_MIN;

	t86 = (x5289<=((x5290<<x5291)==x5292));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5369 = INT16_MIN;
	static uint64_t x5370 = 1180446806823497849LLU;
	uint8_t x5372 = UINT8_MAX;
	int32_t t87 = -52780;

	t87 = (x5369<=((x5370<<x5371)==x5372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5378 = 517233U;
	int32_t x5379 = 24;
	volatile int8_t x5380 = -1;
	int32_t t88 = 10364569;

	t88 = (x5377<=((x5378<<x5379)==x5380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5417 = INT16_MAX;
	static uint64_t x5418 = 92LLU;
	int16_t x5420 = INT16_MAX;
	int32_t t89 = 180888;

	t89 = (x5417<=((x5418<<x5419)==x5420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5454 = 62552LLU;
	uint8_t x5455 = 2U;
	static uint64_t x5456 = 7834750LLU;
	int32_t t90 = 188;

	t90 = (x5453<=((x5454<<x5455)==x5456));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x5525 = 1;
	volatile int32_t t91 = 1;

	t91 = (x5525<=((x5526<<x5527)==x5528));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5533 = 0;
	static uint8_t x5534 = UINT8_MAX;
	volatile int32_t x5536 = INT32_MIN;
	int32_t t92 = 2;

	t92 = (x5533<=((x5534<<x5535)==x5536));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5557 = 3U;
	uint64_t x5558 = UINT64_MAX;
	uint8_t x5559 = 26U;
	int32_t t93 = 10754;

	t93 = (x5557<=((x5558<<x5559)==x5560));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5641 = INT8_MIN;
	uint32_t x5642 = 0U;
	static int8_t x5643 = 25;
	volatile int32_t t94 = -12;

	t94 = (x5641<=((x5642<<x5643)==x5644));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x5721 = 241U;
	volatile uint32_t x5722 = 2514U;
	volatile int32_t x5724 = INT32_MIN;
	volatile int32_t t95 = -9497;

	t95 = (x5721<=((x5722<<x5723)==x5724));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5821 = -551534LL;
	int64_t x5822 = 718864730LL;
	volatile uint16_t x5823 = 1U;
	volatile uint8_t x5824 = 3U;

	t96 = (x5821<=((x5822<<x5823)==x5824));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5833 = 13U;
	int16_t x5835 = 1;
	static uint16_t x5836 = 0U;

	t97 = (x5833<=((x5834<<x5835)==x5836));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x5837 = INT8_MIN;
	static uint8_t x5838 = 3U;
	uint16_t x5839 = 0U;
	int64_t x5840 = INT64_MIN;
	int32_t t98 = -39019626;

	t98 = (x5837<=((x5838<<x5839)==x5840));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x5941 = 0LL;
	uint64_t x5942 = UINT64_MAX;
	uint64_t x5944 = 1865554822517LLU;
	volatile int32_t t99 = -5;

	t99 = (x5941<=((x5942<<x5943)==x5944));

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

