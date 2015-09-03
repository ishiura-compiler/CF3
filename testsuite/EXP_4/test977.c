#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x172 = 9U;
uint64_t t1 = 143371LLU;
int8_t x286 = INT8_MAX;
volatile int32_t x317 = INT32_MIN;
static int32_t t4 = -6856;
static int32_t x426 = 1;
int8_t x428 = 18;
int32_t x634 = INT32_MAX;
uint8_t x635 = 5U;
static int64_t x690 = INT64_MAX;
int8_t x757 = -52;
uint32_t t11 = 14U;
int16_t x880 = 3;
int16_t x882 = -1;
uint8_t x941 = UINT8_MAX;
static uint8_t x942 = 0U;
volatile uint64_t x943 = 71125260684LLU;
static volatile int32_t t16 = 8785;
int8_t x1001 = -1;
static volatile int64_t t21 = 79238271053LL;
int8_t x1389 = -7;
uint8_t x1392 = 3U;
uint8_t x1538 = 2U;
uint64_t t27 = UINT64_MAX;
static uint64_t x1951 = UINT64_MAX;
volatile uint64_t t29 = 15231972LLU;
static uint8_t x2143 = UINT8_MAX;
int16_t x2273 = INT16_MIN;
uint32_t x2275 = 33764569U;
volatile int16_t x2325 = 14;
volatile uint8_t x2328 = 55U;
volatile uint64_t t32 = 96497439LLU;
static int16_t x2450 = -1;
int16_t x2502 = INT16_MAX;
static int16_t x2504 = 0;
uint8_t x2627 = UINT8_MAX;
uint16_t x2667 = 59U;
int16_t x2846 = INT16_MIN;
uint16_t x2872 = 8U;
uint32_t x3021 = 5915U;
uint16_t x3023 = 8446U;
uint8_t x3024 = 4U;
volatile int64_t t44 = 1871928838284LL;
uint64_t t46 = 8935836LLU;
static uint8_t x3370 = 19U;
int8_t x3371 = 0;
static volatile uint64_t x3381 = UINT64_MAX;
volatile int8_t x3382 = 3;
static uint8_t x3480 = 1U;
static int16_t x3512 = 10;
static volatile uint64_t x3651 = 363065LLU;
static int16_t x3798 = INT16_MIN;
int32_t x4036 = 1;
volatile int32_t x4143 = 54052066;
static volatile int32_t t58 = 7742035;
static int16_t x4379 = 5;
int64_t t60 = INT64_MIN;
volatile int32_t x4554 = -52469817;
int8_t x4555 = 5;
volatile int16_t x4658 = -1294;
uint8_t x4753 = 28U;
uint8_t x4906 = 10U;
int32_t x4908 = 1;
static int64_t t69 = 5LL;
int32_t x5287 = 57;
static volatile int32_t x5392 = 2;
int16_t x5594 = -1;
uint32_t x5735 = 10077114U;
volatile uint32_t t78 = 2329407U;
uint16_t x6076 = 24U;
volatile uint64_t x6207 = 2082054737LLU;
static int32_t x6301 = INT32_MIN;
uint32_t t83 = 330870969U;
uint16_t x6348 = 6U;
static int8_t x6377 = INT8_MIN;
uint64_t t85 = 13292719610128LLU;
static uint16_t x6389 = 1764U;
int8_t x6390 = -1;
static volatile uint8_t x6489 = UINT8_MAX;
int64_t x6618 = -26959125281LL;
volatile int8_t x6619 = INT8_MAX;
int64_t t90 = -42LL;
static int32_t x6622 = -1;
volatile int32_t x6633 = INT32_MAX;
static volatile int16_t x6635 = INT16_MAX;
uint64_t t92 = 521777686LLU;
int32_t x6705 = 4;
uint8_t x6797 = 48U;
uint64_t t97 = 6LLU;
uint64_t x6815 = UINT64_MAX;
volatile uint64_t t98 = 59139312965LLU;
volatile int64_t t99 = -25972310181902LL;


void f0(void) {
	volatile int32_t x77 = -6;
	int16_t x78 = INT16_MIN;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = 2;
	volatile uint64_t t0 = 2099221314559939710LLU;

	t0 = (x77-(x78&(x79<<x80)));

	if (t0 != 32762LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x169 = -1LL;
	static uint64_t x170 = UINT64_MAX;
	static int8_t x171 = 1;

	t1 = (x169-(x170&(x171<<x172)));

	if (t1 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x285 = INT64_MAX;
	int32_t x287 = 13032;
	uint64_t x288 = 2LLU;
	volatile int64_t t2 = -6884732124604724LL;

	t2 = (x285-(x286&(x287<<x288)));

	if (t2 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x318 = 720288666265056857LLU;
	uint8_t x319 = 1U;
	uint8_t x320 = 4U;
	static uint64_t t3 = 996044LLU;

	t3 = (x317-(x318&(x319<<x320)));

	if (t3 != 18446744071562067952LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x357 = 55111;
	uint8_t x358 = 57U;
	static uint16_t x359 = UINT16_MAX;
	int32_t x360 = 3;

	t4 = (x357-(x358&(x359<<x360)));

	if (t4 != 55055) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x425 = 3U;
	static uint8_t x427 = 8U;
	static int32_t t5 = 323;

	t5 = (x425-(x426&(x427<<x428)));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x561 = -5;
	static uint16_t x562 = 485U;
	uint8_t x563 = 14U;
	int64_t x564 = 2LL;
	static volatile int32_t t6 = 183854848;

	t6 = (x561-(x562&(x563<<x564)));

	if (t6 != -37) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x617 = 1590U;
	uint8_t x618 = UINT8_MAX;
	static uint64_t x619 = UINT64_MAX;
	volatile uint8_t x620 = 51U;
	uint64_t t7 = 2145448584LLU;

	t7 = (x617-(x618&(x619<<x620)));

	if (t7 != 1590LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x633 = -64141;
	int8_t x636 = 0;
	static int32_t t8 = -517112;

	t8 = (x633-(x634&(x635<<x636)));

	if (t8 != -64146) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x689 = 807;
	volatile uint32_t x691 = UINT32_MAX;
	int32_t x692 = 0;
	int64_t t9 = -163935848555807LL;

	t9 = (x689-(x690&(x691<<x692)));

	if (t9 != -4294966488LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x758 = -1;
	volatile uint32_t x759 = 72227U;
	static volatile int8_t x760 = 26;
	uint32_t t10 = 80U;

	t10 = (x757-(x758&(x759<<x760)));

	if (t10 != 1946157004U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x801 = -1;
	int16_t x802 = 635;
	static uint32_t x803 = 3428476U;
	volatile uint8_t x804 = 1U;

	t11 = (x801-(x802&(x803<<x804)));

	if (t11 != 4294967175U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x865 = 34643173647143LLU;
	int8_t x866 = INT8_MIN;
	uint64_t x867 = 217479LLU;
	static uint16_t x868 = 57U;
	static uint64_t t12 = 8125826286919LLU;

	t12 = (x865-(x866&(x867<<x868)));

	if (t12 != 17437972400352207655LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x877 = INT64_MAX;
	int64_t x878 = 112LL;
	uint16_t x879 = 234U;
	volatile int64_t t13 = -236377291859536LL;

	t13 = (x877-(x878&(x879<<x880)));

	if (t13 != 9223372036854775727LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x881 = 13485U;
	volatile uint16_t x883 = 1502U;
	uint64_t x884 = 0LLU;
	int32_t t14 = 370780401;

	t14 = (x881-(x882&(x883<<x884)));

	if (t14 != 11983) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x944 = 1U;
	volatile uint64_t t15 = 11538032538493486LLU;

	t15 = (x941-(x942&(x943<<x944)));

	if (t15 != 255LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x953 = 13181U;
	volatile int32_t x954 = INT32_MIN;
	uint8_t x955 = UINT8_MAX;
	static uint16_t x956 = 0U;

	t16 = (x953-(x954&(x955<<x956)));

	if (t16 != 13181) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1002 = INT16_MIN;
	uint64_t x1003 = 383LLU;
	static uint64_t x1004 = 2LLU;
	static uint64_t t17 = UINT64_MAX;

	t17 = (x1001-(x1002&(x1003<<x1004)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1021 = 520U;
	static uint8_t x1022 = 3U;
	uint16_t x1023 = 3U;
	uint16_t x1024 = 5U;
	int32_t t18 = 187652603;

	t18 = (x1021-(x1022&(x1023<<x1024)));

	if (t18 != 520) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1093 = -1;
	int32_t x1094 = -190;
	static uint32_t x1095 = UINT32_MAX;
	volatile int8_t x1096 = 0;
	volatile uint32_t t19 = 100952766U;

	t19 = (x1093-(x1094&(x1095<<x1096)));

	if (t19 != 189U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1137 = INT32_MAX;
	int16_t x1138 = INT16_MIN;
	static volatile uint8_t x1139 = UINT8_MAX;
	volatile uint8_t x1140 = 6U;
	int32_t t20 = INT32_MAX;

	t20 = (x1137-(x1138&(x1139<<x1140)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1149 = 3U;
	volatile uint16_t x1150 = 345U;
	int64_t x1151 = 2880LL;
	uint16_t x1152 = 6U;

	t21 = (x1149-(x1150&(x1151<<x1152)));

	if (t21 != 3LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1390 = 115U;
	static int8_t x1391 = INT8_MAX;
	volatile int32_t t22 = 44795965;

	t22 = (x1389-(x1390&(x1391<<x1392)));

	if (t22 != -119) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1533 = -11102;
	int8_t x1534 = INT8_MIN;
	volatile uint32_t x1535 = 29U;
	uint16_t x1536 = 6U;
	uint32_t t23 = 17344U;

	t23 = (x1533-(x1534&(x1535<<x1536)));

	if (t23 != 4294954402U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1537 = -1;
	uint32_t x1539 = 295895107U;
	volatile uint16_t x1540 = 6U;
	static uint32_t t24 = UINT32_MAX;

	t24 = (x1537-(x1538&(x1539<<x1540)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1549 = INT8_MAX;
	int64_t x1550 = -2LL;
	uint8_t x1551 = UINT8_MAX;
	volatile int64_t x1552 = 11LL;
	static int64_t t25 = -7979884948LL;

	t25 = (x1549-(x1550&(x1551<<x1552)));

	if (t25 != -522113LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1817 = UINT16_MAX;
	int8_t x1818 = -1;
	volatile uint64_t x1819 = 78LLU;
	uint8_t x1820 = 30U;
	static uint64_t t26 = 215843759LLU;

	t26 = (x1817-(x1818&(x1819<<x1820)));

	if (t26 != 18446743989957754879LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1857 = -1;
	uint32_t x1858 = 86U;
	uint64_t x1859 = 28458LLU;
	uint16_t x1860 = 4U;

	t27 = (x1857-(x1858&(x1859<<x1860)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x1909 = -1LL;
	volatile int8_t x1910 = INT8_MIN;
	int64_t x1911 = INT64_MAX;
	uint8_t x1912 = 0U;
	volatile int64_t t28 = -2036387351LL;

	t28 = (x1909-(x1910&(x1911<<x1912)));

	if (t28 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1949 = -1LL;
	uint64_t x1950 = 10LLU;
	uint8_t x1952 = 3U;

	t29 = (x1949-(x1950&(x1951<<x1952)));

	if (t29 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2141 = UINT64_MAX;
	static int8_t x2142 = -1;
	uint64_t x2144 = 0LLU;
	static uint64_t t30 = 34943408850LLU;

	t30 = (x2141-(x2142&(x2143<<x2144)));

	if (t30 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x2274 = UINT64_MAX;
	volatile uint8_t x2276 = 0U;
	uint64_t t31 = 7959734721LLU;

	t31 = (x2273-(x2274&(x2275<<x2276)));

	if (t31 != 18446744073675754279LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2326 = 153U;
	volatile uint64_t x2327 = 1468366261548505LLU;

	t32 = (x2325-(x2326&(x2327<<x2328)));

	if (t32 != 14LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2449 = -1LL;
	uint8_t x2451 = 1U;
	static int16_t x2452 = 25;
	static int64_t t33 = -415973308911155LL;

	t33 = (x2449-(x2450&(x2451<<x2452)));

	if (t33 != -33554433LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2501 = 67U;
	static volatile int8_t x2503 = INT8_MAX;
	int32_t t34 = -8168349;

	t34 = (x2501-(x2502&(x2503<<x2504)));

	if (t34 != -60) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2537 = 29662255U;
	volatile uint32_t x2538 = 24427294U;
	uint32_t x2539 = UINT32_MAX;
	int16_t x2540 = 1;
	uint32_t t35 = 108U;

	t35 = (x2537-(x2538&(x2539<<x2540)));

	if (t35 != 5234961U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2585 = INT16_MAX;
	int32_t x2586 = INT32_MIN;
	static int8_t x2587 = INT8_MAX;
	uint64_t x2588 = 1LLU;
	volatile int32_t t36 = -269633;

	t36 = (x2585-(x2586&(x2587<<x2588)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2589 = 289796936;
	volatile int8_t x2590 = -1;
	uint32_t x2591 = 568U;
	uint8_t x2592 = 2U;
	uint32_t t37 = 57761U;

	t37 = (x2589-(x2590&(x2591<<x2592)));

	if (t37 != 289794664U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x2609 = 26U;
	int32_t x2610 = INT32_MIN;
	static int32_t x2611 = 1160;
	uint8_t x2612 = 1U;
	int32_t t38 = 156226640;

	t38 = (x2609-(x2610&(x2611<<x2612)));

	if (t38 != 26) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x2625 = 118511660LLU;
	uint32_t x2626 = UINT32_MAX;
	volatile uint16_t x2628 = 0U;
	volatile uint64_t t39 = 320932760503982LLU;

	t39 = (x2625-(x2626&(x2627<<x2628)));

	if (t39 != 118511405LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2665 = 546499953415782920LL;
	volatile int64_t x2666 = INT64_MAX;
	static int8_t x2668 = 8;
	volatile int64_t t40 = 25432022940LL;

	t40 = (x2665-(x2666&(x2667<<x2668)));

	if (t40 != 546499953415767816LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2737 = 1;
	uint16_t x2738 = 29368U;
	uint64_t x2739 = 295083LLU;
	uint8_t x2740 = 49U;
	static uint64_t t41 = 2588481958931306LLU;

	t41 = (x2737-(x2738&(x2739<<x2740)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2845 = INT32_MIN;
	int8_t x2847 = 2;
	uint16_t x2848 = 4U;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x2845-(x2846&(x2847<<x2848)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2869 = -1;
	uint64_t x2870 = UINT64_MAX;
	volatile int64_t x2871 = 10995164524047181LL;
	volatile uint64_t t43 = 1458605861433LLU;

	t43 = (x2869-(x2870&(x2871<<x2872)));

	if (t43 != 15631981955553473279LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x3022 = INT64_MIN;

	t44 = (x3021-(x3022&(x3023<<x3024)));

	if (t44 != 5915LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3161 = -1;
	volatile int64_t x3162 = -1LL;
	static int64_t x3163 = 16575470LL;
	int8_t x3164 = 19;
	volatile int64_t t45 = 253LL;

	t45 = (x3161-(x3162&(x3163<<x3164)));

	if (t45 != -8690320015361LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x3165 = 2U;
	int64_t x3166 = -2887819LL;
	uint64_t x3167 = 17LLU;
	static volatile uint8_t x3168 = 5U;

	t46 = (x3165-(x3166&(x3167<<x3168)));

	if (t46 != 18446744073709551074LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3369 = 25105247045019809LLU;
	uint64_t x3372 = 5LLU;
	uint64_t t47 = 22621242428034925LLU;

	t47 = (x3369-(x3370&(x3371<<x3372)));

	if (t47 != 25105247045019809LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x3383 = 6454U;
	uint8_t x3384 = 6U;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x3381-(x3382&(x3383<<x3384)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x3417 = 5609U;
	uint64_t x3418 = 1LLU;
	static int8_t x3419 = 13;
	static volatile int64_t x3420 = 22LL;
	volatile uint64_t t49 = 415200591LLU;

	t49 = (x3417-(x3418&(x3419<<x3420)));

	if (t49 != 5609LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x3477 = 5U;
	uint32_t x3478 = 35978163U;
	volatile uint64_t x3479 = UINT64_MAX;
	volatile uint64_t t50 = 190569533023032LLU;

	t50 = (x3477-(x3478&(x3479<<x3480)));

	if (t50 != 18446744073673573459LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x3509 = 23U;
	volatile int64_t x3510 = INT64_MIN;
	int64_t x3511 = 243666087LL;
	volatile int64_t t51 = 459777603LL;

	t51 = (x3509-(x3510&(x3511<<x3512)));

	if (t51 != 23LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x3569 = 9U;
	volatile uint16_t x3570 = 3186U;
	uint64_t x3571 = 1137761108995562311LLU;
	uint64_t x3572 = 8LLU;
	uint64_t t52 = 1LLU;

	t52 = (x3569-(x3570&(x3571<<x3572)));

	if (t52 != 18446744073709550601LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3649 = -1;
	uint64_t x3650 = 2LLU;
	static int8_t x3652 = 41;
	static volatile uint64_t t53 = UINT64_MAX;

	t53 = (x3649-(x3650&(x3651<<x3652)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x3797 = INT16_MIN;
	uint32_t x3799 = 247149U;
	int16_t x3800 = 1;
	volatile uint32_t t54 = 264623809U;

	t54 = (x3797-(x3798&(x3799<<x3800)));

	if (t54 != 4294443008U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x4033 = 13089728;
	int64_t x4034 = 17668852314LL;
	uint32_t x4035 = 692828880U;
	static volatile int64_t t55 = 142510212031047626LL;

	t55 = (x4033-(x4034&(x4035<<x4036)));

	if (t55 != -255689792LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x4141 = INT16_MAX;
	volatile int16_t x4142 = INT16_MAX;
	static uint8_t x4144 = 0U;
	static int32_t t56 = -1654;

	t56 = (x4141-(x4142&(x4143<<x4144)));

	if (t56 != 15133) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x4209 = INT32_MAX;
	int32_t x4210 = 59852;
	uint32_t x4211 = 3204644U;
	uint8_t x4212 = 7U;
	uint32_t t57 = 56232204U;

	t57 = (x4209-(x4210&(x4211<<x4212)));

	if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4213 = INT8_MIN;
	int16_t x4214 = INT16_MIN;
	int32_t x4215 = 695;
	uint16_t x4216 = 1U;

	t58 = (x4213-(x4214&(x4215<<x4216)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4249 = INT64_MAX;
	volatile uint8_t x4250 = UINT8_MAX;
	uint32_t x4251 = 136U;
	static uint8_t x4252 = 11U;
	int64_t t59 = INT64_MAX;

	t59 = (x4249-(x4250&(x4251<<x4252)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4377 = INT64_MIN;
	static volatile int64_t x4378 = INT64_MIN;
	uint16_t x4380 = 14U;

	t60 = (x4377-(x4378&(x4379<<x4380)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4405 = INT32_MIN;
	int8_t x4406 = 20;
	volatile int8_t x4407 = INT8_MAX;
	static uint8_t x4408 = 14U;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x4405-(x4406&(x4407<<x4408)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4553 = INT8_MIN;
	static uint16_t x4556 = 6U;
	volatile int32_t t62 = 120343733;

	t62 = (x4553-(x4554&(x4555<<x4556)));

	if (t62 != -448) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x4657 = -1;
	static uint64_t x4659 = UINT64_MAX;
	uint64_t x4660 = 19LLU;
	volatile uint64_t t63 = 18193918539LLU;

	t63 = (x4657-(x4658&(x4659<<x4660)));

	if (t63 != 524287LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x4665 = -1LL;
	volatile int64_t x4666 = INT64_MIN;
	uint64_t x4667 = 3542562657708LLU;
	uint8_t x4668 = 7U;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x4665-(x4666&(x4667<<x4668)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4754 = INT64_MAX;
	uint32_t x4755 = 13318087U;
	volatile uint16_t x4756 = 2U;
	volatile int64_t t65 = 1119931727530LL;

	t65 = (x4753-(x4754&(x4755<<x4756)));

	if (t65 != -53272320LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x4801 = 6991645177415LLU;
	int64_t x4802 = INT64_MIN;
	uint16_t x4803 = 75U;
	uint16_t x4804 = 7U;
	uint64_t t66 = 52096491170935LLU;

	t66 = (x4801-(x4802&(x4803<<x4804)));

	if (t66 != 6991645177415LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x4809 = -3;
	uint64_t x4810 = 5612870LLU;
	static int8_t x4811 = 0;
	uint8_t x4812 = 6U;
	volatile uint64_t t67 = 13140LLU;

	t67 = (x4809-(x4810&(x4811<<x4812)));

	if (t67 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x4905 = 1933203300LLU;
	static int16_t x4907 = INT16_MAX;
	volatile uint64_t t68 = 496375151574206683LLU;

	t68 = (x4905-(x4906&(x4907<<x4908)));

	if (t68 != 1933203290LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x5029 = 123144U;
	int64_t x5030 = INT64_MIN;
	int16_t x5031 = 1;
	uint8_t x5032 = 1U;

	t69 = (x5029-(x5030&(x5031<<x5032)));

	if (t69 != 123144LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5209 = 1U;
	uint32_t x5210 = 52854U;
	static uint64_t x5211 = 291LLU;
	uint16_t x5212 = 8U;
	volatile uint64_t t70 = 135856685185669482LLU;

	t70 = (x5209-(x5210&(x5211<<x5212)));

	if (t70 != 18446744073709551105LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x5285 = UINT64_MAX;
	int8_t x5286 = INT8_MIN;
	int32_t x5288 = 3;
	uint64_t t71 = 3LLU;

	t71 = (x5285-(x5286&(x5287<<x5288)));

	if (t71 != 18446744073709551231LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x5361 = INT8_MIN;
	uint32_t x5362 = UINT32_MAX;
	uint64_t x5363 = 75142956184594963LLU;
	uint16_t x5364 = 3U;
	volatile uint64_t t72 = 0LLU;

	t72 = (x5361-(x5362&(x5363<<x5364)));

	if (t72 != 18446744070118485736LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x5389 = INT64_MAX;
	static uint8_t x5390 = 7U;
	uint64_t x5391 = 22055LLU;
	uint64_t t73 = 18675388LLU;

	t73 = (x5389-(x5390&(x5391<<x5392)));

	if (t73 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5577 = UINT8_MAX;
	int64_t x5578 = INT64_MIN;
	volatile int32_t x5579 = 11446;
	static uint16_t x5580 = 14U;
	static int64_t t74 = -1LL;

	t74 = (x5577-(x5578&(x5579<<x5580)));

	if (t74 != 255LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x5593 = 1;
	int8_t x5595 = INT8_MAX;
	static int16_t x5596 = 1;
	int32_t t75 = -393;

	t75 = (x5593-(x5594&(x5595<<x5596)));

	if (t75 != -253) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5649 = 31094946441913LLU;
	uint64_t x5650 = UINT64_MAX;
	uint8_t x5651 = UINT8_MAX;
	volatile uint8_t x5652 = 7U;
	uint64_t t76 = 440421571LLU;

	t76 = (x5649-(x5650&(x5651<<x5652)));

	if (t76 != 31094946409273LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x5733 = UINT32_MAX;
	int8_t x5734 = INT8_MIN;
	static int16_t x5736 = 4;
	uint32_t t77 = 13398U;

	t77 = (x5733-(x5734&(x5735<<x5736)));

	if (t77 != 4133733503U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x5769 = UINT16_MAX;
	int32_t x5770 = INT32_MAX;
	volatile uint32_t x5771 = 58720157U;
	uint8_t x5772 = 0U;

	t78 = (x5769-(x5770&(x5771<<x5772)));

	if (t78 != 4236312674U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5861 = 22;
	static volatile int32_t x5862 = -1;
	int8_t x5863 = INT8_MAX;
	volatile uint8_t x5864 = 5U;
	int32_t t79 = 74490;

	t79 = (x5861-(x5862&(x5863<<x5864)));

	if (t79 != -4042) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x6073 = UINT8_MAX;
	static uint8_t x6074 = 15U;
	int8_t x6075 = INT8_MAX;
	volatile int32_t t80 = 1660033;

	t80 = (x6073-(x6074&(x6075<<x6076)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x6193 = 11;
	int64_t x6194 = -5500600568LL;
	int16_t x6195 = 6;
	volatile int8_t x6196 = 20;
	int64_t t81 = -22717129LL;

	t81 = (x6193-(x6194&(x6195<<x6196)));

	if (t81 != -2097141LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x6205 = INT16_MIN;
	int8_t x6206 = -1;
	uint8_t x6208 = 2U;
	static volatile uint64_t t82 = 492430LLU;

	t82 = (x6205-(x6206&(x6207<<x6208)));

	if (t82 != 18446744065381299900LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x6302 = 13576U;
	uint32_t x6303 = 11U;
	static uint16_t x6304 = 0U;

	t83 = (x6301-(x6302&(x6303<<x6304)));

	if (t83 != 2147483640U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x6345 = INT8_MAX;
	int32_t x6346 = 3380663;
	uint32_t x6347 = 459395U;
	volatile uint32_t t84 = 52325U;

	t84 = (x6345-(x6346&(x6347<<x6348)));

	if (t84 != 4294934527U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x6378 = UINT64_MAX;
	uint64_t x6379 = UINT64_MAX;
	int8_t x6380 = 3;

	t85 = (x6377-(x6378&(x6379<<x6380)));

	if (t85 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x6385 = 7U;
	int64_t x6386 = INT64_MIN;
	uint32_t x6387 = UINT32_MAX;
	uint16_t x6388 = 28U;
	static int64_t t86 = -5577383046910LL;

	t86 = (x6385-(x6386&(x6387<<x6388)));

	if (t86 != 7LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x6391 = 1U;
	uint8_t x6392 = 4U;
	int32_t t87 = 379729236;

	t87 = (x6389-(x6390&(x6391<<x6392)));

	if (t87 != 1748) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x6490 = UINT16_MAX;
	volatile int64_t x6491 = 1LL;
	int16_t x6492 = 1;
	int64_t t88 = -4631276561612LL;

	t88 = (x6489-(x6490&(x6491<<x6492)));

	if (t88 != 253LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x6493 = 2U;
	uint32_t x6494 = UINT32_MAX;
	int8_t x6495 = INT8_MAX;
	uint32_t x6496 = 8U;
	volatile uint32_t t89 = 5010069U;

	t89 = (x6493-(x6494&(x6495<<x6496)));

	if (t89 != 4294934786U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x6617 = UINT32_MAX;
	static int16_t x6620 = 0;

	t90 = (x6617-(x6618&(x6619<<x6620)));

	if (t90 != 4294967200LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6621 = -1LL;
	int16_t x6623 = 1;
	uint16_t x6624 = 15U;
	int64_t t91 = 698LL;

	t91 = (x6621-(x6622&(x6623<<x6624)));

	if (t91 != -32769LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x6634 = 1900386042967762247LLU;
	static uint16_t x6636 = 1U;

	t92 = (x6633-(x6634&(x6635<<x6636)));

	if (t92 != 2147474105LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x6657 = -2034848009179124851LL;
	uint32_t x6658 = 426106U;
	int16_t x6659 = 6050;
	int8_t x6660 = 1;
	volatile int64_t t93 = -111453927286537122LL;

	t93 = (x6657-(x6658&(x6659<<x6660)));

	if (t93 != -2034848009179124915LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x6665 = INT16_MIN;
	int32_t x6666 = INT32_MIN;
	uint16_t x6667 = UINT16_MAX;
	volatile int8_t x6668 = 15;
	volatile int32_t t94 = 598540;

	t94 = (x6665-(x6666&(x6667<<x6668)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6673 = INT32_MIN;
	uint64_t x6674 = 377846775050LLU;
	int64_t x6675 = 3053LL;
	uint64_t x6676 = 1LLU;
	uint64_t t95 = 122442131LLU;

	t95 = (x6673-(x6674&(x6675<<x6676)));

	if (t95 != 18446744071562062582LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x6706 = 2U;
	static uint16_t x6707 = 11951U;
	volatile uint16_t x6708 = 0U;
	static volatile int32_t t96 = 6081;

	t96 = (x6705-(x6706&(x6707<<x6708)));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6798 = UINT32_MAX;
	static uint64_t x6799 = 139838933648067LLU;
	int16_t x6800 = 1;

	t97 = (x6797-(x6798&(x6799<<x6800)));

	if (t97 != 18446744071227669162LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x6813 = -1501129;
	uint64_t x6814 = UINT64_MAX;
	uint16_t x6816 = 6U;

	t98 = (x6813-(x6814&(x6815<<x6816)));

	if (t98 != 18446744073708050551LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x6825 = INT16_MIN;
	int32_t x6826 = INT32_MIN;
	int64_t x6827 = 2LL;
	uint64_t x6828 = 5LLU;

	t99 = (x6825-(x6826&(x6827<<x6828)));

	if (t99 != -32768LL) { NG(); } else { ; }
	
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

