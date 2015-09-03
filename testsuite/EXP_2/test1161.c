#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
static uint32_t t1 = 13U;
volatile uint64_t t2 = 22234366LLU;
int16_t x116 = INT16_MIN;
static volatile uint64_t t3 = 14697747960LLU;
int8_t x151 = 0;
int8_t x170 = INT8_MAX;
volatile int64_t x202 = 518LL;
uint8_t x203 = 1U;
volatile uint64_t x204 = 282084941600LLU;
int64_t x368 = -3544858663942LL;
int32_t x440 = INT32_MIN;
uint32_t x502 = 29403910U;
int64_t x504 = INT64_MIN;
volatile uint16_t x530 = 30913U;
volatile int8_t x532 = 8;
uint64_t x573 = 1847936711201192535LLU;
static uint8_t x575 = 1U;
uint64_t x690 = UINT64_MAX;
uint32_t x709 = 64126U;
volatile uint8_t x792 = 109U;
uint64_t x793 = UINT64_MAX;
int16_t x837 = -1;
uint8_t x838 = 0U;
int16_t x925 = INT16_MIN;
volatile int32_t t17 = -259265;
int16_t x989 = -1;
static uint16_t x1030 = 1022U;
uint16_t x1032 = 1U;
uint64_t x1109 = 17257197624174LLU;
volatile uint8_t x1111 = 26U;
int8_t x1122 = 1;
uint16_t x1245 = 22U;
volatile uint16_t x1302 = 1613U;
int8_t x1303 = 6;
volatile int32_t t26 = -5192334;
uint32_t x1517 = UINT32_MAX;
static uint32_t t28 = 2U;
int64_t x1550 = INT64_MAX;
static volatile int32_t t30 = -64736883;
volatile int16_t x1795 = 1;
uint64_t x2015 = 1LLU;
static int64_t x2016 = 79428407039592911LL;
volatile int64_t t34 = 84LL;
static volatile uint8_t x2027 = 10U;
static volatile int32_t t35 = 7547177;
volatile int32_t x2194 = INT32_MAX;
int32_t x2196 = INT32_MIN;
int64_t x2278 = 20980LL;
uint16_t x2291 = 1U;
static volatile int64_t t39 = 749906698030831197LL;
uint64_t x2346 = 211075242128321911LLU;
uint8_t x2383 = 0U;
uint16_t x2384 = 3957U;
static uint64_t x2401 = UINT64_MAX;
uint64_t x2505 = 401LLU;
int8_t x2516 = 16;
int8_t x2521 = INT8_MIN;
int64_t x2665 = INT64_MIN;
uint16_t x2666 = UINT16_MAX;
static uint8_t x2843 = 1U;
uint64_t x2869 = 2783514786310LLU;
static uint64_t x2870 = UINT64_MAX;
int16_t x2885 = INT16_MIN;
int16_t x2962 = INT16_MAX;
uint8_t x3017 = 3U;
int16_t x3049 = INT16_MAX;
int16_t x3101 = INT16_MIN;
uint32_t x3113 = UINT32_MAX;
uint32_t t58 = 56611742U;
volatile int16_t x3325 = 389;
static volatile int32_t t60 = -1;
uint8_t x3403 = 3U;
int8_t x3565 = INT8_MIN;
volatile uint32_t x3568 = 1858716814U;
static volatile uint32_t t64 = 415046U;
static int64_t x3613 = INT64_MAX;
int64_t x3650 = 258051558440024489LL;
uint8_t x3651 = 7U;
int8_t x3652 = INT8_MIN;
int8_t x3825 = INT8_MAX;
int32_t t69 = 904;
int8_t x3914 = INT8_MAX;
int64_t t70 = -27LL;
int16_t x3929 = INT16_MAX;
int8_t x3931 = 1;
int16_t x4032 = INT16_MIN;
int32_t t73 = -6;
volatile int32_t t76 = 669;
volatile uint8_t x4251 = 0U;
static volatile int32_t t78 = 6041654;
static uint16_t x4278 = UINT16_MAX;
volatile uint8_t x4360 = UINT8_MAX;
int8_t x4411 = 3;
volatile int32_t t81 = 126;
uint16_t x4597 = 198U;
int16_t x4657 = -92;
volatile uint64_t x4738 = UINT64_MAX;
static uint64_t t88 = 50611794996262LLU;
int32_t x4784 = INT32_MIN;
int64_t x4827 = 0LL;
int16_t x4828 = INT16_MIN;
volatile int16_t x5067 = 0;
int32_t x5241 = -1;
int16_t x5379 = 4;
uint16_t x5387 = 0U;
uint16_t x5469 = 27400U;


void f0(void) {
	uint16_t x2 = 155U;
	static int16_t x3 = 11;
	int32_t x4 = INT32_MIN;
	int64_t t0 = -297911632991LL;

	t0 = ((x1|(x2>>x3))/x4);

	if (t0 != 4294967296LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x49 = -80;
	volatile uint16_t x50 = UINT16_MAX;
	volatile uint64_t x51 = 3LLU;
	volatile uint32_t x52 = 513U;

	t1 = ((x49|(x50>>x51))/x52);

	if (t1 != 8372255U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x69 = 524935655;
	static volatile uint64_t x70 = 33841144297901LLU;
	uint16_t x71 = 1U;
	volatile int64_t x72 = -4123205589471747LL;

	t2 = ((x69|(x70>>x71))/x72);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x113 = 13532875611675945LLU;
	uint16_t x114 = 4564U;
	volatile uint32_t x115 = 1U;

	t3 = ((x113|(x114>>x115))/x116);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x149 = 441U;
	uint16_t x150 = 495U;
	volatile int8_t x152 = -1;
	int32_t t4 = -55561350;

	t4 = ((x149|(x150>>x151))/x152);

	if (t4 != -511) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x169 = INT16_MIN;
	uint64_t x171 = 3LLU;
	int8_t x172 = 36;
	int32_t t5 = 381255;

	t5 = ((x169|(x170>>x171))/x172);

	if (t5 != -909) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x201 = 1U;
	uint64_t t6 = 1LLU;

	t6 = ((x201|(x202>>x203))/x204);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = 42063708021751870LLU;
	static int16_t x367 = 0;
	uint64_t t7 = 261453785930495571LLU;

	t7 = ((x365|(x366>>x367))/x368);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x437 = INT8_MAX;
	static volatile int16_t x438 = INT16_MAX;
	static uint8_t x439 = 31U;
	volatile int32_t t8 = -832040;

	t8 = ((x437|(x438>>x439))/x440);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x501 = -1678LL;
	volatile uint8_t x503 = 9U;
	volatile int64_t t9 = 939LL;

	t9 = ((x501|(x502>>x503))/x504);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x529 = 121U;
	int8_t x531 = 21;
	int32_t t10 = -1838;

	t10 = ((x529|(x530>>x531))/x532);

	if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x574 = 623U;
	static volatile uint8_t x576 = 4U;
	uint64_t t11 = 659056183784LLU;

	t11 = ((x573|(x574>>x575))/x576);

	if (t11 != 461984177800298205LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x689 = INT8_MIN;
	volatile uint8_t x691 = 6U;
	uint64_t x692 = UINT64_MAX;
	static volatile uint64_t t12 = 26960297869740256LLU;

	t12 = ((x689|(x690>>x691))/x692);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x710 = 1537U;
	uint8_t x711 = 9U;
	int16_t x712 = 1;
	volatile uint32_t t13 = 6633U;

	t13 = ((x709|(x710>>x711))/x712);

	if (t13 != 64127U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x789 = UINT8_MAX;
	uint8_t x790 = 17U;
	uint8_t x791 = 0U;
	static int32_t t14 = 3;

	t14 = ((x789|(x790>>x791))/x792);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x794 = 478709702298876549LLU;
	static uint8_t x795 = 1U;
	int8_t x796 = INT8_MIN;
	uint64_t t15 = 68982882389LLU;

	t15 = ((x793|(x794>>x795))/x796);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x839 = 0U;
	int8_t x840 = INT8_MIN;
	volatile int32_t t16 = -120;

	t16 = ((x837|(x838>>x839))/x840);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x926 = 5;
	uint8_t x927 = 1U;
	int16_t x928 = -1;

	t17 = ((x925|(x926>>x927))/x928);

	if (t17 != 32766) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x949 = -1;
	uint8_t x950 = 1U;
	uint16_t x951 = 4U;
	int8_t x952 = -7;
	int32_t t18 = 7068777;

	t18 = ((x949|(x950>>x951))/x952);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x981 = -1;
	int8_t x982 = 0;
	static uint8_t x983 = 20U;
	int32_t x984 = -1;
	volatile int32_t t19 = 17;

	t19 = ((x981|(x982>>x983))/x984);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x990 = 2U;
	uint8_t x991 = 2U;
	uint32_t x992 = 25U;
	volatile uint32_t t20 = 1386723654U;

	t20 = ((x989|(x990>>x991))/x992);

	if (t20 != 171798691U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1029 = 43434LLU;
	static int8_t x1031 = 1;
	volatile uint64_t t21 = 12442495551LLU;

	t21 = ((x1029|(x1030>>x1031))/x1032);

	if (t21 != 43519LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1110 = INT16_MAX;
	static int16_t x1112 = 26;
	volatile uint64_t t22 = 13046LLU;

	t22 = ((x1109|(x1110>>x1111))/x1112);

	if (t22 != 663738370160LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1121 = -482037;
	uint8_t x1123 = 1U;
	volatile int32_t x1124 = INT32_MIN;
	volatile int32_t t23 = -1228344;

	t23 = ((x1121|(x1122>>x1123))/x1124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1213 = -1;
	uint16_t x1214 = 38U;
	uint16_t x1215 = 1U;
	volatile uint64_t x1216 = UINT64_MAX;
	static volatile uint64_t t24 = 6550103LLU;

	t24 = ((x1213|(x1214>>x1215))/x1216);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1246 = 0U;
	static volatile uint8_t x1247 = 20U;
	static uint32_t x1248 = UINT32_MAX;
	uint32_t t25 = 2451U;

	t25 = ((x1245|(x1246>>x1247))/x1248);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1301 = -1;
	int16_t x1304 = INT16_MAX;

	t26 = ((x1301|(x1302>>x1303))/x1304);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1381 = 2U;
	uint64_t x1382 = 2793012924LLU;
	int8_t x1383 = 0;
	int16_t x1384 = INT16_MIN;
	volatile uint64_t t27 = 518295297228591428LLU;

	t27 = ((x1381|(x1382>>x1383))/x1384);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1518 = UINT16_MAX;
	static uint32_t x1519 = 0U;
	int16_t x1520 = -2651;

	t28 = ((x1517|(x1518>>x1519))/x1520);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1549 = INT64_MIN;
	volatile uint32_t x1551 = 26U;
	static int32_t x1552 = INT32_MIN;
	int64_t t29 = 4025LL;

	t29 = ((x1549|(x1550>>x1551))/x1552);

	if (t29 != 4294967232LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1685 = 3121;
	uint8_t x1686 = 37U;
	uint8_t x1687 = 3U;
	volatile int8_t x1688 = 11;

	t30 = ((x1685|(x1686>>x1687))/x1688);

	if (t30 != 284) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1793 = INT16_MIN;
	static int8_t x1794 = INT8_MAX;
	static uint32_t x1796 = 55596U;
	uint32_t t31 = 16U;

	t31 = ((x1793|(x1794>>x1795))/x1796);

	if (t31 != 77252U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1889 = INT32_MIN;
	uint64_t x1890 = 877LLU;
	volatile uint8_t x1891 = 1U;
	int32_t x1892 = INT32_MIN;
	uint64_t t32 = 12937147LLU;

	t32 = ((x1889|(x1890>>x1891))/x1892);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x2013 = INT32_MIN;
	int16_t x2014 = 180;
	int64_t t33 = 6520082511LL;

	t33 = ((x2013|(x2014>>x2015))/x2016);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2021 = -1;
	int32_t x2022 = INT32_MAX;
	int8_t x2023 = 0;
	int64_t x2024 = INT64_MIN;

	t34 = ((x2021|(x2022>>x2023))/x2024);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2025 = 735U;
	int16_t x2026 = 517;
	int16_t x2028 = INT16_MAX;

	t35 = ((x2025|(x2026>>x2027))/x2028);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2193 = 8354U;
	int8_t x2195 = 9;
	uint32_t t36 = 7U;

	t36 = ((x2193|(x2194>>x2195))/x2196);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2257 = 0U;
	uint16_t x2258 = 222U;
	static uint16_t x2259 = 3U;
	volatile int32_t x2260 = INT32_MIN;
	volatile int32_t t37 = 6823038;

	t37 = ((x2257|(x2258>>x2259))/x2260);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2277 = INT32_MIN;
	static volatile uint8_t x2279 = 23U;
	int16_t x2280 = INT16_MAX;
	static volatile int64_t t38 = -5614105LL;

	t38 = ((x2277|(x2278>>x2279))/x2280);

	if (t38 != -65538LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2289 = -1133535LL;
	static volatile uint16_t x2290 = 53U;
	int32_t x2292 = INT32_MIN;

	t39 = ((x2289|(x2290>>x2291))/x2292);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2345 = 215417036802796LLU;
	int16_t x2347 = 3;
	int32_t x2348 = INT32_MIN;
	uint64_t t40 = 52737LLU;

	t40 = ((x2345|(x2346>>x2347))/x2348);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2381 = INT64_MIN;
	int8_t x2382 = 5;
	volatile int64_t t41 = -2300670487LL;

	t41 = ((x2381|(x2382>>x2383))/x2384);

	if (t41 != -2330900186215510LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2402 = 479U;
	int64_t x2403 = 0LL;
	int64_t x2404 = -1LL;
	uint64_t t42 = 385LLU;

	t42 = ((x2401|(x2402>>x2403))/x2404);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2506 = 1687LLU;
	static uint8_t x2507 = 6U;
	int32_t x2508 = -1;
	uint64_t t43 = 19LLU;

	t43 = ((x2505|(x2506>>x2507))/x2508);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2513 = -1;
	int64_t x2514 = 50114LL;
	volatile uint16_t x2515 = 0U;
	volatile int64_t t44 = -69791803818762LL;

	t44 = ((x2513|(x2514>>x2515))/x2516);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2522 = 7142LL;
	static uint32_t x2523 = 11U;
	static uint64_t x2524 = UINT64_MAX;
	static volatile uint64_t t45 = 161433866LLU;

	t45 = ((x2521|(x2522>>x2523))/x2524);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2601 = UINT16_MAX;
	volatile uint8_t x2602 = UINT8_MAX;
	uint8_t x2603 = 3U;
	uint32_t x2604 = 393613226U;
	volatile uint32_t t46 = 26U;

	t46 = ((x2601|(x2602>>x2603))/x2604);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2667 = 3U;
	static uint16_t x2668 = 1U;
	static int64_t t47 = 54180601776510327LL;

	t47 = ((x2665|(x2666>>x2667))/x2668);

	if (t47 != -9223372036854767617LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2685 = 6385307227LLU;
	volatile int8_t x2686 = 1;
	static uint8_t x2687 = 1U;
	uint16_t x2688 = 982U;
	static uint64_t t48 = 8488760018111746613LLU;

	t48 = ((x2685|(x2686>>x2687))/x2688);

	if (t48 != 6502349LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2709 = 426;
	static uint8_t x2710 = 2U;
	int8_t x2711 = 31;
	uint8_t x2712 = 26U;
	int32_t t49 = -2;

	t49 = ((x2709|(x2710>>x2711))/x2712);

	if (t49 != 16) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2749 = UINT16_MAX;
	static int64_t x2750 = 112LL;
	static uint16_t x2751 = 15U;
	uint64_t x2752 = 32432730326LLU;
	volatile uint64_t t50 = 1575464139LLU;

	t50 = ((x2749|(x2750>>x2751))/x2752);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2841 = 1U;
	int32_t x2842 = 17748;
	volatile int8_t x2844 = INT8_MAX;
	volatile int32_t t51 = 1111816;

	t51 = ((x2841|(x2842>>x2843))/x2844);

	if (t51 != 69) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x2871 = 36U;
	uint16_t x2872 = 26U;
	volatile uint64_t t52 = 9100707593607LLU;

	t52 = ((x2869|(x2870>>x2871))/x2872);

	if (t52 != 107064449181LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x2886 = INT32_MAX;
	uint8_t x2887 = 1U;
	static volatile int16_t x2888 = 35;
	volatile int32_t t53 = -5080;

	t53 = ((x2885|(x2886>>x2887))/x2888);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2961 = 27;
	uint16_t x2963 = 4U;
	uint16_t x2964 = 3U;
	volatile int32_t t54 = 112906;

	t54 = ((x2961|(x2962>>x2963))/x2964);

	if (t54 != 682) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x3018 = INT32_MAX;
	uint64_t x3019 = 1LLU;
	volatile uint16_t x3020 = 811U;
	volatile int32_t t55 = 1940;

	t55 = ((x3017|(x3018>>x3019))/x3020);

	if (t55 != 1323972) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3050 = INT32_MAX;
	static int16_t x3051 = 5;
	int64_t x3052 = 7246LL;
	volatile int64_t t56 = 5975161435LL;

	t56 = ((x3049|(x3050>>x3051))/x3052);

	if (t56 != 9261LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3102 = 0U;
	int8_t x3103 = 9;
	int64_t x3104 = -5451LL;
	int64_t t57 = 41714841854727LL;

	t57 = ((x3101|(x3102>>x3103))/x3104);

	if (t57 != 6LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3114 = 5106U;
	static uint8_t x3115 = 1U;
	static int8_t x3116 = 3;

	t58 = ((x3113|(x3114>>x3115))/x3116);

	if (t58 != 1431655765U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3197 = INT16_MIN;
	volatile uint8_t x3198 = 23U;
	int8_t x3199 = 0;
	int32_t x3200 = INT32_MAX;
	int32_t t59 = 1534143;

	t59 = ((x3197|(x3198>>x3199))/x3200);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3326 = 0;
	int16_t x3327 = 1;
	int8_t x3328 = 34;

	t60 = ((x3325|(x3326>>x3327))/x3328);

	if (t60 != 11) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3337 = 1;
	uint8_t x3338 = 0U;
	uint8_t x3339 = 0U;
	static int8_t x3340 = -60;
	int32_t t61 = 33183470;

	t61 = ((x3337|(x3338>>x3339))/x3340);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x3401 = 112989143852LL;
	uint8_t x3402 = UINT8_MAX;
	int8_t x3404 = INT8_MIN;
	volatile int64_t t62 = 10849448396LL;

	t62 = ((x3401|(x3402>>x3403))/x3404);

	if (t62 != -882727686LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x3473 = 200;
	int64_t x3474 = 5LL;
	int16_t x3475 = 1;
	uint32_t x3476 = 1350995263U;
	volatile int64_t t63 = 193LL;

	t63 = ((x3473|(x3474>>x3475))/x3476);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3566 = 8;
	volatile int32_t x3567 = 15;

	t64 = ((x3565|(x3566>>x3567))/x3568);

	if (t64 != 2U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3614 = 4U;
	uint16_t x3615 = 7U;
	volatile int64_t x3616 = -358672568100913787LL;
	volatile int64_t t65 = 1LL;

	t65 = ((x3613|(x3614>>x3615))/x3616);

	if (t65 != -25LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3649 = -1;
	volatile int64_t t66 = -33579583580726379LL;

	t66 = ((x3649|(x3650>>x3651))/x3652);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3785 = UINT64_MAX;
	int32_t x3786 = INT32_MAX;
	int8_t x3787 = 7;
	uint32_t x3788 = UINT32_MAX;
	static uint64_t t67 = 405222069LLU;

	t67 = ((x3785|(x3786>>x3787))/x3788);

	if (t67 != 4294967297LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3813 = 25U;
	int8_t x3814 = INT8_MAX;
	static uint16_t x3815 = 2U;
	static int64_t x3816 = INT64_MAX;
	int64_t t68 = -4883939054635LL;

	t68 = ((x3813|(x3814>>x3815))/x3816);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3826 = UINT16_MAX;
	uint64_t x3827 = 2LLU;
	int32_t x3828 = INT32_MIN;

	t69 = ((x3825|(x3826>>x3827))/x3828);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x3913 = INT64_MIN;
	uint16_t x3915 = 5U;
	uint16_t x3916 = 67U;

	t70 = ((x3913|(x3914>>x3915))/x3916);

	if (t70 != -137662269206787698LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3930 = INT16_MAX;
	static int64_t x3932 = INT64_MIN;
	int64_t t71 = 51356116272336LL;

	t71 = ((x3929|(x3930>>x3931))/x3932);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4029 = 397528;
	uint64_t x4030 = UINT64_MAX;
	int8_t x4031 = 3;
	volatile uint64_t t72 = 1511236283684724661LLU;

	t72 = ((x4029|(x4030>>x4031))/x4032);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4141 = -171219;
	int32_t x4142 = 32714509;
	int32_t x4143 = 1;
	uint16_t x4144 = UINT16_MAX;

	t73 = ((x4141|(x4142>>x4143))/x4144);

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4209 = 49U;
	uint32_t x4210 = UINT32_MAX;
	static volatile uint8_t x4211 = 15U;
	static int8_t x4212 = -1;
	static uint32_t t74 = 141408U;

	t74 = ((x4209|(x4210>>x4211))/x4212);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4217 = INT32_MIN;
	static int32_t x4218 = 119661799;
	static volatile uint8_t x4219 = 4U;
	uint16_t x4220 = 4253U;
	volatile int32_t t75 = 6790;

	t75 = ((x4217|(x4218>>x4219))/x4220);

	if (t75 != -503175) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4233 = 107U;
	static uint16_t x4234 = 1U;
	uint16_t x4235 = 0U;
	static int8_t x4236 = INT8_MIN;

	t76 = ((x4233|(x4234>>x4235))/x4236);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4249 = INT8_MIN;
	volatile uint64_t x4250 = 139184589778976606LLU;
	uint64_t x4252 = UINT64_MAX;
	uint64_t t77 = 316917754080659LLU;

	t77 = ((x4249|(x4250>>x4251))/x4252);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x4269 = UINT8_MAX;
	uint16_t x4270 = UINT16_MAX;
	uint32_t x4271 = 0U;
	int16_t x4272 = INT16_MIN;

	t78 = ((x4269|(x4270>>x4271))/x4272);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4277 = INT16_MAX;
	uint8_t x4279 = 30U;
	int64_t x4280 = -1LL;
	volatile int64_t t79 = -21LL;

	t79 = ((x4277|(x4278>>x4279))/x4280);

	if (t79 != -32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4357 = -1418055039214LL;
	uint64_t x4358 = 82LLU;
	uint32_t x4359 = 2U;
	uint64_t t80 = 1530893302LLU;

	t80 = ((x4357|(x4358>>x4359))/x4360);

	if (t80 != 72340167277076519LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4409 = 13;
	int8_t x4410 = INT8_MAX;
	uint16_t x4412 = 718U;

	t81 = ((x4409|(x4410>>x4411))/x4412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4413 = UINT64_MAX;
	static uint32_t x4414 = UINT32_MAX;
	uint16_t x4415 = 1U;
	int16_t x4416 = INT16_MIN;
	uint64_t t82 = 521511314302LLU;

	t82 = ((x4413|(x4414>>x4415))/x4416);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x4437 = -1;
	volatile int8_t x4438 = INT8_MAX;
	uint8_t x4439 = 0U;
	static volatile int32_t x4440 = INT32_MIN;
	static int32_t t83 = -458893503;

	t83 = ((x4437|(x4438>>x4439))/x4440);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x4449 = 540LLU;
	uint32_t x4450 = 189822U;
	int8_t x4451 = 3;
	int32_t x4452 = 317748250;
	static uint64_t t84 = 4357469504LLU;

	t84 = ((x4449|(x4450>>x4451))/x4452);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x4598 = 1LLU;
	int8_t x4599 = 3;
	int8_t x4600 = 11;
	uint64_t t85 = 10136LLU;

	t85 = ((x4597|(x4598>>x4599))/x4600);

	if (t85 != 18LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4658 = UINT8_MAX;
	int32_t x4659 = 0;
	int32_t x4660 = INT32_MIN;
	int32_t t86 = 50845;

	t86 = ((x4657|(x4658>>x4659))/x4660);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x4665 = -3060135;
	int32_t x4666 = 56544;
	volatile int8_t x4667 = 13;
	int8_t x4668 = -10;
	int32_t t87 = 917156665;

	t87 = ((x4665|(x4666>>x4667))/x4668);

	if (t87 != 306012) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4737 = INT64_MIN;
	static uint8_t x4739 = 0U;
	static uint32_t x4740 = UINT32_MAX;

	t88 = ((x4737|(x4738>>x4739))/x4740);

	if (t88 != 4294967297LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x4781 = INT32_MAX;
	int32_t x4782 = INT32_MAX;
	static int32_t x4783 = 25;
	volatile int32_t t89 = 0;

	t89 = ((x4781|(x4782>>x4783))/x4784);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4825 = INT8_MAX;
	static uint16_t x4826 = 7U;
	static int32_t t90 = 1;

	t90 = ((x4825|(x4826>>x4827))/x4828);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4853 = -106864LL;
	volatile int8_t x4854 = 0;
	uint8_t x4855 = 1U;
	int16_t x4856 = INT16_MAX;
	volatile int64_t t91 = -744LL;

	t91 = ((x4853|(x4854>>x4855))/x4856);

	if (t91 != -3LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4889 = INT32_MAX;
	int64_t x4890 = 1191457357261LL;
	volatile uint8_t x4891 = 0U;
	static int64_t x4892 = -1781442178275866LL;
	volatile int64_t t92 = 202043132971244LL;

	t92 = ((x4889|(x4890>>x4891))/x4892);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x5065 = INT64_MIN;
	static volatile uint8_t x5066 = 48U;
	uint16_t x5068 = UINT16_MAX;
	int64_t t93 = 31285938381LL;

	t93 = ((x5065|(x5066>>x5067))/x5068);

	if (t93 != -140739635871744LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x5137 = -3694LL;
	static uint32_t x5138 = 5983553U;
	int32_t x5139 = 14;
	int8_t x5140 = -1;
	volatile int64_t t94 = 17019303336974LL;

	t94 = ((x5137|(x5138>>x5139))/x5140);

	if (t94 != 3585LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5242 = INT64_MAX;
	int8_t x5243 = 0;
	int32_t x5244 = INT32_MIN;
	static volatile int64_t t95 = -231341073326LL;

	t95 = ((x5241|(x5242>>x5243))/x5244);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5377 = 2;
	int16_t x5378 = 1886;
	static int64_t x5380 = -199314356295433LL;
	static volatile int64_t t96 = -98615550743LL;

	t96 = ((x5377|(x5378>>x5379))/x5380);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x5385 = INT16_MAX;
	uint8_t x5386 = UINT8_MAX;
	int8_t x5388 = -1;
	volatile int32_t t97 = -35478864;

	t97 = ((x5385|(x5386>>x5387))/x5388);

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x5470 = UINT32_MAX;
	static int8_t x5471 = 0;
	static int8_t x5472 = INT8_MIN;
	uint32_t t98 = 12U;

	t98 = ((x5469|(x5470>>x5471))/x5472);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x5501 = -1;
	uint16_t x5502 = 15U;
	int8_t x5503 = 11;
	uint8_t x5504 = 2U;
	int32_t t99 = -22504;

	t99 = ((x5501|(x5502>>x5503))/x5504);

	if (t99 != 0) { NG(); } else { ; }
	
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

