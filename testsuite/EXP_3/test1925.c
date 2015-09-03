#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x55 = -2LL;
uint64_t x323 = UINT64_MAX;
uint16_t x569 = UINT16_MAX;
static uint16_t x572 = UINT16_MAX;
uint8_t x780 = UINT8_MAX;
static int16_t x803 = INT16_MIN;
static volatile uint64_t x813 = 5600153LLU;
uint8_t x815 = UINT8_MAX;
static volatile uint64_t t10 = 369LLU;
uint64_t x951 = UINT64_MAX;
static int64_t x1032 = -322516349492LL;
int64_t x1143 = 114488LL;
int8_t x1144 = INT8_MAX;
int32_t x1172 = -6;
volatile uint32_t t19 = 1693263568U;
uint32_t x1274 = 4U;
volatile int8_t x1275 = INT8_MAX;
uint8_t x1558 = 0U;
int64_t x1559 = INT64_MIN;
volatile int8_t x1566 = 0;
uint32_t x1606 = 3U;
int16_t x1607 = INT16_MIN;
uint8_t x1641 = 5U;
uint16_t x1643 = 4U;
int16_t x1644 = INT16_MAX;
volatile uint32_t x1657 = 3243725U;
uint32_t x1660 = 86U;
uint32_t t26 = 0U;
static int32_t x1876 = -215;
uint64_t x2019 = 4547815983LLU;
uint8_t x2110 = 0U;
volatile uint64_t t30 = 1780498903LLU;
volatile uint16_t x2125 = 31954U;
volatile uint32_t x2141 = UINT32_MAX;
int16_t x2143 = INT16_MIN;
volatile int8_t x2185 = INT8_MAX;
volatile int8_t x2187 = -1;
volatile int32_t x2374 = 0;
uint64_t x2375 = 15035606LLU;
volatile uint64_t t39 = 1LLU;
int8_t x2488 = INT8_MIN;
static uint8_t x2566 = 0U;
uint32_t x2589 = 872U;
static uint8_t x2625 = 87U;
uint32_t x2654 = 1U;
int16_t x2686 = 7;
int64_t x2687 = -1LL;
int32_t x2986 = 0;
int16_t x2988 = INT16_MIN;
int8_t x3087 = INT8_MAX;
uint16_t x3216 = UINT16_MAX;
uint32_t t53 = 844U;
volatile int8_t x3276 = 28;
volatile int32_t t54 = 38123;
uint32_t x3342 = 6U;
static uint32_t x3493 = 64727U;
static int8_t x3495 = INT8_MIN;
static int32_t x3525 = 27439;
volatile int8_t x3606 = 24;
int32_t x3607 = INT32_MIN;
volatile uint32_t x4001 = 2482545U;
uint16_t x4093 = 944U;
int8_t x4157 = INT8_MAX;
int64_t x4305 = 158155803LL;
uint16_t x4308 = 7430U;
volatile int64_t t67 = 403134965768LL;
uint64_t x4361 = 9101105117254737338LLU;
volatile uint64_t t69 = 44LLU;
int32_t x4423 = INT32_MIN;
uint32_t x4564 = 321U;
uint32_t x4708 = 384762012U;
int16_t x4920 = INT16_MAX;
uint32_t x4928 = 56974U;
uint64_t t76 = 55341381460233LLU;
volatile int8_t x4987 = INT8_MIN;
volatile int32_t x5067 = 94204;
int8_t x5137 = 6;
uint8_t x5142 = 6U;
int32_t t81 = -38588976;
int8_t x5310 = 14;
uint16_t x5312 = 12251U;
int8_t x5502 = 0;
static uint32_t x5657 = 126867U;
int32_t x5730 = 1;
volatile int8_t x5814 = 0;
int32_t x5816 = INT32_MAX;
uint32_t x5857 = UINT32_MAX;
uint32_t x5901 = 1U;
int8_t x5902 = 30;
uint32_t x6088 = 5U;
int64_t x6091 = INT64_MIN;
volatile int64_t t94 = -41360283133LL;
uint64_t x6112 = UINT64_MAX;
int8_t x6163 = -1;
uint16_t x6249 = UINT16_MAX;
int16_t x6451 = -1;
volatile uint64_t t99 = 20121LLU;


void f0(void) {
	static int16_t x53 = 567;
	uint8_t x54 = 4U;
	static uint32_t x56 = 21721898U;
	int64_t t0 = -25247587170026LL;

	t0 = ((x53<<x54)+(x55|x56));

	if (t0 != 9070LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x149 = 15U;
	static int8_t x150 = 0;
	int16_t x151 = INT16_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t1 = -4093;

	t1 = ((x149<<x150)+(x151|x152));

	if (t1 != 14) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x197 = 153490LL;
	static uint16_t x198 = 1U;
	int64_t x199 = INT64_MIN;
	static int8_t x200 = 0;
	static volatile int64_t t2 = 7004LL;

	t2 = ((x197<<x198)+(x199|x200));

	if (t2 != -9223372036854468828LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x321 = INT16_MAX;
	int8_t x322 = 6;
	uint16_t x324 = UINT16_MAX;
	uint64_t t3 = 190870476LLU;

	t3 = ((x321<<x322)+(x323|x324));

	if (t3 != 2097087LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x425 = 29U;
	uint16_t x426 = 6U;
	static uint8_t x427 = 6U;
	int16_t x428 = INT16_MAX;
	int32_t t4 = -10060436;

	t4 = ((x425<<x426)+(x427|x428));

	if (t4 != 34623) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x570 = 3U;
	int16_t x571 = INT16_MIN;
	volatile int32_t t5 = 14;

	t5 = ((x569<<x570)+(x571|x572));

	if (t5 != 524279) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x621 = UINT8_MAX;
	volatile uint8_t x622 = 23U;
	int8_t x623 = -1;
	int64_t x624 = -3278266771LL;
	volatile int64_t t6 = -187810098367097026LL;

	t6 = ((x621<<x622)+(x623|x624));

	if (t6 != 2139095039LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x629 = 139090141650871LL;
	int8_t x630 = 11;
	int64_t x631 = -474212LL;
	int32_t x632 = INT32_MAX;
	int64_t t7 = -30768238LL;

	t7 = ((x629<<x630)+(x631|x632));

	if (t7 != 284856610100983807LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x777 = 1028019410105486LLU;
	uint8_t x778 = 36U;
	int8_t x779 = -1;
	uint64_t t8 = 480874114807883343LLU;

	t8 = ((x777<<x778)+(x779|x780));

	if (t8 != 13560137129945726975LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x801 = 1672158;
	uint32_t x802 = 0U;
	int16_t x804 = 1;
	static int32_t t9 = -8174;

	t9 = ((x801<<x802)+(x803|x804));

	if (t9 != 1639391) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x814 = 1;
	static int32_t x816 = INT32_MAX;

	t10 = ((x813<<x814)+(x815|x816));

	if (t10 != 2158683953LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x877 = 174U;
	int32_t x878 = 2;
	volatile int8_t x879 = INT8_MIN;
	uint16_t x880 = 345U;
	uint32_t t11 = 58U;

	t11 = ((x877<<x878)+(x879|x880));

	if (t11 != 657U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x945 = 993U;
	volatile uint8_t x946 = 4U;
	uint32_t x947 = 1544351315U;
	static int64_t x948 = -1LL;
	int64_t t12 = -150386LL;

	t12 = ((x945<<x946)+(x947|x948));

	if (t12 != 15887LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x949 = UINT64_MAX;
	uint8_t x950 = 5U;
	static uint16_t x952 = UINT16_MAX;
	uint64_t t13 = 7507926667LLU;

	t13 = ((x949<<x950)+(x951|x952));

	if (t13 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1029 = 19255130140LLU;
	int8_t x1030 = 1;
	volatile int16_t x1031 = INT16_MAX;
	volatile uint64_t t14 = 17880445LLU;

	t14 = ((x1029<<x1030)+(x1031|x1032));

	if (t14 != 18446743789703491639LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1121 = 57137381268850LLU;
	uint32_t x1122 = 6U;
	int8_t x1123 = -5;
	static uint8_t x1124 = 0U;
	static uint64_t t15 = 5750796078928900445LLU;

	t15 = ((x1121<<x1122)+(x1123|x1124));

	if (t15 != 3656792401206395LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x1141 = 99U;
	static volatile int32_t x1142 = 1;
	static int64_t t16 = -273951587LL;

	t16 = ((x1141<<x1142)+(x1143|x1144));

	if (t16 != 114757LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1169 = UINT64_MAX;
	static volatile uint8_t x1170 = 38U;
	static int16_t x1171 = -1;
	uint64_t t17 = 33472491851593LLU;

	t17 = ((x1169<<x1170)+(x1171|x1172));

	if (t17 != 18446743798831644671LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x1193 = UINT64_MAX;
	static uint8_t x1194 = 0U;
	int64_t x1195 = INT64_MAX;
	volatile int16_t x1196 = INT16_MIN;
	uint64_t t18 = 258566952965LLU;

	t18 = ((x1193<<x1194)+(x1195|x1196));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1217 = UINT32_MAX;
	int8_t x1218 = 1;
	static uint32_t x1219 = 48U;
	int8_t x1220 = -8;

	t19 = ((x1217<<x1218)+(x1219|x1220));

	if (t19 != 4294967286U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1257 = 785566U;
	static uint8_t x1258 = 3U;
	int32_t x1259 = INT32_MIN;
	static volatile int8_t x1260 = INT8_MIN;
	volatile uint32_t t20 = 59394480U;

	t20 = ((x1257<<x1258)+(x1259|x1260));

	if (t20 != 6284400U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1273 = 701444964U;
	static volatile int16_t x1276 = 10952;
	volatile uint32_t t21 = 458U;

	t21 = ((x1273<<x1274)+(x1275|x1276));

	if (t21 != 2633195839U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1557 = INT32_MAX;
	int64_t x1560 = INT64_MIN;
	volatile int64_t t22 = -243272LL;

	t22 = ((x1557<<x1558)+(x1559|x1560));

	if (t22 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1565 = 8U;
	int16_t x1567 = -4;
	volatile uint32_t x1568 = 1491265U;
	static uint32_t t23 = 0U;

	t23 = ((x1565<<x1566)+(x1567|x1568));

	if (t23 != 5U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1605 = 1;
	uint32_t x1608 = 38U;
	static volatile uint32_t t24 = 58423088U;

	t24 = ((x1605<<x1606)+(x1607|x1608));

	if (t24 != 4294934574U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1642 = 3U;
	int32_t t25 = -365838;

	t25 = ((x1641<<x1642)+(x1643|x1644));

	if (t25 != 32807) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1658 = 4U;
	static int16_t x1659 = -1;

	t26 = ((x1657<<x1658)+(x1659|x1660));

	if (t26 != 51899599U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1873 = 10560;
	static uint8_t x1874 = 0U;
	uint16_t x1875 = UINT16_MAX;
	int32_t t27 = -73;

	t27 = ((x1873<<x1874)+(x1875|x1876));

	if (t27 != 10559) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2017 = 3U;
	int8_t x2018 = 1;
	int32_t x2020 = -1;
	volatile uint64_t t28 = 1055206866LLU;

	t28 = ((x2017<<x2018)+(x2019|x2020));

	if (t28 != 5LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x2053 = 0U;
	uint8_t x2054 = 21U;
	int64_t x2055 = INT64_MIN;
	int64_t x2056 = 417LL;
	volatile int64_t t29 = -8345795LL;

	t29 = ((x2053<<x2054)+(x2055|x2056));

	if (t29 != -9223372036854775391LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x2109 = UINT8_MAX;
	static int16_t x2111 = 0;
	uint64_t x2112 = 98143723LLU;

	t30 = ((x2109<<x2110)+(x2111|x2112));

	if (t30 != 98143978LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x2121 = 367385;
	uint8_t x2122 = 1U;
	static int8_t x2123 = -1;
	int32_t x2124 = INT32_MAX;
	volatile int32_t t31 = 351936;

	t31 = ((x2121<<x2122)+(x2123|x2124));

	if (t31 != 734769) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x2126 = 3;
	int8_t x2127 = INT8_MAX;
	int8_t x2128 = -5;
	int32_t t32 = -3938740;

	t32 = ((x2125<<x2126)+(x2127|x2128));

	if (t32 != 255631) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x2142 = 13U;
	int64_t x2144 = -104940227159LL;
	int64_t t33 = 24387589067LL;

	t33 = ((x2141<<x2142)+(x2143|x2144));

	if (t33 != 4294940073LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2186 = 0;
	uint64_t x2188 = UINT64_MAX;
	static uint64_t t34 = 1LLU;

	t34 = ((x2185<<x2186)+(x2187|x2188));

	if (t34 != 126LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2201 = 357U;
	int8_t x2202 = 18;
	uint16_t x2203 = 146U;
	int16_t x2204 = INT16_MIN;
	uint32_t t35 = 554U;

	t35 = ((x2201<<x2202)+(x2203|x2204));

	if (t35 != 93552786U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2249 = UINT8_MAX;
	int16_t x2250 = 2;
	uint32_t x2251 = 8U;
	volatile int16_t x2252 = INT16_MIN;
	uint32_t t36 = 981041993U;

	t36 = ((x2249<<x2250)+(x2251|x2252));

	if (t36 != 4294935556U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2293 = 125948;
	volatile uint32_t x2294 = 0U;
	uint8_t x2295 = UINT8_MAX;
	uint16_t x2296 = 13385U;
	static volatile int32_t t37 = 1;

	t37 = ((x2293<<x2294)+(x2295|x2296));

	if (t37 != 139515) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2353 = 0LLU;
	static volatile uint16_t x2354 = 2U;
	int64_t x2355 = INT64_MIN;
	static int16_t x2356 = 2;
	volatile uint64_t t38 = 9170361LLU;

	t38 = ((x2353<<x2354)+(x2355|x2356));

	if (t38 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2373 = 2422;
	int64_t x2376 = -1LL;

	t39 = ((x2373<<x2374)+(x2375|x2376));

	if (t39 != 2421LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2385 = 146U;
	static uint16_t x2386 = 1U;
	volatile int16_t x2387 = INT16_MIN;
	int32_t x2388 = INT32_MAX;
	volatile int32_t t40 = -3;

	t40 = ((x2385<<x2386)+(x2387|x2388));

	if (t40 != 291) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2473 = UINT16_MAX;
	uint8_t x2474 = 1U;
	int32_t x2475 = -1;
	volatile int8_t x2476 = -3;
	volatile int32_t t41 = -35;

	t41 = ((x2473<<x2474)+(x2475|x2476));

	if (t41 != 131069) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2485 = 2LL;
	static int64_t x2486 = 13LL;
	uint8_t x2487 = 26U;
	int64_t t42 = -297LL;

	t42 = ((x2485<<x2486)+(x2487|x2488));

	if (t42 != 16282LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2565 = UINT8_MAX;
	int32_t x2567 = -116604868;
	volatile int16_t x2568 = INT16_MIN;
	static int32_t t43 = -1;

	t43 = ((x2565<<x2566)+(x2567|x2568));

	if (t43 != -16069) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2590 = 19U;
	uint64_t x2591 = 1565279LLU;
	int8_t x2592 = INT8_MIN;
	uint64_t t44 = 8184LLU;

	t44 = ((x2589<<x2590)+(x2591|x2592));

	if (t44 != 457179103LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2601 = 1778;
	uint16_t x2602 = 1U;
	volatile int32_t x2603 = INT32_MIN;
	int16_t x2604 = -1;
	volatile int32_t t45 = 15125;

	t45 = ((x2601<<x2602)+(x2603|x2604));

	if (t45 != 3555) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2626 = 3;
	uint16_t x2627 = UINT16_MAX;
	int16_t x2628 = 0;
	static volatile int32_t t46 = 109659;

	t46 = ((x2625<<x2626)+(x2627|x2628));

	if (t46 != 66231) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x2653 = 21;
	uint32_t x2655 = 47083U;
	volatile uint16_t x2656 = 247U;
	static uint32_t t47 = 445U;

	t47 = ((x2653<<x2654)+(x2655|x2656));

	if (t47 != 47145U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2685 = UINT32_MAX;
	volatile int64_t x2688 = -1LL;
	static int64_t t48 = -23075337137598LL;

	t48 = ((x2685<<x2686)+(x2687|x2688));

	if (t48 != 4294967167LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2893 = 15U;
	uint8_t x2894 = 6U;
	int8_t x2895 = 6;
	static volatile int32_t x2896 = 11129334;
	static int32_t t49 = 47;

	t49 = ((x2893<<x2894)+(x2895|x2896));

	if (t49 != 11130294) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2985 = INT8_MAX;
	volatile int8_t x2987 = 0;
	volatile int32_t t50 = -191319582;

	t50 = ((x2985<<x2986)+(x2987|x2988));

	if (t50 != -32641) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3085 = 3U;
	volatile uint32_t x3086 = 1U;
	int64_t x3088 = INT64_MIN;
	volatile int64_t t51 = 10148353029LL;

	t51 = ((x3085<<x3086)+(x3087|x3088));

	if (t51 != -9223372036854775675LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3213 = 142816098LLU;
	volatile int8_t x3214 = 24;
	int16_t x3215 = INT16_MAX;
	uint64_t t52 = 5907785312293138LLU;

	t52 = ((x3213<<x3214)+(x3215|x3216));

	if (t52 != 2396056524488703LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3229 = UINT32_MAX;
	static uint16_t x3230 = 7U;
	volatile int32_t x3231 = INT32_MAX;
	volatile uint16_t x3232 = 0U;

	t53 = ((x3229<<x3230)+(x3231|x3232));

	if (t53 != 2147483519U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3273 = UINT16_MAX;
	int32_t x3274 = 4;
	volatile int8_t x3275 = INT8_MAX;

	t54 = ((x3273<<x3274)+(x3275|x3276));

	if (t54 != 1048687) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3341 = 0;
	int32_t x3343 = INT32_MIN;
	volatile int8_t x3344 = 48;
	static volatile int32_t t55 = 3;

	t55 = ((x3341<<x3342)+(x3343|x3344));

	if (t55 != -2147483600) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3494 = 5LL;
	int32_t x3496 = 0;
	volatile uint32_t t56 = 444424298U;

	t56 = ((x3493<<x3494)+(x3495|x3496));

	if (t56 != 2071136U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x3526 = 2;
	int64_t x3527 = INT64_MAX;
	int8_t x3528 = INT8_MIN;
	volatile int64_t t57 = 23250571764LL;

	t57 = ((x3525<<x3526)+(x3527|x3528));

	if (t57 != 109755LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3597 = 1604680U;
	volatile uint8_t x3598 = 23U;
	volatile int16_t x3599 = -1;
	volatile int64_t x3600 = 2033182172LL;
	volatile int64_t t58 = -1348160701535LL;

	t58 = ((x3597<<x3598)+(x3599|x3600));

	if (t58 != 603979775LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3605 = 61;
	volatile int8_t x3608 = 23;
	int32_t t59 = -23332462;

	t59 = ((x3605<<x3606)+(x3607|x3608));

	if (t59 != -1124073449) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3621 = 2U;
	int8_t x3622 = 0;
	int32_t x3623 = INT32_MIN;
	int16_t x3624 = -1;
	int32_t t60 = -13254;

	t60 = ((x3621<<x3622)+(x3623|x3624));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x4002 = 0;
	volatile int16_t x4003 = -13;
	uint16_t x4004 = UINT16_MAX;
	uint32_t t61 = 11880U;

	t61 = ((x4001<<x4002)+(x4003|x4004));

	if (t61 != 2482544U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4073 = 1;
	int8_t x4074 = 3;
	uint64_t x4075 = 5414362685664289800LLU;
	uint32_t x4076 = UINT32_MAX;
	uint64_t t62 = 212990269225586350LLU;

	t62 = ((x4073<<x4074)+(x4075|x4076));

	if (t62 != 5414362689621196807LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x4094 = 5U;
	uint32_t x4095 = 3U;
	int32_t x4096 = INT32_MIN;
	static uint32_t t63 = 409044U;

	t63 = ((x4093<<x4094)+(x4095|x4096));

	if (t63 != 2147513859U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4158 = 3U;
	int32_t x4159 = INT32_MIN;
	uint64_t x4160 = 5632466LLU;
	static uint64_t t64 = 461889071720527389LLU;

	t64 = ((x4157<<x4158)+(x4159|x4160));

	if (t64 != 18446744071567701450LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4209 = UINT8_MAX;
	uint16_t x4210 = 0U;
	uint8_t x4211 = UINT8_MAX;
	uint64_t x4212 = 475LLU;
	volatile uint64_t t65 = 6439923195026428LLU;

	t65 = ((x4209<<x4210)+(x4211|x4212));

	if (t65 != 766LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4301 = 0;
	static int32_t x4302 = 10;
	static uint8_t x4303 = 29U;
	int8_t x4304 = -1;
	int32_t t66 = -122266933;

	t66 = ((x4301<<x4302)+(x4303|x4304));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4306 = 7;
	int64_t x4307 = INT64_MIN;

	t67 = ((x4305<<x4306)+(x4307|x4308));

	if (t67 != -9223372016610825594LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4357 = UINT8_MAX;
	uint8_t x4358 = 1U;
	int64_t x4359 = INT64_MIN;
	int16_t x4360 = 6358;
	static volatile int64_t t68 = 1660LL;

	t68 = ((x4357<<x4358)+(x4359|x4360));

	if (t68 != -9223372036854768940LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4362 = 1U;
	int8_t x4363 = INT8_MIN;
	static int64_t x4364 = -1LL;

	t69 = ((x4361<<x4362)+(x4363|x4364));

	if (t69 != 18202210234509474675LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4421 = 1U;
	int16_t x4422 = 20;
	uint8_t x4424 = UINT8_MAX;
	volatile int32_t t70 = 24892;

	t70 = ((x4421<<x4422)+(x4423|x4424));

	if (t70 != -2146434817) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4561 = 16098220245341821LLU;
	uint32_t x4562 = 2U;
	uint16_t x4563 = 2U;
	volatile uint64_t t71 = 16239020052LLU;

	t71 = ((x4561<<x4562)+(x4563|x4564));

	if (t71 != 64392880981367607LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4705 = 1767851;
	volatile uint8_t x4706 = 1U;
	int32_t x4707 = -1297;
	static volatile uint32_t t72 = 377851U;

	t72 = ((x4705<<x4706)+(x4707|x4708));

	if (t72 != 3534421U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x4833 = INT16_MAX;
	static volatile uint16_t x4834 = 16U;
	static uint32_t x4835 = UINT32_MAX;
	volatile uint8_t x4836 = 7U;
	uint32_t t73 = 478580726U;

	t73 = ((x4833<<x4834)+(x4835|x4836));

	if (t73 != 2147418111U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4845 = 3217U;
	uint8_t x4846 = 0U;
	static uint32_t x4847 = 1U;
	volatile int8_t x4848 = INT8_MAX;
	volatile uint32_t t74 = 8307U;

	t74 = ((x4845<<x4846)+(x4847|x4848));

	if (t74 != 3344U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4917 = 0U;
	volatile uint8_t x4918 = 23U;
	uint16_t x4919 = 7U;
	volatile int32_t t75 = -2560;

	t75 = ((x4917<<x4918)+(x4919|x4920));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4925 = UINT64_MAX;
	int8_t x4926 = 29;
	int8_t x4927 = INT8_MAX;

	t76 = ((x4925<<x4926)+(x4927|x4928));

	if (t76 != 18446744073172737791LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4985 = UINT8_MAX;
	int64_t x4986 = 1LL;
	int8_t x4988 = INT8_MAX;
	volatile int32_t t77 = -149;

	t77 = ((x4985<<x4986)+(x4987|x4988));

	if (t77 != 509) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5065 = 7161;
	volatile uint32_t x5066 = 7U;
	int16_t x5068 = -1;
	volatile int32_t t78 = 8212;

	t78 = ((x5065<<x5066)+(x5067|x5068));

	if (t78 != 916607) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5129 = UINT64_MAX;
	static int16_t x5130 = 1;
	int8_t x5131 = INT8_MIN;
	int32_t x5132 = -51;
	static uint64_t t79 = 93753420979597986LLU;

	t79 = ((x5129<<x5130)+(x5131|x5132));

	if (t79 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x5138 = 24U;
	static int8_t x5139 = INT8_MIN;
	volatile int16_t x5140 = INT16_MAX;
	int32_t t80 = -3911;

	t80 = ((x5137<<x5138)+(x5139|x5140));

	if (t80 != 100663295) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5141 = 6;
	int32_t x5143 = INT32_MAX;
	int16_t x5144 = -1;

	t81 = ((x5141<<x5142)+(x5143|x5144));

	if (t81 != 383) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x5309 = 1U;
	static int8_t x5311 = 4;
	int32_t t82 = 8065101;

	t82 = ((x5309<<x5310)+(x5311|x5312));

	if (t82 != 28639) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5501 = INT16_MAX;
	static int16_t x5503 = INT16_MAX;
	uint16_t x5504 = 0U;
	volatile int32_t t83 = -19587;

	t83 = ((x5501<<x5502)+(x5503|x5504));

	if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x5658 = 0U;
	int8_t x5659 = -1;
	int64_t x5660 = 0LL;
	int64_t t84 = -533765093LL;

	t84 = ((x5657<<x5658)+(x5659|x5660));

	if (t84 != 126866LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5705 = 33605690860234LLU;
	static int8_t x5706 = 1;
	int32_t x5707 = INT32_MIN;
	static int64_t x5708 = -1LL;
	volatile uint64_t t85 = 1LLU;

	t85 = ((x5705<<x5706)+(x5707|x5708));

	if (t85 != 67211381720467LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5729 = UINT8_MAX;
	int8_t x5731 = INT8_MIN;
	static int16_t x5732 = INT16_MIN;
	int32_t t86 = -3;

	t86 = ((x5729<<x5730)+(x5731|x5732));

	if (t86 != 382) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5813 = INT32_MAX;
	uint64_t x5815 = 11LLU;
	uint64_t t87 = 4509014261115118295LLU;

	t87 = ((x5813<<x5814)+(x5815|x5816));

	if (t87 != 4294967294LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5853 = UINT64_MAX;
	static int8_t x5854 = 17;
	int64_t x5855 = INT64_MIN;
	uint8_t x5856 = 19U;
	uint64_t t88 = 3048991053963818LLU;

	t88 = ((x5853<<x5854)+(x5855|x5856));

	if (t88 != 9223372036854644755LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5858 = 1;
	uint16_t x5859 = 401U;
	int64_t x5860 = 374505961707620LL;
	int64_t t89 = 2077LL;

	t89 = ((x5857<<x5858)+(x5859|x5860));

	if (t89 != 374510256675315LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x5861 = 0U;
	int16_t x5862 = 6;
	int8_t x5863 = INT8_MIN;
	uint64_t x5864 = 7LLU;
	uint64_t t90 = 36299LLU;

	t90 = ((x5861<<x5862)+(x5863|x5864));

	if (t90 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5881 = 51147LLU;
	uint8_t x5882 = 1U;
	uint64_t x5883 = 776837689929LLU;
	int16_t x5884 = -196;
	volatile uint64_t t91 = 7LLU;

	t91 = ((x5881<<x5882)+(x5883|x5884));

	if (t91 != 102163LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5903 = 1303782U;
	int32_t x5904 = INT32_MIN;
	static volatile uint32_t t92 = 525U;

	t92 = ((x5901<<x5902)+(x5903|x5904));

	if (t92 != 3222529254U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x6085 = 148015177056702036LL;
	uint16_t x6086 = 2U;
	uint16_t x6087 = UINT16_MAX;
	int64_t t93 = -795408795800LL;

	t93 = ((x6085<<x6086)+(x6087|x6088));

	if (t93 != 592060708226873679LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x6089 = 436811680;
	uint64_t x6090 = 0LLU;
	int32_t x6092 = -1;

	t94 = ((x6089<<x6090)+(x6091|x6092));

	if (t94 != 436811679LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6109 = UINT8_MAX;
	int8_t x6110 = 16;
	int8_t x6111 = -29;
	volatile uint64_t t95 = 50LLU;

	t95 = ((x6109<<x6110)+(x6111|x6112));

	if (t95 != 16711679LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6113 = 250U;
	int16_t x6114 = 2;
	static int16_t x6115 = INT16_MIN;
	int32_t x6116 = INT32_MIN;
	volatile int32_t t96 = -17645938;

	t96 = ((x6113<<x6114)+(x6115|x6116));

	if (t96 != -31768) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6161 = UINT16_MAX;
	static int16_t x6162 = 1;
	uint8_t x6164 = UINT8_MAX;
	static volatile int32_t t97 = -1310;

	t97 = ((x6161<<x6162)+(x6163|x6164));

	if (t97 != 131069) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6250 = 1;
	int8_t x6251 = -1;
	int16_t x6252 = 1;
	int32_t t98 = -7960;

	t98 = ((x6249<<x6250)+(x6251|x6252));

	if (t98 != 131069) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x6449 = 222141521498LLU;
	volatile int8_t x6450 = 1;
	int64_t x6452 = -1LL;

	t99 = ((x6449<<x6450)+(x6451|x6452));

	if (t99 != 444283042995LLU) { NG(); } else { ; }
	
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

