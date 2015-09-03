#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x85 = INT8_MAX;
volatile uint32_t x87 = UINT32_MAX;
static volatile uint32_t t0 = 7929U;
uint8_t x144 = 2U;
static int8_t x195 = -1;
uint8_t x196 = 0U;
volatile int64_t t3 = -110244LL;
volatile int32_t t5 = -186;
int64_t t8 = INT64_MAX;
uint8_t x402 = 2U;
uint16_t x403 = 12486U;
int32_t x549 = INT32_MIN;
volatile uint64_t t13 = 9567290LLU;
uint8_t x613 = 84U;
uint64_t x627 = 2870134445484LLU;
int8_t x652 = 1;
uint64_t t17 = 25029761652LLU;
volatile int64_t t18 = -40714428995884111LL;
volatile int8_t x1085 = INT8_MAX;
volatile uint8_t x1187 = UINT8_MAX;
int16_t x1273 = 1;
uint32_t x1510 = 72572U;
int32_t x1594 = -1;
uint64_t t29 = 15544465LLU;
uint64_t x1597 = 5574LLU;
static volatile uint64_t t31 = 30819945731290LLU;
int64_t x1669 = -32LL;
static int16_t x1671 = INT16_MAX;
static int64_t t32 = -368474663LL;
uint16_t x1675 = 9094U;
uint64_t x1737 = 889870516LLU;
static uint64_t t34 = 1481478LLU;
static int32_t x1956 = 2;
volatile int8_t x2162 = INT8_MAX;
static int32_t t39 = 66;
uint32_t x2225 = 27988U;
volatile uint32_t x2227 = 36988U;
uint32_t t40 = 59008U;
int16_t x2353 = INT16_MIN;
volatile int32_t x2355 = -27350886;
static uint8_t x2357 = UINT8_MAX;
int8_t x2415 = INT8_MAX;
volatile uint64_t t46 = 14LLU;
int8_t x2476 = 3;
int8_t x2480 = 1;
volatile int16_t x2640 = 2;
static int16_t x2812 = 11;
volatile uint64_t t54 = 11363LLU;
volatile int32_t x2915 = 0;
uint32_t x2916 = 6U;
uint32_t t55 = 20845049U;
uint8_t x2973 = 0U;
int8_t x3100 = 13;
volatile int32_t t58 = 8915;
uint16_t x3127 = UINT16_MAX;
static int32_t t60 = -72;
int64_t t62 = 1349977LL;
int16_t x3269 = INT16_MAX;
uint16_t x3271 = UINT16_MAX;
static uint32_t x3322 = 1676494U;
uint32_t x3324 = 13U;
uint32_t x3339 = 0U;
int32_t t69 = -212;
int8_t x3469 = 40;
uint32_t t70 = 17778892U;
int64_t x3649 = -11381959LL;
static int64_t x3867 = -1LL;
volatile uint64_t t76 = 4488815LLU;
uint8_t x3936 = 4U;
uint64_t t79 = 86924LLU;
int16_t x4227 = INT16_MIN;
static uint64_t t82 = 49663985LLU;
volatile int64_t x4375 = -1LL;
uint32_t x4471 = 1280U;
int8_t x4482 = INT8_MIN;
uint64_t x4483 = UINT64_MAX;
int32_t x4538 = -1;
volatile int8_t x4540 = 12;
static volatile uint32_t x4661 = 244U;
int16_t x4662 = INT16_MAX;
static uint16_t x4663 = 1U;
uint16_t x4664 = 22U;
static uint32_t t94 = 7990199U;
int32_t x4798 = INT32_MAX;
uint32_t x4845 = 2270U;
static int32_t x4847 = INT32_MAX;
int32_t x4875 = 1818116;
volatile int8_t x4995 = -1;
int32_t t98 = -1;
volatile uint32_t x5022 = UINT32_MAX;


void f0(void) {
	volatile int16_t x86 = -1;
	uint64_t x88 = 5LLU;

	t0 = (x85-((x86+x87)>>x88));

	if (t0 != 4160749696U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x109 = -48978939603LL;
	int32_t x110 = -1;
	uint16_t x111 = 53U;
	volatile int16_t x112 = 0;
	int64_t t1 = 42LL;

	t1 = (x109-((x110+x111)>>x112));

	if (t1 != -48978939655LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x141 = INT16_MAX;
	uint32_t x142 = 7U;
	int16_t x143 = INT16_MAX;
	volatile uint32_t t2 = 13848494U;

	t2 = (x141-((x142+x143)>>x144));

	if (t2 != 24574U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x193 = INT64_MAX;
	int16_t x194 = 48;

	t3 = (x193-((x194+x195)>>x196));

	if (t3 != 9223372036854775760LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x225 = -1;
	int64_t x226 = INT64_MAX;
	uint64_t x227 = 2LLU;
	int8_t x228 = 1;
	volatile uint64_t t4 = 107406481829LLU;

	t4 = (x225-((x226+x227)>>x228));

	if (t4 != 13835058055282163711LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x297 = INT8_MIN;
	int16_t x298 = -14;
	int8_t x299 = INT8_MAX;
	uint32_t x300 = 1U;

	t5 = (x297-((x298+x299)>>x300));

	if (t5 != -184) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x317 = INT8_MIN;
	uint16_t x318 = 0U;
	uint64_t x319 = 431268LLU;
	static volatile uint64_t x320 = 0LLU;
	uint64_t t6 = 4866505238LLU;

	t6 = (x317-((x318+x319)>>x320));

	if (t6 != 18446744073709120220LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x365 = -1;
	volatile uint8_t x366 = 7U;
	int16_t x367 = 0;
	volatile uint64_t x368 = 24LLU;
	int32_t t7 = 49618681;

	t7 = (x365-((x366+x367)>>x368));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x389 = INT64_MAX;
	int8_t x390 = INT8_MAX;
	int32_t x391 = -1;
	uint8_t x392 = 12U;

	t8 = (x389-((x390+x391)>>x392));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x401 = -1LL;
	volatile uint8_t x404 = 24U;
	volatile int64_t t9 = 1139692579654880LL;

	t9 = (x401-((x402+x403)>>x404));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x465 = INT64_MAX;
	int8_t x466 = INT8_MIN;
	uint64_t x467 = UINT64_MAX;
	static uint16_t x468 = 0U;
	volatile uint64_t t10 = 6LLU;

	t10 = (x465-((x466+x467)>>x468));

	if (t10 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x505 = 3999572U;
	static int8_t x506 = INT8_MIN;
	uint32_t x507 = UINT32_MAX;
	uint8_t x508 = 12U;
	uint32_t t11 = 144287722U;

	t11 = (x505-((x506+x507)>>x508));

	if (t11 != 2950997U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x550 = UINT16_MAX;
	static int64_t x551 = 401LL;
	uint8_t x552 = 1U;
	static volatile int64_t t12 = 39LL;

	t12 = (x549-((x550+x551)>>x552));

	if (t12 != -2147516616LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x569 = UINT64_MAX;
	uint8_t x570 = UINT8_MAX;
	volatile int32_t x571 = -1;
	int32_t x572 = 4;

	t13 = (x569-((x570+x571)>>x572));

	if (t13 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x577 = 1;
	int64_t x578 = -1LL;
	static uint64_t x579 = 19487632509677LLU;
	int8_t x580 = 4;
	volatile uint64_t t14 = 5645566LLU;

	t14 = (x577-((x578+x579)>>x580));

	if (t14 != 18446742855732519763LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x614 = 3U;
	uint32_t x615 = 4995402U;
	static uint32_t x616 = 3U;
	uint32_t t15 = 1955852825U;

	t15 = (x613-((x614+x615)>>x616));

	if (t15 != 4294342955U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x625 = UINT32_MAX;
	int32_t x626 = -1;
	uint8_t x628 = 1U;
	volatile uint64_t t16 = 2595831240429725379LLU;

	t16 = (x625-((x626+x627)>>x628));

	if (t16 != 18446742642937296170LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x649 = INT8_MAX;
	int8_t x650 = -1;
	uint64_t x651 = UINT64_MAX;

	t17 = (x649-((x650+x651)>>x652));

	if (t17 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x693 = 2390LL;
	int32_t x694 = INT32_MAX;
	static int8_t x695 = INT8_MIN;
	int64_t x696 = 0LL;

	t18 = (x693-((x694+x695)>>x696));

	if (t18 != -2147481129LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x901 = 391176484;
	int8_t x902 = -1;
	uint8_t x903 = 13U;
	uint8_t x904 = 9U;
	int32_t t19 = -24512;

	t19 = (x901-((x902+x903)>>x904));

	if (t19 != 391176484) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x985 = INT8_MIN;
	static int64_t x986 = 1324LL;
	volatile int16_t x987 = -1;
	static uint8_t x988 = 52U;
	volatile int64_t t20 = 26367928406263423LL;

	t20 = (x985-((x986+x987)>>x988));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1086 = UINT32_MAX;
	static int32_t x1087 = -2;
	int16_t x1088 = 13;
	static uint32_t t21 = 60831765U;

	t21 = (x1085-((x1086+x1087)>>x1088));

	if (t21 != 4294443136U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1121 = -38;
	static int8_t x1122 = 0;
	uint16_t x1123 = UINT16_MAX;
	static uint32_t x1124 = 1U;
	volatile int32_t t22 = -4;

	t22 = (x1121-((x1122+x1123)>>x1124));

	if (t22 != -32805) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1157 = -1;
	volatile uint64_t x1158 = UINT64_MAX;
	static volatile int32_t x1159 = -1;
	static uint32_t x1160 = 0U;
	uint64_t t23 = 122246847023818LLU;

	t23 = (x1157-((x1158+x1159)>>x1160));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1177 = INT64_MIN;
	volatile uint64_t x1178 = UINT64_MAX;
	volatile uint32_t x1179 = 79635284U;
	volatile uint8_t x1180 = 2U;
	uint64_t t24 = 32970654368078699LLU;

	t24 = (x1177-((x1178+x1179)>>x1180));

	if (t24 != 9223372036834866988LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x1185 = -67495;
	int32_t x1186 = -1;
	static uint8_t x1188 = 11U;
	volatile int32_t t25 = -30776;

	t25 = (x1185-((x1186+x1187)>>x1188));

	if (t25 != -67495) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1274 = 60885820;
	int8_t x1275 = INT8_MAX;
	int16_t x1276 = 1;
	volatile int32_t t26 = -2966814;

	t26 = (x1273-((x1274+x1275)>>x1276));

	if (t26 != -30442972) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1457 = 22432142288573LLU;
	int32_t x1458 = -1;
	int16_t x1459 = INT16_MAX;
	int8_t x1460 = 2;
	volatile uint64_t t27 = 28635749969810431LLU;

	t27 = (x1457-((x1458+x1459)>>x1460));

	if (t27 != 22432142280382LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1509 = INT8_MIN;
	static volatile uint64_t x1511 = UINT64_MAX;
	uint8_t x1512 = 3U;
	volatile uint64_t t28 = 2737LLU;

	t28 = (x1509-((x1510+x1511)>>x1512));

	if (t28 != 18446744073709542417LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1593 = 24294LLU;
	uint64_t x1595 = 563LLU;
	uint8_t x1596 = 24U;

	t29 = (x1593-((x1594+x1595)>>x1596));

	if (t29 != 24294LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1598 = UINT64_MAX;
	int32_t x1599 = INT32_MIN;
	int16_t x1600 = 6;
	volatile uint64_t t30 = 1731311LLU;

	t30 = (x1597-((x1598+x1599)>>x1600));

	if (t30 != 18158513697591399879LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1649 = INT32_MIN;
	int16_t x1650 = INT16_MIN;
	static uint64_t x1651 = 4948LLU;
	uint8_t x1652 = 26U;

	t31 = (x1649-((x1650+x1651)>>x1652));

	if (t31 != 18446743796684161025LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1670 = -1896;
	int8_t x1672 = 1;

	t32 = (x1669-((x1670+x1671)>>x1672));

	if (t32 != -15467LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1673 = -3;
	volatile uint8_t x1674 = 1U;
	uint8_t x1676 = 27U;
	volatile int32_t t33 = 3;

	t33 = (x1673-((x1674+x1675)>>x1676));

	if (t33 != -3) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1738 = 1U;
	static volatile int8_t x1739 = 0;
	volatile uint8_t x1740 = 0U;

	t34 = (x1737-((x1738+x1739)>>x1740));

	if (t34 != 889870515LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x1765 = 145135275LLU;
	uint64_t x1766 = 567739408459413438LLU;
	int8_t x1767 = INT8_MIN;
	static uint16_t x1768 = 0U;
	static volatile uint64_t t35 = 1LLU;

	t35 = (x1765-((x1766+x1767)>>x1768));

	if (t35 != 17879004665395273581LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1869 = INT8_MIN;
	volatile int16_t x1870 = INT16_MIN;
	uint64_t x1871 = 93737666426LLU;
	int8_t x1872 = 1;
	uint64_t t36 = 14644226LLU;

	t36 = (x1869-((x1870+x1871)>>x1872));

	if (t36 != 18446744026840734659LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1953 = 4135528U;
	uint16_t x1954 = 9653U;
	static uint8_t x1955 = 81U;
	uint32_t t37 = 306077U;

	t37 = (x1953-((x1954+x1955)>>x1956));

	if (t37 != 4133095U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2029 = -1;
	uint16_t x2030 = 200U;
	static int8_t x2031 = 0;
	uint16_t x2032 = 3U;
	static int32_t t38 = 110063636;

	t38 = (x2029-((x2030+x2031)>>x2032));

	if (t38 != -26) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x2161 = 1U;
	volatile uint16_t x2163 = 205U;
	volatile int16_t x2164 = 22;

	t39 = (x2161-((x2162+x2163)>>x2164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2226 = -1;
	int8_t x2228 = 0;

	t40 = (x2225-((x2226+x2227)>>x2228));

	if (t40 != 4294958297U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2269 = 13977129U;
	uint16_t x2270 = UINT16_MAX;
	volatile int8_t x2271 = INT8_MAX;
	volatile uint8_t x2272 = 8U;
	uint32_t t41 = 6U;

	t41 = (x2269-((x2270+x2271)>>x2272));

	if (t41 != 13976873U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2325 = 0;
	volatile int32_t x2326 = -1;
	static int8_t x2327 = INT8_MAX;
	uint8_t x2328 = 5U;
	volatile int32_t t42 = 20;

	t42 = (x2325-((x2326+x2327)>>x2328));

	if (t42 != -3) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2354 = 110194232LLU;
	static uint8_t x2356 = 0U;
	uint64_t t43 = 66739648205030671LLU;

	t43 = (x2353-((x2354+x2355)>>x2356));

	if (t43 != 18446744073626675502LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2358 = 242324LLU;
	volatile int8_t x2359 = -1;
	int16_t x2360 = 15;
	static volatile uint64_t t44 = 374032430LLU;

	t44 = (x2357-((x2358+x2359)>>x2360));

	if (t44 != 248LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x2413 = 183622LL;
	int64_t x2414 = 3890LL;
	uint16_t x2416 = 13U;
	int64_t t45 = 83951811103LL;

	t45 = (x2413-((x2414+x2415)>>x2416));

	if (t45 != 183622LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2421 = -15;
	uint64_t x2422 = UINT64_MAX;
	uint64_t x2423 = 20119064245LLU;
	int8_t x2424 = 1;

	t46 = (x2421-((x2422+x2423)>>x2424));

	if (t46 != 18446744063650019479LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2473 = -1;
	static uint64_t x2474 = UINT64_MAX;
	uint16_t x2475 = UINT16_MAX;
	uint64_t t47 = 998LLU;

	t47 = (x2473-((x2474+x2475)>>x2476));

	if (t47 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x2477 = 76U;
	uint32_t x2478 = 87719U;
	int16_t x2479 = INT16_MAX;
	uint32_t t48 = 382516289U;

	t48 = (x2477-((x2478+x2479)>>x2480));

	if (t48 != 4294907129U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x2601 = 1664U;
	volatile uint8_t x2602 = UINT8_MAX;
	volatile uint32_t x2603 = UINT32_MAX;
	int8_t x2604 = 3;
	volatile uint32_t t49 = 66589U;

	t49 = (x2601-((x2602+x2603)>>x2604));

	if (t49 != 1633U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2637 = INT16_MIN;
	static int16_t x2638 = INT16_MIN;
	uint64_t x2639 = 939882676LLU;
	uint64_t t50 = 14732545925802017LLU;

	t50 = (x2637-((x2638+x2639)>>x2640));

	if (t50 != 18446744073474556371LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x2661 = 2205691U;
	uint32_t x2662 = 1237U;
	int8_t x2663 = -1;
	static uint16_t x2664 = 2U;
	volatile uint32_t t51 = 96973U;

	t51 = (x2661-((x2662+x2663)>>x2664));

	if (t51 != 2205382U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2705 = 0;
	uint32_t x2706 = UINT32_MAX;
	int16_t x2707 = -5;
	uint8_t x2708 = 3U;
	volatile uint32_t t52 = 76684U;

	t52 = (x2705-((x2706+x2707)>>x2708));

	if (t52 != 3758096385U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2729 = UINT64_MAX;
	int16_t x2730 = INT16_MAX;
	volatile int8_t x2731 = -35;
	int8_t x2732 = 2;
	volatile uint64_t t53 = 335599932LLU;

	t53 = (x2729-((x2730+x2731)>>x2732));

	if (t53 != 18446744073709543432LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2809 = 9LLU;
	volatile uint64_t x2810 = 21394545LLU;
	static uint64_t x2811 = UINT64_MAX;

	t54 = (x2809-((x2810+x2811)>>x2812));

	if (t54 != 18446744073709541179LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2913 = INT8_MIN;
	uint32_t x2914 = UINT32_MAX;

	t55 = (x2913-((x2914+x2915)>>x2916));

	if (t55 != 4227858305U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2974 = INT8_MAX;
	int16_t x2975 = 172;
	int8_t x2976 = 1;
	static int32_t t56 = -3;

	t56 = (x2973-((x2974+x2975)>>x2976));

	if (t56 != -149) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x3029 = -35;
	int16_t x3030 = INT16_MAX;
	static int64_t x3031 = 1LL;
	int16_t x3032 = 0;
	int64_t t57 = 5537011042938389LL;

	t57 = (x3029-((x3030+x3031)>>x3032));

	if (t57 != -32803LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3097 = -81;
	int8_t x3098 = INT8_MAX;
	static uint16_t x3099 = 657U;

	t58 = (x3097-((x3098+x3099)>>x3100));

	if (t58 != -81) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x3125 = 2U;
	static volatile int32_t x3126 = -1;
	int8_t x3128 = 0;
	uint32_t t59 = 107896612U;

	t59 = (x3125-((x3126+x3127)>>x3128));

	if (t59 != 4294901764U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3153 = 31U;
	volatile uint8_t x3154 = 27U;
	uint8_t x3155 = UINT8_MAX;
	uint8_t x3156 = 4U;

	t60 = (x3153-((x3154+x3155)>>x3156));

	if (t60 != 14) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3177 = INT8_MIN;
	int8_t x3178 = INT8_MIN;
	uint32_t x3179 = 182905946U;
	static uint16_t x3180 = 7U;
	volatile uint32_t t61 = 924U;

	t61 = (x3177-((x3178+x3179)>>x3180));

	if (t61 != 4293538217U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x3225 = 153U;
	int64_t x3226 = INT64_MAX;
	volatile int8_t x3227 = -3;
	static volatile uint8_t x3228 = 59U;

	t62 = (x3225-((x3226+x3227)>>x3228));

	if (t62 != 138LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x3270 = 3;
	int16_t x3272 = 14;
	int32_t t63 = -105;

	t63 = (x3269-((x3270+x3271)>>x3272));

	if (t63 != 32763) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3293 = 56U;
	uint32_t x3294 = 1U;
	static volatile int32_t x3295 = -3636;
	uint16_t x3296 = 3U;
	static uint32_t t64 = 18128348U;

	t64 = (x3293-((x3294+x3295)>>x3296));

	if (t64 != 3758096895U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3305 = 2709U;
	uint32_t x3306 = 37422130U;
	int32_t x3307 = 92993019;
	uint8_t x3308 = 0U;
	volatile uint32_t t65 = 56614U;

	t65 = (x3305-((x3306+x3307)>>x3308));

	if (t65 != 4164554856U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3321 = 5797U;
	int16_t x3323 = INT16_MIN;
	uint32_t t66 = 798U;

	t66 = (x3321-((x3322+x3323)>>x3324));

	if (t66 != 5597U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x3337 = INT16_MIN;
	static int32_t x3338 = INT32_MIN;
	int8_t x3340 = 20;
	uint32_t t67 = 923U;

	t67 = (x3337-((x3338+x3339)>>x3340));

	if (t67 != 4294932480U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3365 = 4436LL;
	uint16_t x3366 = 1964U;
	volatile int64_t x3367 = 248229092LL;
	uint16_t x3368 = 5U;
	volatile int64_t t68 = 21326401248211LL;

	t68 = (x3365-((x3366+x3367)>>x3368));

	if (t68 != -7752784LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3437 = INT8_MAX;
	uint16_t x3438 = 1919U;
	int32_t x3439 = 64612425;
	int64_t x3440 = 1LL;

	t69 = (x3437-((x3438+x3439)>>x3440));

	if (t69 != -32307045) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3470 = INT8_MAX;
	volatile uint32_t x3471 = UINT32_MAX;
	volatile uint8_t x3472 = 14U;

	t70 = (x3469-((x3470+x3471)>>x3472));

	if (t70 != 40U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3489 = 1218166;
	int64_t x3490 = -3LL;
	static int16_t x3491 = INT16_MAX;
	volatile uint64_t x3492 = 10LLU;
	int64_t t71 = -490485273675978LL;

	t71 = (x3489-((x3490+x3491)>>x3492));

	if (t71 != 1218135LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x3577 = -1;
	static int32_t x3578 = INT32_MIN;
	volatile uint64_t x3579 = 26339343LLU;
	uint16_t x3580 = 0U;
	uint64_t t72 = 3158407108LLU;

	t72 = (x3577-((x3578+x3579)>>x3580));

	if (t72 != 2121144304LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3650 = UINT32_MAX;
	uint8_t x3651 = 107U;
	int8_t x3652 = 29;
	volatile int64_t t73 = -5159031LL;

	t73 = (x3649-((x3650+x3651)>>x3652));

	if (t73 != -11381959LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x3813 = -2;
	volatile int64_t x3814 = INT64_MAX;
	static int64_t x3815 = -1LL;
	static uint32_t x3816 = 24U;
	int64_t t74 = 65449LL;

	t74 = (x3813-((x3814+x3815)>>x3816));

	if (t74 != -549755813889LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x3865 = 2U;
	static volatile uint8_t x3866 = UINT8_MAX;
	volatile uint32_t x3868 = 0U;
	int64_t t75 = 10LL;

	t75 = (x3865-((x3866+x3867)>>x3868));

	if (t75 != -252LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3897 = INT16_MAX;
	uint64_t x3898 = UINT64_MAX;
	uint64_t x3899 = 11968953610388LLU;
	volatile int8_t x3900 = 4;

	t76 = (x3897-((x3898+x3899)>>x3900));

	if (t76 != 18446743325649983734LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3933 = UINT16_MAX;
	static int16_t x3934 = -7;
	int8_t x3935 = 19;
	static int32_t t77 = 615691038;

	t77 = (x3933-((x3934+x3935)>>x3936));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4085 = INT8_MAX;
	uint64_t x4086 = 1016LLU;
	int16_t x4087 = 15;
	int8_t x4088 = 0;
	volatile uint64_t t78 = 682LLU;

	t78 = (x4085-((x4086+x4087)>>x4088));

	if (t78 != 18446744073709550712LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4157 = 169863LLU;
	static int8_t x4158 = INT8_MAX;
	volatile uint32_t x4159 = 103248U;
	uint32_t x4160 = 2U;

	t79 = (x4157-((x4158+x4159)>>x4160));

	if (t79 != 144020LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x4225 = INT8_MIN;
	volatile uint32_t x4226 = 15390U;
	static int16_t x4228 = 4;
	uint32_t t80 = 11U;

	t80 = (x4225-((x4226+x4227)>>x4228));

	if (t80 != 4026532799U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4241 = 2888U;
	volatile int8_t x4242 = -1;
	uint8_t x4243 = 1U;
	static uint32_t x4244 = 21U;
	volatile int32_t t81 = 934417;

	t81 = (x4241-((x4242+x4243)>>x4244));

	if (t81 != 2888) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x4249 = INT64_MAX;
	volatile int64_t x4250 = -1LL;
	uint64_t x4251 = 12141LLU;
	volatile int8_t x4252 = 0;

	t82 = (x4249-((x4250+x4251)>>x4252));

	if (t82 != 9223372036854763667LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4373 = -10;
	static volatile uint8_t x4374 = 1U;
	uint8_t x4376 = 44U;
	int64_t t83 = -280323012958588LL;

	t83 = (x4373-((x4374+x4375)>>x4376));

	if (t83 != -10LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4429 = INT16_MIN;
	int8_t x4430 = 3;
	uint32_t x4431 = 115U;
	static int16_t x4432 = 3;
	volatile uint32_t t84 = 9431U;

	t84 = (x4429-((x4430+x4431)>>x4432));

	if (t84 != 4294934514U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x4441 = -1;
	volatile uint32_t x4442 = UINT32_MAX;
	uint16_t x4443 = 117U;
	static uint8_t x4444 = 7U;
	uint32_t t85 = UINT32_MAX;

	t85 = (x4441-((x4442+x4443)>>x4444));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x4449 = 118;
	static uint32_t x4450 = 14478696U;
	uint8_t x4451 = UINT8_MAX;
	static volatile uint8_t x4452 = 2U;
	volatile uint32_t t86 = 6U;

	t86 = (x4449-((x4450+x4451)>>x4452));

	if (t86 != 4291347677U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4469 = 19635U;
	static uint32_t x4470 = 48239U;
	volatile uint16_t x4472 = 3U;
	volatile uint32_t t87 = 767454135U;

	t87 = (x4469-((x4470+x4471)>>x4472));

	if (t87 != 13446U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4481 = -27600086170225LL;
	uint8_t x4484 = 53U;
	static volatile uint64_t t88 = 87972399095LLU;

	t88 = (x4481-((x4482+x4483)>>x4484));

	if (t88 != 18446716473623379344LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4537 = -1LL;
	int32_t x4539 = 854;
	int64_t t89 = 116715979896917LL;

	t89 = (x4537-((x4538+x4539)>>x4540));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4629 = 31;
	volatile uint32_t x4630 = 1633871U;
	volatile int16_t x4631 = INT16_MIN;
	uint16_t x4632 = 31U;
	static volatile uint32_t t90 = 420587U;

	t90 = (x4629-((x4630+x4631)>>x4632));

	if (t90 != 31U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t t91 = 1223U;

	t91 = (x4661-((x4662+x4663)>>x4664));

	if (t91 != 244U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x4697 = 7515U;
	volatile int16_t x4698 = INT16_MIN;
	uint32_t x4699 = UINT32_MAX;
	volatile uint8_t x4700 = 6U;
	uint32_t t92 = 1U;

	t92 = (x4697-((x4698+x4699)>>x4700));

	if (t92 != 4227866460U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x4713 = INT64_MIN;
	uint64_t x4714 = 1950068158211096394LLU;
	static uint64_t x4715 = UINT64_MAX;
	static volatile uint64_t x4716 = 28LLU;
	uint64_t t93 = 7751LLU;

	t93 = (x4713-((x4714+x4715)>>x4716));

	if (t93 != 9223372029590205817LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4761 = INT32_MAX;
	int16_t x4762 = INT16_MAX;
	static uint32_t x4763 = UINT32_MAX;
	int8_t x4764 = 1;

	t94 = (x4761-((x4762+x4763)>>x4764));

	if (t94 != 2147467264U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x4797 = 39U;
	int64_t x4799 = -1LL;
	int8_t x4800 = 6;
	volatile int64_t t95 = -17440405198LL;

	t95 = (x4797-((x4798+x4799)>>x4800));

	if (t95 != -33554392LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x4846 = -1;
	static uint64_t x4848 = 11LLU;
	volatile uint32_t t96 = 255864U;

	t96 = (x4845-((x4846+x4847)>>x4848));

	if (t96 != 4293920991U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x4873 = 3673680U;
	int16_t x4874 = INT16_MIN;
	uint8_t x4876 = 0U;
	volatile uint32_t t97 = 363877861U;

	t97 = (x4873-((x4874+x4875)>>x4876));

	if (t97 != 1888332U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4993 = -1;
	int8_t x4994 = INT8_MAX;
	uint16_t x4996 = 11U;

	t98 = (x4993-((x4994+x4995)>>x4996));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x5021 = UINT32_MAX;
	int16_t x5023 = -1;
	static volatile int8_t x5024 = 1;
	uint32_t t99 = 545548308U;

	t99 = (x5021-((x5022+x5023)>>x5024));

	if (t99 != 2147483648U) { NG(); } else { ; }
	
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

