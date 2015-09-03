#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x165 = -1;
int32_t t5 = 2;
static int16_t x331 = 5;
int32_t x417 = -40;
int16_t x419 = 6;
uint8_t x611 = 0U;
int8_t x745 = 56;
int16_t x1107 = 4;
static uint8_t x1202 = UINT8_MAX;
int32_t x1203 = 0;
uint16_t x1218 = UINT16_MAX;
int8_t x1220 = -1;
static int8_t x1300 = -8;
volatile int64_t x1448 = -1LL;
volatile int32_t x1630 = 22;
static volatile int64_t t20 = 142098939273061053LL;
int64_t x1674 = INT64_MAX;
int8_t x1696 = -1;
uint64_t x1758 = UINT64_MAX;
volatile uint8_t x1760 = 1U;
volatile int16_t x1768 = 122;
static uint16_t x1813 = 169U;
int8_t x1859 = 4;
int64_t t28 = -116408566064LL;
uint8_t x1947 = 28U;
static int32_t x1948 = 0;
volatile uint32_t t30 = UINT32_MAX;
int64_t x1953 = INT64_MIN;
uint64_t x1954 = UINT64_MAX;
int32_t x2125 = -4;
static int8_t x2303 = 1;
int16_t x2314 = INT16_MAX;
volatile uint64_t t34 = 10813132614021646LLU;
int16_t x2379 = 0;
uint32_t x2475 = 54U;
volatile uint64_t t38 = 2392LLU;
uint16_t x2537 = 2723U;
int32_t x2661 = -132139;
uint16_t x2663 = 0U;
int16_t x2700 = INT16_MIN;
uint64_t x2710 = UINT64_MAX;
static uint16_t x2711 = 33U;
int8_t x2846 = 43;
uint64_t x2848 = 2LLU;
int8_t x2918 = INT8_MAX;
volatile int16_t x3098 = 0;
static uint64_t x3100 = UINT64_MAX;
int64_t x3180 = 1130706479052189726LL;
int64_t x3185 = INT64_MIN;
uint8_t x3187 = 1U;
volatile int16_t x3226 = 0;
static uint8_t x3227 = 18U;
int32_t x3264 = -1;
volatile int32_t x3317 = -1;
uint8_t x3319 = 3U;
volatile uint8_t x3320 = 0U;
int8_t x3335 = 1;
int16_t x3336 = INT16_MIN;
volatile int16_t x3462 = INT16_MAX;
static int32_t x3551 = 11;
int32_t x3553 = INT32_MAX;
int16_t x3554 = INT16_MAX;
int32_t t59 = 1;
int32_t x3922 = INT32_MAX;
uint64_t t61 = 474804639LLU;
uint8_t x3950 = UINT8_MAX;
int16_t x4063 = 0;
volatile uint64_t t69 = 11460LLU;
static uint64_t x4512 = UINT64_MAX;
volatile uint64_t t72 = 4870515522462611LLU;
int64_t t73 = 2LL;
uint64_t x4705 = 508LLU;
static int32_t x4706 = 36546;
int64_t x4731 = 17LL;
uint8_t x4746 = UINT8_MAX;
int32_t x4874 = INT32_MAX;
int32_t t77 = 13048267;
volatile int64_t x4878 = INT64_MAX;
int16_t x4880 = INT16_MIN;
volatile int32_t t79 = -3869;
uint32_t x5129 = UINT32_MAX;
uint32_t x5132 = 395U;
uint16_t x5177 = UINT16_MAX;
int16_t x5204 = INT16_MIN;
static uint64_t x5259 = 1LLU;
static uint8_t x5354 = 114U;
int16_t x5423 = 5;
uint64_t x5527 = 7LLU;
volatile int16_t x5528 = 28;
int16_t x5581 = INT16_MAX;
static int32_t x5583 = 4;
static uint64_t x5694 = 10135592790LLU;
volatile uint32_t x5695 = 3U;
int64_t x5696 = 166186917194828LL;
static uint32_t x5711 = 2U;
uint64_t x5712 = UINT64_MAX;
static int16_t x5739 = 1;
volatile int64_t t92 = 3143008554LL;
volatile int8_t x5959 = 2;
static int16_t x5985 = INT16_MIN;
uint8_t x5988 = 0U;
uint32_t t95 = 144975679U;
static uint32_t x6000 = UINT32_MAX;
uint8_t x6072 = UINT8_MAX;
uint32_t t98 = 346967U;
int32_t x6126 = 124148;


void f0(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MAX;
	uint16_t x111 = 26U;
	volatile int8_t x112 = INT8_MIN;
	int64_t t0 = 265976977649404085LL;

	t0 = ((x109-(x110>>x111))+x112);

	if (t0 != -137438986367LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x125 = UINT8_MAX;
	static int8_t x126 = INT8_MAX;
	int32_t x127 = 3;
	int32_t x128 = 9;
	volatile int32_t t1 = -273020;

	t1 = ((x125-(x126>>x127))+x128);

	if (t1 != 249) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x166 = 97;
	uint8_t x167 = 21U;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t2 = 24233;

	t2 = ((x165-(x166>>x167))+x168);

	if (t2 != -32769) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x241 = INT8_MIN;
	volatile uint64_t x242 = UINT64_MAX;
	uint16_t x243 = 28U;
	int32_t x244 = INT32_MAX;
	volatile uint64_t t3 = 327806537LLU;

	t3 = ((x241-(x242>>x243))+x244);

	if (t3 != 18446744007137558400LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x293 = UINT64_MAX;
	int8_t x294 = INT8_MAX;
	static int8_t x295 = 1;
	int8_t x296 = 0;
	volatile uint64_t t4 = 9446085836LLU;

	t4 = ((x293-(x294>>x295))+x296);

	if (t4 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x297 = 54;
	int32_t x298 = 13062447;
	uint8_t x299 = 28U;
	volatile int32_t x300 = INT32_MIN;

	t5 = ((x297-(x298>>x299))+x300);

	if (t5 != -2147483594) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x329 = 84U;
	int16_t x330 = INT16_MAX;
	int64_t x332 = INT64_MIN;
	int64_t t6 = 1094091388144563LL;

	t6 = ((x329-(x330>>x331))+x332);

	if (t6 != -9223372032559809451LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x353 = -2048461168942LL;
	volatile int64_t x354 = 144194LL;
	uint8_t x355 = 1U;
	int64_t x356 = 391338215LL;
	int64_t t7 = 666829LL;

	t7 = ((x353-(x354>>x355))+x356);

	if (t7 != -2048069902824LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x418 = INT16_MAX;
	int64_t x420 = INT64_MAX;
	int64_t t8 = 16860727LL;

	t8 = ((x417-(x418>>x419))+x420);

	if (t8 != 9223372036854775256LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x609 = 932029U;
	uint32_t x610 = 10583U;
	int64_t x612 = INT64_MIN;
	volatile int64_t t9 = -84235768LL;

	t9 = ((x609-(x610>>x611))+x612);

	if (t9 != -9223372036853854362LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x689 = 1;
	int32_t x690 = INT32_MAX;
	uint64_t x691 = 7LLU;
	int64_t x692 = -1LL;
	static int64_t t10 = 291022966352821019LL;

	t10 = ((x689-(x690>>x691))+x692);

	if (t10 != -16777215LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x746 = 77289U;
	static uint8_t x747 = 1U;
	int16_t x748 = INT16_MAX;
	volatile uint32_t t11 = 6U;

	t11 = ((x745-(x746>>x747))+x748);

	if (t11 != 4294961475U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1105 = 14385LL;
	uint8_t x1106 = 0U;
	int32_t x1108 = INT32_MIN;
	int64_t t12 = 7291767119129LL;

	t12 = ((x1105-(x1106>>x1107))+x1108);

	if (t12 != -2147469263LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1165 = UINT32_MAX;
	uint8_t x1166 = 19U;
	uint8_t x1167 = 0U;
	volatile int8_t x1168 = INT8_MAX;
	uint32_t t13 = 81U;

	t13 = ((x1165-(x1166>>x1167))+x1168);

	if (t13 != 107U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x1177 = -16638409LL;
	uint64_t x1178 = UINT64_MAX;
	volatile int8_t x1179 = 22;
	static volatile int64_t x1180 = INT64_MIN;
	static uint64_t t14 = 30219982033190064LLU;

	t14 = ((x1177-(x1178>>x1179))+x1180);

	if (t14 != 9223367638791626296LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1201 = -63980598;
	volatile uint32_t x1204 = 1840U;
	volatile uint32_t t15 = 15669U;

	t15 = ((x1201-(x1202>>x1203))+x1204);

	if (t15 != 4230988283U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1217 = -1;
	uint16_t x1219 = 20U;
	int32_t t16 = -187909;

	t16 = ((x1217-(x1218>>x1219))+x1220);

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1297 = INT8_MAX;
	int64_t x1298 = INT64_MAX;
	int32_t x1299 = 19;
	static int64_t t17 = -68LL;

	t17 = ((x1297-(x1298>>x1299))+x1300);

	if (t17 != -17592186044296LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1445 = UINT8_MAX;
	uint16_t x1446 = 6692U;
	volatile uint16_t x1447 = 2U;
	int64_t t18 = 118884163077516LL;

	t18 = ((x1445-(x1446>>x1447))+x1448);

	if (t18 != -1419LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1629 = -1;
	int8_t x1631 = 3;
	uint64_t x1632 = UINT64_MAX;
	volatile uint64_t t19 = 26740LLU;

	t19 = ((x1629-(x1630>>x1631))+x1632);

	if (t19 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1641 = UINT16_MAX;
	volatile int64_t x1642 = 42330LL;
	int16_t x1643 = 38;
	uint32_t x1644 = 2409U;

	t20 = ((x1641-(x1642>>x1643))+x1644);

	if (t20 != 67944LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1673 = INT16_MIN;
	static uint16_t x1675 = 3U;
	static int64_t x1676 = -208648036759LL;
	int64_t t21 = -76321LL;

	t21 = ((x1673-(x1674>>x1675))+x1676);

	if (t21 != -1152921713254916502LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1693 = INT16_MAX;
	static uint32_t x1694 = 1U;
	int8_t x1695 = 3;
	volatile uint32_t t22 = 12873U;

	t22 = ((x1693-(x1694>>x1695))+x1696);

	if (t22 != 32766U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1757 = UINT8_MAX;
	volatile uint8_t x1759 = 10U;
	uint64_t t23 = 481384964291670191LLU;

	t23 = ((x1757-(x1758>>x1759))+x1760);

	if (t23 != 18428729675200069889LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1765 = -43230016LL;
	int16_t x1766 = 184;
	uint16_t x1767 = 1U;
	int64_t t24 = 176LL;

	t24 = ((x1765-(x1766>>x1767))+x1768);

	if (t24 != -43229986LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1781 = 0U;
	volatile int16_t x1782 = INT16_MAX;
	int32_t x1783 = 27;
	volatile int32_t x1784 = 958;
	volatile uint32_t t25 = 1660261U;

	t25 = ((x1781-(x1782>>x1783))+x1784);

	if (t25 != 958U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1814 = 7509;
	uint8_t x1815 = 1U;
	volatile uint32_t x1816 = 2767430U;
	uint32_t t26 = 22U;

	t26 = ((x1813-(x1814>>x1815))+x1816);

	if (t26 != 2763845U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x1845 = 108U;
	uint64_t x1846 = 4843223346262LLU;
	static int8_t x1847 = 8;
	int8_t x1848 = INT8_MIN;
	uint64_t t27 = 329877361LLU;

	t27 = ((x1845-(x1846>>x1847))+x1848);

	if (t27 != 18446744054790710400LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1857 = -1944635794220LL;
	int16_t x1858 = INT16_MAX;
	int32_t x1860 = INT32_MAX;

	t28 = ((x1857-(x1858>>x1859))+x1860);

	if (t28 != -1942488312620LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1881 = UINT16_MAX;
	static int64_t x1882 = 205120422977LL;
	static int64_t x1883 = 27LL;
	int32_t x1884 = INT32_MIN;
	static int64_t t29 = 61704102753491863LL;

	t29 = ((x1881-(x1882>>x1883))+x1884);

	if (t29 != -2147419641LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1945 = -1;
	uint32_t x1946 = 7U;

	t30 = ((x1945-(x1946>>x1947))+x1948);

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1955 = 5LL;
	static uint32_t x1956 = 43444U;
	uint64_t t31 = 58447667366209LLU;

	t31 = ((x1953-(x1954>>x1955))+x1956);

	if (t31 != 8646911284551395765LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x2126 = 0U;
	static int32_t x2127 = 28;
	uint8_t x2128 = 7U;
	int32_t t32 = 0;

	t32 = ((x2125-(x2126>>x2127))+x2128);

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2301 = UINT8_MAX;
	volatile uint32_t x2302 = 212238U;
	static int8_t x2304 = -1;
	static uint32_t t33 = 367U;

	t33 = ((x2301-(x2302>>x2303))+x2304);

	if (t33 != 4294861431U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2313 = INT16_MIN;
	uint8_t x2315 = 15U;
	uint64_t x2316 = 420LLU;

	t34 = ((x2313-(x2314>>x2315))+x2316);

	if (t34 != 18446744073709519268LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x2361 = 6;
	static uint32_t x2362 = 35U;
	static uint8_t x2363 = 10U;
	uint64_t x2364 = UINT64_MAX;
	uint64_t t35 = 2806595000LLU;

	t35 = ((x2361-(x2362>>x2363))+x2364);

	if (t35 != 5LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x2377 = 0LLU;
	static int16_t x2378 = INT16_MAX;
	uint8_t x2380 = 8U;
	volatile uint64_t t36 = 2LLU;

	t36 = ((x2377-(x2378>>x2379))+x2380);

	if (t36 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2425 = INT16_MAX;
	int8_t x2426 = INT8_MAX;
	static uint8_t x2427 = 8U;
	uint32_t x2428 = UINT32_MAX;
	volatile uint32_t t37 = 28342U;

	t37 = ((x2425-(x2426>>x2427))+x2428);

	if (t37 != 32766U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2473 = INT32_MAX;
	uint64_t x2474 = 719LLU;
	int8_t x2476 = INT8_MIN;

	t38 = ((x2473-(x2474>>x2475))+x2476);

	if (t38 != 2147483519LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2485 = INT16_MIN;
	static uint16_t x2486 = 15604U;
	int16_t x2487 = 0;
	int32_t x2488 = -192193;
	volatile int32_t t39 = -2;

	t39 = ((x2485-(x2486>>x2487))+x2488);

	if (t39 != -240565) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2509 = -1LL;
	int32_t x2510 = 13371;
	int8_t x2511 = 1;
	uint8_t x2512 = 1U;
	int64_t t40 = -35343375LL;

	t40 = ((x2509-(x2510>>x2511))+x2512);

	if (t40 != -6685LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2538 = 600;
	uint16_t x2539 = 6U;
	int8_t x2540 = 0;
	volatile int32_t t41 = -704597;

	t41 = ((x2537-(x2538>>x2539))+x2540);

	if (t41 != 2714) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2662 = INT8_MAX;
	uint64_t x2664 = UINT64_MAX;
	static uint64_t t42 = 6579495LLU;

	t42 = ((x2661-(x2662>>x2663))+x2664);

	if (t42 != 18446744073709419349LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x2697 = -1;
	uint32_t x2698 = 13476U;
	int8_t x2699 = 1;
	volatile uint32_t t43 = 142U;

	t43 = ((x2697-(x2698>>x2699))+x2700);

	if (t43 != 4294927789U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2709 = INT16_MIN;
	volatile uint8_t x2712 = UINT8_MAX;
	uint64_t t44 = 21902564028175847LLU;

	t44 = ((x2709-(x2710>>x2711))+x2712);

	if (t44 != 18446744071562035456LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2845 = 40U;
	int64_t x2847 = 1LL;
	volatile uint64_t t45 = 7668704000630272504LLU;

	t45 = ((x2845-(x2846>>x2847))+x2848);

	if (t45 != 21LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2917 = 4U;
	volatile int16_t x2919 = 10;
	volatile uint16_t x2920 = UINT16_MAX;
	int32_t t46 = -2664333;

	t46 = ((x2917-(x2918>>x2919))+x2920);

	if (t46 != 65539) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3097 = INT64_MIN;
	uint32_t x3099 = 20U;
	uint64_t t47 = 687849407638201LLU;

	t47 = ((x3097-(x3098>>x3099))+x3100);

	if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3177 = 3;
	static int32_t x3178 = 661856;
	static uint32_t x3179 = 13U;
	int64_t t48 = 56115459054LL;

	t48 = ((x3177-(x3178>>x3179))+x3180);

	if (t48 != 1130706479052189649LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x3186 = UINT64_MAX;
	int64_t x3188 = INT64_MIN;
	volatile uint64_t t49 = 303LLU;

	t49 = ((x3185-(x3186>>x3187))+x3188);

	if (t49 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x3225 = INT64_MAX;
	volatile uint64_t x3228 = 25809687060947LLU;
	static volatile uint64_t t50 = 388061753963657LLU;

	t50 = ((x3225-(x3226>>x3227))+x3228);

	if (t50 != 9223397846541836754LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x3261 = UINT8_MAX;
	static uint32_t x3262 = 27U;
	static uint16_t x3263 = 0U;
	volatile uint32_t t51 = 27U;

	t51 = ((x3261-(x3262>>x3263))+x3264);

	if (t51 != 227U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3318 = 240;
	static volatile int32_t t52 = -1665450;

	t52 = ((x3317-(x3318>>x3319))+x3320);

	if (t52 != -31) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3333 = INT16_MIN;
	static uint64_t x3334 = 67082660156LLU;
	uint64_t t53 = 395245687469LLU;

	t53 = ((x3333-(x3334>>x3335))+x3336);

	if (t53 != 18446744040168156002LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3365 = UINT32_MAX;
	static volatile int32_t x3366 = 91506;
	int16_t x3367 = 1;
	uint64_t x3368 = 10741LLU;
	volatile uint64_t t54 = 2LLU;

	t54 = ((x3365-(x3366>>x3367))+x3368);

	if (t54 != 4294932283LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3461 = INT8_MIN;
	int16_t x3463 = 18;
	int64_t x3464 = 55204703LL;
	static int64_t t55 = 540547LL;

	t55 = ((x3461-(x3462>>x3463))+x3464);

	if (t55 != 55204575LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3549 = INT8_MIN;
	uint16_t x3550 = UINT16_MAX;
	int8_t x3552 = INT8_MIN;
	volatile int32_t t56 = 2;

	t56 = ((x3549-(x3550>>x3551))+x3552);

	if (t56 != -287) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x3555 = 7U;
	volatile uint32_t x3556 = 58U;
	uint32_t t57 = 3U;

	t57 = ((x3553-(x3554>>x3555))+x3556);

	if (t57 != 2147483450U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x3673 = 184LL;
	uint32_t x3674 = 898470U;
	uint32_t x3675 = 4U;
	int16_t x3676 = INT16_MIN;
	volatile int64_t t58 = 1340805LL;

	t58 = ((x3673-(x3674>>x3675))+x3676);

	if (t58 != -88738LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3693 = 1U;
	volatile int32_t x3694 = 256074;
	static uint8_t x3695 = 0U;
	uint16_t x3696 = 3447U;

	t59 = ((x3693-(x3694>>x3695))+x3696);

	if (t59 != -252626) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3745 = -221LL;
	volatile int16_t x3746 = INT16_MAX;
	int8_t x3747 = 0;
	int64_t x3748 = -1LL;
	int64_t t60 = 4476458LL;

	t60 = ((x3745-(x3746>>x3747))+x3748);

	if (t60 != -32989LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x3921 = 117343217501650032LLU;
	uint32_t x3923 = 7U;
	static int32_t x3924 = -1;

	t61 = ((x3921-(x3922>>x3923))+x3924);

	if (t61 != 117343217484872816LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x3949 = 0U;
	uint8_t x3951 = 11U;
	uint8_t x3952 = 27U;
	static int32_t t62 = 968591709;

	t62 = ((x3949-(x3950>>x3951))+x3952);

	if (t62 != 27) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3965 = -1;
	volatile uint8_t x3966 = 0U;
	int8_t x3967 = 23;
	uint8_t x3968 = UINT8_MAX;
	int32_t t63 = -145075;

	t63 = ((x3965-(x3966>>x3967))+x3968);

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3977 = -1;
	int8_t x3978 = INT8_MAX;
	uint16_t x3979 = 1U;
	static int8_t x3980 = INT8_MIN;
	int32_t t64 = 0;

	t64 = ((x3977-(x3978>>x3979))+x3980);

	if (t64 != -192) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3981 = UINT16_MAX;
	uint64_t x3982 = 8977171LLU;
	uint8_t x3983 = 1U;
	uint32_t x3984 = 3032U;
	static volatile uint64_t t65 = 14626055LLU;

	t65 = ((x3981-(x3982>>x3983))+x3984);

	if (t65 != 18446744073705131598LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4053 = 3006352;
	volatile int32_t x4054 = 6822;
	uint8_t x4055 = 31U;
	uint32_t x4056 = UINT32_MAX;
	volatile uint32_t t66 = 2304U;

	t66 = ((x4053-(x4054>>x4055))+x4056);

	if (t66 != 3006351U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4061 = INT8_MAX;
	int64_t x4062 = INT64_MAX;
	volatile int64_t x4064 = -1LL;
	int64_t t67 = -409LL;

	t67 = ((x4061-(x4062>>x4063))+x4064);

	if (t67 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4105 = -14533;
	uint16_t x4106 = 2U;
	uint8_t x4107 = 17U;
	int8_t x4108 = INT8_MAX;
	int32_t t68 = -3146;

	t68 = ((x4105-(x4106>>x4107))+x4108);

	if (t68 != -14406) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4161 = 0LLU;
	uint16_t x4162 = 0U;
	int8_t x4163 = 0;
	int32_t x4164 = INT32_MAX;

	t69 = ((x4161-(x4162>>x4163))+x4164);

	if (t69 != 2147483647LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4173 = UINT8_MAX;
	static int8_t x4174 = 3;
	int8_t x4175 = 5;
	uint64_t x4176 = UINT64_MAX;
	volatile uint64_t t70 = 10629284655709LLU;

	t70 = ((x4173-(x4174>>x4175))+x4176);

	if (t70 != 254LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4345 = INT8_MIN;
	static volatile uint32_t x4346 = 1U;
	volatile uint8_t x4347 = 1U;
	int64_t x4348 = 2866519277767138143LL;
	int64_t t71 = 724149655845LL;

	t71 = ((x4345-(x4346>>x4347))+x4348);

	if (t71 != 2866519282062105311LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x4509 = -1;
	static volatile int32_t x4510 = 0;
	volatile uint32_t x4511 = 12U;

	t72 = ((x4509-(x4510>>x4511))+x4512);

	if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4537 = -1;
	static int64_t x4538 = 53753253194LL;
	static int8_t x4539 = 0;
	volatile uint8_t x4540 = 13U;

	t73 = ((x4537-(x4538>>x4539))+x4540);

	if (t73 != -53753253182LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4707 = 1U;
	volatile uint8_t x4708 = UINT8_MAX;
	uint64_t t74 = 3LLU;

	t74 = ((x4705-(x4706>>x4707))+x4708);

	if (t74 != 18446744073709534106LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4729 = 5636U;
	volatile uint32_t x4730 = UINT32_MAX;
	uint8_t x4732 = UINT8_MAX;
	uint32_t t75 = 5691U;

	t75 = ((x4729-(x4730>>x4731))+x4732);

	if (t75 != 4294940420U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4745 = -1;
	volatile uint16_t x4747 = 9U;
	volatile uint64_t x4748 = 7054391101175476LLU;
	uint64_t t76 = 20036170280901652LLU;

	t76 = ((x4745-(x4746>>x4747))+x4748);

	if (t76 != 7054391101175475LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4873 = UINT8_MAX;
	int16_t x4875 = 3;
	static uint16_t x4876 = 35U;

	t77 = ((x4873-(x4874>>x4875))+x4876);

	if (t77 != -268435165) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4877 = INT32_MAX;
	uint8_t x4879 = 14U;
	int64_t t78 = 25717710206257LL;

	t78 = ((x4877-(x4878>>x4879))+x4880);

	if (t78 != -562947805970432LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x4909 = INT16_MIN;
	static uint8_t x4910 = 1U;
	uint8_t x4911 = 20U;
	uint8_t x4912 = 7U;

	t79 = ((x4909-(x4910>>x4911))+x4912);

	if (t79 != -32761) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5130 = INT64_MAX;
	uint8_t x5131 = 0U;
	volatile int64_t t80 = -5619174481LL;

	t80 = ((x5129-(x5130>>x5131))+x5132);

	if (t80 != -9223372032559808117LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x5178 = 3285746017028298LLU;
	volatile uint8_t x5179 = 52U;
	int64_t x5180 = 863087363LL;
	uint64_t t81 = 50LLU;

	t81 = ((x5177-(x5178>>x5179))+x5180);

	if (t81 != 863152898LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5201 = 1780U;
	static uint16_t x5202 = 178U;
	uint8_t x5203 = 27U;
	int32_t t82 = 13006;

	t82 = ((x5201-(x5202>>x5203))+x5204);

	if (t82 != -30988) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5257 = INT32_MAX;
	static int32_t x5258 = INT32_MAX;
	volatile int16_t x5260 = INT16_MAX;
	volatile int32_t t83 = 67878223;

	t83 = ((x5257-(x5258>>x5259))+x5260);

	if (t83 != 1073774591) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x5333 = UINT64_MAX;
	uint16_t x5334 = UINT16_MAX;
	uint16_t x5335 = 24U;
	volatile int64_t x5336 = INT64_MIN;
	uint64_t t84 = 61228460LLU;

	t84 = ((x5333-(x5334>>x5335))+x5336);

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x5353 = 978456746108400LLU;
	int8_t x5355 = 0;
	int8_t x5356 = INT8_MIN;
	static uint64_t t85 = 26307727LLU;

	t85 = ((x5353-(x5354>>x5355))+x5356);

	if (t85 != 978456746108158LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x5421 = UINT8_MAX;
	static int8_t x5422 = 1;
	int64_t x5424 = -1LL;
	static int64_t t86 = -13295804529803LL;

	t86 = ((x5421-(x5422>>x5423))+x5424);

	if (t86 != 254LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5525 = UINT64_MAX;
	int64_t x5526 = INT64_MAX;
	volatile uint64_t t87 = 3046929LLU;

	t87 = ((x5525-(x5526>>x5527))+x5528);

	if (t87 != 18374686479671623708LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5582 = 829U;
	int32_t x5584 = INT32_MAX;
	volatile uint32_t t88 = 88487656U;

	t88 = ((x5581-(x5582>>x5583))+x5584);

	if (t88 != 2147516363U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x5693 = INT64_MIN;
	volatile uint64_t t89 = 270060102909LLU;

	t89 = ((x5693-(x5694>>x5695))+x5696);

	if (t89 != 9223538222505021538LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5709 = 3073191U;
	int8_t x5710 = INT8_MAX;
	static uint64_t t90 = 9730LLU;

	t90 = ((x5709-(x5710>>x5711))+x5712);

	if (t90 != 3073159LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5721 = 21886616196LLU;
	int64_t x5722 = 23468240039LL;
	int64_t x5723 = 27LL;
	int16_t x5724 = -1;
	uint64_t t91 = 12LLU;

	t91 = ((x5721-(x5722>>x5723))+x5724);

	if (t91 != 21886616021LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5737 = -1;
	static uint8_t x5738 = 7U;
	static int64_t x5740 = INT64_MAX;

	t92 = ((x5737-(x5738>>x5739))+x5740);

	if (t92 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x5957 = 526U;
	static uint8_t x5958 = UINT8_MAX;
	volatile uint64_t x5960 = 1072355214595652122LLU;
	volatile uint64_t t93 = 698817835LLU;

	t93 = ((x5957-(x5958>>x5959))+x5960);

	if (t93 != 1072355214595652585LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x5973 = 12425U;
	uint64_t x5974 = UINT64_MAX;
	static int8_t x5975 = 0;
	int16_t x5976 = INT16_MIN;
	uint64_t t94 = 1135094462104LLU;

	t94 = ((x5973-(x5974>>x5975))+x5976);

	if (t94 != 18446744073709531274LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x5986 = 3709U;
	volatile uint16_t x5987 = 5U;

	t95 = ((x5985-(x5986>>x5987))+x5988);

	if (t95 != 4294934413U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5997 = 60U;
	uint64_t x5998 = UINT64_MAX;
	uint32_t x5999 = 0U;
	volatile uint64_t t96 = 1391363647737LLU;

	t96 = ((x5997-(x5998>>x5999))+x6000);

	if (t96 != 4294967356LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x6033 = INT64_MIN;
	int64_t x6034 = 0LL;
	uint8_t x6035 = 4U;
	static uint8_t x6036 = UINT8_MAX;
	int64_t t97 = 49238949179777997LL;

	t97 = ((x6033-(x6034>>x6035))+x6036);

	if (t97 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6069 = UINT16_MAX;
	uint32_t x6070 = UINT32_MAX;
	uint8_t x6071 = 0U;

	t98 = ((x6069-(x6070>>x6071))+x6072);

	if (t98 != 65791U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6125 = INT16_MIN;
	uint8_t x6127 = 14U;
	volatile int8_t x6128 = -1;
	volatile int32_t t99 = 67;

	t99 = ((x6125-(x6126>>x6127))+x6128);

	if (t99 != -32776) { NG(); } else { ; }
	
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

