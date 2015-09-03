#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 1881775186512556LLU;
uint8_t x68 = 2U;
static uint16_t x205 = 1022U;
uint32_t x207 = 59975U;
static int32_t x208 = 254;
volatile uint32_t t3 = 39387126U;
int16_t x269 = 6;
static int32_t t6 = 91524;
volatile int8_t x359 = INT8_MAX;
int16_t x360 = INT16_MIN;
static uint8_t x366 = 28U;
uint64_t x385 = 35952226136LLU;
int8_t x387 = -40;
int32_t x485 = INT32_MAX;
static int16_t x486 = 0;
int64_t t12 = 50LL;
int16_t x509 = 61;
int8_t x551 = -1;
static uint64_t x633 = 7LLU;
uint32_t x634 = 5U;
static int8_t x720 = -5;
volatile uint64_t t19 = 83394186316928009LLU;
volatile uint8_t x937 = 4U;
static int32_t x940 = -51422538;
int8_t x1191 = INT8_MIN;
static uint8_t x1229 = 3U;
uint64_t t27 = 355622651LLU;
uint8_t x1572 = 7U;
volatile int32_t x1575 = INT32_MAX;
int8_t x1576 = INT8_MIN;
int8_t x1635 = INT8_MIN;
uint64_t t31 = 1706490936LLU;
static uint64_t x1770 = 28LLU;
volatile int32_t x1864 = -1;
int16_t x1930 = 1;
volatile int64_t x2087 = INT64_MAX;
volatile int64_t x2092 = -2272977LL;
int16_t x2131 = -1;
volatile int32_t x2235 = INT32_MIN;
int16_t x2242 = 1;
static int64_t x2261 = INT64_MAX;
int32_t x2300 = -1;
uint16_t x2345 = UINT16_MAX;
volatile int16_t x2525 = 3839;
volatile int32_t t48 = -3;
int64_t x2556 = -1LL;
int32_t x2786 = 27;
static int16_t x2787 = -1;
uint8_t x2830 = 3U;
static int64_t x2831 = 937496186079LL;
volatile int64_t t52 = -271872137496980LL;
static int32_t x2845 = 285957078;
int8_t x3001 = 0;
uint8_t x3002 = 16U;
static volatile int8_t x3096 = 2;
int64_t x3113 = 271LL;
static uint8_t x3115 = UINT8_MAX;
int16_t x3116 = INT16_MIN;
static uint64_t x3265 = 28404069754197LLU;
int8_t x3268 = -1;
int8_t x3277 = 1;
static int32_t x3370 = 0;
uint64_t x3371 = 263635LLU;
uint32_t x3440 = 5U;
int64_t t64 = 34965968080LL;
int8_t x3498 = 0;
static uint16_t x3500 = 2869U;
int64_t x3543 = -1LL;
uint16_t x3558 = 0U;
int8_t x3559 = -1;
uint16_t x3593 = 7U;
volatile int32_t t68 = -8350600;
static uint64_t x3623 = 4422337274278009LLU;
static uint8_t x3624 = 32U;
int8_t x3834 = 0;
static uint8_t x3919 = 56U;
uint64_t x4005 = 167845LLU;
uint8_t x4290 = 3U;
int16_t x4291 = INT16_MAX;
uint64_t x4301 = UINT64_MAX;
volatile uint64_t t76 = 14476710LLU;
volatile uint64_t t77 = 53675789109890LLU;
int32_t x4509 = 0;
int32_t x4512 = -1;
static uint32_t x4523 = 7291U;
static volatile uint32_t t82 = 79093U;
int16_t x4774 = 1;
volatile int64_t t84 = 9549172LL;
static int64_t x4899 = -1095477294341817LL;
uint8_t x4966 = 6U;
static int16_t x5368 = -9;
static int32_t x5387 = -1;
uint32_t t94 = 7991680U;
uint16_t x5439 = UINT16_MAX;
int64_t t97 = -12513LL;


void f0(void) {
	uint16_t x21 = UINT16_MAX;
	static uint8_t x22 = 1U;
	volatile int64_t x23 = INT64_MAX;
	uint64_t x24 = UINT64_MAX;

	t0 = (((x21<<x22)^x23)-x24);

	if (t0 != 9223372036854644738LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x29 = 17U;
	uint8_t x30 = 19U;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = UINT64_MAX;
	uint64_t t1 = 374559551363814105LLU;

	t1 = (((x29<<x30)^x31)-x32);

	if (t1 != 9223372036863688705LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x65 = 419417LL;
	int16_t x66 = 10;
	uint16_t x67 = UINT16_MAX;
	volatile int64_t t2 = 2146LL;

	t2 = (((x65<<x66)^x67)-x68);

	if (t2 != 429497341LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x206 = 11;

	t3 = (((x205<<x206)^x207)-x208);

	if (t3 != 2038089U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x261 = 4942909375LLU;
	uint8_t x262 = 0U;
	int64_t x263 = -1LL;
	uint16_t x264 = 1U;
	volatile uint64_t t4 = 370648853373658654LLU;

	t4 = (((x261<<x262)^x263)-x264);

	if (t4 != 18446744068766642239LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x270 = 0;
	int16_t x271 = -1;
	static uint64_t x272 = UINT64_MAX;
	uint64_t t5 = 5488001LLU;

	t5 = (((x269<<x270)^x271)-x272);

	if (t5 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x281 = 240U;
	uint8_t x282 = 0U;
	int16_t x283 = INT16_MIN;
	volatile int16_t x284 = INT16_MIN;

	t6 = (((x281<<x282)^x283)-x284);

	if (t6 != 240) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x357 = 45012LL;
	volatile uint8_t x358 = 3U;
	volatile int64_t t7 = 123675495LL;

	t7 = (((x357<<x358)^x359)-x360);

	if (t7 != 392927LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x365 = 42LLU;
	int32_t x367 = -1;
	uint32_t x368 = 20U;
	volatile uint64_t t8 = 17333069786434095LLU;

	t8 = (((x365<<x366)^x367)-x368);

	if (t8 != 18446744062435262443LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x386 = 1;
	static int8_t x388 = -18;
	static uint64_t t9 = 808828915691LLU;

	t9 = (((x385<<x386)^x387)-x388);

	if (t9 != 18446744001805099386LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x425 = 4616LLU;
	uint8_t x426 = 0U;
	static uint64_t x427 = UINT64_MAX;
	static int8_t x428 = INT8_MAX;
	volatile uint64_t t10 = 116675363LLU;

	t10 = (((x425<<x426)^x427)-x428);

	if (t10 != 18446744073709546872LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x487 = UINT32_MAX;
	static volatile uint16_t x488 = 20U;
	volatile uint32_t t11 = 1U;

	t11 = (((x485<<x486)^x487)-x488);

	if (t11 != 2147483628U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x493 = UINT16_MAX;
	int16_t x494 = 0;
	int64_t x495 = INT64_MIN;
	int16_t x496 = INT16_MIN;

	t12 = (((x493<<x494)^x495)-x496);

	if (t12 != -9223372036854677505LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x510 = 20;
	int64_t x511 = INT64_MIN;
	uint16_t x512 = 0U;
	static volatile int64_t t13 = 100809LL;

	t13 = (((x509<<x510)^x511)-x512);

	if (t13 != -9223372036790812672LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x549 = 2478U;
	uint64_t x550 = 1LLU;
	int16_t x552 = 0;
	uint32_t t14 = 27U;

	t14 = (((x549<<x550)^x551)-x552);

	if (t14 != 4294962339U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x557 = UINT64_MAX;
	int8_t x558 = 31;
	volatile uint8_t x559 = UINT8_MAX;
	int32_t x560 = INT32_MIN;
	volatile uint64_t t15 = 2408LLU;

	t15 = (((x557<<x558)^x559)-x560);

	if (t15 != 255LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x635 = UINT8_MAX;
	volatile int16_t x636 = INT16_MIN;
	uint64_t t16 = 1711826615485811714LLU;

	t16 = (((x633<<x634)^x635)-x636);

	if (t16 != 32799LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x717 = 1U;
	volatile uint8_t x718 = 13U;
	uint8_t x719 = 0U;
	static int32_t t17 = -11;

	t17 = (((x717<<x718)^x719)-x720);

	if (t17 != 8197) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x809 = 3LLU;
	uint8_t x810 = 5U;
	uint64_t x811 = 374603LLU;
	uint64_t x812 = UINT64_MAX;
	volatile uint64_t t18 = 2315461777831816LLU;

	t18 = (((x809<<x810)^x811)-x812);

	if (t18 != 374572LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x905 = 69855129421607LLU;
	int16_t x906 = 0;
	uint16_t x907 = UINT16_MAX;
	int32_t x908 = 557238848;

	t19 = (((x905<<x906)^x907)-x908);

	if (t19 != 69854572146328LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x938 = 0;
	static int32_t x939 = INT32_MIN;
	volatile int32_t t20 = -127917487;

	t20 = (((x937<<x938)^x939)-x940);

	if (t20 != -2096061106) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1121 = 96U;
	int16_t x1122 = 0;
	uint8_t x1123 = 0U;
	int16_t x1124 = -1;
	volatile int32_t t21 = -620;

	t21 = (((x1121<<x1122)^x1123)-x1124);

	if (t21 != 97) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x1165 = UINT8_MAX;
	static volatile int8_t x1166 = 1;
	static uint16_t x1167 = UINT16_MAX;
	int64_t x1168 = -262393516075450546LL;
	volatile int64_t t22 = 19158653834881LL;

	t22 = (((x1165<<x1166)^x1167)-x1168);

	if (t22 != 262393516075515571LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1173 = UINT16_MAX;
	uint8_t x1174 = 11U;
	static int32_t x1175 = -1;
	uint32_t x1176 = 28U;
	uint32_t t23 = 14581U;

	t23 = (((x1173<<x1174)^x1175)-x1176);

	if (t23 != 4160751587U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1189 = UINT32_MAX;
	uint16_t x1190 = 0U;
	static int16_t x1192 = INT16_MIN;
	uint32_t t24 = 4U;

	t24 = (((x1189<<x1190)^x1191)-x1192);

	if (t24 != 32895U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1213 = INT8_MAX;
	volatile int32_t x1214 = 11;
	volatile int16_t x1215 = INT16_MIN;
	int64_t x1216 = 46LL;
	static int64_t t25 = 128616129LL;

	t25 = (((x1213<<x1214)^x1215)-x1216);

	if (t25 != -231470LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1230 = 1U;
	uint8_t x1231 = UINT8_MAX;
	uint8_t x1232 = 1U;
	int32_t t26 = -19;

	t26 = (((x1229<<x1230)^x1231)-x1232);

	if (t26 != 248) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1253 = 87523168481LLU;
	static int16_t x1254 = 15;
	int32_t x1255 = INT32_MIN;
	int32_t x1256 = 1271382;

	t27 = (((x1253<<x1254)^x1255)-x1256);

	if (t27 != 18443876114806675882LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1489 = 29721U;
	volatile int8_t x1490 = 1;
	uint32_t x1491 = 185173U;
	static int16_t x1492 = -1;
	volatile uint32_t t28 = 449213113U;

	t28 = (((x1489<<x1490)^x1491)-x1492);

	if (t28 != 146280U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x1569 = UINT16_MAX;
	int8_t x1570 = 1;
	int16_t x1571 = 13398;
	int32_t t29 = 18074;

	t29 = (((x1569<<x1570)^x1571)-x1572);

	if (t29 != 117665) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1573 = UINT8_MAX;
	int8_t x1574 = 0;
	int32_t t30 = 0;

	t30 = (((x1573<<x1574)^x1575)-x1576);

	if (t30 != 2147483520) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1633 = 1480774U;
	int64_t x1634 = 1LL;
	static volatile uint64_t x1636 = UINT64_MAX;

	t31 = (((x1633<<x1634)^x1635)-x1636);

	if (t31 != 4292005645LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1665 = UINT8_MAX;
	uint16_t x1666 = 18U;
	int16_t x1667 = INT16_MIN;
	uint16_t x1668 = 8U;
	volatile int32_t t32 = 216988;

	t32 = (((x1665<<x1666)^x1667)-x1668);

	if (t32 != -66879496) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1769 = 0LL;
	static uint64_t x1771 = 160208022566LLU;
	int16_t x1772 = INT16_MIN;
	static uint64_t t33 = 110963LLU;

	t33 = (((x1769<<x1770)^x1771)-x1772);

	if (t33 != 160208055334LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1861 = UINT8_MAX;
	int16_t x1862 = 2;
	uint32_t x1863 = 16U;
	volatile uint32_t t34 = 241699U;

	t34 = (((x1861<<x1862)^x1863)-x1864);

	if (t34 != 1005U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1929 = 15833792074333559LLU;
	uint64_t x1931 = UINT64_MAX;
	int8_t x1932 = INT8_MAX;
	volatile uint64_t t35 = 209477349617LLU;

	t35 = (((x1929<<x1930)^x1931)-x1932);

	if (t35 != 18415076489560884370LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2045 = 6U;
	volatile int8_t x2046 = 1;
	int32_t x2047 = -1;
	uint32_t x2048 = UINT32_MAX;
	uint32_t t36 = 2U;

	t36 = (((x2045<<x2046)^x2047)-x2048);

	if (t36 != 4294967284U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2081 = 1;
	uint32_t x2082 = 16U;
	int32_t x2083 = -1;
	int32_t x2084 = 782217566;
	volatile int32_t t37 = 1072977672;

	t37 = (((x2081<<x2082)^x2083)-x2084);

	if (t37 != -782283103) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2085 = 3;
	static int16_t x2086 = 2;
	int16_t x2088 = INT16_MAX;
	volatile int64_t t38 = 6240LL;

	t38 = (((x2085<<x2086)^x2087)-x2088);

	if (t38 != 9223372036854743028LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2089 = 70187395957500408LLU;
	uint8_t x2090 = 14U;
	uint64_t x2091 = 12893066379500LLU;
	uint64_t t39 = 14122918778777715LLU;

	t39 = (((x2089<<x2090)^x2091)-x2092);

	if (t39 != 6252174175641595837LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2129 = 12U;
	uint64_t x2130 = 0LLU;
	int8_t x2132 = 7;
	volatile uint32_t t40 = 0U;

	t40 = (((x2129<<x2130)^x2131)-x2132);

	if (t40 != 4294967276U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2233 = 6LLU;
	uint16_t x2234 = 12U;
	volatile int64_t x2236 = 8LL;
	static volatile uint64_t t41 = 3420821843583LLU;

	t41 = (((x2233<<x2234)^x2235)-x2236);

	if (t41 != 18446744071562092536LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2241 = INT16_MAX;
	int64_t x2243 = INT64_MIN;
	uint64_t x2244 = 1610329349LLU;
	volatile uint64_t t42 = 1876452LLU;

	t42 = (((x2241<<x2242)^x2243)-x2244);

	if (t42 != 9223372035244511993LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2262 = 0;
	volatile int16_t x2263 = INT16_MIN;
	volatile int64_t x2264 = -10963600580107LL;
	static volatile int64_t t43 = -24LL;

	t43 = (((x2261<<x2262)^x2263)-x2264);

	if (t43 != -9223361073254162934LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2297 = 2627032864256907783LLU;
	static uint8_t x2298 = 6U;
	int32_t x2299 = INT32_MIN;
	volatile uint64_t t44 = 8764098673362107507LLU;

	t44 = (((x2297<<x2298)^x2299)-x2300);

	if (t44 != 16337337425319068097LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2346 = 7U;
	static uint64_t x2347 = 5051427288LLU;
	int16_t x2348 = -1;
	volatile uint64_t t45 = 3196053LLU;

	t45 = (((x2345<<x2346)^x2347)-x2348);

	if (t45 != 5056845401LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2413 = 847955235926089961LLU;
	uint8_t x2414 = 29U;
	volatile int16_t x2415 = 14467;
	int8_t x2416 = INT8_MIN;
	uint64_t t46 = 8224495173LLU;

	t46 = (((x2413<<x2414)^x2415)-x2416);

	if (t46 != 7771475853560527107LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2485 = UINT32_MAX;
	int16_t x2486 = 27;
	int64_t x2487 = INT64_MIN;
	int16_t x2488 = INT16_MIN;
	int64_t t47 = -2809762012726LL;

	t47 = (((x2485<<x2486)^x2487)-x2488);

	if (t47 != -9223372032693993472LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x2526 = 5;
	int8_t x2527 = INT8_MAX;
	uint8_t x2528 = UINT8_MAX;

	t48 = (((x2525<<x2526)^x2527)-x2528);

	if (t48 != 122528) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2553 = 45;
	int16_t x2554 = 1;
	uint16_t x2555 = UINT16_MAX;
	int64_t t49 = 841885267653LL;

	t49 = (((x2553<<x2554)^x2555)-x2556);

	if (t49 != 65446LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x2621 = INT16_MAX;
	uint8_t x2622 = 0U;
	int8_t x2623 = 8;
	uint16_t x2624 = UINT16_MAX;
	int32_t t50 = 2346794;

	t50 = (((x2621<<x2622)^x2623)-x2624);

	if (t50 != -32776) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2785 = 1339U;
	static volatile int64_t x2788 = -1LL;
	int64_t t51 = 935084183750LL;

	t51 = (((x2785<<x2786)^x2787)-x2788);

	if (t51 != 671088640LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x2829 = UINT8_MAX;
	int32_t x2832 = -1;

	t52 = (((x2829<<x2830)^x2831)-x2832);

	if (t52 != 937496185640LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2846 = 2;
	int16_t x2847 = INT16_MAX;
	uint16_t x2848 = 1U;
	int32_t t53 = 1496540;

	t53 = (((x2845<<x2846)^x2847)-x2848);

	if (t53 != 1143804070) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2849 = UINT8_MAX;
	static volatile int32_t x2850 = 1;
	uint8_t x2851 = 11U;
	int8_t x2852 = INT8_MIN;
	static volatile int32_t t54 = -542205297;

	t54 = (((x2849<<x2850)^x2851)-x2852);

	if (t54 != 629) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2945 = UINT8_MAX;
	int16_t x2946 = 6;
	static int16_t x2947 = 19;
	uint64_t x2948 = UINT64_MAX;
	volatile uint64_t t55 = 314167223LLU;

	t55 = (((x2945<<x2946)^x2947)-x2948);

	if (t55 != 16340LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3003 = INT8_MIN;
	int64_t x3004 = -1LL;
	static int64_t t56 = -847668977405LL;

	t56 = (((x3001<<x3002)^x3003)-x3004);

	if (t56 != -127LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3009 = 3U;
	volatile uint16_t x3010 = 3U;
	static int8_t x3011 = INT8_MIN;
	static volatile int8_t x3012 = INT8_MIN;
	volatile int32_t t57 = -229484145;

	t57 = (((x3009<<x3010)^x3011)-x3012);

	if (t57 != 24) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3093 = 9;
	uint8_t x3094 = 12U;
	int32_t x3095 = INT32_MAX;
	int32_t t58 = 46903317;

	t58 = (((x3093<<x3094)^x3095)-x3096);

	if (t58 != 2147446781) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3114 = 7;
	int64_t t59 = 41426817338093299LL;

	t59 = (((x3113<<x3114)^x3115)-x3116);

	if (t59 != 67455LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3266 = 3U;
	int64_t x3267 = -158102959701048LL;
	volatile uint64_t t60 = 15458917210915LLU;

	t60 = (((x3265<<x3266)^x3267)-x3268);

	if (t60 != 18446672186607987041LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3278 = 13;
	int16_t x3279 = -1;
	uint8_t x3280 = 0U;
	volatile int32_t t61 = -550294;

	t61 = (((x3277<<x3278)^x3279)-x3280);

	if (t61 != -8193) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3321 = 2U;
	int8_t x3322 = 1;
	volatile int16_t x3323 = -1;
	uint8_t x3324 = UINT8_MAX;
	int32_t t62 = 51;

	t62 = (((x3321<<x3322)^x3323)-x3324);

	if (t62 != -260) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3369 = 1U;
	int32_t x3372 = -1;
	static volatile uint64_t t63 = 32698726LLU;

	t63 = (((x3369<<x3370)^x3371)-x3372);

	if (t63 != 263635LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x3437 = 811U;
	uint16_t x3438 = 15U;
	int64_t x3439 = INT64_MIN;

	t64 = (((x3437<<x3438)^x3439)-x3440);

	if (t64 != -9223372036828200965LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3497 = 244178697037191LLU;
	int16_t x3499 = INT16_MIN;
	uint64_t t65 = 58492LLU;

	t65 = (((x3497<<x3498)^x3499)-x3500);

	if (t65 != 18446499895012498002LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3541 = 31039583645LLU;
	int8_t x3542 = 4;
	int32_t x3544 = -1;
	volatile uint64_t t66 = 21879181037454258LLU;

	t66 = (((x3541<<x3542)^x3543)-x3544);

	if (t66 != 18446743577076213296LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3557 = INT32_MAX;
	int16_t x3560 = -1;
	int32_t t67 = 12439;

	t67 = (((x3557<<x3558)^x3559)-x3560);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3594 = 12U;
	static volatile uint16_t x3595 = 8U;
	uint8_t x3596 = UINT8_MAX;

	t68 = (((x3593<<x3594)^x3595)-x3596);

	if (t68 != 28425) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x3597 = 1;
	int8_t x3598 = 1;
	int16_t x3599 = -29;
	uint8_t x3600 = 8U;
	volatile int32_t t69 = -7342;

	t69 = (((x3597<<x3598)^x3599)-x3600);

	if (t69 != -39) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3621 = 71;
	uint64_t x3622 = 1LLU;
	uint64_t t70 = 245916LLU;

	t70 = (((x3621<<x3622)^x3623)-x3624);

	if (t70 != 4422337274278103LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3833 = 162U;
	volatile int64_t x3835 = INT64_MAX;
	int64_t x3836 = 1LL;
	volatile int64_t t71 = 33023051033338172LL;

	t71 = (((x3833<<x3834)^x3835)-x3836);

	if (t71 != 9223372036854775644LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x3917 = 5004450LLU;
	uint8_t x3918 = 23U;
	int16_t x3920 = 4332;
	uint64_t t72 = 1175045LLU;

	t72 = (((x3917<<x3918)^x3919)-x3920);

	if (t72 != 41980369301324LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4006 = 34U;
	int64_t x4007 = INT64_MAX;
	int8_t x4008 = 1;
	volatile uint64_t t73 = 73250991334446LLU;

	t73 = (((x4005<<x4006)^x4007)-x4008);

	if (t73 != 9220488481711587326LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4233 = 1671;
	static uint64_t x4234 = 1LLU;
	volatile int64_t x4235 = 1519344789636516538LL;
	int8_t x4236 = INT8_MIN;
	int64_t t74 = 877741049LL;

	t74 = (((x4233<<x4234)^x4235)-x4236);

	if (t74 != 1519344789636515892LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4289 = 808;
	volatile uint8_t x4292 = UINT8_MAX;
	volatile int32_t t75 = 1;

	t75 = (((x4289<<x4290)^x4291)-x4292);

	if (t75 != 26048) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4302 = 3;
	static volatile int16_t x4303 = -1;
	static uint8_t x4304 = UINT8_MAX;

	t76 = (((x4301<<x4302)^x4303)-x4304);

	if (t76 != 18446744073709551368LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x4313 = 104885963U;
	static volatile uint16_t x4314 = 10U;
	volatile uint64_t x4315 = UINT64_MAX;
	static int32_t x4316 = INT32_MIN;

	t77 = (((x4313<<x4314)^x4315)-x4316);

	if (t77 != 2118439935LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4333 = UINT64_MAX;
	static uint8_t x4334 = 32U;
	int16_t x4335 = -90;
	int8_t x4336 = 0;
	volatile uint64_t t78 = 16608463LLU;

	t78 = (((x4333<<x4334)^x4335)-x4336);

	if (t78 != 4294967206LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4357 = UINT8_MAX;
	int16_t x4358 = 7;
	uint8_t x4359 = 12U;
	volatile int16_t x4360 = INT16_MIN;
	static volatile int32_t t79 = 94631;

	t79 = (((x4357<<x4358)^x4359)-x4360);

	if (t79 != 65420) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4477 = 1227U;
	volatile int8_t x4478 = 0;
	int32_t x4479 = INT32_MIN;
	int64_t x4480 = INT64_MAX;
	int64_t t80 = -7798823249853087LL;

	t80 = (((x4477<<x4478)^x4479)-x4480);

	if (t80 != -9223372034707290932LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4510 = 1;
	uint32_t x4511 = 60206U;
	static volatile uint32_t t81 = 108120U;

	t81 = (((x4509<<x4510)^x4511)-x4512);

	if (t81 != 60207U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4521 = INT16_MAX;
	int8_t x4522 = 0;
	int32_t x4524 = -123;

	t82 = (((x4521<<x4522)^x4523)-x4524);

	if (t82 != 25599U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x4637 = 1552;
	uint8_t x4638 = 1U;
	static int32_t x4639 = -11969;
	int32_t x4640 = 20491;
	int32_t t83 = 7421302;

	t83 = (((x4637<<x4638)^x4639)-x4640);

	if (t83 != -29420) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4773 = 4U;
	int8_t x4775 = INT8_MIN;
	volatile int64_t x4776 = INT64_MIN;

	t84 = (((x4773<<x4774)^x4775)-x4776);

	if (t84 != 9223372036854775688LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4785 = 0U;
	static volatile uint8_t x4786 = 15U;
	int8_t x4787 = -1;
	volatile int64_t x4788 = 115LL;
	volatile int64_t t85 = -245423LL;

	t85 = (((x4785<<x4786)^x4787)-x4788);

	if (t85 != -116LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x4897 = UINT64_MAX;
	static int8_t x4898 = 30;
	static uint8_t x4900 = UINT8_MAX;
	volatile uint64_t t86 = 9896146LLU;

	t86 = (((x4897<<x4898)^x4899)-x4900);

	if (t86 != 1095476791402568LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4965 = 3;
	volatile uint16_t x4967 = 8U;
	uint16_t x4968 = 12U;
	volatile int32_t t87 = 6962;

	t87 = (((x4965<<x4966)^x4967)-x4968);

	if (t87 != 188) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x4977 = UINT64_MAX;
	uint8_t x4978 = 12U;
	uint32_t x4979 = 7298U;
	uint64_t x4980 = 30373336484732LLU;
	volatile uint64_t t88 = 20622593307986561LLU;

	t88 = (((x4977<<x4978)^x4979)-x4980);

	if (t88 != 18446713700373061894LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4989 = 1U;
	static volatile uint8_t x4990 = 4U;
	static int32_t x4991 = INT32_MIN;
	uint32_t x4992 = 51U;
	volatile uint32_t t89 = 392350206U;

	t89 = (((x4989<<x4990)^x4991)-x4992);

	if (t89 != 2147483613U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5033 = 501;
	volatile uint16_t x5034 = 8U;
	uint64_t x5035 = 3258217351240LLU;
	int32_t x5036 = 1;
	uint64_t t90 = 12428134LLU;

	t90 = (((x5033<<x5034)^x5035)-x5036);

	if (t90 != 3258217315655LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5185 = UINT16_MAX;
	int32_t x5186 = 0;
	int32_t x5187 = INT32_MIN;
	static uint8_t x5188 = UINT8_MAX;
	int32_t t91 = 660664868;

	t91 = (((x5185<<x5186)^x5187)-x5188);

	if (t91 != -2147418368) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5321 = UINT32_MAX;
	volatile int16_t x5322 = 0;
	static int64_t x5323 = -1LL;
	int64_t x5324 = INT64_MIN;
	static volatile int64_t t92 = -876026555LL;

	t92 = (((x5321<<x5322)^x5323)-x5324);

	if (t92 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5365 = 1046314674001817LLU;
	static uint8_t x5366 = 1U;
	int32_t x5367 = INT32_MIN;
	uint64_t t93 = 793382797LLU;

	t93 = (((x5365<<x5366)^x5367)-x5368);

	if (t93 != 18444651444258680635LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5385 = 176425U;
	int32_t x5386 = 0;
	uint16_t x5388 = 2841U;

	t94 = (((x5385<<x5386)^x5387)-x5388);

	if (t94 != 4294788029U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5401 = 502U;
	uint8_t x5402 = 14U;
	static uint16_t x5403 = UINT16_MAX;
	static int8_t x5404 = -1;
	int32_t t95 = -177184;

	t95 = (((x5401<<x5402)^x5403)-x5404);

	if (t95 != 8224768) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5437 = INT8_MAX;
	static uint32_t x5438 = 17U;
	static volatile int16_t x5440 = INT16_MIN;
	volatile int32_t t96 = 4748;

	t96 = (((x5437<<x5438)^x5439)-x5440);

	if (t96 != 16744447) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x5465 = 1;
	uint32_t x5466 = 7U;
	int64_t x5467 = -403959204693198LL;
	int64_t x5468 = INT64_MIN;

	t97 = (((x5465<<x5466)^x5467)-x5468);

	if (t97 != 9222968077650082738LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5489 = 1962U;
	int16_t x5490 = 1;
	uint8_t x5491 = UINT8_MAX;
	int64_t x5492 = -1476958906160582LL;
	volatile int64_t t98 = -684LL;

	t98 = (((x5489<<x5490)^x5491)-x5492);

	if (t98 != 1476958906164593LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5493 = INT8_MAX;
	uint8_t x5494 = 14U;
	int8_t x5495 = 0;
	uint8_t x5496 = 43U;
	static volatile int32_t t99 = -900744568;

	t99 = (((x5493<<x5494)^x5495)-x5496);

	if (t99 != 2080725) { NG(); } else { ; }
	
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

