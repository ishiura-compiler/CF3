#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x24 = 11LLU;
volatile uint32_t x122 = 113139U;
static volatile int32_t x209 = INT32_MAX;
uint32_t x210 = UINT32_MAX;
int16_t x403 = 2;
volatile int32_t t4 = 1997654;
uint8_t x445 = UINT8_MAX;
static uint32_t x446 = UINT32_MAX;
volatile uint32_t t5 = 6U;
uint64_t x489 = UINT64_MAX;
uint16_t x492 = 1U;
uint64_t t8 = 494LLU;
uint8_t x856 = 60U;
uint64_t t14 = 195931803LLU;
int8_t x1128 = 53;
int8_t x1313 = -1;
int64_t x1353 = -1LL;
static int8_t x1355 = -1;
static volatile int16_t x1437 = INT16_MIN;
static int32_t x1439 = INT32_MIN;
uint32_t x1667 = UINT32_MAX;
volatile uint64_t t24 = 20925923LLU;
volatile int32_t x2031 = 5902487;
volatile int64_t x2133 = INT64_MAX;
static uint64_t x2134 = 14845LLU;
uint32_t x2136 = 1U;
static uint16_t x2201 = UINT16_MAX;
volatile uint64_t t28 = 2576727275002LLU;
uint64_t x2270 = UINT64_MAX;
static int16_t x2281 = -1;
uint16_t x2284 = 3U;
uint32_t x2315 = 2177U;
int32_t x2421 = INT32_MAX;
int32_t x2514 = -3;
int64_t t34 = -642377264LL;
uint16_t x2785 = 1U;
static int16_t x2788 = 13;
int16_t x2893 = -1;
int32_t x2894 = -78040;
uint64_t t37 = 8204161554985083391LLU;
volatile uint32_t t38 = 58U;
int8_t x2999 = 1;
uint32_t t39 = 3324500U;
volatile uint64_t x3146 = UINT64_MAX;
uint16_t x3172 = 34U;
uint16_t x3436 = 0U;
uint32_t t42 = 39U;
volatile int64_t x3614 = INT64_MIN;
int16_t x3702 = INT16_MAX;
uint16_t x3718 = 29U;
int16_t x3831 = INT16_MIN;
volatile uint64_t x3863 = 2876255431586396606LLU;
uint64_t x3872 = 4LLU;
int16_t x3996 = 15;
uint64_t x4070 = 4054559175LLU;
volatile uint32_t x4106 = 14621556U;
static uint64_t t57 = 408627339575496LLU;
static int8_t x4364 = 3;
volatile int64_t t58 = 92LL;
int32_t x4393 = -1;
volatile uint64_t x4395 = 31525987LLU;
uint64_t x4457 = 15634459LLU;
static uint8_t x4464 = 5U;
volatile uint32_t t63 = 1952528579U;
volatile int32_t x4497 = INT32_MIN;
int16_t x4498 = INT16_MIN;
volatile uint8_t x4501 = 61U;
uint64_t t65 = 2914LLU;
uint16_t x4667 = UINT16_MAX;
volatile int8_t x5065 = -12;
uint64_t t73 = 8210824LLU;
int32_t x5781 = 57440719;
int8_t x5838 = 2;
volatile int16_t x5840 = 26;
volatile int32_t t78 = -15276;
int64_t x5990 = -1LL;
uint8_t x5998 = 4U;
int16_t x5999 = INT16_MAX;
int16_t x6033 = INT16_MIN;
int32_t x6119 = INT32_MAX;
int32_t x6209 = -26928;
int8_t x6397 = -2;
volatile uint16_t x6399 = 181U;
uint8_t x6400 = 17U;
uint32_t x6418 = 24788U;
volatile int16_t x6465 = INT16_MAX;
uint8_t x6503 = 95U;
int8_t x6533 = -1;
int8_t x6725 = INT8_MIN;
volatile uint64_t t94 = 840145LLU;
static int8_t x7066 = 1;
uint64_t x7067 = 1925085382581118LLU;
uint16_t x7068 = 4U;
volatile uint64_t t97 = 299265LLU;
int8_t x7200 = 25;


void f0(void) {
	int16_t x21 = INT16_MIN;
	uint8_t x22 = 14U;
	uint64_t x23 = 3124442509990LLU;
	static uint64_t t0 = 720786661878537110LLU;

	t0 = (x21*((x22|x23)<<x24));

	if (t0 != 11683141405240197120LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x109 = 3;
	volatile int32_t x110 = -1;
	uint32_t x111 = 295499765U;
	uint8_t x112 = 6U;
	volatile uint32_t t1 = 1704446U;

	t1 = (x109*((x110|x111)<<x112));

	if (t1 != 4294967104U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x121 = 3;
	int16_t x123 = INT16_MAX;
	int8_t x124 = 7;
	static volatile uint32_t t2 = 15U;

	t2 = (x121*((x122|x123)<<x124));

	if (t2 != 50331264U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x211 = INT16_MAX;
	volatile uint32_t x212 = 9U;
	volatile uint32_t t3 = 57500466U;

	t3 = (x209*((x210|x211)<<x212));

	if (t3 != 512U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x401 = INT16_MAX;
	uint16_t x402 = 27963U;
	volatile uint8_t x404 = 1U;

	t4 = (x401*((x402|x403)<<x404));

	if (t4 != 1832527242) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x447 = INT32_MAX;
	static int16_t x448 = 1;

	t5 = (x445*((x446|x447)<<x448));

	if (t5 != 4294966786U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x449 = -1;
	int8_t x450 = 0;
	volatile uint8_t x451 = UINT8_MAX;
	uint8_t x452 = 0U;
	volatile int32_t t6 = -20;

	t6 = (x449*((x450|x451)<<x452));

	if (t6 != -255) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x461 = -1;
	uint32_t x462 = UINT32_MAX;
	static volatile int32_t x463 = 885;
	volatile uint8_t x464 = 0U;
	uint32_t t7 = 716586298U;

	t7 = (x461*((x462|x463)<<x464));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x490 = 907876LLU;
	uint64_t x491 = UINT64_MAX;

	t8 = (x489*((x490|x491)<<x492));

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x597 = 60U;
	int8_t x598 = INT8_MIN;
	uint32_t x599 = UINT32_MAX;
	static uint8_t x600 = 3U;
	volatile uint32_t t9 = 2157712U;

	t9 = (x597*((x598|x599)<<x600));

	if (t9 != 4294966816U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x725 = INT32_MIN;
	uint8_t x726 = UINT8_MAX;
	volatile int64_t x727 = 8880622LL;
	volatile uint8_t x728 = 1U;
	static int64_t t10 = -24112828LL;

	t10 = (x725*((x726|x727)<<x728));

	if (t10 != -38142054072582144LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x737 = INT8_MAX;
	uint32_t x738 = 16U;
	static uint32_t x739 = 12683U;
	uint32_t x740 = 5U;
	static volatile uint32_t t11 = 127442638U;

	t11 = (x737*((x738|x739)<<x740));

	if (t11 != 51608736U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x757 = INT16_MIN;
	int16_t x758 = INT16_MAX;
	uint32_t x759 = UINT32_MAX;
	int8_t x760 = 21;
	uint32_t t12 = 14U;

	t12 = (x757*((x758|x759)<<x760));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x853 = 466285LLU;
	int32_t x854 = 38893;
	uint64_t x855 = 54245679442924899LLU;
	static volatile uint64_t t13 = 979LLU;

	t13 = (x853*((x854|x855)<<x856));

	if (t13 != 3458764513820540928LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x857 = INT64_MIN;
	uint8_t x858 = UINT8_MAX;
	volatile uint64_t x859 = UINT64_MAX;
	int8_t x860 = 1;

	t14 = (x857*((x858|x859)<<x860));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1049 = UINT16_MAX;
	uint32_t x1050 = UINT32_MAX;
	uint64_t x1051 = UINT64_MAX;
	uint64_t x1052 = 7LLU;
	volatile uint64_t t15 = 65116732179LLU;

	t15 = (x1049*((x1050|x1051)<<x1052));

	if (t15 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1125 = 20;
	uint8_t x1126 = 2U;
	static uint64_t x1127 = 11977982693808443LLU;
	volatile uint64_t t16 = 0LLU;

	t16 = (x1125*((x1126|x1127)<<x1128));

	if (t16 != 1405123083739594752LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1189 = INT8_MAX;
	int64_t x1190 = -340483143074462LL;
	uint64_t x1191 = 718LLU;
	static uint8_t x1192 = 3U;
	volatile uint64_t t17 = 58LLU;

	t17 = (x1189*((x1190|x1191)<<x1192));

	if (t17 != 18100813200346560656LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1314 = 6U;
	uint64_t x1315 = UINT64_MAX;
	uint32_t x1316 = 5U;
	volatile uint64_t t18 = 686831824512414698LLU;

	t18 = (x1313*((x1314|x1315)<<x1316));

	if (t18 != 32LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1354 = 14195077LLU;
	uint8_t x1356 = 30U;
	uint64_t t19 = 3436336446329345357LLU;

	t19 = (x1353*((x1354|x1355)<<x1356));

	if (t19 != 1073741824LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1438 = 29935465LLU;
	uint8_t x1440 = 2U;
	volatile uint64_t t20 = 3350970148LLU;

	t20 = (x1437*((x1438|x1439)<<x1440));

	if (t20 != 277551275442176LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1529 = INT64_MAX;
	uint16_t x1530 = 0U;
	volatile int8_t x1531 = 0;
	int8_t x1532 = 23;
	volatile int64_t t21 = 1770455LL;

	t21 = (x1529*((x1530|x1531)<<x1532));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1645 = INT8_MIN;
	static int8_t x1646 = -7;
	static uint64_t x1647 = 33914966831139LLU;
	uint64_t x1648 = 12LLU;
	volatile uint64_t t22 = 239693623161317405LLU;

	t22 = (x1645*((x1646|x1647)<<x1648));

	if (t22 != 2621440LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1665 = INT32_MAX;
	volatile uint8_t x1666 = UINT8_MAX;
	uint16_t x1668 = 3U;
	volatile uint32_t t23 = 63442397U;

	t23 = (x1665*((x1666|x1667)<<x1668));

	if (t23 != 8U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1901 = INT8_MIN;
	int64_t x1902 = -1LL;
	volatile uint64_t x1903 = 20LLU;
	uint8_t x1904 = 0U;

	t24 = (x1901*((x1902|x1903)<<x1904));

	if (t24 != 128LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x2029 = INT8_MAX;
	volatile uint32_t x2030 = 453U;
	int16_t x2032 = 0;
	uint32_t t25 = 500473674U;

	t25 = (x2029*((x2030|x2031)<<x2032));

	if (t25 != 749656489U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x2135 = INT8_MAX;
	volatile uint64_t t26 = 417661901867265030LLU;

	t26 = (x2133*((x2134|x2135)<<x2136));

	if (t26 != 18446744073709521922LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x2173 = -155502300;
	volatile uint64_t x2174 = 26598339856750088LLU;
	volatile int8_t x2175 = -4;
	volatile int8_t x2176 = 60;
	uint64_t t27 = 6121327LLU;

	t27 = (x2173*((x2174|x2175)<<x2176));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x2202 = UINT64_MAX;
	uint32_t x2203 = 0U;
	int16_t x2204 = 48;

	t28 = (x2201*((x2202|x2203)<<x2204));

	if (t28 != 281474976710656LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2225 = UINT8_MAX;
	int32_t x2226 = 188027;
	uint8_t x2227 = UINT8_MAX;
	static int8_t x2228 = 0;
	static volatile int32_t t29 = 11562;

	t29 = (x2225*((x2226|x2227)<<x2228));

	if (t29 != 47980545) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x2269 = INT16_MIN;
	volatile uint32_t x2271 = 488481U;
	static int8_t x2272 = 0;
	static volatile uint64_t t30 = 37LLU;

	t30 = (x2269*((x2270|x2271)<<x2272));

	if (t30 != 32768LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x2282 = UINT32_MAX;
	static int8_t x2283 = -1;
	volatile uint32_t t31 = 1U;

	t31 = (x2281*((x2282|x2283)<<x2284));

	if (t31 != 8U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2313 = INT8_MAX;
	uint8_t x2314 = 0U;
	uint8_t x2316 = 4U;
	volatile uint32_t t32 = 12496586U;

	t32 = (x2313*((x2314|x2315)<<x2316));

	if (t32 != 4423664U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2422 = 672304536153654LLU;
	int16_t x2423 = -9457;
	int8_t x2424 = 18;
	uint64_t t33 = 8142808936701LLU;

	t33 = (x2421*((x2422|x2423)<<x2424));

	if (t33 != 18338094732749832192LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2513 = 7876LL;
	uint32_t x2515 = 382695U;
	uint16_t x2516 = 0U;

	t34 = (x2513*((x2514|x2515)<<x2516));

	if (t34 != 33827162415420LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2609 = INT8_MIN;
	uint32_t x2610 = 18U;
	int8_t x2611 = -1;
	uint16_t x2612 = 11U;
	volatile uint32_t t35 = 7747214U;

	t35 = (x2609*((x2610|x2611)<<x2612));

	if (t35 != 262144U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2786 = INT8_MAX;
	uint64_t x2787 = 60565809366561LLU;
	static uint64_t t36 = 215LLU;

	t36 = (x2785*((x2786|x2787)<<x2788));

	if (t36 != 496155110331637760LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x2895 = UINT64_MAX;
	static int32_t x2896 = 0;

	t37 = (x2893*((x2894|x2895)<<x2896));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2985 = 27152U;
	static uint16_t x2986 = UINT16_MAX;
	uint8_t x2987 = UINT8_MAX;
	static int16_t x2988 = 0;

	t38 = (x2985*((x2986|x2987)<<x2988));

	if (t38 != 1779406320U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2997 = -1;
	uint32_t x2998 = 10922059U;
	volatile int32_t x3000 = 30;

	t39 = (x2997*((x2998|x2999)<<x3000));

	if (t39 != 1073741824U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x3145 = INT32_MAX;
	int64_t x3147 = -17LL;
	static uint16_t x3148 = 3U;
	volatile uint64_t t40 = 36LLU;

	t40 = (x3145*((x3146|x3147)<<x3148));

	if (t40 != 18446744056529682440LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3169 = INT8_MIN;
	int16_t x3170 = 158;
	volatile uint64_t x3171 = UINT64_MAX;
	volatile uint64_t t41 = 2611708164671608064LLU;

	t41 = (x3169*((x3170|x3171)<<x3172));

	if (t41 != 2199023255552LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3433 = -208402616;
	volatile int16_t x3434 = INT16_MIN;
	volatile uint32_t x3435 = UINT32_MAX;

	t42 = (x3433*((x3434|x3435)<<x3436));

	if (t42 != 208402616U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3545 = -2;
	static int64_t x3546 = 3825151272779LL;
	uint16_t x3547 = UINT16_MAX;
	uint16_t x3548 = 0U;
	volatile int64_t t43 = -1721305793639426395LL;

	t43 = (x3545*((x3546|x3547)<<x3548));

	if (t43 != -7650302623742LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3613 = -1;
	uint64_t x3615 = UINT64_MAX;
	static int8_t x3616 = 0;
	volatile uint64_t t44 = 218LLU;

	t44 = (x3613*((x3614|x3615)<<x3616));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x3701 = 372598U;
	uint16_t x3703 = 294U;
	uint16_t x3704 = 1U;
	volatile uint32_t t45 = 120677677U;

	t45 = (x3701*((x3702|x3703)<<x3704));

	if (t45 != 2943000852U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3717 = 487938007U;
	int16_t x3719 = 1674;
	volatile int32_t x3720 = 1;
	volatile uint32_t t46 = 300U;

	t46 = (x3717*((x3718|x3719)<<x3720));

	if (t46 != 547434770U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3773 = -1LL;
	static uint64_t x3774 = 1277919133543809LLU;
	uint32_t x3775 = 1U;
	int16_t x3776 = 21;
	volatile uint64_t t47 = 12516898LLU;

	t47 = (x3773*((x3774|x3775)<<x3776));

	if (t47 != 13233968011928403968LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x3829 = UINT16_MAX;
	uint64_t x3830 = UINT64_MAX;
	volatile int8_t x3832 = 0;
	uint64_t t48 = 3162030LLU;

	t48 = (x3829*((x3830|x3831)<<x3832));

	if (t48 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3861 = 2543811;
	int8_t x3862 = 0;
	volatile int8_t x3864 = 1;
	volatile uint64_t t49 = 169683510483LLU;

	t49 = (x3861*((x3862|x3863)<<x3864));

	if (t49 != 14846518722843883380LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3869 = 53;
	uint32_t x3870 = 0U;
	int8_t x3871 = 3;
	static uint32_t t50 = 61152U;

	t50 = (x3869*((x3870|x3871)<<x3872));

	if (t50 != 2544U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3993 = 0;
	volatile int16_t x3994 = 1;
	uint16_t x3995 = UINT16_MAX;
	volatile int32_t t51 = 16;

	t51 = (x3993*((x3994|x3995)<<x3996));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x4033 = 11U;
	volatile int8_t x4034 = INT8_MAX;
	uint32_t x4035 = UINT32_MAX;
	uint16_t x4036 = 21U;
	uint32_t t52 = 1596461U;

	t52 = (x4033*((x4034|x4035)<<x4036));

	if (t52 != 4271898624U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x4069 = -58;
	static int64_t x4071 = INT64_MIN;
	static int8_t x4072 = 47;
	uint64_t t53 = 15100LLU;

	t53 = (x4069*((x4070|x4071)<<x4072));

	if (t53 != 14156221003709022208LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x4105 = -1;
	int8_t x4107 = INT8_MAX;
	uint8_t x4108 = 11U;
	volatile uint32_t t54 = 63441822U;

	t54 = (x4105*((x4106|x4107)<<x4108));

	if (t54 != 119801856U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x4129 = 0;
	uint64_t x4130 = UINT64_MAX;
	volatile int8_t x4131 = 0;
	uint8_t x4132 = 1U;
	volatile uint64_t t55 = 7376581251LLU;

	t55 = (x4129*((x4130|x4131)<<x4132));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x4249 = -10027;
	uint64_t x4250 = 15511359347294660LLU;
	static uint8_t x4251 = UINT8_MAX;
	uint64_t x4252 = 1LLU;
	uint64_t t56 = 18183LLU;

	t56 = (x4249*((x4250|x4251)<<x4252));

	if (t56 != 2529848902414082646LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x4357 = INT8_MAX;
	uint64_t x4358 = UINT64_MAX;
	static int32_t x4359 = -579;
	uint8_t x4360 = 6U;

	t57 = (x4357*((x4358|x4359)<<x4360));

	if (t57 != 18446744073709543488LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x4361 = -1LL;
	uint32_t x4362 = 330U;
	uint16_t x4363 = 29067U;

	t58 = (x4361*((x4362|x4363)<<x4364));

	if (t58 != -233048LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4394 = 220151003965LLU;
	uint16_t x4396 = 12U;
	volatile uint64_t t59 = 31887881663LLU;

	t59 = (x4393*((x4394|x4395)<<x4396));

	if (t59 != 18445842206343827456LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x4405 = -13883;
	int32_t x4406 = INT32_MIN;
	uint32_t x4407 = 16264U;
	int16_t x4408 = 11;
	volatile uint32_t t60 = 182079759U;

	t60 = (x4405*((x4406|x4407)<<x4408));

	if (t60 != 1432174592U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4437 = 30;
	int16_t x4438 = 1;
	uint16_t x4439 = 1U;
	int8_t x4440 = 8;
	int32_t t61 = 9999;

	t61 = (x4437*((x4438|x4439)<<x4440));

	if (t61 != 7680) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4458 = UINT8_MAX;
	volatile uint16_t x4459 = UINT16_MAX;
	volatile int16_t x4460 = 0;
	volatile uint64_t t62 = 24LLU;

	t62 = (x4457*((x4458|x4459)<<x4460));

	if (t62 != 1024604270565LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x4461 = -1;
	static int32_t x4462 = -1;
	uint32_t x4463 = 1138750U;

	t63 = (x4461*((x4462|x4463)<<x4464));

	if (t63 != 32U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4499 = 12689577569473LLU;
	volatile int8_t x4500 = 4;
	uint64_t t64 = 450597331LLU;

	t64 = (x4497*((x4498|x4499)<<x4500));

	if (t64 != 169290430939136LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4502 = INT16_MAX;
	uint64_t x4503 = UINT64_MAX;
	int8_t x4504 = 3;

	t65 = (x4501*((x4502|x4503)<<x4504));

	if (t65 != 18446744073709551128LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4665 = -101;
	volatile uint64_t x4666 = UINT64_MAX;
	static uint8_t x4668 = 2U;
	uint64_t t66 = 29991190569402LLU;

	t66 = (x4665*((x4666|x4667)<<x4668));

	if (t66 != 404LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x4801 = INT32_MAX;
	int64_t x4802 = INT64_MIN;
	uint64_t x4803 = 316151427LLU;
	uint8_t x4804 = 0U;
	uint64_t t67 = 226694109LLU;

	t67 = (x4801*((x4802|x4803)<<x4804));

	if (t67 != 9902302056312990077LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4905 = 27U;
	static uint32_t x4906 = UINT32_MAX;
	static uint16_t x4907 = UINT16_MAX;
	volatile uint8_t x4908 = 12U;
	uint32_t t68 = 1833343176U;

	t68 = (x4905*((x4906|x4907)<<x4908));

	if (t68 != 4294856704U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x4921 = 140;
	uint8_t x4922 = UINT8_MAX;
	volatile uint32_t x4923 = 25031309U;
	uint8_t x4924 = 1U;
	static volatile uint32_t t69 = 50U;

	t69 = (x4921*((x4922|x4923)<<x4924));

	if (t69 != 2713831144U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x4937 = INT16_MIN;
	int32_t x4938 = 0;
	uint32_t x4939 = UINT32_MAX;
	uint64_t x4940 = 1LLU;
	static uint32_t t70 = 1U;

	t70 = (x4937*((x4938|x4939)<<x4940));

	if (t70 != 65536U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x5066 = -23503292;
	uint64_t x5067 = 54166LLU;
	uint8_t x5068 = 8U;
	uint64_t t71 = 108528LLU;

	t71 = (x5065*((x5066|x5067)<<x5068));

	if (t71 != 72100214784LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5309 = 790;
	uint32_t x5310 = 1530U;
	uint64_t x5311 = UINT64_MAX;
	uint32_t x5312 = 1U;
	static volatile uint64_t t72 = 125683022860207936LLU;

	t72 = (x5309*((x5310|x5311)<<x5312));

	if (t72 != 18446744073709550036LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x5389 = -994;
	volatile uint64_t x5390 = UINT64_MAX;
	uint32_t x5391 = UINT32_MAX;
	static uint16_t x5392 = 3U;

	t73 = (x5389*((x5390|x5391)<<x5392));

	if (t73 != 7952LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5697 = 113951;
	int8_t x5698 = 1;
	volatile int8_t x5699 = 14;
	uint32_t x5700 = 1U;
	volatile int32_t t74 = 100380299;

	t74 = (x5697*((x5698|x5699)<<x5700));

	if (t74 != 3418530) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5721 = INT8_MIN;
	static uint64_t x5722 = 428776LLU;
	static int16_t x5723 = INT16_MAX;
	int32_t x5724 = 0;
	volatile uint64_t t75 = 6161289LLU;

	t75 = (x5721*((x5722|x5723)<<x5724));

	if (t75 != 18446744073650831488LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5782 = 1438661744567335583LLU;
	uint8_t x5783 = 68U;
	static uint32_t x5784 = 0U;
	static volatile uint64_t t76 = 31211LLU;

	t76 = (x5781*((x5782|x5783)<<x5784));

	if (t76 != 4010849906729550161LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5801 = 426U;
	uint32_t x5802 = 1U;
	volatile uint16_t x5803 = 6U;
	static int8_t x5804 = 0;
	uint32_t t77 = 843670U;

	t77 = (x5801*((x5802|x5803)<<x5804));

	if (t77 != 2982U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x5837 = 2U;
	uint8_t x5839 = 2U;

	t78 = (x5837*((x5838|x5839)<<x5840));

	if (t78 != 268435456) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5901 = INT16_MAX;
	uint32_t x5902 = UINT32_MAX;
	int8_t x5903 = -3;
	uint64_t x5904 = 6LLU;
	uint32_t t79 = 1U;

	t79 = (x5901*((x5902|x5903)<<x5904));

	if (t79 != 4292870208U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x5933 = -1192700082LL;
	uint64_t x5934 = UINT64_MAX;
	uint64_t x5935 = UINT64_MAX;
	uint16_t x5936 = 0U;
	uint64_t t80 = 2LLU;

	t80 = (x5933*((x5934|x5935)<<x5936));

	if (t80 != 1192700082LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5989 = -1;
	uint64_t x5991 = UINT64_MAX;
	int16_t x5992 = 1;
	volatile uint64_t t81 = 235392538244525LLU;

	t81 = (x5989*((x5990|x5991)<<x5992));

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5997 = 721532331U;
	int64_t x6000 = 0LL;
	uint32_t t82 = 2814851U;

	t82 = (x5997*((x5998|x5999)<<x6000));

	if (t82 != 2949892693U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x6034 = INT16_MIN;
	volatile uint32_t x6035 = UINT32_MAX;
	int8_t x6036 = 17;
	uint32_t t83 = 118130497U;

	t83 = (x6033*((x6034|x6035)<<x6036));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x6101 = -1;
	static uint64_t x6102 = UINT64_MAX;
	int32_t x6103 = -249012747;
	int16_t x6104 = 1;
	uint64_t t84 = 46570854LLU;

	t84 = (x6101*((x6102|x6103)<<x6104));

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x6117 = INT16_MIN;
	uint32_t x6118 = UINT32_MAX;
	static volatile uint32_t x6120 = 1U;
	uint32_t t85 = 924473518U;

	t85 = (x6117*((x6118|x6119)<<x6120));

	if (t85 != 65536U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x6210 = UINT64_MAX;
	static volatile int16_t x6211 = 875;
	int32_t x6212 = 0;
	uint64_t t86 = 8392447335LLU;

	t86 = (x6209*((x6210|x6211)<<x6212));

	if (t86 != 26928LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x6398 = UINT8_MAX;
	volatile int32_t t87 = 614273648;

	t87 = (x6397*((x6398|x6399)<<x6400));

	if (t87 != -66846720) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x6417 = 1;
	int32_t x6419 = -1;
	uint16_t x6420 = 10U;
	uint32_t t88 = 1031053124U;

	t88 = (x6417*((x6418|x6419)<<x6420));

	if (t88 != 4294966272U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x6466 = INT64_MAX;
	uint64_t x6467 = 218472403LLU;
	uint16_t x6468 = 28U;
	uint64_t t89 = 319LLU;

	t89 = (x6465*((x6466|x6467)<<x6468));

	if (t89 != 18446735277884964864LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x6501 = -1;
	volatile uint16_t x6502 = 15U;
	int8_t x6504 = 20;
	volatile int32_t t90 = -5122;

	t90 = (x6501*((x6502|x6503)<<x6504));

	if (t90 != -99614720) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x6534 = 727U;
	volatile int64_t x6535 = 6681662889LL;
	static uint32_t x6536 = 20U;
	static volatile int64_t t91 = 4LL;

	t91 = (x6533*((x6534|x6535)<<x6536));

	if (t91 != -7006231972544512LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6593 = -15212;
	uint32_t x6594 = 47U;
	int32_t x6595 = -32344;
	int8_t x6596 = 7;
	volatile uint32_t t92 = 2913421U;

	t92 = (x6593*((x6594|x6595)<<x6596));

	if (t92 != 2834994688U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6726 = INT8_MIN;
	static uint32_t x6727 = 436742541U;
	int16_t x6728 = 5;
	uint32_t t93 = 50U;

	t93 = (x6725*((x6726|x6727)<<x6728));

	if (t93 != 471040U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6817 = 1U;
	uint64_t x6818 = 116229129068LLU;
	uint32_t x6819 = 271082U;
	uint16_t x6820 = 1U;

	t94 = (x6817*((x6818|x6819)<<x6820));

	if (t94 != 232458799068LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6937 = 1U;
	uint32_t x6938 = UINT32_MAX;
	static volatile int32_t x6939 = INT32_MIN;
	volatile uint16_t x6940 = 0U;
	static uint32_t t95 = UINT32_MAX;

	t95 = (x6937*((x6938|x6939)<<x6940));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6961 = -1;
	int16_t x6962 = INT16_MIN;
	static uint64_t x6963 = UINT64_MAX;
	static volatile uint64_t x6964 = 0LLU;
	static uint64_t t96 = 19890754935LLU;

	t96 = (x6961*((x6962|x6963)<<x6964));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x7065 = INT32_MIN;

	t97 = (x7065*((x7066|x7067)<<x7068));

	if (t97 != 927499665039949824LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x7197 = INT16_MAX;
	uint32_t x7198 = 3U;
	static uint8_t x7199 = 13U;
	uint32_t t98 = 2019461U;

	t98 = (x7197*((x7198|x7199)<<x7200));

	if (t98 != 3791650816U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x7269 = INT32_MIN;
	volatile uint64_t x7270 = 49652494LLU;
	volatile int8_t x7271 = INT8_MIN;
	uint8_t x7272 = 18U;
	volatile uint64_t t99 = 12898660380780901LLU;

	t99 = (x7269*((x7270|x7271)<<x7272));

	if (t99 != 64176294690029568LLU) { NG(); } else { ; }
	
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

