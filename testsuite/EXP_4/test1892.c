#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x23 = -3;
int16_t x133 = 15781;
static volatile int32_t t2 = 4981563;
uint32_t x261 = 1016003U;
uint8_t x263 = 0U;
volatile int8_t x270 = -1;
int16_t x345 = 15;
static int8_t x346 = 0;
uint8_t x348 = 38U;
volatile int32_t t7 = -3386707;
uint32_t x493 = 342925813U;
uint16_t x513 = 58U;
volatile int8_t x735 = INT8_MAX;
volatile int32_t t13 = -610566986;
static volatile int32_t t15 = 1;
static uint8_t x853 = UINT8_MAX;
int32_t x856 = -1;
int32_t x897 = 856276197;
int16_t x898 = -1;
int8_t x974 = 0;
volatile int32_t t19 = 633430968;
int8_t x1005 = INT8_MAX;
int32_t x1020 = -1;
int16_t x1139 = INT16_MIN;
uint64_t x1427 = UINT64_MAX;
uint16_t x1513 = 96U;
uint8_t x1710 = 0U;
int64_t x1715 = INT64_MAX;
int8_t x1716 = INT8_MAX;
int32_t t33 = 1287;
int16_t x1987 = INT16_MIN;
int32_t x2110 = -1;
volatile int64_t x2198 = -1LL;
static volatile int64_t t39 = -52677LL;
int16_t x2279 = 99;
int64_t x2280 = -1LL;
static uint16_t x2385 = 23095U;
static int32_t x2388 = -1;
int32_t t43 = 60581;
static int64_t x2398 = -1LL;
volatile int64_t t44 = -19LL;
int32_t x2471 = INT32_MAX;
static volatile uint32_t x2509 = 470117U;
volatile uint16_t x2632 = 18U;
static uint16_t x2757 = 147U;
int64_t x2758 = -1LL;
int16_t x2762 = 0;
int32_t x2798 = -1;
volatile uint64_t x2853 = UINT64_MAX;
int8_t x2855 = -1;
int32_t x3105 = 568;
int64_t x3139 = -112859231696034LL;
volatile uint32_t t58 = UINT32_MAX;
uint16_t x3577 = 1U;
uint64_t x3578 = UINT64_MAX;
static int32_t t62 = 6251518;
static int8_t x3666 = 0;
uint64_t x3667 = 3LLU;
int16_t x3701 = 4;
volatile int64_t x3702 = -1LL;
static int16_t x3704 = INT16_MAX;
int8_t x3826 = -1;
int16_t x3828 = INT16_MIN;
int32_t t67 = 3;
volatile int32_t x3958 = -7;
int8_t x4038 = -14;
int16_t x4040 = -1;
uint8_t x4197 = 1U;
uint64_t x4266 = UINT64_MAX;
int16_t x4268 = -1;
uint32_t x4409 = UINT32_MAX;
int16_t x4412 = INT16_MIN;
int64_t x4434 = -1LL;
int8_t x4436 = -1;
int8_t x4456 = -1;
uint64_t t77 = 28LLU;
int64_t x4643 = INT64_MIN;
int32_t t79 = 4408;
volatile int64_t x4665 = 80118LL;
volatile uint8_t x4667 = 18U;
volatile int32_t t81 = -13;
static volatile int16_t x5174 = -1;
volatile int32_t t82 = 3674872;
volatile int16_t x5324 = INT16_MIN;
uint8_t x5326 = 0U;
int16_t x5333 = 379;
uint8_t x5335 = 3U;
uint16_t x5341 = 31397U;
static uint32_t x5425 = 15U;
static uint64_t x5427 = 22142285LLU;
int64_t x5428 = -1LL;
static volatile uint32_t t88 = 2U;
static int64_t x5514 = -1LL;
int8_t x5541 = INT8_MAX;
int8_t x5542 = -8;
volatile uint32_t x5544 = UINT32_MAX;
static int8_t x5558 = -18;
int64_t x5559 = INT64_MIN;
int64_t x5565 = INT64_MAX;
volatile int32_t x5678 = -1;
volatile int8_t x5679 = -1;
volatile uint32_t t95 = 28324956U;
uint8_t x5881 = 58U;
volatile int16_t x5882 = -1;
static int64_t x5884 = INT64_MIN;
int64_t x5919 = -1LL;
uint16_t x5957 = 4238U;
static uint32_t x5959 = UINT32_MAX;
int32_t t99 = -2;


void f0(void) {
	uint8_t x21 = 65U;
	int64_t x22 = -1LL;
	volatile int64_t x24 = -13898496098LL;
	volatile int32_t t0 = -1934;

	t0 = (x21>>(x22*(x23|x24)));

	if (t0 != 32) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x134 = 0;
	static int8_t x135 = INT8_MIN;
	static int64_t x136 = INT64_MIN;
	static volatile int32_t t1 = 6;

	t1 = (x133>>(x134*(x135|x136)));

	if (t1 != 15781) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x141 = UINT8_MAX;
	static int16_t x142 = -1;
	uint16_t x143 = UINT16_MAX;
	int8_t x144 = -19;

	t2 = (x141>>(x142*(x143|x144)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x262 = 19U;
	int8_t x264 = 0;
	volatile uint32_t t3 = 1586U;

	t3 = (x261>>(x262*(x263|x264)));

	if (t3 != 1016003U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x269 = 13;
	volatile uint64_t x271 = UINT64_MAX;
	static int64_t x272 = INT64_MIN;
	static int32_t t4 = 13166;

	t4 = (x269>>(x270*(x271|x272)));

	if (t4 != 6) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x293 = 3509665687242477452LLU;
	static int16_t x294 = 0;
	int16_t x295 = INT16_MAX;
	static uint16_t x296 = UINT16_MAX;
	volatile uint64_t t5 = 6779984404920721157LLU;

	t5 = (x293>>(x294*(x295|x296)));

	if (t5 != 3509665687242477452LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x309 = 65U;
	volatile int32_t x310 = -1;
	volatile int64_t x311 = INT64_MAX;
	int8_t x312 = -7;
	volatile uint32_t t6 = 426U;

	t6 = (x309>>(x310*(x311|x312)));

	if (t6 != 32U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x347 = 500220996U;

	t7 = (x345>>(x346*(x347|x348)));

	if (t7 != 15) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x381 = 8915;
	int64_t x382 = -1LL;
	int64_t x383 = -1LL;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t8 = -47;

	t8 = (x381>>(x382*(x383|x384)));

	if (t8 != 4457) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x494 = UINT64_MAX;
	int64_t x495 = INT64_MAX;
	int64_t x496 = INT64_MIN;
	volatile uint32_t t9 = 175U;

	t9 = (x493>>(x494*(x495|x496)));

	if (t9 != 171462906U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x514 = -1;
	static int16_t x515 = -1;
	static volatile uint16_t x516 = UINT16_MAX;
	volatile int32_t t10 = 0;

	t10 = (x513>>(x514*(x515|x516)));

	if (t10 != 29) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x521 = INT8_MAX;
	int32_t x522 = -1;
	int64_t x523 = -1LL;
	int8_t x524 = INT8_MIN;
	static volatile int32_t t11 = -9117245;

	t11 = (x521>>(x522*(x523|x524)));

	if (t11 != 63) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x541 = 2414LLU;
	int8_t x542 = -14;
	int32_t x543 = -2225937;
	int8_t x544 = -1;
	volatile uint64_t t12 = 268434640745009221LLU;

	t12 = (x541>>(x542*(x543|x544)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x733 = 54U;
	int64_t x734 = -1LL;
	int16_t x736 = -1;

	t13 = (x733>>(x734*(x735|x736)));

	if (t13 != 27) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x813 = 3U;
	uint64_t x814 = UINT64_MAX;
	int32_t x815 = -1;
	uint8_t x816 = 28U;
	int32_t t14 = 37947;

	t14 = (x813>>(x814*(x815|x816)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x829 = 17148016;
	uint64_t x830 = UINT64_MAX;
	volatile int16_t x831 = INT16_MAX;
	int8_t x832 = -1;

	t15 = (x829>>(x830*(x831|x832)));

	if (t15 != 8574008) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x837 = INT32_MAX;
	uint8_t x838 = 0U;
	int8_t x839 = 2;
	uint16_t x840 = UINT16_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x837>>(x838*(x839|x840)));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x854 = UINT64_MAX;
	uint8_t x855 = UINT8_MAX;
	static int32_t t17 = 184;

	t17 = (x853>>(x854*(x855|x856)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x899 = UINT64_MAX;
	uint16_t x900 = 8103U;
	volatile int32_t t18 = -812;

	t18 = (x897>>(x898*(x899|x900)));

	if (t18 != 428138098) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x973 = 1U;
	static int64_t x975 = -87648308207231063LL;
	int32_t x976 = INT32_MIN;

	t19 = (x973>>(x974*(x975|x976)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1006 = -1;
	volatile uint64_t x1007 = UINT64_MAX;
	uint8_t x1008 = UINT8_MAX;
	int32_t t20 = -49888;

	t20 = (x1005>>(x1006*(x1007|x1008)));

	if (t20 != 63) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x1017 = 2U;
	int32_t x1018 = -1;
	int8_t x1019 = INT8_MIN;
	volatile int32_t t21 = 60785;

	t21 = (x1017>>(x1018*(x1019|x1020)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1109 = 49852U;
	int16_t x1110 = -1;
	volatile uint32_t x1111 = UINT32_MAX;
	int8_t x1112 = -12;
	volatile uint32_t t22 = 1079U;

	t22 = (x1109>>(x1110*(x1111|x1112)));

	if (t22 != 24926U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1137 = 58;
	uint64_t x1138 = UINT64_MAX;
	static int64_t x1140 = INT64_MAX;
	volatile int32_t t23 = 30186;

	t23 = (x1137>>(x1138*(x1139|x1140)));

	if (t23 != 29) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1177 = 5;
	int8_t x1178 = -1;
	uint32_t x1179 = UINT32_MAX;
	static uint16_t x1180 = UINT16_MAX;
	volatile int32_t t24 = -250;

	t24 = (x1177>>(x1178*(x1179|x1180)));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1213 = UINT32_MAX;
	volatile int8_t x1214 = 0;
	static int16_t x1215 = 51;
	uint32_t x1216 = 216U;
	static uint32_t t25 = UINT32_MAX;

	t25 = (x1213>>(x1214*(x1215|x1216)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1245 = 84673938596LLU;
	volatile uint8_t x1246 = 0U;
	uint16_t x1247 = 30178U;
	volatile int64_t x1248 = INT64_MIN;
	uint64_t t26 = 2194391290261595563LLU;

	t26 = (x1245>>(x1246*(x1247|x1248)));

	if (t26 != 84673938596LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x1425 = 4850U;
	static int32_t x1426 = -29;
	int32_t x1428 = -1;
	volatile int32_t t27 = 31153875;

	t27 = (x1425>>(x1426*(x1427|x1428)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1485 = 0U;
	uint64_t x1486 = 0LLU;
	uint8_t x1487 = 0U;
	int32_t x1488 = INT32_MIN;
	volatile int32_t t28 = 349778774;

	t28 = (x1485>>(x1486*(x1487|x1488)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1514 = 0;
	int8_t x1515 = INT8_MIN;
	int16_t x1516 = 8;
	volatile int32_t t29 = 16756;

	t29 = (x1513>>(x1514*(x1515|x1516)));

	if (t29 != 96) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1569 = 1U;
	volatile int8_t x1570 = -6;
	int8_t x1571 = -43;
	uint8_t x1572 = 122U;
	int32_t t30 = -7163612;

	t30 = (x1569>>(x1570*(x1571|x1572)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1645 = INT8_MAX;
	volatile int8_t x1646 = -1;
	uint64_t x1647 = 103LLU;
	int8_t x1648 = -1;
	volatile int32_t t31 = -31050;

	t31 = (x1645>>(x1646*(x1647|x1648)));

	if (t31 != 63) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1709 = 6785U;
	uint8_t x1711 = 44U;
	volatile uint64_t x1712 = 52713975LLU;
	static volatile int32_t t32 = 10;

	t32 = (x1709>>(x1710*(x1711|x1712)));

	if (t32 != 6785) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x1713 = 4U;
	uint8_t x1714 = 0U;

	t33 = (x1713>>(x1714*(x1715|x1716)));

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1741 = UINT32_MAX;
	static int8_t x1742 = -1;
	int16_t x1743 = -10447;
	volatile uint16_t x1744 = UINT16_MAX;
	static uint32_t t34 = 17U;

	t34 = (x1741>>(x1742*(x1743|x1744)));

	if (t34 != 2147483647U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1841 = UINT32_MAX;
	volatile int16_t x1842 = -1;
	volatile int64_t x1843 = INT64_MAX;
	int32_t x1844 = INT32_MIN;
	volatile uint32_t t35 = 87U;

	t35 = (x1841>>(x1842*(x1843|x1844)));

	if (t35 != 2147483647U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x1985 = UINT16_MAX;
	static int8_t x1986 = -1;
	static uint32_t x1988 = UINT32_MAX;
	int32_t t36 = -2180704;

	t36 = (x1985>>(x1986*(x1987|x1988)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2001 = 16;
	volatile uint64_t x2002 = UINT64_MAX;
	static int32_t x2003 = -1;
	int32_t x2004 = -1;
	static int32_t t37 = 1491;

	t37 = (x2001>>(x2002*(x2003|x2004)));

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2109 = 86082523406LLU;
	volatile int32_t x2111 = -14;
	int64_t x2112 = 109601342497LL;
	uint64_t t38 = 3388052508104064LLU;

	t38 = (x2109>>(x2110*(x2111|x2112)));

	if (t38 != 10508120LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2197 = 1042LL;
	int8_t x2199 = -1;
	volatile uint64_t x2200 = 670LLU;

	t39 = (x2197>>(x2198*(x2199|x2200)));

	if (t39 != 521LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2225 = INT8_MAX;
	volatile int8_t x2226 = 0;
	volatile int8_t x2227 = INT8_MAX;
	uint16_t x2228 = UINT16_MAX;
	int32_t t40 = -402;

	t40 = (x2225>>(x2226*(x2227|x2228)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2229 = 150040U;
	int32_t x2230 = -1;
	int16_t x2231 = -1;
	static volatile int8_t x2232 = INT8_MAX;
	volatile uint32_t t41 = 795356U;

	t41 = (x2229>>(x2230*(x2231|x2232)));

	if (t41 != 75020U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2277 = 27U;
	static int16_t x2278 = -1;
	int32_t t42 = 5383798;

	t42 = (x2277>>(x2278*(x2279|x2280)));

	if (t42 != 13) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2386 = -1;
	int32_t x2387 = INT32_MIN;

	t43 = (x2385>>(x2386*(x2387|x2388)));

	if (t43 != 11547) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x2397 = INT64_MAX;
	uint32_t x2399 = 641U;
	volatile uint64_t x2400 = UINT64_MAX;

	t44 = (x2397>>(x2398*(x2399|x2400)));

	if (t44 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2465 = 1;
	int8_t x2466 = -14;
	int8_t x2467 = -1;
	volatile int32_t x2468 = -1;
	int32_t t45 = 798670;

	t45 = (x2465>>(x2466*(x2467|x2468)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2469 = 13;
	static int64_t x2470 = -1LL;
	int32_t x2472 = INT32_MIN;
	volatile int32_t t46 = -911479;

	t46 = (x2469>>(x2470*(x2471|x2472)));

	if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2510 = 0;
	volatile int32_t x2511 = INT32_MIN;
	uint16_t x2512 = 1126U;
	volatile uint32_t t47 = 10U;

	t47 = (x2509>>(x2510*(x2511|x2512)));

	if (t47 != 470117U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x2629 = 3283039973LL;
	static int16_t x2630 = -18;
	int8_t x2631 = -19;
	int64_t t48 = 4711LL;

	t48 = (x2629>>(x2630*(x2631|x2632)));

	if (t48 != 12523LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x2759 = -64;
	uint64_t x2760 = UINT64_MAX;
	int32_t t49 = 1;

	t49 = (x2757>>(x2758*(x2759|x2760)));

	if (t49 != 73) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2761 = 2;
	int16_t x2763 = INT16_MIN;
	int64_t x2764 = INT64_MIN;
	volatile int32_t t50 = -22698484;

	t50 = (x2761>>(x2762*(x2763|x2764)));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2797 = UINT64_MAX;
	int64_t x2799 = -1LL;
	uint64_t x2800 = 30648414LLU;
	uint64_t t51 = 1714105972975LLU;

	t51 = (x2797>>(x2798*(x2799|x2800)));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2801 = 445556U;
	static int8_t x2802 = -1;
	static int32_t x2803 = -1;
	int64_t x2804 = INT64_MIN;
	uint32_t t52 = 3U;

	t52 = (x2801>>(x2802*(x2803|x2804)));

	if (t52 != 222778U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2849 = 2141399429203LLU;
	uint8_t x2850 = 0U;
	static volatile int8_t x2851 = -30;
	static int8_t x2852 = 1;
	uint64_t t53 = 4831993862327049114LLU;

	t53 = (x2849>>(x2850*(x2851|x2852)));

	if (t53 != 2141399429203LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2854 = -1;
	static volatile int32_t x2856 = INT32_MIN;
	volatile uint64_t t54 = 27309LLU;

	t54 = (x2853>>(x2854*(x2855|x2856)));

	if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3009 = 416599093LLU;
	int8_t x3010 = 0;
	uint16_t x3011 = UINT16_MAX;
	volatile int64_t x3012 = INT64_MIN;
	uint64_t t55 = 1015878LLU;

	t55 = (x3009>>(x3010*(x3011|x3012)));

	if (t55 != 416599093LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x3106 = -1LL;
	volatile uint64_t x3107 = 452LLU;
	static int8_t x3108 = -2;
	int32_t t56 = 418536745;

	t56 = (x3105>>(x3106*(x3107|x3108)));

	if (t56 != 142) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3137 = INT32_MAX;
	uint8_t x3138 = 0U;
	int8_t x3140 = 2;
	static int32_t t57 = INT32_MAX;

	t57 = (x3137>>(x3138*(x3139|x3140)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3245 = UINT32_MAX;
	int32_t x3246 = 0;
	int64_t x3247 = INT64_MAX;
	volatile int8_t x3248 = INT8_MIN;

	t58 = (x3245>>(x3246*(x3247|x3248)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x3273 = 93U;
	static volatile int64_t x3274 = -1LL;
	static uint64_t x3275 = UINT64_MAX;
	static volatile int32_t x3276 = INT32_MIN;
	volatile int32_t t59 = 160530362;

	t59 = (x3273>>(x3274*(x3275|x3276)));

	if (t59 != 46) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3337 = UINT16_MAX;
	int16_t x3338 = -1;
	int32_t x3339 = -1;
	int8_t x3340 = -1;
	int32_t t60 = 117179304;

	t60 = (x3337>>(x3338*(x3339|x3340)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3473 = 16357965U;
	int16_t x3474 = -1;
	int8_t x3475 = -5;
	static int8_t x3476 = INT8_MAX;
	static volatile uint32_t t61 = 180769U;

	t61 = (x3473>>(x3474*(x3475|x3476)));

	if (t61 != 8178982U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x3579 = -1LL;
	int16_t x3580 = 1182;

	t62 = (x3577>>(x3578*(x3579|x3580)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x3665 = 61303657U;
	volatile int32_t x3668 = INT32_MAX;
	uint32_t t63 = 2106417679U;

	t63 = (x3665>>(x3666*(x3667|x3668)));

	if (t63 != 61303657U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3703 = INT8_MIN;
	int32_t t64 = 275399916;

	t64 = (x3701>>(x3702*(x3703|x3704)));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x3745 = 60947938319697LLU;
	static uint32_t x3746 = 0U;
	static int32_t x3747 = INT32_MIN;
	volatile uint8_t x3748 = UINT8_MAX;
	volatile uint64_t t65 = 21LLU;

	t65 = (x3745>>(x3746*(x3747|x3748)));

	if (t65 != 60947938319697LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3825 = UINT8_MAX;
	int16_t x3827 = INT16_MAX;
	int32_t t66 = 106894348;

	t66 = (x3825>>(x3826*(x3827|x3828)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3849 = UINT16_MAX;
	int8_t x3850 = -1;
	int64_t x3851 = -1LL;
	uint16_t x3852 = 36U;

	t67 = (x3849>>(x3850*(x3851|x3852)));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3929 = 47358;
	static int8_t x3930 = 0;
	int64_t x3931 = INT64_MIN;
	int16_t x3932 = -1;
	volatile int32_t t68 = -43292;

	t68 = (x3929>>(x3930*(x3931|x3932)));

	if (t68 != 47358) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3957 = 0;
	volatile int8_t x3959 = -1;
	int64_t x3960 = 2LL;
	volatile int32_t t69 = 582278;

	t69 = (x3957>>(x3958*(x3959|x3960)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x4037 = UINT64_MAX;
	volatile uint16_t x4039 = UINT16_MAX;
	uint64_t t70 = 0LLU;

	t70 = (x4037>>(x4038*(x4039|x4040)));

	if (t70 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4053 = INT16_MAX;
	volatile int32_t x4054 = 0;
	int32_t x4055 = INT32_MIN;
	volatile int16_t x4056 = -5816;
	static volatile int32_t t71 = -722332;

	t71 = (x4053>>(x4054*(x4055|x4056)));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x4198 = INT32_MIN;
	volatile uint32_t x4199 = 1800788U;
	volatile int32_t x4200 = INT32_MIN;
	volatile int32_t t72 = -389;

	t72 = (x4197>>(x4198*(x4199|x4200)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4265 = UINT8_MAX;
	int8_t x4267 = INT8_MIN;
	int32_t t73 = 65127801;

	t73 = (x4265>>(x4266*(x4267|x4268)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4410 = UINT64_MAX;
	int8_t x4411 = -1;
	volatile uint32_t t74 = 256866103U;

	t74 = (x4409>>(x4410*(x4411|x4412)));

	if (t74 != 2147483647U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x4433 = 4891085960LL;
	volatile int32_t x4435 = -30591;
	volatile int64_t t75 = -264802382LL;

	t75 = (x4433>>(x4434*(x4435|x4436)));

	if (t75 != 2445542980LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x4453 = 4U;
	volatile int8_t x4454 = -12;
	int16_t x4455 = -14;
	volatile int32_t t76 = 114168950;

	t76 = (x4453>>(x4454*(x4455|x4456)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4505 = UINT64_MAX;
	static int16_t x4506 = -1;
	uint16_t x4507 = 7662U;
	uint64_t x4508 = UINT64_MAX;

	t77 = (x4505>>(x4506*(x4507|x4508)));

	if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x4601 = 781LL;
	int8_t x4602 = -4;
	static int64_t x4603 = INT64_MIN;
	int64_t x4604 = INT64_MAX;
	int64_t t78 = -15LL;

	t78 = (x4601>>(x4602*(x4603|x4604)));

	if (t78 != 48LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x4641 = 6U;
	volatile uint8_t x4642 = 0U;
	volatile int16_t x4644 = 5;

	t79 = (x4641>>(x4642*(x4643|x4644)));

	if (t79 != 6) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4666 = -1;
	uint32_t x4668 = UINT32_MAX;
	int64_t t80 = 12LL;

	t80 = (x4665>>(x4666*(x4667|x4668)));

	if (t80 != 40059LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x4909 = 4U;
	static int8_t x4910 = 0;
	static int32_t x4911 = 0;
	volatile uint8_t x4912 = 3U;

	t81 = (x4909>>(x4910*(x4911|x4912)));

	if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5173 = UINT16_MAX;
	uint32_t x5175 = UINT32_MAX;
	int32_t x5176 = INT32_MIN;

	t82 = (x5173>>(x5174*(x5175|x5176)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5197 = UINT16_MAX;
	volatile int32_t x5198 = -1;
	int8_t x5199 = INT8_MIN;
	volatile uint16_t x5200 = UINT16_MAX;
	volatile int32_t t83 = 1;

	t83 = (x5197>>(x5198*(x5199|x5200)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5321 = INT16_MAX;
	volatile int64_t x5322 = -1LL;
	int32_t x5323 = -1;
	volatile int32_t t84 = 31;

	t84 = (x5321>>(x5322*(x5323|x5324)));

	if (t84 != 16383) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x5325 = 22U;
	int16_t x5327 = -1;
	volatile int8_t x5328 = -3;
	static int32_t t85 = 215801;

	t85 = (x5325>>(x5326*(x5327|x5328)));

	if (t85 != 22) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5334 = -1;
	uint64_t x5336 = UINT64_MAX;
	volatile int32_t t86 = 103;

	t86 = (x5333>>(x5334*(x5335|x5336)));

	if (t86 != 189) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5342 = -2;
	uint32_t x5343 = 81U;
	uint32_t x5344 = UINT32_MAX;
	int32_t t87 = -32;

	t87 = (x5341>>(x5342*(x5343|x5344)));

	if (t87 != 7849) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x5426 = -4;

	t88 = (x5425>>(x5426*(x5427|x5428)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5513 = 4892153383762137LL;
	int16_t x5515 = -1;
	int16_t x5516 = INT16_MAX;
	volatile int64_t t89 = 4LL;

	t89 = (x5513>>(x5514*(x5515|x5516)));

	if (t89 != 2446076691881068LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x5543 = -3;
	int32_t t90 = -6671;

	t90 = (x5541>>(x5542*(x5543|x5544)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5557 = 46475U;
	volatile int8_t x5560 = -1;
	uint32_t t91 = 3U;

	t91 = (x5557>>(x5558*(x5559|x5560)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5566 = 0;
	volatile uint32_t x5567 = UINT32_MAX;
	static uint8_t x5568 = 41U;
	static int64_t t92 = INT64_MAX;

	t92 = (x5565>>(x5566*(x5567|x5568)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5637 = 29805941194469658LL;
	int32_t x5638 = -8;
	int64_t x5639 = INT64_MAX;
	static volatile uint64_t x5640 = 247LLU;
	volatile int64_t t93 = -439LL;

	t93 = (x5637>>(x5638*(x5639|x5640)));

	if (t93 != 116429457790897LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5677 = 0;
	int16_t x5680 = INT16_MIN;
	int32_t t94 = -16;

	t94 = (x5677>>(x5678*(x5679|x5680)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5713 = 469781U;
	static uint64_t x5714 = UINT64_MAX;
	uint64_t x5715 = UINT64_MAX;
	volatile int32_t x5716 = INT32_MIN;

	t95 = (x5713>>(x5714*(x5715|x5716)));

	if (t95 != 234890U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5883 = -1LL;
	volatile int32_t t96 = -23;

	t96 = (x5881>>(x5882*(x5883|x5884)));

	if (t96 != 29) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x5905 = 806U;
	uint8_t x5906 = 0U;
	int32_t x5907 = INT32_MIN;
	volatile int32_t x5908 = -57031;
	uint32_t t97 = 324461U;

	t97 = (x5905>>(x5906*(x5907|x5908)));

	if (t97 != 806U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5917 = 5805436U;
	int32_t x5918 = -1;
	static int8_t x5920 = -1;
	uint32_t t98 = 1051239U;

	t98 = (x5917>>(x5918*(x5919|x5920)));

	if (t98 != 2902718U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5958 = 0U;
	uint16_t x5960 = UINT16_MAX;

	t99 = (x5957>>(x5958*(x5959|x5960)));

	if (t99 != 4238) { NG(); } else { ; }
	
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

