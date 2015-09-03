#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x157 = -1;
uint8_t x160 = 54U;
uint64_t x224 = 6LLU;
int16_t x290 = INT16_MAX;
volatile int32_t t6 = 107;
uint8_t x533 = 102U;
int16_t x535 = INT16_MIN;
int16_t x539 = INT16_MIN;
uint8_t x540 = 25U;
volatile int32_t t8 = 1264;
static int64_t x603 = INT64_MIN;
int32_t t9 = -42736;
uint64_t x703 = 11495775111LLU;
uint16_t x842 = 29195U;
volatile int8_t x856 = 25;
volatile int32_t t12 = 2573;
int64_t x946 = INT64_MAX;
uint64_t x1110 = 504953771LLU;
volatile int32_t t17 = -10701752;
volatile int32_t x1265 = INT32_MIN;
int32_t t19 = -94527047;
volatile int16_t x1299 = 1;
uint16_t x1336 = 3U;
static uint64_t x1367 = UINT64_MAX;
uint8_t x1368 = 12U;
static volatile uint8_t x1428 = 12U;
int8_t x1649 = INT8_MAX;
int8_t x1703 = INT8_MIN;
int8_t x1704 = 26;
static uint8_t x1792 = 0U;
static uint16_t x1882 = UINT16_MAX;
uint8_t x1884 = 0U;
static volatile uint16_t x1915 = UINT16_MAX;
volatile int32_t t33 = 7135226;
uint8_t x2156 = 0U;
uint64_t x2182 = UINT64_MAX;
int16_t x2183 = INT16_MIN;
static int32_t t36 = 38;
int8_t x2288 = 26;
uint16_t x2293 = 18546U;
int16_t x2544 = 5;
uint64_t x2765 = UINT64_MAX;
int64_t x2766 = INT64_MIN;
volatile int32_t t46 = -4834;
int16_t x3235 = -1;
int16_t x3374 = -1;
uint32_t x3376 = 3U;
int8_t x3438 = -1;
volatile uint16_t x3440 = 2U;
volatile int8_t x3457 = INT8_MAX;
int32_t t53 = 8;
uint16_t x3642 = 16124U;
int16_t x3666 = INT16_MIN;
int32_t t55 = 423641;
int8_t x4121 = 1;
int8_t x4122 = 1;
int32_t x4217 = -1;
int32_t t59 = 8653;
static volatile uint64_t x4259 = 916LLU;
int8_t x4288 = 1;
volatile int8_t x4380 = 17;
int32_t t66 = -3054;
uint16_t x4506 = UINT16_MAX;
int16_t x4598 = -1;
volatile int16_t x4675 = INT16_MIN;
volatile uint16_t x4769 = 7U;
uint16_t x4771 = 989U;
static int32_t x4772 = 20;
static int64_t x4881 = 10098846182259LL;
static uint32_t x4882 = 111829006U;
int32_t t79 = -225159;
uint32_t x5118 = UINT32_MAX;
static uint16_t x5123 = 2169U;
uint64_t x5227 = UINT64_MAX;
volatile int32_t t84 = 1;
volatile int32_t t86 = -6;
static int32_t x5434 = 1731948;
static volatile int32_t t87 = -16;
int16_t x5457 = INT16_MAX;
int64_t x5509 = -2043066321986904578LL;
volatile int32_t t90 = 9205125;
uint32_t x5522 = 6074183U;
static uint8_t x5543 = 1U;
int8_t x5573 = INT8_MAX;
int32_t t94 = 336;
uint8_t x5587 = 1U;
volatile int32_t t95 = 50977129;
volatile int32_t x5605 = INT32_MIN;
uint8_t x5647 = 53U;
uint64_t x6014 = 244130638312685LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint32_t x2 = 111U;
	uint16_t x3 = 4184U;
	uint32_t x4 = 1U;
	volatile int32_t t0 = 627119;

	t0 = (x1==((x2-x3)>>x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static int8_t x6 = 1;
	static int16_t x7 = INT16_MIN;
	volatile uint8_t x8 = 0U;
	int32_t t1 = -398;

	t1 = (x5==((x6-x7)>>x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x117 = 4;
	int64_t x118 = -1LL;
	int16_t x119 = -1;
	uint8_t x120 = 1U;
	static volatile int32_t t2 = 15109;

	t2 = (x117==((x118-x119)>>x120));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x158 = UINT64_MAX;
	int16_t x159 = INT16_MIN;
	volatile int32_t t3 = 57948000;

	t3 = (x157==((x158-x159)>>x160));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x221 = INT16_MAX;
	volatile int32_t x222 = INT32_MAX;
	uint64_t x223 = UINT64_MAX;
	volatile int32_t t4 = 6218;

	t4 = (x221==((x222-x223)>>x224));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x289 = 2;
	volatile int32_t x291 = 3;
	int32_t x292 = 1;
	volatile int32_t t5 = -1;

	t5 = (x289==((x290-x291)>>x292));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x525 = INT64_MAX;
	volatile uint64_t x526 = 7780466936974468LLU;
	uint32_t x527 = 30607586U;
	volatile int32_t x528 = 2;

	t6 = (x525==((x526-x527)>>x528));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x534 = 0U;
	uint8_t x536 = 3U;
	volatile int32_t t7 = -248;

	t7 = (x533==((x534-x535)>>x536));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x537 = UINT64_MAX;
	volatile uint64_t x538 = 1874390019LLU;

	t8 = (x537==((x538-x539)>>x540));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x601 = 11081U;
	volatile int16_t x602 = -34;
	int16_t x604 = 3;

	t9 = (x601==((x602-x603)>>x604));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x701 = INT8_MIN;
	int64_t x702 = INT64_MAX;
	uint8_t x704 = 63U;
	volatile int32_t t10 = 196;

	t10 = (x701==((x702-x703)>>x704));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x841 = -1;
	uint16_t x843 = 1627U;
	uint16_t x844 = 1U;
	int32_t t11 = 0;

	t11 = (x841==((x842-x843)>>x844));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x853 = 533395688LLU;
	int8_t x854 = INT8_MIN;
	int64_t x855 = -106096028970200LL;

	t12 = (x853==((x854-x855)>>x856));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x917 = INT64_MIN;
	int32_t x918 = 14;
	uint32_t x919 = UINT32_MAX;
	uint8_t x920 = 6U;
	int32_t t13 = -721628992;

	t13 = (x917==((x918-x919)>>x920));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x945 = 115022U;
	uint32_t x947 = UINT32_MAX;
	int16_t x948 = 1;
	int32_t t14 = -523231;

	t14 = (x945==((x946-x947)>>x948));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1057 = -431475395;
	uint8_t x1058 = UINT8_MAX;
	int16_t x1059 = INT16_MIN;
	static int8_t x1060 = 3;
	volatile int32_t t15 = 2;

	t15 = (x1057==((x1058-x1059)>>x1060));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1109 = 4LLU;
	volatile uint32_t x1111 = 3279U;
	volatile uint8_t x1112 = 2U;
	static volatile int32_t t16 = -6462412;

	t16 = (x1109==((x1110-x1111)>>x1112));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1225 = INT32_MIN;
	uint32_t x1226 = 3U;
	uint16_t x1227 = 4U;
	uint8_t x1228 = 1U;

	t17 = (x1225==((x1226-x1227)>>x1228));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1266 = 30689U;
	uint8_t x1267 = 0U;
	uint16_t x1268 = 3U;
	static volatile int32_t t18 = 10635467;

	t18 = (x1265==((x1266-x1267)>>x1268));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1269 = INT16_MAX;
	volatile int64_t x1270 = INT64_MAX;
	volatile int64_t x1271 = INT64_MAX;
	uint8_t x1272 = 6U;

	t19 = (x1269==((x1270-x1271)>>x1272));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1297 = INT32_MAX;
	uint16_t x1298 = 439U;
	static int16_t x1300 = 1;
	int32_t t20 = -231;

	t20 = (x1297==((x1298-x1299)>>x1300));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1333 = 8167264953LL;
	static uint64_t x1334 = UINT64_MAX;
	int64_t x1335 = -1LL;
	volatile int32_t t21 = 516;

	t21 = (x1333==((x1334-x1335)>>x1336));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1365 = UINT32_MAX;
	static uint16_t x1366 = 24U;
	static int32_t t22 = 1;

	t22 = (x1365==((x1366-x1367)>>x1368));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1389 = UINT16_MAX;
	int8_t x1390 = INT8_MIN;
	static volatile int64_t x1391 = INT64_MIN;
	uint8_t x1392 = 7U;
	int32_t t23 = -568721;

	t23 = (x1389==((x1390-x1391)>>x1392));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1425 = UINT16_MAX;
	uint16_t x1426 = UINT16_MAX;
	volatile int16_t x1427 = INT16_MIN;
	volatile int32_t t24 = -3;

	t24 = (x1425==((x1426-x1427)>>x1428));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1581 = INT16_MAX;
	int16_t x1582 = 280;
	int32_t x1583 = -1;
	uint8_t x1584 = 11U;
	int32_t t25 = -3513;

	t25 = (x1581==((x1582-x1583)>>x1584));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1650 = 114LLU;
	int8_t x1651 = -1;
	static volatile int16_t x1652 = 25;
	int32_t t26 = 6837433;

	t26 = (x1649==((x1650-x1651)>>x1652));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1701 = UINT64_MAX;
	volatile int8_t x1702 = INT8_MIN;
	volatile int32_t t27 = -1;

	t27 = (x1701==((x1702-x1703)>>x1704));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1789 = INT16_MAX;
	static int32_t x1790 = 182038;
	uint32_t x1791 = UINT32_MAX;
	volatile int32_t t28 = -241877585;

	t28 = (x1789==((x1790-x1791)>>x1792));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1833 = 65U;
	volatile uint64_t x1834 = UINT64_MAX;
	int32_t x1835 = INT32_MAX;
	static volatile int64_t x1836 = 28LL;
	static int32_t t29 = 6;

	t29 = (x1833==((x1834-x1835)>>x1836));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1881 = -1LL;
	int16_t x1883 = INT16_MIN;
	static int32_t t30 = 28898;

	t30 = (x1881==((x1882-x1883)>>x1884));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1893 = 180;
	static uint8_t x1894 = 3U;
	volatile int8_t x1895 = INT8_MIN;
	static uint8_t x1896 = 3U;
	volatile int32_t t31 = -777100;

	t31 = (x1893==((x1894-x1895)>>x1896));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1913 = INT8_MIN;
	uint64_t x1914 = 939375486787312808LLU;
	int8_t x1916 = 16;
	volatile int32_t t32 = 8095;

	t32 = (x1913==((x1914-x1915)>>x1916));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1953 = INT32_MIN;
	volatile int32_t x1954 = INT32_MAX;
	uint8_t x1955 = 12U;
	int8_t x1956 = 1;

	t33 = (x1953==((x1954-x1955)>>x1956));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2153 = 25819U;
	static uint64_t x2154 = 8030971024823836391LLU;
	int64_t x2155 = -1LL;
	int32_t t34 = 0;

	t34 = (x2153==((x2154-x2155)>>x2156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2173 = 1;
	uint8_t x2174 = UINT8_MAX;
	int8_t x2175 = INT8_MIN;
	uint8_t x2176 = 1U;
	static int32_t t35 = -5364;

	t35 = (x2173==((x2174-x2175)>>x2176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2181 = -1LL;
	uint8_t x2184 = 30U;

	t36 = (x2181==((x2182-x2183)>>x2184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2201 = -1;
	int8_t x2202 = INT8_MIN;
	int64_t x2203 = -1163639650066933664LL;
	int16_t x2204 = 4;
	int32_t t37 = -1;

	t37 = (x2201==((x2202-x2203)>>x2204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2257 = 1;
	uint64_t x2258 = UINT64_MAX;
	int8_t x2259 = INT8_MIN;
	uint8_t x2260 = 16U;
	volatile int32_t t38 = 0;

	t38 = (x2257==((x2258-x2259)>>x2260));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2285 = -1;
	uint32_t x2286 = 54U;
	uint16_t x2287 = 45U;
	int32_t t39 = -933437449;

	t39 = (x2285==((x2286-x2287)>>x2288));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2294 = -1LL;
	volatile int32_t x2295 = -1;
	static uint8_t x2296 = 0U;
	int32_t t40 = -56290;

	t40 = (x2293==((x2294-x2295)>>x2296));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2541 = -1;
	uint16_t x2542 = 1U;
	static volatile int8_t x2543 = -48;
	int32_t t41 = 3545;

	t41 = (x2541==((x2542-x2543)>>x2544));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2589 = INT16_MAX;
	static int16_t x2590 = -1;
	static uint64_t x2591 = UINT64_MAX;
	volatile uint16_t x2592 = 15U;
	int32_t t42 = 5262464;

	t42 = (x2589==((x2590-x2591)>>x2592));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2689 = -1;
	int64_t x2690 = INT64_MAX;
	int8_t x2691 = INT8_MAX;
	int64_t x2692 = 43LL;
	volatile int32_t t43 = 26;

	t43 = (x2689==((x2690-x2691)>>x2692));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2757 = 183650901417316LLU;
	static uint64_t x2758 = 491400402600897LLU;
	uint32_t x2759 = 411631U;
	static int32_t x2760 = 1;
	volatile int32_t t44 = -1;

	t44 = (x2757==((x2758-x2759)>>x2760));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2767 = UINT64_MAX;
	uint8_t x2768 = 1U;
	volatile int32_t t45 = 182856082;

	t45 = (x2765==((x2766-x2767)>>x2768));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3093 = 1978517550U;
	int64_t x3094 = 3189978198791374768LL;
	volatile int16_t x3095 = INT16_MAX;
	uint8_t x3096 = 26U;

	t46 = (x3093==((x3094-x3095)>>x3096));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x3109 = 16490470U;
	int8_t x3110 = 12;
	uint16_t x3111 = 1U;
	static int8_t x3112 = 23;
	int32_t t47 = 14;

	t47 = (x3109==((x3110-x3111)>>x3112));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3233 = -1747127;
	volatile int16_t x3234 = INT16_MAX;
	uint8_t x3236 = 0U;
	int32_t t48 = -85;

	t48 = (x3233==((x3234-x3235)>>x3236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x3289 = 11;
	static volatile int64_t x3290 = 504682030182LL;
	int64_t x3291 = -60095135LL;
	int32_t x3292 = 2;
	volatile int32_t t49 = -29012315;

	t49 = (x3289==((x3290-x3291)>>x3292));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3373 = 8U;
	static int64_t x3375 = INT64_MIN;
	static volatile int32_t t50 = -44882848;

	t50 = (x3373==((x3374-x3375)>>x3376));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3393 = UINT32_MAX;
	int32_t x3394 = 5048;
	static int16_t x3395 = INT16_MIN;
	static int8_t x3396 = 2;
	volatile int32_t t51 = 397116;

	t51 = (x3393==((x3394-x3395)>>x3396));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3437 = -1LL;
	uint64_t x3439 = UINT64_MAX;
	int32_t t52 = -62667999;

	t52 = (x3437==((x3438-x3439)>>x3440));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3458 = 6;
	int32_t x3459 = 0;
	volatile uint8_t x3460 = 0U;

	t53 = (x3457==((x3458-x3459)>>x3460));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3641 = UINT8_MAX;
	static int32_t x3643 = -103;
	uint8_t x3644 = 8U;
	volatile int32_t t54 = 536393;

	t54 = (x3641==((x3642-x3643)>>x3644));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x3665 = INT32_MIN;
	uint64_t x3667 = 70041647300715LLU;
	uint64_t x3668 = 28LLU;

	t55 = (x3665==((x3666-x3667)>>x3668));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3721 = UINT32_MAX;
	static int32_t x3722 = INT32_MAX;
	int16_t x3723 = 1;
	volatile int8_t x3724 = 1;
	int32_t t56 = -1;

	t56 = (x3721==((x3722-x3723)>>x3724));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3837 = INT8_MIN;
	int64_t x3838 = INT64_MIN;
	int64_t x3839 = INT64_MIN;
	static uint8_t x3840 = 5U;
	int32_t t57 = 809;

	t57 = (x3837==((x3838-x3839)>>x3840));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x4123 = INT16_MIN;
	static int8_t x4124 = 0;
	volatile int32_t t58 = 3;

	t58 = (x4121==((x4122-x4123)>>x4124));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x4218 = UINT32_MAX;
	int32_t x4219 = INT32_MIN;
	volatile uint8_t x4220 = 1U;

	t59 = (x4217==((x4218-x4219)>>x4220));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4233 = INT64_MIN;
	uint64_t x4234 = 397589990314LLU;
	volatile int8_t x4235 = -46;
	int8_t x4236 = 1;
	int32_t t60 = 0;

	t60 = (x4233==((x4234-x4235)>>x4236));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4257 = -369609;
	static int8_t x4258 = INT8_MAX;
	uint32_t x4260 = 0U;
	static volatile int32_t t61 = -264345663;

	t61 = (x4257==((x4258-x4259)>>x4260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4285 = UINT8_MAX;
	static uint16_t x4286 = 9U;
	volatile uint8_t x4287 = 1U;
	int32_t t62 = 4;

	t62 = (x4285==((x4286-x4287)>>x4288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4317 = 7599LLU;
	int64_t x4318 = 25LL;
	volatile int8_t x4319 = INT8_MIN;
	uint8_t x4320 = 11U;
	volatile int32_t t63 = -55;

	t63 = (x4317==((x4318-x4319)>>x4320));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4377 = INT32_MAX;
	int16_t x4378 = -1733;
	volatile int64_t x4379 = INT64_MIN;
	static int32_t t64 = -19608;

	t64 = (x4377==((x4378-x4379)>>x4380));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4425 = 81U;
	volatile uint16_t x4426 = 109U;
	uint16_t x4427 = 82U;
	static int8_t x4428 = 1;
	int32_t t65 = -36547174;

	t65 = (x4425==((x4426-x4427)>>x4428));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4445 = 516324526586LL;
	uint64_t x4446 = 135LLU;
	uint32_t x4447 = UINT32_MAX;
	uint8_t x4448 = 2U;

	t66 = (x4445==((x4446-x4447)>>x4448));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x4505 = INT8_MIN;
	int16_t x4507 = 1560;
	int8_t x4508 = 1;
	static volatile int32_t t67 = 2;

	t67 = (x4505==((x4506-x4507)>>x4508));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x4597 = 0;
	int8_t x4599 = -3;
	volatile uint16_t x4600 = 0U;
	int32_t t68 = -1216082;

	t68 = (x4597==((x4598-x4599)>>x4600));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4629 = 1;
	volatile int32_t x4630 = INT32_MAX;
	uint32_t x4631 = 8829U;
	uint16_t x4632 = 15U;
	volatile int32_t t69 = 247433112;

	t69 = (x4629==((x4630-x4631)>>x4632));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4665 = INT16_MIN;
	static volatile uint64_t x4666 = UINT64_MAX;
	int64_t x4667 = -1LL;
	uint8_t x4668 = 1U;
	static int32_t t70 = 225;

	t70 = (x4665==((x4666-x4667)>>x4668));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x4669 = 21U;
	static uint32_t x4670 = 815U;
	int32_t x4671 = INT32_MIN;
	volatile uint8_t x4672 = 18U;
	volatile int32_t t71 = 8056830;

	t71 = (x4669==((x4670-x4671)>>x4672));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4673 = 33U;
	uint8_t x4674 = 9U;
	uint64_t x4676 = 0LLU;
	static int32_t t72 = -48770;

	t72 = (x4673==((x4674-x4675)>>x4676));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4770 = 3607501560462862LLU;
	int32_t t73 = -628135;

	t73 = (x4769==((x4770-x4771)>>x4772));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4869 = 1354U;
	uint64_t x4870 = 890395390993761344LLU;
	int64_t x4871 = -1LL;
	uint32_t x4872 = 55U;
	volatile int32_t t74 = 4;

	t74 = (x4869==((x4870-x4871)>>x4872));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4883 = 48U;
	uint16_t x4884 = 2U;
	static volatile int32_t t75 = -3403889;

	t75 = (x4881==((x4882-x4883)>>x4884));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x4893 = 31U;
	static uint32_t x4894 = UINT32_MAX;
	int64_t x4895 = -1LL;
	volatile uint32_t x4896 = 2U;
	int32_t t76 = 10;

	t76 = (x4893==((x4894-x4895)>>x4896));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4969 = INT32_MIN;
	int16_t x4970 = -3;
	int64_t x4971 = INT64_MIN;
	uint8_t x4972 = 24U;
	volatile int32_t t77 = -12740955;

	t77 = (x4969==((x4970-x4971)>>x4972));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x5005 = 0U;
	uint8_t x5006 = UINT8_MAX;
	static int8_t x5007 = 10;
	int16_t x5008 = 0;
	int32_t t78 = -1801;

	t78 = (x5005==((x5006-x5007)>>x5008));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5093 = UINT8_MAX;
	uint8_t x5094 = 7U;
	volatile int8_t x5095 = -1;
	int32_t x5096 = 1;

	t79 = (x5093==((x5094-x5095)>>x5096));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5117 = INT64_MIN;
	uint16_t x5119 = 27U;
	static uint8_t x5120 = 17U;
	volatile int32_t t80 = 1;

	t80 = (x5117==((x5118-x5119)>>x5120));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x5121 = INT32_MAX;
	int16_t x5122 = INT16_MAX;
	static volatile int8_t x5124 = 0;
	int32_t t81 = -180799;

	t81 = (x5121==((x5122-x5123)>>x5124));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x5133 = 8616250539868LL;
	static uint16_t x5134 = 0U;
	int16_t x5135 = INT16_MIN;
	int8_t x5136 = 4;
	static int32_t t82 = -4;

	t82 = (x5133==((x5134-x5135)>>x5136));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5141 = 58U;
	int16_t x5142 = -1;
	int32_t x5143 = -406;
	uint8_t x5144 = 9U;
	static int32_t t83 = 26036607;

	t83 = (x5141==((x5142-x5143)>>x5144));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5225 = INT16_MIN;
	volatile int16_t x5226 = -1;
	uint16_t x5228 = 0U;

	t84 = (x5225==((x5226-x5227)>>x5228));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x5297 = INT16_MIN;
	int8_t x5298 = INT8_MIN;
	int32_t x5299 = INT32_MIN;
	uint16_t x5300 = 0U;
	int32_t t85 = -3;

	t85 = (x5297==((x5298-x5299)>>x5300));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5353 = UINT32_MAX;
	uint64_t x5354 = UINT64_MAX;
	int32_t x5355 = -1;
	int8_t x5356 = 0;

	t86 = (x5353==((x5354-x5355)>>x5356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5433 = INT8_MIN;
	volatile int8_t x5435 = INT8_MIN;
	uint16_t x5436 = 2U;

	t87 = (x5433==((x5434-x5435)>>x5436));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x5445 = 454179681;
	volatile uint32_t x5446 = 101U;
	uint32_t x5447 = 4237U;
	int8_t x5448 = 1;
	int32_t t88 = 435;

	t88 = (x5445==((x5446-x5447)>>x5448));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5458 = 2U;
	uint64_t x5459 = 636533LLU;
	static int8_t x5460 = 3;
	int32_t t89 = -1;

	t89 = (x5457==((x5458-x5459)>>x5460));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5510 = 3LL;
	int64_t x5511 = -1LL;
	int16_t x5512 = 46;

	t90 = (x5509==((x5510-x5511)>>x5512));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5517 = UINT32_MAX;
	int32_t x5518 = 19741;
	int32_t x5519 = -1;
	int8_t x5520 = 0;
	volatile int32_t t91 = 101363;

	t91 = (x5517==((x5518-x5519)>>x5520));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5521 = 1445947106U;
	uint8_t x5523 = 122U;
	volatile int8_t x5524 = 1;
	volatile int32_t t92 = 765309012;

	t92 = (x5521==((x5522-x5523)>>x5524));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5541 = 120U;
	static uint64_t x5542 = 5850LLU;
	uint8_t x5544 = 3U;
	int32_t t93 = -10115;

	t93 = (x5541==((x5542-x5543)>>x5544));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5574 = -1;
	uint64_t x5575 = 182LLU;
	uint32_t x5576 = 1U;

	t94 = (x5573==((x5574-x5575)>>x5576));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x5585 = -820100;
	uint16_t x5586 = UINT16_MAX;
	volatile int8_t x5588 = 0;

	t95 = (x5585==((x5586-x5587)>>x5588));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5606 = 165208LLU;
	int32_t x5607 = 82338;
	int8_t x5608 = 1;
	volatile int32_t t96 = -1;

	t96 = (x5605==((x5606-x5607)>>x5608));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5645 = INT64_MIN;
	uint64_t x5646 = UINT64_MAX;
	static uint8_t x5648 = 0U;
	volatile int32_t t97 = -482239;

	t97 = (x5645==((x5646-x5647)>>x5648));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5845 = 93U;
	uint8_t x5846 = 0U;
	int8_t x5847 = 0;
	int8_t x5848 = 1;
	static volatile int32_t t98 = -3024092;

	t98 = (x5845==((x5846-x5847)>>x5848));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6013 = -14;
	static int32_t x6015 = 1145;
	uint8_t x6016 = 31U;
	volatile int32_t t99 = -1;

	t99 = (x6013==((x6014-x6015)>>x6016));

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

