#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x193 = UINT16_MAX;
static int32_t x262 = INT32_MAX;
int32_t t2 = -1;
static uint8_t x338 = 105U;
int8_t x535 = INT8_MAX;
uint8_t x536 = 2U;
uint8_t x713 = 40U;
int16_t x714 = -1;
static volatile int32_t t8 = -1683501;
volatile uint32_t x815 = 152994U;
uint64_t x914 = 1152740090373924545LLU;
uint16_t x915 = 10U;
int32_t x1037 = -1;
static volatile uint8_t x1040 = 0U;
static int8_t x1246 = INT8_MAX;
int8_t x1247 = 45;
volatile int16_t x1566 = 2;
static uint8_t x1568 = 3U;
int32_t x1650 = INT32_MAX;
int64_t x1685 = -2399LL;
int16_t x1713 = INT16_MAX;
static volatile uint16_t x1842 = 2174U;
static int32_t t20 = 12492;
int16_t x1991 = INT16_MAX;
int32_t x2063 = 976;
int16_t x2064 = 1;
static uint64_t x2091 = 67298472911359LLU;
int16_t x2137 = 24;
int16_t x2139 = INT16_MAX;
static int32_t x2140 = 1;
volatile int8_t x2186 = INT8_MIN;
volatile int8_t x2202 = INT8_MIN;
volatile int64_t x2229 = INT64_MIN;
uint8_t x2472 = 11U;
static volatile uint64_t x2513 = 29LLU;
int64_t x2601 = 439719LL;
static int32_t t37 = -1395;
uint8_t x2770 = UINT8_MAX;
static int8_t x2772 = 1;
uint16_t x2956 = 1U;
int32_t t39 = -62795258;
volatile int16_t x3082 = INT16_MAX;
static int8_t x3083 = INT8_MAX;
volatile int32_t t42 = -955158;
static volatile uint16_t x3106 = 2U;
uint8_t x3219 = UINT8_MAX;
uint8_t x3220 = 2U;
static uint8_t x3236 = 1U;
int32_t x3348 = 20;
static volatile uint64_t t47 = 599817828391LLU;
volatile int64_t t48 = -139271LL;
static int8_t x3457 = -1;
int32_t x3618 = INT32_MIN;
static uint16_t x3619 = 5245U;
volatile int16_t x3625 = 224;
volatile int8_t x3654 = -1;
int32_t t57 = 5;
uint32_t x3895 = 8818U;
uint8_t x3909 = 3U;
int16_t x3910 = INT16_MIN;
volatile uint64_t t59 = 17754367706296525LLU;
uint64_t x3983 = 9LLU;
static uint64_t t60 = 4296LLU;
static uint32_t x4011 = 1012648775U;
volatile uint32_t t61 = 7714606U;
uint64_t x4043 = 4835493645597552LLU;
int16_t x4137 = INT16_MIN;
uint8_t x4139 = UINT8_MAX;
uint8_t x4140 = 0U;
int64_t x4410 = -40LL;
uint16_t x4505 = UINT16_MAX;
uint64_t t69 = 29760458490452LLU;
uint8_t x4566 = UINT8_MAX;
static int8_t x4567 = 3;
volatile uint64_t x4602 = 3127LLU;
volatile int8_t x4650 = INT8_MAX;
volatile int64_t x4693 = INT64_MIN;
volatile int64_t x4697 = 384473815063654385LL;
volatile int32_t t74 = -1;
static volatile uint32_t x4773 = 70501123U;
uint32_t x4836 = 1U;
static volatile uint16_t x5077 = 116U;
int8_t x5082 = INT8_MIN;
uint16_t x5083 = 494U;
int64_t x5095 = INT64_MAX;
static uint16_t x5096 = 0U;
int8_t x5141 = INT8_MIN;
static volatile int16_t x5142 = INT16_MIN;
uint8_t x5144 = 5U;
static int16_t x5225 = INT16_MIN;
uint32_t x5227 = UINT32_MAX;
uint8_t x5383 = 14U;
int32_t t85 = 15282773;
int8_t x5442 = -1;
uint16_t x5444 = 3U;
uint64_t x5470 = 6531319LLU;
int8_t x5643 = 1;
int32_t t90 = -286;
int64_t x6069 = 23755176266LL;
int8_t x6158 = INT8_MAX;
static volatile int8_t x6159 = 1;
uint16_t x6212 = 9U;
int32_t x6285 = INT32_MIN;
volatile uint64_t x6299 = 183227691477LLU;
uint64_t t98 = 0LLU;


void f0(void) {
	static int8_t x93 = -1;
	int16_t x94 = -85;
	uint8_t x95 = UINT8_MAX;
	uint8_t x96 = 6U;
	int32_t t0 = 2240417;

	t0 = ((x93==x94)/(x95<<x96));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x194 = 14686702260877LLU;
	uint8_t x195 = UINT8_MAX;
	uint16_t x196 = 21U;
	volatile int32_t t1 = -1472897;

	t1 = ((x193==x194)/(x195<<x196));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x261 = INT64_MAX;
	static uint16_t x263 = UINT16_MAX;
	int8_t x264 = 3;

	t2 = ((x261==x262)/(x263<<x264));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x281 = INT16_MIN;
	uint32_t x282 = 4274U;
	uint16_t x283 = UINT16_MAX;
	uint16_t x284 = 0U;
	int32_t t3 = 13;

	t3 = ((x281==x282)/(x283<<x284));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x337 = 1;
	uint32_t x339 = 694317U;
	static uint8_t x340 = 0U;
	volatile uint32_t t4 = 6878093U;

	t4 = ((x337==x338)/(x339<<x340));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x389 = INT64_MIN;
	volatile int32_t x390 = INT32_MIN;
	uint16_t x391 = 571U;
	volatile int8_t x392 = 0;
	volatile int32_t t5 = -776482705;

	t5 = ((x389==x390)/(x391<<x392));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x413 = 130260457236222LL;
	uint16_t x414 = 13U;
	uint8_t x415 = 31U;
	uint8_t x416 = 2U;
	volatile int32_t t6 = 31204662;

	t6 = ((x413==x414)/(x415<<x416));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x533 = 7148696LLU;
	volatile int64_t x534 = 46316LL;
	static int32_t t7 = -190667;

	t7 = ((x533==x534)/(x535<<x536));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x715 = 14;
	static volatile uint16_t x716 = 1U;

	t8 = ((x713==x714)/(x715<<x716));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x801 = INT8_MAX;
	static int8_t x802 = INT8_MIN;
	volatile int64_t x803 = 27LL;
	uint8_t x804 = 14U;
	volatile int64_t t9 = -2920LL;

	t9 = ((x801==x802)/(x803<<x804));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x813 = -1;
	uint16_t x814 = UINT16_MAX;
	int32_t x816 = 3;
	volatile uint32_t t10 = 7163195U;

	t10 = ((x813==x814)/(x815<<x816));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x913 = 1;
	int64_t x916 = 0LL;
	int32_t t11 = 133070580;

	t11 = ((x913==x914)/(x915<<x916));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x1038 = INT16_MIN;
	int16_t x1039 = INT16_MAX;
	volatile int32_t t12 = 3424482;

	t12 = ((x1037==x1038)/(x1039<<x1040));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1205 = UINT16_MAX;
	static int32_t x1206 = 13183926;
	volatile int8_t x1207 = INT8_MAX;
	int8_t x1208 = 0;
	int32_t t13 = -1843;

	t13 = ((x1205==x1206)/(x1207<<x1208));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x1245 = UINT32_MAX;
	uint16_t x1248 = 24U;
	static volatile int32_t t14 = -12;

	t14 = ((x1245==x1246)/(x1247<<x1248));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1337 = INT8_MIN;
	int8_t x1338 = 3;
	volatile uint8_t x1339 = 7U;
	int32_t x1340 = 0;
	volatile int32_t t15 = -3;

	t15 = ((x1337==x1338)/(x1339<<x1340));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x1565 = -1;
	volatile uint64_t x1567 = UINT64_MAX;
	uint64_t t16 = 63576609652388932LLU;

	t16 = ((x1565==x1566)/(x1567<<x1568));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1649 = UINT8_MAX;
	volatile int16_t x1651 = 24;
	int32_t x1652 = 2;
	volatile int32_t t17 = 875489;

	t17 = ((x1649==x1650)/(x1651<<x1652));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1686 = INT64_MIN;
	int8_t x1687 = 2;
	static uint16_t x1688 = 0U;
	int32_t t18 = -1;

	t18 = ((x1685==x1686)/(x1687<<x1688));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1714 = -71941066LL;
	uint64_t x1715 = 107014542LLU;
	uint8_t x1716 = 5U;
	volatile uint64_t t19 = 47LLU;

	t19 = ((x1713==x1714)/(x1715<<x1716));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1841 = -372991734;
	static volatile uint8_t x1843 = 1U;
	static int32_t x1844 = 0;

	t20 = ((x1841==x1842)/(x1843<<x1844));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1989 = INT16_MAX;
	int16_t x1990 = -209;
	int16_t x1992 = 0;
	volatile int32_t t21 = 840922087;

	t21 = ((x1989==x1990)/(x1991<<x1992));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x2061 = 3608076739695921925LLU;
	static uint32_t x2062 = UINT32_MAX;
	static volatile int32_t t22 = -2;

	t22 = ((x2061==x2062)/(x2063<<x2064));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x2089 = INT64_MIN;
	uint16_t x2090 = 3272U;
	uint8_t x2092 = 36U;
	uint64_t t23 = 3964047856LLU;

	t23 = ((x2089==x2090)/(x2091<<x2092));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x2121 = INT16_MAX;
	volatile int16_t x2122 = INT16_MAX;
	uint32_t x2123 = 461087U;
	volatile uint8_t x2124 = 1U;
	uint32_t t24 = 330U;

	t24 = ((x2121==x2122)/(x2123<<x2124));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x2138 = 1U;
	static int32_t t25 = -1;

	t25 = ((x2137==x2138)/(x2139<<x2140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2169 = 1630;
	int32_t x2170 = INT32_MIN;
	int8_t x2171 = INT8_MAX;
	volatile uint8_t x2172 = 0U;
	volatile int32_t t26 = -6156186;

	t26 = ((x2169==x2170)/(x2171<<x2172));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x2185 = 49836896;
	uint32_t x2187 = 63008377U;
	volatile int16_t x2188 = 0;
	static volatile uint32_t t27 = 15U;

	t27 = ((x2185==x2186)/(x2187<<x2188));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2201 = INT64_MAX;
	static uint32_t x2203 = 458U;
	int16_t x2204 = 3;
	uint32_t t28 = 173372U;

	t28 = ((x2201==x2202)/(x2203<<x2204));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x2230 = INT16_MIN;
	static uint64_t x2231 = UINT64_MAX;
	int8_t x2232 = 9;
	static uint64_t t29 = 168517559722LLU;

	t29 = ((x2229==x2230)/(x2231<<x2232));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2333 = -1;
	volatile int16_t x2334 = INT16_MIN;
	volatile int8_t x2335 = INT8_MAX;
	int8_t x2336 = 0;
	static volatile int32_t t30 = 800;

	t30 = ((x2333==x2334)/(x2335<<x2336));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2437 = INT32_MAX;
	static uint16_t x2438 = 118U;
	uint32_t x2439 = 1525361440U;
	uint16_t x2440 = 9U;
	static uint32_t t31 = 976U;

	t31 = ((x2437==x2438)/(x2439<<x2440));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2445 = INT64_MIN;
	uint8_t x2446 = 21U;
	static volatile uint64_t x2447 = 355LLU;
	uint32_t x2448 = 15U;
	static uint64_t t32 = 928637349327908LLU;

	t32 = ((x2445==x2446)/(x2447<<x2448));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x2469 = 1;
	static volatile uint64_t x2470 = 868LLU;
	volatile uint32_t x2471 = UINT32_MAX;
	uint32_t t33 = 1344U;

	t33 = ((x2469==x2470)/(x2471<<x2472));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x2514 = INT8_MIN;
	uint16_t x2515 = 955U;
	int16_t x2516 = 0;
	int32_t t34 = -230401;

	t34 = ((x2513==x2514)/(x2515<<x2516));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2602 = UINT64_MAX;
	uint64_t x2603 = 1202285797LLU;
	static uint32_t x2604 = 42U;
	volatile uint64_t t35 = 1605LLU;

	t35 = ((x2601==x2602)/(x2603<<x2604));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2761 = UINT64_MAX;
	static uint8_t x2762 = 3U;
	uint8_t x2763 = 11U;
	uint8_t x2764 = 26U;
	volatile int32_t t36 = -16096870;

	t36 = ((x2761==x2762)/(x2763<<x2764));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2765 = 5;
	int16_t x2766 = INT16_MIN;
	int8_t x2767 = INT8_MAX;
	uint16_t x2768 = 0U;

	t37 = ((x2765==x2766)/(x2767<<x2768));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2769 = INT32_MAX;
	uint64_t x2771 = UINT64_MAX;
	volatile uint64_t t38 = 7112506804727LLU;

	t38 = ((x2769==x2770)/(x2771<<x2772));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2953 = 4313202626LLU;
	static int64_t x2954 = INT64_MAX;
	static uint16_t x2955 = 301U;

	t39 = ((x2953==x2954)/(x2955<<x2956));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x2985 = -1;
	uint8_t x2986 = 31U;
	volatile uint64_t x2987 = 1432183LLU;
	static int16_t x2988 = 1;
	uint64_t t40 = 1055570423LLU;

	t40 = ((x2985==x2986)/(x2987<<x2988));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3013 = -948;
	uint64_t x3014 = 116LLU;
	uint32_t x3015 = UINT32_MAX;
	int8_t x3016 = 12;
	static volatile uint32_t t41 = 2110210U;

	t41 = ((x3013==x3014)/(x3015<<x3016));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x3081 = -58096;
	static uint32_t x3084 = 2U;

	t42 = ((x3081==x3082)/(x3083<<x3084));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x3105 = 30871U;
	uint32_t x3107 = UINT32_MAX;
	int16_t x3108 = 19;
	uint32_t t43 = 0U;

	t43 = ((x3105==x3106)/(x3107<<x3108));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3145 = UINT32_MAX;
	int64_t x3146 = 172178591376745190LL;
	static uint32_t x3147 = 1741017U;
	volatile uint16_t x3148 = 0U;
	uint32_t t44 = 45263577U;

	t44 = ((x3145==x3146)/(x3147<<x3148));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3217 = -1LL;
	static int32_t x3218 = INT32_MAX;
	int32_t t45 = -507;

	t45 = ((x3217==x3218)/(x3219<<x3220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x3233 = INT16_MIN;
	int8_t x3234 = 20;
	uint16_t x3235 = 6U;
	volatile int32_t t46 = 3;

	t46 = ((x3233==x3234)/(x3235<<x3236));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3345 = INT8_MIN;
	static int32_t x3346 = -2267860;
	uint64_t x3347 = 437724916077207LLU;

	t47 = ((x3345==x3346)/(x3347<<x3348));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3353 = INT32_MAX;
	uint8_t x3354 = 31U;
	static int64_t x3355 = 2902503LL;
	volatile uint8_t x3356 = 0U;

	t48 = ((x3353==x3354)/(x3355<<x3356));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x3458 = -1LL;
	static volatile uint64_t x3459 = 871LLU;
	int8_t x3460 = 9;
	volatile uint64_t t49 = 64354236LLU;

	t49 = ((x3457==x3458)/(x3459<<x3460));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3617 = INT16_MIN;
	uint16_t x3620 = 1U;
	volatile int32_t t50 = -20;

	t50 = ((x3617==x3618)/(x3619<<x3620));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3626 = 3U;
	static int8_t x3627 = INT8_MAX;
	int16_t x3628 = 0;
	volatile int32_t t51 = -1;

	t51 = ((x3625==x3626)/(x3627<<x3628));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3653 = 3132U;
	uint16_t x3655 = UINT16_MAX;
	int64_t x3656 = 1LL;
	static volatile int32_t t52 = 143;

	t52 = ((x3653==x3654)/(x3655<<x3656));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3657 = -1;
	int16_t x3658 = INT16_MIN;
	int16_t x3659 = 14;
	static uint8_t x3660 = 5U;
	static int32_t t53 = -14307;

	t53 = ((x3657==x3658)/(x3659<<x3660));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x3685 = 124387909684602LL;
	int16_t x3686 = -1;
	volatile int64_t x3687 = 45033825LL;
	uint8_t x3688 = 2U;
	int64_t t54 = -1906LL;

	t54 = ((x3685==x3686)/(x3687<<x3688));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3805 = 5074;
	uint16_t x3806 = 3357U;
	int32_t x3807 = 677;
	int8_t x3808 = 2;
	static volatile int32_t t55 = -221670;

	t55 = ((x3805==x3806)/(x3807<<x3808));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3817 = INT32_MIN;
	uint16_t x3818 = 15U;
	uint64_t x3819 = 1LLU;
	int32_t x3820 = 5;
	volatile uint64_t t56 = 210379233318LLU;

	t56 = ((x3817==x3818)/(x3819<<x3820));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x3869 = UINT64_MAX;
	int16_t x3870 = -40;
	int16_t x3871 = INT16_MAX;
	static volatile uint16_t x3872 = 0U;

	t57 = ((x3869==x3870)/(x3871<<x3872));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3893 = 174547481925855LLU;
	int64_t x3894 = INT64_MIN;
	uint16_t x3896 = 0U;
	volatile uint32_t t58 = 1864303U;

	t58 = ((x3893==x3894)/(x3895<<x3896));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x3911 = 427609926LLU;
	int16_t x3912 = 0;

	t59 = ((x3909==x3910)/(x3911<<x3912));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x3981 = INT16_MIN;
	int8_t x3982 = INT8_MAX;
	volatile uint8_t x3984 = 53U;

	t60 = ((x3981==x3982)/(x3983<<x3984));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4009 = INT8_MIN;
	static int32_t x4010 = INT32_MIN;
	int32_t x4012 = 0;

	t61 = ((x4009==x4010)/(x4011<<x4012));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x4041 = INT64_MIN;
	static int32_t x4042 = -1;
	static int32_t x4044 = 0;
	uint64_t t62 = 20128437381271LLU;

	t62 = ((x4041==x4042)/(x4043<<x4044));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4138 = INT16_MAX;
	volatile int32_t t63 = -5;

	t63 = ((x4137==x4138)/(x4139<<x4140));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x4221 = 499355002231902LL;
	static int32_t x4222 = INT32_MIN;
	int16_t x4223 = INT16_MAX;
	int64_t x4224 = 0LL;
	volatile int32_t t64 = 200461;

	t64 = ((x4221==x4222)/(x4223<<x4224));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4401 = -206;
	int32_t x4402 = INT32_MIN;
	uint32_t x4403 = 610U;
	static int32_t x4404 = 11;
	volatile uint32_t t65 = 5U;

	t65 = ((x4401==x4402)/(x4403<<x4404));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4409 = -57;
	volatile uint16_t x4411 = UINT16_MAX;
	uint32_t x4412 = 2U;
	static int32_t t66 = 21;

	t66 = ((x4409==x4410)/(x4411<<x4412));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4445 = INT64_MAX;
	uint64_t x4446 = UINT64_MAX;
	int64_t x4447 = 21535271LL;
	uint8_t x4448 = 13U;
	static volatile int64_t t67 = 1327509251LL;

	t67 = ((x4445==x4446)/(x4447<<x4448));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x4489 = INT8_MIN;
	int16_t x4490 = INT16_MIN;
	static uint32_t x4491 = 1351741U;
	int32_t x4492 = 7;
	uint32_t t68 = 9819765U;

	t68 = ((x4489==x4490)/(x4491<<x4492));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4506 = -1LL;
	uint64_t x4507 = 1112LLU;
	uint8_t x4508 = 2U;

	t69 = ((x4505==x4506)/(x4507<<x4508));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x4565 = UINT16_MAX;
	static int64_t x4568 = 7LL;
	int32_t t70 = -25;

	t70 = ((x4565==x4566)/(x4567<<x4568));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x4601 = 1319U;
	static uint32_t x4603 = UINT32_MAX;
	static uint64_t x4604 = 10LLU;
	static volatile uint32_t t71 = 1020277U;

	t71 = ((x4601==x4602)/(x4603<<x4604));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x4649 = 31U;
	uint32_t x4651 = UINT32_MAX;
	int8_t x4652 = 0;
	uint32_t t72 = 7599782U;

	t72 = ((x4649==x4650)/(x4651<<x4652));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x4694 = UINT64_MAX;
	static uint16_t x4695 = 4U;
	uint8_t x4696 = 0U;
	int32_t t73 = -166264264;

	t73 = ((x4693==x4694)/(x4695<<x4696));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x4698 = INT64_MIN;
	uint16_t x4699 = 1U;
	volatile uint8_t x4700 = 17U;

	t74 = ((x4697==x4698)/(x4699<<x4700));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x4774 = -1;
	static int32_t x4775 = 569;
	static int8_t x4776 = 8;
	int32_t t75 = -185;

	t75 = ((x4773==x4774)/(x4775<<x4776));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x4833 = INT16_MIN;
	uint16_t x4834 = 5U;
	int16_t x4835 = 12;
	int32_t t76 = -3994299;

	t76 = ((x4833==x4834)/(x4835<<x4836));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4837 = INT8_MAX;
	static volatile uint8_t x4838 = UINT8_MAX;
	int16_t x4839 = INT16_MAX;
	static int8_t x4840 = 0;
	volatile int32_t t77 = 58054698;

	t77 = ((x4837==x4838)/(x4839<<x4840));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5001 = 1663LLU;
	uint16_t x5002 = 313U;
	uint8_t x5003 = 33U;
	int16_t x5004 = 0;
	int32_t t78 = 5315;

	t78 = ((x5001==x5002)/(x5003<<x5004));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x5078 = 3U;
	uint64_t x5079 = 14019177021LLU;
	uint16_t x5080 = 12U;
	uint64_t t79 = 7911024LLU;

	t79 = ((x5077==x5078)/(x5079<<x5080));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5081 = INT16_MIN;
	uint16_t x5084 = 0U;
	int32_t t80 = 238634;

	t80 = ((x5081==x5082)/(x5083<<x5084));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5093 = INT32_MAX;
	int16_t x5094 = 93;
	static volatile int64_t t81 = 246051195491084LL;

	t81 = ((x5093==x5094)/(x5095<<x5096));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x5125 = INT32_MAX;
	uint8_t x5126 = 28U;
	int8_t x5127 = INT8_MAX;
	volatile int64_t x5128 = 6LL;
	int32_t t82 = 194437627;

	t82 = ((x5125==x5126)/(x5127<<x5128));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5143 = 5;
	static volatile int32_t t83 = -16264;

	t83 = ((x5141==x5142)/(x5143<<x5144));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5226 = INT32_MIN;
	uint8_t x5228 = 9U;
	uint32_t t84 = 2U;

	t84 = ((x5225==x5226)/(x5227<<x5228));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5381 = 0U;
	int8_t x5382 = 0;
	uint8_t x5384 = 27U;

	t85 = ((x5381==x5382)/(x5383<<x5384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x5441 = -1;
	uint8_t x5443 = 21U;
	volatile int32_t t86 = -5348448;

	t86 = ((x5441==x5442)/(x5443<<x5444));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5469 = 30U;
	uint8_t x5471 = 88U;
	static uint8_t x5472 = 10U;
	static int32_t t87 = 23;

	t87 = ((x5469==x5470)/(x5471<<x5472));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5481 = INT32_MIN;
	volatile uint32_t x5482 = UINT32_MAX;
	uint64_t x5483 = 144911052602LLU;
	int8_t x5484 = 6;
	volatile uint64_t t88 = 12453845LLU;

	t88 = ((x5481==x5482)/(x5483<<x5484));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5605 = -117;
	int32_t x5606 = INT32_MIN;
	static uint32_t x5607 = UINT32_MAX;
	uint16_t x5608 = 5U;
	uint32_t t89 = 123U;

	t89 = ((x5605==x5606)/(x5607<<x5608));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5641 = -252648;
	int8_t x5642 = INT8_MAX;
	static volatile uint64_t x5644 = 20LLU;

	t90 = ((x5641==x5642)/(x5643<<x5644));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5653 = INT8_MIN;
	int32_t x5654 = -28;
	uint64_t x5655 = 35872019363LLU;
	static int8_t x5656 = 2;
	uint64_t t91 = 102413610810466423LLU;

	t91 = ((x5653==x5654)/(x5655<<x5656));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x6045 = 5541033864796950582LLU;
	uint32_t x6046 = 3137342U;
	static int64_t x6047 = 579853LL;
	uint8_t x6048 = 0U;
	int64_t t92 = -5LL;

	t92 = ((x6045==x6046)/(x6047<<x6048));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x6070 = INT64_MIN;
	uint64_t x6071 = UINT64_MAX;
	int8_t x6072 = 25;
	uint64_t t93 = 3712626426176LLU;

	t93 = ((x6069==x6070)/(x6071<<x6072));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6157 = -1;
	uint64_t x6160 = 10LLU;
	volatile int32_t t94 = -11552;

	t94 = ((x6157==x6158)/(x6159<<x6160));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6209 = 2U;
	uint8_t x6210 = 12U;
	int16_t x6211 = INT16_MAX;
	static volatile int32_t t95 = 35595;

	t95 = ((x6209==x6210)/(x6211<<x6212));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x6241 = INT64_MIN;
	int32_t x6242 = INT32_MAX;
	static uint8_t x6243 = 1U;
	uint8_t x6244 = 5U;
	volatile int32_t t96 = 7;

	t96 = ((x6241==x6242)/(x6243<<x6244));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6286 = INT64_MIN;
	int64_t x6287 = 209LL;
	volatile int16_t x6288 = 2;
	volatile int64_t t97 = 0LL;

	t97 = ((x6285==x6286)/(x6287<<x6288));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x6297 = -1LL;
	static int8_t x6298 = INT8_MIN;
	int8_t x6300 = 5;

	t98 = ((x6297==x6298)/(x6299<<x6300));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6333 = INT8_MIN;
	int64_t x6334 = INT64_MIN;
	static int8_t x6335 = 14;
	int8_t x6336 = 1;
	static volatile int32_t t99 = 12;

	t99 = ((x6333==x6334)/(x6335<<x6336));

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

