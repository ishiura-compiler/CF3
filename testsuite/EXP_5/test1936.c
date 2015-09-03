#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int64_t x133 = -765LL;
volatile uint64_t x136 = 0LLU;
int32_t x153 = -1;
uint64_t t4 = UINT64_MAX;
int16_t x362 = INT16_MAX;
uint16_t x364 = 24U;
volatile uint8_t x369 = 89U;
volatile uint64_t t8 = 13414418558917LLU;
int8_t x837 = 2;
volatile uint64_t t13 = 7LLU;
int8_t x1073 = -1;
uint64_t t14 = UINT64_MAX;
uint8_t x1105 = 40U;
volatile uint64_t t15 = 110LLU;
int8_t x1192 = 0;
static uint8_t x1207 = 1U;
int32_t t17 = -59263;
static uint8_t x1270 = UINT8_MAX;
uint8_t x1308 = 1U;
static volatile uint32_t x1388 = 6U;
uint16_t x1431 = 0U;
uint32_t t21 = 36885U;
volatile int64_t t22 = -447924041LL;
uint32_t x1673 = 1U;
volatile int64_t x1675 = -1LL;
uint64_t t23 = UINT64_MAX;
int8_t x1820 = 0;
int32_t t25 = -18;
uint32_t x1880 = 3U;
uint64_t t26 = 282212355563744791LLU;
int8_t x1970 = 1;
volatile int64_t t27 = INT64_MAX;
int64_t t28 = -66LL;
uint8_t x2008 = 32U;
volatile int64_t x2049 = INT64_MIN;
static uint64_t x2050 = 86754410872335173LLU;
uint8_t x2052 = 58U;
uint32_t x2077 = UINT32_MAX;
uint32_t x2123 = 20938259U;
uint32_t t33 = 14108U;
static int32_t x2157 = -1;
uint32_t x2158 = 1755825U;
volatile uint32_t t34 = UINT32_MAX;
volatile uint64_t x2303 = UINT64_MAX;
int8_t x2304 = 3;
static int32_t x2337 = -59534812;
static uint16_t x2399 = UINT16_MAX;
uint64_t x2400 = 44LLU;
static uint64_t t38 = 24190301LLU;
static int32_t x2577 = -11386285;
static int8_t x2580 = 0;
uint32_t t44 = 0U;
volatile int16_t x2901 = INT16_MIN;
static int32_t x2962 = -1;
static uint64_t x3179 = 0LLU;
static int16_t x3189 = 3962;
uint8_t x3192 = 8U;
volatile int32_t x3317 = INT32_MAX;
uint8_t x3318 = 6U;
uint32_t x3333 = UINT32_MAX;
uint8_t x3334 = 73U;
volatile uint32_t x3335 = 1229457U;
int8_t x3336 = 1;
uint32_t x3552 = 5U;
volatile int64_t t54 = 32LL;
volatile int64_t x3653 = -1LL;
uint16_t x3656 = 4U;
int16_t x3737 = -1;
int8_t x3765 = -11;
static volatile int64_t t58 = -83LL;
uint16_t x3950 = 3U;
volatile uint8_t x3952 = 0U;
uint64_t t60 = 69324831LLU;
uint32_t x4053 = 683890U;
volatile uint16_t x4135 = 1518U;
int16_t x4221 = INT16_MIN;
static uint32_t x4222 = 1985330U;
uint64_t x4363 = UINT64_MAX;
static uint64_t t67 = 6680283LLU;
int64_t x4513 = 130313301235172248LL;
uint8_t x4516 = 0U;
volatile uint64_t x4627 = 18460896LLU;
uint64_t t70 = UINT64_MAX;
static volatile uint8_t x4652 = 23U;
volatile uint64_t x4777 = 1222472LLU;
volatile int32_t x4865 = -1060;
int32_t x4950 = INT32_MIN;
uint32_t x4951 = 129U;
int16_t x5033 = INT16_MIN;
volatile int16_t x5034 = INT16_MAX;
uint32_t x5099 = 13368U;
volatile uint8_t x5100 = 5U;
static uint32_t t77 = UINT32_MAX;
int64_t x5286 = 252491LL;
int8_t x5289 = INT8_MIN;
int64_t x5290 = 2381047728LL;
uint64_t x5291 = 13700LLU;
int8_t x5298 = INT8_MIN;
uint16_t x5472 = 0U;
static volatile int8_t x5617 = INT8_MIN;
static volatile int32_t t82 = 275471;
uint32_t x5690 = 10869U;
uint64_t x5819 = 2798373000583306588LLU;
volatile uint64_t t84 = 2854475LLU;
uint8_t x5950 = 19U;
static uint16_t x5973 = UINT16_MAX;
volatile int8_t x5976 = 6;
int64_t x6084 = 3LL;
int8_t x6089 = INT8_MIN;
int64_t t88 = -178LL;
volatile int32_t x6151 = -1;
uint8_t x6152 = 45U;
volatile uint64_t t89 = 0LLU;
volatile uint16_t x6170 = 14U;
volatile uint64_t t92 = UINT64_MAX;
int16_t x6291 = INT16_MIN;
volatile uint32_t t94 = 2057348U;
volatile uint8_t x6381 = 0U;
uint32_t x6384 = 0U;
int64_t t97 = -2371700LL;
int32_t t98 = 1;
int64_t x6869 = -1LL;
int8_t x6870 = 5;
uint8_t x6872 = 16U;


void f0(void) {
	uint8_t x2 = 1U;
	static uint16_t x3 = 326U;
	uint8_t x4 = 9U;
	volatile int32_t t0 = -219718386;

	t0 = (x1|((x2|x3)<<x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x21 = INT8_MIN;
	volatile int32_t x22 = 3;
	static uint64_t x23 = UINT64_MAX;
	int16_t x24 = 53;
	volatile uint64_t t1 = 3607777330433393LLU;

	t1 = (x21|((x22|x23)<<x24));

	if (t1 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x97 = -1LL;
	uint64_t x98 = 32468992LLU;
	int8_t x99 = -2;
	volatile uint8_t x100 = 4U;
	uint64_t t2 = UINT64_MAX;

	t2 = (x97|((x98|x99)<<x100));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x134 = 3U;
	uint8_t x135 = 1U;
	volatile int64_t t3 = -2271925032LL;

	t3 = (x133|((x134|x135)<<x136));

	if (t3 != -765LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x154 = 1757582615LLU;
	static int16_t x155 = -1;
	uint16_t x156 = 5U;

	t4 = (x153|((x154|x155)<<x156));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x361 = 13;
	int64_t x363 = 246870014LL;
	volatile int64_t t5 = -31555861744582LL;

	t5 = (x361|((x362|x363)<<x364));

	if (t5 != 4141860285054989LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x370 = 1U;
	uint64_t x371 = UINT64_MAX;
	int8_t x372 = 0;
	static uint64_t t6 = UINT64_MAX;

	t6 = (x369|((x370|x371)<<x372));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x389 = UINT16_MAX;
	volatile uint64_t x390 = UINT64_MAX;
	uint16_t x391 = 26U;
	uint8_t x392 = 59U;
	static uint64_t t7 = 2117332618643LLU;

	t7 = (x389|((x390|x391)<<x392));

	if (t7 != 17870283321406193663LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x457 = INT16_MAX;
	uint64_t x458 = 248LLU;
	int64_t x459 = INT64_MAX;
	uint8_t x460 = 18U;

	t8 = (x457|((x458|x459)<<x460));

	if (t8 != 18446744073709322239LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x481 = INT32_MIN;
	int64_t x482 = INT64_MIN;
	uint64_t x483 = 1231267LLU;
	uint8_t x484 = 34U;
	volatile uint64_t t9 = 36LLU;

	t9 = (x481|((x482|x483)<<x484));

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x513 = 4U;
	static uint32_t x514 = UINT32_MAX;
	uint8_t x515 = 3U;
	volatile uint32_t x516 = 11U;
	uint32_t t10 = 1848315523U;

	t10 = (x513|((x514|x515)<<x516));

	if (t10 != 4294965252U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x741 = INT64_MIN;
	uint64_t x742 = UINT64_MAX;
	static int32_t x743 = INT32_MAX;
	int8_t x744 = 7;
	volatile uint64_t t11 = 37890647LLU;

	t11 = (x741|((x742|x743)<<x744));

	if (t11 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x769 = -12;
	volatile int32_t x770 = -1;
	uint64_t x771 = 102149881530756LLU;
	static uint16_t x772 = 25U;
	static uint64_t t12 = 88691879618LLU;

	t12 = (x769|((x770|x771)<<x772));

	if (t12 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x838 = UINT64_MAX;
	int32_t x839 = -4473;
	volatile int64_t x840 = 39LL;

	t13 = (x837|((x838|x839)<<x840));

	if (t13 != 18446743523953737730LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1074 = 2912540LLU;
	uint8_t x1075 = 1U;
	static uint32_t x1076 = 12U;

	t14 = (x1073|((x1074|x1075)<<x1076));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1106 = -1;
	uint64_t x1107 = 50671427458477LLU;
	static int8_t x1108 = 23;

	t15 = (x1105|((x1106|x1107)<<x1108));

	if (t15 != 18446744073701163048LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x1189 = -1;
	uint64_t x1190 = 189607991LLU;
	int64_t x1191 = INT64_MAX;
	uint64_t t16 = UINT64_MAX;

	t16 = (x1189|((x1190|x1191)<<x1192));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x1205 = 8;
	int16_t x1206 = 16167;
	uint16_t x1208 = 3U;

	t17 = (x1205|((x1206|x1207)<<x1208));

	if (t17 != 129336) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1269 = -1;
	uint64_t x1271 = 157185295483LLU;
	uint16_t x1272 = 9U;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x1269|((x1270|x1271)<<x1272));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1305 = -1;
	int8_t x1306 = -4;
	uint32_t x1307 = 47143798U;
	uint32_t t19 = UINT32_MAX;

	t19 = (x1305|((x1306|x1307)<<x1308));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1385 = INT32_MAX;
	int64_t x1386 = -1LL;
	uint64_t x1387 = 31146959728571LLU;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x1385|((x1386|x1387)<<x1388));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1429 = INT32_MIN;
	static uint32_t x1430 = 9U;
	uint8_t x1432 = 6U;

	t21 = (x1429|((x1430|x1431)<<x1432));

	if (t21 != 2147484224U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1645 = 1084269123368LL;
	static volatile int8_t x1646 = INT8_MAX;
	static uint32_t x1647 = 279U;
	static uint8_t x1648 = 1U;

	t22 = (x1645|((x1646|x1647)<<x1648));

	if (t22 != 1084269123582LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1674 = UINT64_MAX;
	uint8_t x1676 = 0U;

	t23 = (x1673|((x1674|x1675)<<x1676));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1777 = 1;
	int64_t x1778 = 17598076LL;
	uint64_t x1779 = 98LLU;
	volatile int8_t x1780 = 10;
	uint64_t t24 = 1007224LLU;

	t24 = (x1777|((x1778|x1779)<<x1780));

	if (t24 != 18020431873LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1817 = 1U;
	int8_t x1818 = 2;
	volatile int8_t x1819 = 0;

	t25 = (x1817|((x1818|x1819)<<x1820));

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1877 = UINT8_MAX;
	uint64_t x1878 = 174869430LLU;
	uint64_t x1879 = 133302008102191037LLU;

	t26 = (x1877|((x1878|x1879)<<x1880));

	if (t26 != 1066416065106935295LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1969 = INT64_MAX;
	uint16_t x1971 = UINT16_MAX;
	uint8_t x1972 = 12U;

	t27 = (x1969|((x1970|x1971)<<x1972));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1973 = INT64_MIN;
	uint8_t x1974 = 8U;
	uint16_t x1975 = 1U;
	uint16_t x1976 = 20U;

	t28 = (x1973|((x1974|x1975)<<x1976));

	if (t28 != -9223372036845338624LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2005 = INT8_MIN;
	uint64_t x2006 = 136232630LLU;
	int16_t x2007 = INT16_MIN;
	volatile uint64_t t29 = 3LLU;

	t29 = (x2005|((x2006|x2007)<<x2008));

	if (t29 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2051 = -297906739LL;
	uint64_t t30 = 41303528LLU;

	t30 = (x2049|((x2050|x2051)<<x2052));

	if (t30 != 12970366926827028480LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2061 = 0U;
	volatile uint32_t x2062 = 142726U;
	int32_t x2063 = 1560783;
	int16_t x2064 = 0;
	static volatile uint32_t t31 = 67572778U;

	t31 = (x2061|((x2062|x2063)<<x2064));

	if (t31 != 1572303U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x2078 = UINT8_MAX;
	int8_t x2079 = 0;
	int32_t x2080 = 3;
	uint32_t t32 = UINT32_MAX;

	t32 = (x2077|((x2078|x2079)<<x2080));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2121 = INT8_MAX;
	static int8_t x2122 = -6;
	uint8_t x2124 = 8U;

	t33 = (x2121|((x2122|x2123)<<x2124));

	if (t33 != 4294966143U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x2159 = 0U;
	uint8_t x2160 = 1U;

	t34 = (x2157|((x2158|x2159)<<x2160));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2301 = 62U;
	uint16_t x2302 = 13772U;
	uint64_t t35 = 16113614LLU;

	t35 = (x2301|((x2302|x2303)<<x2304));

	if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2338 = UINT32_MAX;
	uint64_t x2339 = 21070388LLU;
	uint32_t x2340 = 25U;
	uint64_t t36 = 133981021165576LLU;

	t36 = (x2337|((x2338|x2339)<<x2340));

	if (t36 != 18446744073683571236LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2369 = INT16_MIN;
	static volatile int8_t x2370 = 3;
	uint64_t x2371 = UINT64_MAX;
	int16_t x2372 = 49;
	uint64_t t37 = 27543413124748LLU;

	t37 = (x2369|((x2370|x2371)<<x2372));

	if (t37 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2397 = INT32_MIN;
	static volatile uint64_t x2398 = 2338LLU;

	t38 = (x2397|((x2398|x2399)<<x2400));

	if (t38 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2529 = -7;
	volatile uint16_t x2530 = UINT16_MAX;
	uint16_t x2531 = 24U;
	volatile uint16_t x2532 = 3U;
	int32_t t39 = -4;

	t39 = (x2529|((x2530|x2531)<<x2532));

	if (t39 != -7) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2578 = 33211202725LLU;
	uint32_t x2579 = UINT32_MAX;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x2577|((x2578|x2579)<<x2580));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2617 = INT16_MIN;
	uint64_t x2618 = 21598580843410118LLU;
	int16_t x2619 = -9;
	static uint8_t x2620 = 0U;
	volatile uint64_t t41 = 20548607290031LLU;

	t41 = (x2617|((x2618|x2619)<<x2620));

	if (t41 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2629 = 5472826LLU;
	uint32_t x2630 = 1737U;
	int8_t x2631 = -1;
	static uint8_t x2632 = 11U;
	volatile uint64_t t42 = 151171076492021206LLU;

	t42 = (x2629|((x2630|x2631)<<x2632));

	if (t42 != 4294965818LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x2649 = 9;
	uint16_t x2650 = UINT16_MAX;
	volatile uint8_t x2651 = 2U;
	uint8_t x2652 = 3U;
	volatile int32_t t43 = -58;

	t43 = (x2649|((x2650|x2651)<<x2652));

	if (t43 != 524281) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2697 = INT8_MIN;
	uint32_t x2698 = 10U;
	volatile int16_t x2699 = 3;
	static uint8_t x2700 = 2U;

	t44 = (x2697|((x2698|x2699)<<x2700));

	if (t44 != 4294967212U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x2701 = INT32_MIN;
	uint8_t x2702 = UINT8_MAX;
	uint32_t x2703 = 28559U;
	uint16_t x2704 = 19U;
	volatile uint32_t t45 = 108793U;

	t45 = (x2701|((x2702|x2703)<<x2704));

	if (t45 != 4294443008U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2902 = UINT32_MAX;
	int8_t x2903 = INT8_MIN;
	int16_t x2904 = 14;
	uint32_t t46 = 25909214U;

	t46 = (x2901|((x2902|x2903)<<x2904));

	if (t46 != 4294950912U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x2961 = 0U;
	uint32_t x2963 = 2U;
	int16_t x2964 = 8;
	uint32_t t47 = 10266U;

	t47 = (x2961|((x2962|x2963)<<x2964));

	if (t47 != 4294967040U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3041 = UINT64_MAX;
	uint64_t x3042 = UINT64_MAX;
	int64_t x3043 = -65065LL;
	volatile int16_t x3044 = 6;
	uint64_t t48 = UINT64_MAX;

	t48 = (x3041|((x3042|x3043)<<x3044));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x3153 = -151;
	uint32_t x3154 = 362U;
	int32_t x3155 = INT32_MAX;
	volatile int8_t x3156 = 1;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x3153|((x3154|x3155)<<x3156));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3177 = UINT64_MAX;
	int64_t x3178 = 2LL;
	uint8_t x3180 = 0U;
	static uint64_t t50 = UINT64_MAX;

	t50 = (x3177|((x3178|x3179)<<x3180));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3190 = 7;
	static volatile int8_t x3191 = 15;
	volatile int32_t t51 = -29844;

	t51 = (x3189|((x3190|x3191)<<x3192));

	if (t51 != 3962) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x3319 = INT8_MAX;
	int8_t x3320 = 1;
	int32_t t52 = INT32_MAX;

	t52 = (x3317|((x3318|x3319)<<x3320));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t t53 = UINT32_MAX;

	t53 = (x3333|((x3334|x3335)<<x3336));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3549 = INT64_MIN;
	int16_t x3550 = INT16_MAX;
	uint8_t x3551 = 80U;

	t54 = (x3549|((x3550|x3551)<<x3552));

	if (t54 != -9223372036853727264LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x3654 = 128244616733102LLU;
	int16_t x3655 = -13993;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x3653|((x3654|x3655)<<x3656));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3738 = INT16_MIN;
	uint64_t x3739 = UINT64_MAX;
	static uint32_t x3740 = 3U;
	uint64_t t56 = UINT64_MAX;

	t56 = (x3737|((x3738|x3739)<<x3740));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3766 = 469882720196LL;
	volatile uint8_t x3767 = 1U;
	int8_t x3768 = 4;
	int64_t t57 = 688124032121996065LL;

	t57 = (x3765|((x3766|x3767)<<x3768));

	if (t57 != -11LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x3781 = INT64_MIN;
	uint32_t x3782 = 8U;
	int8_t x3783 = INT8_MIN;
	int8_t x3784 = 0;

	t58 = (x3781|((x3782|x3783)<<x3784));

	if (t58 != -9223372032559808632LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3949 = INT16_MIN;
	int8_t x3951 = INT8_MAX;
	int32_t t59 = 684529;

	t59 = (x3949|((x3950|x3951)<<x3952));

	if (t59 != -32641) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4029 = 899LLU;
	volatile int8_t x4030 = 28;
	uint16_t x4031 = 211U;
	int8_t x4032 = 3;

	t60 = (x4029|((x4030|x4031)<<x4032));

	if (t60 != 2043LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x4041 = -1;
	int8_t x4042 = INT8_MAX;
	uint8_t x4043 = UINT8_MAX;
	uint8_t x4044 = 7U;
	int32_t t61 = -15;

	t61 = (x4041|((x4042|x4043)<<x4044));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4054 = 4131234002161224LLU;
	uint8_t x4055 = UINT8_MAX;
	int16_t x4056 = 1;
	uint64_t t62 = 5888591833LLU;

	t62 = (x4053|((x4054|x4055)<<x4056));

	if (t62 != 8262468004478974LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x4133 = INT8_MIN;
	int8_t x4134 = INT8_MAX;
	volatile uint8_t x4136 = 4U;
	volatile int32_t t63 = 0;

	t63 = (x4133|((x4134|x4135)<<x4136));

	if (t63 != -16) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x4223 = 2874610U;
	int8_t x4224 = 2;
	volatile uint32_t t64 = 308939778U;

	t64 = (x4221|((x4222|x4223)<<x4224));

	if (t64 != 4294967240U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x4225 = 0;
	volatile uint8_t x4226 = 6U;
	static int64_t x4227 = 11799894962575156LL;
	uint8_t x4228 = 4U;
	volatile int64_t t65 = 112126757096392650LL;

	t65 = (x4225|((x4226|x4227)<<x4228));

	if (t65 != 188798319401202528LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4285 = -1;
	volatile uint8_t x4286 = 6U;
	static int16_t x4287 = 8889;
	static int16_t x4288 = 4;
	volatile int32_t t66 = 33763488;

	t66 = (x4285|((x4286|x4287)<<x4288));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4361 = -173454;
	uint64_t x4362 = 8018LLU;
	uint32_t x4364 = 1U;

	t67 = (x4361|((x4362|x4363)<<x4364));

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4445 = INT8_MIN;
	static volatile uint32_t x4446 = UINT32_MAX;
	int8_t x4447 = 27;
	static uint8_t x4448 = 5U;
	uint32_t t68 = 0U;

	t68 = (x4445|((x4446|x4447)<<x4448));

	if (t68 != 4294967264U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x4514 = 31852U;
	uint64_t x4515 = UINT64_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x4513|((x4514|x4515)<<x4516));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x4625 = UINT64_MAX;
	int16_t x4626 = INT16_MIN;
	static uint32_t x4628 = 7U;

	t70 = (x4625|((x4626|x4627)<<x4628));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4649 = UINT16_MAX;
	static uint32_t x4650 = UINT32_MAX;
	int32_t x4651 = -1;
	uint32_t t71 = 1967806395U;

	t71 = (x4649|((x4650|x4651)<<x4652));

	if (t71 != 4286644223U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4681 = 92244U;
	uint8_t x4682 = UINT8_MAX;
	uint32_t x4683 = UINT32_MAX;
	uint16_t x4684 = 2U;
	uint32_t t72 = 18973U;

	t72 = (x4681|((x4682|x4683)<<x4684));

	if (t72 != 4294967292U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4778 = INT64_MIN;
	static uint64_t x4779 = UINT64_MAX;
	uint16_t x4780 = 0U;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x4777|((x4778|x4779)<<x4780));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4866 = 2U;
	int32_t x4867 = 14809;
	static uint8_t x4868 = 3U;
	volatile int32_t t74 = 22;

	t74 = (x4865|((x4866|x4867)<<x4868));

	if (t74 != -36) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4949 = UINT32_MAX;
	static volatile int32_t x4952 = 1;
	uint32_t t75 = UINT32_MAX;

	t75 = (x4949|((x4950|x4951)<<x4952));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x5035 = UINT64_MAX;
	volatile uint8_t x5036 = 5U;
	uint64_t t76 = 5117066543388LLU;

	t76 = (x5033|((x5034|x5035)<<x5036));

	if (t76 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5097 = UINT32_MAX;
	uint8_t x5098 = 1U;

	t77 = (x5097|((x5098|x5099)<<x5100));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5285 = INT32_MAX;
	uint64_t x5287 = 18238460251LLU;
	static int8_t x5288 = 1;
	volatile uint64_t t78 = 212288491LLU;

	t78 = (x5285|((x5286|x5287)<<x5288));

	if (t78 != 36507222015LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5292 = 1;
	uint64_t t79 = 161230608LLU;

	t79 = (x5289|((x5290|x5291)<<x5292));

	if (t79 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x5297 = 4938741049LLU;
	uint32_t x5299 = 1U;
	uint64_t x5300 = 19LLU;
	static uint64_t t80 = 73981787493491LLU;

	t80 = (x5297|((x5298|x5299)<<x5300));

	if (t80 != 8562619705LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x5469 = UINT16_MAX;
	int8_t x5470 = 3;
	uint32_t x5471 = 610861U;
	uint32_t t81 = 384U;

	t81 = (x5469|((x5470|x5471)<<x5472));

	if (t81 != 655359U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5618 = 108U;
	uint16_t x5619 = 570U;
	int8_t x5620 = 18;

	t82 = (x5617|((x5618|x5619)<<x5620));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5689 = INT16_MAX;
	int8_t x5691 = -1;
	uint8_t x5692 = 1U;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x5689|((x5690|x5691)<<x5692));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x5817 = INT64_MIN;
	int8_t x5818 = INT8_MAX;
	static uint32_t x5820 = 1U;

	t84 = (x5817|((x5818|x5819)<<x5820));

	if (t84 != 14820118038021389054LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5949 = -8775;
	uint64_t x5951 = 32LLU;
	int16_t x5952 = 62;
	uint64_t t85 = 26913973LLU;

	t85 = (x5949|((x5950|x5951)<<x5952));

	if (t85 != 18446744073709542841LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5974 = 3;
	volatile int64_t x5975 = 7961300037LL;
	volatile int64_t t86 = 16557678779980727LL;

	t86 = (x5973|((x5974|x5975)<<x5976));

	if (t86 != 509523263487LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x6081 = UINT16_MAX;
	volatile uint8_t x6082 = 0U;
	volatile uint16_t x6083 = 88U;
	volatile int32_t t87 = -2367;

	t87 = (x6081|((x6082|x6083)<<x6084));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x6090 = 667LL;
	uint32_t x6091 = 10545123U;
	static volatile uint16_t x6092 = 14U;

	t88 = (x6089|((x6090|x6091)<<x6092));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x6149 = 52U;
	uint64_t x6150 = 25LLU;

	t89 = (x6149|((x6150|x6151)<<x6152));

	if (t89 != 18446708889337462836LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x6169 = -1;
	int8_t x6171 = 38;
	static int8_t x6172 = 0;
	volatile int32_t t90 = 2681;

	t90 = (x6169|((x6170|x6171)<<x6172));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x6209 = INT16_MAX;
	static uint16_t x6210 = 5U;
	uint8_t x6211 = 4U;
	uint8_t x6212 = 2U;
	static int32_t t91 = -35;

	t91 = (x6209|((x6210|x6211)<<x6212));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6269 = INT8_MAX;
	volatile int64_t x6270 = -1LL;
	uint64_t x6271 = 4652376166710060LLU;
	int8_t x6272 = 0;

	t92 = (x6269|((x6270|x6271)<<x6272));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6289 = INT8_MIN;
	volatile uint64_t x6290 = 270269737817356306LLU;
	uint8_t x6292 = 42U;
	static volatile uint64_t t93 = 6056LLU;

	t93 = (x6289|((x6290|x6291)<<x6292));

	if (t93 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x6297 = UINT8_MAX;
	volatile uint32_t x6298 = 765U;
	uint8_t x6299 = UINT8_MAX;
	volatile int8_t x6300 = 0;

	t94 = (x6297|((x6298|x6299)<<x6300));

	if (t94 != 767U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6382 = INT8_MAX;
	uint32_t x6383 = 0U;
	volatile uint32_t t95 = 6U;

	t95 = (x6381|((x6382|x6383)<<x6384));

	if (t95 != 127U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6485 = -1;
	static uint8_t x6486 = 7U;
	static uint32_t x6487 = UINT32_MAX;
	volatile int8_t x6488 = 2;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (x6485|((x6486|x6487)<<x6488));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6685 = -1LL;
	static volatile uint32_t x6686 = 2935583U;
	static int16_t x6687 = INT16_MIN;
	static uint16_t x6688 = 9U;

	t97 = (x6685|((x6686|x6687)<<x6688));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x6765 = UINT16_MAX;
	static int8_t x6766 = INT8_MAX;
	uint16_t x6767 = 160U;
	static volatile int64_t x6768 = 21LL;

	t98 = (x6765|((x6766|x6767)<<x6768));

	if (t98 != 534839295) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x6871 = 7951U;
	int64_t t99 = -43219233271LL;

	t99 = (x6869|((x6870|x6871)<<x6872));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

