#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x258 = -1;
static uint64_t x427 = 1LLU;
static uint64_t x454 = 55LLU;
int8_t x497 = INT8_MIN;
static int32_t x500 = INT32_MIN;
int16_t x525 = INT16_MIN;
volatile int16_t x581 = INT16_MAX;
uint32_t x582 = 94U;
int32_t x657 = INT32_MIN;
static int64_t t11 = -23765LL;
volatile int8_t x989 = INT8_MIN;
uint8_t x1013 = UINT8_MAX;
int32_t x1026 = -1;
int16_t x1333 = INT16_MAX;
int16_t x1335 = 21;
uint64_t t22 = 590936402007873LLU;
volatile uint64_t t24 = 930678207240723712LLU;
volatile int32_t t25 = 2977897;
uint64_t x1953 = 14339649289046476LLU;
int8_t x1954 = INT8_MIN;
static volatile uint32_t t31 = 147367841U;
uint64_t x2185 = 319LLU;
uint16_t x2187 = 6U;
uint64_t t34 = 20150672059498237LLU;
int64_t t35 = -49589LL;
volatile uint64_t x2230 = 9113712231LLU;
uint64_t t37 = 10865542LLU;
int8_t x2282 = INT8_MIN;
static int32_t x2378 = INT32_MIN;
volatile uint64_t x2420 = 5884971930LLU;
volatile int16_t x2452 = INT16_MIN;
volatile int8_t x2467 = 9;
int64_t x2468 = INT64_MIN;
int64_t x2677 = -76426LL;
volatile int64_t t47 = -1LL;
volatile uint8_t x2738 = UINT8_MAX;
uint8_t x2793 = 51U;
uint32_t x2796 = UINT32_MAX;
static volatile int16_t x2821 = 4770;
uint64_t x2822 = 2LLU;
static volatile uint64_t t51 = 14LLU;
int16_t x2893 = INT16_MIN;
static int64_t x2926 = -1LL;
int64_t x2928 = -1LL;
volatile int8_t x3018 = -2;
int16_t x3041 = INT16_MIN;
int64_t x3042 = INT64_MIN;
uint8_t x3043 = 0U;
uint64_t x3066 = UINT64_MAX;
int32_t x3068 = -1;
int64_t x3188 = -7997LL;
volatile uint64_t t57 = 6LLU;
uint64_t x3269 = 25690519262LLU;
uint64_t x3286 = 38LLU;
volatile uint16_t x3287 = 5U;
volatile uint64_t t59 = 109884149885LLU;
uint16_t x3309 = 10664U;
int8_t x3351 = 0;
uint32_t t61 = 2857002U;
int8_t x3354 = -5;
int16_t x3451 = 4;
volatile int64_t x3452 = -363LL;
uint8_t x3459 = 2U;
int16_t x3527 = 1;
static int64_t x3528 = -3700868939021470LL;
int64_t x3546 = 13660LL;
static uint8_t x3547 = 0U;
int64_t t67 = -32778LL;
int16_t x3641 = INT16_MAX;
volatile int32_t t68 = 0;
int32_t x3670 = INT32_MAX;
uint16_t x3671 = 0U;
uint16_t x3672 = 15251U;
uint16_t x3749 = 1532U;
uint32_t x3750 = UINT32_MAX;
uint32_t t72 = 249692U;
uint16_t x3847 = 1U;
uint64_t x3906 = UINT64_MAX;
uint16_t x3910 = UINT16_MAX;
volatile uint64_t x3949 = 500277005349412865LLU;
uint8_t x4180 = 11U;
volatile int32_t x4356 = -1;
static int8_t x4389 = -1;
static int8_t x4505 = INT8_MAX;
volatile uint16_t x4506 = 9U;
uint64_t t86 = 231009491836LLU;
static uint32_t x4565 = 483U;
uint16_t x4738 = 1U;
int8_t x4740 = INT8_MAX;
volatile uint64_t x4820 = UINT64_MAX;
uint16_t x5005 = 159U;
static int8_t x5008 = INT8_MIN;
static uint16_t x5047 = 0U;
uint8_t x5163 = 11U;
uint8_t x5171 = 26U;
uint32_t x5251 = 19U;
int64_t x5252 = 3008688040358LL;
int8_t x5333 = -8;
static volatile int64_t t99 = 0LL;


void f0(void) {
	volatile int32_t x257 = -1;
	uint16_t x259 = 0U;
	uint32_t x260 = 83U;
	uint32_t t0 = 68842085U;

	t0 = (((x257^x258)<<x259)+x260);

	if (t0 != 83U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x425 = -39;
	uint32_t x426 = 82U;
	uint64_t x428 = 3606291242329951LLU;
	uint64_t t1 = 206720LLU;

	t1 = (((x425^x426)<<x427)+x428);

	if (t1 != 3606295537297013LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x433 = 4443923630LLU;
	int8_t x434 = INT8_MIN;
	static volatile int8_t x435 = 29;
	int8_t x436 = INT8_MAX;
	volatile uint64_t t2 = 23744294LLU;

	t2 = (((x433^x434)<<x435)+x436);

	if (t2 != 16060930722285748351LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x441 = INT8_MIN;
	int16_t x442 = -1;
	static volatile int8_t x443 = 3;
	int16_t x444 = INT16_MIN;
	int32_t t3 = 506;

	t3 = (((x441^x442)<<x443)+x444);

	if (t3 != -31752) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x453 = 16625715LLU;
	volatile int8_t x455 = 1;
	uint16_t x456 = 1756U;
	static volatile uint64_t t4 = 6070164744LLU;

	t4 = (((x453^x454)<<x455)+x456);

	if (t4 != 33253092LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x498 = -920462652LL;
	static int8_t x499 = 0;
	int64_t t5 = 26735806223504485LL;

	t5 = (((x497^x498)<<x499)+x500);

	if (t5 != -1227020988LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x526 = UINT64_MAX;
	volatile uint8_t x527 = 1U;
	static int16_t x528 = INT16_MIN;
	uint64_t t6 = 149141520LLU;

	t6 = (((x525^x526)<<x527)+x528);

	if (t6 != 32766LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x549 = 30158LLU;
	static int16_t x550 = -1;
	int32_t x551 = 37;
	uint64_t x552 = 3967203804406LLU;
	uint64_t t7 = 1483LLU;

	t7 = (((x549^x550)<<x551)+x552);

	if (t7 != 18442603019515593974LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x583 = 30U;
	uint64_t x584 = 5497303398LLU;
	static uint64_t t8 = 17825LLU;

	t8 = (((x581^x582)<<x583)+x584);

	if (t8 != 6571045222LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x658 = -1LL;
	uint8_t x659 = 9U;
	int32_t x660 = INT32_MIN;
	volatile int64_t t9 = 4170972LL;

	t9 = (((x657^x658)<<x659)+x660);

	if (t9 != 1097364143616LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x685 = 18U;
	uint64_t x686 = UINT64_MAX;
	int16_t x687 = 10;
	static int64_t x688 = INT64_MIN;
	static uint64_t t10 = 967364514756856LLU;

	t10 = (((x685^x686)<<x687)+x688);

	if (t10 != 9223372036854756352LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x953 = 6U;
	static volatile uint32_t x954 = UINT32_MAX;
	uint16_t x955 = 3U;
	static int64_t x956 = INT64_MIN;

	t11 = (((x953^x954)<<x955)+x956);

	if (t11 != -9223372032559808568LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x990 = 79U;
	int32_t x991 = 18;
	uint8_t x992 = 19U;
	uint32_t t12 = 30457U;

	t12 = (((x989^x990)<<x991)+x992);

	if (t12 != 4282122259U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1014 = 1;
	static uint32_t x1015 = 3U;
	int8_t x1016 = INT8_MAX;
	volatile int32_t t13 = -8170417;

	t13 = (((x1013^x1014)<<x1015)+x1016);

	if (t13 != 2159) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x1025 = 5U;
	static uint8_t x1027 = 0U;
	static uint64_t x1028 = UINT64_MAX;
	static volatile uint64_t t14 = 34335949221014LLU;

	t14 = (((x1025^x1026)<<x1027)+x1028);

	if (t14 != 4294967289LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1069 = -115638663LL;
	int32_t x1070 = -1;
	static int8_t x1071 = 15;
	int32_t x1072 = -146758;
	volatile int64_t t15 = -2387478LL;

	t15 = (((x1069^x1070)<<x1071)+x1072);

	if (t15 != 3789247529658LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1097 = INT8_MIN;
	int16_t x1098 = INT16_MIN;
	static uint8_t x1099 = 1U;
	static volatile uint64_t x1100 = 7280312109009680114LLU;
	volatile uint64_t t16 = 15863789LLU;

	t16 = (((x1097^x1098)<<x1099)+x1100);

	if (t16 != 7280312109009745394LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x1105 = UINT64_MAX;
	int8_t x1106 = -7;
	int8_t x1107 = 1;
	volatile int8_t x1108 = INT8_MIN;
	volatile uint64_t t17 = 3731888583871857LLU;

	t17 = (((x1105^x1106)<<x1107)+x1108);

	if (t17 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1157 = 222U;
	uint16_t x1158 = 10384U;
	static int64_t x1159 = 5LL;
	int32_t x1160 = -14356260;
	volatile uint32_t t18 = 3632U;

	t18 = (((x1157^x1158)<<x1159)+x1160);

	if (t18 != 4280941212U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1301 = 2U;
	volatile uint32_t x1302 = 4293U;
	int8_t x1303 = 0;
	uint64_t x1304 = 79026LLU;
	static volatile uint64_t t19 = 83369204033LLU;

	t19 = (((x1301^x1302)<<x1303)+x1304);

	if (t19 != 83321LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1325 = 5929566623LLU;
	uint64_t x1326 = UINT64_MAX;
	static uint8_t x1327 = 0U;
	static int8_t x1328 = INT8_MIN;
	uint64_t t20 = 9475546742LLU;

	t20 = (((x1325^x1326)<<x1327)+x1328);

	if (t20 != 18446744067779984864LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1334 = 8984LL;
	int32_t x1336 = 5;
	volatile int64_t t21 = -94879115863281557LL;

	t21 = (((x1333^x1334)<<x1335)+x1336);

	if (t21 != 49876566021LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x1385 = 4U;
	uint64_t x1386 = 28662LLU;
	volatile uint8_t x1387 = 0U;
	static int64_t x1388 = INT64_MIN;

	t22 = (((x1385^x1386)<<x1387)+x1388);

	if (t22 != 9223372036854804466LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1413 = INT8_MAX;
	static uint16_t x1414 = UINT16_MAX;
	int16_t x1415 = 2;
	static int32_t x1416 = INT32_MIN;
	int32_t t23 = -60138682;

	t23 = (((x1413^x1414)<<x1415)+x1416);

	if (t23 != -2147222016) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1757 = UINT64_MAX;
	int8_t x1758 = INT8_MAX;
	uint16_t x1759 = 40U;
	int64_t x1760 = -189LL;

	t24 = (((x1757^x1758)<<x1759)+x1760);

	if (t24 != 18446603336221196099LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1813 = 1;
	volatile uint16_t x1814 = UINT16_MAX;
	static uint8_t x1815 = 6U;
	int16_t x1816 = -87;

	t25 = (((x1813^x1814)<<x1815)+x1816);

	if (t25 != 4194089) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1885 = 9149;
	volatile uint16_t x1886 = 20U;
	uint8_t x1887 = 17U;
	volatile int16_t x1888 = INT16_MIN;
	int32_t t26 = -1022917177;

	t26 = (((x1885^x1886)<<x1887)+x1888);

	if (t26 != 1196523520) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1893 = INT16_MIN;
	uint64_t x1894 = 7375028812LLU;
	uint32_t x1895 = 6U;
	int8_t x1896 = -1;
	uint64_t t27 = 58351398LLU;

	t27 = (((x1893^x1894)<<x1895)+x1896);

	if (t27 != 18446743601705685759LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1955 = 0;
	volatile uint16_t x1956 = 432U;
	volatile uint64_t t28 = 14213971002108346LLU;

	t28 = (((x1953^x1954)<<x1955)+x1956);

	if (t28 != 18432404424420505596LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x1989 = 25U;
	int16_t x1990 = INT16_MIN;
	uint8_t x1991 = 1U;
	int32_t x1992 = INT32_MAX;
	static uint32_t t29 = 0U;

	t29 = (((x1989^x1990)<<x1991)+x1992);

	if (t29 != 2147418161U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1997 = -69075765617LL;
	uint64_t x1998 = UINT64_MAX;
	volatile uint8_t x1999 = 21U;
	uint8_t x2000 = 10U;
	uint64_t t30 = 2871214904548LLU;

	t30 = (((x1997^x1998)<<x1999)+x2000);

	if (t30 != 144862380013125642LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2021 = 22;
	static volatile uint32_t x2022 = 1495636U;
	volatile uint64_t x2023 = 21LLU;
	int32_t x2024 = -1;

	t31 = (((x2021^x2022)<<x2023)+x2024);

	if (t31 != 1212153855U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x2037 = INT8_MAX;
	int8_t x2038 = 23;
	static int64_t x2039 = 1LL;
	static int32_t x2040 = -1;
	int32_t t32 = 42891;

	t32 = (((x2037^x2038)<<x2039)+x2040);

	if (t32 != 207) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2109 = 463U;
	uint64_t x2110 = 29553881057221LLU;
	volatile uint8_t x2111 = 2U;
	static volatile int32_t x2112 = -1;
	volatile uint64_t t33 = 795585477908620292LLU;

	t33 = (((x2109^x2110)<<x2111)+x2112);

	if (t33 != 118215524227111LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2186 = 1U;
	int64_t x2188 = -1395936899384275765LL;

	t34 = (((x2185^x2186)<<x2187)+x2188);

	if (t34 != 17050807174325296203LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2193 = INT32_MIN;
	int64_t x2194 = -1LL;
	volatile int16_t x2195 = 0;
	static int64_t x2196 = INT64_MIN;

	t35 = (((x2193^x2194)<<x2195)+x2196);

	if (t35 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2221 = -1;
	int64_t x2222 = -2427802083639288LL;
	int16_t x2223 = 3;
	uint32_t x2224 = 795U;
	int64_t t36 = 2482LL;

	t36 = (((x2221^x2222)<<x2223)+x2224);

	if (t36 != 19422416669115091LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2229 = INT8_MIN;
	uint64_t x2231 = 19LLU;
	static volatile uint64_t x2232 = 9LLU;

	t37 = (((x2229^x2230)<<x2231)+x2232);

	if (t37 != 18441965863792279561LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2281 = INT8_MIN;
	static uint32_t x2283 = 1U;
	int64_t x2284 = INT64_MIN;
	int64_t t38 = INT64_MIN;

	t38 = (((x2281^x2282)<<x2283)+x2284);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2377 = 12931332700LLU;
	uint16_t x2379 = 0U;
	int32_t x2380 = INT32_MAX;
	volatile uint64_t t39 = 18104963537349068LLU;

	t39 = (((x2377^x2378)<<x2379)+x2380);

	if (t39 != 18446744060871080539LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2401 = 47683195U;
	uint8_t x2402 = 1U;
	volatile uint32_t x2403 = 0U;
	int8_t x2404 = INT8_MIN;
	volatile uint32_t t40 = 56U;

	t40 = (((x2401^x2402)<<x2403)+x2404);

	if (t40 != 47683066U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2417 = -1;
	int32_t x2418 = INT32_MIN;
	int8_t x2419 = 0;
	static uint64_t t41 = 1239582349LLU;

	t41 = (((x2417^x2418)<<x2419)+x2420);

	if (t41 != 8032455577LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2449 = 11LLU;
	uint16_t x2450 = UINT16_MAX;
	int8_t x2451 = 0;
	volatile uint64_t t42 = 151731099833045860LLU;

	t42 = (((x2449^x2450)<<x2451)+x2452);

	if (t42 != 32756LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2465 = UINT8_MAX;
	uint32_t x2466 = 130U;
	int64_t t43 = 1445443557225LL;

	t43 = (((x2465^x2466)<<x2467)+x2468);

	if (t43 != -9223372036854711808LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2521 = INT32_MIN;
	static uint64_t x2522 = 7840LLU;
	uint32_t x2523 = 21U;
	static int64_t x2524 = INT64_MAX;
	uint64_t t44 = 4375244913503LLU;

	t44 = (((x2521^x2522)<<x2523)+x2524);

	if (t44 != 9218868453669076991LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2545 = UINT16_MAX;
	volatile uint64_t x2546 = 0LLU;
	uint16_t x2547 = 2U;
	int8_t x2548 = 1;
	uint64_t t45 = 8426101536752LLU;

	t45 = (((x2545^x2546)<<x2547)+x2548);

	if (t45 != 262141LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2645 = 937044676U;
	static volatile uint8_t x2646 = 1U;
	uint32_t x2647 = 1U;
	uint16_t x2648 = 3146U;
	uint32_t t46 = 57U;

	t46 = (((x2645^x2646)<<x2647)+x2648);

	if (t46 != 1874092500U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2678 = -1;
	volatile uint32_t x2679 = 2U;
	int16_t x2680 = -1;

	t47 = (((x2677^x2678)<<x2679)+x2680);

	if (t47 != 305699LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2737 = UINT64_MAX;
	static uint16_t x2739 = 1U;
	volatile uint64_t x2740 = 56500LLU;
	volatile uint64_t t48 = 189759141LLU;

	t48 = (((x2737^x2738)<<x2739)+x2740);

	if (t48 != 55988LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2794 = UINT8_MAX;
	static volatile int8_t x2795 = 0;
	uint32_t t49 = 160846673U;

	t49 = (((x2793^x2794)<<x2795)+x2796);

	if (t49 != 203U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2817 = UINT64_MAX;
	static int64_t x2818 = INT64_MIN;
	static uint8_t x2819 = 1U;
	volatile int16_t x2820 = -1;
	uint64_t t50 = 7051779LLU;

	t50 = (((x2817^x2818)<<x2819)+x2820);

	if (t50 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2823 = 0;
	volatile int16_t x2824 = INT16_MIN;

	t51 = (((x2821^x2822)<<x2823)+x2824);

	if (t51 != 18446744073709523616LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2894 = 20172U;
	static uint16_t x2895 = 4U;
	volatile int8_t x2896 = INT8_MIN;
	static volatile uint32_t t52 = 1984U;

	t52 = (((x2893^x2894)<<x2895)+x2896);

	if (t52 != 4294765632U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2925 = INT8_MIN;
	volatile uint8_t x2927 = 3U;
	volatile int64_t t53 = -5511089569394256LL;

	t53 = (((x2925^x2926)<<x2927)+x2928);

	if (t53 != 1015LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3017 = INT8_MIN;
	uint32_t x3019 = 1U;
	int8_t x3020 = INT8_MIN;
	volatile int32_t t54 = 19096961;

	t54 = (((x3017^x3018)<<x3019)+x3020);

	if (t54 != 124) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3044 = 0;
	volatile int64_t t55 = 21919321LL;

	t55 = (((x3041^x3042)<<x3043)+x3044);

	if (t55 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3065 = 581878709U;
	uint8_t x3067 = 15U;
	uint64_t t56 = 33480453LLU;

	t56 = (((x3065^x3066)<<x3067)+x3068);

	if (t56 != 18446725006707982335LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3185 = 202324357LLU;
	uint16_t x3186 = 714U;
	int8_t x3187 = 30;

	t57 = (((x3185^x3186)<<x3187)+x3188);

	if (t57 != 217244615898554563LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3270 = INT8_MIN;
	int8_t x3271 = 1;
	uint64_t x3272 = 2LLU;
	uint64_t t58 = 1713352948LLU;

	t58 = (((x3269^x3270)<<x3271)+x3272);

	if (t58 != 18446744022328513214LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3285 = INT16_MIN;
	volatile int64_t x3288 = -6522007831LL;

	t59 = (((x3285^x3286)<<x3287)+x3288);

	if (t59 != 18446744067186496425LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3310 = 55050575LL;
	static uint8_t x3311 = 11U;
	volatile uint64_t x3312 = 30020320777028152LLU;
	uint64_t t60 = 4113021120923000LLU;

	t60 = (((x3309^x3310)<<x3311)+x3312);

	if (t60 != 30020433541364280LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x3349 = 3U;
	uint32_t x3350 = 302825U;
	int8_t x3352 = INT8_MAX;

	t61 = (((x3349^x3350)<<x3351)+x3352);

	if (t61 != 302953U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3353 = -53;
	uint8_t x3355 = 1U;
	volatile int32_t x3356 = -17521;
	volatile int32_t t62 = 3;

	t62 = (((x3353^x3354)<<x3355)+x3356);

	if (t62 != -17425) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3357 = 879555636LLU;
	volatile int32_t x3358 = -1;
	uint8_t x3359 = 0U;
	volatile uint64_t x3360 = 3323373273052352459LLU;
	static volatile uint64_t t63 = 373819LLU;

	t63 = (((x3357^x3358)<<x3359)+x3360);

	if (t63 != 3323373272172796822LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3449 = -548;
	int16_t x3450 = -1;
	int64_t t64 = -350107885LL;

	t64 = (((x3449^x3450)<<x3451)+x3452);

	if (t64 != 8389LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3457 = INT8_MIN;
	uint64_t x3458 = UINT64_MAX;
	static volatile int64_t x3460 = -1LL;
	volatile uint64_t t65 = 2107651004326LLU;

	t65 = (((x3457^x3458)<<x3459)+x3460);

	if (t65 != 507LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x3525 = -744;
	static uint64_t x3526 = 146813788LLU;
	volatile uint64_t t66 = 1074599658917032672LLU;

	t66 = (((x3525^x3526)<<x3527)+x3528);

	if (t66 != 18443043204476903402LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3545 = 3974257;
	uint32_t x3548 = 1261406U;

	t67 = (((x3545^x3546)<<x3547)+x3548);

	if (t67 != 5230731LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x3642 = UINT8_MAX;
	uint32_t x3643 = 0U;
	uint8_t x3644 = 1U;

	t68 = (((x3641^x3642)<<x3643)+x3644);

	if (t68 != 32513) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3653 = 1353049U;
	volatile uint16_t x3654 = 23U;
	uint16_t x3655 = 14U;
	int16_t x3656 = INT16_MIN;
	uint32_t t69 = 34U;

	t69 = (((x3653^x3654)<<x3655)+x3656);

	if (t69 != 693305344U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3669 = 1073060752643580722LL;
	volatile int64_t t70 = -1LL;

	t70 = (((x3669^x3670)<<x3671)+x3672);

	if (t70 != 1073060752920959072LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x3705 = -77377;
	int32_t x3706 = -1;
	static uint32_t x3707 = 0U;
	int8_t x3708 = INT8_MAX;
	volatile int32_t t71 = -274573;

	t71 = (((x3705^x3706)<<x3707)+x3708);

	if (t71 != 77503) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x3751 = 5;
	static int16_t x3752 = -1;

	t72 = (((x3749^x3750)<<x3751)+x3752);

	if (t72 != 4294918239U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3841 = 512670;
	static volatile int64_t x3842 = 4635LL;
	static int16_t x3843 = 0;
	int64_t x3844 = INT64_MIN;
	static volatile int64_t t73 = -14LL;

	t73 = (((x3841^x3842)<<x3843)+x3844);

	if (t73 != -9223372036854267771LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x3845 = -256510736811012LL;
	uint64_t x3846 = 88134553447LLU;
	int32_t x3848 = INT32_MAX;
	volatile uint64_t t74 = 36808922401923LLU;

	t74 = (((x3845^x3846)<<x3847)+x3848);

	if (t74 != 18446230887046080821LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3905 = -1;
	uint8_t x3907 = 31U;
	static volatile int16_t x3908 = INT16_MIN;
	uint64_t t75 = 25LLU;

	t75 = (((x3905^x3906)<<x3907)+x3908);

	if (t75 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3909 = 953351LL;
	int8_t x3911 = 14;
	int32_t x3912 = INT32_MAX;
	volatile int64_t t76 = 3677LL;

	t76 = (((x3909^x3910)<<x3911)+x3912);

	if (t76 != 17666277375LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x3950 = 2U;
	volatile uint8_t x3951 = 14U;
	int8_t x3952 = INT8_MIN;
	volatile uint64_t t77 = 119268958708431LLU;

	t77 = (((x3949^x3950)<<x3951)+x3952);

	if (t77 != 6184086917739495296LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x4177 = 14U;
	int64_t x4178 = 1280737LL;
	uint16_t x4179 = 38U;
	volatile int64_t t78 = 658553362060580LL;

	t78 = (((x4177^x4178)<<x4179)+x4180);

	if (t78 != 352050154196434955LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4297 = -1;
	int16_t x4298 = -51;
	uint32_t x4299 = 1U;
	int32_t x4300 = INT32_MIN;
	int32_t t79 = 63984;

	t79 = (((x4297^x4298)<<x4299)+x4300);

	if (t79 != -2147483548) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4301 = INT8_MIN;
	int16_t x4302 = -8124;
	int16_t x4303 = 3;
	static int8_t x4304 = INT8_MIN;
	volatile int32_t t80 = 62;

	t80 = (((x4301^x4302)<<x4303)+x4304);

	if (t80 != 64928) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4305 = 12668U;
	uint16_t x4306 = 408U;
	static uint32_t x4307 = 0U;
	int8_t x4308 = -4;
	volatile int32_t t81 = 403;

	t81 = (((x4305^x4306)<<x4307)+x4308);

	if (t81 != 12512) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4345 = UINT64_MAX;
	int16_t x4346 = -1;
	volatile uint8_t x4347 = 0U;
	int8_t x4348 = -1;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (((x4345^x4346)<<x4347)+x4348);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4353 = UINT8_MAX;
	uint32_t x4354 = UINT32_MAX;
	static uint64_t x4355 = 7LLU;
	volatile uint32_t t83 = 5987U;

	t83 = (((x4353^x4354)<<x4355)+x4356);

	if (t83 != 4294934527U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4390 = -1LL;
	volatile int16_t x4391 = 4;
	volatile uint16_t x4392 = UINT16_MAX;
	int64_t t84 = 1275691LL;

	t84 = (((x4389^x4390)<<x4391)+x4392);

	if (t84 != 65535LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x4473 = -1;
	uint32_t x4474 = 934768U;
	int16_t x4475 = 1;
	static int16_t x4476 = INT16_MIN;
	uint32_t t85 = 1U;

	t85 = (((x4473^x4474)<<x4475)+x4476);

	if (t85 != 4293064990U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4507 = 1U;
	uint64_t x4508 = 29649883221582661LLU;

	t86 = (((x4505^x4506)<<x4507)+x4508);

	if (t86 != 29649883221582897LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4566 = INT8_MAX;
	int8_t x4567 = 3;
	int8_t x4568 = INT8_MIN;
	volatile uint32_t t87 = 1046U;

	t87 = (((x4565^x4566)<<x4567)+x4568);

	if (t87 != 3168U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x4613 = 4547038U;
	int8_t x4614 = INT8_MAX;
	uint16_t x4615 = 0U;
	int16_t x4616 = INT16_MAX;
	volatile uint32_t t88 = 817711839U;

	t88 = (((x4613^x4614)<<x4615)+x4616);

	if (t88 != 4579744U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4617 = 25U;
	uint64_t x4618 = 24776699954507LLU;
	uint8_t x4619 = 3U;
	int8_t x4620 = 0;
	uint64_t t89 = 426592LLU;

	t89 = (((x4617^x4618)<<x4619)+x4620);

	if (t89 != 198213599636112LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4681 = 7;
	static uint64_t x4682 = 18172444101LLU;
	uint8_t x4683 = 14U;
	int16_t x4684 = -1;
	uint64_t t90 = 28LLU;

	t90 = (((x4681^x4682)<<x4683)+x4684);

	if (t90 != 297737324101631LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4737 = 99000444541429LLU;
	uint16_t x4739 = 2U;
	uint64_t t91 = 1494892312LLU;

	t91 = (((x4737^x4738)<<x4739)+x4740);

	if (t91 != 396001778165839LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4817 = 1U;
	int16_t x4818 = 779;
	int8_t x4819 = 0;
	uint64_t t92 = 477973469193582300LLU;

	t92 = (((x4817^x4818)<<x4819)+x4820);

	if (t92 != 777LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5006 = 0;
	volatile int16_t x5007 = 6;
	static int32_t t93 = 1165740;

	t93 = (((x5005^x5006)<<x5007)+x5008);

	if (t93 != 10048) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x5045 = 1992862;
	uint8_t x5046 = UINT8_MAX;
	int64_t x5048 = INT64_MIN;
	int64_t t94 = 25603LL;

	t94 = (((x5045^x5046)<<x5047)+x5048);

	if (t94 != -9223372036852783007LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5145 = 809443715804301648LLU;
	static int16_t x5146 = -976;
	int8_t x5147 = 0;
	int8_t x5148 = INT8_MIN;
	volatile uint64_t t95 = 1556135462944934528LLU;

	t95 = (((x5145^x5146)<<x5147)+x5148);

	if (t95 != 17637300357905249504LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5161 = -1;
	static int8_t x5162 = INT8_MIN;
	uint8_t x5164 = 34U;
	volatile int32_t t96 = 68009760;

	t96 = (((x5161^x5162)<<x5163)+x5164);

	if (t96 != 260130) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x5169 = 0LLU;
	int8_t x5170 = INT8_MAX;
	uint8_t x5172 = 13U;
	uint64_t t97 = 919LLU;

	t97 = (((x5169^x5170)<<x5171)+x5172);

	if (t97 != 8522825741LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5249 = INT8_MAX;
	volatile uint32_t x5250 = 181U;
	int64_t t98 = -3300138394LL;

	t98 = (((x5249^x5250)<<x5251)+x5252);

	if (t98 != 3008793946534LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5334 = -1LL;
	uint16_t x5335 = 1U;
	static int64_t x5336 = INT64_MIN;

	t99 = (((x5333^x5334)<<x5335)+x5336);

	if (t99 != -9223372036854775794LL) { NG(); } else { ; }
	
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

