#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x81 = -1;
uint64_t t1 = 50216337804093716LLU;
uint32_t x225 = 8U;
int32_t x227 = 7;
int64_t x337 = -1LL;
volatile int8_t x478 = -6;
uint8_t x489 = UINT8_MAX;
int16_t x491 = 1;
int16_t x522 = INT16_MAX;
volatile int64_t t9 = -21445518LL;
int64_t x785 = INT64_MIN;
uint32_t x833 = 7344579U;
uint32_t x834 = 0U;
uint64_t t14 = 2LLU;
int16_t x1021 = -1;
int8_t x1141 = 6;
int32_t x1211 = 11;
int64_t t19 = 28463194LL;
uint64_t t20 = 1614151492LLU;
static uint16_t x1301 = 415U;
volatile uint32_t t21 = 14305U;
volatile uint8_t x1370 = UINT8_MAX;
int8_t x1382 = INT8_MIN;
static uint8_t x1383 = 0U;
int8_t x1384 = -1;
uint16_t x1651 = 22U;
static uint8_t x1675 = 1U;
static uint64_t x1676 = UINT64_MAX;
int8_t x1684 = INT8_MIN;
uint16_t x1826 = 0U;
uint64_t x1828 = UINT64_MAX;
int8_t x1834 = -1;
volatile int64_t t31 = 2LL;
uint8_t x1933 = 3U;
volatile uint64_t t32 = 6LLU;
int8_t x2036 = INT8_MAX;
static volatile int32_t t33 = 141170555;
int32_t x2121 = INT32_MIN;
static int8_t x2142 = INT8_MIN;
int16_t x2143 = 30;
int16_t x2178 = 0;
int8_t x2258 = INT8_MIN;
volatile int8_t x2260 = -1;
static int32_t t38 = 1686;
uint32_t x2281 = 22U;
int16_t x2286 = INT16_MIN;
uint8_t x2308 = 18U;
static uint8_t x2331 = 3U;
uint64_t t43 = 1781796651857LLU;
volatile int32_t x2473 = -1;
uint16_t x2495 = 54U;
uint64_t x2497 = UINT64_MAX;
volatile uint8_t x2519 = 25U;
int32_t x2520 = -224;
int32_t t48 = 896;
uint64_t t49 = 12003999829254126LLU;
uint8_t x2721 = 2U;
static int64_t x2837 = -12LL;
uint64_t x2897 = 424629155LLU;
volatile int8_t x2957 = -1;
uint32_t x2965 = UINT32_MAX;
volatile uint8_t x2966 = UINT8_MAX;
volatile uint8_t x2967 = 0U;
uint8_t x2980 = UINT8_MAX;
int32_t x3049 = INT32_MIN;
uint64_t x3050 = 657LLU;
uint64_t x3134 = 231308295464022LLU;
volatile int16_t x3169 = 3;
uint16_t x3170 = 1U;
static int64_t x3172 = INT64_MIN;
int64_t x3201 = -1LL;
int16_t x3203 = 45;
int16_t x3222 = INT16_MIN;
int8_t x3224 = INT8_MIN;
uint64_t x3409 = UINT64_MAX;
uint8_t x3411 = 15U;
volatile uint64_t t63 = 182134521LLU;
volatile uint32_t t65 = 18U;
int64_t x3558 = -548068707047LL;
uint8_t x3943 = 0U;
static volatile int16_t x3994 = -1;
int32_t t75 = 837888706;
int32_t x4009 = INT32_MIN;
int32_t x4037 = -1;
int16_t x4038 = -1;
int16_t x4175 = 1;
uint64_t t80 = 150938LLU;
static volatile int8_t x4244 = INT8_MIN;
volatile uint32_t t81 = 1287320604U;
static int8_t x4306 = -1;
static uint32_t x4359 = 28U;
static uint8_t x4451 = 6U;
static int8_t x4452 = -1;
static uint32_t x4541 = 14282206U;
static volatile int16_t x4542 = -1;
static volatile int8_t x4635 = 1;
static int16_t x4717 = INT16_MAX;
int32_t x4720 = INT32_MAX;
uint32_t x4763 = 3U;
static volatile uint64_t x4782 = 185350LLU;
static volatile int16_t x4784 = -1;
int32_t x4814 = -1;
volatile uint64_t x4843 = 0LLU;
static uint64_t x5026 = UINT64_MAX;
static uint64_t x5101 = 1027829221326409992LLU;
static int16_t x5169 = INT16_MIN;
int32_t x5170 = -1;
volatile int32_t x5218 = -5;


void f0(void) {
	static volatile uint8_t x53 = 1U;
	uint8_t x54 = UINT8_MAX;
	uint16_t x55 = 0U;
	int32_t x56 = -1;
	int32_t t0 = 7325;

	t0 = (((x53*x54)>>x55)*x56);

	if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x82 = 3139136U;
	uint8_t x83 = 0U;
	uint64_t x84 = 2935162667506LLU;

	t1 = (((x81*x82)>>x83)*x84);

	if (t1 != 16534332313053566848LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x133 = -1LL;
	static uint64_t x134 = 87859712639215026LLU;
	uint8_t x135 = 7U;
	static int32_t x136 = -35352;
	uint64_t t2 = 5725576241LLU;

	t2 = (((x133*x134)>>x135)*x136);

	if (t2 != 2360245797013128992LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x226 = 0U;
	int32_t x228 = INT32_MIN;
	static volatile uint32_t t3 = 242718U;

	t3 = (((x225*x226)>>x227)*x228);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x313 = 7U;
	uint32_t x314 = 4U;
	int32_t x315 = 6;
	volatile int8_t x316 = INT8_MIN;
	uint32_t t4 = 1763787218U;

	t4 = (((x313*x314)>>x315)*x316);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x338 = -160701;
	uint8_t x339 = 3U;
	int8_t x340 = INT8_MAX;
	volatile int64_t t5 = 104LL;

	t5 = (((x337*x338)>>x339)*x340);

	if (t5 != 2551049LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x477 = UINT64_MAX;
	uint64_t x479 = 18LLU;
	int8_t x480 = INT8_MIN;
	volatile uint64_t t6 = 6970497190LLU;

	t6 = (((x477*x478)>>x479)*x480);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x490 = 1169U;
	int16_t x492 = 10;
	volatile int32_t t7 = -2;

	t7 = (((x489*x490)>>x491)*x492);

	if (t7 != 1490470) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x521 = INT8_MAX;
	int8_t x523 = 1;
	static uint16_t x524 = 78U;
	volatile int32_t t8 = -1;

	t8 = (((x521*x522)>>x523)*x524);

	if (t8 != 162294912) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x741 = 1073357966437LL;
	uint8_t x742 = 1U;
	uint8_t x743 = 5U;
	uint16_t x744 = UINT16_MAX;

	t9 = (((x741*x742)>>x743)*x744);

	if (t9 != 2198203572816285LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x777 = 0;
	static uint64_t x778 = UINT64_MAX;
	int8_t x779 = 51;
	int32_t x780 = INT32_MIN;
	volatile uint64_t t10 = 6981915349630350LLU;

	t10 = (((x777*x778)>>x779)*x780);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x786 = UINT64_MAX;
	volatile int8_t x787 = 0;
	int16_t x788 = INT16_MIN;
	uint64_t t11 = 24753047LLU;

	t11 = (((x785*x786)>>x787)*x788);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x835 = 11U;
	static uint8_t x836 = UINT8_MAX;
	volatile uint32_t t12 = 63U;

	t12 = (((x833*x834)>>x835)*x836);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x917 = 27U;
	int8_t x918 = 0;
	volatile uint16_t x919 = 1U;
	volatile uint8_t x920 = 11U;
	volatile int32_t t13 = 253826015;

	t13 = (((x917*x918)>>x919)*x920);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1017 = 34LLU;
	static int16_t x1018 = INT16_MIN;
	uint16_t x1019 = 1U;
	static int64_t x1020 = -1LL;

	t14 = (((x1017*x1018)>>x1019)*x1020);

	if (t14 != 9223372036855332864LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1022 = INT8_MIN;
	volatile uint16_t x1023 = 0U;
	int16_t x1024 = INT16_MIN;
	int32_t t15 = 1987;

	t15 = (((x1021*x1022)>>x1023)*x1024);

	if (t15 != -4194304) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x1117 = 0LL;
	uint64_t x1118 = 326119039922177LLU;
	uint8_t x1119 = 9U;
	uint8_t x1120 = 6U;
	static volatile uint64_t t16 = 3137709646605772776LLU;

	t16 = (((x1117*x1118)>>x1119)*x1120);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1137 = -1;
	int16_t x1138 = 0;
	uint32_t x1139 = 2U;
	static int32_t x1140 = INT32_MIN;
	int32_t t17 = -204297148;

	t17 = (((x1137*x1138)>>x1139)*x1140);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1142 = 31U;
	static int16_t x1143 = 29;
	static volatile int8_t x1144 = INT8_MAX;
	uint32_t t18 = 22737U;

	t18 = (((x1141*x1142)>>x1143)*x1144);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1209 = 10464U;
	static uint16_t x1210 = 25U;
	static int64_t x1212 = -1LL;

	t19 = (((x1209*x1210)>>x1211)*x1212);

	if (t19 != -127LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1289 = UINT64_MAX;
	int32_t x1290 = INT32_MIN;
	uint8_t x1291 = 1U;
	int32_t x1292 = INT32_MIN;

	t20 = (((x1289*x1290)>>x1291)*x1292);

	if (t20 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1302 = 86902348U;
	static int8_t x1303 = 0;
	volatile int16_t x1304 = -1;

	t21 = (((x1301*x1302)>>x1303)*x1304);

	if (t21 != 2590231244U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x1353 = 831863192729459089LLU;
	uint8_t x1354 = 1U;
	uint32_t x1355 = 23U;
	int64_t x1356 = INT64_MIN;
	uint64_t t22 = 1LLU;

	t22 = (((x1353*x1354)>>x1355)*x1356);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1357 = 0U;
	int32_t x1358 = -1;
	uint8_t x1359 = 30U;
	int8_t x1360 = 0;
	volatile int32_t t23 = 185051;

	t23 = (((x1357*x1358)>>x1359)*x1360);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1369 = 4832U;
	uint16_t x1371 = 1U;
	uint32_t x1372 = UINT32_MAX;
	uint32_t t24 = 11731U;

	t24 = (((x1369*x1370)>>x1371)*x1372);

	if (t24 != 4294351216U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1381 = 0U;
	volatile int32_t t25 = 1;

	t25 = (((x1381*x1382)>>x1383)*x1384);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1649 = 0;
	int8_t x1650 = INT8_MIN;
	static int64_t x1652 = 361LL;
	int64_t t26 = -68743164106007LL;

	t26 = (((x1649*x1650)>>x1651)*x1652);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1673 = -1;
	volatile int16_t x1674 = -2925;
	uint64_t t27 = 7240781575695474LLU;

	t27 = (((x1673*x1674)>>x1675)*x1676);

	if (t27 != 18446744073709550154LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1681 = 2941LLU;
	static uint64_t x1682 = 312079064730137LLU;
	volatile uint16_t x1683 = 10U;
	volatile uint64_t t28 = 3499LLU;

	t28 = (((x1681*x1682)>>x1683)*x1684);

	if (t28 != 18332016007538135040LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1717 = 36;
	volatile uint64_t x1718 = 131374037LLU;
	volatile int16_t x1719 = 15;
	int16_t x1720 = -1;
	static uint64_t t29 = 471267293695973804LLU;

	t29 = (((x1717*x1718)>>x1719)*x1720);

	if (t29 != 18446744073709407285LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1825 = 2U;
	int64_t x1827 = 1LL;
	uint64_t t30 = 93819907LLU;

	t30 = (((x1825*x1826)>>x1827)*x1828);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1833 = 0;
	uint8_t x1835 = 7U;
	int64_t x1836 = -1LL;

	t31 = (((x1833*x1834)>>x1835)*x1836);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1934 = UINT32_MAX;
	static uint32_t x1935 = 19U;
	static uint64_t x1936 = 3078929458LLU;

	t32 = (((x1933*x1934)>>x1935)*x1936);

	if (t32 != 25219511190478LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2033 = -1;
	int8_t x2034 = -10;
	uint16_t x2035 = 2U;

	t33 = (((x2033*x2034)>>x2035)*x2036);

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2122 = UINT64_MAX;
	volatile int8_t x2123 = 3;
	static int64_t x2124 = INT64_MIN;
	static uint64_t t34 = 1398LLU;

	t34 = (((x2121*x2122)>>x2123)*x2124);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2141 = 26414747319LLU;
	uint16_t x2144 = 19U;
	volatile uint64_t t35 = 114633LLU;

	t35 = (((x2141*x2142)>>x2143)*x2144);

	if (t35 != 326417454665LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2177 = -278566932;
	int16_t x2179 = 4;
	int32_t x2180 = INT32_MAX;
	volatile int32_t t36 = -98;

	t36 = (((x2177*x2178)>>x2179)*x2180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2181 = 2137548260872501402LLU;
	int64_t x2182 = INT64_MIN;
	int8_t x2183 = 5;
	uint16_t x2184 = UINT16_MAX;
	volatile uint64_t t37 = 231LLU;

	t37 = (((x2181*x2182)>>x2183)*x2184);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2257 = INT16_MIN;
	uint8_t x2259 = 3U;

	t38 = (((x2257*x2258)>>x2259)*x2260);

	if (t38 != -524288) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x2282 = -1;
	volatile uint8_t x2283 = 4U;
	int16_t x2284 = -1;
	volatile uint32_t t39 = 31442U;

	t39 = (((x2281*x2282)>>x2283)*x2284);

	if (t39 != 4026531842U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2285 = -1LL;
	uint16_t x2287 = 28U;
	int64_t x2288 = INT64_MIN;
	volatile int64_t t40 = -17954669620028LL;

	t40 = (((x2285*x2286)>>x2287)*x2288);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2297 = -45;
	volatile int8_t x2298 = -2;
	int8_t x2299 = 0;
	int16_t x2300 = -1;
	int32_t t41 = -120;

	t41 = (((x2297*x2298)>>x2299)*x2300);

	if (t41 != -90) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2305 = 54U;
	int16_t x2306 = 3642;
	int32_t x2307 = 2;
	volatile int32_t t42 = 117;

	t42 = (((x2305*x2306)>>x2307)*x2308);

	if (t42 != 885006) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2329 = 5670757LLU;
	int32_t x2330 = -1;
	uint16_t x2332 = UINT16_MAX;

	t43 = (((x2329*x2330)>>x2331)*x2332);

	if (t43 != 16140901018041700589LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2474 = -1LL;
	uint16_t x2475 = 40U;
	uint16_t x2476 = 3790U;
	static volatile int64_t t44 = 7LL;

	t44 = (((x2473*x2474)>>x2475)*x2476);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2493 = 29U;
	uint64_t x2494 = 499247144405178LLU;
	volatile int32_t x2496 = INT32_MIN;
	uint64_t t45 = 4743LLU;

	t45 = (((x2493*x2494)>>x2495)*x2496);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2498 = UINT64_MAX;
	uint8_t x2499 = 1U;
	int64_t x2500 = INT64_MAX;
	static volatile uint64_t t46 = 556419LLU;

	t46 = (((x2497*x2498)>>x2499)*x2500);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2509 = -1;
	static int32_t x2510 = -1;
	int8_t x2511 = 4;
	volatile int32_t x2512 = -4475;
	volatile int32_t t47 = -468628;

	t47 = (((x2509*x2510)>>x2511)*x2512);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x2517 = 1;
	int16_t x2518 = 1;

	t48 = (((x2517*x2518)>>x2519)*x2520);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x2533 = 173839240U;
	uint16_t x2534 = 3U;
	uint8_t x2535 = 21U;
	uint64_t x2536 = 10323479523831LLU;

	t49 = (((x2533*x2534)>>x2535)*x2536);

	if (t49 != 2560222921910088LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2545 = 86U;
	volatile uint8_t x2546 = 64U;
	int16_t x2547 = 3;
	uint32_t x2548 = 3U;
	uint32_t t50 = 3373982U;

	t50 = (((x2545*x2546)>>x2547)*x2548);

	if (t50 != 2064U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2585 = -1LL;
	static int64_t x2586 = -3341484LL;
	uint8_t x2587 = 3U;
	int16_t x2588 = INT16_MAX;
	static int64_t t51 = 73448LL;

	t51 = (((x2585*x2586)>>x2587)*x2588);

	if (t51 != 13686284395LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2722 = UINT64_MAX;
	int16_t x2723 = 1;
	uint8_t x2724 = UINT8_MAX;
	uint64_t t52 = 25313LLU;

	t52 = (((x2721*x2722)>>x2723)*x2724);

	if (t52 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2838 = 23LLU;
	uint16_t x2839 = 0U;
	uint32_t x2840 = UINT32_MAX;
	static volatile uint64_t t53 = 1483538357LLU;

	t53 = (((x2837*x2838)>>x2839)*x2840);

	if (t53 != 18446742888298578196LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2898 = 37811U;
	uint8_t x2899 = 2U;
	int32_t x2900 = 1;
	uint64_t t54 = 1016344LLU;

	t54 = (((x2897*x2898)>>x2899)*x2900);

	if (t54 != 4013913244926LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x2958 = 734361052U;
	uint16_t x2959 = 4U;
	volatile int8_t x2960 = -1;
	volatile uint32_t t55 = 21893U;

	t55 = (((x2957*x2958)>>x2959)*x2960);

	if (t55 != 4072429406U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2968 = -16913;
	uint32_t t56 = 4133505U;

	t56 = (((x2965*x2966)>>x2967)*x2968);

	if (t56 != 4312815U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2977 = UINT8_MAX;
	volatile uint16_t x2978 = UINT16_MAX;
	static uint16_t x2979 = 3U;
	static int32_t t57 = -56802853;

	t57 = (((x2977*x2978)>>x2979)*x2980);

	if (t57 != 532676640) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3051 = 3U;
	uint16_t x3052 = UINT16_MAX;
	uint64_t t58 = 781451605421724LLU;

	t58 = (((x3049*x3050)>>x3051)*x3052);

	if (t58 != 16129343174626770944LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3133 = INT8_MAX;
	uint8_t x3135 = 25U;
	volatile int32_t x3136 = -1;
	volatile uint64_t t59 = 63293LLU;

	t59 = (((x3133*x3134)>>x3135)*x3136);

	if (t59 != 18446744072834074019LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x3171 = 2U;
	int64_t t60 = 19822485877867104LL;

	t60 = (((x3169*x3170)>>x3171)*x3172);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3202 = -1;
	static int8_t x3204 = -1;
	volatile int64_t t61 = -60273LL;

	t61 = (((x3201*x3202)>>x3203)*x3204);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3221 = UINT32_MAX;
	uint64_t x3223 = 0LLU;
	volatile uint32_t t62 = 12U;

	t62 = (((x3221*x3222)>>x3223)*x3224);

	if (t62 != 4290772992U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3410 = UINT32_MAX;
	uint16_t x3412 = 20371U;

	t63 = (((x3409*x3410)>>x3411)*x3412);

	if (t63 != 11467853498475479040LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3537 = 26;
	static uint64_t x3538 = 0LLU;
	static int8_t x3539 = 0;
	static volatile int8_t x3540 = -1;
	static volatile uint64_t t64 = 4386779329924592LLU;

	t64 = (((x3537*x3538)>>x3539)*x3540);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x3541 = 192;
	volatile uint8_t x3542 = 65U;
	static uint64_t x3543 = 6LLU;
	uint32_t x3544 = 1872U;

	t65 = (((x3541*x3542)>>x3543)*x3544);

	if (t65 != 365040U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3557 = -2;
	int32_t x3559 = 8;
	static int64_t x3560 = -1LL;
	volatile int64_t t66 = 3027LL;

	t66 = (((x3557*x3558)>>x3559)*x3560);

	if (t66 != -4281786773LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3613 = INT32_MIN;
	volatile uint32_t x3614 = 0U;
	uint8_t x3615 = 30U;
	volatile int32_t x3616 = 0;
	static uint32_t t67 = 31573U;

	t67 = (((x3613*x3614)>>x3615)*x3616);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3681 = 573239LL;
	static uint32_t x3682 = 1U;
	int8_t x3683 = 1;
	int8_t x3684 = 3;
	int64_t t68 = 3LL;

	t68 = (((x3681*x3682)>>x3683)*x3684);

	if (t68 != 859857LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3713 = UINT64_MAX;
	volatile int16_t x3714 = -473;
	volatile uint8_t x3715 = 3U;
	int8_t x3716 = INT8_MAX;
	static uint64_t t69 = 87LLU;

	t69 = (((x3713*x3714)>>x3715)*x3716);

	if (t69 != 7493LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3765 = 0;
	int16_t x3766 = -1;
	int64_t x3767 = 1LL;
	int8_t x3768 = INT8_MIN;
	int32_t t70 = 290751975;

	t70 = (((x3765*x3766)>>x3767)*x3768);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x3837 = UINT32_MAX;
	int8_t x3838 = INT8_MAX;
	volatile uint64_t x3839 = 7LLU;
	uint64_t x3840 = UINT64_MAX;
	volatile uint64_t t71 = 4287595683517044457LLU;

	t71 = (((x3837*x3838)>>x3839)*x3840);

	if (t71 != 18446744073675997185LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3893 = -5387764;
	int8_t x3894 = -1;
	static uint32_t x3895 = 14U;
	int16_t x3896 = INT16_MAX;
	static volatile int32_t t72 = -109984561;

	t72 = (((x3893*x3894)>>x3895)*x3896);

	if (t72 != 10747576) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x3913 = UINT64_MAX;
	static int64_t x3914 = 239877768175LL;
	static uint64_t x3915 = 1LLU;
	int64_t x3916 = INT64_MAX;
	uint64_t t73 = 141LLU;

	t73 = (((x3913*x3914)>>x3915)*x3916);

	if (t73 != 9223372156793659896LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3941 = UINT8_MAX;
	static uint8_t x3942 = UINT8_MAX;
	uint64_t x3944 = UINT64_MAX;
	uint64_t t74 = 15LLU;

	t74 = (((x3941*x3942)>>x3943)*x3944);

	if (t74 != 18446744073709486591LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x3993 = -12;
	int32_t x3995 = 7;
	volatile int32_t x3996 = INT32_MAX;

	t75 = (((x3993*x3994)>>x3995)*x3996);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x4010 = 418975712U;
	int16_t x4011 = 2;
	int32_t x4012 = INT32_MAX;
	uint32_t t76 = 42U;

	t76 = (((x4009*x4010)>>x4011)*x4012);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x4025 = 7;
	volatile int16_t x4026 = 1;
	volatile uint32_t x4027 = 23U;
	volatile int16_t x4028 = -1;
	int32_t t77 = -1059553207;

	t77 = (((x4025*x4026)>>x4027)*x4028);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4029 = UINT32_MAX;
	uint64_t x4030 = 1LLU;
	int16_t x4031 = 17;
	int32_t x4032 = INT32_MAX;
	static uint64_t t78 = 190947LLU;

	t78 = (((x4029*x4030)>>x4031)*x4032);

	if (t78 != 70366596661249LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4039 = 7U;
	int16_t x4040 = INT16_MAX;
	static int32_t t79 = -20;

	t79 = (((x4037*x4038)>>x4039)*x4040);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4173 = -2;
	uint64_t x4174 = UINT64_MAX;
	int32_t x4176 = INT32_MIN;

	t80 = (((x4173*x4174)>>x4175)*x4176);

	if (t80 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4241 = INT16_MAX;
	uint32_t x4242 = 54830014U;
	static uint8_t x4243 = 17U;

	t81 = (((x4241*x4242)>>x4243)*x4244);

	if (t81 != 4293679488U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4301 = 3086;
	volatile int16_t x4302 = 0;
	uint16_t x4303 = 24U;
	uint16_t x4304 = UINT16_MAX;
	volatile int32_t t82 = 31166802;

	t82 = (((x4301*x4302)>>x4303)*x4304);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x4305 = 799559972LLU;
	uint64_t x4307 = 4LLU;
	volatile uint32_t x4308 = 59U;
	volatile uint64_t t83 = 3LLU;

	t83 = (((x4305*x4306)>>x4307)*x4308);

	if (t83 != 12682136547726939295LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x4357 = -1;
	int8_t x4358 = INT8_MIN;
	int8_t x4360 = -3;
	volatile int32_t t84 = -1705779;

	t84 = (((x4357*x4358)>>x4359)*x4360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x4417 = INT8_MIN;
	volatile int16_t x4418 = -7;
	int8_t x4419 = 7;
	int64_t x4420 = -6656972259191LL;
	static volatile int64_t t85 = 9127060971239089LL;

	t85 = (((x4417*x4418)>>x4419)*x4420);

	if (t85 != -46598805814337LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4449 = UINT64_MAX;
	static int16_t x4450 = INT16_MAX;
	static volatile uint64_t t86 = 982499562431107197LLU;

	t86 = (((x4449*x4450)>>x4451)*x4452);

	if (t86 != 18158513697557840384LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4543 = 20U;
	static int32_t x4544 = INT32_MIN;
	volatile uint32_t t87 = 3281603U;

	t87 = (((x4541*x4542)>>x4543)*x4544);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4633 = 499089U;
	static uint64_t x4634 = UINT64_MAX;
	static int8_t x4636 = INT8_MIN;
	volatile uint64_t t88 = 33598336LLU;

	t88 = (((x4633*x4634)>>x4635)*x4636);

	if (t88 != 31941760LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4718 = UINT32_MAX;
	uint32_t x4719 = 12U;
	uint32_t t89 = 39U;

	t89 = (((x4717*x4718)>>x4719)*x4720);

	if (t89 != 4293918728U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4761 = 1801;
	uint64_t x4762 = UINT64_MAX;
	uint16_t x4764 = 757U;
	volatile uint64_t t90 = 136697030072155995LLU;

	t90 = (((x4761*x4762)>>x4763)*x4764);

	if (t90 != 11529215046068298678LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4781 = -47;
	static int8_t x4783 = 0;
	volatile uint64_t t91 = 29733780857LLU;

	t91 = (((x4781*x4782)>>x4783)*x4784);

	if (t91 != 8711450LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4793 = INT16_MIN;
	uint64_t x4794 = UINT64_MAX;
	int8_t x4795 = 27;
	int32_t x4796 = INT32_MIN;
	static uint64_t t92 = 1847222263465355LLU;

	t92 = (((x4793*x4794)>>x4795)*x4796);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4813 = 0;
	uint8_t x4815 = 1U;
	int8_t x4816 = 1;
	static int32_t t93 = -750495118;

	t93 = (((x4813*x4814)>>x4815)*x4816);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4841 = 1U;
	volatile uint16_t x4842 = 55U;
	int32_t x4844 = -1;
	volatile int32_t t94 = -1456724;

	t94 = (((x4841*x4842)>>x4843)*x4844);

	if (t94 != -55) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x5025 = INT32_MIN;
	int8_t x5027 = 0;
	volatile uint32_t x5028 = UINT32_MAX;
	uint64_t t95 = 26318074186109563LLU;

	t95 = (((x5025*x5026)>>x5027)*x5028);

	if (t95 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x5102 = 66104260522LLU;
	uint8_t x5103 = 0U;
	static uint16_t x5104 = 124U;
	volatile uint64_t t96 = 661LLU;

	t96 = (((x5101*x5102)>>x5103)*x5104);

	if (t96 != 10264450653701638848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x5171 = 0;
	int64_t x5172 = -230107204494LL;
	int64_t t97 = -1LL;

	t97 = (((x5169*x5170)>>x5171)*x5172);

	if (t97 != -7540152876859392LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5217 = INT16_MIN;
	static uint8_t x5219 = 5U;
	volatile int32_t x5220 = -32549;
	static volatile int32_t t98 = 0;

	t98 = (((x5217*x5218)>>x5219)*x5220);

	if (t98 != -166650880) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5285 = 9LL;
	uint32_t x5286 = 1U;
	static int16_t x5287 = 5;
	int8_t x5288 = INT8_MIN;
	volatile int64_t t99 = -14280576267385LL;

	t99 = (((x5285*x5286)>>x5287)*x5288);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

