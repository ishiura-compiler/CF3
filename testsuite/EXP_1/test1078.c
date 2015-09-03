#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x27 = INT32_MIN;
int8_t x28 = INT8_MAX;
uint64_t x191 = 965750LLU;
uint32_t x192 = 64139U;
uint64_t t4 = 349LLU;
volatile uint8_t x334 = 0U;
int32_t x335 = -523;
volatile int64_t t6 = 9245LL;
uint8_t x362 = 29U;
int32_t x465 = 5959319;
static volatile int8_t x540 = INT8_MAX;
static uint32_t x551 = 13921U;
static int64_t x683 = -5821037934053LL;
volatile uint16_t x684 = UINT16_MAX;
static uint32_t x794 = 7U;
int64_t x796 = INT64_MIN;
uint8_t x802 = 0U;
int64_t x860 = INT64_MIN;
uint8_t x882 = 0U;
static volatile uint8_t x969 = 1U;
uint32_t x971 = UINT32_MAX;
int32_t x1050 = 3;
volatile int16_t x1071 = INT16_MIN;
volatile int8_t x1072 = INT8_MIN;
static volatile int32_t t22 = -1169;
uint8_t x1093 = 2U;
int64_t t23 = 2LL;
static uint8_t x1106 = 2U;
int64_t x1107 = 30953884389019230LL;
int32_t x1108 = INT32_MIN;
uint8_t x1118 = 3U;
uint8_t x1119 = 2U;
uint32_t x1120 = UINT32_MAX;
uint64_t x1205 = UINT64_MAX;
static volatile int16_t x1301 = INT16_MAX;
volatile uint16_t x1303 = 167U;
int8_t x1328 = INT8_MIN;
volatile int32_t t30 = -8;
uint32_t x1353 = UINT32_MAX;
volatile int16_t x1355 = INT16_MAX;
static int64_t x1370 = 20LL;
int16_t x1372 = -2;
int8_t x1390 = 1;
int16_t x1505 = INT16_MAX;
volatile int32_t t37 = 1;
int16_t x1650 = 7;
int16_t x1742 = 0;
int64_t x1933 = 2950594875333615LL;
static volatile uint32_t x1991 = 53710U;
volatile int64_t t44 = -87009195918170LL;
static uint32_t t45 = 81U;
volatile uint64_t t46 = 613LLU;
int8_t x2421 = 4;
static uint16_t x2423 = 21U;
volatile int64_t x2485 = INT64_MAX;
static uint64_t x2509 = 2695090983LLU;
int8_t x2594 = 5;
volatile int32_t t54 = 12;
uint64_t x2606 = 15LLU;
uint64_t x2826 = 2LLU;
int32_t x2885 = INT32_MAX;
uint8_t x2906 = 3U;
uint16_t x2930 = 0U;
uint64_t t61 = 1806312705906LLU;
int8_t x2938 = 20;
uint16_t x2943 = 2401U;
int32_t x3149 = INT32_MAX;
int16_t x3151 = -1;
int64_t x3152 = 2046536109205826LL;
uint64_t x3221 = UINT64_MAX;
volatile uint64_t t66 = 31178624128108914LLU;
int64_t x3225 = INT64_MAX;
int16_t x3227 = -7;
uint32_t x3228 = UINT32_MAX;
uint8_t x3239 = 1U;
volatile int64_t x3240 = INT64_MIN;
static int8_t x3254 = 0;
static uint8_t x3256 = 56U;
uint32_t t69 = 131U;
static int64_t t70 = -12318236LL;
volatile int64_t x3352 = INT64_MIN;
static int8_t x3363 = INT8_MIN;
uint64_t t72 = 27873818232877LLU;
int8_t x3481 = 1;
int32_t x3484 = INT32_MIN;
static volatile uint8_t x3497 = 18U;
volatile int32_t x3972 = INT32_MAX;
volatile int8_t x4074 = 1;
int16_t x4083 = -12;
uint8_t x4106 = 4U;
int64_t x4107 = -11375LL;
static volatile int64_t x4363 = -1LL;
volatile int64_t t84 = -4116550006533LL;
static uint8_t x4548 = UINT8_MAX;
uint64_t x4630 = 14LLU;
volatile uint64_t x4632 = 2657631524982LLU;
uint64_t x4669 = 3249568LLU;
int32_t x4672 = -1;
static volatile uint64_t x4673 = 170383LLU;
int16_t x4751 = -824;
static volatile uint8_t x4814 = 20U;
volatile int8_t x4993 = 18;
volatile int32_t t95 = 45740059;
volatile uint16_t x5036 = UINT16_MAX;
static uint8_t x5163 = UINT8_MAX;
int32_t t99 = 45576;


void f0(void) {
	uint8_t x25 = 1U;
	int16_t x26 = 17;
	int32_t t0 = 3466;

	t0 = (((x25>>x26)%x27)|x28);

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x33 = UINT8_MAX;
	int32_t x34 = 2;
	int8_t x35 = INT8_MAX;
	int64_t x36 = -1LL;
	volatile int64_t t1 = -7795748310500406LL;

	t1 = (((x33>>x34)%x35)|x36);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x145 = 1;
	int8_t x146 = 0;
	int8_t x147 = INT8_MIN;
	volatile uint8_t x148 = 1U;
	volatile int32_t t2 = 6377;

	t2 = (((x145>>x146)%x147)|x148);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x173 = 755803U;
	uint64_t x174 = 2LLU;
	static int64_t x175 = INT64_MIN;
	volatile int8_t x176 = 1;
	static int64_t t3 = -10LL;

	t3 = (((x173>>x174)%x175)|x176);

	if (t3 != 188951LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x189 = 1U;
	uint8_t x190 = 5U;

	t4 = (((x189>>x190)%x191)|x192);

	if (t4 != 64139LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x273 = 0;
	int8_t x274 = 10;
	static int32_t x275 = -1789;
	volatile uint32_t x276 = UINT32_MAX;
	uint32_t t5 = UINT32_MAX;

	t5 = (((x273>>x274)%x275)|x276);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x333 = 6134U;
	int64_t x336 = INT64_MIN;

	t6 = (((x333>>x334)%x335)|x336);

	if (t6 != -9223372036854775427LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x361 = 23;
	static int64_t x363 = INT64_MIN;
	int16_t x364 = -292;
	volatile int64_t t7 = 13267826LL;

	t7 = (((x361>>x362)%x363)|x364);

	if (t7 != -292LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x429 = UINT16_MAX;
	static uint32_t x430 = 6U;
	static int64_t x431 = INT64_MIN;
	uint64_t x432 = 14LLU;
	uint64_t t8 = 31795463008LLU;

	t8 = (((x429>>x430)%x431)|x432);

	if (t8 != 1023LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x466 = 30U;
	int16_t x467 = 11;
	static int16_t x468 = 1;
	volatile int32_t t9 = 477173;

	t9 = (((x465>>x466)%x467)|x468);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x537 = INT8_MAX;
	uint8_t x538 = 0U;
	int8_t x539 = 51;
	volatile int32_t t10 = -104419411;

	t10 = (((x537>>x538)%x539)|x540);

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x545 = INT16_MAX;
	static int16_t x546 = 1;
	static int32_t x547 = 41696506;
	volatile uint64_t x548 = UINT64_MAX;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (((x545>>x546)%x547)|x548);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x549 = UINT32_MAX;
	volatile uint32_t x550 = 26U;
	int8_t x552 = INT8_MAX;
	static uint32_t t12 = 46700989U;

	t12 = (((x549>>x550)%x551)|x552);

	if (t12 != 127U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x661 = 1694U;
	int32_t x662 = 6;
	int32_t x663 = -1;
	uint8_t x664 = 1U;
	uint32_t t13 = 1U;

	t13 = (((x661>>x662)%x663)|x664);

	if (t13 != 27U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x681 = 1;
	int8_t x682 = 8;
	int64_t t14 = -1398963509LL;

	t14 = (((x681>>x682)%x683)|x684);

	if (t14 != 65535LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x793 = UINT32_MAX;
	uint64_t x795 = 119336841311143LLU;
	static volatile uint64_t t15 = 1LLU;

	t15 = (((x793>>x794)%x795)|x796);

	if (t15 != 9223372036888330239LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x801 = 131639591845715LLU;
	static int16_t x803 = INT16_MIN;
	int16_t x804 = 23;
	volatile uint64_t t16 = 1060783033LLU;

	t16 = (((x801>>x802)%x803)|x804);

	if (t16 != 131639591845719LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x857 = INT16_MAX;
	uint8_t x858 = 0U;
	int32_t x859 = -909;
	volatile int64_t t17 = 4809207670300LL;

	t17 = (((x857>>x858)%x859)|x860);

	if (t17 != -9223372036854775765LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x881 = UINT16_MAX;
	static int32_t x883 = INT32_MIN;
	static volatile int64_t x884 = -245821737LL;
	volatile int64_t t18 = -28370760237118391LL;

	t18 = (((x881>>x882)%x883)|x884);

	if (t18 != -245760001LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x933 = 26258160557LL;
	static uint32_t x934 = 4U;
	int32_t x935 = 7;
	static volatile int16_t x936 = -1;
	volatile int64_t t19 = -977526258255809LL;

	t19 = (((x933>>x934)%x935)|x936);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x970 = 1;
	volatile int64_t x972 = -60839693LL;
	int64_t t20 = -32762721828LL;

	t20 = (((x969>>x970)%x971)|x972);

	if (t20 != -60839693LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1049 = 2U;
	int8_t x1051 = INT8_MIN;
	static int16_t x1052 = INT16_MIN;
	int32_t t21 = 7;

	t21 = (((x1049>>x1050)%x1051)|x1052);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1069 = 0;
	uint8_t x1070 = 2U;

	t22 = (((x1069>>x1070)%x1071)|x1072);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1094 = 5;
	int64_t x1095 = 1437LL;
	int32_t x1096 = INT32_MIN;

	t23 = (((x1093>>x1094)%x1095)|x1096);

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1105 = INT32_MAX;
	static int64_t t24 = 50LL;

	t24 = (((x1105>>x1106)%x1107)|x1108);

	if (t24 != -1610612737LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1109 = 135289745U;
	uint32_t x1110 = 0U;
	int16_t x1111 = INT16_MIN;
	volatile uint32_t x1112 = 0U;
	uint32_t t25 = 7U;

	t25 = (((x1109>>x1110)%x1111)|x1112);

	if (t25 != 135289745U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1117 = 0;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = (((x1117>>x1118)%x1119)|x1120);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1165 = INT64_MAX;
	int64_t x1166 = 15LL;
	static int64_t x1167 = -1LL;
	static int16_t x1168 = INT16_MAX;
	volatile int64_t t27 = -3882852LL;

	t27 = (((x1165>>x1166)%x1167)|x1168);

	if (t27 != 32767LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1206 = 61U;
	uint64_t x1207 = UINT64_MAX;
	static volatile int16_t x1208 = INT16_MAX;
	volatile uint64_t t28 = 533391608928LLU;

	t28 = (((x1205>>x1206)%x1207)|x1208);

	if (t28 != 32767LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x1302 = 0U;
	int8_t x1304 = INT8_MIN;
	volatile int32_t t29 = 781274742;

	t29 = (((x1301>>x1302)%x1303)|x1304);

	if (t29 != -93) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1325 = UINT8_MAX;
	uint16_t x1326 = 29U;
	int32_t x1327 = 82752928;

	t30 = (((x1325>>x1326)%x1327)|x1328);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1354 = 7;
	int16_t x1356 = INT16_MIN;
	volatile uint32_t t31 = 37U;

	t31 = (((x1353>>x1354)%x1355)|x1356);

	if (t31 != 4294935551U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1357 = 122299466U;
	uint8_t x1358 = 2U;
	int8_t x1359 = -1;
	int8_t x1360 = -1;
	uint32_t t32 = UINT32_MAX;

	t32 = (((x1357>>x1358)%x1359)|x1360);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1369 = INT8_MAX;
	int8_t x1371 = INT8_MIN;
	volatile int32_t t33 = -2995;

	t33 = (((x1369>>x1370)%x1371)|x1372);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1381 = 327733661;
	static uint64_t x1382 = 1LLU;
	volatile int8_t x1383 = 1;
	int64_t x1384 = INT64_MAX;
	int64_t t34 = INT64_MAX;

	t34 = (((x1381>>x1382)%x1383)|x1384);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1389 = 105U;
	static int64_t x1391 = 11671LL;
	uint8_t x1392 = UINT8_MAX;
	static int64_t t35 = 219479459831534948LL;

	t35 = (((x1389>>x1390)%x1391)|x1392);

	if (t35 != 255LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1393 = 9334U;
	static int8_t x1394 = 13;
	uint8_t x1395 = UINT8_MAX;
	int32_t x1396 = -1;
	static volatile int32_t t36 = 4098122;

	t36 = (((x1393>>x1394)%x1395)|x1396);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1506 = 6U;
	static uint16_t x1507 = 820U;
	int16_t x1508 = INT16_MIN;

	t37 = (((x1505>>x1506)%x1507)|x1508);

	if (t37 != -32257) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1649 = UINT64_MAX;
	int8_t x1651 = -47;
	int64_t x1652 = -1LL;
	static uint64_t t38 = UINT64_MAX;

	t38 = (((x1649>>x1650)%x1651)|x1652);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1741 = 50789808LLU;
	uint16_t x1743 = UINT16_MAX;
	volatile int16_t x1744 = INT16_MIN;
	uint64_t t39 = 3125088984653801204LLU;

	t39 = (((x1741>>x1742)%x1743)|x1744);

	if (t39 != 18446744073709519031LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1885 = 52545381527LLU;
	int8_t x1886 = 0;
	int8_t x1887 = INT8_MIN;
	int16_t x1888 = -164;
	volatile uint64_t t40 = 12492LLU;

	t40 = (((x1885>>x1886)%x1887)|x1888);

	if (t40 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1905 = 246081013LL;
	volatile uint64_t x1906 = 12LLU;
	static int16_t x1907 = -1;
	static int64_t x1908 = INT64_MAX;
	static volatile int64_t t41 = INT64_MAX;

	t41 = (((x1905>>x1906)%x1907)|x1908);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1934 = 0;
	uint32_t x1935 = UINT32_MAX;
	int16_t x1936 = INT16_MIN;
	volatile int64_t t42 = -7915LL;

	t42 = (((x1933>>x1934)%x1935)|x1936);

	if (t42 != -26757LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1981 = 1;
	uint8_t x1982 = 23U;
	int16_t x1983 = 142;
	uint32_t x1984 = UINT32_MAX;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (((x1981>>x1982)%x1983)|x1984);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1989 = 483;
	int32_t x1990 = 1;
	int64_t x1992 = INT64_MIN;

	t44 = (((x1989>>x1990)%x1991)|x1992);

	if (t44 != -9223372036854775567LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2085 = UINT8_MAX;
	int8_t x2086 = 0;
	uint32_t x2087 = 826713U;
	int16_t x2088 = INT16_MIN;

	t45 = (((x2085>>x2086)%x2087)|x2088);

	if (t45 != 4294934783U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2121 = 20275726LLU;
	static volatile int8_t x2122 = 25;
	int16_t x2123 = INT16_MIN;
	int32_t x2124 = INT32_MAX;

	t46 = (((x2121>>x2122)%x2123)|x2124);

	if (t46 != 2147483647LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2133 = 1721360LLU;
	int8_t x2134 = 1;
	int16_t x2135 = -1;
	int16_t x2136 = INT16_MAX;
	volatile uint64_t t47 = 1626360736050492691LLU;

	t47 = (((x2133>>x2134)%x2135)|x2136);

	if (t47 != 884735LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2422 = 1;
	volatile int16_t x2424 = INT16_MIN;
	volatile int32_t t48 = 247;

	t48 = (((x2421>>x2422)%x2423)|x2424);

	if (t48 != -32766) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x2433 = 1U;
	int8_t x2434 = 1;
	int8_t x2435 = INT8_MIN;
	volatile int64_t x2436 = -81730160910469LL;
	int64_t t49 = -226625087642019675LL;

	t49 = (((x2433>>x2434)%x2435)|x2436);

	if (t49 != -81730160910469LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2449 = 0U;
	int16_t x2450 = 5;
	uint16_t x2451 = 2U;
	static uint32_t x2452 = UINT32_MAX;
	static volatile uint32_t t50 = UINT32_MAX;

	t50 = (((x2449>>x2450)%x2451)|x2452);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2473 = UINT8_MAX;
	uint8_t x2474 = 1U;
	volatile int16_t x2475 = -26;
	static volatile int8_t x2476 = INT8_MIN;
	volatile int32_t t51 = 4565;

	t51 = (((x2473>>x2474)%x2475)|x2476);

	if (t51 != -105) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2486 = 0;
	uint64_t x2487 = 83LLU;
	volatile uint8_t x2488 = 13U;
	volatile uint64_t t52 = 7886561747743039322LLU;

	t52 = (((x2485>>x2486)%x2487)|x2488);

	if (t52 != 29LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2510 = 13U;
	uint8_t x2511 = UINT8_MAX;
	volatile int8_t x2512 = INT8_MIN;
	uint64_t t53 = 156294955991390233LLU;

	t53 = (((x2509>>x2510)%x2511)|x2512);

	if (t53 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x2593 = INT32_MAX;
	uint16_t x2595 = UINT16_MAX;
	static int16_t x2596 = INT16_MAX;

	t54 = (((x2593>>x2594)%x2595)|x2596);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2605 = UINT16_MAX;
	uint64_t x2607 = 6484013LLU;
	int64_t x2608 = INT64_MIN;
	uint64_t t55 = 1927641199980LLU;

	t55 = (((x2605>>x2606)%x2607)|x2608);

	if (t55 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x2753 = INT64_MAX;
	uint8_t x2754 = 3U;
	uint32_t x2755 = UINT32_MAX;
	static uint16_t x2756 = 10080U;
	int64_t t56 = -49116LL;

	t56 = (((x2753>>x2754)%x2755)|x2756);

	if (t56 != 268435455LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2825 = INT16_MAX;
	int32_t x2827 = INT32_MAX;
	int32_t x2828 = INT32_MIN;
	int32_t t57 = -571;

	t57 = (((x2825>>x2826)%x2827)|x2828);

	if (t57 != -2147475457) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x2853 = UINT32_MAX;
	uint32_t x2854 = 1U;
	uint64_t x2855 = UINT64_MAX;
	int32_t x2856 = 1;
	static uint64_t t58 = 48947700649LLU;

	t58 = (((x2853>>x2854)%x2855)|x2856);

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2886 = 12LLU;
	int16_t x2887 = 1;
	uint32_t x2888 = 971624U;
	static uint32_t t59 = 2128991U;

	t59 = (((x2885>>x2886)%x2887)|x2888);

	if (t59 != 971624U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x2905 = UINT8_MAX;
	uint16_t x2907 = 202U;
	uint32_t x2908 = 18561U;
	static volatile uint32_t t60 = 409150U;

	t60 = (((x2905>>x2906)%x2907)|x2908);

	if (t60 != 18591U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x2929 = INT32_MAX;
	uint64_t x2931 = 13043829144919LLU;
	uint16_t x2932 = 16U;

	t61 = (((x2929>>x2930)%x2931)|x2932);

	if (t61 != 2147483647LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2937 = 1LL;
	static volatile uint64_t x2939 = UINT64_MAX;
	uint16_t x2940 = UINT16_MAX;
	volatile uint64_t t62 = 9580522LLU;

	t62 = (((x2937>>x2938)%x2939)|x2940);

	if (t62 != 65535LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2941 = 0;
	int8_t x2942 = 3;
	int16_t x2944 = 7608;
	int32_t t63 = 59737;

	t63 = (((x2941>>x2942)%x2943)|x2944);

	if (t63 != 7608) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3097 = 377173286U;
	volatile int32_t x3098 = 2;
	uint32_t x3099 = 849U;
	uint64_t x3100 = 1228LLU;
	volatile uint64_t t64 = 4385LLU;

	t64 = (((x3097>>x3098)%x3099)|x3100);

	if (t64 != 1998LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3150 = 3;
	int64_t t65 = -49642800552266100LL;

	t65 = (((x3149>>x3150)%x3151)|x3152);

	if (t65 != 2046536109205826LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x3222 = 17;
	int16_t x3223 = -126;
	volatile int8_t x3224 = INT8_MAX;

	t66 = (((x3221>>x3222)%x3223)|x3224);

	if (t66 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3226 = 6U;
	volatile int64_t t67 = 301330914126482839LL;

	t67 = (((x3225>>x3226)%x3227)|x3228);

	if (t67 != 4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3237 = 38U;
	uint8_t x3238 = 0U;
	int64_t t68 = INT64_MIN;

	t68 = (((x3237>>x3238)%x3239)|x3240);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x3253 = UINT32_MAX;
	static int8_t x3255 = -3;

	t69 = (((x3253>>x3254)%x3255)|x3256);

	if (t69 != 58U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3325 = 1;
	uint8_t x3326 = 4U;
	int32_t x3327 = -1015671971;
	static volatile int64_t x3328 = -17445932275LL;

	t70 = (((x3325>>x3326)%x3327)|x3328);

	if (t70 != -17445932275LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x3349 = UINT16_MAX;
	volatile uint16_t x3350 = 1U;
	int8_t x3351 = -1;
	volatile int64_t t71 = INT64_MIN;

	t71 = (((x3349>>x3350)%x3351)|x3352);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3361 = UINT16_MAX;
	static int8_t x3362 = 6;
	uint64_t x3364 = 156891LLU;

	t72 = (((x3361>>x3362)%x3363)|x3364);

	if (t72 != 156927LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3482 = 7U;
	int16_t x3483 = -1;
	int32_t t73 = INT32_MIN;

	t73 = (((x3481>>x3482)%x3483)|x3484);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3498 = 4U;
	int32_t x3499 = INT32_MIN;
	int64_t x3500 = INT64_MIN;
	static volatile int64_t t74 = 203LL;

	t74 = (((x3497>>x3498)%x3499)|x3500);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3789 = 7623;
	static int8_t x3790 = 0;
	int32_t x3791 = INT32_MIN;
	static uint32_t x3792 = 1U;
	uint32_t t75 = 201629935U;

	t75 = (((x3789>>x3790)%x3791)|x3792);

	if (t75 != 7623U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3889 = 37252984U;
	static uint8_t x3890 = 30U;
	uint16_t x3891 = 61U;
	int16_t x3892 = -5;
	volatile uint32_t t76 = 308237U;

	t76 = (((x3889>>x3890)%x3891)|x3892);

	if (t76 != 4294967291U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3969 = UINT8_MAX;
	uint32_t x3970 = 5U;
	uint8_t x3971 = UINT8_MAX;
	int32_t t77 = INT32_MAX;

	t77 = (((x3969>>x3970)%x3971)|x3972);

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3997 = 120;
	int8_t x3998 = 0;
	int64_t x3999 = INT64_MIN;
	uint64_t x4000 = 745650122343268LLU;
	uint64_t t78 = 4801290391874556LLU;

	t78 = (((x3997>>x3998)%x3999)|x4000);

	if (t78 != 745650122343292LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4073 = UINT16_MAX;
	int32_t x4075 = INT32_MIN;
	int64_t x4076 = 12649356LL;
	volatile int64_t t79 = 80174627517462LL;

	t79 = (((x4073>>x4074)%x4075)|x4076);

	if (t79 != 12681215LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x4081 = 186LLU;
	uint8_t x4082 = 18U;
	uint16_t x4084 = 42U;
	static uint64_t t80 = 6718380244146LLU;

	t80 = (((x4081>>x4082)%x4083)|x4084);

	if (t80 != 42LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4105 = INT8_MAX;
	static volatile int8_t x4108 = 58;
	int64_t t81 = -234358583LL;

	t81 = (((x4105>>x4106)%x4107)|x4108);

	if (t81 != 63LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4205 = 0;
	uint64_t x4206 = 0LLU;
	uint64_t x4207 = UINT64_MAX;
	int8_t x4208 = -1;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (((x4205>>x4206)%x4207)|x4208);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4289 = 29U;
	static uint16_t x4290 = 11U;
	volatile uint32_t x4291 = 11924U;
	volatile int16_t x4292 = -72;
	static volatile uint32_t t83 = 111U;

	t83 = (((x4289>>x4290)%x4291)|x4292);

	if (t83 != 4294967224U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4361 = 13;
	uint8_t x4362 = 7U;
	volatile int8_t x4364 = INT8_MIN;

	t84 = (((x4361>>x4362)%x4363)|x4364);

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4545 = 692351U;
	uint8_t x4546 = 7U;
	int8_t x4547 = INT8_MIN;
	volatile uint32_t t85 = 23423U;

	t85 = (((x4545>>x4546)%x4547)|x4548);

	if (t85 != 5631U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x4549 = UINT32_MAX;
	int8_t x4550 = 1;
	uint32_t x4551 = UINT32_MAX;
	int32_t x4552 = -1;
	uint32_t t86 = UINT32_MAX;

	t86 = (((x4549>>x4550)%x4551)|x4552);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4569 = UINT16_MAX;
	int16_t x4570 = 0;
	int16_t x4571 = INT16_MAX;
	volatile int32_t x4572 = -414288;
	volatile int32_t t87 = -180;

	t87 = (((x4569>>x4570)%x4571)|x4572);

	if (t87 != -414287) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4629 = 3;
	int16_t x4631 = -1;
	volatile uint64_t t88 = 2966LLU;

	t88 = (((x4629>>x4630)%x4631)|x4632);

	if (t88 != 2657631524982LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4653 = 88301U;
	int32_t x4654 = 5;
	int16_t x4655 = INT16_MAX;
	int8_t x4656 = INT8_MIN;
	static uint32_t t89 = 39U;

	t89 = (((x4653>>x4654)%x4655)|x4656);

	if (t89 != 4294967239U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x4670 = 62LL;
	uint64_t x4671 = 98LLU;
	static volatile uint64_t t90 = UINT64_MAX;

	t90 = (((x4669>>x4670)%x4671)|x4672);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x4674 = 4U;
	volatile uint64_t x4675 = UINT64_MAX;
	int16_t x4676 = -59;
	uint64_t t91 = 17652447347335854LLU;

	t91 = (((x4673>>x4674)%x4675)|x4676);

	if (t91 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4681 = 0;
	uint16_t x4682 = 21U;
	static volatile int8_t x4683 = -1;
	int64_t x4684 = INT64_MIN;
	static int64_t t92 = INT64_MIN;

	t92 = (((x4681>>x4682)%x4683)|x4684);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4749 = 31U;
	static volatile uint8_t x4750 = 9U;
	uint16_t x4752 = 6626U;
	int32_t t93 = -901;

	t93 = (((x4749>>x4750)%x4751)|x4752);

	if (t93 != 6626) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4813 = 391U;
	static uint64_t x4815 = UINT64_MAX;
	int8_t x4816 = 1;
	uint64_t t94 = 2144376982LLU;

	t94 = (((x4813>>x4814)%x4815)|x4816);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4994 = 1U;
	int8_t x4995 = 7;
	volatile int8_t x4996 = -1;

	t95 = (((x4993>>x4994)%x4995)|x4996);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x5033 = 56757U;
	static volatile uint64_t x5034 = 0LLU;
	static int64_t x5035 = INT64_MAX;
	int64_t t96 = 330707444673845LL;

	t96 = (((x5033>>x5034)%x5035)|x5036);

	if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5113 = INT32_MAX;
	int8_t x5114 = 8;
	uint32_t x5115 = 14U;
	static int32_t x5116 = -1;
	static uint32_t t97 = UINT32_MAX;

	t97 = (((x5113>>x5114)%x5115)|x5116);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5161 = 0;
	uint16_t x5162 = 1U;
	uint16_t x5164 = 5197U;
	volatile int32_t t98 = -36635180;

	t98 = (((x5161>>x5162)%x5163)|x5164);

	if (t98 != 5197) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5197 = 0U;
	int64_t x5198 = 1LL;
	int32_t x5199 = INT32_MIN;
	static uint16_t x5200 = 3U;

	t99 = (((x5197>>x5198)%x5199)|x5200);

	if (t99 != 3) { NG(); } else { ; }
	
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

