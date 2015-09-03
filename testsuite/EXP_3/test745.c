#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x153 = UINT64_MAX;
int32_t x375 = INT32_MIN;
static uint16_t x376 = UINT16_MAX;
uint64_t t2 = 7156117LLU;
static volatile int64_t x395 = INT64_MIN;
static volatile int8_t x572 = 38;
static int16_t x938 = 51;
int16_t x939 = 1;
volatile uint64_t t10 = 2888581687LLU;
uint16_t x994 = 4U;
uint64_t x996 = UINT64_MAX;
static uint64_t x1153 = 613800250LLU;
uint16_t x1154 = 51U;
volatile int8_t x1156 = INT8_MAX;
uint32_t x1181 = 4119636U;
int8_t x1322 = 1;
uint32_t t19 = 27U;
volatile uint32_t t21 = 51U;
static volatile int16_t x1674 = 0;
int16_t x1675 = INT16_MAX;
static int64_t x1707 = -1LL;
int16_t x1708 = -85;
volatile int32_t t24 = -93982;
int8_t x1979 = 15;
static uint32_t x2175 = UINT32_MAX;
static uint32_t x2273 = 10785987U;
int16_t x2324 = INT16_MIN;
int32_t x2377 = 545412873;
static volatile int32_t t31 = 484189;
static volatile int16_t x2417 = 186;
uint8_t x2418 = 2U;
static uint16_t x2510 = 0U;
static int8_t x2512 = -5;
static int8_t x2635 = -1;
volatile int64_t t36 = 1LL;
uint32_t x2745 = 139264746U;
uint64_t t40 = 245121093034080LLU;
volatile int32_t x2893 = 0;
uint32_t x2894 = 0U;
int64_t t42 = -3532687741394821LL;
uint8_t x3016 = UINT8_MAX;
uint32_t t43 = 9256334U;
volatile int16_t x3383 = -1;
volatile uint8_t x3430 = 8U;
volatile uint32_t t46 = 69980358U;
static uint32_t x3433 = 3U;
uint32_t t47 = 280U;
volatile int64_t x3563 = INT64_MAX;
uint16_t x3745 = UINT16_MAX;
uint64_t x3746 = 0LLU;
uint64_t x3748 = 346916070LLU;
volatile int64_t x3845 = 1LL;
volatile uint64_t x4037 = 982826571860LLU;
volatile int16_t x4317 = 78;
int16_t x4319 = -2;
uint16_t x4354 = 4U;
static volatile int16_t x4375 = 872;
uint64_t x4412 = UINT64_MAX;
uint64_t t60 = 2009954312139081LLU;
uint16_t x4606 = 4U;
uint16_t x4735 = UINT16_MAX;
static volatile uint16_t x4853 = 7U;
static int64_t x4856 = 36LL;
static int8_t x4859 = INT8_MAX;
static int32_t x5095 = INT32_MIN;
uint64_t x5172 = 5266897698952107566LLU;
static uint16_t x5277 = 15U;
uint64_t x5291 = 1269835LLU;
static uint64_t t72 = 885691601790LLU;
uint64_t x5449 = UINT64_MAX;
int64_t x5451 = -1LL;
uint64_t x5673 = 814159143590876229LLU;
volatile int32_t x5813 = 14831112;
int8_t x5854 = 4;
uint64_t t79 = 1LLU;
static int64_t x6042 = 0LL;
int32_t x6043 = -1;
int64_t t81 = -458205568LL;
int8_t x6082 = 1;
uint64_t t83 = 110309744355374604LLU;
static int16_t x6261 = 556;
int8_t x6582 = 0;
int8_t x6583 = 2;
volatile int64_t t86 = -1LL;
volatile int8_t x6746 = 0;
int8_t x6748 = INT8_MIN;
static volatile uint32_t t87 = 4U;
uint64_t t89 = 11454637697LLU;
volatile int16_t x6894 = 0;
int32_t x6896 = INT32_MAX;
uint16_t x6993 = UINT16_MAX;
volatile int32_t x7007 = -1;
int32_t t92 = 23;
int32_t x7055 = -254611724;
uint8_t x7185 = 9U;
static int64_t x7188 = INT64_MIN;
int64_t t94 = 408275980082967984LL;
volatile int64_t x7479 = INT64_MIN;
uint32_t x7531 = 162741481U;
static uint64_t t99 = 2910747655LLU;


void f0(void) {
	int16_t x41 = 36;
	static int8_t x42 = 0;
	uint64_t x43 = 6450LLU;
	static int64_t x44 = INT64_MAX;
	volatile uint64_t t0 = 198LLU;

	t0 = ((x41<<x42)/(x43%x44));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x154 = 38U;
	uint16_t x155 = 1283U;
	static int32_t x156 = INT32_MAX;
	volatile uint64_t t1 = 34284626330128LLU;

	t1 = ((x153<<x154)/(x155%x156));

	if (t1 != 14377820575862544LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x373 = 1LLU;
	int16_t x374 = 0;

	t2 = ((x373<<x374)/(x375%x376));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x393 = 20121180LLU;
	uint8_t x394 = 4U;
	uint8_t x396 = UINT8_MAX;
	volatile uint64_t t3 = 10612469LLU;

	t3 = ((x393<<x394)/(x395%x396));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x441 = 0;
	int32_t x442 = 1;
	uint64_t x443 = UINT64_MAX;
	uint32_t x444 = 1234U;
	static uint64_t t4 = 44170392205LLU;

	t4 = ((x441<<x442)/(x443%x444));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x569 = 53;
	int8_t x570 = 1;
	uint16_t x571 = UINT16_MAX;
	volatile int32_t t5 = -15;

	t5 = ((x569<<x570)/(x571%x572));

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x617 = UINT64_MAX;
	static uint8_t x618 = 4U;
	int16_t x619 = -2;
	int8_t x620 = 7;
	volatile uint64_t t6 = 277899004690LLU;

	t6 = ((x617<<x618)/(x619%x620));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x873 = 2697036LL;
	static uint8_t x874 = 12U;
	static int64_t x875 = -1LL;
	int8_t x876 = 62;
	int64_t t7 = 1288LL;

	t7 = ((x873<<x874)/(x875%x876));

	if (t7 != -11047059456LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x937 = 7424144189169570489LLU;
	uint8_t x940 = 6U;
	volatile uint64_t t8 = 4904342615LLU;

	t8 = ((x937<<x938)/(x939%x940));

	if (t8 != 10792876506993393664LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x953 = 7284U;
	volatile int8_t x954 = 13;
	static int32_t x955 = INT32_MIN;
	uint16_t x956 = UINT16_MAX;
	static int32_t t9 = -418229;

	t9 = ((x953<<x954)/(x955%x956));

	if (t9 != -1821) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x973 = UINT16_MAX;
	int8_t x974 = 13;
	static uint64_t x975 = 1LLU;
	uint8_t x976 = UINT8_MAX;

	t10 = ((x973<<x974)/(x975%x976));

	if (t10 != 536862720LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x993 = 53U;
	int32_t x995 = INT32_MIN;
	static uint64_t t11 = 25461817772342LLU;

	t11 = ((x993<<x994)/(x995%x996));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1089 = 54761LL;
	uint8_t x1090 = 6U;
	uint64_t x1091 = 22LLU;
	uint64_t x1092 = 572LLU;
	static volatile uint64_t t12 = 2002385006293341LLU;

	t12 = ((x1089<<x1090)/(x1091%x1092));

	if (t12 != 159304LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x1149 = 7U;
	int16_t x1150 = 15;
	volatile uint32_t x1151 = 26292U;
	static int32_t x1152 = -2539;
	uint32_t t13 = 6U;

	t13 = ((x1149<<x1150)/(x1151%x1152));

	if (t13 != 8U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x1155 = 50U;
	volatile uint64_t t14 = 435203LLU;

	t14 = ((x1153<<x1154)/(x1155%x1156));

	if (t14 != 290842463935586631LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1169 = 477LLU;
	uint8_t x1170 = 63U;
	int64_t x1171 = -5339039491124LL;
	int32_t x1172 = INT32_MAX;
	uint64_t t15 = 17241LLU;

	t15 = ((x1169<<x1170)/(x1171%x1172));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x1182 = 1;
	int16_t x1183 = INT16_MAX;
	static int16_t x1184 = INT16_MIN;
	volatile uint32_t t16 = 19570U;

	t16 = ((x1181<<x1182)/(x1183%x1184));

	if (t16 != 251U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1185 = 146227906079705047LLU;
	static uint8_t x1186 = 10U;
	uint32_t x1187 = 49562597U;
	uint64_t x1188 = 780927070LLU;
	volatile uint64_t t17 = 735881739910LLU;

	t17 = ((x1185<<x1186)/(x1187%x1188));

	if (t17 != 43650320340LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1321 = UINT8_MAX;
	static uint32_t x1323 = 55U;
	volatile int16_t x1324 = INT16_MIN;
	volatile uint32_t t18 = 4U;

	t18 = ((x1321<<x1322)/(x1323%x1324));

	if (t18 != 9U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1521 = INT16_MAX;
	int32_t x1522 = 0;
	int16_t x1523 = INT16_MIN;
	uint32_t x1524 = 113410U;

	t19 = ((x1521<<x1522)/(x1523%x1524));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1585 = 63U;
	uint8_t x1586 = 1U;
	int32_t x1587 = -1;
	uint8_t x1588 = 96U;
	int32_t t20 = 6185;

	t20 = ((x1585<<x1586)/(x1587%x1588));

	if (t20 != -126) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1653 = 0U;
	uint8_t x1654 = 21U;
	static uint32_t x1655 = UINT32_MAX;
	int16_t x1656 = INT16_MIN;

	t21 = ((x1653<<x1654)/(x1655%x1656));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1673 = 51;
	int32_t x1676 = INT32_MIN;
	int32_t t22 = -13;

	t22 = ((x1673<<x1674)/(x1675%x1676));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1705 = 259U;
	volatile uint16_t x1706 = 8U;
	static volatile int64_t t23 = 2172037483LL;

	t23 = ((x1705<<x1706)/(x1707%x1708));

	if (t23 != -66304LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1757 = 55U;
	static volatile int32_t x1758 = 1;
	uint16_t x1759 = 82U;
	uint16_t x1760 = 476U;

	t24 = ((x1757<<x1758)/(x1759%x1760));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1861 = 54U;
	uint8_t x1862 = 6U;
	static int32_t x1863 = -1;
	int16_t x1864 = 15;
	int32_t t25 = -8;

	t25 = ((x1861<<x1862)/(x1863%x1864));

	if (t25 != -3456) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1969 = 8U;
	volatile uint8_t x1970 = 22U;
	uint64_t x1971 = 14LLU;
	int16_t x1972 = -1;
	uint64_t t26 = 1742853942867091308LLU;

	t26 = ((x1969<<x1970)/(x1971%x1972));

	if (t26 != 2396745LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1977 = 43U;
	int8_t x1978 = 0;
	int64_t x1980 = INT64_MAX;
	int64_t t27 = -1LL;

	t27 = ((x1977<<x1978)/(x1979%x1980));

	if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x2173 = 7339164058LLU;
	volatile uint16_t x2174 = 32U;
	static int64_t x2176 = -573593741031250973LL;
	uint64_t t28 = 13045636061LLU;

	t28 = ((x2173<<x2174)/(x2175%x2176));

	if (t28 != 3044196762LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2274 = 28;
	uint16_t x2275 = 2U;
	static uint8_t x2276 = UINT8_MAX;
	uint32_t t29 = 1U;

	t29 = ((x2273<<x2274)/(x2275%x2276));

	if (t29 != 402653184U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x2321 = 46;
	int16_t x2322 = 0;
	int16_t x2323 = -225;
	volatile int32_t t30 = 197343483;

	t30 = ((x2321<<x2322)/(x2323%x2324));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x2378 = 0U;
	int32_t x2379 = -1;
	uint8_t x2380 = UINT8_MAX;

	t31 = ((x2377<<x2378)/(x2379%x2380));

	if (t31 != -545412873) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x2419 = -1LL;
	static int32_t x2420 = INT32_MIN;
	int64_t t32 = -15LL;

	t32 = ((x2417<<x2418)/(x2419%x2420));

	if (t32 != -744LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2437 = UINT16_MAX;
	volatile int64_t x2438 = 1LL;
	int8_t x2439 = -2;
	int16_t x2440 = INT16_MIN;
	int32_t t33 = 5;

	t33 = ((x2437<<x2438)/(x2439%x2440));

	if (t33 != -65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2509 = 1014406532U;
	int32_t x2511 = -4;
	static uint32_t t34 = 214172U;

	t34 = ((x2509<<x2510)/(x2511%x2512));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x2521 = 7U;
	uint64_t x2522 = 0LLU;
	uint32_t x2523 = 10U;
	int8_t x2524 = -1;
	volatile uint32_t t35 = 134U;

	t35 = ((x2521<<x2522)/(x2523%x2524));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2633 = 400U;
	static volatile int8_t x2634 = 1;
	volatile int64_t x2636 = -80604063773010LL;

	t36 = ((x2633<<x2634)/(x2635%x2636));

	if (t36 != -800LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x2673 = INT16_MAX;
	static uint8_t x2674 = 1U;
	static int16_t x2675 = -20;
	static int16_t x2676 = INT16_MIN;
	int32_t t37 = 190971;

	t37 = ((x2673<<x2674)/(x2675%x2676));

	if (t37 != -3276) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x2746 = 5U;
	static int64_t x2747 = INT64_MAX;
	volatile uint16_t x2748 = 24U;
	int64_t t38 = 30218005449233LL;

	t38 = ((x2745<<x2746)/(x2747%x2748));

	if (t38 != 23072082LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2769 = 171006570711589673LLU;
	static int8_t x2770 = 1;
	int32_t x2771 = INT32_MIN;
	int16_t x2772 = -124;
	volatile uint64_t t39 = 223707LLU;

	t39 = ((x2769<<x2770)/(x2771%x2772));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x2785 = 266U;
	int32_t x2786 = 0;
	static uint64_t x2787 = 1349977075LLU;
	int16_t x2788 = -11409;

	t40 = ((x2785<<x2786)/(x2787%x2788));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2797 = 16U;
	int16_t x2798 = 10;
	int64_t x2799 = -40400112651998728LL;
	int8_t x2800 = -21;
	int64_t t41 = 1047639632265169LL;

	t41 = ((x2797<<x2798)/(x2799%x2800));

	if (t41 != -1260LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2895 = INT64_MIN;
	int64_t x2896 = INT64_MAX;

	t42 = ((x2893<<x2894)/(x2895%x2896));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3013 = 1U;
	volatile int8_t x3014 = 30;
	uint16_t x3015 = 1147U;

	t43 = ((x3013<<x3014)/(x3015%x3016));

	if (t43 != 8454660U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3381 = 9738U;
	int64_t x3382 = 6LL;
	int64_t x3384 = INT64_MIN;
	static volatile int64_t t44 = 55233004032LL;

	t44 = ((x3381<<x3382)/(x3383%x3384));

	if (t44 != -623232LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x3413 = 43U;
	int16_t x3414 = 0;
	uint64_t x3415 = 165649807425790LLU;
	uint32_t x3416 = 1217U;
	static uint64_t t45 = 1LLU;

	t45 = ((x3413<<x3414)/(x3415%x3416));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x3429 = INT8_MAX;
	uint32_t x3431 = 56U;
	uint8_t x3432 = 18U;

	t46 = ((x3429<<x3430)/(x3431%x3432));

	if (t46 != 16256U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3434 = 30U;
	int8_t x3435 = -1;
	uint32_t x3436 = 134U;

	t47 = ((x3433<<x3434)/(x3435%x3436));

	if (t47 != 32537631U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3561 = 3146;
	uint8_t x3562 = 5U;
	uint32_t x3564 = UINT32_MAX;
	static volatile int64_t t48 = -666722597913LL;

	t48 = ((x3561<<x3562)/(x3563%x3564));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3589 = 73U;
	static int32_t x3590 = 9;
	static int32_t x3591 = -1;
	volatile int8_t x3592 = -7;
	int32_t t49 = 0;

	t49 = ((x3589<<x3590)/(x3591%x3592));

	if (t49 != -37376) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3665 = UINT16_MAX;
	volatile uint32_t x3666 = 14U;
	uint8_t x3667 = 7U;
	int16_t x3668 = 11;
	int32_t t50 = 5950502;

	t50 = ((x3665<<x3666)/(x3667%x3668));

	if (t50 != 153389348) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3689 = 276;
	uint8_t x3690 = 1U;
	int16_t x3691 = INT16_MIN;
	int64_t x3692 = 3337805170362LL;
	volatile int64_t t51 = 1823377950LL;

	t51 = ((x3689<<x3690)/(x3691%x3692));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3747 = 11U;
	volatile uint64_t t52 = 195986LLU;

	t52 = ((x3745<<x3746)/(x3747%x3748));

	if (t52 != 5957LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3813 = 0;
	static volatile uint16_t x3814 = 2U;
	uint64_t x3815 = 288LLU;
	volatile int16_t x3816 = INT16_MIN;
	uint64_t t53 = 10828817887650791LLU;

	t53 = ((x3813<<x3814)/(x3815%x3816));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3846 = 0;
	static int32_t x3847 = INT32_MIN;
	static int8_t x3848 = -9;
	int64_t t54 = -400931382496LL;

	t54 = ((x3845<<x3846)/(x3847%x3848));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x4038 = 0U;
	volatile int8_t x4039 = INT8_MAX;
	int8_t x4040 = -36;
	uint64_t t55 = 5973248473907547LLU;

	t55 = ((x4037<<x4038)/(x4039%x4040));

	if (t55 != 51727714308LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x4301 = 1;
	uint8_t x4302 = 1U;
	int64_t x4303 = INT64_MAX;
	int16_t x4304 = 869;
	volatile int64_t t56 = 4LL;

	t56 = ((x4301<<x4302)/(x4303%x4304));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4318 = 5U;
	uint64_t x4320 = 4LLU;
	uint64_t t57 = 0LLU;

	t57 = ((x4317<<x4318)/(x4319%x4320));

	if (t57 != 1248LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4353 = UINT8_MAX;
	int8_t x4355 = INT8_MIN;
	uint8_t x4356 = UINT8_MAX;
	int32_t t58 = 15627638;

	t58 = ((x4353<<x4354)/(x4355%x4356));

	if (t58 != -31) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x4373 = 52519;
	int32_t x4374 = 6;
	int32_t x4376 = -6;
	int32_t t59 = 19;

	t59 = ((x4373<<x4374)/(x4375%x4376));

	if (t59 != 1680608) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x4409 = 18065;
	uint16_t x4410 = 1U;
	int32_t x4411 = 44;

	t60 = ((x4409<<x4410)/(x4411%x4412));

	if (t60 != 821LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4541 = UINT8_MAX;
	uint16_t x4542 = 9U;
	static int16_t x4543 = -5237;
	uint32_t x4544 = 231U;
	uint32_t t61 = 58230944U;

	t61 = ((x4541<<x4542)/(x4543%x4544));

	if (t61 != 1632U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4605 = UINT32_MAX;
	int16_t x4607 = INT16_MAX;
	int64_t x4608 = INT64_MIN;
	volatile int64_t t62 = 19634203839LL;

	t62 = ((x4605<<x4606)/(x4607%x4608));

	if (t62 != 131075LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4733 = 4U;
	int8_t x4734 = 0;
	uint8_t x4736 = 23U;
	static int32_t t63 = -241;

	t63 = ((x4733<<x4734)/(x4735%x4736));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x4854 = 3U;
	volatile uint8_t x4855 = UINT8_MAX;
	int64_t t64 = -2014267244LL;

	t64 = ((x4853<<x4854)/(x4855%x4856));

	if (t64 != 18LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x4857 = INT64_MAX;
	int8_t x4858 = 0;
	uint32_t x4860 = 23518830U;
	volatile int64_t t65 = -2974670LL;

	t65 = ((x4857<<x4858)/(x4859%x4860));

	if (t65 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4877 = 46LLU;
	uint8_t x4878 = 5U;
	uint32_t x4879 = 46371U;
	int16_t x4880 = INT16_MIN;
	volatile uint64_t t66 = 331862001812274LLU;

	t66 = ((x4877<<x4878)/(x4879%x4880));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4921 = 171966470619803LLU;
	int16_t x4922 = 4;
	uint32_t x4923 = UINT32_MAX;
	static int64_t x4924 = -26360LL;
	volatile uint64_t t67 = 69469265207076LLU;

	t67 = ((x4921<<x4922)/(x4923%x4924));

	if (t67 != 3958940330815LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x4953 = 57;
	int32_t x4954 = 0;
	volatile int32_t x4955 = -26539;
	int8_t x4956 = INT8_MIN;
	volatile int32_t t68 = 6;

	t68 = ((x4953<<x4954)/(x4955%x4956));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x5093 = 754U;
	volatile int8_t x5094 = 18;
	uint8_t x5096 = 59U;
	int32_t t69 = -101;

	t69 = ((x5093<<x5094)/(x5095%x5096));

	if (t69 != -3593755) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5169 = UINT8_MAX;
	int16_t x5170 = 0;
	uint8_t x5171 = 10U;
	uint64_t t70 = 9LLU;

	t70 = ((x5169<<x5170)/(x5171%x5172));

	if (t70 != 25LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x5278 = 0U;
	volatile int8_t x5279 = INT8_MIN;
	int64_t x5280 = 363174010LL;
	volatile int64_t t71 = -1263LL;

	t71 = ((x5277<<x5278)/(x5279%x5280));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x5289 = 32U;
	uint8_t x5290 = 10U;
	int16_t x5292 = -1;

	t72 = ((x5289<<x5290)/(x5291%x5292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x5357 = 2538719U;
	static uint8_t x5358 = 5U;
	uint64_t x5359 = 1757LLU;
	static int32_t x5360 = INT32_MIN;
	static volatile uint64_t t73 = 3908834118764833934LLU;

	t73 = ((x5357<<x5358)/(x5359%x5360));

	if (t73 != 46237LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x5361 = INT8_MAX;
	int8_t x5362 = 4;
	int64_t x5363 = -106131248715LL;
	uint16_t x5364 = 3669U;
	int64_t t74 = 6901LL;

	t74 = ((x5361<<x5362)/(x5363%x5364));

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x5450 = 9U;
	uint32_t x5452 = 76U;
	uint64_t t75 = 105485371LLU;

	t75 = ((x5449<<x5450)/(x5451%x5452));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5637 = 1725307LLU;
	uint16_t x5638 = 27U;
	static int16_t x5639 = INT16_MIN;
	int64_t x5640 = 60444LL;
	volatile uint64_t t76 = 23041572365152817LLU;

	t76 = ((x5637<<x5638)/(x5639%x5640));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5674 = 1;
	int8_t x5675 = -1;
	int16_t x5676 = INT16_MAX;
	volatile uint64_t t77 = 2811594LLU;

	t77 = ((x5673<<x5674)/(x5675%x5676));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x5814 = 5U;
	uint16_t x5815 = 277U;
	int64_t x5816 = INT64_MAX;
	volatile int64_t t78 = 11LL;

	t78 = ((x5813<<x5814)/(x5815%x5816));

	if (t78 != 1713341LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x5853 = 1272879250391LLU;
	int64_t x5855 = -1LL;
	int32_t x5856 = INT32_MIN;

	t79 = ((x5853<<x5854)/(x5855%x5856));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x6037 = 0U;
	volatile uint8_t x6038 = 23U;
	volatile uint16_t x6039 = 1U;
	uint8_t x6040 = UINT8_MAX;
	volatile uint32_t t80 = 2602U;

	t80 = ((x6037<<x6038)/(x6039%x6040));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x6041 = 21U;
	volatile int64_t x6044 = INT64_MIN;

	t81 = ((x6041<<x6042)/(x6043%x6044));

	if (t81 != -21LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x6081 = 5118453672687248LL;
	int8_t x6083 = INT8_MAX;
	volatile uint32_t x6084 = UINT32_MAX;
	static int64_t t82 = -1666773210956LL;

	t82 = ((x6081<<x6082)/(x6083%x6084));

	if (t82 != 80605569648618LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x6109 = 48680475361LLU;
	static uint16_t x6110 = 62U;
	uint32_t x6111 = 2U;
	volatile uint32_t x6112 = 595468476U;

	t83 = ((x6109<<x6110)/(x6111%x6112));

	if (t83 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x6262 = 2;
	static int64_t x6263 = INT64_MIN;
	static uint64_t x6264 = 49517655759LLU;
	uint64_t t84 = 19509553057503LLU;

	t84 = ((x6261<<x6262)/(x6263%x6264));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x6581 = INT8_MAX;
	int64_t x6584 = INT64_MIN;
	volatile int64_t t85 = 1LL;

	t85 = ((x6581<<x6582)/(x6583%x6584));

	if (t85 != 63LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x6665 = 0U;
	volatile int8_t x6666 = 3;
	static volatile int32_t x6667 = 6898431;
	int64_t x6668 = 1734269733597LL;

	t86 = ((x6665<<x6666)/(x6667%x6668));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x6745 = 6U;
	uint32_t x6747 = UINT32_MAX;

	t87 = ((x6745<<x6746)/(x6747%x6748));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6833 = 0;
	volatile int8_t x6834 = 2;
	uint64_t x6835 = 54389LLU;
	int32_t x6836 = -1;
	volatile uint64_t t88 = 16159602LLU;

	t88 = ((x6833<<x6834)/(x6835%x6836));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x6853 = 3U;
	volatile uint16_t x6854 = 0U;
	uint64_t x6855 = 14LLU;
	volatile int64_t x6856 = 465LL;

	t89 = ((x6853<<x6854)/(x6855%x6856));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x6893 = 2826777109831LL;
	uint64_t x6895 = 163756765272LLU;
	static volatile uint64_t t90 = 38910LLU;

	t90 = ((x6893<<x6894)/(x6895%x6896));

	if (t90 != 5158LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x6994 = 11;
	int32_t x6995 = INT32_MAX;
	int64_t x6996 = 1346LL;
	volatile int64_t t91 = -1694657283LL;

	t91 = ((x6993<<x6994)/(x6995%x6996));

	if (t91 != 110284LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x7005 = 76;
	static uint16_t x7006 = 3U;
	uint16_t x7008 = 125U;

	t92 = ((x7005<<x7006)/(x7007%x7008));

	if (t92 != -608) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x7053 = 0;
	uint8_t x7054 = 1U;
	int8_t x7056 = 5;
	int32_t t93 = 267402097;

	t93 = ((x7053<<x7054)/(x7055%x7056));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x7186 = 10U;
	static int16_t x7187 = -1461;

	t94 = ((x7185<<x7186)/(x7187%x7188));

	if (t94 != -6LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x7229 = UINT64_MAX;
	int16_t x7230 = 1;
	volatile int32_t x7231 = -24909740;
	volatile int64_t x7232 = INT64_MIN;
	uint64_t t95 = 497551107899913989LLU;

	t95 = ((x7229<<x7230)/(x7231%x7232));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x7445 = 18868;
	static uint16_t x7446 = 2U;
	static int64_t x7447 = INT64_MAX;
	uint16_t x7448 = 12U;
	volatile int64_t t96 = -5418023841282LL;

	t96 = ((x7445<<x7446)/(x7447%x7448));

	if (t96 != 10781LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x7477 = 964244LLU;
	static volatile uint8_t x7478 = 2U;
	static int64_t x7480 = 14562998LL;
	uint64_t t97 = 20170736475591212LLU;

	t97 = ((x7477<<x7478)/(x7479%x7480));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x7529 = 70985583U;
	int16_t x7530 = 3;
	uint32_t x7532 = 1736U;
	uint32_t t98 = 109367046U;

	t98 = ((x7529<<x7530)/(x7531%x7532));

	if (t98 != 3527233U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x7597 = 14596872LLU;
	static uint8_t x7598 = 3U;
	uint64_t x7599 = 623869685296960173LLU;
	int8_t x7600 = INT8_MAX;

	t99 = ((x7597<<x7598)/(x7599%x7600));

	if (t99 != 1024341LLU) { NG(); } else { ; }
	
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

