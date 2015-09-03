#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x255 = 5U;
int32_t x256 = 1;
int16_t x310 = -1759;
uint16_t x329 = 22232U;
int16_t x387 = INT16_MAX;
uint16_t x517 = UINT16_MAX;
uint16_t x519 = 3U;
volatile uint32_t x520 = 3U;
int32_t x575 = INT32_MIN;
uint64_t t12 = 90896945704890LLU;
volatile uint64_t t13 = 944038LLU;
volatile uint16_t x675 = UINT16_MAX;
int16_t x676 = 21;
static volatile int64_t t14 = -29939799560833LL;
uint16_t x702 = 950U;
uint8_t x704 = 2U;
volatile int32_t t16 = -8140;
static int32_t x721 = INT32_MIN;
uint64_t t19 = 1005583LLU;
uint64_t x930 = 414382365LLU;
uint64_t t21 = 1075998422449LLU;
static volatile uint16_t x1150 = UINT16_MAX;
static uint8_t x1196 = 2U;
static volatile uint64_t x1319 = UINT64_MAX;
uint64_t t26 = 69701898LLU;
int32_t x1467 = -271324927;
int32_t x1631 = 27722;
uint64_t x1639 = 5192902467LLU;
volatile uint8_t x1731 = 21U;
uint64_t t34 = 5378248296531LLU;
static volatile int64_t x1762 = -820263367LL;
int16_t x1763 = INT16_MIN;
uint32_t x1765 = UINT32_MAX;
uint64_t x1801 = UINT64_MAX;
static int64_t x1803 = INT64_MIN;
int8_t x1804 = 5;
uint64_t x1812 = 0LLU;
volatile int16_t x1861 = INT16_MIN;
volatile uint32_t x2070 = 5334U;
uint8_t x2072 = 1U;
int64_t t43 = 56723387717822LL;
volatile uint16_t x2112 = 3U;
int16_t x2207 = INT16_MAX;
int16_t x2208 = 1;
uint32_t t48 = 1736653U;
static int32_t x2374 = 438055671;
int32_t x2375 = INT32_MIN;
int64_t t49 = -819941LL;
int32_t x2393 = INT32_MIN;
volatile uint64_t x2394 = 1LLU;
static volatile int16_t x2533 = -284;
uint32_t x2535 = UINT32_MAX;
volatile uint8_t x2536 = 6U;
uint64_t x2554 = 296649837361LLU;
static uint16_t x2799 = 164U;
uint64_t t55 = 247123643LLU;
static uint32_t x3249 = UINT32_MAX;
static int64_t x3251 = -611123761543380LL;
volatile uint8_t x3252 = 13U;
uint32_t x3398 = UINT32_MAX;
int32_t t65 = -3;
int16_t x3650 = INT16_MIN;
uint8_t x3652 = 12U;
volatile int8_t x3722 = 0;
uint32_t t67 = 3923U;
static int8_t x3826 = 9;
uint16_t x3884 = 57U;
int64_t t69 = -9117039986LL;
volatile int64_t t70 = 63269959343774LL;
int16_t x3934 = INT16_MIN;
int16_t x4035 = INT16_MAX;
int16_t x4278 = INT16_MAX;
volatile uint8_t x4360 = 4U;
int8_t x4395 = 6;
int8_t x4396 = 0;
int8_t x4423 = INT8_MIN;
volatile uint32_t t81 = 1U;
uint64_t t82 = 138676616514180570LLU;
int64_t t84 = -17442239063493063LL;
int16_t x4815 = INT16_MAX;
static uint32_t x4897 = UINT32_MAX;
volatile int64_t t90 = 140671768699610166LL;
int16_t x5093 = 1;
static uint32_t x5094 = 56497218U;
volatile int8_t x5096 = 16;
volatile uint32_t t94 = 17509U;
int64_t x5297 = INT64_MAX;
uint64_t t95 = 3048057499LLU;
int8_t x5313 = 3;
volatile int32_t t98 = 35083;
uint16_t x5420 = 36U;


void f0(void) {
	int64_t x13 = -2862363252534684LL;
	uint64_t x14 = UINT64_MAX;
	volatile uint32_t x15 = 7452U;
	int8_t x16 = 12;
	volatile uint64_t t0 = 5351319774LLU;

	t0 = ((x13*(x14+x15))<<x16);

	if (t0 != 6468569459665190912LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x237 = -1;
	volatile int8_t x238 = -1;
	volatile uint32_t x239 = 12942170U;
	volatile uint16_t x240 = 0U;
	volatile uint32_t t1 = 64966117U;

	t1 = ((x237*(x238+x239))<<x240);

	if (t1 != 4282025127U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x253 = -6;
	uint32_t x254 = 7186450U;
	volatile uint32_t t2 = 500065U;

	t2 = ((x253*(x254+x255))<<x256);

	if (t2 != 4208729836U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x273 = -1LL;
	uint64_t x274 = 116389546441912LLU;
	static uint16_t x275 = 122U;
	int8_t x276 = 0;
	volatile uint64_t t3 = 52LLU;

	t3 = ((x273*(x274+x275))<<x276);

	if (t3 != 18446627684163109582LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x309 = INT16_MIN;
	volatile uint64_t x311 = 2093LLU;
	volatile uint8_t x312 = 2U;
	uint64_t t4 = 6908782278LLU;

	t4 = ((x309*(x310+x311))<<x312);

	if (t4 != 18446744073665773568LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x330 = -1LL;
	uint32_t x331 = UINT32_MAX;
	int16_t x332 = 8;
	volatile int64_t t5 = 1377306006358LL;

	t5 = ((x329*(x330+x331))<<x332);

	if (t5 != 24444342497333248LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x377 = INT8_MIN;
	int8_t x378 = 1;
	uint32_t x379 = 2U;
	static uint16_t x380 = 3U;
	static volatile uint32_t t6 = 12U;

	t6 = ((x377*(x378+x379))<<x380);

	if (t6 != 4294964224U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x385 = UINT32_MAX;
	int64_t x386 = 730267LL;
	uint8_t x388 = 5U;
	volatile int64_t t7 = -79081315400LL;

	t7 = ((x385*(x386+x387))<<x388);

	if (t7 != 104870594399136960LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x518 = 11U;
	int32_t t8 = 7622117;

	t8 = ((x517*(x518+x519))<<x520);

	if (t8 != 7339920) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x549 = INT64_MIN;
	volatile int32_t x550 = -1;
	uint64_t x551 = 2LLU;
	uint16_t x552 = 55U;
	uint64_t t9 = 13LLU;

	t9 = ((x549*(x550+x551))<<x552);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x573 = UINT8_MAX;
	uint32_t x574 = 653U;
	uint8_t x576 = 20U;
	static uint32_t t10 = 319U;

	t10 = ((x573*(x574+x575))<<x576);

	if (t10 != 2804940800U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x605 = INT64_MIN;
	int16_t x606 = -1;
	uint64_t x607 = 1LLU;
	int16_t x608 = 2;
	static volatile uint64_t t11 = 94314508959596034LLU;

	t11 = ((x605*(x606+x607))<<x608);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x633 = 4;
	static int8_t x634 = -1;
	uint64_t x635 = UINT64_MAX;
	int32_t x636 = 8;

	t12 = ((x633*(x634+x635))<<x636);

	if (t12 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x657 = -1;
	int32_t x658 = 242449395;
	uint64_t x659 = 912441072825927393LLU;
	static uint16_t x660 = 46U;

	t13 = ((x657*(x658+x659))<<x660);

	if (t13 != 2254896038429065216LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x673 = 872LL;
	int16_t x674 = INT16_MIN;

	t14 = ((x673*(x674+x675))<<x676);

	if (t14 != 59921554997248LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x681 = -1327LL;
	uint16_t x682 = UINT16_MAX;
	int64_t x683 = -11276871945LL;
	uint8_t x684 = 11U;
	int64_t t15 = 3374025LL;

	t15 = ((x681*(x682+x683))<<x684);

	if (t15 != 30646931673231360LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x701 = 4;
	uint16_t x703 = 26593U;

	t16 = ((x701*(x702+x703))<<x704);

	if (t16 != 440688) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x717 = -1;
	int16_t x718 = INT16_MIN;
	static int16_t x719 = -1952;
	uint16_t x720 = 1U;
	int32_t t17 = -63257;

	t17 = ((x717*(x718+x719))<<x720);

	if (t17 != 69440) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x722 = INT32_MIN;
	uint64_t x723 = UINT64_MAX;
	static volatile int8_t x724 = 1;
	volatile uint64_t t18 = 440911347440LLU;

	t18 = ((x721*(x722+x723))<<x724);

	if (t18 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x801 = 6U;
	int16_t x802 = 133;
	uint64_t x803 = UINT64_MAX;
	uint16_t x804 = 7U;

	t19 = ((x801*(x802+x803))<<x804);

	if (t19 != 101376LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x929 = INT8_MAX;
	volatile uint8_t x931 = 4U;
	static uint8_t x932 = 5U;
	uint64_t t20 = 8336875958329355077LLU;

	t20 = ((x929*(x930+x931))<<x932);

	if (t20 != 1684049947616LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1041 = UINT64_MAX;
	int64_t x1042 = 976086302LL;
	int16_t x1043 = 29;
	static uint8_t x1044 = 3U;

	t21 = ((x1041*(x1042+x1043))<<x1044);

	if (t21 != 18446744065900860968LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1089 = INT8_MAX;
	volatile int32_t x1090 = 30944355;
	uint64_t x1091 = 8161LLU;
	volatile uint8_t x1092 = 0U;
	volatile uint64_t t22 = 2721622107841LLU;

	t22 = ((x1089*(x1090+x1091))<<x1092);

	if (t22 != 3930969532LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1149 = 12699797339477LLU;
	static uint64_t x1151 = 541593285401LLU;
	uint16_t x1152 = 1U;
	volatile uint64_t t23 = 56951777LLU;

	t23 = ((x1149*(x1150+x1151))<<x1152);

	if (t23 != 16476735689177456112LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1193 = -2978654;
	int8_t x1194 = -1;
	volatile uint32_t x1195 = 269U;
	volatile uint32_t t24 = 32U;

	t24 = ((x1193*(x1194+x1195))<<x1196);

	if (t24 != 1101850208U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1253 = 30U;
	uint64_t x1254 = 128332LLU;
	uint8_t x1255 = UINT8_MAX;
	static uint64_t x1256 = 3LLU;
	volatile uint64_t t25 = 12653LLU;

	t25 = ((x1253*(x1254+x1255))<<x1256);

	if (t25 != 30860880LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1317 = 195065187194015159LL;
	volatile int32_t x1318 = -1;
	volatile int8_t x1320 = 1;

	t26 = ((x1317*(x1318+x1319))<<x1320);

	if (t26 != 17666483324933490980LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1465 = 35LLU;
	int32_t x1466 = INT32_MAX;
	volatile int16_t x1468 = 0;
	uint64_t t27 = 3744638LLU;

	t27 = ((x1465*(x1466+x1467))<<x1468);

	if (t27 != 65665555200LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1493 = INT64_MIN;
	static int8_t x1494 = -1;
	uint64_t x1495 = UINT64_MAX;
	volatile int8_t x1496 = 4;
	uint64_t t28 = 30322LLU;

	t28 = ((x1493*(x1494+x1495))<<x1496);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1553 = UINT8_MAX;
	int16_t x1554 = INT16_MIN;
	int64_t x1555 = 159679187LL;
	static int32_t x1556 = 0;
	int64_t t29 = 3388570383538063687LL;

	t29 = ((x1553*(x1554+x1555))<<x1556);

	if (t29 != 40709836845LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x1585 = 1844198014195344893LLU;
	static int16_t x1586 = -1;
	static uint64_t x1587 = UINT64_MAX;
	static int8_t x1588 = 0;
	volatile uint64_t t30 = 5LLU;

	t30 = ((x1585*(x1586+x1587))<<x1588);

	if (t30 != 14758348045318861830LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1629 = 1788098;
	uint32_t x1630 = 27163U;
	uint8_t x1632 = 29U;
	volatile uint32_t t31 = 53000089U;

	t31 = ((x1629*(x1630+x1631))<<x1632);

	if (t31 != 1073741824U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1637 = 14U;
	volatile int64_t x1638 = -55517LL;
	static int16_t x1640 = 7;
	uint64_t t32 = 59835547717240LLU;

	t32 = ((x1637*(x1638+x1639))<<x1640);

	if (t32 != 9305581734400LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1713 = INT16_MAX;
	int8_t x1714 = 30;
	static int16_t x1715 = -1;
	uint8_t x1716 = 2U;
	volatile int32_t t33 = -14380308;

	t33 = ((x1713*(x1714+x1715))<<x1716);

	if (t33 != 3800972) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1729 = 12U;
	volatile uint64_t x1730 = 3397LLU;
	int16_t x1732 = 3;

	t34 = ((x1729*(x1730+x1731))<<x1732);

	if (t34 != 328128LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1761 = INT8_MIN;
	uint8_t x1764 = 6U;
	static int64_t t35 = 7056909LL;

	t35 = ((x1761*(x1762+x1763))<<x1764);

	if (t35 != 6719865937920LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1766 = UINT32_MAX;
	volatile uint8_t x1767 = 114U;
	int8_t x1768 = 3;
	static volatile uint32_t t36 = 13243U;

	t36 = ((x1765*(x1766+x1767))<<x1768);

	if (t36 != 4294966392U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1802 = 54;
	static uint64_t t37 = 4096495518671LLU;

	t37 = ((x1801*(x1802+x1803))<<x1804);

	if (t37 != 18446744073709549888LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1809 = INT32_MIN;
	int64_t x1810 = 68611LL;
	volatile uint64_t x1811 = 340LLU;
	uint64_t t38 = 11126LLU;

	t38 = ((x1809*(x1810+x1811))<<x1812);

	if (t38 != 18446596002564538368LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1833 = -1;
	uint32_t x1834 = 316471U;
	int32_t x1835 = INT32_MIN;
	static volatile uint64_t x1836 = 3LLU;
	volatile uint32_t t39 = 980U;

	t39 = ((x1833*(x1834+x1835))<<x1836);

	if (t39 != 4292435528U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1862 = 10641U;
	uint64_t x1863 = UINT64_MAX;
	volatile int32_t x1864 = 15;
	volatile uint64_t t40 = 744193482063493377LLU;

	t40 = ((x1861*(x1862+x1863))<<x1864);

	if (t40 != 18446732649096544256LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1961 = INT8_MIN;
	volatile int8_t x1962 = -1;
	uint32_t x1963 = 91U;
	static uint8_t x1964 = 26U;
	static uint32_t t41 = 4U;

	t41 = ((x1961*(x1962+x1963))<<x1964);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1989 = 7U;
	int32_t x1990 = INT32_MIN;
	static uint64_t x1991 = 3LLU;
	uint32_t x1992 = 17U;
	uint64_t t42 = 4482858964LLU;

	t42 = ((x1989*(x1990+x1991))<<x1992);

	if (t42 != 18444773748875329536LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x2069 = INT32_MAX;
	static int64_t x2071 = -1LL;

	t43 = ((x2069*(x2070+x2071))<<x2072);

	if (t43 != 22905060578902LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2109 = -4;
	int32_t x2110 = -7;
	static uint32_t x2111 = 2657U;
	uint32_t t44 = 5805U;

	t44 = ((x2109*(x2110+x2111))<<x2112);

	if (t44 != 4294882496U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2197 = 1U;
	uint8_t x2198 = 8U;
	uint16_t x2199 = UINT16_MAX;
	int16_t x2200 = 0;
	volatile int32_t t45 = -234854274;

	t45 = ((x2197*(x2198+x2199))<<x2200);

	if (t45 != 65543) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x2205 = 10U;
	uint8_t x2206 = 43U;
	volatile int32_t t46 = -44;

	t46 = ((x2205*(x2206+x2207))<<x2208);

	if (t46 != 656200) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2209 = -1;
	uint64_t x2210 = UINT64_MAX;
	volatile int64_t x2211 = INT64_MIN;
	static uint8_t x2212 = 0U;
	uint64_t t47 = 20124241581489631LLU;

	t47 = ((x2209*(x2210+x2211))<<x2212);

	if (t47 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2285 = 12442;
	uint16_t x2286 = 4U;
	static uint32_t x2287 = 69U;
	uint8_t x2288 = 3U;

	t48 = ((x2285*(x2286+x2287))<<x2288);

	if (t48 != 7266128U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x2373 = -1LL;
	volatile int8_t x2376 = 13;

	t49 = ((x2373*(x2374+x2375))<<x2376);

	if (t49 != 14003633987584LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x2395 = 2U;
	volatile int8_t x2396 = 1;
	static volatile uint64_t t50 = 20902696314903068LLU;

	t50 = ((x2393*(x2394+x2395))<<x2396);

	if (t50 != 18446744060824649728LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2534 = UINT64_MAX;
	volatile uint64_t t51 = 1665383LLU;

	t51 = ((x2533*(x2534+x2535))<<x2536);

	if (t51 != 18446666008384015872LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x2553 = 205LLU;
	volatile int8_t x2555 = -1;
	static volatile int8_t x2556 = 2;
	volatile uint64_t t52 = 4026LLU;

	t52 = ((x2553*(x2554+x2555))<<x2556);

	if (t52 != 243252866635200LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x2633 = INT16_MIN;
	uint64_t x2634 = 221529752591LLU;
	int16_t x2635 = INT16_MAX;
	int8_t x2636 = 61;
	volatile uint64_t t53 = 1834779530484218905LLU;

	t53 = ((x2633*(x2634+x2635))<<x2636);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x2705 = INT16_MIN;
	int64_t x2706 = 0LL;
	static int32_t x2707 = -153;
	uint8_t x2708 = 2U;
	int64_t t54 = 7LL;

	t54 = ((x2705*(x2706+x2707))<<x2708);

	if (t54 != 20054016LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x2797 = 1620311077967719630LLU;
	int32_t x2798 = INT32_MIN;
	uint16_t x2800 = 29U;

	t55 = ((x2797*(x2798+x2799))<<x2800);

	if (t55 != 14402290052442882048LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2857 = 32131;
	volatile int8_t x2858 = -3;
	uint8_t x2859 = 14U;
	uint32_t x2860 = 4U;
	int32_t t56 = 122169534;

	t56 = ((x2857*(x2858+x2859))<<x2860);

	if (t56 != 5655056) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2865 = 8U;
	uint32_t x2866 = 18U;
	int8_t x2867 = -1;
	uint32_t x2868 = 0U;
	uint32_t t57 = 276U;

	t57 = ((x2865*(x2866+x2867))<<x2868);

	if (t57 != 136U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x2937 = -15;
	volatile int64_t x2938 = -7386719191812LL;
	uint16_t x2939 = 14256U;
	uint8_t x2940 = 3U;
	volatile int64_t t58 = -541480823198950LL;

	t58 = ((x2937*(x2938+x2939))<<x2940);

	if (t58 != 886406301306720LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x2993 = 8003178725445509793LLU;
	static int64_t x2994 = -1LL;
	uint32_t x2995 = UINT32_MAX;
	static uint8_t x2996 = 3U;
	uint64_t t59 = 0LLU;

	t59 = ((x2993*(x2994+x2995))<<x2996);

	if (t59 != 8076373228759930352LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x3005 = 3191LLU;
	volatile int8_t x3006 = INT8_MIN;
	int8_t x3007 = INT8_MIN;
	volatile int8_t x3008 = 0;
	uint64_t t60 = 245778290LLU;

	t60 = ((x3005*(x3006+x3007))<<x3008);

	if (t60 != 18446744073708734720LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3049 = UINT64_MAX;
	int16_t x3050 = INT16_MAX;
	int64_t x3051 = -1LL;
	volatile uint16_t x3052 = 0U;
	volatile uint64_t t61 = 358405676892LLU;

	t61 = ((x3049*(x3050+x3051))<<x3052);

	if (t61 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3250 = 24011605532723127LLU;
	volatile uint64_t t62 = 123LLU;

	t62 = ((x3249*(x3250+x3251))<<x3252);

	if (t62 != 398771489566072832LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3345 = 17U;
	int64_t x3346 = INT64_MAX;
	uint64_t x3347 = 33523188075LLU;
	uint8_t x3348 = 1U;
	uint64_t t63 = 330540235473063545LLU;

	t63 = ((x3345*(x3346+x3347))<<x3348);

	if (t63 != 1139788394516LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3397 = INT16_MIN;
	int16_t x3399 = INT16_MIN;
	int8_t x3400 = 1;
	volatile uint32_t t64 = 212546559U;

	t64 = ((x3397*(x3398+x3399))<<x3400);

	if (t64 != 2147549184U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x3477 = -5;
	static volatile uint16_t x3478 = 121U;
	static int16_t x3479 = INT16_MIN;
	static uint8_t x3480 = 3U;

	t65 = ((x3477*(x3478+x3479))<<x3480);

	if (t65 != 1305880) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x3649 = 1;
	uint32_t x3651 = 9U;
	volatile uint32_t t66 = 23186U;

	t66 = ((x3649*(x3650+x3651))<<x3652);

	if (t66 != 4160786432U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3721 = 14U;
	static int8_t x3723 = 59;
	uint16_t x3724 = 1U;

	t67 = ((x3721*(x3722+x3723))<<x3724);

	if (t67 != 1652U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3825 = -1;
	uint64_t x3827 = 481548669579756LLU;
	int64_t x3828 = 1LL;
	static volatile uint64_t t68 = 0LLU;

	t68 = ((x3825*(x3826+x3827))<<x3828);

	if (t68 != 18445780976370392086LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x3881 = 0LL;
	static int32_t x3882 = -1;
	int64_t x3883 = -1LL;

	t69 = ((x3881*(x3882+x3883))<<x3884);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x3893 = 11;
	static int64_t x3894 = -1LL;
	static uint32_t x3895 = 310452U;
	uint8_t x3896 = 11U;

	t70 = ((x3893*(x3894+x3895))<<x3896);

	if (t70 != 6993840128LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3933 = INT8_MIN;
	uint16_t x3935 = 6U;
	static int16_t x3936 = 0;
	int32_t t71 = -490468666;

	t71 = ((x3933*(x3934+x3935))<<x3936);

	if (t71 != 4193536) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4033 = INT8_MAX;
	int8_t x4034 = 4;
	uint8_t x4036 = 1U;
	volatile int32_t t72 = 51;

	t72 = ((x4033*(x4034+x4035))<<x4036);

	if (t72 != 8323834) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4069 = INT8_MAX;
	uint32_t x4070 = 23138308U;
	static volatile int32_t x4071 = INT32_MAX;
	volatile uint32_t x4072 = 0U;
	uint32_t t73 = 2290590U;

	t73 = ((x4069*(x4070+x4071))<<x4072);

	if (t73 != 791081341U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4197 = -1;
	volatile int32_t x4198 = -1;
	int16_t x4199 = 1;
	uint16_t x4200 = 3U;
	volatile int32_t t74 = 233147;

	t74 = ((x4197*(x4198+x4199))<<x4200);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4273 = 5853U;
	volatile uint64_t x4274 = 118749881677694521LLU;
	int64_t x4275 = INT64_MIN;
	int32_t x4276 = 3;
	volatile uint64_t t75 = 18852795853008958LLU;

	t75 = ((x4273*(x4274+x4275))<<x4276);

	if (t75 != 7874493489793214888LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4277 = UINT8_MAX;
	volatile int8_t x4279 = INT8_MIN;
	uint8_t x4280 = 0U;
	int32_t t76 = 38;

	t76 = ((x4277*(x4278+x4279))<<x4280);

	if (t76 != 8322945) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4317 = -1;
	volatile uint32_t x4318 = UINT32_MAX;
	static uint16_t x4319 = UINT16_MAX;
	static uint32_t x4320 = 3U;
	static volatile uint32_t t77 = 11241627U;

	t77 = ((x4317*(x4318+x4319))<<x4320);

	if (t77 != 4294443024U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x4357 = INT32_MIN;
	static volatile int8_t x4358 = INT8_MIN;
	uint32_t x4359 = 45U;
	static uint32_t t78 = 1998588657U;

	t78 = ((x4357*(x4358+x4359))<<x4360);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4393 = 674695U;
	static volatile int16_t x4394 = -1;
	static uint32_t t79 = 829224908U;

	t79 = ((x4393*(x4394+x4395))<<x4396);

	if (t79 != 3373475U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4421 = 247242433U;
	static volatile int16_t x4422 = INT16_MIN;
	uint8_t x4424 = 1U;
	static uint32_t t80 = 833742069U;

	t80 = ((x4421*(x4422+x4423))<<x4424);

	if (t80 != 2761965312U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4425 = 102;
	int16_t x4426 = 1;
	static volatile uint32_t x4427 = 27981U;
	int32_t x4428 = 6;

	t81 = ((x4425*(x4426+x4427))<<x4428);

	if (t81 != 182666496U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4493 = UINT8_MAX;
	uint64_t x4494 = 382956LLU;
	int64_t x4495 = INT64_MIN;
	uint8_t x4496 = 0U;

	t82 = ((x4493*(x4494+x4495))<<x4496);

	if (t82 != 9223372036952429588LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x4565 = 14U;
	uint64_t x4566 = UINT64_MAX;
	int8_t x4567 = -1;
	static int32_t x4568 = 4;
	uint64_t t83 = 86354871LLU;

	t83 = ((x4565*(x4566+x4567))<<x4568);

	if (t83 != 18446744073709551168LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4577 = INT16_MIN;
	int64_t x4578 = -488078608324LL;
	uint16_t x4579 = 266U;
	volatile uint16_t x4580 = 1U;

	t84 = ((x4577*(x4578+x4579))<<x4580);

	if (t84 != 31986719657689088LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4629 = 7;
	uint16_t x4630 = 96U;
	static uint8_t x4631 = UINT8_MAX;
	volatile int32_t x4632 = 1;
	int32_t t85 = -7;

	t85 = ((x4629*(x4630+x4631))<<x4632);

	if (t85 != 4914) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4773 = UINT32_MAX;
	volatile uint64_t x4774 = 337073LLU;
	uint64_t x4775 = 63068821LLU;
	uint32_t x4776 = 27U;
	volatile uint64_t t86 = 760616939663531LLU;

	t86 = ((x4773*(x4774+x4775))<<x4776);

	if (t86 != 3450254318786052096LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4781 = UINT64_MAX;
	volatile int16_t x4782 = INT16_MAX;
	int8_t x4783 = INT8_MIN;
	volatile uint8_t x4784 = 0U;
	static uint64_t t87 = 22125885485754613LLU;

	t87 = ((x4781*(x4782+x4783))<<x4784);

	if (t87 != 18446744073709518977LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x4813 = INT16_MIN;
	int16_t x4814 = INT16_MIN;
	uint16_t x4816 = 7U;
	volatile int32_t t88 = 620386;

	t88 = ((x4813*(x4814+x4815))<<x4816);

	if (t88 != 4194304) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4817 = -1;
	int16_t x4818 = -1;
	static uint64_t x4819 = 5197834771250479LLU;
	static uint8_t x4820 = 5U;
	uint64_t t89 = 462180412LLU;

	t89 = ((x4817*(x4818+x4819))<<x4820);

	if (t89 != 18280413361029536320LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x4898 = -1LL;
	uint8_t x4899 = 2U;
	uint16_t x4900 = 0U;

	t90 = ((x4897*(x4898+x4899))<<x4900);

	if (t90 != 4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x5095 = INT16_MIN;
	uint32_t t91 = 47U;

	t91 = ((x5093*(x5094+x5095))<<x5096);

	if (t91 != 2487353344U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5209 = 1U;
	uint32_t x5210 = UINT32_MAX;
	uint64_t x5211 = UINT64_MAX;
	static uint64_t x5212 = 6LLU;
	uint64_t t92 = 20LLU;

	t92 = ((x5209*(x5210+x5211))<<x5212);

	if (t92 != 274877906816LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5237 = -4;
	uint8_t x5238 = 2U;
	int32_t x5239 = -7291112;
	volatile int8_t x5240 = 1;
	int32_t t93 = 50281;

	t93 = ((x5237*(x5238+x5239))<<x5240);

	if (t93 != 58328880) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5269 = UINT8_MAX;
	uint16_t x5270 = 3U;
	uint32_t x5271 = 193U;
	uint32_t x5272 = 1U;

	t94 = ((x5269*(x5270+x5271))<<x5272);

	if (t94 != 99960U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5298 = 1260757569LLU;
	static uint8_t x5299 = 24U;
	int8_t x5300 = 7;

	t95 = ((x5297*(x5298+x5299))<<x5300);

	if (t95 != 18446743912332579712LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5314 = INT16_MIN;
	uint16_t x5315 = UINT16_MAX;
	uint8_t x5316 = 2U;
	volatile int32_t t96 = -25135421;

	t96 = ((x5313*(x5314+x5315))<<x5316);

	if (t96 != 393204) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5349 = UINT32_MAX;
	volatile uint16_t x5350 = 24U;
	static int16_t x5351 = -7691;
	static uint8_t x5352 = 1U;
	volatile uint32_t t97 = 201642U;

	t97 = ((x5349*(x5350+x5351))<<x5352);

	if (t97 != 15334U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x5385 = 27;
	uint16_t x5386 = 31628U;
	static uint16_t x5387 = UINT16_MAX;
	volatile uint8_t x5388 = 1U;

	t98 = ((x5385*(x5386+x5387))<<x5388);

	if (t98 != 5246802) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5417 = UINT32_MAX;
	uint64_t x5418 = 439079670LLU;
	uint32_t x5419 = 95004468U;
	uint64_t t99 = 0LLU;

	t99 = ((x5417*(x5418+x5419))<<x5420);

	if (t99 != 191505651061489664LLU) { NG(); } else { ; }
	
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

