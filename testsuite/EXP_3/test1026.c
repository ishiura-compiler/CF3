#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x47 = INT8_MAX;
uint16_t x114 = 7766U;
int16_t x270 = INT16_MIN;
uint64_t x314 = 56LLU;
volatile uint64_t t4 = 293892LLU;
static uint16_t x361 = 971U;
volatile uint64_t t5 = 227LLU;
static volatile int8_t x389 = INT8_MIN;
uint8_t x407 = 7U;
int32_t x438 = -1;
int8_t x447 = INT8_MAX;
int32_t t9 = 138508109;
int32_t x457 = INT32_MAX;
uint32_t x459 = UINT32_MAX;
uint32_t t11 = UINT32_MAX;
int16_t x591 = 5;
volatile int16_t x645 = 6128;
volatile int16_t x648 = 28;
int32_t t14 = -37289792;
int8_t x669 = INT8_MAX;
uint8_t x753 = 1U;
int32_t x755 = 3635;
uint16_t x816 = 3U;
int32_t x916 = 2;
int32_t x945 = -2237;
static int32_t x947 = INT32_MAX;
int16_t x987 = INT16_MAX;
volatile int32_t t24 = -1089792;
int16_t x1641 = INT16_MIN;
volatile int16_t x1726 = 713;
volatile int8_t x1738 = -1;
uint8_t x1813 = 0U;
int64_t x1814 = INT64_MIN;
volatile int64_t t33 = 1533967129245LL;
static uint16_t x1878 = 9U;
uint8_t x1879 = 105U;
static uint8_t x1880 = 1U;
int32_t x2089 = -1;
uint16_t x2168 = 11U;
int64_t t37 = 0LL;
uint16_t x2337 = UINT16_MAX;
static int32_t x2356 = 0;
int32_t t39 = 8179;
int8_t x2705 = INT8_MIN;
static int16_t x2706 = INT16_MAX;
uint64_t x2723 = 3125835LLU;
int32_t x2734 = INT32_MIN;
volatile uint8_t x2795 = 9U;
int32_t t44 = -355;
uint8_t x2807 = UINT8_MAX;
uint16_t x2808 = 14U;
int32_t x3050 = INT32_MIN;
int32_t x3135 = INT32_MAX;
static volatile uint32_t t49 = 3U;
int8_t x3166 = -9;
volatile int32_t t50 = 3710;
int32_t t51 = 3384;
uint64_t t52 = 2597970630LLU;
int64_t x3266 = -1LL;
static int8_t x3309 = -21;
static volatile uint8_t x3390 = 61U;
int32_t t55 = 91526654;
static volatile int16_t x3518 = -1;
static int32_t x3556 = 10;
uint64_t x3594 = 120591042143LLU;
static uint16_t x3625 = 1065U;
int32_t x3627 = 16039;
static int32_t x3741 = -960;
int8_t x3744 = 0;
static volatile int8_t x3756 = 29;
uint64_t t63 = 239250480971515LLU;
volatile int32_t x3798 = 23;
uint8_t x3799 = UINT8_MAX;
volatile uint8_t x3800 = 4U;
uint64_t x3842 = 186515804477434LLU;
static int8_t x3844 = 7;
int64_t x3897 = -1LL;
static int32_t x3898 = 3021043;
uint32_t x3917 = 29068U;
uint32_t x3918 = 2727U;
uint32_t t67 = 22495765U;
int64_t x3938 = 360LL;
static volatile int64_t t68 = -6301670603361619LL;
uint8_t x3950 = 112U;
int16_t x3952 = 0;
volatile uint64_t t70 = 306281LLU;
uint8_t x4064 = 1U;
uint16_t x4290 = UINT16_MAX;
volatile uint8_t x4324 = 5U;
static int64_t t78 = -24935058LL;
volatile int8_t x4421 = 1;
static uint32_t t81 = 35U;
uint64_t x4577 = 112492LLU;
int16_t x4579 = 343;
int32_t t85 = 32963454;
int8_t x4665 = -1;
int16_t x4795 = 3066;
uint16_t x4796 = 27U;
uint32_t x4854 = 1993790154U;
static uint8_t x4856 = 5U;
int8_t x4915 = 3;
int32_t x4917 = INT32_MAX;
int8_t x4920 = 16;
volatile uint32_t x4954 = 135652U;
int32_t x5134 = -650680671;
uint8_t x5135 = 1U;
int8_t x5275 = 4;


void f0(void) {
	static volatile int32_t x45 = -1;
	static int32_t x46 = -1;
	uint32_t x48 = 2U;
	static volatile int32_t t0 = 6355;

	t0 = ((x45+x46)|(x47>>x48));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x113 = -1;
	int64_t x115 = 155559LL;
	int8_t x116 = 13;
	int64_t t1 = -24LL;

	t1 = ((x113+x114)|(x115>>x116));

	if (t1 != 7767LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x157 = 54U;
	volatile int16_t x158 = INT16_MAX;
	int16_t x159 = INT16_MAX;
	int8_t x160 = 24;
	volatile int32_t t2 = 2654;

	t2 = ((x157+x158)|(x159>>x160));

	if (t2 != 32821) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x269 = 2;
	uint8_t x271 = UINT8_MAX;
	static volatile int8_t x272 = 12;
	int32_t t3 = -12;

	t3 = ((x269+x270)|(x271>>x272));

	if (t3 != -32766) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x313 = 5027U;
	volatile int32_t x315 = 6578462;
	int64_t x316 = 4LL;

	t4 = ((x313+x314)|(x315>>x316));

	if (t4 != 415707LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x362 = 1436629759LLU;
	volatile int16_t x363 = INT16_MAX;
	int8_t x364 = 4;

	t5 = ((x361+x362)|(x363>>x364));

	if (t5 != 1436631039LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x390 = -988;
	uint16_t x391 = 367U;
	static uint16_t x392 = 2U;
	int32_t t6 = -257345588;

	t6 = ((x389+x390)|(x391>>x392));

	if (t6 != -1025) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x405 = 0;
	uint8_t x406 = 122U;
	int8_t x408 = 7;
	volatile int32_t t7 = 553596;

	t7 = ((x405+x406)|(x407>>x408));

	if (t7 != 122) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x437 = -1;
	static uint32_t x439 = 36385249U;
	int8_t x440 = 15;
	static volatile uint32_t t8 = 313092U;

	t8 = ((x437+x438)|(x439>>x440));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x445 = 26U;
	int32_t x446 = INT32_MIN;
	int32_t x448 = 0;

	t9 = ((x445+x446)|(x447>>x448));

	if (t9 != -2147483521) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x449 = UINT64_MAX;
	int8_t x450 = 2;
	static uint16_t x451 = UINT16_MAX;
	volatile uint8_t x452 = 6U;
	volatile uint64_t t10 = 47373120119259LLU;

	t10 = ((x449+x450)|(x451>>x452));

	if (t10 != 1023LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x458 = 202924940U;
	static int8_t x460 = 1;

	t11 = ((x457+x458)|(x459>>x460));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x589 = -1LL;
	uint32_t x590 = 4U;
	uint8_t x592 = 0U;
	volatile int64_t t12 = 1059917365827297LL;

	t12 = ((x589+x590)|(x591>>x592));

	if (t12 != 7LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x641 = UINT16_MAX;
	static int8_t x642 = INT8_MIN;
	volatile int64_t x643 = INT64_MAX;
	uint8_t x644 = 1U;
	volatile int64_t t13 = -216396468070700971LL;

	t13 = ((x641+x642)|(x643>>x644));

	if (t13 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x646 = 15201;
	static uint8_t x647 = UINT8_MAX;

	t14 = ((x645+x646)|(x647>>x648));

	if (t14 != 21329) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x670 = INT8_MAX;
	volatile uint8_t x671 = 12U;
	int8_t x672 = 1;
	volatile int32_t t15 = -11;

	t15 = ((x669+x670)|(x671>>x672));

	if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x754 = 2775U;
	static int8_t x756 = 0;
	volatile int32_t t16 = -116193504;

	t16 = ((x753+x754)|(x755>>x756));

	if (t16 != 3835) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x813 = INT8_MAX;
	int8_t x814 = 1;
	int16_t x815 = INT16_MAX;
	volatile int32_t t17 = 1905;

	t17 = ((x813+x814)|(x815>>x816));

	if (t17 != 4095) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x913 = 8;
	int8_t x914 = 1;
	uint16_t x915 = UINT16_MAX;
	int32_t t18 = -79696840;

	t18 = ((x913+x914)|(x915>>x916));

	if (t18 != 16383) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x946 = 593;
	uint8_t x948 = 18U;
	int32_t t19 = 49;

	t19 = ((x945+x946)|(x947>>x948));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x985 = INT32_MIN;
	uint32_t x986 = 6587482U;
	uint32_t x988 = 1U;
	static volatile uint32_t t20 = 88U;

	t20 = ((x985+x986)|(x987>>x988));

	if (t20 != 2154086399U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1061 = INT16_MAX;
	uint64_t x1062 = 657313LLU;
	int16_t x1063 = 1056;
	uint8_t x1064 = 13U;
	volatile uint64_t t21 = 118LLU;

	t21 = ((x1061+x1062)|(x1063>>x1064));

	if (t21 != 690080LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1077 = 975092064LLU;
	int16_t x1078 = INT16_MIN;
	uint8_t x1079 = 32U;
	uint16_t x1080 = 0U;
	uint64_t t22 = 0LLU;

	t22 = ((x1077+x1078)|(x1079>>x1080));

	if (t22 != 975059296LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1109 = 12312U;
	uint32_t x1110 = UINT32_MAX;
	uint64_t x1111 = 91023034704LLU;
	static uint8_t x1112 = 7U;
	static volatile uint64_t t23 = 26275433621349LLU;

	t23 = ((x1109+x1110)|(x1111>>x1112));

	if (t23 != 711129751LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1201 = INT8_MAX;
	static volatile uint16_t x1202 = 11908U;
	uint8_t x1203 = UINT8_MAX;
	static int16_t x1204 = 24;

	t24 = ((x1201+x1202)|(x1203>>x1204));

	if (t24 != 12035) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1237 = 19;
	int16_t x1238 = -1;
	uint8_t x1239 = 99U;
	uint8_t x1240 = 0U;
	int32_t t25 = -22723;

	t25 = ((x1237+x1238)|(x1239>>x1240));

	if (t25 != 115) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1305 = UINT32_MAX;
	int8_t x1306 = 7;
	uint64_t x1307 = UINT64_MAX;
	int8_t x1308 = 3;
	uint64_t t26 = 2LLU;

	t26 = ((x1305+x1306)|(x1307>>x1308));

	if (t26 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1317 = -1;
	uint8_t x1318 = 7U;
	int16_t x1319 = 2;
	int16_t x1320 = 1;
	volatile int32_t t27 = 363545877;

	t27 = ((x1317+x1318)|(x1319>>x1320));

	if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1642 = -1;
	uint8_t x1643 = 3U;
	uint16_t x1644 = 29U;
	volatile int32_t t28 = 1933524;

	t28 = ((x1641+x1642)|(x1643>>x1644));

	if (t28 != -32769) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1717 = INT64_MAX;
	uint64_t x1718 = 15137LLU;
	uint8_t x1719 = 12U;
	static uint8_t x1720 = 1U;
	uint64_t t29 = 439LLU;

	t29 = ((x1717+x1718)|(x1719>>x1720));

	if (t29 != 9223372036854790950LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1725 = 1814;
	int32_t x1727 = INT32_MAX;
	uint8_t x1728 = 30U;
	int32_t t30 = 100651;

	t30 = ((x1725+x1726)|(x1727>>x1728));

	if (t30 != 2527) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1737 = -1;
	volatile int32_t x1739 = 0;
	uint16_t x1740 = 1U;
	volatile int32_t t31 = 170672;

	t31 = ((x1737+x1738)|(x1739>>x1740));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1761 = UINT64_MAX;
	volatile int32_t x1762 = -3825;
	int32_t x1763 = INT32_MAX;
	uint16_t x1764 = 7U;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = ((x1761+x1762)|(x1763>>x1764));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1815 = 6LL;
	uint32_t x1816 = 0U;

	t33 = ((x1813+x1814)|(x1815>>x1816));

	if (t33 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1857 = 14366;
	volatile uint8_t x1858 = UINT8_MAX;
	volatile uint32_t x1859 = UINT32_MAX;
	uint8_t x1860 = 1U;
	static uint32_t t34 = 120U;

	t34 = ((x1857+x1858)|(x1859>>x1860));

	if (t34 != 2147483647U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1877 = -887;
	volatile int32_t t35 = -3435;

	t35 = ((x1877+x1878)|(x1879>>x1880));

	if (t35 != -842) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2090 = INT8_MAX;
	int64_t x2091 = 28995028539309197LL;
	uint8_t x2092 = 26U;
	int64_t t36 = -3640LL;

	t36 = ((x2089+x2090)|(x2091>>x2092));

	if (t36 != 432059646LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2165 = -2350647LL;
	uint32_t x2166 = 3457201U;
	uint32_t x2167 = 107623U;

	t37 = ((x2165+x2166)|(x2167>>x2168));

	if (t37 != 1106558LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2338 = -1;
	uint64_t x2339 = 2439383LLU;
	volatile int64_t x2340 = 1LL;
	uint64_t t38 = 1464689465409678LLU;

	t38 = ((x2337+x2338)|(x2339>>x2340));

	if (t38 != 1245183LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2353 = INT16_MIN;
	int32_t x2354 = -1;
	volatile uint8_t x2355 = 0U;

	t39 = ((x2353+x2354)|(x2355>>x2356));

	if (t39 != -32769) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2561 = INT16_MAX;
	uint16_t x2562 = 348U;
	int64_t x2563 = INT64_MAX;
	static int16_t x2564 = 9;
	volatile int64_t t40 = -64128LL;

	t40 = ((x2561+x2562)|(x2563>>x2564));

	if (t40 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2707 = 155837306LLU;
	static int8_t x2708 = 3;
	uint64_t t41 = 32017077690LLU;

	t41 = ((x2705+x2706)|(x2707>>x2708));

	if (t41 != 19496831LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2721 = INT16_MIN;
	int8_t x2722 = 60;
	volatile uint16_t x2724 = 2U;
	volatile uint64_t t42 = 6LLU;

	t42 = ((x2721+x2722)|(x2723>>x2724));

	if (t42 != 18446744073709546686LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2733 = 8675540177310771LLU;
	uint32_t x2735 = 389754493U;
	int16_t x2736 = 0;
	volatile uint64_t t43 = 1LLU;

	t43 = ((x2733+x2734)|(x2735>>x2736));

	if (t43 != 8675538117590655LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x2793 = 1U;
	volatile int8_t x2794 = -1;
	static volatile uint16_t x2796 = 0U;

	t44 = ((x2793+x2794)|(x2795>>x2796));

	if (t44 != 9) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2805 = -3214700;
	static uint64_t x2806 = 41LLU;
	volatile uint64_t t45 = 3627608693472549074LLU;

	t45 = ((x2805+x2806)|(x2807>>x2808));

	if (t45 != 18446744073706336957LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2893 = -51;
	static uint8_t x2894 = 62U;
	volatile uint32_t x2895 = 1014494U;
	uint16_t x2896 = 0U;
	uint32_t t46 = 11301U;

	t46 = ((x2893+x2894)|(x2895>>x2896));

	if (t46 != 1014495U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x2957 = -1;
	int16_t x2958 = INT16_MIN;
	static int16_t x2959 = INT16_MAX;
	int8_t x2960 = 0;
	static volatile int32_t t47 = -5891323;

	t47 = ((x2957+x2958)|(x2959>>x2960));

	if (t47 != -32769) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3049 = 6U;
	uint16_t x3051 = 99U;
	uint32_t x3052 = 0U;
	volatile int32_t t48 = 28;

	t48 = ((x3049+x3050)|(x3051>>x3052));

	if (t48 != -2147483545) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x3133 = UINT16_MAX;
	uint32_t x3134 = 40624947U;
	static volatile int8_t x3136 = 3;

	t49 = ((x3133+x3134)|(x3135>>x3136));

	if (t49 != 268435455U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3165 = 137305210;
	int8_t x3167 = INT8_MAX;
	uint64_t x3168 = 1LLU;

	t50 = ((x3165+x3166)|(x3167>>x3168));

	if (t50 != 137305215) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3197 = UINT16_MAX;
	static int32_t x3198 = INT32_MIN;
	volatile int8_t x3199 = INT8_MAX;
	uint32_t x3200 = 30U;

	t51 = ((x3197+x3198)|(x3199>>x3200));

	if (t51 != -2147418113) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3249 = 19LLU;
	int16_t x3250 = -6;
	static uint8_t x3251 = UINT8_MAX;
	static int32_t x3252 = 14;

	t52 = ((x3249+x3250)|(x3251>>x3252));

	if (t52 != 13LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3265 = -1;
	uint32_t x3267 = 517623575U;
	uint16_t x3268 = 11U;
	volatile int64_t t53 = 715984030037905LL;

	t53 = ((x3265+x3266)|(x3267>>x3268));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3310 = INT16_MIN;
	volatile int64_t x3311 = INT64_MAX;
	uint32_t x3312 = 27U;
	int64_t t54 = -51LL;

	t54 = ((x3309+x3310)|(x3311>>x3312));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3389 = INT16_MIN;
	volatile int32_t x3391 = 256312490;
	static int16_t x3392 = 1;

	t55 = ((x3389+x3390)|(x3391>>x3392));

	if (t55 != -32131) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3457 = INT16_MIN;
	int8_t x3458 = INT8_MAX;
	volatile uint16_t x3459 = 2884U;
	static uint8_t x3460 = 24U;
	int32_t t56 = 726210914;

	t56 = ((x3457+x3458)|(x3459>>x3460));

	if (t56 != -32641) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3493 = 0U;
	uint64_t x3494 = UINT64_MAX;
	uint8_t x3495 = UINT8_MAX;
	volatile int8_t x3496 = 2;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x3493+x3494)|(x3495>>x3496));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3517 = UINT64_MAX;
	uint32_t x3519 = 1102286558U;
	uint8_t x3520 = 1U;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = ((x3517+x3518)|(x3519>>x3520));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3553 = 767759553U;
	int32_t x3554 = -7497221;
	uint8_t x3555 = 47U;
	uint32_t t59 = 410571753U;

	t59 = ((x3553+x3554)|(x3555>>x3556));

	if (t59 != 760262332U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3593 = UINT32_MAX;
	static volatile uint64_t x3595 = 40279774977976LLU;
	int32_t x3596 = 0;
	uint64_t t60 = 126846834024310209LLU;

	t60 = ((x3593+x3594)|(x3595>>x3596));

	if (t60 != 40404366778366LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3626 = -1;
	int32_t x3628 = 7;
	int32_t t61 = 691;

	t61 = ((x3625+x3626)|(x3627>>x3628));

	if (t61 != 1149) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3742 = -518;
	int16_t x3743 = 7766;
	int32_t t62 = 0;

	t62 = ((x3741+x3742)|(x3743>>x3744));

	if (t62 != -386) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3753 = INT64_MIN;
	static volatile uint64_t x3754 = 15160712243LLU;
	uint8_t x3755 = UINT8_MAX;

	t63 = ((x3753+x3754)|(x3755>>x3756));

	if (t63 != 9223372052015488051LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3797 = 173298024745821LLU;
	static uint64_t t64 = 1154446774LLU;

	t64 = ((x3797+x3798)|(x3799>>x3800));

	if (t64 != 173298024745855LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3841 = 1;
	int32_t x3843 = INT32_MAX;
	volatile uint64_t t65 = 314008LLU;

	t65 = ((x3841+x3842)|(x3843>>x3844));

	if (t65 != 186515816710143LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3899 = 27365801;
	int8_t x3900 = 1;
	volatile int64_t t66 = -14LL;

	t66 = ((x3897+x3898)|(x3899>>x3900));

	if (t66 != 16701686LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3919 = 2619U;
	uint8_t x3920 = 6U;

	t67 = ((x3917+x3918)|(x3919>>x3920));

	if (t67 != 31803U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x3937 = INT16_MIN;
	static uint8_t x3939 = UINT8_MAX;
	uint16_t x3940 = 0U;

	t68 = ((x3937+x3938)|(x3939>>x3940));

	if (t68 != -32257LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3941 = INT32_MIN;
	int32_t x3942 = 248;
	volatile uint32_t x3943 = 234211761U;
	uint8_t x3944 = 0U;
	volatile uint32_t t69 = 58U;

	t69 = ((x3941+x3942)|(x3943>>x3944));

	if (t69 != 2381695481U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x3949 = 6680015536296LLU;
	int8_t x3951 = INT8_MAX;

	t70 = ((x3949+x3950)|(x3951>>x3952));

	if (t70 != 6680015536511LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4061 = 4U;
	static int32_t x4062 = -53325;
	int64_t x4063 = 1937367755413LL;
	volatile int64_t t71 = -2744038LL;

	t71 = ((x4061+x4062)|(x4063>>x4064));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x4109 = 33U;
	static int8_t x4110 = -1;
	static uint16_t x4111 = 5979U;
	int32_t x4112 = 2;
	int32_t t72 = 3;

	t72 = ((x4109+x4110)|(x4111>>x4112));

	if (t72 != 1526) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x4269 = UINT16_MAX;
	int8_t x4270 = INT8_MIN;
	int8_t x4271 = INT8_MAX;
	static uint16_t x4272 = 12U;
	int32_t t73 = -99;

	t73 = ((x4269+x4270)|(x4271>>x4272));

	if (t73 != 65407) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4289 = 0U;
	static volatile uint8_t x4291 = 6U;
	uint8_t x4292 = 11U;
	int32_t t74 = 1;

	t74 = ((x4289+x4290)|(x4291>>x4292));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x4297 = INT8_MIN;
	int16_t x4298 = -8;
	static int32_t x4299 = INT32_MAX;
	uint8_t x4300 = 1U;
	static int32_t t75 = -33878928;

	t75 = ((x4297+x4298)|(x4299>>x4300));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4313 = UINT8_MAX;
	static int16_t x4314 = INT16_MAX;
	volatile uint64_t x4315 = UINT64_MAX;
	int8_t x4316 = 2;
	volatile uint64_t t76 = 3954424926197LLU;

	t76 = ((x4313+x4314)|(x4315>>x4316));

	if (t76 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4321 = -1845;
	uint16_t x4322 = 4376U;
	uint32_t x4323 = 500272803U;
	static volatile uint32_t t77 = 21512280U;

	t77 = ((x4321+x4322)|(x4323>>x4324));

	if (t77 != 15633911U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4377 = INT8_MIN;
	uint8_t x4378 = UINT8_MAX;
	int64_t x4379 = INT64_MAX;
	uint8_t x4380 = 53U;

	t78 = ((x4377+x4378)|(x4379>>x4380));

	if (t78 != 1023LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x4393 = -10;
	volatile uint32_t x4394 = UINT32_MAX;
	uint16_t x4395 = UINT16_MAX;
	volatile uint16_t x4396 = 8U;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = ((x4393+x4394)|(x4395>>x4396));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4422 = 4849557;
	volatile uint16_t x4423 = UINT16_MAX;
	static uint32_t x4424 = 5U;
	volatile int32_t t80 = 1453;

	t80 = ((x4421+x4422)|(x4423>>x4424));

	if (t80 != 4849663) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x4425 = 56;
	int16_t x4426 = -1;
	uint32_t x4427 = UINT32_MAX;
	int8_t x4428 = 1;

	t81 = ((x4425+x4426)|(x4427>>x4428));

	if (t81 != 2147483647U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4429 = -1LL;
	volatile uint32_t x4430 = 975766542U;
	static int64_t x4431 = 1246LL;
	static uint16_t x4432 = 12U;
	int64_t t82 = -69500LL;

	t82 = ((x4429+x4430)|(x4431>>x4432));

	if (t82 != 975766541LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4578 = UINT16_MAX;
	static uint32_t x4580 = 15U;
	static uint64_t t83 = 535183979740717872LLU;

	t83 = ((x4577+x4578)|(x4579>>x4580));

	if (t83 != 178027LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x4581 = 3U;
	uint64_t x4582 = 2329LLU;
	static volatile int8_t x4583 = INT8_MAX;
	int16_t x4584 = 1;
	volatile uint64_t t84 = 1867131485654567316LLU;

	t84 = ((x4581+x4582)|(x4583>>x4584));

	if (t84 != 2367LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x4609 = 0U;
	static int8_t x4610 = -15;
	int16_t x4611 = 1;
	static uint16_t x4612 = 0U;

	t85 = ((x4609+x4610)|(x4611>>x4612));

	if (t85 != -15) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4613 = 71698860U;
	uint8_t x4614 = 0U;
	volatile int16_t x4615 = INT16_MAX;
	uint8_t x4616 = 5U;
	uint32_t t86 = 17183478U;

	t86 = ((x4613+x4614)|(x4615>>x4616));

	if (t86 != 71699455U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x4666 = 10U;
	int32_t x4667 = INT32_MAX;
	uint8_t x4668 = 2U;
	uint32_t t87 = 10U;

	t87 = ((x4665+x4666)|(x4667>>x4668));

	if (t87 != 536870911U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4737 = 6228221LLU;
	int32_t x4738 = INT32_MAX;
	uint64_t x4739 = 3456696741790048LLU;
	int8_t x4740 = 1;
	static volatile uint64_t t88 = 6LLU;

	t88 = ((x4737+x4738)|(x4739>>x4740));

	if (t88 != 1728350523427068LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4793 = 0U;
	int16_t x4794 = INT16_MAX;
	volatile int32_t t89 = -112147621;

	t89 = ((x4793+x4794)|(x4795>>x4796));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4853 = -1;
	int32_t x4855 = INT32_MAX;
	volatile uint32_t t90 = 5U;

	t90 = ((x4853+x4854)|(x4855>>x4856));

	if (t90 != 2013265919U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4881 = INT16_MAX;
	int64_t x4882 = -53896233688LL;
	uint8_t x4883 = 54U;
	uint8_t x4884 = 18U;
	int64_t t91 = 40753LL;

	t91 = ((x4881+x4882)|(x4883>>x4884));

	if (t91 != -53896200921LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4913 = 3574048U;
	int32_t x4914 = -201593186;
	int8_t x4916 = 0;
	volatile uint32_t t92 = 7421U;

	t92 = ((x4913+x4914)|(x4915>>x4916));

	if (t92 != 4096948159U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4918 = 906331U;
	volatile uint64_t x4919 = UINT64_MAX;
	static uint64_t t93 = 2085381225768290LLU;

	t93 = ((x4917+x4918)|(x4919>>x4920));

	if (t93 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4953 = INT64_MIN;
	uint16_t x4955 = 219U;
	int64_t x4956 = 5LL;
	volatile int64_t t94 = 2048728761821733461LL;

	t94 = ((x4953+x4954)|(x4955>>x4956));

	if (t94 != -9223372036854640154LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5041 = 32135U;
	static int32_t x5042 = INT32_MIN;
	int8_t x5043 = 17;
	int64_t x5044 = 1LL;
	volatile uint32_t t95 = 78819381U;

	t95 = ((x5041+x5042)|(x5043>>x5044));

	if (t95 != 2147515791U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5077 = INT64_MIN;
	volatile uint16_t x5078 = 3U;
	volatile uint64_t x5079 = 146LLU;
	uint64_t x5080 = 1LLU;
	static volatile uint64_t t96 = 44944980LLU;

	t96 = ((x5077+x5078)|(x5079>>x5080));

	if (t96 != 9223372036854775883LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5133 = INT16_MAX;
	uint8_t x5136 = 16U;
	int32_t t97 = -31;

	t97 = ((x5133+x5134)|(x5135>>x5136));

	if (t97 != -650647904) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5273 = -19653114LL;
	int16_t x5274 = INT16_MIN;
	uint16_t x5276 = 5U;
	int64_t t98 = 15941LL;

	t98 = ((x5273+x5274)|(x5275>>x5276));

	if (t98 != -19685882LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x5369 = 14034U;
	volatile uint8_t x5370 = UINT8_MAX;
	uint16_t x5371 = 615U;
	volatile uint16_t x5372 = 27U;
	uint32_t t99 = 384687U;

	t99 = ((x5369+x5370)|(x5371>>x5372));

	if (t99 != 14289U) { NG(); } else { ; }
	
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

