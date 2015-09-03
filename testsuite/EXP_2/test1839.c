#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x39 = 1;
int8_t x40 = 15;
static volatile int64_t t0 = 97LL;
volatile int8_t x47 = -9;
volatile uint16_t x66 = 701U;
int8_t x68 = 1;
uint32_t x78 = 53791722U;
uint32_t x150 = UINT32_MAX;
static volatile int64_t x151 = -98445569172986789LL;
static int16_t x152 = 1;
int16_t x182 = -1;
int8_t x225 = 5;
uint32_t x226 = 65U;
volatile int8_t x228 = 1;
uint32_t x242 = 349113U;
static int32_t t8 = 2590012;
int8_t x386 = INT8_MIN;
uint32_t t9 = 260566U;
int16_t x411 = 9256;
static volatile int64_t t10 = -893LL;
uint16_t x413 = UINT16_MAX;
static uint16_t x416 = 1U;
uint32_t x450 = 969926U;
uint64_t x533 = UINT64_MAX;
int16_t x535 = INT16_MIN;
uint8_t x536 = 2U;
int32_t x579 = INT32_MAX;
uint64_t x706 = 975718019619LLU;
uint8_t x708 = 0U;
int64_t x842 = 244784893LL;
volatile int64_t t21 = 5448633946LL;
volatile int16_t x910 = -1;
uint64_t x935 = 2177137055086574LLU;
uint32_t x936 = 1U;
int16_t x943 = INT16_MIN;
volatile uint8_t x1066 = 0U;
volatile uint64_t x1161 = UINT64_MAX;
uint32_t x1377 = 5U;
volatile int32_t x1379 = 3375677;
volatile uint16_t x1380 = 31U;
uint16_t x1460 = 2U;
uint8_t x1467 = UINT8_MAX;
uint8_t x1468 = 2U;
int64_t x1485 = INT64_MIN;
static uint64_t t35 = 82388735353LLU;
int64_t x1550 = INT64_MIN;
uint16_t x1621 = 18U;
uint8_t x1821 = 3U;
volatile int64_t x1822 = 23451250856LL;
volatile int64_t t39 = 6083053746LL;
int8_t x1833 = -8;
uint32_t x1834 = 3428U;
uint32_t x1835 = UINT32_MAX;
int8_t x1968 = 30;
int8_t x2206 = -3;
static int8_t x2336 = 0;
uint64_t x2368 = 0LLU;
volatile uint32_t t46 = UINT32_MAX;
static uint8_t x2386 = UINT8_MAX;
uint8_t x2459 = UINT8_MAX;
int8_t x2699 = INT8_MIN;
uint8_t x2795 = 56U;
uint64_t t53 = 421267759553338628LLU;
static volatile int32_t x2972 = 4;
uint8_t x2992 = 0U;
uint8_t x3024 = 2U;
static uint8_t x3036 = 0U;
volatile uint32_t t57 = 621651U;
uint16_t x3105 = 5U;
volatile uint64_t t60 = 1790LLU;
int8_t x3219 = INT8_MIN;
uint64_t x3220 = 0LLU;
static int32_t x3308 = 9;
uint32_t x3325 = 206U;
uint32_t x3543 = UINT32_MAX;
uint8_t x3641 = UINT8_MAX;
uint32_t x3710 = UINT32_MAX;
uint64_t t67 = 8003LLU;
int64_t x3787 = INT64_MIN;
static int16_t x3914 = 111;
uint16_t x3916 = 7U;
uint16_t x3936 = 2U;
uint64_t x3971 = UINT64_MAX;
volatile uint64_t t79 = 8776269977997556LLU;
uint32_t x3973 = 2U;
volatile int64_t t81 = -8893351LL;
int64_t x4109 = 42LL;
int64_t x4111 = INT64_MIN;
volatile uint8_t x4112 = 19U;
volatile int64_t t82 = 32794118478447LL;
static int8_t x4171 = INT8_MAX;
volatile uint32_t t84 = UINT32_MAX;
static int16_t x4173 = 31;
static int8_t x4176 = 18;
int32_t t85 = -1308;
volatile uint64_t x4185 = 15LLU;
uint32_t t89 = 200387U;
static volatile int16_t x4461 = 378;
static uint32_t x4464 = 58U;
int8_t x4685 = 0;
uint32_t x4687 = UINT32_MAX;
static int32_t x4693 = -29724458;
uint16_t x4801 = 3969U;
volatile int8_t x4803 = 1;
static int16_t x4804 = 0;
static int32_t t95 = -32704;
volatile int8_t x4811 = INT8_MIN;
uint32_t x4812 = 4U;
static volatile uint8_t x4821 = UINT8_MAX;
uint16_t x4822 = 11U;
int16_t x4823 = INT16_MIN;
int64_t x4858 = INT64_MAX;
int64_t t98 = -19224386418LL;


void f0(void) {
	uint8_t x37 = 1U;
	int64_t x38 = -1LL;

	t0 = ((x37|(x38&x39))<<x40);

	if (t0 != 32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x45 = 30068U;
	int8_t x46 = INT8_MAX;
	int64_t x48 = 4LL;
	uint32_t t1 = 165354057U;

	t1 = ((x45|(x46&x47))<<x48);

	if (t1 != 481136U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x65 = 297316539U;
	int32_t x67 = 56;
	volatile uint32_t t2 = 2806U;

	t2 = ((x65|(x66&x67))<<x68);

	if (t2 != 594633078U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x77 = UINT32_MAX;
	uint32_t x79 = 6497191U;
	uint8_t x80 = 0U;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = ((x77|(x78&x79))<<x80);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x149 = 1;
	int64_t t4 = -19788831LL;

	t4 = ((x149|(x150&x151))<<x152);

	if (t4 != 6567708854LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x181 = 2;
	uint16_t x183 = 89U;
	uint8_t x184 = 0U;
	static int32_t t5 = 0;

	t5 = ((x181|(x182&x183))<<x184);

	if (t5 != 91) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x227 = 101U;
	volatile uint32_t t6 = 650U;

	t6 = ((x225|(x226&x227))<<x228);

	if (t6 != 138U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x243 = 56U;
	volatile int8_t x244 = 0;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x241|(x242&x243))<<x244);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x321 = 54;
	int16_t x322 = -1;
	static uint8_t x323 = 1U;
	volatile int8_t x324 = 0;

	t8 = ((x321|(x322&x323))<<x324);

	if (t8 != 55) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x385 = 11624U;
	uint32_t x387 = 11U;
	static volatile uint32_t x388 = 31U;

	t9 = ((x385|(x386&x387))<<x388);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x409 = UINT8_MAX;
	int64_t x410 = INT64_MIN;
	int32_t x412 = 2;

	t10 = ((x409|(x410&x411))<<x412);

	if (t10 != 1020LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x414 = 11076998981LLU;
	static int32_t x415 = INT32_MIN;
	volatile uint64_t t11 = 110434LLU;

	t11 = ((x413|(x414&x415))<<x416);

	if (t11 != 21474967550LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x449 = -1;
	volatile int32_t x451 = INT32_MIN;
	static volatile uint8_t x452 = 1U;
	uint32_t t12 = 63U;

	t12 = ((x449|(x450&x451))<<x452);

	if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x534 = UINT64_MAX;
	uint64_t t13 = 1769226694456843673LLU;

	t13 = ((x533|(x534&x535))<<x536);

	if (t13 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x577 = 114;
	static int16_t x578 = -6;
	volatile int16_t x580 = 0;
	volatile int32_t t14 = 33;

	t14 = ((x577|(x578&x579))<<x580);

	if (t14 != 2147483642) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x653 = 26U;
	volatile uint16_t x654 = UINT16_MAX;
	int8_t x655 = INT8_MIN;
	int8_t x656 = 7;
	static uint32_t t15 = 38195535U;

	t15 = ((x653|(x654&x655))<<x656);

	if (t15 != 8375552U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x661 = 2U;
	int8_t x662 = INT8_MAX;
	uint64_t x663 = 4344986886494LLU;
	uint8_t x664 = 9U;
	volatile uint64_t t16 = 98400101413LLU;

	t16 = ((x661|(x662&x663))<<x664);

	if (t16 != 48128LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x705 = UINT16_MAX;
	static int64_t x707 = -1LL;
	volatile uint64_t t17 = 6LLU;

	t17 = ((x705|(x706&x707))<<x708);

	if (t17 != 975718055935LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x769 = -1LL;
	uint64_t x770 = 2649050425612211LLU;
	uint16_t x771 = 163U;
	int8_t x772 = 58;
	uint64_t t18 = 214LLU;

	t18 = ((x769|(x770&x771))<<x772);

	if (t18 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x801 = INT16_MIN;
	static volatile int64_t x802 = 1870427591315238LL;
	static uint64_t x803 = UINT64_MAX;
	int16_t x804 = 31;
	volatile uint64_t t19 = 0LLU;

	t19 = ((x801|(x802&x803))<<x804);

	if (t19 != 18446682032906960896LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x841 = INT32_MAX;
	volatile int32_t x843 = INT32_MIN;
	uint16_t x844 = 4U;
	volatile int64_t t20 = 17115089046LL;

	t20 = ((x841|(x842&x843))<<x844);

	if (t20 != 34359738352LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x845 = INT32_MAX;
	int64_t x846 = INT64_MIN;
	static uint16_t x847 = 22U;
	int8_t x848 = 1;

	t21 = ((x845|(x846&x847))<<x848);

	if (t21 != 4294967294LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x909 = -1;
	uint64_t x911 = 2LLU;
	volatile int64_t x912 = 4LL;
	volatile uint64_t t22 = 725260LLU;

	t22 = ((x909|(x910&x911))<<x912);

	if (t22 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x933 = UINT32_MAX;
	uint8_t x934 = UINT8_MAX;
	static volatile uint64_t t23 = 22521367421476LLU;

	t23 = ((x933|(x934&x935))<<x936);

	if (t23 != 8589934590LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x941 = 33;
	uint32_t x942 = 44778258U;
	uint16_t x944 = 10U;
	volatile uint32_t t24 = 1657424563U;

	t24 = ((x941|(x942&x943))<<x944);

	if (t24 != 2885714944U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x989 = 29338LL;
	int64_t x990 = 382833464932705670LL;
	volatile uint64_t x991 = 5433000042002LLU;
	volatile int16_t x992 = 0;
	uint64_t t25 = 370066LLU;

	t25 = ((x989|(x990&x991))<<x992);

	if (t25 != 134248090LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1021 = INT32_MIN;
	uint32_t x1022 = 831334U;
	int8_t x1023 = -1;
	static uint16_t x1024 = 2U;
	static uint32_t t26 = 879211U;

	t26 = ((x1021|(x1022&x1023))<<x1024);

	if (t26 != 3325336U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1065 = INT64_MAX;
	int16_t x1067 = INT16_MAX;
	int16_t x1068 = 0;
	static volatile int64_t t27 = INT64_MAX;

	t27 = ((x1065|(x1066&x1067))<<x1068);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1162 = UINT32_MAX;
	static uint16_t x1163 = UINT16_MAX;
	uint8_t x1164 = 2U;
	uint64_t t28 = 144172017162LLU;

	t28 = ((x1161|(x1162&x1163))<<x1164);

	if (t28 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1225 = 1U;
	int32_t x1226 = 37064;
	uint8_t x1227 = 4U;
	uint8_t x1228 = 15U;
	volatile int32_t t29 = 408963;

	t29 = ((x1225|(x1226&x1227))<<x1228);

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1265 = -7;
	uint32_t x1266 = UINT32_MAX;
	uint8_t x1267 = 6U;
	int8_t x1268 = 13;
	uint32_t t30 = 71511U;

	t30 = ((x1265|(x1266&x1267))<<x1268);

	if (t30 != 4294959104U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1378 = 1U;
	uint32_t t31 = 14U;

	t31 = ((x1377|(x1378&x1379))<<x1380);

	if (t31 != 2147483648U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1457 = 6U;
	static int64_t x1458 = INT64_MIN;
	static int64_t x1459 = INT64_MAX;
	int64_t t32 = -115204679792142748LL;

	t32 = ((x1457|(x1458&x1459))<<x1460);

	if (t32 != 24LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1465 = UINT8_MAX;
	uint16_t x1466 = 24507U;
	volatile int32_t t33 = -63;

	t33 = ((x1465|(x1466&x1467))<<x1468);

	if (t33 != 1020) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1469 = 6;
	int16_t x1470 = INT16_MIN;
	uint8_t x1471 = 3U;
	uint8_t x1472 = 0U;
	volatile int32_t t34 = 2;

	t34 = ((x1469|(x1470&x1471))<<x1472);

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1486 = 28U;
	uint64_t x1487 = UINT64_MAX;
	static int16_t x1488 = 25;

	t35 = ((x1485|(x1486&x1487))<<x1488);

	if (t35 != 939524096LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x1549 = UINT16_MAX;
	volatile uint16_t x1551 = 4U;
	uint32_t x1552 = 3U;
	static int64_t t36 = -201929451LL;

	t36 = ((x1549|(x1550&x1551))<<x1552);

	if (t36 != 524280LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1569 = 61171824284573146LLU;
	static int8_t x1570 = INT8_MIN;
	volatile int64_t x1571 = -1LL;
	uint8_t x1572 = 2U;
	static uint64_t t37 = 10737242186LLU;

	t37 = ((x1569|(x1570&x1571))<<x1572);

	if (t37 != 18446744073709551464LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x1622 = 25291;
	int64_t x1623 = INT64_MAX;
	int64_t x1624 = 1LL;
	static int64_t t38 = 438253782LL;

	t38 = ((x1621|(x1622&x1623))<<x1624);

	if (t38 != 50614LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1823 = -13771034805645666LL;
	uint32_t x1824 = 19U;

	t39 = ((x1821|(x1822&x1823))<<x1824);

	if (t39 != 2392812252823552LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1836 = 5U;
	static volatile uint32_t t40 = 3U;

	t40 = ((x1833|(x1834&x1835))<<x1836);

	if (t40 != 4294967168U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1965 = 7U;
	int16_t x1966 = 28;
	uint32_t x1967 = 397754U;
	volatile uint32_t t41 = 14963855U;

	t41 = ((x1965|(x1966&x1967))<<x1968);

	if (t41 != 3221225472U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2029 = -1;
	uint64_t x2030 = 18LLU;
	uint64_t x2031 = 124721294808LLU;
	static uint16_t x2032 = 6U;
	volatile uint64_t t42 = 110LLU;

	t42 = ((x2029|(x2030&x2031))<<x2032);

	if (t42 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2117 = -1;
	uint8_t x2118 = 24U;
	uint64_t x2119 = 4484858829678480473LLU;
	static int8_t x2120 = 37;
	static volatile uint64_t t43 = 8054795LLU;

	t43 = ((x2117|(x2118&x2119))<<x2120);

	if (t43 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2205 = INT8_MIN;
	static volatile uint32_t x2207 = UINT32_MAX;
	volatile int8_t x2208 = 7;
	volatile uint32_t t44 = 107962733U;

	t44 = ((x2205|(x2206&x2207))<<x2208);

	if (t44 != 4294966912U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2333 = UINT64_MAX;
	int64_t x2334 = 461737941577LL;
	int32_t x2335 = -123;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x2333|(x2334&x2335))<<x2336);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2365 = -1;
	int8_t x2366 = INT8_MIN;
	static uint32_t x2367 = UINT32_MAX;

	t46 = ((x2365|(x2366&x2367))<<x2368);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2385 = 2LLU;
	int32_t x2387 = -1;
	volatile uint64_t x2388 = 3LLU;
	static uint64_t t47 = 2294685706760667598LLU;

	t47 = ((x2385|(x2386&x2387))<<x2388);

	if (t47 != 2040LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2457 = 62779389U;
	int16_t x2458 = 6327;
	static int8_t x2460 = 1;
	uint32_t t48 = 28U;

	t48 = ((x2457|(x2458&x2459))<<x2460);

	if (t48 != 125558782U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2637 = INT16_MAX;
	uint64_t x2638 = 92833029081LLU;
	int32_t x2639 = INT32_MAX;
	uint8_t x2640 = 3U;
	uint64_t t49 = 241LLU;

	t49 = ((x2637|(x2638&x2639))<<x2640);

	if (t49 != 3930062840LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2697 = 42LL;
	int16_t x2698 = INT16_MAX;
	uint8_t x2700 = 1U;
	volatile int64_t t50 = 60421574LL;

	t50 = ((x2697|(x2698&x2699))<<x2700);

	if (t50 != 65364LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2793 = 423642U;
	int32_t x2794 = INT32_MAX;
	uint8_t x2796 = 15U;
	static uint32_t t51 = 916849863U;

	t51 = ((x2793|(x2794&x2795))<<x2796);

	if (t51 != 998047744U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x2853 = -1;
	uint32_t x2854 = 70328U;
	volatile int32_t x2855 = INT32_MIN;
	volatile uint8_t x2856 = 25U;
	volatile uint32_t t52 = 18241724U;

	t52 = ((x2853|(x2854&x2855))<<x2856);

	if (t52 != 4261412864U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x2873 = -976171;
	volatile uint32_t x2874 = 2739700U;
	static uint64_t x2875 = 5849831949950LLU;
	volatile uint8_t x2876 = 22U;

	t53 = ((x2873|(x2874&x2875))<<x2876);

	if (t53 != 18446740189939236864LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2969 = INT8_MIN;
	uint64_t x2970 = 6774971498LLU;
	int64_t x2971 = INT64_MIN;
	volatile uint64_t t54 = 203136LLU;

	t54 = ((x2969|(x2970&x2971))<<x2972);

	if (t54 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x2989 = 12039U;
	uint64_t x2990 = 183448073995791LLU;
	uint64_t x2991 = 26289LLU;
	volatile uint64_t t55 = 7819LLU;

	t55 = ((x2989|(x2990&x2991))<<x2992);

	if (t55 != 12039LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3021 = 4U;
	int8_t x3022 = -60;
	uint64_t x3023 = 3504131310524LLU;
	uint64_t t56 = 9733002LLU;

	t56 = ((x3021|(x3022&x3023))<<x3024);

	if (t56 != 14016525241872LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3033 = 1233686U;
	int16_t x3034 = INT16_MIN;
	uint8_t x3035 = 1U;

	t57 = ((x3033|(x3034&x3035))<<x3036);

	if (t57 != 1233686U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x3037 = 125U;
	uint16_t x3038 = 2U;
	int64_t x3039 = -1232635878LL;
	static volatile uint8_t x3040 = 4U;
	int64_t t58 = -39200733933069LL;

	t58 = ((x3037|(x3038&x3039))<<x3040);

	if (t58 != 2032LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x3106 = 1458818624955744LLU;
	int32_t x3107 = INT32_MIN;
	int16_t x3108 = 36;
	volatile uint64_t t59 = 5236LLU;

	t59 = ((x3105|(x3106&x3107))<<x3108);

	if (t59 != 343597383680LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3161 = INT64_MAX;
	uint64_t x3162 = 3333104836194732LLU;
	int32_t x3163 = INT32_MIN;
	static int8_t x3164 = 38;

	t60 = ((x3161|(x3162&x3163))<<x3164);

	if (t60 != 18446743798831644672LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3217 = INT64_MAX;
	volatile uint16_t x3218 = 1U;
	static int64_t t61 = INT64_MAX;

	t61 = ((x3217|(x3218&x3219))<<x3220);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3305 = 2U;
	volatile int32_t x3306 = INT32_MAX;
	int16_t x3307 = INT16_MAX;
	volatile int32_t t62 = -939675122;

	t62 = ((x3305|(x3306&x3307))<<x3308);

	if (t62 != 16776704) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3326 = INT32_MIN;
	static int8_t x3327 = -12;
	uint8_t x3328 = 29U;
	uint32_t t63 = 549168170U;

	t63 = ((x3325|(x3326&x3327))<<x3328);

	if (t63 != 3221225472U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x3365 = 0LLU;
	uint32_t x3366 = UINT32_MAX;
	int64_t x3367 = INT64_MIN;
	int8_t x3368 = 2;
	static volatile uint64_t t64 = 2538LLU;

	t64 = ((x3365|(x3366&x3367))<<x3368);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3541 = UINT16_MAX;
	volatile uint64_t x3542 = 26553048185052740LLU;
	uint8_t x3544 = 2U;
	volatile uint64_t t65 = 16LLU;

	t65 = ((x3541|(x3542&x3543))<<x3544);

	if (t65 != 5152440316LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3642 = 58191700757LLU;
	volatile int64_t x3643 = INT64_MAX;
	int8_t x3644 = 5;
	volatile uint64_t t66 = 19720LLU;

	t66 = ((x3641|(x3642&x3643))<<x3644);

	if (t66 != 1862134431712LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3709 = 1012420393LLU;
	uint32_t x3711 = UINT32_MAX;
	volatile int8_t x3712 = 61;

	t67 = ((x3709|(x3710&x3711))<<x3712);

	if (t67 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3745 = 257483938U;
	uint8_t x3746 = UINT8_MAX;
	int8_t x3747 = -13;
	static int32_t x3748 = 25;
	volatile uint32_t t68 = 13203046U;

	t68 = ((x3745|(x3746&x3747))<<x3748);

	if (t68 != 3858759680U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x3777 = -1;
	volatile uint32_t x3778 = 2399324U;
	static int8_t x3779 = INT8_MAX;
	int8_t x3780 = 0;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = ((x3777|(x3778&x3779))<<x3780);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3785 = 9393857987LLU;
	int16_t x3786 = -1;
	int8_t x3788 = 50;
	static volatile uint64_t t70 = 11349463642LLU;

	t70 = ((x3785|(x3786&x3787))<<x3788);

	if (t70 != 10884074399447646208LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x3805 = 51U;
	volatile uint64_t x3806 = 4723503747LLU;
	int64_t x3807 = INT64_MIN;
	static int8_t x3808 = 25;
	volatile uint64_t t71 = 71955112775806753LLU;

	t71 = ((x3805|(x3806&x3807))<<x3808);

	if (t71 != 1711276032LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3813 = INT32_MAX;
	int16_t x3814 = INT16_MIN;
	uint32_t x3815 = UINT32_MAX;
	int8_t x3816 = 4;
	volatile uint32_t t72 = 78856U;

	t72 = ((x3813|(x3814&x3815))<<x3816);

	if (t72 != 4294967280U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3833 = UINT16_MAX;
	uint64_t x3834 = 10279997250878076LLU;
	uint32_t x3835 = UINT32_MAX;
	static uint16_t x3836 = 4U;
	volatile uint64_t t73 = 708902LLU;

	t73 = ((x3833|(x3834&x3835))<<x3836);

	if (t73 != 25886195696LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3841 = INT16_MAX;
	int16_t x3842 = 12235;
	int8_t x3843 = -1;
	int16_t x3844 = 1;
	int32_t t74 = 126819;

	t74 = ((x3841|(x3842&x3843))<<x3844);

	if (t74 != 65534) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3849 = 374994246454939489LLU;
	int64_t x3850 = 1786275300964LL;
	volatile uint16_t x3851 = 740U;
	static volatile int8_t x3852 = 7;
	static uint64_t t75 = 1LLU;

	t75 = ((x3849|(x3850&x3851))<<x3852);

	if (t75 != 11105775398813151872LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3905 = INT32_MIN;
	volatile uint32_t x3906 = 232U;
	static int16_t x3907 = INT16_MAX;
	int16_t x3908 = 0;
	uint32_t t76 = 3114806U;

	t76 = ((x3905|(x3906&x3907))<<x3908);

	if (t76 != 2147483880U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3913 = 5256;
	uint64_t x3915 = 412820499344LLU;
	volatile uint64_t t77 = 408255387457905LLU;

	t77 = ((x3913|(x3914&x3915))<<x3916);

	if (t77 != 672768LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x3933 = 89298419660LL;
	uint64_t x3934 = 442LLU;
	int8_t x3935 = -1;
	static volatile uint64_t t78 = 190LLU;

	t78 = ((x3933|(x3934&x3935))<<x3936);

	if (t78 != 357193678840LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x3969 = INT16_MIN;
	volatile uint64_t x3970 = 736LLU;
	uint16_t x3972 = 32U;

	t79 = ((x3969|(x3970&x3971))<<x3972);

	if (t79 != 18446606497317126144LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3974 = INT64_MAX;
	uint8_t x3975 = 12U;
	int16_t x3976 = 21;
	volatile int64_t t80 = 690576653LL;

	t80 = ((x3973|(x3974&x3975))<<x3976);

	if (t80 != 29360128LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4093 = 8133141159861LL;
	uint16_t x4094 = UINT16_MAX;
	int8_t x4095 = INT8_MIN;
	uint16_t x4096 = 2U;

	t81 = ((x4093|(x4094&x4095))<<x4096);

	if (t81 != 32532564803284LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4110 = INT8_MAX;

	t82 = ((x4109|(x4110&x4111))<<x4112);

	if (t82 != 22020096LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x4145 = 186820780U;
	int32_t x4146 = INT32_MAX;
	static int8_t x4147 = INT8_MAX;
	int8_t x4148 = 12;
	uint32_t t83 = 40829432U;

	t83 = ((x4145|(x4146&x4147))<<x4148);

	if (t83 != 714076160U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4169 = UINT32_MAX;
	uint8_t x4170 = 75U;
	static int8_t x4172 = 0;

	t84 = ((x4169|(x4170&x4171))<<x4172);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4174 = -1;
	static int8_t x4175 = 7;

	t85 = ((x4173|(x4174&x4175))<<x4176);

	if (t85 != 8126464) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4186 = INT16_MIN;
	uint8_t x4187 = 2U;
	static uint8_t x4188 = 26U;
	uint64_t t86 = 21525303LLU;

	t86 = ((x4185|(x4186&x4187))<<x4188);

	if (t86 != 1006632960LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4213 = 138U;
	uint64_t x4214 = 777LLU;
	uint8_t x4215 = 1U;
	volatile uint8_t x4216 = 3U;
	volatile uint64_t t87 = 235317994978153LLU;

	t87 = ((x4213|(x4214&x4215))<<x4216);

	if (t87 != 1112LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x4245 = UINT64_MAX;
	static uint8_t x4246 = 66U;
	uint32_t x4247 = UINT32_MAX;
	int32_t x4248 = 2;
	volatile uint64_t t88 = 23823921520440457LLU;

	t88 = ((x4245|(x4246&x4247))<<x4248);

	if (t88 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x4277 = 28;
	static uint32_t x4278 = UINT32_MAX;
	int16_t x4279 = INT16_MIN;
	uint8_t x4280 = 0U;

	t89 = ((x4277|(x4278&x4279))<<x4280);

	if (t89 != 4294934556U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4425 = UINT64_MAX;
	volatile int8_t x4426 = 45;
	static volatile uint16_t x4427 = 267U;
	uint32_t x4428 = 3U;
	volatile uint64_t t90 = 68034014331270LLU;

	t90 = ((x4425|(x4426&x4427))<<x4428);

	if (t90 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4462 = 61U;
	static uint64_t x4463 = 86919297LLU;
	static uint64_t t91 = 17518560620LLU;

	t91 = ((x4461|(x4462&x4463))<<x4464);

	if (t91 != 17005592192950992896LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4481 = INT16_MIN;
	uint64_t x4482 = 113LLU;
	int64_t x4483 = 29751930LL;
	uint8_t x4484 = 25U;
	uint64_t t92 = 7776247074739LLU;

	t92 = ((x4481|(x4482&x4483))<<x4484);

	if (t92 != 18446742977956020224LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x4686 = INT8_MIN;
	uint16_t x4688 = 0U;
	volatile uint32_t t93 = 1413871151U;

	t93 = ((x4685|(x4686&x4687))<<x4688);

	if (t93 != 4294967168U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4694 = 341233LLU;
	int16_t x4695 = INT16_MIN;
	uint8_t x4696 = 35U;
	uint64_t t94 = 447217296LLU;

	t94 = ((x4693|(x4694&x4695))<<x4696);

	if (t94 != 17436678472767373312LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4802 = 222U;

	t95 = ((x4801|(x4802&x4803))<<x4804);

	if (t95 != 3969) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4809 = 124579604;
	uint64_t x4810 = UINT64_MAX;
	static uint64_t t96 = 1741461LLU;

	t96 = ((x4809|(x4810&x4811))<<x4812);

	if (t96 != 18446744073709549888LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x4824 = 1U;
	int32_t t97 = -63182641;

	t97 = ((x4821|(x4822&x4823))<<x4824);

	if (t97 != 510) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4857 = 32U;
	static int8_t x4859 = 10;
	volatile uint64_t x4860 = 2LLU;

	t98 = ((x4857|(x4858&x4859))<<x4860);

	if (t98 != 168LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4877 = 1;
	int8_t x4878 = -1;
	volatile uint32_t x4879 = UINT32_MAX;
	uint16_t x4880 = 0U;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = ((x4877|(x4878&x4879))<<x4880);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

