#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x28 = -1;
volatile int32_t t1 = 120128;
int8_t x88 = INT8_MAX;
static volatile int32_t t3 = 3;
static int8_t x131 = -1;
int32_t x132 = -53316918;
int64_t x159 = -30446099LL;
volatile int8_t x297 = 1;
uint16_t x300 = 77U;
static uint16_t x514 = 3U;
int64_t x516 = INT64_MAX;
uint64_t x559 = 7964090927203LLU;
uint64_t x560 = 207650868397090LLU;
int32_t t9 = 873;
uint8_t x650 = 54U;
int8_t x651 = 48;
int16_t x742 = 0;
static volatile uint8_t x743 = 1U;
uint8_t x769 = 46U;
int8_t x854 = 5;
uint64_t x998 = 0LLU;
uint32_t x999 = 42U;
volatile int8_t x1157 = 31;
volatile uint64_t x1469 = 162379846LLU;
static uint16_t x1522 = 7U;
uint64_t x1813 = 29080013LLU;
uint8_t x1815 = 13U;
volatile int32_t x1907 = INT32_MIN;
uint32_t x1908 = UINT32_MAX;
volatile uint16_t x1949 = 648U;
int32_t t29 = -7;
volatile int32_t t31 = -1;
static volatile int32_t t33 = 24279710;
volatile uint16_t x2237 = 51U;
uint32_t x2238 = 5U;
static int8_t x2239 = 2;
static uint16_t x2292 = 91U;
uint32_t x2369 = 2797817U;
uint16_t x2379 = 6448U;
int8_t x2380 = 0;
int16_t x2679 = -7710;
volatile uint8_t x2857 = 7U;
static uint16_t x2858 = 0U;
int64_t x3169 = 6522LL;
int8_t x3171 = -1;
volatile int32_t x3435 = INT32_MAX;
volatile int32_t t48 = 15;
int32_t t49 = 3108;
uint16_t x3602 = 1U;
volatile int32_t t52 = 6036244;
int8_t x3638 = 0;
uint16_t x3640 = UINT16_MAX;
int8_t x3729 = 50;
volatile int32_t x3731 = -15;
uint8_t x3942 = 8U;
static int16_t x3943 = INT16_MIN;
static volatile int8_t x4002 = 0;
int32_t t58 = 14266;
int16_t x4169 = 247;
static int32_t x4172 = -1;
uint8_t x4318 = 5U;
volatile uint64_t x4401 = 3949534LLU;
int64_t x4424 = INT64_MIN;
static volatile uint64_t x4453 = 2612356124725267LLU;
uint8_t x4510 = 3U;
int8_t x4563 = -1;
int8_t x4659 = -1;
int8_t x4720 = -1;
uint32_t x4737 = 3301603U;
static volatile int8_t x4846 = 0;
volatile int32_t t73 = 1;
uint64_t x5045 = UINT64_MAX;
uint8_t x5143 = 51U;
int32_t t78 = 115597592;
static int32_t x5167 = INT32_MAX;
int16_t x5168 = -18;
int32_t x5231 = -1;
int32_t t81 = -29;
int32_t t82 = -128200338;
int8_t x5346 = 0;
uint16_t x5350 = 23U;
uint16_t x5351 = 465U;
int16_t x5352 = INT16_MAX;
uint8_t x5362 = 0U;
static volatile int16_t x5371 = INT16_MAX;
int8_t x5372 = INT8_MAX;
int16_t x5464 = 2917;
int32_t x5488 = -1;
int32_t t90 = 100086716;
int16_t x5606 = 8;
static uint16_t x5608 = 2611U;
int64_t x5634 = 0LL;
int8_t x5796 = 2;
volatile int32_t t96 = 28387;
uint8_t x6104 = 86U;


void f0(void) {
	uint16_t x25 = UINT16_MAX;
	uint16_t x26 = 1U;
	volatile int8_t x27 = 1;
	int32_t t0 = 952825675;

	t0 = ((x25<<x26)<(x27==x28));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = 14;
	static uint64_t x39 = UINT64_MAX;
	static int64_t x40 = -86799538LL;

	t1 = ((x37<<x38)<(x39==x40));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x85 = 490080647791LLU;
	uint16_t x86 = 19U;
	int16_t x87 = -3785;
	static int32_t t2 = -12584;

	t2 = ((x85<<x86)<(x87==x88));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x125 = 4090U;
	uint8_t x126 = 30U;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MAX;

	t3 = ((x125<<x126)<(x127==x128));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x129 = 238;
	static int16_t x130 = 1;
	int32_t t4 = 4398780;

	t4 = ((x129<<x130)<(x131==x132));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x157 = 18U;
	uint8_t x158 = 1U;
	static volatile int16_t x160 = INT16_MIN;
	int32_t t5 = 474579452;

	t5 = ((x157<<x158)<(x159==x160));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x298 = 2U;
	int32_t x299 = -8265360;
	int32_t t6 = -135048695;

	t6 = ((x297<<x298)<(x299==x300));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x317 = 156LLU;
	static int64_t x318 = 1LL;
	int64_t x319 = -1LL;
	int16_t x320 = -2;
	int32_t t7 = 297501;

	t7 = ((x317<<x318)<(x319==x320));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x513 = UINT8_MAX;
	static int64_t x515 = INT64_MIN;
	static int32_t t8 = 1036;

	t8 = ((x513<<x514)<(x515==x516));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x557 = UINT64_MAX;
	static volatile int32_t x558 = 25;

	t9 = ((x557<<x558)<(x559==x560));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x649 = 488542154LLU;
	int32_t x652 = 75540;
	int32_t t10 = -233;

	t10 = ((x649<<x650)<(x651==x652));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x741 = UINT64_MAX;
	int16_t x744 = -1;
	volatile int32_t t11 = -380919153;

	t11 = ((x741<<x742)<(x743==x744));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x770 = 10U;
	int64_t x771 = -5LL;
	static uint16_t x772 = 863U;
	volatile int32_t t12 = -10283;

	t12 = ((x769<<x770)<(x771==x772));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x853 = 806835333689821LLU;
	uint64_t x855 = 125665106752LLU;
	int8_t x856 = 1;
	int32_t t13 = 15265;

	t13 = ((x853<<x854)<(x855==x856));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x997 = 287776507LLU;
	volatile uint64_t x1000 = UINT64_MAX;
	int32_t t14 = 988;

	t14 = ((x997<<x998)<(x999==x1000));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x1041 = UINT8_MAX;
	uint16_t x1042 = 11U;
	int64_t x1043 = INT64_MIN;
	int32_t x1044 = INT32_MIN;
	volatile int32_t t15 = 3;

	t15 = ((x1041<<x1042)<(x1043==x1044));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1158 = 7;
	volatile uint32_t x1159 = 1802U;
	uint16_t x1160 = 277U;
	int32_t t16 = 149391190;

	t16 = ((x1157<<x1158)<(x1159==x1160));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1185 = 0;
	int8_t x1186 = 1;
	static int16_t x1187 = -1;
	static volatile int32_t x1188 = -1;
	static volatile int32_t t17 = 17091924;

	t17 = ((x1185<<x1186)<(x1187==x1188));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1369 = UINT8_MAX;
	int8_t x1370 = 0;
	int64_t x1371 = INT64_MIN;
	static volatile uint32_t x1372 = 19U;
	static int32_t t18 = -6793;

	t18 = ((x1369<<x1370)<(x1371==x1372));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1397 = UINT32_MAX;
	uint8_t x1398 = 14U;
	int64_t x1399 = -1LL;
	volatile int16_t x1400 = INT16_MAX;
	int32_t t19 = 111095405;

	t19 = ((x1397<<x1398)<(x1399==x1400));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1445 = INT8_MAX;
	uint8_t x1446 = 0U;
	int32_t x1447 = 160724577;
	static uint32_t x1448 = UINT32_MAX;
	static int32_t t20 = -8181;

	t20 = ((x1445<<x1446)<(x1447==x1448));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1470 = 0U;
	static volatile int64_t x1471 = 12656802727654265LL;
	int64_t x1472 = -10833590LL;
	int32_t t21 = 35729;

	t21 = ((x1469<<x1470)<(x1471==x1472));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1473 = 561140747LL;
	int8_t x1474 = 10;
	int64_t x1475 = INT64_MAX;
	uint32_t x1476 = 249U;
	volatile int32_t t22 = 659;

	t22 = ((x1473<<x1474)<(x1475==x1476));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1521 = 2019;
	int16_t x1523 = 3685;
	volatile int64_t x1524 = INT64_MIN;
	int32_t t23 = -199854;

	t23 = ((x1521<<x1522)<(x1523==x1524));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1557 = 26U;
	int8_t x1558 = 12;
	volatile uint16_t x1559 = 7800U;
	int32_t x1560 = 7252437;
	int32_t t24 = 868706;

	t24 = ((x1557<<x1558)<(x1559==x1560));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1633 = 196955135LLU;
	int32_t x1634 = 53;
	int8_t x1635 = INT8_MIN;
	int8_t x1636 = -7;
	volatile int32_t t25 = 37293;

	t25 = ((x1633<<x1634)<(x1635==x1636));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1814 = 0LL;
	uint8_t x1816 = 19U;
	static volatile int32_t t26 = 269913366;

	t26 = ((x1813<<x1814)<(x1815==x1816));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1901 = INT8_MAX;
	volatile uint8_t x1902 = 0U;
	uint8_t x1903 = 26U;
	int16_t x1904 = 45;
	volatile int32_t t27 = 1066;

	t27 = ((x1901<<x1902)<(x1903==x1904));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1905 = 16648U;
	volatile uint8_t x1906 = 0U;
	int32_t t28 = -662473;

	t28 = ((x1905<<x1906)<(x1907==x1908));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1950 = 0;
	static uint32_t x1951 = 255U;
	volatile int8_t x1952 = -1;

	t29 = ((x1949<<x1950)<(x1951==x1952));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2005 = 332U;
	volatile uint8_t x2006 = 1U;
	volatile int32_t x2007 = -1;
	int64_t x2008 = 0LL;
	volatile int32_t t30 = -133341;

	t30 = ((x2005<<x2006)<(x2007==x2008));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x2089 = 0U;
	static volatile uint8_t x2090 = 22U;
	int32_t x2091 = INT32_MIN;
	static int16_t x2092 = 12778;

	t31 = ((x2089<<x2090)<(x2091==x2092));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2101 = INT16_MAX;
	static uint16_t x2102 = 8U;
	int64_t x2103 = INT64_MIN;
	int8_t x2104 = -1;
	static int32_t t32 = -428652;

	t32 = ((x2101<<x2102)<(x2103==x2104));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2157 = 940;
	static int16_t x2158 = 4;
	uint32_t x2159 = 1U;
	uint16_t x2160 = UINT16_MAX;

	t33 = ((x2157<<x2158)<(x2159==x2160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2240 = INT64_MIN;
	static volatile int32_t t34 = -11580099;

	t34 = ((x2237<<x2238)<(x2239==x2240));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2257 = UINT16_MAX;
	static int16_t x2258 = 4;
	int16_t x2259 = -93;
	int32_t x2260 = 475858;
	static int32_t t35 = 26242;

	t35 = ((x2257<<x2258)<(x2259==x2260));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2269 = 43;
	volatile uint64_t x2270 = 1LLU;
	int16_t x2271 = 0;
	int16_t x2272 = -3;
	int32_t t36 = -112;

	t36 = ((x2269<<x2270)<(x2271==x2272));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2289 = 41;
	uint8_t x2290 = 0U;
	int64_t x2291 = INT64_MAX;
	int32_t t37 = -2105;

	t37 = ((x2289<<x2290)<(x2291==x2292));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2370 = 0;
	uint64_t x2371 = UINT64_MAX;
	int32_t x2372 = INT32_MAX;
	volatile int32_t t38 = -31600692;

	t38 = ((x2369<<x2370)<(x2371==x2372));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2377 = INT8_MAX;
	int8_t x2378 = 1;
	volatile int32_t t39 = 432;

	t39 = ((x2377<<x2378)<(x2379==x2380));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2541 = 16U;
	uint32_t x2542 = 5U;
	int16_t x2543 = INT16_MIN;
	static int32_t x2544 = INT32_MIN;
	int32_t t40 = 16190;

	t40 = ((x2541<<x2542)<(x2543==x2544));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2677 = 938;
	uint32_t x2678 = 0U;
	volatile uint64_t x2680 = UINT64_MAX;
	int32_t t41 = 1;

	t41 = ((x2677<<x2678)<(x2679==x2680));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2859 = INT64_MIN;
	uint64_t x2860 = 416488LLU;
	int32_t t42 = -99327404;

	t42 = ((x2857<<x2858)<(x2859==x2860));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x3153 = 36;
	static int16_t x3154 = 1;
	volatile int64_t x3155 = -1LL;
	static int8_t x3156 = -1;
	int32_t t43 = -4520462;

	t43 = ((x3153<<x3154)<(x3155==x3156));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3170 = 5;
	int32_t x3172 = -100426;
	volatile int32_t t44 = 111;

	t44 = ((x3169<<x3170)<(x3171==x3172));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x3225 = 15600LLU;
	volatile int16_t x3226 = 14;
	static int8_t x3227 = -5;
	uint16_t x3228 = 3134U;
	volatile int32_t t45 = -212;

	t45 = ((x3225<<x3226)<(x3227==x3228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x3241 = 1U;
	static int16_t x3242 = 1;
	uint8_t x3243 = 55U;
	volatile int64_t x3244 = INT64_MIN;
	int32_t t46 = 974;

	t46 = ((x3241<<x3242)<(x3243==x3244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x3297 = 1U;
	int8_t x3298 = 30;
	int64_t x3299 = 105311426896465LL;
	int8_t x3300 = 30;
	volatile int32_t t47 = 40;

	t47 = ((x3297<<x3298)<(x3299==x3300));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x3433 = 117U;
	uint8_t x3434 = 4U;
	int8_t x3436 = -1;

	t48 = ((x3433<<x3434)<(x3435==x3436));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3553 = 2U;
	uint8_t x3554 = 1U;
	int16_t x3555 = INT16_MIN;
	int16_t x3556 = -17;

	t49 = ((x3553<<x3554)<(x3555==x3556));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x3557 = 3;
	int8_t x3558 = 0;
	int16_t x3559 = -1;
	static int16_t x3560 = INT16_MIN;
	static int32_t t50 = -3;

	t50 = ((x3557<<x3558)<(x3559==x3560));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3601 = 1U;
	uint8_t x3603 = 7U;
	int32_t x3604 = -2;
	volatile int32_t t51 = -51286;

	t51 = ((x3601<<x3602)<(x3603==x3604));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3609 = 1179062;
	uint8_t x3610 = 6U;
	int8_t x3611 = INT8_MAX;
	int16_t x3612 = INT16_MIN;

	t52 = ((x3609<<x3610)<(x3611==x3612));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3637 = 0;
	int64_t x3639 = 192037090LL;
	static volatile int32_t t53 = 446170;

	t53 = ((x3637<<x3638)<(x3639==x3640));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3730 = 1U;
	int16_t x3732 = 5;
	static volatile int32_t t54 = 1;

	t54 = ((x3729<<x3730)<(x3731==x3732));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3869 = 0U;
	uint32_t x3870 = 0U;
	int64_t x3871 = INT64_MIN;
	int32_t x3872 = -246;
	volatile int32_t t55 = -10662;

	t55 = ((x3869<<x3870)<(x3871==x3872));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3941 = INT8_MAX;
	int8_t x3944 = -1;
	int32_t t56 = -801899102;

	t56 = ((x3941<<x3942)<(x3943==x3944));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3957 = INT8_MAX;
	static volatile uint8_t x3958 = 2U;
	static uint8_t x3959 = UINT8_MAX;
	uint64_t x3960 = 0LLU;
	int32_t t57 = 320;

	t57 = ((x3957<<x3958)<(x3959==x3960));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x4001 = UINT32_MAX;
	int16_t x4003 = -23;
	int32_t x4004 = INT32_MIN;

	t58 = ((x4001<<x4002)<(x4003==x4004));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4170 = 7U;
	volatile uint64_t x4171 = UINT64_MAX;
	volatile int32_t t59 = 1656;

	t59 = ((x4169<<x4170)<(x4171==x4172));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x4233 = 5784U;
	volatile uint32_t x4234 = 1U;
	int64_t x4235 = INT64_MAX;
	uint8_t x4236 = 6U;
	volatile int32_t t60 = -64766942;

	t60 = ((x4233<<x4234)<(x4235==x4236));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4317 = INT8_MAX;
	static uint16_t x4319 = UINT16_MAX;
	int8_t x4320 = -1;
	static volatile int32_t t61 = 1721812;

	t61 = ((x4317<<x4318)<(x4319==x4320));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4402 = 1U;
	volatile uint32_t x4403 = 1309559U;
	int64_t x4404 = 157LL;
	int32_t t62 = -732227;

	t62 = ((x4401<<x4402)<(x4403==x4404));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4421 = 0;
	uint8_t x4422 = 6U;
	int16_t x4423 = -1;
	volatile int32_t t63 = -58095496;

	t63 = ((x4421<<x4422)<(x4423==x4424));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x4454 = 14U;
	int64_t x4455 = INT64_MIN;
	static volatile uint32_t x4456 = UINT32_MAX;
	int32_t t64 = 1724;

	t64 = ((x4453<<x4454)<(x4455==x4456));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4509 = 213281752LLU;
	uint8_t x4511 = 0U;
	int32_t x4512 = INT32_MAX;
	int32_t t65 = 2;

	t65 = ((x4509<<x4510)<(x4511==x4512));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4537 = 31LL;
	static uint16_t x4538 = 2U;
	volatile int8_t x4539 = INT8_MIN;
	volatile int8_t x4540 = INT8_MIN;
	volatile int32_t t66 = 4285937;

	t66 = ((x4537<<x4538)<(x4539==x4540));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4561 = 4;
	int8_t x4562 = 28;
	int64_t x4564 = INT64_MIN;
	volatile int32_t t67 = -775044;

	t67 = ((x4561<<x4562)<(x4563==x4564));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4657 = 1U;
	uint8_t x4658 = 2U;
	int64_t x4660 = 49080751167215LL;
	static int32_t t68 = -1;

	t68 = ((x4657<<x4658)<(x4659==x4660));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4717 = 136873529;
	volatile int32_t x4718 = 0;
	static int8_t x4719 = -1;
	static int32_t t69 = -3;

	t69 = ((x4717<<x4718)<(x4719==x4720));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x4738 = 30U;
	uint16_t x4739 = UINT16_MAX;
	static int8_t x4740 = 44;
	static volatile int32_t t70 = 10;

	t70 = ((x4737<<x4738)<(x4739==x4740));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4765 = INT16_MAX;
	uint8_t x4766 = 11U;
	int8_t x4767 = -24;
	int32_t x4768 = INT32_MAX;
	int32_t t71 = 156525982;

	t71 = ((x4765<<x4766)<(x4767==x4768));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x4845 = UINT64_MAX;
	int16_t x4847 = -1;
	int64_t x4848 = INT64_MIN;
	volatile int32_t t72 = 1;

	t72 = ((x4845<<x4846)<(x4847==x4848));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4853 = 5U;
	static uint32_t x4854 = 0U;
	int8_t x4855 = 12;
	int64_t x4856 = INT64_MIN;

	t73 = ((x4853<<x4854)<(x4855==x4856));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5046 = 1U;
	volatile uint16_t x5047 = UINT16_MAX;
	int32_t x5048 = -1;
	static volatile int32_t t74 = 5;

	t74 = ((x5045<<x5046)<(x5047==x5048));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5077 = 9U;
	uint8_t x5078 = 10U;
	static int64_t x5079 = 3104927265318888LL;
	int16_t x5080 = -317;
	static volatile int32_t t75 = 36;

	t75 = ((x5077<<x5078)<(x5079==x5080));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x5141 = 0U;
	uint8_t x5142 = 0U;
	static uint8_t x5144 = 96U;
	int32_t t76 = -801;

	t76 = ((x5141<<x5142)<(x5143==x5144));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x5149 = INT8_MAX;
	static int16_t x5150 = 0;
	volatile int16_t x5151 = INT16_MIN;
	int32_t x5152 = INT32_MIN;
	static volatile int32_t t77 = 1;

	t77 = ((x5149<<x5150)<(x5151==x5152));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x5157 = 49;
	static uint32_t x5158 = 0U;
	uint64_t x5159 = 7436624781483414LLU;
	int8_t x5160 = INT8_MIN;

	t78 = ((x5157<<x5158)<(x5159==x5160));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5165 = 6;
	volatile uint8_t x5166 = 0U;
	int32_t t79 = 3956338;

	t79 = ((x5165<<x5166)<(x5167==x5168));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5209 = 4;
	static int16_t x5210 = 5;
	volatile int16_t x5211 = INT16_MAX;
	int32_t x5212 = INT32_MIN;
	volatile int32_t t80 = 47037;

	t80 = ((x5209<<x5210)<(x5211==x5212));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x5229 = 7875U;
	uint8_t x5230 = 0U;
	uint32_t x5232 = UINT32_MAX;

	t81 = ((x5229<<x5230)<(x5231==x5232));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5253 = UINT64_MAX;
	int8_t x5254 = 7;
	uint32_t x5255 = 6183694U;
	volatile int16_t x5256 = INT16_MAX;

	t82 = ((x5253<<x5254)<(x5255==x5256));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5345 = 481145LL;
	uint8_t x5347 = UINT8_MAX;
	volatile int16_t x5348 = -16;
	volatile int32_t t83 = -8038124;

	t83 = ((x5345<<x5346)<(x5347==x5348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x5349 = INT8_MAX;
	int32_t t84 = -480097;

	t84 = ((x5349<<x5350)<(x5351==x5352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5361 = UINT8_MAX;
	int32_t x5363 = INT32_MAX;
	int32_t x5364 = INT32_MIN;
	static volatile int32_t t85 = 0;

	t85 = ((x5361<<x5362)<(x5363==x5364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x5369 = 170260U;
	uint8_t x5370 = 1U;
	static int32_t t86 = 3;

	t86 = ((x5369<<x5370)<(x5371==x5372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x5381 = 634LLU;
	static uint64_t x5382 = 31LLU;
	uint8_t x5383 = UINT8_MAX;
	int64_t x5384 = -133556380LL;
	volatile int32_t t87 = 579568241;

	t87 = ((x5381<<x5382)<(x5383==x5384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5461 = 239371;
	uint16_t x5462 = 9U;
	int16_t x5463 = INT16_MAX;
	static volatile int32_t t88 = -6;

	t88 = ((x5461<<x5462)<(x5463==x5464));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x5473 = 7032410U;
	volatile uint16_t x5474 = 9U;
	int16_t x5475 = INT16_MAX;
	int32_t x5476 = INT32_MIN;
	int32_t t89 = 10091282;

	t89 = ((x5473<<x5474)<(x5475==x5476));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5485 = UINT64_MAX;
	static int16_t x5486 = 1;
	static volatile int16_t x5487 = -12;

	t90 = ((x5485<<x5486)<(x5487==x5488));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5605 = 1;
	uint16_t x5607 = UINT16_MAX;
	static int32_t t91 = -111;

	t91 = ((x5605<<x5606)<(x5607==x5608));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5633 = INT16_MAX;
	volatile int32_t x5635 = INT32_MIN;
	static uint64_t x5636 = 227693032462589585LLU;
	int32_t t92 = -60;

	t92 = ((x5633<<x5634)<(x5635==x5636));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x5717 = UINT64_MAX;
	static volatile uint8_t x5718 = 8U;
	static int8_t x5719 = 1;
	volatile int32_t x5720 = 59742;
	static volatile int32_t t93 = -27228;

	t93 = ((x5717<<x5718)<(x5719==x5720));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5793 = INT32_MAX;
	static int8_t x5794 = 0;
	int64_t x5795 = -11909626802493LL;
	static volatile int32_t t94 = -59;

	t94 = ((x5793<<x5794)<(x5795==x5796));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x5857 = 47977548245976142LLU;
	uint8_t x5858 = 13U;
	uint32_t x5859 = 12U;
	int32_t x5860 = -3;
	volatile int32_t t95 = 0;

	t95 = ((x5857<<x5858)<(x5859==x5860));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5945 = 1;
	static uint8_t x5946 = 25U;
	int64_t x5947 = INT64_MIN;
	uint64_t x5948 = 55932LLU;

	t96 = ((x5945<<x5946)<(x5947==x5948));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5969 = 20292447U;
	uint8_t x5970 = 15U;
	static int64_t x5971 = -1LL;
	static int16_t x5972 = -1;
	int32_t t97 = -1781;

	t97 = ((x5969<<x5970)<(x5971==x5972));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6101 = UINT32_MAX;
	volatile uint8_t x6102 = 2U;
	int64_t x6103 = INT64_MIN;
	volatile int32_t t98 = 16715;

	t98 = ((x6101<<x6102)<(x6103==x6104));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x6117 = 1757491LL;
	static int8_t x6118 = 9;
	int8_t x6119 = INT8_MIN;
	int8_t x6120 = -18;
	int32_t t99 = 6293;

	t99 = ((x6117<<x6118)<(x6119==x6120));

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

