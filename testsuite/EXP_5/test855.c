#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x49 = INT8_MIN;
static uint8_t x156 = UINT8_MAX;
uint16_t x166 = 1U;
int32_t x189 = -290336;
static uint16_t x190 = UINT16_MAX;
int8_t x191 = 1;
int8_t x239 = 0;
static volatile uint32_t x281 = UINT32_MAX;
int8_t x283 = 0;
volatile int8_t x284 = INT8_MIN;
int16_t x414 = 960;
int8_t x457 = 16;
int32_t t11 = -733802;
int64_t x601 = INT64_MAX;
int8_t x627 = 0;
static int32_t t13 = -192108322;
int8_t x717 = 15;
uint64_t x737 = UINT64_MAX;
int16_t x740 = INT16_MIN;
static volatile int8_t x980 = INT8_MIN;
static volatile int32_t x1014 = 1;
static uint64_t x1061 = 653657868LLU;
volatile uint8_t x1063 = 2U;
int32_t t21 = 21;
int8_t x1515 = 6;
int32_t t23 = 52503;
volatile uint64_t x1539 = 1LLU;
volatile int64_t x1540 = INT64_MIN;
static volatile int32_t t25 = 26;
static int16_t x1775 = 2;
static int32_t t29 = 462;
int32_t t30 = -21776914;
volatile int32_t t31 = -137;
volatile int64_t x1997 = -11764038LL;
volatile uint8_t x2015 = 4U;
int32_t x2032 = INT32_MIN;
static int8_t x2067 = 1;
int32_t t35 = 30;
int32_t x2296 = 6310069;
int64_t x2341 = INT64_MAX;
int8_t x2517 = -28;
volatile uint8_t x2518 = 1U;
int32_t x2520 = INT32_MIN;
volatile uint16_t x2661 = 43U;
uint8_t x2754 = 69U;
uint32_t x2881 = 8133U;
static uint32_t x2882 = UINT32_MAX;
volatile uint32_t x2883 = 1U;
uint64_t x3026 = 2LLU;
int8_t x3028 = 1;
int64_t x3090 = 0LL;
int8_t x3096 = INT8_MAX;
int8_t x3181 = INT8_MAX;
int32_t x3209 = INT32_MIN;
int8_t x3211 = 5;
static int16_t x3212 = INT16_MIN;
static volatile uint8_t x3279 = 1U;
uint8_t x3416 = 51U;
volatile int32_t t58 = -216469682;
uint8_t x3440 = UINT8_MAX;
volatile int32_t t59 = 32169;
static volatile int32_t t60 = -1525210;
int64_t x3537 = INT64_MIN;
int64_t x3538 = 2957LL;
uint16_t x3764 = 0U;
uint16_t x3882 = 12224U;
int32_t x3933 = INT32_MIN;
static int8_t x3936 = 2;
volatile int32_t t66 = 415904699;
static uint16_t x4031 = 0U;
static uint64_t x4040 = UINT64_MAX;
volatile int32_t t69 = 690041856;
volatile int16_t x4155 = 21;
volatile int32_t t70 = -242;
int8_t x4161 = -1;
uint64_t x4412 = 836145LLU;
uint8_t x4689 = 53U;
uint16_t x4691 = 2U;
int16_t x4692 = 1;
uint8_t x4905 = UINT8_MAX;
volatile int64_t x5013 = -1LL;
static int16_t x5033 = INT16_MAX;
uint8_t x5035 = 1U;
int64_t x5036 = INT64_MIN;
volatile int32_t t79 = 3248;
int32_t x5064 = -1;
volatile int32_t t80 = -168823236;
uint64_t x5249 = 340683815891233LLU;
volatile int64_t x5283 = 4LL;
volatile uint32_t x5313 = 9805U;
int64_t x5321 = INT64_MIN;
uint16_t x5322 = 340U;
int16_t x5324 = -1;
int64_t x5385 = -4393874823161LL;
volatile uint32_t x5654 = 3144634U;
int64_t x5655 = 1LL;
uint8_t x5814 = 19U;
static volatile int8_t x5815 = 5;
int8_t x5816 = INT8_MAX;
int32_t t94 = 94;
int8_t x6012 = INT8_MAX;
int16_t x6081 = -1204;
int16_t x6103 = 24;
static int32_t t98 = -222;
int32_t x6117 = 236;


void f0(void) {
	static uint16_t x50 = 7266U;
	static volatile uint8_t x51 = 3U;
	int8_t x52 = INT8_MIN;
	int32_t t0 = -1662401;

	t0 = (x49<=((x50<<x51)+x52));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x93 = INT32_MAX;
	uint32_t x94 = 9U;
	int16_t x95 = 25;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t1 = -83067;

	t1 = (x93<=((x94<<x95)+x96));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x153 = INT64_MAX;
	static uint64_t x154 = 0LLU;
	uint8_t x155 = 2U;
	volatile int32_t t2 = -4756130;

	t2 = (x153<=((x154<<x155)+x156));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x165 = 85599211LLU;
	uint8_t x167 = 7U;
	static volatile int16_t x168 = 1448;
	int32_t t3 = -45131;

	t3 = (x165<=((x166<<x167)+x168));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MAX;
	int32_t x171 = 0;
	static volatile int16_t x172 = INT16_MIN;
	volatile int32_t t4 = -208129173;

	t4 = (x169<=((x170<<x171)+x172));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x192 = 0U;
	volatile int32_t t5 = -7;

	t5 = (x189<=((x190<<x191)+x192));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x237 = 15;
	uint64_t x238 = 0LLU;
	int32_t x240 = INT32_MAX;
	volatile int32_t t6 = 1;

	t6 = (x237<=((x238<<x239)+x240));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x282 = 169614111711306811LL;
	volatile int32_t t7 = 159272704;

	t7 = (x281<=((x282<<x283)+x284));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MAX;
	uint8_t x307 = 4U;
	static uint64_t x308 = UINT64_MAX;
	volatile int32_t t8 = 1;

	t8 = (x305<=((x306<<x307)+x308));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x365 = 4167LLU;
	volatile int32_t x366 = 1242587;
	static int8_t x367 = 1;
	int32_t x368 = -166584949;
	volatile int32_t t9 = 195674;

	t9 = (x365<=((x366<<x367)+x368));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x413 = INT8_MAX;
	uint8_t x415 = 1U;
	int16_t x416 = -1;
	volatile int32_t t10 = -1;

	t10 = (x413<=((x414<<x415)+x416));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x458 = INT16_MAX;
	uint8_t x459 = 0U;
	int32_t x460 = INT32_MIN;

	t11 = (x457<=((x458<<x459)+x460));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x602 = 17;
	int16_t x603 = 0;
	int8_t x604 = INT8_MIN;
	int32_t t12 = 1;

	t12 = (x601<=((x602<<x603)+x604));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x625 = -1;
	uint16_t x626 = 2386U;
	int32_t x628 = INT32_MIN;

	t13 = (x625<=((x626<<x627)+x628));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x718 = 23;
	int32_t x719 = 6;
	static int16_t x720 = INT16_MAX;
	volatile int32_t t14 = 25770993;

	t14 = (x717<=((x718<<x719)+x720));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x738 = 0U;
	int8_t x739 = 0;
	volatile int32_t t15 = -2228083;

	t15 = (x737<=((x738<<x739)+x740));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x745 = -112342812;
	static int16_t x746 = INT16_MAX;
	uint32_t x747 = 2U;
	int8_t x748 = -1;
	static int32_t t16 = 366498238;

	t16 = (x745<=((x746<<x747)+x748));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x757 = -1;
	int32_t x758 = 1881149;
	uint8_t x759 = 1U;
	int32_t x760 = INT32_MIN;
	int32_t t17 = -5;

	t17 = (x757<=((x758<<x759)+x760));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x977 = INT32_MAX;
	uint32_t x978 = UINT32_MAX;
	int8_t x979 = 3;
	volatile int32_t t18 = -8900;

	t18 = (x977<=((x978<<x979)+x980));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1013 = UINT32_MAX;
	int8_t x1015 = 11;
	int8_t x1016 = INT8_MAX;
	volatile int32_t t19 = -3;

	t19 = (x1013<=((x1014<<x1015)+x1016));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1062 = UINT64_MAX;
	static volatile int64_t x1064 = 9767206LL;
	volatile int32_t t20 = 1489;

	t20 = (x1061<=((x1062<<x1063)+x1064));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1201 = UINT8_MAX;
	int8_t x1202 = INT8_MAX;
	static uint8_t x1203 = 6U;
	uint32_t x1204 = UINT32_MAX;

	t21 = (x1201<=((x1202<<x1203)+x1204));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1341 = -1LL;
	uint8_t x1342 = UINT8_MAX;
	int8_t x1343 = 0;
	int16_t x1344 = -1;
	static int32_t t22 = 4;

	t22 = (x1341<=((x1342<<x1343)+x1344));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1513 = 3388;
	static uint64_t x1514 = 113973900LLU;
	int16_t x1516 = INT16_MAX;

	t23 = (x1513<=((x1514<<x1515)+x1516));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1537 = INT16_MIN;
	uint8_t x1538 = 8U;
	int32_t t24 = -10;

	t24 = (x1537<=((x1538<<x1539)+x1540));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1717 = INT16_MAX;
	uint64_t x1718 = UINT64_MAX;
	uint16_t x1719 = 15U;
	int16_t x1720 = -2420;

	t25 = (x1717<=((x1718<<x1719)+x1720));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1769 = -1;
	static int16_t x1770 = 2886;
	static volatile uint8_t x1771 = 1U;
	uint8_t x1772 = 30U;
	int32_t t26 = -3580;

	t26 = (x1769<=((x1770<<x1771)+x1772));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1773 = INT64_MIN;
	uint32_t x1774 = 7460280U;
	static int8_t x1776 = INT8_MAX;
	int32_t t27 = -1;

	t27 = (x1773<=((x1774<<x1775)+x1776));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1797 = 1U;
	static uint8_t x1798 = UINT8_MAX;
	uint32_t x1799 = 6U;
	int64_t x1800 = -1LL;
	volatile int32_t t28 = -79;

	t28 = (x1797<=((x1798<<x1799)+x1800));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1813 = INT32_MIN;
	uint64_t x1814 = 418066974LLU;
	volatile uint16_t x1815 = 7U;
	int64_t x1816 = -1LL;

	t29 = (x1813<=((x1814<<x1815)+x1816));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1893 = -1;
	uint64_t x1894 = 100172LLU;
	volatile int8_t x1895 = 15;
	int64_t x1896 = -1LL;

	t30 = (x1893<=((x1894<<x1895)+x1896));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1941 = INT32_MIN;
	static volatile uint8_t x1942 = 5U;
	uint8_t x1943 = 28U;
	uint8_t x1944 = 43U;

	t31 = (x1941<=((x1942<<x1943)+x1944));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1998 = 85729177LLU;
	uint8_t x1999 = 1U;
	int16_t x2000 = INT16_MIN;
	int32_t t32 = -175646;

	t32 = (x1997<=((x1998<<x1999)+x2000));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2013 = -1;
	uint32_t x2014 = 1945652990U;
	int64_t x2016 = 1257683065022208683LL;
	int32_t t33 = 1674;

	t33 = (x2013<=((x2014<<x2015)+x2016));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2029 = -1;
	static uint32_t x2030 = 191492500U;
	int8_t x2031 = 2;
	volatile int32_t t34 = 365627633;

	t34 = (x2029<=((x2030<<x2031)+x2032));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x2065 = -1;
	uint8_t x2066 = 4U;
	uint8_t x2068 = 1U;

	t35 = (x2065<=((x2066<<x2067)+x2068));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2141 = INT64_MAX;
	static uint64_t x2142 = UINT64_MAX;
	volatile uint64_t x2143 = 20LLU;
	uint16_t x2144 = UINT16_MAX;
	static volatile int32_t t36 = -127862;

	t36 = (x2141<=((x2142<<x2143)+x2144));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2209 = 3U;
	volatile uint64_t x2210 = 860121LLU;
	int8_t x2211 = 0;
	int8_t x2212 = -20;
	volatile int32_t t37 = 405473506;

	t37 = (x2209<=((x2210<<x2211)+x2212));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2261 = 760;
	uint64_t x2262 = 2056617598957LLU;
	uint8_t x2263 = 7U;
	static uint8_t x2264 = 127U;
	int32_t t38 = -153946;

	t38 = (x2261<=((x2262<<x2263)+x2264));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2293 = INT64_MIN;
	volatile uint16_t x2294 = UINT16_MAX;
	uint64_t x2295 = 1LLU;
	int32_t t39 = -144;

	t39 = (x2293<=((x2294<<x2295)+x2296));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2342 = 36089821355LL;
	uint32_t x2343 = 3U;
	static volatile uint16_t x2344 = UINT16_MAX;
	int32_t t40 = -86559006;

	t40 = (x2341<=((x2342<<x2343)+x2344));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2393 = INT8_MIN;
	volatile int8_t x2394 = 0;
	uint8_t x2395 = 17U;
	int32_t x2396 = INT32_MIN;
	volatile int32_t t41 = -84882;

	t41 = (x2393<=((x2394<<x2395)+x2396));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2519 = 1U;
	volatile int32_t t42 = 167340823;

	t42 = (x2517<=((x2518<<x2519)+x2520));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x2662 = 28455U;
	static volatile uint8_t x2663 = 2U;
	uint64_t x2664 = 11557494740LLU;
	volatile int32_t t43 = 8466;

	t43 = (x2661<=((x2662<<x2663)+x2664));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2753 = INT32_MIN;
	uint64_t x2755 = 16LLU;
	int64_t x2756 = 26508349LL;
	int32_t t44 = 75;

	t44 = (x2753<=((x2754<<x2755)+x2756));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2789 = INT32_MAX;
	int16_t x2790 = INT16_MAX;
	int8_t x2791 = 0;
	int16_t x2792 = INT16_MAX;
	volatile int32_t t45 = -66233778;

	t45 = (x2789<=((x2790<<x2791)+x2792));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2853 = 7;
	uint16_t x2854 = 384U;
	static int8_t x2855 = 0;
	int8_t x2856 = INT8_MIN;
	int32_t t46 = 307270686;

	t46 = (x2853<=((x2854<<x2855)+x2856));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2865 = 0;
	uint8_t x2866 = 30U;
	volatile uint16_t x2867 = 1U;
	static volatile int32_t x2868 = INT32_MIN;
	int32_t t47 = 4;

	t47 = (x2865<=((x2866<<x2867)+x2868));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2884 = INT32_MAX;
	volatile int32_t t48 = 285;

	t48 = (x2881<=((x2882<<x2883)+x2884));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3025 = INT32_MAX;
	int8_t x3027 = 32;
	volatile int32_t t49 = -23;

	t49 = (x3025<=((x3026<<x3027)+x3028));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x3089 = -62644;
	static int32_t x3091 = 49;
	int8_t x3092 = INT8_MAX;
	static volatile int32_t t50 = -396263;

	t50 = (x3089<=((x3090<<x3091)+x3092));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3093 = 4U;
	int16_t x3094 = 743;
	uint32_t x3095 = 3U;
	int32_t t51 = -5023;

	t51 = (x3093<=((x3094<<x3095)+x3096));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3182 = UINT64_MAX;
	uint16_t x3183 = 7U;
	uint64_t x3184 = 22120803LLU;
	static int32_t t52 = 2990;

	t52 = (x3181<=((x3182<<x3183)+x3184));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x3210 = INT16_MAX;
	static int32_t t53 = 169510;

	t53 = (x3209<=((x3210<<x3211)+x3212));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3225 = INT16_MAX;
	int8_t x3226 = 0;
	int8_t x3227 = 5;
	int16_t x3228 = INT16_MIN;
	volatile int32_t t54 = 1572;

	t54 = (x3225<=((x3226<<x3227)+x3228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x3277 = INT8_MAX;
	uint32_t x3278 = 339U;
	int64_t x3280 = -59LL;
	int32_t t55 = -239432;

	t55 = (x3277<=((x3278<<x3279)+x3280));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3345 = 11708231U;
	uint64_t x3346 = 1596568671608578LLU;
	uint16_t x3347 = 0U;
	volatile int16_t x3348 = 0;
	volatile int32_t t56 = 79;

	t56 = (x3345<=((x3346<<x3347)+x3348));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3401 = -2035982942379460LL;
	uint32_t x3402 = UINT32_MAX;
	static volatile int8_t x3403 = 0;
	volatile int32_t x3404 = INT32_MIN;
	int32_t t57 = 121795;

	t57 = (x3401<=((x3402<<x3403)+x3404));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x3413 = INT8_MAX;
	int16_t x3414 = INT16_MAX;
	volatile int8_t x3415 = 2;

	t58 = (x3413<=((x3414<<x3415)+x3416));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x3437 = INT16_MIN;
	static uint64_t x3438 = 1851440945719651611LLU;
	static uint32_t x3439 = 48U;

	t59 = (x3437<=((x3438<<x3439)+x3440));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3453 = 92421770272LL;
	static volatile uint8_t x3454 = UINT8_MAX;
	volatile int16_t x3455 = 6;
	int8_t x3456 = INT8_MAX;

	t60 = (x3453<=((x3454<<x3455)+x3456));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3539 = 13;
	static int64_t x3540 = INT64_MIN;
	static volatile int32_t t61 = 105259;

	t61 = (x3537<=((x3538<<x3539)+x3540));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3665 = INT16_MIN;
	int8_t x3666 = INT8_MAX;
	int8_t x3667 = 1;
	uint64_t x3668 = 3LLU;
	volatile int32_t t62 = 7549716;

	t62 = (x3665<=((x3666<<x3667)+x3668));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3761 = -1;
	static volatile int16_t x3762 = INT16_MAX;
	uint8_t x3763 = 3U;
	static int32_t t63 = 8072583;

	t63 = (x3761<=((x3762<<x3763)+x3764));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x3881 = UINT64_MAX;
	uint16_t x3883 = 1U;
	uint64_t x3884 = UINT64_MAX;
	int32_t t64 = -3;

	t64 = (x3881<=((x3882<<x3883)+x3884));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3934 = 4547U;
	static uint16_t x3935 = 1U;
	int32_t t65 = 7960605;

	t65 = (x3933<=((x3934<<x3935)+x3936));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3937 = -1;
	volatile uint16_t x3938 = UINT16_MAX;
	volatile uint8_t x3939 = 0U;
	int32_t x3940 = 461337586;

	t66 = (x3937<=((x3938<<x3939)+x3940));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3945 = INT8_MAX;
	int32_t x3946 = 109;
	static volatile uint32_t x3947 = 23U;
	int32_t x3948 = INT32_MIN;
	int32_t t67 = -164;

	t67 = (x3945<=((x3946<<x3947)+x3948));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4029 = INT64_MAX;
	volatile int32_t x4030 = 37875;
	volatile int64_t x4032 = -1LL;
	static volatile int32_t t68 = -1559012;

	t68 = (x4029<=((x4030<<x4031)+x4032));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4037 = 21;
	volatile uint8_t x4038 = 1U;
	uint64_t x4039 = 0LLU;

	t69 = (x4037<=((x4038<<x4039)+x4040));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4153 = INT32_MIN;
	static int16_t x4154 = 3;
	int32_t x4156 = 372569;

	t70 = (x4153<=((x4154<<x4155)+x4156));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4162 = 132953854U;
	static int8_t x4163 = 3;
	int8_t x4164 = INT8_MAX;
	int32_t t71 = 3;

	t71 = (x4161<=((x4162<<x4163)+x4164));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4301 = INT64_MAX;
	static uint8_t x4302 = UINT8_MAX;
	static volatile uint32_t x4303 = 0U;
	static uint8_t x4304 = 3U;
	volatile int32_t t72 = 338920;

	t72 = (x4301<=((x4302<<x4303)+x4304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4409 = -1;
	volatile int16_t x4410 = 95;
	static volatile uint8_t x4411 = 0U;
	static int32_t t73 = 18;

	t73 = (x4409<=((x4410<<x4411)+x4412));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4657 = UINT32_MAX;
	volatile uint32_t x4658 = 1U;
	volatile int8_t x4659 = 1;
	int16_t x4660 = INT16_MIN;
	volatile int32_t t74 = 481;

	t74 = (x4657<=((x4658<<x4659)+x4660));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4690 = UINT8_MAX;
	static volatile int32_t t75 = 323613618;

	t75 = (x4689<=((x4690<<x4691)+x4692));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4777 = INT16_MIN;
	uint16_t x4778 = 6U;
	uint8_t x4779 = 0U;
	volatile uint8_t x4780 = 16U;
	static volatile int32_t t76 = 20439643;

	t76 = (x4777<=((x4778<<x4779)+x4780));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4906 = UINT32_MAX;
	volatile uint8_t x4907 = 0U;
	int16_t x4908 = INT16_MIN;
	int32_t t77 = -25705741;

	t77 = (x4905<=((x4906<<x4907)+x4908));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5014 = 3;
	int8_t x5015 = 21;
	uint64_t x5016 = 691720836LLU;
	volatile int32_t t78 = -225414;

	t78 = (x5013<=((x5014<<x5015)+x5016));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5034 = 6U;

	t79 = (x5033<=((x5034<<x5035)+x5036));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5061 = 27188751U;
	uint16_t x5062 = UINT16_MAX;
	int16_t x5063 = 1;

	t80 = (x5061<=((x5062<<x5063)+x5064));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5197 = 10U;
	uint64_t x5198 = 29977049771530LLU;
	int8_t x5199 = 43;
	static int16_t x5200 = INT16_MIN;
	volatile int32_t t81 = -9167367;

	t81 = (x5197<=((x5198<<x5199)+x5200));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5250 = INT8_MAX;
	uint8_t x5251 = 0U;
	static volatile int64_t x5252 = -1LL;
	static int32_t t82 = -16278;

	t82 = (x5249<=((x5250<<x5251)+x5252));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x5281 = INT32_MAX;
	int8_t x5282 = 61;
	static int16_t x5284 = INT16_MAX;
	int32_t t83 = 2;

	t83 = (x5281<=((x5282<<x5283)+x5284));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5293 = 1215U;
	static uint8_t x5294 = 0U;
	static uint16_t x5295 = 30U;
	int64_t x5296 = INT64_MIN;
	int32_t t84 = 101866;

	t84 = (x5293<=((x5294<<x5295)+x5296));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5314 = 51650848LLU;
	static volatile int32_t x5315 = 24;
	volatile int8_t x5316 = 9;
	int32_t t85 = 426655;

	t85 = (x5313<=((x5314<<x5315)+x5316));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5323 = 1U;
	volatile int32_t t86 = 1432;

	t86 = (x5321<=((x5322<<x5323)+x5324));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5386 = 4353089U;
	uint8_t x5387 = 2U;
	int32_t x5388 = INT32_MIN;
	int32_t t87 = 29016751;

	t87 = (x5385<=((x5386<<x5387)+x5388));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x5501 = 26121638637092573LLU;
	uint64_t x5502 = 74264899LLU;
	static volatile int8_t x5503 = 0;
	static int8_t x5504 = INT8_MAX;
	int32_t t88 = 171;

	t88 = (x5501<=((x5502<<x5503)+x5504));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5653 = 3;
	uint64_t x5656 = UINT64_MAX;
	static volatile int32_t t89 = -5714475;

	t89 = (x5653<=((x5654<<x5655)+x5656));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x5657 = -7344110462938LL;
	uint64_t x5658 = UINT64_MAX;
	static uint64_t x5659 = 0LLU;
	int8_t x5660 = 2;
	volatile int32_t t90 = 57039;

	t90 = (x5657<=((x5658<<x5659)+x5660));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5669 = 575052379LLU;
	int16_t x5670 = 3;
	uint32_t x5671 = 16U;
	uint8_t x5672 = UINT8_MAX;
	int32_t t91 = -1;

	t91 = (x5669<=((x5670<<x5671)+x5672));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5813 = INT16_MIN;
	int32_t t92 = -16604643;

	t92 = (x5813<=((x5814<<x5815)+x5816));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x5925 = INT64_MIN;
	uint64_t x5926 = 186LLU;
	static uint8_t x5927 = 0U;
	static volatile int64_t x5928 = 133LL;
	volatile int32_t t93 = 0;

	t93 = (x5925<=((x5926<<x5927)+x5928));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5981 = UINT8_MAX;
	uint16_t x5982 = 117U;
	uint16_t x5983 = 20U;
	int64_t x5984 = -1LL;

	t94 = (x5981<=((x5982<<x5983)+x5984));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6009 = -204;
	uint64_t x6010 = 257601303LLU;
	uint8_t x6011 = 1U;
	volatile int32_t t95 = 2574;

	t95 = (x6009<=((x6010<<x6011)+x6012));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x6029 = -1;
	static uint8_t x6030 = 13U;
	static uint8_t x6031 = 0U;
	uint16_t x6032 = 2480U;
	volatile int32_t t96 = 8316492;

	t96 = (x6029<=((x6030<<x6031)+x6032));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6082 = 18465925LLU;
	uint16_t x6083 = 12U;
	int16_t x6084 = INT16_MIN;
	int32_t t97 = 446750;

	t97 = (x6081<=((x6082<<x6083)+x6084));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x6101 = -1;
	uint64_t x6102 = UINT64_MAX;
	uint64_t x6104 = 976292LLU;

	t98 = (x6101<=((x6102<<x6103)+x6104));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6118 = 50;
	int8_t x6119 = 7;
	static uint64_t x6120 = 195465LLU;
	int32_t t99 = -195;

	t99 = (x6117<=((x6118<<x6119)+x6120));

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

