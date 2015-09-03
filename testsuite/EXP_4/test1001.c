#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t2 = 75U;
uint32_t x239 = 385U;
volatile uint64_t t6 = 3609215585242741002LLU;
int64_t x394 = 289LL;
static volatile uint8_t x395 = 14U;
int8_t x401 = -1;
volatile int32_t t8 = 1048284;
uint64_t t9 = 0LLU;
volatile int64_t x477 = -1LL;
uint8_t x480 = 3U;
int8_t x789 = -61;
volatile uint8_t x791 = UINT8_MAX;
static int32_t t13 = -381;
int64_t t15 = 54984243342272LL;
int32_t x1004 = 1;
int32_t x1097 = INT32_MIN;
volatile uint16_t x1100 = 4U;
static int32_t t19 = 62857360;
int8_t x1121 = INT8_MAX;
int16_t x1190 = INT16_MIN;
uint32_t x1365 = 1746831U;
int8_t x1368 = 6;
uint32_t x1532 = 1U;
int32_t t23 = -53971377;
int64_t x1714 = 32845167967534LL;
int32_t x1715 = 21054088;
uint64_t x1716 = 0LLU;
static volatile uint64_t x1921 = UINT64_MAX;
int32_t x1922 = 839398858;
uint16_t x1957 = UINT16_MAX;
int16_t x1974 = INT16_MIN;
uint16_t x1976 = 3U;
uint64_t t27 = 1006339771LLU;
int32_t x1988 = 6;
volatile int8_t x2000 = 1;
static uint8_t x2076 = 7U;
int16_t x2204 = 1;
int16_t x2225 = -1;
int8_t x2228 = 19;
static int8_t x2275 = 17;
uint8_t x2321 = 1U;
volatile uint64_t t38 = 36306140LLU;
int32_t x2446 = 2501;
int64_t x2638 = INT64_MAX;
static int64_t t40 = -1LL;
static volatile uint32_t t42 = 179958U;
uint8_t x2682 = UINT8_MAX;
static volatile int32_t x2745 = 488705;
uint32_t x3309 = 300381023U;
int8_t x3375 = 1;
int32_t x3438 = INT32_MIN;
uint16_t x3469 = 470U;
int8_t x3625 = -1;
int32_t x3626 = -1;
int16_t x3889 = -1;
uint8_t x3892 = 1U;
volatile uint8_t x3957 = UINT8_MAX;
static uint64_t t61 = 34599548691330LLU;
int32_t x3978 = -1;
volatile int32_t t63 = 35;
static int64_t x4152 = 1LL;
int16_t x4166 = 8;
uint64_t x4167 = 1420LLU;
volatile uint64_t t65 = 148493734LLU;
int8_t x4326 = INT8_MIN;
uint64_t t67 = 3LLU;
uint64_t x4396 = 1LLU;
int8_t x4471 = INT8_MAX;
static int32_t t69 = -11932754;
static int64_t x4757 = INT64_MAX;
static int64_t x4901 = INT64_MIN;
int32_t x4904 = 7;
static uint32_t x5019 = 59U;
uint16_t x5130 = UINT16_MAX;
int8_t x5131 = 1;
static volatile int8_t x5156 = 12;
uint8_t x5235 = 4U;
uint32_t x5236 = 10U;
int8_t x5252 = 1;
volatile uint64_t t79 = 5294330LLU;
int16_t x5342 = -9628;
uint32_t x5343 = UINT32_MAX;
volatile int16_t x5389 = -1;
int8_t x5392 = 0;
static int64_t t81 = 639964894LL;
volatile int64_t x5930 = INT64_MIN;
static uint32_t x5931 = 1174U;
static uint16_t x6102 = 20U;
uint16_t x6104 = 3U;
volatile uint64_t t87 = 131372LLU;
volatile uint16_t x6151 = 30U;
int8_t x6225 = 1;
static volatile int64_t x6237 = INT64_MAX;
uint64_t t91 = 281541197667080LLU;
volatile int32_t x6401 = INT32_MAX;
static volatile int64_t x6447 = INT64_MAX;
uint8_t x6508 = 2U;
volatile int64_t t95 = -23562LL;
int32_t t96 = 2541380;
uint64_t x6578 = 5109384494855070LLU;
int32_t x6630 = -1;
static volatile int64_t x6665 = 1LL;
uint8_t x6668 = 9U;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = UINT16_MAX;
	uint64_t x3 = 344LLU;
	uint16_t x4 = 8U;
	uint64_t t0 = 127LLU;

	t0 = (x1^(x2|(x3<<x4)));

	if (t0 != 65536LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x73 = INT8_MAX;
	int64_t x74 = INT64_MAX;
	uint64_t x75 = 417278431080LLU;
	volatile uint8_t x76 = 0U;
	volatile uint64_t t1 = 226207346078LLU;

	t1 = (x73^(x74|(x75<<x76)));

	if (t1 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x173 = 5U;
	int16_t x174 = INT16_MIN;
	volatile int8_t x175 = 1;
	volatile int16_t x176 = 0;

	t2 = (x173^(x174|(x175<<x176)));

	if (t2 != 4294934532U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x181 = UINT64_MAX;
	static int16_t x182 = INT16_MAX;
	volatile int16_t x183 = 1;
	static uint8_t x184 = 5U;
	static uint64_t t3 = 2956105409989LLU;

	t3 = (x181^(x182|(x183<<x184)));

	if (t3 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x213 = 3U;
	uint32_t x214 = UINT32_MAX;
	uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 0U;
	volatile uint32_t t4 = 3U;

	t4 = (x213^(x214|(x215<<x216)));

	if (t4 != 4294967292U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x237 = INT16_MIN;
	int16_t x238 = -141;
	static uint32_t x240 = 7U;
	volatile uint32_t t5 = 88081607U;

	t5 = (x237^(x238|(x239<<x240)));

	if (t5 != 32755U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x309 = -1;
	volatile int64_t x310 = -1LL;
	static uint64_t x311 = UINT64_MAX;
	uint8_t x312 = 3U;

	t6 = (x309^(x310|(x311<<x312)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x393 = UINT16_MAX;
	int32_t x396 = 1;
	static int64_t t7 = -179LL;

	t7 = (x393^(x394|(x395<<x396)));

	if (t7 != 65218LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x402 = 7U;
	static uint16_t x403 = UINT16_MAX;
	volatile uint8_t x404 = 1U;

	t8 = (x401^(x402|(x403<<x404)));

	if (t8 != -131072) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x433 = 22;
	int8_t x434 = INT8_MIN;
	static volatile uint64_t x435 = 3175995593250360LLU;
	static uint64_t x436 = 33LLU;

	t9 = (x433^(x434|(x435<<x436)));

	if (t9 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x478 = 37U;
	static uint16_t x479 = 6660U;
	int64_t t10 = 248046207156LL;

	t10 = (x477^(x478|(x479<<x480)));

	if (t10 != -53286LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x565 = -1LL;
	int8_t x566 = -5;
	int8_t x567 = INT8_MAX;
	volatile uint16_t x568 = 22U;
	int64_t t11 = 16945656LL;

	t11 = (x565^(x566|(x567<<x568)));

	if (t11 != 4LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x637 = -688335338LL;
	int8_t x638 = -1;
	static int16_t x639 = INT16_MAX;
	uint8_t x640 = 1U;
	int64_t t12 = -28LL;

	t12 = (x637^(x638|(x639<<x640)));

	if (t12 != 688335337LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x790 = INT8_MIN;
	uint8_t x792 = 2U;

	t13 = (x789^(x790|(x791<<x792)));

	if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x821 = 2060;
	static int16_t x822 = 2704;
	volatile uint8_t x823 = UINT8_MAX;
	int16_t x824 = 5;
	int32_t t14 = 3416;

	t14 = (x821^(x822|(x823<<x824)));

	if (t14 != 6140) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x837 = 17U;
	uint32_t x838 = UINT32_MAX;
	static int64_t x839 = 26531LL;
	static uint16_t x840 = 1U;

	t15 = (x837^(x838|(x839<<x840)));

	if (t15 != 4294967278LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x841 = 121U;
	int64_t x842 = INT64_MAX;
	int8_t x843 = 0;
	int8_t x844 = 5;
	static volatile int64_t t16 = 985216446645LL;

	t16 = (x841^(x842|(x843<<x844)));

	if (t16 != 9223372036854775686LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x901 = -1LL;
	uint16_t x902 = 15432U;
	volatile int16_t x903 = INT16_MAX;
	int32_t x904 = 0;
	static int64_t t17 = -228624LL;

	t17 = (x901^(x902|(x903<<x904)));

	if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1001 = INT8_MIN;
	uint16_t x1002 = 6842U;
	uint8_t x1003 = UINT8_MAX;
	int32_t t18 = -242600134;

	t18 = (x1001^(x1002|(x1003<<x1004)));

	if (t18 != -7042) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1098 = 1;
	int16_t x1099 = 11;

	t19 = (x1097^(x1098|(x1099<<x1100)));

	if (t19 != -2147483471) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1122 = 0U;
	uint16_t x1123 = UINT16_MAX;
	static uint8_t x1124 = 1U;
	int32_t t20 = -167974;

	t20 = (x1121^(x1122|(x1123<<x1124)));

	if (t20 != 130945) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x1189 = UINT8_MAX;
	static int64_t x1191 = 38668LL;
	volatile int8_t x1192 = 5;
	int64_t t21 = -31045883784000227LL;

	t21 = (x1189^(x1190|(x1191<<x1192)));

	if (t21 != -7809LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1366 = 406773303U;
	int16_t x1367 = INT16_MAX;
	uint32_t t22 = 642938U;

	t22 = (x1365^(x1366|(x1367<<x1368)));

	if (t22 != 405100664U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1529 = 1U;
	int8_t x1530 = 6;
	uint8_t x1531 = UINT8_MAX;

	t23 = (x1529^(x1530|(x1531<<x1532)));

	if (t23 != 511) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1713 = -1LL;
	int64_t t24 = -77941122581639LL;

	t24 = (x1713^(x1714|(x1715<<x1716)));

	if (t24 != -32845188956079LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x1923 = UINT64_MAX;
	int16_t x1924 = 1;
	volatile uint64_t t25 = 1292826592LLU;

	t25 = (x1921^(x1922|(x1923<<x1924)));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1958 = -1;
	uint64_t x1959 = 7LLU;
	volatile int32_t x1960 = 0;
	uint64_t t26 = 74876258LLU;

	t26 = (x1957^(x1958|(x1959<<x1960)));

	if (t26 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1973 = 196LLU;
	uint16_t x1975 = 4902U;

	t27 = (x1973^(x1974|(x1975<<x1976)));

	if (t27 != 18446744073709525492LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1985 = INT32_MIN;
	int8_t x1986 = INT8_MIN;
	int8_t x1987 = 1;
	volatile int32_t t28 = -1048227718;

	t28 = (x1985^(x1986|(x1987<<x1988)));

	if (t28 != 2147483584) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1997 = INT16_MIN;
	int32_t x1998 = -1;
	int32_t x1999 = 84;
	int32_t t29 = 19;

	t29 = (x1997^(x1998|(x1999<<x2000)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x2073 = 3605860U;
	int8_t x2074 = INT8_MAX;
	uint64_t x2075 = 1408262786417LLU;
	static uint64_t t30 = 408745LLU;

	t30 = (x2073^(x2074|(x2075<<x2076)));

	if (t30 != 180257635286427LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2125 = INT64_MIN;
	int16_t x2126 = -1;
	int16_t x2127 = INT16_MAX;
	int32_t x2128 = 0;
	int64_t t31 = INT64_MAX;

	t31 = (x2125^(x2126|(x2127<<x2128)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x2201 = -16;
	int32_t x2202 = INT32_MIN;
	static uint16_t x2203 = 3U;
	volatile int32_t t32 = -17114185;

	t32 = (x2201^(x2202|(x2203<<x2204)));

	if (t32 != 2147483638) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x2213 = INT8_MIN;
	int32_t x2214 = INT32_MIN;
	volatile int16_t x2215 = INT16_MAX;
	volatile uint16_t x2216 = 4U;
	static int32_t t33 = 12964162;

	t33 = (x2213^(x2214|(x2215<<x2216)));

	if (t33 != 2146959472) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2226 = UINT8_MAX;
	uint8_t x2227 = 36U;
	volatile int32_t t34 = -108719934;

	t34 = (x2225^(x2226|(x2227<<x2228)));

	if (t34 != -18874624) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2273 = UINT32_MAX;
	uint8_t x2274 = 10U;
	int8_t x2276 = 1;
	uint32_t t35 = 1U;

	t35 = (x2273^(x2274|(x2275<<x2276)));

	if (t35 != 4294967253U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2277 = -732958LL;
	uint64_t x2278 = 543536974165736LLU;
	uint16_t x2279 = UINT16_MAX;
	static int16_t x2280 = 1;
	uint64_t t36 = 17308348LLU;

	t36 = (x2277^(x2278|(x2279<<x2280)));

	if (t36 != 18446200536734707484LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x2322 = -1LL;
	uint32_t x2323 = 304141U;
	uint8_t x2324 = 5U;
	int64_t t37 = 14761226532LL;

	t37 = (x2321^(x2322|(x2323<<x2324)));

	if (t37 != -2LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2353 = 0;
	int16_t x2354 = INT16_MIN;
	uint64_t x2355 = 1LLU;
	uint32_t x2356 = 8U;

	t38 = (x2353^(x2354|(x2355<<x2356)));

	if (t38 != 18446744073709519104LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2445 = UINT16_MAX;
	static volatile uint8_t x2447 = 5U;
	uint8_t x2448 = 1U;
	int32_t t39 = 172;

	t39 = (x2445^(x2446|(x2447<<x2448)));

	if (t39 != 63024) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2637 = UINT16_MAX;
	static int8_t x2639 = INT8_MAX;
	int8_t x2640 = 21;

	t40 = (x2637^(x2638|(x2639<<x2640)));

	if (t40 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2641 = INT16_MAX;
	volatile int64_t x2642 = -585599095564883873LL;
	uint32_t x2643 = UINT32_MAX;
	static volatile uint32_t x2644 = 3U;
	volatile int64_t t41 = 2498704LL;

	t41 = (x2641^(x2642|(x2643<<x2644)));

	if (t41 != -585599094089613312LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2649 = -4;
	volatile uint32_t x2650 = 12U;
	static uint16_t x2651 = 11688U;
	uint16_t x2652 = 14U;

	t42 = (x2649^(x2650|(x2651<<x2652)));

	if (t42 != 4103471088U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2681 = UINT64_MAX;
	uint8_t x2683 = 2U;
	uint32_t x2684 = 0U;
	volatile uint64_t t43 = 9919743452774170LLU;

	t43 = (x2681^(x2682|(x2683<<x2684)));

	if (t43 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2746 = 15208117099LL;
	uint64_t x2747 = 356274279124LLU;
	uint16_t x2748 = 0U;
	volatile uint64_t t44 = 169LLU;

	t44 = (x2745^(x2746|(x2747<<x2748)));

	if (t44 != 360709883646LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2777 = 3;
	int64_t x2778 = -68609213304760778LL;
	int16_t x2779 = 865;
	uint8_t x2780 = 0U;
	static int64_t t45 = 48358165LL;

	t45 = (x2777^(x2778|(x2779<<x2780)));

	if (t45 != -68609213304760460LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2961 = 3;
	int32_t x2962 = -41;
	static int16_t x2963 = 1;
	uint8_t x2964 = 29U;
	int32_t t46 = 554;

	t46 = (x2961^(x2962|(x2963<<x2964)));

	if (t46 != -44) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x3021 = 12U;
	uint32_t x3022 = 411983U;
	static volatile int8_t x3023 = INT8_MAX;
	int32_t x3024 = 1;
	volatile uint32_t t47 = 1680U;

	t47 = (x3021^(x3022|(x3023<<x3024)));

	if (t47 != 412147U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x3225 = UINT64_MAX;
	volatile uint32_t x3226 = UINT32_MAX;
	uint8_t x3227 = UINT8_MAX;
	int8_t x3228 = 1;
	volatile uint64_t t48 = 2147411073315994LLU;

	t48 = (x3225^(x3226|(x3227<<x3228)));

	if (t48 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x3253 = INT16_MIN;
	int32_t x3254 = INT32_MIN;
	int16_t x3255 = 31;
	int16_t x3256 = 2;
	volatile int32_t t49 = 13;

	t49 = (x3253^(x3254|(x3255<<x3256)));

	if (t49 != 2147451004) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3310 = 1;
	uint64_t x3311 = UINT64_MAX;
	volatile int64_t x3312 = 0LL;
	static uint64_t t50 = 3636710664747028817LLU;

	t50 = (x3309^(x3310|(x3311<<x3312)));

	if (t50 != 18446744073409170592LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3329 = UINT32_MAX;
	uint16_t x3330 = UINT16_MAX;
	uint8_t x3331 = UINT8_MAX;
	uint8_t x3332 = 6U;
	uint32_t t51 = 954U;

	t51 = (x3329^(x3330|(x3331<<x3332)));

	if (t51 != 4294901760U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3373 = INT64_MIN;
	int32_t x3374 = -1;
	uint16_t x3376 = 0U;
	volatile int64_t t52 = INT64_MAX;

	t52 = (x3373^(x3374|(x3375<<x3376)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3437 = -1;
	int64_t x3439 = 44186137597LL;
	uint16_t x3440 = 0U;
	volatile int64_t t53 = -2182679412LL;

	t53 = (x3437^(x3438|(x3439<<x3440)));

	if (t53 != 911019010LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3470 = 194U;
	uint32_t x3471 = UINT32_MAX;
	int64_t x3472 = 10LL;
	uint32_t t54 = 4738624U;

	t54 = (x3469^(x3470|(x3471<<x3472)));

	if (t54 != 4294966548U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x3569 = INT64_MIN;
	uint32_t x3570 = 2622U;
	uint64_t x3571 = 11549642008LLU;
	uint16_t x3572 = 26U;
	uint64_t t55 = 1LLU;

	t55 = (x3569^(x3570|(x3571<<x3572)));

	if (t55 != 9998455391618337342LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3613 = 82LL;
	volatile uint32_t x3614 = 26U;
	static int8_t x3615 = 26;
	int8_t x3616 = 11;
	int64_t t56 = 1LL;

	t56 = (x3613^(x3614|(x3615<<x3616)));

	if (t56 != 53320LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3627 = 14177;
	uint8_t x3628 = 15U;
	static int32_t t57 = -10795123;

	t57 = (x3625^(x3626|(x3627<<x3628)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3677 = UINT8_MAX;
	int32_t x3678 = 677702564;
	int16_t x3679 = 0;
	uint16_t x3680 = 3U;
	volatile int32_t t58 = -72569657;

	t58 = (x3677^(x3678|(x3679<<x3680)));

	if (t58 != 677702491) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3757 = INT8_MAX;
	int16_t x3758 = INT16_MIN;
	uint8_t x3759 = UINT8_MAX;
	volatile int16_t x3760 = 0;
	int32_t t59 = 148992975;

	t59 = (x3757^(x3758|(x3759<<x3760)));

	if (t59 != -32640) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x3890 = 502291772U;
	static volatile int16_t x3891 = 0;
	uint32_t t60 = 887625U;

	t60 = (x3889^(x3890|(x3891<<x3892)));

	if (t60 != 3792675523U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3958 = INT8_MIN;
	volatile uint64_t x3959 = 2158694687587LLU;
	volatile int8_t x3960 = 0;

	t61 = (x3957^(x3958|(x3959<<x3960)));

	if (t61 != 18446744073709551388LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3977 = INT64_MAX;
	volatile int32_t x3979 = 79;
	int16_t x3980 = 1;
	volatile int64_t t62 = INT64_MIN;

	t62 = (x3977^(x3978|(x3979<<x3980)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4021 = INT8_MIN;
	uint8_t x4022 = 5U;
	int32_t x4023 = INT32_MAX;
	int16_t x4024 = 0;

	t63 = (x4021^(x4022|(x4023<<x4024)));

	if (t63 != -2147483521) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4149 = -1LL;
	volatile uint32_t x4150 = 5U;
	static uint16_t x4151 = UINT16_MAX;
	volatile int64_t t64 = 303498367LL;

	t64 = (x4149^(x4150|(x4151<<x4152)));

	if (t64 != -131072LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x4165 = -1;
	static uint32_t x4168 = 6U;

	t65 = (x4165^(x4166|(x4167<<x4168)));

	if (t65 != 18446744073709460727LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x4237 = INT64_MIN;
	int8_t x4238 = 2;
	int16_t x4239 = 1;
	uint16_t x4240 = 2U;
	int64_t t66 = 68165444895LL;

	t66 = (x4237^(x4238|(x4239<<x4240)));

	if (t66 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4325 = 5;
	uint64_t x4327 = UINT64_MAX;
	int32_t x4328 = 1;

	t67 = (x4325^(x4326|(x4327<<x4328)));

	if (t67 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4393 = INT16_MAX;
	int16_t x4394 = 207;
	uint64_t x4395 = 243LLU;
	uint64_t t68 = 32771801204LLU;

	t68 = (x4393^(x4394|(x4395<<x4396)));

	if (t68 != 32272LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4469 = -47;
	int8_t x4470 = INT8_MIN;
	uint16_t x4472 = 7U;

	t69 = (x4469^(x4470|(x4471<<x4472)));

	if (t69 != 81) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4593 = -4;
	static int8_t x4594 = INT8_MIN;
	static uint8_t x4595 = UINT8_MAX;
	int32_t x4596 = 3;
	volatile int32_t t70 = 3065;

	t70 = (x4593^(x4594|(x4595<<x4596)));

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x4653 = 34U;
	static volatile int64_t x4654 = INT64_MIN;
	uint64_t x4655 = UINT64_MAX;
	static int8_t x4656 = 56;
	static volatile uint64_t t71 = 22775LLU;

	t71 = (x4653^(x4654|(x4655<<x4656)));

	if (t71 != 18374686479671623714LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4758 = -1469LL;
	static uint64_t x4759 = 15402LLU;
	uint8_t x4760 = 0U;
	volatile uint64_t t72 = 13935696548LLU;

	t72 = (x4757^(x4758|(x4759<<x4760)));

	if (t72 != 9223372036854776212LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4902 = -1;
	static int8_t x4903 = INT8_MAX;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x4901^(x4902|(x4903<<x4904)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x5017 = 403LLU;
	uint16_t x5018 = 0U;
	volatile uint16_t x5020 = 4U;
	uint64_t t74 = 1033LLU;

	t74 = (x5017^(x5018|(x5019<<x5020)));

	if (t74 != 547LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x5129 = UINT64_MAX;
	static int16_t x5132 = 1;
	uint64_t t75 = 15198LLU;

	t75 = (x5129^(x5130|(x5131<<x5132)));

	if (t75 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x5153 = -1LL;
	static int8_t x5154 = 3;
	static uint16_t x5155 = 26U;
	int64_t t76 = 144514LL;

	t76 = (x5153^(x5154|(x5155<<x5156)));

	if (t76 != -106500LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x5233 = 23;
	static int64_t x5234 = INT64_MAX;
	int64_t t77 = 1LL;

	t77 = (x5233^(x5234|(x5235<<x5236)));

	if (t77 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x5249 = -24;
	int32_t x5250 = INT32_MAX;
	static int16_t x5251 = INT16_MAX;
	volatile int32_t t78 = -22459193;

	t78 = (x5249^(x5250|(x5251<<x5252)));

	if (t78 != -2147483625) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5281 = INT64_MIN;
	volatile int64_t x5282 = INT64_MIN;
	uint64_t x5283 = 8123178358862477406LLU;
	uint8_t x5284 = 39U;

	t79 = (x5281^(x5282|(x5283<<x5284)));

	if (t79 != 1277948071312883712LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x5341 = INT16_MIN;
	int8_t x5344 = 1;
	volatile uint32_t t80 = 63335180U;

	t80 = (x5341^(x5342|(x5343<<x5344)));

	if (t80 != 32766U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5390 = -10LL;
	uint16_t x5391 = 1U;

	t81 = (x5389^(x5390|(x5391<<x5392)));

	if (t81 != 8LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5417 = 25U;
	volatile int16_t x5418 = INT16_MIN;
	uint8_t x5419 = 4U;
	uint16_t x5420 = 0U;
	static volatile int32_t t82 = -711939;

	t82 = (x5417^(x5418|(x5419<<x5420)));

	if (t82 != -32739) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x5741 = -131534751;
	uint8_t x5742 = 1U;
	uint8_t x5743 = UINT8_MAX;
	int8_t x5744 = 6;
	int32_t t83 = -4;

	t83 = (x5741^(x5742|(x5743<<x5744)));

	if (t83 != -131543136) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5929 = INT64_MIN;
	uint8_t x5932 = 12U;
	int64_t t84 = 13361811843173614LL;

	t84 = (x5929^(x5930|(x5931<<x5932)));

	if (t84 != 4808704LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x5973 = INT32_MIN;
	volatile int32_t x5974 = INT32_MAX;
	uint16_t x5975 = 54U;
	static uint16_t x5976 = 5U;
	int32_t t85 = 10;

	t85 = (x5973^(x5974|(x5975<<x5976)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x6101 = 13U;
	volatile uint64_t x6103 = UINT64_MAX;
	static uint64_t t86 = 39804200LLU;

	t86 = (x6101^(x6102|(x6103<<x6104)));

	if (t86 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x6141 = INT8_MIN;
	static uint64_t x6142 = 4055877LLU;
	uint16_t x6143 = 891U;
	volatile uint16_t x6144 = 14U;

	t87 = (x6141^(x6142|(x6143<<x6144)));

	if (t87 != 18446744073692781765LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x6149 = 6;
	static uint8_t x6150 = 25U;
	volatile uint8_t x6152 = 1U;
	int32_t t88 = 0;

	t88 = (x6149^(x6150|(x6151<<x6152)));

	if (t88 != 59) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x6226 = 1LLU;
	int8_t x6227 = 2;
	uint16_t x6228 = 6U;
	uint64_t t89 = 69430108681141458LLU;

	t89 = (x6225^(x6226|(x6227<<x6228)));

	if (t89 != 128LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x6238 = 141144815LLU;
	int64_t x6239 = 26581550773437242LL;
	uint8_t x6240 = 4U;
	uint64_t t90 = 2165442627108910809LLU;

	t90 = (x6237^(x6238|(x6239<<x6240)));

	if (t90 != 8798067224344939536LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x6381 = UINT8_MAX;
	static int16_t x6382 = INT16_MIN;
	uint64_t x6383 = 1LLU;
	static uint8_t x6384 = 3U;

	t91 = (x6381^(x6382|(x6383<<x6384)));

	if (t91 != 18446744073709519095LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6402 = INT64_MIN;
	uint64_t x6403 = 16LLU;
	uint8_t x6404 = 13U;
	uint64_t t92 = 1995895835LLU;

	t92 = (x6401^(x6402|(x6403<<x6404)));

	if (t92 != 9223372039002128383LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6445 = -1;
	static int8_t x6446 = -32;
	static int8_t x6448 = 0;
	volatile int64_t t93 = -139640315495919LL;

	t93 = (x6445^(x6446|(x6447<<x6448)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x6505 = UINT8_MAX;
	volatile int8_t x6506 = -6;
	int16_t x6507 = INT16_MAX;
	static int32_t t94 = -1471;

	t94 = (x6505^(x6506|(x6507<<x6508)));

	if (t94 != -255) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x6521 = -1LL;
	int16_t x6522 = 13;
	uint32_t x6523 = 8279833U;
	uint32_t x6524 = 13U;

	t95 = (x6521^(x6522|(x6523<<x6524)));

	if (t95 != -3403882510LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6533 = 6;
	uint8_t x6534 = 0U;
	int8_t x6535 = INT8_MAX;
	uint16_t x6536 = 6U;

	t96 = (x6533^(x6534|(x6535<<x6536)));

	if (t96 != 8134) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6577 = 7U;
	uint8_t x6579 = 0U;
	int8_t x6580 = 3;
	uint64_t t97 = 23935LLU;

	t97 = (x6577^(x6578|(x6579<<x6580)));

	if (t97 != 5109384494855065LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6629 = 250755068U;
	static uint32_t x6631 = 3U;
	int8_t x6632 = 5;
	uint32_t t98 = 63U;

	t98 = (x6629^(x6630|(x6631<<x6632)));

	if (t98 != 4044212227U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6666 = UINT64_MAX;
	uint64_t x6667 = UINT64_MAX;
	uint64_t t99 = 2919185352000LLU;

	t99 = (x6665^(x6666|(x6667<<x6668)));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

