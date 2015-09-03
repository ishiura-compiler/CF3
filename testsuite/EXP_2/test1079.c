#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x162 = UINT32_MAX;
uint16_t x164 = UINT16_MAX;
uint8_t x377 = UINT8_MAX;
volatile uint64_t t4 = 2197529106039217194LLU;
volatile int8_t x385 = -1;
uint32_t x387 = 7U;
static volatile uint8_t x388 = UINT8_MAX;
static int16_t x444 = 81;
int8_t x523 = 2;
int8_t x754 = INT8_MAX;
static uint16_t x930 = UINT16_MAX;
uint8_t x931 = 4U;
int32_t x987 = 0;
volatile int16_t x1041 = INT16_MIN;
static int32_t x1132 = INT32_MAX;
volatile int32_t t15 = -14;
static uint64_t t17 = 89181LLU;
volatile int32_t t18 = 14774744;
static uint64_t x1510 = 253033860079774LLU;
int8_t x1572 = 0;
uint64_t t20 = 2196243151575LLU;
uint16_t x1758 = 30U;
int16_t x1760 = INT16_MAX;
volatile uint64_t t22 = 1203238673647653565LLU;
int64_t t24 = -1LL;
int32_t x1920 = -1;
uint32_t t26 = 10U;
uint8_t x2051 = 3U;
static volatile int16_t x2052 = -1;
uint64_t x2068 = UINT64_MAX;
uint8_t x2368 = 106U;
int64_t x2434 = INT64_MAX;
int32_t x2436 = -1;
static volatile uint8_t x2599 = 0U;
static int8_t x2600 = -24;
volatile int64_t x2856 = INT64_MAX;
static volatile int64_t t36 = 1357259619702LL;
uint8_t x3035 = 3U;
int32_t t37 = 147983;
volatile uint64_t t38 = 2895830733LLU;
static volatile int8_t x3148 = 1;
int32_t t39 = -217299;
volatile uint64_t x3182 = UINT64_MAX;
volatile uint32_t t41 = 9U;
int32_t x3325 = -1;
uint8_t x3327 = 9U;
volatile int64_t t42 = 2LL;
int32_t x3341 = INT32_MIN;
volatile uint32_t t43 = 321120353U;
static volatile uint32_t x3461 = 0U;
static int64_t x3464 = 410552764LL;
uint8_t x3534 = 27U;
static int8_t x3536 = -1;
uint64_t t47 = 78800789354LLU;
uint8_t x3551 = 11U;
uint64_t t48 = 169136216LLU;
volatile int64_t t49 = 52LL;
uint32_t t50 = 24619U;
int32_t x3645 = INT32_MAX;
int8_t x3782 = INT8_MAX;
static int64_t x3866 = 2805110544625LL;
static uint16_t x3867 = 20U;
static uint16_t x3868 = UINT16_MAX;
volatile int64_t t54 = 394423LL;
static uint8_t x3935 = 9U;
int64_t x3936 = -5540479652109LL;
int16_t x4069 = INT16_MAX;
int32_t x4070 = INT32_MAX;
uint8_t x4071 = 2U;
uint64_t t56 = 93124066792LLU;
static int32_t x4325 = INT32_MAX;
static uint8_t x4327 = 6U;
int8_t x4382 = INT8_MAX;
uint8_t x4383 = 3U;
static volatile int64_t t60 = -3717770LL;
static volatile int16_t x4478 = INT16_MAX;
uint16_t x4566 = UINT16_MAX;
int64_t x4604 = INT64_MAX;
uint64_t t63 = 7848015632899LLU;
uint32_t x4642 = 6916U;
int64_t x4644 = INT64_MAX;
uint16_t x4658 = 14U;
int64_t x4660 = INT64_MAX;
volatile uint64_t x4856 = 17885891964493LLU;
uint8_t x4891 = 25U;
uint64_t t69 = 766LLU;
int64_t x5305 = INT64_MAX;
static int32_t x5423 = 0;
uint64_t x5424 = 26076LLU;
int64_t x5521 = 2878543062LL;
int16_t x5569 = INT16_MAX;
static uint64_t x5570 = UINT64_MAX;
uint16_t x5728 = UINT16_MAX;
static int64_t x5793 = -75LL;
uint8_t x5796 = 9U;
static int16_t x5825 = INT16_MIN;
int32_t x5826 = INT32_MAX;
static volatile uint32_t x5891 = 0U;
volatile uint32_t t78 = 42493434U;
static int32_t x6205 = INT32_MIN;
static volatile uint32_t x6208 = 3184219U;
static uint32_t x6235 = 3U;
int32_t x6236 = 8009;
int64_t x6273 = INT64_MIN;
volatile int32_t x6290 = 19994758;
int8_t x6291 = 1;
int32_t t83 = -128633;
int16_t x6293 = 69;
uint8_t x6377 = 9U;
volatile uint64_t t86 = 41697829686LLU;
int32_t x6511 = 1;
int64_t x6512 = -12LL;
uint32_t x6686 = UINT32_MAX;
int16_t x6687 = 1;
volatile int32_t x6688 = 34;
uint16_t x6838 = 38U;
int16_t x6957 = INT16_MIN;
volatile int16_t x7035 = 10;
volatile uint16_t x7092 = 11U;
uint32_t x7155 = 5U;


void f0(void) {
	uint32_t x61 = 11U;
	volatile uint64_t x62 = 61508915974LLU;
	volatile uint32_t x63 = 4U;
	uint8_t x64 = 0U;
	static volatile uint64_t t0 = 89423851776463LLU;

	t0 = ((x61%(x62>>x63))^x64);

	if (t0 != 11LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x161 = -97;
	static uint8_t x163 = 1U;
	uint32_t t1 = 75194323U;

	t1 = ((x161%(x162>>x163))^x164);

	if (t1 != 2147418207U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = INT64_MAX;
	int8_t x171 = 2;
	static int8_t x172 = INT8_MIN;
	int64_t t2 = -4LL;

	t2 = ((x169%(x170>>x171))^x172);

	if (t2 != 2147483520LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x273 = INT32_MAX;
	int64_t x274 = 2168445993354391LL;
	volatile uint8_t x275 = 6U;
	int32_t x276 = INT32_MIN;
	int64_t t3 = -2517LL;

	t3 = ((x273%(x274>>x275))^x276);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x378 = INT8_MAX;
	uint16_t x379 = 2U;
	static uint64_t x380 = 850847295435374LLU;

	t4 = ((x377%(x378>>x379))^x380);

	if (t4 != 850847295435369LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x386 = INT16_MAX;
	volatile int32_t t5 = 3203605;

	t5 = ((x385%(x386>>x387))^x388);

	if (t5 != -256) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x429 = UINT32_MAX;
	int32_t x430 = INT32_MAX;
	uint64_t x431 = 0LLU;
	int16_t x432 = -1;
	volatile uint32_t t6 = 2U;

	t6 = ((x429%(x430>>x431))^x432);

	if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x441 = -1LL;
	uint64_t x442 = 7470836976297875LLU;
	uint32_t x443 = 29U;
	static uint64_t t7 = 24LLU;

	t7 = ((x441%(x442>>x443))^x444);

	if (t7 != 6614796LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x521 = 0U;
	static volatile uint16_t x522 = UINT16_MAX;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t8 = 301;

	t8 = ((x521%(x522>>x523))^x524);

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x713 = 0U;
	uint16_t x714 = 2533U;
	volatile uint8_t x715 = 1U;
	volatile int32_t x716 = INT32_MIN;
	uint32_t t9 = 1501686888U;

	t9 = ((x713%(x714>>x715))^x716);

	if (t9 != 2147483648U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x737 = UINT16_MAX;
	uint32_t x738 = 1671583716U;
	volatile int8_t x739 = 14;
	int64_t x740 = INT64_MIN;
	int64_t t10 = 29380065038047194LL;

	t10 = ((x737%(x738>>x739))^x740);

	if (t10 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x753 = 101U;
	uint8_t x755 = 2U;
	int16_t x756 = -46;
	static int32_t t11 = -220192764;

	t11 = ((x753%(x754>>x755))^x756);

	if (t11 != -38) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x929 = INT32_MIN;
	int32_t x932 = -19237555;
	static int32_t t12 = -261113;

	t12 = ((x929%(x930>>x931))^x932);

	if (t12 != 19237581) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x985 = -15067;
	int64_t x986 = 379589LL;
	int64_t x988 = -1LL;
	volatile int64_t t13 = -482LL;

	t13 = ((x985%(x986>>x987))^x988);

	if (t13 != 15066LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1042 = 2087480081LLU;
	uint64_t x1043 = 11LLU;
	static int8_t x1044 = -1;
	volatile uint64_t t14 = 11739223590LLU;

	t14 = ((x1041%(x1042>>x1043))^x1044);

	if (t14 != 18446744073709138075LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x1129 = UINT8_MAX;
	uint16_t x1130 = 2666U;
	static uint8_t x1131 = 0U;

	t15 = ((x1129%(x1130>>x1131))^x1132);

	if (t15 != 2147483392) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1273 = 2042U;
	static volatile int64_t x1274 = INT64_MAX;
	static uint8_t x1275 = 14U;
	int64_t x1276 = INT64_MAX;
	int64_t t16 = -3142825LL;

	t16 = ((x1273%(x1274>>x1275))^x1276);

	if (t16 != 9223372036854773765LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x1361 = INT8_MIN;
	uint64_t x1362 = 219648883526431945LLU;
	static int32_t x1363 = 1;
	int32_t x1364 = INT32_MIN;

	t17 = ((x1361%(x1362>>x1363))^x1364);

	if (t17 != 18340681775765874756LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1489 = INT16_MIN;
	int8_t x1490 = INT8_MAX;
	uint16_t x1491 = 5U;
	int8_t x1492 = INT8_MAX;

	t18 = ((x1489%(x1490>>x1491))^x1492);

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1509 = INT64_MIN;
	int8_t x1511 = 0;
	static int64_t x1512 = INT64_MAX;
	static volatile uint64_t t19 = 19310024LLU;

	t19 = ((x1509%(x1510>>x1511))^x1512);

	if (t19 != 9223337233767842073LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1569 = -1;
	volatile uint64_t x1570 = UINT64_MAX;
	uint16_t x1571 = 9U;

	t20 = ((x1569%(x1570>>x1571))^x1572);

	if (t20 != 511LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1613 = 1;
	uint32_t x1614 = 7454354U;
	volatile uint32_t x1615 = 10U;
	uint8_t x1616 = UINT8_MAX;
	static volatile uint32_t t21 = 1U;

	t21 = ((x1613%(x1614>>x1615))^x1616);

	if (t21 != 254U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1757 = UINT64_MAX;
	volatile int8_t x1759 = 1;

	t22 = ((x1757%(x1758>>x1759))^x1760);

	if (t22 != 32767LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1797 = INT64_MIN;
	uint32_t x1798 = 3904U;
	volatile uint16_t x1799 = 2U;
	static int32_t x1800 = -1;
	int64_t t23 = 88085947958LL;

	t23 = ((x1797%(x1798>>x1799))^x1800);

	if (t23 != 495LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x1817 = INT16_MIN;
	int64_t x1818 = 1581452743919485LL;
	uint8_t x1819 = 30U;
	int16_t x1820 = INT16_MIN;

	t24 = ((x1817%(x1818>>x1819))^x1820);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1829 = UINT64_MAX;
	static volatile int8_t x1830 = INT8_MAX;
	int16_t x1831 = 1;
	static int8_t x1832 = -1;
	volatile uint64_t t25 = 506664LLU;

	t25 = ((x1829%(x1830>>x1831))^x1832);

	if (t25 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1917 = INT16_MIN;
	uint32_t x1918 = UINT32_MAX;
	uint32_t x1919 = 2U;

	t26 = ((x1917%(x1918>>x1919))^x1920);

	if (t26 != 3221258236U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x2049 = INT32_MAX;
	static uint16_t x2050 = UINT16_MAX;
	static volatile int32_t t27 = 2;

	t27 = ((x2049%(x2050>>x2051))^x2052);

	if (t27 != -32) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2065 = -1;
	uint16_t x2066 = 2675U;
	int8_t x2067 = 6;
	volatile uint64_t t28 = 231430383386198LLU;

	t28 = ((x2065%(x2066>>x2067))^x2068);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x2169 = 12885U;
	uint32_t x2170 = UINT32_MAX;
	uint32_t x2171 = 2U;
	volatile uint32_t x2172 = 42U;
	static volatile uint32_t t29 = 848U;

	t29 = ((x2169%(x2170>>x2171))^x2172);

	if (t29 != 12927U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x2285 = 26;
	int32_t x2286 = INT32_MAX;
	uint16_t x2287 = 1U;
	int32_t x2288 = INT32_MIN;
	volatile int32_t t30 = -15943;

	t30 = ((x2285%(x2286>>x2287))^x2288);

	if (t30 != -2147483622) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x2289 = -6LL;
	static uint64_t x2290 = 7LLU;
	int8_t x2291 = 0;
	volatile uint8_t x2292 = UINT8_MAX;
	uint64_t t31 = 220364253172LLU;

	t31 = ((x2289%(x2290>>x2291))^x2292);

	if (t31 != 252LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2365 = UINT8_MAX;
	static uint8_t x2366 = 75U;
	int8_t x2367 = 0;
	int32_t t32 = 2993939;

	t32 = ((x2365%(x2366>>x2367))^x2368);

	if (t32 != 116) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2433 = UINT8_MAX;
	static volatile int8_t x2435 = 5;
	volatile int64_t t33 = -1LL;

	t33 = ((x2433%(x2434>>x2435))^x2436);

	if (t33 != -256LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2553 = 275LL;
	int32_t x2554 = INT32_MAX;
	int8_t x2555 = 27;
	volatile int16_t x2556 = -6948;
	volatile int64_t t34 = 129828311478566LL;

	t34 = ((x2553%(x2554>>x2555))^x2556);

	if (t34 != -6951LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2597 = 387904286103749LLU;
	int64_t x2598 = INT64_MAX;
	uint64_t t35 = 8005390946735628LLU;

	t35 = ((x2597%(x2598>>x2599))^x2600);

	if (t35 != 18446356169423447853LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2853 = INT8_MAX;
	volatile uint32_t x2854 = 1167919252U;
	uint8_t x2855 = 3U;

	t36 = ((x2853%(x2854>>x2855))^x2856);

	if (t36 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x3033 = INT8_MAX;
	uint16_t x3034 = 69U;
	int8_t x3036 = INT8_MIN;

	t37 = ((x3033%(x3034>>x3035))^x3036);

	if (t37 != -121) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x3093 = UINT32_MAX;
	uint64_t x3094 = 41436037977912LLU;
	volatile uint8_t x3095 = 44U;
	int8_t x3096 = INT8_MIN;

	t38 = ((x3093%(x3094>>x3095))^x3096);

	if (t38 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x3145 = 1U;
	uint8_t x3146 = UINT8_MAX;
	uint8_t x3147 = 5U;

	t39 = ((x3145%(x3146>>x3147))^x3148);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x3181 = INT32_MIN;
	uint8_t x3183 = 1U;
	static uint64_t x3184 = UINT64_MAX;
	uint64_t t40 = 3696581128738152211LLU;

	t40 = ((x3181%(x3182>>x3183))^x3184);

	if (t40 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x3257 = 2;
	static uint32_t x3258 = 84U;
	int8_t x3259 = 0;
	int16_t x3260 = INT16_MIN;

	t41 = ((x3257%(x3258>>x3259))^x3260);

	if (t41 != 4294934530U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x3326 = 504133937979921067LL;
	int16_t x3328 = INT16_MIN;

	t42 = ((x3325%(x3326>>x3327))^x3328);

	if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x3342 = UINT32_MAX;
	volatile int8_t x3343 = 1;
	volatile uint16_t x3344 = 11579U;

	t43 = ((x3341%(x3342>>x3343))^x3344);

	if (t43 != 11578U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3457 = 8166223;
	uint64_t x3458 = UINT64_MAX;
	static volatile uint32_t x3459 = 23U;
	uint8_t x3460 = 25U;
	uint64_t t44 = 2485556825LLU;

	t44 = ((x3457%(x3458>>x3459))^x3460);

	if (t44 != 8166230LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3462 = UINT64_MAX;
	int8_t x3463 = 6;
	uint64_t t45 = 3194200853LLU;

	t45 = ((x3461%(x3462>>x3463))^x3464);

	if (t45 != 410552764LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3521 = -3;
	uint16_t x3522 = 11543U;
	uint64_t x3523 = 1LLU;
	static int64_t x3524 = -1LL;
	volatile int64_t t46 = 1906LL;

	t46 = ((x3521%(x3522>>x3523))^x3524);

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3533 = UINT64_MAX;
	uint8_t x3535 = 1U;

	t47 = ((x3533%(x3534>>x3535))^x3536);

	if (t47 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3549 = -1LL;
	static uint64_t x3550 = UINT64_MAX;
	volatile int32_t x3552 = -250;

	t48 = ((x3549%(x3550>>x3551))^x3552);

	if (t48 != 18446744073709549817LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3597 = -1;
	int16_t x3598 = INT16_MAX;
	uint8_t x3599 = 3U;
	volatile int64_t x3600 = -330214LL;

	t49 = ((x3597%(x3598>>x3599))^x3600);

	if (t49 != 330213LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x3609 = INT8_MIN;
	uint32_t x3610 = 55948U;
	int8_t x3611 = 1;
	static volatile int16_t x3612 = 5847;

	t50 = ((x3609%(x3610>>x3611))^x3612);

	if (t50 != 3419U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x3646 = INT64_MAX;
	uint8_t x3647 = 50U;
	int16_t x3648 = 1;
	volatile int64_t t51 = -159098093LL;

	t51 = ((x3645%(x3646>>x3647))^x3648);

	if (t51 != 30LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3701 = -1;
	uint32_t x3702 = 145095790U;
	static uint8_t x3703 = 9U;
	volatile int8_t x3704 = INT8_MIN;
	volatile uint32_t t52 = 8579U;

	t52 = ((x3701%(x3702>>x3703))^x3704);

	if (t52 != 4294775525U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3781 = 110903516034529617LLU;
	volatile uint8_t x3783 = 0U;
	static int32_t x3784 = 1714;
	uint64_t t53 = 166438330374LLU;

	t53 = ((x3781%(x3782>>x3783))^x3784);

	if (t53 != 1772LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x3865 = 39U;

	t54 = ((x3865%(x3866>>x3867))^x3868);

	if (t54 != 65496LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3933 = -1;
	volatile uint32_t x3934 = 239389116U;
	volatile int64_t t55 = 26956343665LL;

	t55 = ((x3933%(x3934>>x3935))^x3936);

	if (t55 != -5540479847192LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4072 = UINT64_MAX;

	t56 = ((x4069%(x4070>>x4071))^x4072);

	if (t56 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x4326 = 15779346LL;
	int64_t x4328 = 0LL;
	static int64_t t57 = -5098673177LL;

	t57 = ((x4325%(x4326>>x4327))^x4328);

	if (t57 != 15727LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x4381 = -1LL;
	int32_t x4384 = INT32_MIN;
	volatile int64_t t58 = -1547836525283295778LL;

	t58 = ((x4381%(x4382>>x4383))^x4384);

	if (t58 != 2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4401 = 12;
	int64_t x4402 = INT64_MAX;
	volatile uint64_t x4403 = 1LLU;
	int32_t x4404 = -1;
	volatile int64_t t59 = 3875827314162232079LL;

	t59 = ((x4401%(x4402>>x4403))^x4404);

	if (t59 != -13LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x4429 = 74193422;
	int8_t x4430 = 27;
	volatile int8_t x4431 = 1;
	volatile int64_t x4432 = -1LL;

	t60 = ((x4429%(x4430>>x4431))^x4432);

	if (t60 != -5LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4477 = 3U;
	int8_t x4479 = 1;
	int64_t x4480 = INT64_MIN;
	volatile int64_t t61 = -841963LL;

	t61 = ((x4477%(x4478>>x4479))^x4480);

	if (t61 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x4565 = 3933722917LLU;
	static int8_t x4567 = 1;
	volatile uint32_t x4568 = 6U;
	volatile uint64_t t62 = 23752725LLU;

	t62 = ((x4565%(x4566>>x4567))^x4568);

	if (t62 != 11806LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x4601 = INT32_MIN;
	uint64_t x4602 = UINT64_MAX;
	uint8_t x4603 = 12U;

	t63 = ((x4601%(x4602>>x4603))^x4604);

	if (t63 != 9218868439374884864LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4641 = 16027101U;
	uint16_t x4643 = 6U;
	int64_t t64 = -24LL;

	t64 = ((x4641%(x4642>>x4643))^x4644);

	if (t64 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4657 = -64869067LL;
	static volatile int8_t x4659 = 1;
	volatile int64_t t65 = 1130372838LL;

	t65 = ((x4657%(x4658>>x4659))^x4660);

	if (t65 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x4853 = UINT16_MAX;
	static int8_t x4854 = INT8_MAX;
	int16_t x4855 = 3;
	volatile uint64_t t66 = 11653152965500LLU;

	t66 = ((x4853%(x4854>>x4855))^x4856);

	if (t66 != 17885891964493LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4889 = UINT64_MAX;
	volatile uint64_t x4890 = 4223929051280049990LLU;
	int8_t x4892 = INT8_MIN;
	uint64_t t67 = 35LLU;

	t67 = ((x4889%(x4890>>x4891))^x4892);

	if (t67 != 18446744031516286035LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x5241 = 2235624U;
	volatile uint32_t x5242 = UINT32_MAX;
	int16_t x5243 = 2;
	volatile int16_t x5244 = -1;
	volatile uint32_t t68 = 112U;

	t68 = ((x5241%(x5242>>x5243))^x5244);

	if (t68 != 4292731671U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x5273 = UINT64_MAX;
	uint64_t x5274 = UINT64_MAX;
	uint8_t x5275 = 7U;
	uint16_t x5276 = 1597U;

	t69 = ((x5273%(x5274>>x5275))^x5276);

	if (t69 != 1602LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x5306 = UINT16_MAX;
	int8_t x5307 = 0;
	uint8_t x5308 = 7U;
	volatile int64_t t70 = -19928953LL;

	t70 = ((x5305%(x5306>>x5307))^x5308);

	if (t70 != 32760LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x5421 = INT32_MIN;
	int32_t x5422 = INT32_MAX;
	uint64_t t71 = 251685LLU;

	t71 = ((x5421%(x5422>>x5423))^x5424);

	if (t71 != 18446744073709525539LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x5522 = 46315732897LLU;
	uint64_t x5523 = 1LLU;
	volatile int64_t x5524 = INT64_MIN;
	volatile uint64_t t72 = 116625LLU;

	t72 = ((x5521%(x5522>>x5523))^x5524);

	if (t72 != 9223372039733318870LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5571 = 14U;
	int64_t x5572 = -16417669403LL;
	volatile uint64_t t73 = 1360464938LLU;

	t73 = ((x5569%(x5570>>x5571))^x5572);

	if (t73 != 18446744057291882778LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x5725 = INT8_MIN;
	uint32_t x5726 = 3568357U;
	uint8_t x5727 = 5U;
	static volatile uint32_t t74 = 4511U;

	t74 = ((x5725%(x5726>>x5727))^x5728);

	if (t74 != 56043U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x5781 = UINT8_MAX;
	uint64_t x5782 = UINT64_MAX;
	uint8_t x5783 = 1U;
	static int64_t x5784 = -1LL;
	uint64_t t75 = 3606592LLU;

	t75 = ((x5781%(x5782>>x5783))^x5784);

	if (t75 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x5794 = INT8_MAX;
	static int8_t x5795 = 0;
	int64_t t76 = 255265LL;

	t76 = ((x5793%(x5794>>x5795))^x5796);

	if (t76 != -68LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5827 = 0U;
	uint8_t x5828 = 17U;
	static volatile int32_t t77 = -854132240;

	t77 = ((x5825%(x5826>>x5827))^x5828);

	if (t77 != -32751) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5889 = 1958U;
	int8_t x5890 = INT8_MAX;
	static uint16_t x5892 = 84U;

	t78 = ((x5889%(x5890>>x5891))^x5892);

	if (t78 != 97U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6169 = -29;
	volatile uint64_t x6170 = 4453281504824210815LLU;
	uint8_t x6171 = 14U;
	volatile int16_t x6172 = -1;
	uint64_t t79 = 6298520393692959LLU;

	t79 = ((x6169%(x6170>>x6171))^x6172);

	if (t79 != 18446707512689440088LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x6206 = INT16_MAX;
	volatile uint32_t x6207 = 11U;
	uint32_t t80 = 2425964U;

	t80 = ((x6205%(x6206>>x6207))^x6208);

	if (t80 != 4291783075U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x6233 = 148U;
	uint16_t x6234 = UINT16_MAX;
	static volatile int32_t t81 = 38;

	t81 = ((x6233%(x6234>>x6235))^x6236);

	if (t81 != 8157) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x6274 = INT32_MAX;
	volatile uint8_t x6275 = 4U;
	int64_t x6276 = -4776LL;
	volatile int64_t t82 = 4661801LL;

	t82 = ((x6273%(x6274>>x6275))^x6276);

	if (t82 != 4952LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6289 = -39;
	static int32_t x6292 = 1991468;

	t83 = ((x6289%(x6290>>x6291))^x6292);

	if (t83 != -1991435) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x6294 = UINT32_MAX;
	volatile uint16_t x6295 = 15U;
	volatile int32_t x6296 = 0;
	volatile uint32_t t84 = 656083U;

	t84 = ((x6293%(x6294>>x6295))^x6296);

	if (t84 != 69U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x6309 = 27;
	uint8_t x6310 = UINT8_MAX;
	volatile uint32_t x6311 = 5U;
	uint8_t x6312 = UINT8_MAX;
	volatile int32_t t85 = 5284;

	t85 = ((x6309%(x6310>>x6311))^x6312);

	if (t85 != 249) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x6378 = UINT64_MAX;
	uint8_t x6379 = 46U;
	int16_t x6380 = INT16_MIN;

	t86 = ((x6377%(x6378>>x6379))^x6380);

	if (t86 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x6509 = INT8_MAX;
	volatile uint64_t x6510 = 48679LLU;
	uint64_t t87 = 9026966727107649LLU;

	t87 = ((x6509%(x6510>>x6511))^x6512);

	if (t87 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x6685 = 3LLU;
	volatile uint64_t t88 = 260041650LLU;

	t88 = ((x6685%(x6686>>x6687))^x6688);

	if (t88 != 33LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x6837 = INT8_MAX;
	int8_t x6839 = 3;
	int8_t x6840 = -1;
	int32_t t89 = 1;

	t89 = ((x6837%(x6838>>x6839))^x6840);

	if (t89 != -4) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x6841 = -1;
	uint8_t x6842 = UINT8_MAX;
	static int16_t x6843 = 3;
	int16_t x6844 = INT16_MIN;
	int32_t t90 = -175;

	t90 = ((x6841%(x6842>>x6843))^x6844);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x6933 = 73999U;
	uint64_t x6934 = 497787903617339LLU;
	static volatile int8_t x6935 = 1;
	uint64_t x6936 = 97404LLU;
	static volatile uint64_t t91 = 238347758005628117LLU;

	t91 = ((x6933%(x6934>>x6935))^x6936);

	if (t91 != 23923LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x6958 = 38;
	static uint8_t x6959 = 0U;
	int16_t x6960 = -1;
	volatile int32_t t92 = 27028;

	t92 = ((x6957%(x6958>>x6959))^x6960);

	if (t92 != 11) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x7001 = INT16_MIN;
	uint64_t x7002 = 9425522LLU;
	static int32_t x7003 = 2;
	static uint16_t x7004 = UINT16_MAX;
	uint64_t t93 = 90928LLU;

	t93 = ((x7001%(x7002>>x7003))^x7004);

	if (t93 != 711687LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x7033 = 15;
	int64_t x7034 = INT64_MAX;
	uint16_t x7036 = 0U;
	volatile int64_t t94 = 532281LL;

	t94 = ((x7033%(x7034>>x7035))^x7036);

	if (t94 != 15LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x7049 = UINT16_MAX;
	static uint32_t x7050 = UINT32_MAX;
	uint8_t x7051 = 0U;
	int16_t x7052 = -1;
	uint32_t t95 = 194U;

	t95 = ((x7049%(x7050>>x7051))^x7052);

	if (t95 != 4294901760U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x7089 = -1;
	uint64_t x7090 = UINT64_MAX;
	static volatile uint8_t x7091 = 11U;
	static volatile uint64_t t96 = 16860467327911LLU;

	t96 = ((x7089%(x7090>>x7091))^x7092);

	if (t96 != 2036LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x7153 = 2132596306766LLU;
	uint64_t x7154 = 7963945437187LLU;
	uint8_t x7156 = 1U;
	uint64_t t97 = 292963973595590LLU;

	t97 = ((x7153%(x7154>>x7155))^x7156);

	if (t97 != 141609947471LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x7161 = 182547514;
	volatile uint16_t x7162 = UINT16_MAX;
	uint8_t x7163 = 14U;
	int64_t x7164 = INT64_MAX;
	int64_t t98 = 209383LL;

	t98 = ((x7161%(x7162>>x7163))^x7164);

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x7173 = 260U;
	uint64_t x7174 = 11166344384LLU;
	uint16_t x7175 = 3U;
	int64_t x7176 = INT64_MIN;
	uint64_t t99 = 126LLU;

	t99 = ((x7173%(x7174>>x7175))^x7176);

	if (t99 != 9223372036854776068LLU) { NG(); } else { ; }
	
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

