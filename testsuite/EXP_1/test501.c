#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x108 = 1;
int8_t x121 = INT8_MIN;
int64_t x123 = -2002926824496LL;
int64_t t1 = -109LL;
volatile int8_t x317 = INT8_MIN;
int64_t x319 = INT64_MIN;
int32_t x481 = -1;
uint64_t t4 = 54225168798671083LLU;
volatile uint64_t x537 = 889LLU;
uint32_t x538 = 69U;
static volatile int64_t t7 = -239153435471309874LL;
uint16_t x694 = 2U;
int8_t x705 = INT8_MIN;
int32_t x773 = -1;
uint16_t x893 = 3689U;
uint32_t t13 = 1026U;
static int16_t x1110 = INT16_MIN;
volatile int64_t x1177 = -797844LL;
uint8_t x1178 = 94U;
int64_t t16 = 971295LL;
uint16_t x1349 = 999U;
static uint16_t x1404 = 8U;
int64_t x1414 = 135273LL;
uint8_t x1447 = 1U;
uint8_t x1450 = 38U;
int32_t t24 = 6645548;
int16_t x1524 = 20;
static uint64_t x1561 = 2060028550LLU;
uint64_t x1611 = UINT64_MAX;
int8_t x1706 = -10;
static int8_t x1815 = INT8_MIN;
int32_t x1913 = INT32_MIN;
static volatile uint64_t t31 = 498460738037194197LLU;
uint64_t x1935 = 6850LLU;
static uint64_t x2128 = 58LLU;
volatile int32_t x2135 = INT32_MIN;
int8_t x2157 = -1;
int8_t x2306 = INT8_MIN;
int32_t x2343 = INT32_MIN;
uint64_t x2351 = UINT64_MAX;
volatile int16_t x2538 = -211;
uint8_t x2539 = 12U;
uint8_t x2543 = 45U;
uint32_t x2788 = 14U;
uint32_t t48 = 3U;
uint32_t x2846 = UINT32_MAX;
int32_t x2847 = 28;
volatile int32_t t50 = -111716;
static int8_t x2869 = -1;
static uint16_t x3064 = 8U;
int16_t x3154 = INT16_MAX;
int16_t x3155 = 13438;
static volatile uint8_t x3235 = UINT8_MAX;
static volatile uint64_t t59 = 5581141857232266940LLU;
int16_t x3297 = INT16_MAX;
static uint64_t x3298 = UINT64_MAX;
static int8_t x3300 = 2;
static uint8_t x3308 = 51U;
int64_t x3349 = INT64_MIN;
volatile uint64_t t62 = 436LLU;
int8_t x3529 = INT8_MIN;
volatile int16_t x3629 = INT16_MAX;
volatile uint32_t t70 = 33U;
int32_t x3745 = 1;
uint64_t x3930 = 778311966287799189LLU;
volatile int16_t x4098 = INT16_MAX;
volatile uint16_t x4099 = UINT16_MAX;
uint64_t x4265 = UINT64_MAX;
uint64_t t76 = 1301433965321919LLU;
uint32_t t77 = 2002098U;
uint32_t x4414 = 659U;
volatile int8_t x4416 = 4;
uint8_t x4441 = UINT8_MAX;
int64_t x4442 = 186659044LL;
static uint8_t x4443 = UINT8_MAX;
static volatile int64_t t80 = 3656191562989LL;
volatile int64_t t81 = 11101LL;
volatile uint32_t x4597 = UINT32_MAX;
static uint32_t x4598 = 1423198U;
uint32_t x4612 = 0U;
volatile int64_t t85 = 0LL;
uint32_t x4783 = 674U;
uint32_t x5029 = 131U;
uint8_t x5031 = UINT8_MAX;
volatile int8_t x5032 = 0;
uint32_t x5037 = UINT32_MAX;
int32_t x5038 = INT32_MAX;
uint32_t x5181 = 2269394U;
int16_t x5287 = INT16_MAX;
uint32_t x5303 = UINT32_MAX;
int8_t x5304 = 3;
int64_t x5461 = 4985537475LL;
uint64_t t96 = 6LLU;
int16_t x5515 = INT16_MIN;
uint8_t x5768 = 18U;


void f0(void) {
	uint64_t x105 = 8073524LLU;
	volatile uint32_t x106 = 1665U;
	volatile int32_t x107 = 272875;
	static uint64_t t0 = 9008625778956202LLU;

	t0 = (((x105*x106)^x107)>>x108);

	if (t0 != 6721344879LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x122 = 1352425397481LL;
	uint64_t x124 = 60LLU;

	t1 = (((x121*x122)^x123)>>x124);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x221 = -10143;
	uint8_t x222 = UINT8_MAX;
	uint64_t x223 = 4008LLU;
	uint16_t x224 = 28U;
	volatile uint64_t t2 = 397225LLU;

	t2 = (((x221*x222)^x223)>>x224);

	if (t2 != 68719476735LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x318 = INT16_MAX;
	uint64_t x320 = 4LLU;
	int64_t t3 = -1071933072LL;

	t3 = (((x317*x318)^x319)>>x320);

	if (t3 != 576460752303161352LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x482 = 9429U;
	uint64_t x483 = 40LLU;
	int8_t x484 = 0;

	t4 = (((x481*x482)^x483)>>x484);

	if (t4 != 18446744073709542147LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x525 = 0;
	int8_t x526 = 10;
	int16_t x527 = 12632;
	uint8_t x528 = 25U;
	volatile int32_t t5 = -54430489;

	t5 = (((x525*x526)^x527)>>x528);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x539 = INT32_MAX;
	int16_t x540 = 1;
	volatile uint64_t t6 = 173560579310628LLU;

	t6 = (((x537*x538)^x539)>>x540);

	if (t6 != 1073711153LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x565 = 123U;
	int64_t x566 = -1LL;
	volatile int16_t x567 = -1;
	int64_t x568 = 48LL;

	t7 = (((x565*x566)^x567)>>x568);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x693 = INT16_MIN;
	volatile int32_t x695 = INT32_MIN;
	static volatile uint16_t x696 = 3U;
	int32_t t8 = -1;

	t8 = (((x693*x694)^x695)>>x696);

	if (t8 != 268427264) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x706 = -1;
	static volatile uint64_t x707 = 85567LLU;
	volatile int16_t x708 = 0;
	volatile uint64_t t9 = 69826LLU;

	t9 = (((x705*x706)^x707)>>x708);

	if (t9 != 85695LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x774 = 14349U;
	static int8_t x775 = -1;
	static int64_t x776 = 29LL;
	uint32_t t10 = 1496255481U;

	t10 = (((x773*x774)^x775)>>x776);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x894 = 1257621114857469572LLU;
	uint16_t x895 = UINT16_MAX;
	uint8_t x896 = 0U;
	static uint64_t t11 = 7330LLU;

	t11 = (((x893*x894)^x895)>>x896);

	if (t11 != 9231530208107785179LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1021 = INT32_MAX;
	volatile uint64_t x1022 = 765351606271LLU;
	static int32_t x1023 = -1;
	int16_t x1024 = 0;
	volatile uint64_t t12 = 2144171683LLU;

	t12 = (((x1021*x1022)^x1023)>>x1024);

	if (t12 != 16626907961704495102LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1041 = 43U;
	int16_t x1042 = 1;
	volatile int8_t x1043 = -37;
	int16_t x1044 = 18;

	t13 = (((x1041*x1042)^x1043)>>x1044);

	if (t13 != 16383U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1109 = 31623466LLU;
	uint64_t x1111 = UINT64_MAX;
	static volatile int8_t x1112 = 1;
	static uint64_t t14 = 119024629LLU;

	t14 = (((x1109*x1110)^x1111)>>x1112);

	if (t14 != 518118866943LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1129 = INT16_MAX;
	int8_t x1130 = 0;
	int32_t x1131 = INT32_MAX;
	static int16_t x1132 = 1;
	volatile int32_t t15 = 117323487;

	t15 = (((x1129*x1130)^x1131)>>x1132);

	if (t15 != 1073741823) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1179 = INT8_MIN;
	uint32_t x1180 = 4U;

	t16 = (((x1177*x1178)^x1179)>>x1180);

	if (t16 != 4687330LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x1245 = 334600892U;
	uint64_t x1246 = UINT64_MAX;
	int8_t x1247 = -57;
	static volatile int8_t x1248 = 9;
	volatile uint64_t t17 = 2887388090LLU;

	t17 = (((x1245*x1246)^x1247)>>x1248);

	if (t17 != 653517LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1350 = INT16_MIN;
	int8_t x1351 = -1;
	uint8_t x1352 = 6U;
	int32_t t18 = 259995395;

	t18 = (((x1349*x1350)^x1351)>>x1352);

	if (t18 != 511487) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x1365 = UINT8_MAX;
	volatile uint32_t x1366 = UINT32_MAX;
	int8_t x1367 = INT8_MIN;
	int8_t x1368 = 18;
	uint32_t t19 = 7832131U;

	t19 = (((x1365*x1366)^x1367)>>x1368);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1401 = -1;
	static int8_t x1402 = INT8_MIN;
	int32_t x1403 = INT32_MAX;
	static int32_t t20 = 7666795;

	t20 = (((x1401*x1402)^x1403)>>x1404);

	if (t20 != 8388607) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1413 = -92;
	int64_t x1415 = -1LL;
	uint64_t x1416 = 0LLU;
	volatile int64_t t21 = -4004199638LL;

	t21 = (((x1413*x1414)^x1415)>>x1416);

	if (t21 != 12445115LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1445 = INT8_MAX;
	uint16_t x1446 = 660U;
	uint8_t x1448 = 1U;
	volatile int32_t t22 = -3552297;

	t22 = (((x1445*x1446)^x1447)>>x1448);

	if (t22 != 41910) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1449 = INT8_MAX;
	volatile int16_t x1451 = INT16_MAX;
	int8_t x1452 = 3;
	volatile int32_t t23 = 86;

	t23 = (((x1449*x1450)^x1451)>>x1452);

	if (t23 != 3492) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1453 = 177U;
	static int8_t x1454 = -1;
	int32_t x1455 = -1;
	static int32_t x1456 = 18;

	t24 = (((x1453*x1454)^x1455)>>x1456);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1521 = 2367109U;
	int32_t x1522 = INT32_MAX;
	int16_t x1523 = -1;
	uint32_t t25 = 15236U;

	t25 = (((x1521*x1522)^x1523)>>x1524);

	if (t25 != 2050U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1562 = INT16_MIN;
	int16_t x1563 = INT16_MAX;
	uint8_t x1564 = 3U;
	volatile uint64_t t26 = 13917547220LLU;

	t26 = (((x1561*x1562)^x1563)>>x1564);

	if (t26 != 2305834571336757247LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1609 = 4001835U;
	int8_t x1610 = INT8_MIN;
	uint32_t x1612 = 0U;
	volatile uint64_t t27 = 960485139497933LLU;

	t27 = (((x1609*x1610)^x1611)>>x1612);

	if (t27 != 18446744069926819199LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1705 = 2246U;
	int8_t x1707 = INT8_MIN;
	int8_t x1708 = 11;
	int32_t t28 = -2;

	t28 = (((x1705*x1706)^x1707)>>x1708);

	if (t28 != 10) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1785 = UINT64_MAX;
	int32_t x1786 = INT32_MIN;
	static int16_t x1787 = INT16_MIN;
	uint8_t x1788 = 4U;
	uint64_t t29 = 5128366466438LLU;

	t29 = (((x1785*x1786)^x1787)>>x1788);

	if (t29 != 1152921504472627200LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1813 = INT16_MIN;
	volatile int8_t x1814 = 3;
	uint64_t x1816 = 14LLU;
	static volatile int32_t t30 = 17;

	t30 = (((x1813*x1814)^x1815)>>x1816);

	if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x1914 = 335779283LLU;
	int32_t x1915 = -536236;
	volatile int8_t x1916 = 12;

	t31 = (((x1913*x1914)^x1915)>>x1916);

	if (t31 != 176045048725373LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1933 = INT8_MIN;
	static int8_t x1934 = INT8_MAX;
	int16_t x1936 = 21;
	uint64_t t32 = 6806701811LLU;

	t32 = (((x1933*x1934)^x1935)>>x1936);

	if (t32 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1937 = -1;
	volatile uint16_t x1938 = 669U;
	int64_t x1939 = INT64_MIN;
	int8_t x1940 = 33;
	int64_t t33 = 38829179055LL;

	t33 = (((x1937*x1938)^x1939)>>x1940);

	if (t33 != 1073741823LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2125 = -1;
	static int64_t x2126 = -562LL;
	static uint16_t x2127 = 328U;
	volatile int64_t t34 = -8LL;

	t34 = (((x2125*x2126)^x2127)>>x2128);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x2133 = -34307627770LL;
	uint64_t x2134 = UINT64_MAX;
	uint8_t x2136 = 1U;
	volatile uint64_t t35 = 7LLU;

	t35 = (((x2133*x2134)^x2135)>>x2136);

	if (t35 != 9223372020722593149LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2158 = INT16_MIN;
	volatile int16_t x2159 = INT16_MAX;
	static int8_t x2160 = 3;
	static int32_t t36 = -1867;

	t36 = (((x2157*x2158)^x2159)>>x2160);

	if (t36 != 8191) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x2189 = UINT8_MAX;
	static int8_t x2190 = INT8_MIN;
	static int64_t x2191 = INT64_MIN;
	int32_t x2192 = 0;
	int64_t t37 = -228225891227LL;

	t37 = (((x2189*x2190)^x2191)>>x2192);

	if (t37 != 9223372036854743168LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2269 = INT16_MIN;
	uint16_t x2270 = 3596U;
	int8_t x2271 = -1;
	volatile int16_t x2272 = 4;
	int32_t t38 = 5819;

	t38 = (((x2269*x2270)^x2271)>>x2272);

	if (t38 != 7364607) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2305 = INT16_MAX;
	int8_t x2307 = INT8_MIN;
	uint32_t x2308 = 26U;
	volatile int32_t t39 = 1;

	t39 = (((x2305*x2306)^x2307)>>x2308);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2341 = 1612375628271LLU;
	int64_t x2342 = INT64_MAX;
	uint8_t x2344 = 1U;
	uint64_t t40 = 183131LLU;

	t40 = (((x2341*x2342)^x2343)>>x2344);

	if (t40 != 4611686823926051592LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2349 = INT16_MIN;
	volatile int8_t x2350 = INT8_MIN;
	uint8_t x2352 = 46U;
	volatile uint64_t t41 = 672694LLU;

	t41 = (((x2349*x2350)^x2351)>>x2352);

	if (t41 != 262143LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2361 = INT16_MAX;
	volatile uint32_t x2362 = 1580U;
	int16_t x2363 = INT16_MIN;
	int32_t x2364 = 9;
	static uint32_t t42 = 37414U;

	t42 = (((x2361*x2362)^x2363)>>x2364);

	if (t42 != 8287548U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2501 = INT32_MIN;
	uint64_t x2502 = 102644884924070758LLU;
	uint8_t x2503 = 99U;
	volatile uint16_t x2504 = 40U;
	uint64_t t43 = 3LLU;

	t43 = (((x2501*x2502)^x2503)>>x2504);

	if (t43 != 11537282LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2537 = 42918255590LLU;
	int8_t x2540 = 14;
	uint64_t t44 = 185582188405542193LLU;

	t44 = (((x2537*x2538)^x2539)>>x2540);

	if (t44 != 1125899354123390LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2541 = 4U;
	uint16_t x2542 = 57U;
	volatile int64_t x2544 = 5LL;
	volatile int32_t t45 = -228796;

	t45 = (((x2541*x2542)^x2543)>>x2544);

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2557 = INT8_MIN;
	static int16_t x2558 = INT16_MAX;
	volatile int8_t x2559 = INT8_MIN;
	static volatile uint16_t x2560 = 7U;
	static int32_t t46 = 3702;

	t46 = (((x2557*x2558)^x2559)>>x2560);

	if (t46 != 32766) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2613 = INT16_MAX;
	volatile uint32_t x2614 = 4802U;
	static int64_t x2615 = INT64_MAX;
	uint64_t x2616 = 0LLU;
	volatile int64_t t47 = 789240214141722310LL;

	t47 = (((x2613*x2614)^x2615)>>x2616);

	if (t47 != 9223372036697428673LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x2785 = UINT32_MAX;
	uint16_t x2786 = 45U;
	volatile uint32_t x2787 = UINT32_MAX;

	t48 = (((x2785*x2786)^x2787)>>x2788);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x2845 = 17U;
	volatile uint8_t x2848 = 4U;
	volatile uint32_t t49 = 88U;

	t49 = (((x2845*x2846)^x2847)>>x2848);

	if (t49 != 268435455U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x2861 = 113U;
	uint8_t x2862 = UINT8_MAX;
	volatile int8_t x2863 = INT8_MAX;
	uint16_t x2864 = 0U;

	t50 = (((x2861*x2862)^x2863)>>x2864);

	if (t50 != 28912) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2870 = INT16_MIN;
	int8_t x2871 = 1;
	int8_t x2872 = 7;
	int32_t t51 = -772168480;

	t51 = (((x2869*x2870)^x2871)>>x2872);

	if (t51 != 256) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x2893 = -1LL;
	int8_t x2894 = INT8_MAX;
	static int16_t x2895 = -4774;
	static int16_t x2896 = 1;
	volatile int64_t t52 = 1854716451LL;

	t52 = (((x2893*x2894)^x2895)>>x2896);

	if (t52 != 2413LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x2897 = 50660U;
	static uint32_t x2898 = 15334U;
	int16_t x2899 = INT16_MIN;
	uint32_t x2900 = 1U;
	uint32_t t53 = 0U;

	t53 = (((x2897*x2898)^x2899)>>x2900);

	if (t53 != 1759079276U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x3025 = 107800319901600821LLU;
	volatile uint8_t x3026 = 97U;
	int8_t x3027 = -1;
	uint16_t x3028 = 18U;
	static uint64_t t54 = 14LLU;

	t54 = (((x3025*x3026)^x3027)>>x3028);

	if (t54 != 30479862378136LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3037 = 10564U;
	uint8_t x3038 = 29U;
	static int8_t x3039 = 21;
	static uint16_t x3040 = 1U;
	static int32_t t55 = -2644100;

	t55 = (((x3037*x3038)^x3039)>>x3040);

	if (t55 != 153168) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3061 = 40U;
	static uint8_t x3062 = 31U;
	int8_t x3063 = 0;
	static volatile int32_t t56 = 0;

	t56 = (((x3061*x3062)^x3063)>>x3064);

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3153 = UINT64_MAX;
	uint8_t x3156 = 21U;
	uint64_t t57 = 2LLU;

	t57 = (((x3153*x3154)^x3155)>>x3156);

	if (t57 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3233 = 104582U;
	int32_t x3234 = INT32_MIN;
	uint16_t x3236 = 0U;
	uint32_t t58 = 3U;

	t58 = (((x3233*x3234)^x3235)>>x3236);

	if (t58 != 255U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3237 = UINT16_MAX;
	static uint64_t x3238 = 1101261198LLU;
	int8_t x3239 = -24;
	static uint8_t x3240 = 14U;

	t59 = (((x3237*x3238)^x3239)>>x3240);

	if (t59 != 1125895501865047LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3299 = 118U;
	volatile uint64_t t60 = 1522178907236932457LLU;

	t60 = (((x3297*x3298)^x3299)>>x3300);

	if (t60 != 4611686018427379741LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x3305 = -1LL;
	uint64_t x3306 = UINT64_MAX;
	int64_t x3307 = 227707LL;
	static volatile uint64_t t61 = 83265691206879LLU;

	t61 = (((x3305*x3306)^x3307)>>x3308);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3350 = UINT64_MAX;
	volatile uint8_t x3351 = 8U;
	static int8_t x3352 = 2;

	t62 = (((x3349*x3350)^x3351)>>x3352);

	if (t62 != 2305843009213693954LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3357 = 208995137LLU;
	int16_t x3358 = INT16_MAX;
	int64_t x3359 = INT64_MAX;
	static uint16_t x3360 = 4U;
	volatile uint64_t t63 = 3567LLU;

	t63 = (((x3357*x3358)^x3359)>>x3360);

	if (t63 != 576460324294445108LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3417 = UINT64_MAX;
	static uint16_t x3418 = UINT16_MAX;
	int16_t x3419 = INT16_MAX;
	uint8_t x3420 = 13U;
	static uint64_t t64 = 1091606834904428LLU;

	t64 = (((x3417*x3418)^x3419)>>x3420);

	if (t64 != 2251799813685243LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3465 = 9043272591787LLU;
	uint64_t x3466 = 4005048695030024642LLU;
	int32_t x3467 = INT32_MIN;
	uint8_t x3468 = 0U;
	volatile uint64_t t65 = 1082905LLU;

	t65 = (((x3465*x3466)^x3467)>>x3468);

	if (t65 != 7376713786439767702LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x3530 = -11904108;
	uint8_t x3531 = 37U;
	uint16_t x3532 = 2U;
	static int32_t t66 = -255295;

	t66 = (((x3529*x3530)^x3531)>>x3532);

	if (t66 != 380931465) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3617 = INT16_MIN;
	uint8_t x3618 = UINT8_MAX;
	int16_t x3619 = -1;
	int32_t x3620 = 1;
	volatile int32_t t67 = -2;

	t67 = (((x3617*x3618)^x3619)>>x3620);

	if (t67 != 4177919) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3630 = 34012U;
	volatile uint8_t x3631 = 31U;
	int8_t x3632 = 0;
	volatile uint32_t t68 = 9977684U;

	t68 = (((x3629*x3630)^x3631)>>x3632);

	if (t68 != 1114471227U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x3725 = 455000LLU;
	int64_t x3726 = INT64_MAX;
	int64_t x3727 = -1LL;
	uint16_t x3728 = 3U;
	uint64_t t69 = 477607023876958LLU;

	t69 = (((x3725*x3726)^x3727)>>x3728);

	if (t69 != 56874LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3729 = 12163U;
	int8_t x3730 = INT8_MIN;
	volatile uint32_t x3731 = 581167820U;
	uint16_t x3732 = 9U;

	t70 = (((x3729*x3730)^x3731)>>x3732);

	if (t70 != 7251434U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3746 = 81635LL;
	uint64_t x3747 = UINT64_MAX;
	static volatile uint8_t x3748 = 0U;
	uint64_t t71 = 1LLU;

	t71 = (((x3745*x3746)^x3747)>>x3748);

	if (t71 != 18446744073709469980LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3929 = -1;
	uint64_t x3931 = UINT64_MAX;
	volatile int16_t x3932 = 20;
	uint64_t t72 = 5314LLU;

	t72 = (((x3929*x3930)^x3931)>>x3932);

	if (t72 != 742256132400LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4097 = 4081;
	static uint32_t x4100 = 2U;
	int32_t t73 = -25;

	t73 = (((x4097*x4098)^x4099)>>x4100);

	if (t73 != 33432572) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4137 = INT16_MIN;
	static int32_t x4138 = -1;
	uint32_t x4139 = 1415277U;
	static volatile uint8_t x4140 = 3U;
	static uint32_t t74 = 1234922U;

	t74 = (((x4137*x4138)^x4139)>>x4140);

	if (t74 != 172813U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4237 = 125U;
	static volatile int8_t x4238 = 1;
	uint64_t x4239 = 63930985LLU;
	static int8_t x4240 = 25;
	volatile uint64_t t75 = 794132000214LLU;

	t75 = (((x4237*x4238)^x4239)>>x4240);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4266 = -7;
	uint8_t x4267 = UINT8_MAX;
	int8_t x4268 = 2;

	t76 = (((x4265*x4266)^x4267)>>x4268);

	if (t76 != 62LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4297 = -1;
	static uint32_t x4298 = UINT32_MAX;
	uint16_t x4299 = UINT16_MAX;
	int16_t x4300 = 0;

	t77 = (((x4297*x4298)^x4299)>>x4300);

	if (t77 != 65534U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x4337 = -1;
	int64_t x4338 = -28LL;
	uint8_t x4339 = 79U;
	uint8_t x4340 = 17U;
	volatile int64_t t78 = -3176LL;

	t78 = (((x4337*x4338)^x4339)>>x4340);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x4413 = -1;
	int8_t x4415 = INT8_MIN;
	static uint32_t t79 = 47U;

	t79 = (((x4413*x4414)^x4415)>>x4416);

	if (t79 != 46U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4444 = 0U;

	t80 = (((x4441*x4442)^x4443)>>x4444);

	if (t80 != 47598056419LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4485 = -1LL;
	volatile int16_t x4486 = INT16_MAX;
	int64_t x4487 = -1LL;
	static uint8_t x4488 = 0U;

	t81 = (((x4485*x4486)^x4487)>>x4488);

	if (t81 != 32766LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4599 = UINT16_MAX;
	static uint8_t x4600 = 4U;
	uint32_t t82 = 3U;

	t82 = (((x4597*x4598)^x4599)>>x4600);

	if (t82 != 268348277U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4609 = UINT8_MAX;
	int64_t x4610 = -1LL;
	static int64_t x4611 = -71422920442559LL;
	static int64_t t83 = -103LL;

	t83 = (((x4609*x4610)^x4611)>>x4612);

	if (t83 != 71422920442432LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4665 = INT16_MIN;
	uint64_t x4666 = 13LLU;
	volatile int32_t x4667 = INT32_MIN;
	uint8_t x4668 = 45U;
	volatile uint64_t t84 = 11LLU;

	t84 = (((x4665*x4666)^x4667)>>x4668);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x4709 = 0LL;
	int16_t x4710 = INT16_MIN;
	int16_t x4711 = 130;
	int16_t x4712 = 3;

	t85 = (((x4709*x4710)^x4711)>>x4712);

	if (t85 != 16LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4717 = INT16_MIN;
	volatile int32_t x4718 = -1;
	int32_t x4719 = 1;
	static uint8_t x4720 = 7U;
	static volatile int32_t t86 = 49;

	t86 = (((x4717*x4718)^x4719)>>x4720);

	if (t86 != 256) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x4781 = INT16_MAX;
	uint16_t x4782 = 479U;
	int16_t x4784 = 3;
	volatile uint32_t t87 = 2178989U;

	t87 = (((x4781*x4782)^x4783)>>x4784);

	if (t87 != 1961872U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x4953 = UINT64_MAX;
	int16_t x4954 = INT16_MIN;
	uint16_t x4955 = 21042U;
	uint16_t x4956 = 1U;
	uint64_t t88 = 398494120404603LLU;

	t88 = (((x4953*x4954)^x4955)>>x4956);

	if (t88 != 26905LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4989 = -1;
	volatile uint32_t x4990 = 1822U;
	int32_t x4991 = 4467420;
	uint16_t x4992 = 0U;
	uint32_t t89 = 1U;

	t89 = (((x4989*x4990)^x4991)>>x4992);

	if (t89 != 4290499134U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5030 = 14546997337436326LLU;
	static volatile uint64_t t90 = 722183583LLU;

	t90 = (((x5029*x5030)^x5031)>>x5032);

	if (t90 != 1905656651204158477LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5039 = INT16_MIN;
	uint16_t x5040 = 3U;
	uint32_t t91 = 77759692U;

	t91 = (((x5037*x5038)^x5039)>>x5040);

	if (t91 != 268431360U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x5117 = 39U;
	uint32_t x5118 = UINT32_MAX;
	uint8_t x5119 = 1U;
	int32_t x5120 = 1;
	static uint32_t t92 = 30647336U;

	t92 = (((x5117*x5118)^x5119)>>x5120);

	if (t92 != 2147483628U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5182 = UINT64_MAX;
	static volatile int32_t x5183 = -1;
	uint8_t x5184 = 0U;
	uint64_t t93 = 1338087402840LLU;

	t93 = (((x5181*x5182)^x5183)>>x5184);

	if (t93 != 2269393LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x5285 = UINT64_MAX;
	int8_t x5286 = 3;
	static uint8_t x5288 = 24U;
	uint64_t t94 = 2136470767327393873LLU;

	t94 = (((x5285*x5286)^x5287)>>x5288);

	if (t94 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x5301 = -1;
	volatile uint16_t x5302 = 843U;
	uint32_t t95 = 743231U;

	t95 = (((x5301*x5302)^x5303)>>x5304);

	if (t95 != 105U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5462 = 248254267067187227LLU;
	volatile int16_t x5463 = 1;
	uint8_t x5464 = 31U;

	t96 = (((x5461*x5462)^x5463)>>x5464);

	if (t96 != 7205642439LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x5513 = -1;
	uint32_t x5514 = 252389353U;
	uint8_t x5516 = 29U;
	static volatile uint32_t t97 = 992U;

	t97 = (((x5513*x5514)^x5515)>>x5516);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5645 = 60946522U;
	int16_t x5646 = INT16_MIN;
	int8_t x5647 = -1;
	uint32_t x5648 = 5U;
	uint32_t t98 = 27U;

	t98 = (((x5645*x5646)^x5647)>>x5648);

	if (t98 != 132212735U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x5765 = -1;
	uint8_t x5766 = 2U;
	static int16_t x5767 = -33;
	volatile int32_t t99 = 154614;

	t99 = (((x5765*x5766)^x5767)>>x5768);

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

