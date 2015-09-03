#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x30 = UINT32_MAX;
int16_t x31 = INT16_MAX;
static volatile int8_t x71 = INT8_MAX;
int16_t x83 = INT16_MAX;
uint8_t x84 = 0U;
int16_t x224 = 2;
static uint64_t t5 = 3508097162LLU;
volatile int32_t x450 = 3930;
volatile uint32_t x494 = 114457158U;
static uint32_t x510 = 116U;
int16_t x511 = -1;
volatile uint32_t t9 = 22U;
uint8_t x575 = 22U;
int16_t x579 = -1;
static volatile int64_t t11 = -22653LL;
int8_t x669 = 0;
volatile uint64_t t12 = 687338510LLU;
int32_t x788 = 27;
int16_t x791 = INT16_MIN;
uint32_t t14 = 5U;
int64_t t15 = -85823711154856416LL;
volatile uint64_t t16 = 694878903LLU;
uint64_t x1009 = 511630LLU;
uint32_t x1067 = 319659409U;
uint64_t x1102 = 1848904677970775295LLU;
int32_t x1114 = INT32_MAX;
int32_t x1171 = INT32_MAX;
int64_t x1217 = INT64_MIN;
volatile int64_t t23 = 5LL;
int64_t x1227 = 2518LL;
int64_t x1269 = INT64_MAX;
uint64_t x1291 = 3090300133054LLU;
volatile uint64_t t26 = 419547469222553LLU;
int16_t x1352 = 1;
int16_t x1439 = INT16_MAX;
int64_t t30 = 2301372784488345768LL;
int64_t x1475 = INT64_MIN;
volatile int64_t t31 = -1830492840LL;
int8_t x1678 = INT8_MIN;
int64_t t33 = 4LL;
int8_t x1836 = 1;
volatile uint64_t x1889 = UINT64_MAX;
volatile int8_t x1890 = -5;
volatile uint8_t x1892 = 0U;
volatile int64_t x1966 = INT64_MIN;
uint64_t x2034 = 987LLU;
int8_t x2125 = INT8_MAX;
static int64_t x2126 = INT64_MIN;
uint64_t x2128 = 3LLU;
static volatile int64_t t43 = -1605455484840412LL;
uint32_t x2182 = 35097385U;
int8_t x2207 = INT8_MAX;
static uint64_t x2222 = 39LLU;
int8_t x2267 = -1;
int64_t x2415 = 8943LL;
uint8_t x2452 = 15U;
static uint8_t x2466 = 3U;
int32_t x2566 = 0;
uint64_t x2585 = 889733359839116227LLU;
uint16_t x2586 = 22394U;
volatile int64_t t58 = -447274701LL;
volatile uint64_t t59 = 1458468700LLU;
static uint64_t t60 = 10612LLU;
volatile int8_t x2745 = INT8_MIN;
uint16_t x2816 = 9U;
uint64_t x2901 = UINT64_MAX;
uint8_t x2902 = UINT8_MAX;
int8_t x2904 = 3;
uint16_t x2916 = 24U;
volatile int64_t t66 = -492725808915LL;
uint64_t t68 = 21821778LLU;
volatile int32_t x2995 = INT32_MIN;
volatile int64_t t69 = -14959044304LL;
int32_t x3055 = INT32_MIN;
int8_t x3123 = -1;
int64_t x3124 = 29LL;
uint8_t x3370 = 1U;
int16_t x3444 = 30;
uint16_t x3587 = 43U;
int32_t x3647 = INT32_MAX;
int64_t x3907 = INT64_MIN;
uint8_t x3908 = 56U;
uint32_t x4083 = 249361998U;
static volatile int64_t t88 = 762857950996906LL;
volatile int64_t x4113 = INT64_MAX;
uint64_t t90 = 504LLU;
uint64_t x4701 = UINT64_MAX;
uint64_t t93 = 85LLU;
int32_t x4729 = 21;
static uint16_t x4731 = UINT16_MAX;
static int8_t x4743 = INT8_MIN;
int8_t x4744 = 3;
int64_t x4799 = -1LL;
uint8_t x4933 = 3U;


void f0(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x32 = 6LLU;
	static uint32_t t0 = 135U;

	t0 = ((x29%(x30^x31))>>x32);

	if (t0 != 510U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x69 = 4U;
	int16_t x70 = INT16_MAX;
	static int16_t x72 = 5;
	volatile int32_t t1 = 82912;

	t1 = ((x69%(x70^x71))>>x72);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x81 = INT16_MIN;
	volatile uint64_t x82 = 7525741123LLU;
	static volatile uint64_t t2 = 54705352LLU;

	t2 = ((x81%(x82^x83))>>x84);

	if (t2 != 1460956532LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MAX;
	uint64_t x191 = 2937863887LLU;
	uint16_t x192 = 4U;
	uint64_t t3 = 66336578742033051LLU;

	t3 = ((x189%(x190^x191))>>x192);

	if (t3 != 200989450LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x209 = 1;
	uint8_t x210 = 1U;
	int16_t x211 = INT16_MAX;
	uint8_t x212 = 1U;
	int32_t t4 = 300931;

	t4 = ((x209%(x210^x211))>>x212);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x221 = -1103;
	uint64_t x222 = 2803241940768LLU;
	volatile int32_t x223 = 59608092;

	t5 = ((x221%(x222^x223))>>x224);

	if (t5 != 246681308553LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x249 = 4570U;
	static int16_t x250 = INT16_MIN;
	int8_t x251 = 3;
	uint16_t x252 = 0U;
	volatile int32_t t6 = -1;

	t6 = ((x249%(x250^x251))>>x252);

	if (t6 != 4570) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x449 = UINT8_MAX;
	uint32_t x451 = 56U;
	int8_t x452 = 1;
	uint32_t t7 = 5200707U;

	t7 = ((x449%(x450^x451))>>x452);

	if (t7 != 127U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x493 = -1;
	uint64_t x495 = UINT64_MAX;
	uint16_t x496 = 1U;
	uint64_t t8 = 56532LLU;

	t8 = ((x493%(x494^x495))>>x496);

	if (t8 != 57228579LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x509 = INT32_MIN;
	volatile uint8_t x512 = 1U;

	t9 = ((x509%(x510^x511))>>x512);

	if (t9 != 1073741824U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x573 = INT16_MIN;
	uint64_t x574 = 328720915661LLU;
	uint8_t x576 = 17U;
	static volatile uint64_t t10 = 700058019838LLU;

	t10 = ((x573%(x574^x575))>>x576);

	if (t10 != 1657562LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x577 = 4340654696731110255LL;
	volatile int64_t x578 = INT64_MAX;
	static uint32_t x580 = 5U;

	t11 = ((x577%(x578^x579))>>x580);

	if (t11 != 135645459272847195LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x670 = INT16_MAX;
	uint64_t x671 = 3702816372476012373LLU;
	static int8_t x672 = 0;

	t12 = ((x669%(x670^x671))>>x672);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x785 = UINT8_MAX;
	int16_t x786 = INT16_MIN;
	volatile int64_t x787 = -207152382236203LL;
	static volatile int64_t t13 = 2214678325253LL;

	t13 = ((x785%(x786^x787))>>x788);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x789 = 2054010U;
	volatile uint8_t x790 = 51U;
	uint8_t x792 = 3U;

	t14 = ((x789%(x790^x791))>>x792);

	if (t14 != 256751U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x821 = UINT8_MAX;
	int64_t x822 = INT64_MIN;
	uint8_t x823 = 0U;
	static uint64_t x824 = 0LLU;

	t15 = ((x821%(x822^x823))>>x824);

	if (t15 != 255LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x857 = -9851;
	static int8_t x858 = INT8_MAX;
	static uint64_t x859 = 6811357491508LLU;
	int8_t x860 = 1;

	t16 = ((x857%(x858^x859))>>x860);

	if (t16 != 470174033521LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x949 = 9U;
	static int64_t x950 = -1LL;
	static uint8_t x951 = 22U;
	uint16_t x952 = 33U;
	int64_t t17 = 129957924550980542LL;

	t17 = ((x949%(x950^x951))>>x952);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1010 = 29U;
	static int8_t x1011 = INT8_MIN;
	static uint8_t x1012 = 0U;
	volatile uint64_t t18 = 1136053025487LLU;

	t18 = ((x1009%(x1010^x1011))>>x1012);

	if (t18 != 511630LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1065 = -5411201LL;
	uint64_t x1066 = 2916LLU;
	uint64_t x1068 = 12LLU;
	volatile uint64_t t19 = 467309059026LLU;

	t19 = ((x1065%(x1066^x1067))>>x1068);

	if (t19 != 38436LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1101 = INT64_MIN;
	static int32_t x1103 = INT32_MIN;
	uint32_t x1104 = 12U;
	uint64_t t20 = 1103714123935LLU;

	t20 = ((x1101%(x1102^x1103))>>x1104);

	if (t20 != 2251799813685248LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1113 = UINT64_MAX;
	int8_t x1115 = -8;
	uint16_t x1116 = 2U;
	uint64_t t21 = 525961000359474LLU;

	t21 = ((x1113%(x1114^x1115))>>x1116);

	if (t21 != 536870910LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1169 = INT32_MIN;
	uint64_t x1170 = 2LLU;
	uint8_t x1172 = 1U;
	uint64_t t22 = 23416403704038LLU;

	t22 = ((x1169%(x1170^x1171))>>x1172);

	if (t22 != 16LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1218 = UINT16_MAX;
	int8_t x1219 = -1;
	int16_t x1220 = 13;

	t23 = ((x1217%(x1218^x1219))>>x1220);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1225 = UINT16_MAX;
	uint8_t x1226 = 0U;
	int16_t x1228 = 0;
	int64_t t24 = -48524LL;

	t24 = ((x1225%(x1226^x1227))>>x1228);

	if (t24 != 67LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1270 = INT32_MIN;
	int16_t x1271 = -1;
	int16_t x1272 = 1;
	volatile int64_t t25 = 29441123861LL;

	t25 = ((x1269%(x1270^x1271))>>x1272);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1289 = 24U;
	static int32_t x1290 = INT32_MIN;
	static int8_t x1292 = 7;

	t26 = ((x1289%(x1290^x1291))>>x1292);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1349 = 1U;
	int8_t x1350 = INT8_MAX;
	uint64_t x1351 = 2623LLU;
	uint64_t t27 = 2966LLU;

	t27 = ((x1349%(x1350^x1351))>>x1352);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1353 = 555960075699838381LLU;
	int64_t x1354 = INT64_MIN;
	static int8_t x1355 = INT8_MAX;
	int32_t x1356 = 2;
	volatile uint64_t t28 = 2LLU;

	t28 = ((x1353%(x1354^x1355))>>x1356);

	if (t28 != 138990018924959595LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1389 = INT16_MIN;
	int64_t x1390 = -1LL;
	static volatile uint8_t x1391 = UINT8_MAX;
	uint16_t x1392 = 1U;
	static volatile int64_t t29 = 3LL;

	t29 = ((x1389%(x1390^x1391))>>x1392);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1437 = INT64_MAX;
	static volatile int8_t x1438 = -5;
	uint32_t x1440 = 3U;

	t30 = ((x1437%(x1438^x1439))>>x1440);

	if (t30 != 255LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1473 = UINT32_MAX;
	volatile int8_t x1474 = 0;
	int32_t x1476 = 11;

	t31 = ((x1473%(x1474^x1475))>>x1476);

	if (t31 != 2097151LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1677 = INT32_MIN;
	uint32_t x1679 = 44U;
	uint8_t x1680 = 30U;
	volatile uint32_t t32 = 2050300U;

	t32 = ((x1677%(x1678^x1679))>>x1680);

	if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1681 = INT64_MIN;
	volatile int8_t x1682 = -1;
	volatile int8_t x1683 = INT8_MAX;
	uint16_t x1684 = 4U;

	t33 = ((x1681%(x1682^x1683))>>x1684);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1689 = 464695119772138LLU;
	uint16_t x1690 = 5675U;
	static int8_t x1691 = INT8_MIN;
	static int16_t x1692 = 1;
	uint64_t t34 = 502LLU;

	t34 = ((x1689%(x1690^x1691))>>x1692);

	if (t34 != 232347559886069LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1721 = 7;
	static uint64_t x1722 = UINT64_MAX;
	volatile uint32_t x1723 = UINT32_MAX;
	uint16_t x1724 = 37U;
	static volatile uint64_t t35 = 389184499LLU;

	t35 = ((x1721%(x1722^x1723))>>x1724);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1733 = 23U;
	uint32_t x1734 = 2428U;
	uint16_t x1735 = 1U;
	volatile uint32_t x1736 = 2U;
	uint32_t t36 = 362754U;

	t36 = ((x1733%(x1734^x1735))>>x1736);

	if (t36 != 5U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1833 = INT8_MAX;
	volatile int16_t x1834 = -4123;
	uint32_t x1835 = 5009879U;
	static volatile uint32_t t37 = 1761U;

	t37 = ((x1833%(x1834^x1835))>>x1836);

	if (t37 != 63U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x1849 = 76617582U;
	volatile int16_t x1850 = INT16_MIN;
	volatile int16_t x1851 = -6206;
	static uint8_t x1852 = 3U;
	volatile uint32_t t38 = 1U;

	t38 = ((x1849%(x1850^x1851))>>x1852);

	if (t38 != 1596U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x1891 = UINT64_MAX;
	uint64_t t39 = 27953933415LLU;

	t39 = ((x1889%(x1890^x1891))>>x1892);

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1965 = 6416U;
	int32_t x1967 = INT32_MAX;
	uint8_t x1968 = 2U;
	static volatile int64_t t40 = -1115163749529293LL;

	t40 = ((x1965%(x1966^x1967))>>x1968);

	if (t40 != 1604LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2033 = 2U;
	int8_t x2035 = -21;
	volatile int16_t x2036 = 0;
	uint64_t t41 = 4LLU;

	t41 = ((x2033%(x2034^x2035))>>x2036);

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2069 = 5210000783LLU;
	uint32_t x2070 = 3761346U;
	uint16_t x2071 = UINT16_MAX;
	static uint64_t x2072 = 55LLU;
	volatile uint64_t t42 = 166LLU;

	t42 = ((x2069%(x2070^x2071))>>x2072);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2127 = INT16_MIN;

	t43 = ((x2125%(x2126^x2127))>>x2128);

	if (t43 != 15LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2181 = 7234U;
	int32_t x2183 = INT32_MAX;
	uint8_t x2184 = 14U;
	volatile uint32_t t44 = 35482U;

	t44 = ((x2181%(x2182^x2183))>>x2184);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2205 = INT8_MAX;
	static uint64_t x2206 = UINT64_MAX;
	volatile uint8_t x2208 = 4U;
	uint64_t t45 = 85518733LLU;

	t45 = ((x2205%(x2206^x2207))>>x2208);

	if (t45 != 7LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2213 = 0;
	int64_t x2214 = 9263100939156LL;
	uint16_t x2215 = 72U;
	int8_t x2216 = 7;
	volatile int64_t t46 = -611282LL;

	t46 = ((x2213%(x2214^x2215))>>x2216);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2221 = 6U;
	volatile uint32_t x2223 = 160680425U;
	uint32_t x2224 = 34U;
	uint64_t t47 = 53053LLU;

	t47 = ((x2221%(x2222^x2223))>>x2224);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2249 = 122U;
	int32_t x2250 = INT32_MIN;
	int64_t x2251 = INT64_MIN;
	uint32_t x2252 = 60U;
	static int64_t t48 = -1617400579254350LL;

	t48 = ((x2249%(x2250^x2251))>>x2252);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x2265 = 6125478U;
	int32_t x2266 = INT32_MAX;
	uint8_t x2268 = 8U;
	uint32_t t49 = 640865445U;

	t49 = ((x2265%(x2266^x2267))>>x2268);

	if (t49 != 23927U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2381 = INT8_MAX;
	static volatile uint8_t x2382 = 25U;
	static int64_t x2383 = -8221625651402338LL;
	volatile int8_t x2384 = 0;
	int64_t t50 = -3733620467LL;

	t50 = ((x2381%(x2382^x2383))>>x2384);

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2401 = -7;
	int64_t x2402 = INT64_MIN;
	uint64_t x2403 = UINT64_MAX;
	volatile uint16_t x2404 = 9U;
	uint64_t t51 = 40LLU;

	t51 = ((x2401%(x2402^x2403))>>x2404);

	if (t51 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2413 = UINT16_MAX;
	volatile int8_t x2414 = INT8_MIN;
	static uint8_t x2416 = 1U;
	volatile int64_t t52 = -22480604668893LL;

	t52 = ((x2413%(x2414^x2415))>>x2416);

	if (t52 != 1796LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2449 = -1;
	volatile uint64_t x2450 = UINT64_MAX;
	static volatile uint64_t x2451 = 483518LLU;
	uint64_t t53 = 704491100LLU;

	t53 = ((x2449%(x2450^x2451))>>x2452);

	if (t53 != 14LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x2461 = 1;
	static volatile int32_t x2462 = INT32_MAX;
	uint64_t x2463 = 2817211LLU;
	volatile int16_t x2464 = 0;
	uint64_t t54 = 315698765388LLU;

	t54 = ((x2461%(x2462^x2463))>>x2464);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2465 = UINT16_MAX;
	int8_t x2467 = -1;
	uint16_t x2468 = 7U;
	volatile int32_t t55 = -228455;

	t55 = ((x2465%(x2466^x2467))>>x2468);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2565 = 24U;
	uint16_t x2567 = 15569U;
	int8_t x2568 = 0;
	static int32_t t56 = -9680733;

	t56 = ((x2565%(x2566^x2567))>>x2568);

	if (t56 != 24) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2587 = INT8_MIN;
	static volatile uint8_t x2588 = 6U;
	volatile uint64_t t57 = 62377351LLU;

	t57 = ((x2585%(x2586^x2587))>>x2588);

	if (t57 != 13902083747486191LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2605 = 11;
	int64_t x2606 = 493322607LL;
	int64_t x2607 = -1LL;
	int16_t x2608 = 0;

	t58 = ((x2605%(x2606^x2607))>>x2608);

	if (t58 != 11LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x2653 = INT8_MIN;
	int32_t x2654 = INT32_MIN;
	uint64_t x2655 = 3846270917924942182LLU;
	static volatile int8_t x2656 = 0;

	t59 = ((x2653%(x2654^x2655))>>x2656);

	if (t59 != 3846270915883765274LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x2673 = INT32_MIN;
	uint32_t x2674 = UINT32_MAX;
	uint64_t x2675 = 68247105968348LLU;
	static volatile int8_t x2676 = 7;

	t60 = ((x2673%(x2674^x2675))>>x2676);

	if (t60 != 8325244874LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2746 = -15;
	uint64_t x2747 = 17415966121879247LLU;
	int16_t x2748 = 14;
	static volatile uint64_t t61 = 93528965LLU;

	t61 = ((x2745%(x2746^x2747))>>x2748);

	if (t61 != 1062986213493LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2813 = 1U;
	volatile int16_t x2814 = INT16_MIN;
	int16_t x2815 = -5;
	int32_t t62 = -380077;

	t62 = ((x2813%(x2814^x2815))>>x2816);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2857 = UINT64_MAX;
	static volatile int64_t x2858 = -198LL;
	int32_t x2859 = -2612713;
	uint16_t x2860 = 42U;
	volatile uint64_t t63 = 114LLU;

	t63 = ((x2857%(x2858^x2859))>>x2860);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x2903 = INT64_MAX;
	uint64_t t64 = 70025360515186957LLU;

	t64 = ((x2901%(x2902^x2903))>>x2904);

	if (t64 != 63LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x2913 = 5692U;
	int64_t x2914 = INT64_MIN;
	int64_t x2915 = 1609LL;
	int64_t t65 = -55271703099LL;

	t65 = ((x2913%(x2914^x2915))>>x2916);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2969 = UINT16_MAX;
	int64_t x2970 = INT64_MAX;
	int8_t x2971 = INT8_MIN;
	uint8_t x2972 = 0U;

	t66 = ((x2969%(x2970^x2971))>>x2972);

	if (t66 != 65535LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2981 = 393;
	volatile int8_t x2982 = 0;
	int32_t x2983 = -5428;
	int8_t x2984 = 1;
	static volatile int32_t t67 = 1637;

	t67 = ((x2981%(x2982^x2983))>>x2984);

	if (t67 != 196) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x2989 = 3LLU;
	int16_t x2990 = INT16_MAX;
	uint64_t x2991 = 628176659LLU;
	uint8_t x2992 = 10U;

	t68 = ((x2989%(x2990^x2991))>>x2992);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x2993 = 46U;
	int64_t x2994 = -1LL;
	uint16_t x2996 = 6U;

	t69 = ((x2993%(x2994^x2995))>>x2996);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x3025 = 656661U;
	uint16_t x3026 = 48U;
	int8_t x3027 = INT8_MIN;
	int8_t x3028 = 5;
	volatile uint32_t t70 = 7384U;

	t70 = ((x3025%(x3026^x3027))>>x3028);

	if (t70 != 20520U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3053 = UINT8_MAX;
	static int64_t x3054 = 328731291LL;
	volatile int16_t x3056 = 49;
	int64_t t71 = -104175950057308690LL;

	t71 = ((x3053%(x3054^x3055))>>x3056);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3069 = INT64_MAX;
	uint8_t x3070 = UINT8_MAX;
	volatile uint16_t x3071 = 1940U;
	int16_t x3072 = 1;
	volatile int64_t t72 = 65424LL;

	t72 = ((x3069%(x3070^x3071))>>x3072);

	if (t72 != 386LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3109 = INT8_MAX;
	uint8_t x3110 = 0U;
	int16_t x3111 = -4;
	static int8_t x3112 = 0;
	volatile int32_t t73 = 2066;

	t73 = ((x3109%(x3110^x3111))>>x3112);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3121 = 24517499;
	int16_t x3122 = INT16_MIN;
	volatile int32_t t74 = 53670626;

	t74 = ((x3121%(x3122^x3123))>>x3124);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3133 = UINT8_MAX;
	int64_t x3134 = 0LL;
	static int32_t x3135 = 109682;
	volatile int8_t x3136 = 1;
	int64_t t75 = -1630772706021LL;

	t75 = ((x3133%(x3134^x3135))>>x3136);

	if (t75 != 127LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3209 = UINT32_MAX;
	int64_t x3210 = INT64_MIN;
	int8_t x3211 = -3;
	uint8_t x3212 = 62U;
	static volatile int64_t t76 = 4478783011LL;

	t76 = ((x3209%(x3210^x3211))>>x3212);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x3321 = INT8_MIN;
	volatile uint32_t x3322 = UINT32_MAX;
	volatile int8_t x3323 = INT8_MAX;
	volatile uint32_t x3324 = 2U;
	volatile uint32_t t77 = 61U;

	t77 = ((x3321%(x3322^x3323))>>x3324);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3357 = 376381584;
	uint32_t x3358 = 11035378U;
	volatile uint32_t x3359 = 50090U;
	uint16_t x3360 = 15U;
	volatile uint32_t t78 = 1006026U;

	t78 = ((x3357%(x3358^x3359))>>x3360);

	if (t78 != 19U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3369 = 19U;
	int64_t x3371 = INT64_MAX;
	uint8_t x3372 = 0U;
	int64_t t79 = -152508081419642943LL;

	t79 = ((x3369%(x3370^x3371))>>x3372);

	if (t79 != 19LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x3413 = 8717LLU;
	static int16_t x3414 = INT16_MIN;
	int8_t x3415 = INT8_MAX;
	uint8_t x3416 = 3U;
	volatile uint64_t t80 = 165748LLU;

	t80 = ((x3413%(x3414^x3415))>>x3416);

	if (t80 != 1089LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3441 = -2204;
	int16_t x3442 = -11750;
	uint64_t x3443 = UINT64_MAX;
	uint64_t t81 = 3736646062LLU;

	t81 = ((x3441%(x3442^x3443))>>x3444);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x3453 = UINT32_MAX;
	uint32_t x3454 = 461073U;
	volatile int8_t x3455 = INT8_MIN;
	uint8_t x3456 = 1U;
	volatile uint32_t t82 = 29U;

	t82 = ((x3453%(x3454^x3455))>>x3456);

	if (t82 != 230583U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x3585 = INT64_MAX;
	volatile int8_t x3586 = INT8_MAX;
	volatile int16_t x3588 = 0;
	int64_t t83 = -62308047200882599LL;

	t83 = ((x3585%(x3586^x3587))>>x3588);

	if (t83 != 7LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x3645 = 27602U;
	static volatile uint16_t x3646 = 4079U;
	int8_t x3648 = 0;
	static volatile uint32_t t84 = 35546534U;

	t84 = ((x3645%(x3646^x3647))>>x3648);

	if (t84 != 27602U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3893 = UINT64_MAX;
	static int32_t x3894 = -121;
	int64_t x3895 = -45920899652697991LL;
	volatile int8_t x3896 = 19;
	static volatile uint64_t t85 = 3831378745648085060LLU;

	t85 = ((x3893%(x3894^x3895))>>x3896);

	if (t85 != 61918855624LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3905 = 1634226648U;
	uint32_t x3906 = UINT32_MAX;
	int64_t t86 = -205672928729LL;

	t86 = ((x3905%(x3906^x3907))>>x3908);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4001 = 584LLU;
	int64_t x4002 = INT64_MIN;
	uint64_t x4003 = 662931953773876089LLU;
	static int16_t x4004 = 0;
	volatile uint64_t t87 = 281792105675LLU;

	t87 = ((x4001%(x4002^x4003))>>x4004);

	if (t87 != 584LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4081 = INT64_MAX;
	int16_t x4082 = INT16_MIN;
	uint16_t x4084 = 3U;

	t88 = ((x4081%(x4082^x4083))>>x4084);

	if (t88 != 229772792LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4114 = 5U;
	static uint8_t x4115 = 1U;
	int32_t x4116 = 3;
	int64_t t89 = 187943409606115928LL;

	t89 = ((x4113%(x4114^x4115))>>x4116);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4173 = 142644544642079LLU;
	uint64_t x4174 = UINT64_MAX;
	int64_t x4175 = INT64_MIN;
	volatile uint16_t x4176 = 1U;

	t90 = ((x4173%(x4174^x4175))>>x4176);

	if (t90 != 71322272321039LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4293 = 14U;
	uint64_t x4294 = UINT64_MAX;
	int32_t x4295 = -28;
	int16_t x4296 = 0;
	volatile uint64_t t91 = 5240484271809168LLU;

	t91 = ((x4293%(x4294^x4295))>>x4296);

	if (t91 != 14LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4605 = INT64_MIN;
	uint64_t x4606 = UINT64_MAX;
	static int8_t x4607 = INT8_MIN;
	int16_t x4608 = 0;
	uint64_t t92 = 20351304535808168LLU;

	t92 = ((x4605%(x4606^x4607))>>x4608);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4702 = INT8_MAX;
	int16_t x4703 = INT16_MIN;
	uint8_t x4704 = 61U;

	t93 = ((x4701%(x4702^x4703))>>x4704);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4730 = INT16_MIN;
	uint8_t x4732 = 3U;
	volatile int32_t t94 = -25659;

	t94 = ((x4729%(x4730^x4731))>>x4732);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4733 = 39627218LLU;
	int16_t x4734 = INT16_MAX;
	int64_t x4735 = INT64_MAX;
	uint32_t x4736 = 23U;
	uint64_t t95 = 130750022700427881LLU;

	t95 = ((x4733%(x4734^x4735))>>x4736);

	if (t95 != 4LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4741 = UINT16_MAX;
	volatile uint16_t x4742 = 148U;
	volatile int32_t t96 = -1;

	t96 = ((x4741%(x4742^x4743))>>x4744);

	if (t96 != 20) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x4793 = INT8_MIN;
	uint64_t x4794 = 568814711554LLU;
	static uint8_t x4795 = 2U;
	int32_t x4796 = 1;
	volatile uint64_t t97 = 63146811038LLU;

	t97 = ((x4793%(x4794^x4795))>>x4796);

	if (t97 != 249972508224LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4797 = INT16_MAX;
	uint8_t x4798 = 29U;
	uint16_t x4800 = 2U;
	volatile int64_t t98 = 275599334766598LL;

	t98 = ((x4797%(x4798^x4799))>>x4800);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x4934 = -4LL;
	volatile uint16_t x4935 = UINT16_MAX;
	uint16_t x4936 = 0U;
	volatile int64_t t99 = -1444LL;

	t99 = ((x4933%(x4934^x4935))>>x4936);

	if (t99 != 3LL) { NG(); } else { ; }
	
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

