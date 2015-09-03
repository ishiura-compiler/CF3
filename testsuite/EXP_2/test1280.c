#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 6U;
int8_t x14 = INT8_MAX;
uint64_t x58 = UINT64_MAX;
volatile int32_t t3 = -596;
static int64_t x87 = -45229398564840LL;
int16_t x91 = -790;
static uint8_t x92 = 1U;
volatile int32_t t5 = 0;
static int16_t x145 = INT16_MIN;
uint64_t x147 = UINT64_MAX;
int64_t x197 = 13697762LL;
uint64_t x246 = UINT64_MAX;
int8_t x248 = 1;
volatile int32_t t10 = -117569521;
int16_t x283 = -14;
int8_t x292 = 1;
int16_t x312 = 0;
uint16_t x369 = 969U;
uint16_t x371 = UINT16_MAX;
static volatile int32_t t15 = -275;
volatile int16_t x533 = -8021;
int32_t x554 = 6;
volatile int32_t t20 = 26;
uint32_t x685 = 94092U;
int8_t x688 = 12;
int64_t x695 = -1LL;
int16_t x726 = INT16_MIN;
int64_t x739 = -263319051501874754LL;
static volatile int64_t x882 = 1252LL;
static uint16_t x915 = 13U;
static int32_t t27 = -781225177;
volatile int64_t x935 = INT64_MIN;
volatile int16_t x998 = INT16_MAX;
volatile int8_t x1205 = INT8_MAX;
int64_t x1367 = 453564109487759887LL;
uint8_t x1368 = 11U;
uint8_t x1456 = 2U;
int32_t x1531 = INT32_MAX;
int32_t t39 = 37709;
uint32_t x1781 = 121880U;
static int64_t x1967 = 1077758244LL;
static volatile uint16_t x2017 = UINT16_MAX;
static int16_t x2052 = 7;
static volatile int16_t x2167 = -1;
static volatile int8_t x2188 = 4;
static int32_t t52 = -329;
int16_t x2213 = -3920;
volatile int32_t t53 = -192;
int8_t x2220 = 21;
int8_t x2234 = INT8_MIN;
volatile uint32_t x2257 = 1U;
int32_t t56 = 0;
int16_t x2269 = 0;
uint8_t x2272 = 0U;
int16_t x2273 = INT16_MIN;
uint16_t x2274 = 5U;
static uint8_t x2276 = 0U;
volatile int16_t x2375 = -1;
int32_t x2394 = INT32_MIN;
static int8_t x2395 = INT8_MIN;
uint8_t x2421 = UINT8_MAX;
uint32_t x2422 = 507469440U;
int16_t x2423 = INT16_MAX;
int32_t x2435 = INT32_MAX;
int16_t x2447 = INT16_MAX;
uint32_t x2535 = 7U;
static int32_t t69 = 518;
int64_t x2594 = INT64_MIN;
uint64_t x2595 = 10172344325402LLU;
int16_t x2689 = INT16_MIN;
uint8_t x2720 = 3U;
static volatile int32_t t73 = 7;
int32_t t74 = -15025;
static int8_t x2751 = 29;
static int8_t x2780 = 4;
uint8_t x2808 = 23U;
int32_t t78 = -11252;
int32_t x2837 = INT32_MIN;
static uint8_t x2938 = 31U;
int32_t t81 = 72;
int64_t x3049 = 16865171LL;
int16_t x3113 = -1;
int32_t t84 = 1;
static int64_t x3121 = -2106688926LL;
uint32_t x3122 = UINT32_MAX;
int32_t x3183 = INT32_MIN;
int32_t t88 = -3908;
static uint32_t x3206 = 368U;
static volatile uint8_t x3248 = 6U;
int8_t x3254 = -1;
uint8_t x3256 = 11U;
uint8_t x3260 = 1U;
int32_t t92 = -27256;
static int32_t x3295 = INT32_MIN;
static uint64_t x3299 = 29510217LLU;
volatile int32_t t95 = -115153;
static int64_t x3429 = INT64_MIN;
uint16_t x3434 = UINT16_MAX;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int8_t x2 = INT8_MIN;
	uint8_t x3 = 5U;
	int32_t t0 = -112861;

	t0 = ((x1==(x2==x3))<<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	volatile int64_t x15 = -57LL;
	static int8_t x16 = 0;
	static int32_t t1 = -9;

	t1 = ((x13==(x14==x15))<<x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x37 = -15384667211660LL;
	int64_t x38 = -1LL;
	static volatile uint8_t x39 = 1U;
	int32_t x40 = 1;
	volatile int32_t t2 = -27;

	t2 = ((x37==(x38==x39))<<x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x57 = -1;
	int16_t x59 = INT16_MIN;
	int8_t x60 = 0;

	t3 = ((x57==(x58==x59))<<x60);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x85 = -17026762;
	volatile int32_t x86 = -511343731;
	int8_t x88 = 3;
	volatile int32_t t4 = -930397;

	t4 = ((x85==(x86==x87))<<x88);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x89 = 7931182731042LLU;
	volatile uint8_t x90 = 24U;

	t5 = ((x89==(x90==x91))<<x92);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x121 = 5U;
	volatile int16_t x122 = INT16_MAX;
	int64_t x123 = 2882196588LL;
	int8_t x124 = 0;
	volatile int32_t t6 = 40781;

	t6 = ((x121==(x122==x123))<<x124);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x146 = UINT16_MAX;
	int8_t x148 = 0;
	volatile int32_t t7 = 17807114;

	t7 = ((x145==(x146==x147))<<x148);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x177 = -479273110578LL;
	static uint8_t x178 = 2U;
	volatile uint64_t x179 = 648534663LLU;
	uint8_t x180 = 1U;
	int32_t t8 = -205405;

	t8 = ((x177==(x178==x179))<<x180);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x198 = INT64_MIN;
	int32_t x199 = -1;
	int8_t x200 = 1;
	volatile int32_t t9 = -64;

	t9 = ((x197==(x198==x199))<<x200);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x245 = INT64_MIN;
	uint32_t x247 = 7U;

	t10 = ((x245==(x246==x247))<<x248);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x249 = 2380U;
	uint32_t x250 = 13010328U;
	volatile uint16_t x251 = 1950U;
	uint16_t x252 = 3U;
	static volatile int32_t t11 = 866574730;

	t11 = ((x249==(x250==x251))<<x252);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x281 = UINT64_MAX;
	static int64_t x282 = -1231188096100973169LL;
	volatile int32_t x284 = 29;
	volatile int32_t t12 = -3868103;

	t12 = ((x281==(x282==x283))<<x284);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x289 = INT8_MAX;
	uint64_t x290 = UINT64_MAX;
	volatile int32_t x291 = INT32_MIN;
	static volatile int32_t t13 = 0;

	t13 = ((x289==(x290==x291))<<x292);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x309 = 0LL;
	int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	volatile int32_t t14 = 16949;

	t14 = ((x309==(x310==x311))<<x312);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x370 = INT8_MAX;
	uint16_t x372 = 14U;

	t15 = ((x369==(x370==x371))<<x372);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x373 = -56274LL;
	int16_t x374 = INT16_MIN;
	volatile int32_t x375 = INT32_MAX;
	volatile uint8_t x376 = 27U;
	static int32_t t16 = 1;

	t16 = ((x373==(x374==x375))<<x376);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x421 = 0;
	int64_t x422 = -2114805278348491889LL;
	static int16_t x423 = INT16_MAX;
	volatile uint64_t x424 = 11LLU;
	static volatile int32_t t17 = 564534043;

	t17 = ((x421==(x422==x423))<<x424);

	if (t17 != 2048) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x425 = -1LL;
	uint8_t x426 = 84U;
	uint8_t x427 = 112U;
	uint16_t x428 = 3U;
	volatile int32_t t18 = -5781;

	t18 = ((x425==(x426==x427))<<x428);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x534 = INT16_MAX;
	int32_t x535 = INT32_MIN;
	uint16_t x536 = 1U;
	int32_t t19 = 51825;

	t19 = ((x533==(x534==x535))<<x536);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x553 = INT64_MIN;
	int16_t x555 = INT16_MIN;
	volatile int32_t x556 = 7;

	t20 = ((x553==(x554==x555))<<x556);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x686 = INT64_MAX;
	int64_t x687 = INT64_MAX;
	int32_t t21 = 3;

	t21 = ((x685==(x686==x687))<<x688);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x693 = INT16_MAX;
	int32_t x694 = INT32_MAX;
	static volatile uint16_t x696 = 15U;
	volatile int32_t t22 = 92;

	t22 = ((x693==(x694==x695))<<x696);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x725 = INT8_MAX;
	uint16_t x727 = UINT16_MAX;
	uint8_t x728 = 0U;
	volatile int32_t t23 = 503;

	t23 = ((x725==(x726==x727))<<x728);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x737 = INT8_MAX;
	int64_t x738 = -1LL;
	int8_t x740 = 18;
	volatile int32_t t24 = -59568;

	t24 = ((x737==(x738==x739))<<x740);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x869 = 111U;
	int8_t x870 = -1;
	volatile uint32_t x871 = 6223U;
	int8_t x872 = 2;
	volatile int32_t t25 = 57;

	t25 = ((x869==(x870==x871))<<x872);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x881 = INT8_MIN;
	int16_t x883 = 1;
	uint32_t x884 = 5U;
	volatile int32_t t26 = -18;

	t26 = ((x881==(x882==x883))<<x884);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x913 = INT64_MIN;
	uint16_t x914 = 4U;
	static volatile uint8_t x916 = 5U;

	t27 = ((x913==(x914==x915))<<x916);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x933 = 775U;
	uint16_t x934 = UINT16_MAX;
	static int8_t x936 = 16;
	volatile int32_t t28 = -97;

	t28 = ((x933==(x934==x935))<<x936);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x961 = 10U;
	int8_t x962 = INT8_MAX;
	int32_t x963 = INT32_MIN;
	uint32_t x964 = 2U;
	int32_t t29 = -1586;

	t29 = ((x961==(x962==x963))<<x964);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x997 = UINT64_MAX;
	volatile int8_t x999 = -1;
	uint16_t x1000 = 2U;
	volatile int32_t t30 = -896;

	t30 = ((x997==(x998==x999))<<x1000);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1089 = -1377713976302618109LL;
	int16_t x1090 = -122;
	int32_t x1091 = INT32_MIN;
	volatile uint8_t x1092 = 20U;
	int32_t t31 = -2678340;

	t31 = ((x1089==(x1090==x1091))<<x1092);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1206 = INT8_MIN;
	int16_t x1207 = INT16_MIN;
	uint8_t x1208 = 6U;
	int32_t t32 = 111;

	t32 = ((x1205==(x1206==x1207))<<x1208);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1225 = 52U;
	uint16_t x1226 = 1821U;
	int64_t x1227 = 1729LL;
	static uint8_t x1228 = 4U;
	int32_t t33 = -80139563;

	t33 = ((x1225==(x1226==x1227))<<x1228);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x1365 = 12988U;
	uint8_t x1366 = 0U;
	int32_t t34 = 0;

	t34 = ((x1365==(x1366==x1367))<<x1368);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1429 = -3;
	int16_t x1430 = 415;
	volatile int16_t x1431 = 9;
	static uint8_t x1432 = 1U;
	int32_t t35 = 340;

	t35 = ((x1429==(x1430==x1431))<<x1432);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1453 = -1LL;
	int16_t x1454 = -1;
	int64_t x1455 = 8953470510LL;
	static volatile int32_t t36 = 0;

	t36 = ((x1453==(x1454==x1455))<<x1456);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1529 = UINT64_MAX;
	uint64_t x1530 = UINT64_MAX;
	int8_t x1532 = 0;
	int32_t t37 = 88091526;

	t37 = ((x1529==(x1530==x1531))<<x1532);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1629 = INT16_MAX;
	int16_t x1630 = -1;
	uint16_t x1631 = UINT16_MAX;
	uint8_t x1632 = 26U;
	volatile int32_t t38 = -28553753;

	t38 = ((x1629==(x1630==x1631))<<x1632);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1693 = -11;
	int8_t x1694 = INT8_MIN;
	int16_t x1695 = -1;
	uint8_t x1696 = 6U;

	t39 = ((x1693==(x1694==x1695))<<x1696);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x1745 = 6U;
	uint64_t x1746 = 245228931883LLU;
	uint64_t x1747 = UINT64_MAX;
	int64_t x1748 = 30LL;
	int32_t t40 = 64984830;

	t40 = ((x1745==(x1746==x1747))<<x1748);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1782 = -4;
	volatile uint64_t x1783 = 17159607LLU;
	uint8_t x1784 = 14U;
	int32_t t41 = -8;

	t41 = ((x1781==(x1782==x1783))<<x1784);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1813 = INT32_MIN;
	int8_t x1814 = INT8_MIN;
	uint16_t x1815 = UINT16_MAX;
	int8_t x1816 = 1;
	int32_t t42 = 1;

	t42 = ((x1813==(x1814==x1815))<<x1816);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x1909 = -50538853482651435LL;
	static volatile int32_t x1910 = -10685807;
	int32_t x1911 = INT32_MAX;
	static int8_t x1912 = 4;
	int32_t t43 = -41167461;

	t43 = ((x1909==(x1910==x1911))<<x1912);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1957 = INT16_MIN;
	int64_t x1958 = INT64_MIN;
	uint64_t x1959 = UINT64_MAX;
	volatile uint8_t x1960 = 27U;
	int32_t t44 = 76891984;

	t44 = ((x1957==(x1958==x1959))<<x1960);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1961 = UINT8_MAX;
	int16_t x1962 = 0;
	int16_t x1963 = -4;
	static uint8_t x1964 = 1U;
	int32_t t45 = 48491;

	t45 = ((x1961==(x1962==x1963))<<x1964);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1965 = INT8_MAX;
	volatile int8_t x1966 = -1;
	volatile int8_t x1968 = 0;
	int32_t t46 = -113980696;

	t46 = ((x1965==(x1966==x1967))<<x1968);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2018 = INT32_MIN;
	static int16_t x2019 = INT16_MIN;
	volatile uint8_t x2020 = 10U;
	volatile int32_t t47 = -9130014;

	t47 = ((x2017==(x2018==x2019))<<x2020);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2049 = INT32_MIN;
	int16_t x2050 = INT16_MIN;
	int32_t x2051 = -951611374;
	int32_t t48 = -1;

	t48 = ((x2049==(x2050==x2051))<<x2052);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2093 = 1;
	int8_t x2094 = INT8_MIN;
	uint32_t x2095 = 5U;
	volatile uint16_t x2096 = 15U;
	int32_t t49 = 263962076;

	t49 = ((x2093==(x2094==x2095))<<x2096);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2145 = INT64_MAX;
	int64_t x2146 = -3057013901104LL;
	volatile int8_t x2147 = 4;
	int8_t x2148 = 14;
	static volatile int32_t t50 = 19;

	t50 = ((x2145==(x2146==x2147))<<x2148);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2165 = INT32_MAX;
	int8_t x2166 = -1;
	int8_t x2168 = 1;
	static int32_t t51 = -124219;

	t51 = ((x2165==(x2166==x2167))<<x2168);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2185 = -9131;
	int64_t x2186 = -2LL;
	int32_t x2187 = -1;

	t52 = ((x2185==(x2186==x2187))<<x2188);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2214 = INT8_MIN;
	int16_t x2215 = 6277;
	static uint32_t x2216 = 1U;

	t53 = ((x2213==(x2214==x2215))<<x2216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2217 = 36;
	int64_t x2218 = INT64_MAX;
	uint8_t x2219 = 4U;
	static volatile int32_t t54 = 48;

	t54 = ((x2217==(x2218==x2219))<<x2220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2233 = -1;
	int32_t x2235 = -102;
	uint32_t x2236 = 22U;
	int32_t t55 = 8095887;

	t55 = ((x2233==(x2234==x2235))<<x2236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2258 = 252U;
	volatile uint8_t x2259 = 21U;
	int16_t x2260 = 1;

	t56 = ((x2257==(x2258==x2259))<<x2260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2270 = 3177U;
	volatile int16_t x2271 = 626;
	int32_t t57 = 146460;

	t57 = ((x2269==(x2270==x2271))<<x2272);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2275 = INT32_MAX;
	int32_t t58 = 332747;

	t58 = ((x2273==(x2274==x2275))<<x2276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2301 = INT16_MAX;
	static int16_t x2302 = -147;
	uint32_t x2303 = 0U;
	uint8_t x2304 = 2U;
	static int32_t t59 = 1244715;

	t59 = ((x2301==(x2302==x2303))<<x2304);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2309 = 246066226569LLU;
	int16_t x2310 = INT16_MIN;
	uint32_t x2311 = UINT32_MAX;
	static int64_t x2312 = 1LL;
	int32_t t60 = 1979279;

	t60 = ((x2309==(x2310==x2311))<<x2312);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2353 = INT32_MIN;
	uint8_t x2354 = 89U;
	volatile int8_t x2355 = -1;
	int8_t x2356 = 5;
	volatile int32_t t61 = -227524;

	t61 = ((x2353==(x2354==x2355))<<x2356);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x2373 = 1U;
	static int16_t x2374 = -1;
	uint8_t x2376 = 20U;
	volatile int32_t t62 = -828198748;

	t62 = ((x2373==(x2374==x2375))<<x2376);

	if (t62 != 1048576) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x2393 = 146206429U;
	uint8_t x2396 = 2U;
	volatile int32_t t63 = 5296212;

	t63 = ((x2393==(x2394==x2395))<<x2396);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2424 = 13;
	static int32_t t64 = 3234;

	t64 = ((x2421==(x2422==x2423))<<x2424);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2433 = INT16_MIN;
	int32_t x2434 = INT32_MAX;
	uint16_t x2436 = 1U;
	int32_t t65 = -1474;

	t65 = ((x2433==(x2434==x2435))<<x2436);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2445 = -773;
	uint32_t x2446 = 2786236U;
	static int16_t x2448 = 0;
	int32_t t66 = 4329;

	t66 = ((x2445==(x2446==x2447))<<x2448);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x2457 = -1LL;
	int8_t x2458 = -1;
	uint16_t x2459 = 24514U;
	static int8_t x2460 = 3;
	int32_t t67 = -21;

	t67 = ((x2457==(x2458==x2459))<<x2460);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2477 = UINT8_MAX;
	int16_t x2478 = INT16_MAX;
	static int64_t x2479 = 586037LL;
	static uint8_t x2480 = 2U;
	int32_t t68 = 139;

	t68 = ((x2477==(x2478==x2479))<<x2480);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x2533 = INT16_MIN;
	uint16_t x2534 = 1U;
	volatile int8_t x2536 = 19;

	t69 = ((x2533==(x2534==x2535))<<x2536);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x2577 = INT32_MAX;
	int64_t x2578 = INT64_MIN;
	int32_t x2579 = INT32_MIN;
	uint8_t x2580 = 1U;
	int32_t t70 = -691;

	t70 = ((x2577==(x2578==x2579))<<x2580);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x2593 = INT64_MIN;
	uint8_t x2596 = 0U;
	int32_t t71 = -35180;

	t71 = ((x2593==(x2594==x2595))<<x2596);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2690 = 10137872U;
	volatile int32_t x2691 = INT32_MIN;
	static uint8_t x2692 = 5U;
	int32_t t72 = 7;

	t72 = ((x2689==(x2690==x2691))<<x2692);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x2717 = UINT8_MAX;
	int8_t x2718 = 0;
	int8_t x2719 = -1;

	t73 = ((x2717==(x2718==x2719))<<x2720);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2725 = INT16_MIN;
	static volatile int64_t x2726 = INT64_MAX;
	int8_t x2727 = 13;
	static volatile uint8_t x2728 = 25U;

	t74 = ((x2725==(x2726==x2727))<<x2728);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x2737 = 46;
	int32_t x2738 = INT32_MAX;
	static int8_t x2739 = INT8_MIN;
	uint16_t x2740 = 27U;
	volatile int32_t t75 = 11216242;

	t75 = ((x2737==(x2738==x2739))<<x2740);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x2749 = 16042939402151806LL;
	uint16_t x2750 = 965U;
	uint8_t x2752 = 26U;
	volatile int32_t t76 = 3200;

	t76 = ((x2749==(x2750==x2751))<<x2752);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x2777 = -2;
	uint16_t x2778 = 6379U;
	uint16_t x2779 = 7823U;
	static volatile int32_t t77 = -181062;

	t77 = ((x2777==(x2778==x2779))<<x2780);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2805 = INT8_MIN;
	int8_t x2806 = 2;
	volatile int32_t x2807 = INT32_MIN;

	t78 = ((x2805==(x2806==x2807))<<x2808);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2838 = INT8_MIN;
	int16_t x2839 = -1;
	int8_t x2840 = 1;
	static int32_t t79 = 756731088;

	t79 = ((x2837==(x2838==x2839))<<x2840);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2845 = 1747471LL;
	int32_t x2846 = -1;
	int8_t x2847 = INT8_MIN;
	uint16_t x2848 = 10U;
	volatile int32_t t80 = -5036;

	t80 = ((x2845==(x2846==x2847))<<x2848);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2937 = 788;
	static int32_t x2939 = INT32_MIN;
	static int32_t x2940 = 0;

	t81 = ((x2937==(x2938==x2939))<<x2940);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3050 = INT64_MAX;
	volatile int32_t x3051 = INT32_MIN;
	volatile int16_t x3052 = 0;
	int32_t t82 = 199027139;

	t82 = ((x3049==(x3050==x3051))<<x3052);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3061 = INT32_MIN;
	volatile int16_t x3062 = -4658;
	int16_t x3063 = INT16_MIN;
	static int32_t x3064 = 15;
	volatile int32_t t83 = -17647;

	t83 = ((x3061==(x3062==x3063))<<x3064);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3114 = 1300U;
	static volatile uint8_t x3115 = 3U;
	uint8_t x3116 = 1U;

	t84 = ((x3113==(x3114==x3115))<<x3116);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3123 = INT16_MIN;
	volatile int8_t x3124 = 26;
	static int32_t t85 = -4;

	t85 = ((x3121==(x3122==x3123))<<x3124);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x3141 = -27;
	static volatile int8_t x3142 = 29;
	uint8_t x3143 = 47U;
	uint8_t x3144 = 6U;
	volatile int32_t t86 = 29614201;

	t86 = ((x3141==(x3142==x3143))<<x3144);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3181 = INT8_MAX;
	int8_t x3182 = 11;
	int16_t x3184 = 10;
	int32_t t87 = 1434707;

	t87 = ((x3181==(x3182==x3183))<<x3184);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3193 = INT64_MAX;
	volatile int64_t x3194 = -3325LL;
	int8_t x3195 = INT8_MIN;
	int8_t x3196 = 1;

	t88 = ((x3193==(x3194==x3195))<<x3196);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3205 = UINT64_MAX;
	int8_t x3207 = INT8_MIN;
	int16_t x3208 = 1;
	int32_t t89 = 1341056;

	t89 = ((x3205==(x3206==x3207))<<x3208);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x3245 = 4987;
	int64_t x3246 = INT64_MIN;
	int8_t x3247 = -1;
	int32_t t90 = -92082;

	t90 = ((x3245==(x3246==x3247))<<x3248);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3253 = -216169826;
	int8_t x3255 = INT8_MAX;
	static int32_t t91 = -344212;

	t91 = ((x3253==(x3254==x3255))<<x3256);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3257 = INT16_MAX;
	int8_t x3258 = INT8_MIN;
	volatile uint16_t x3259 = 0U;

	t92 = ((x3257==(x3258==x3259))<<x3260);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3293 = -1;
	int8_t x3294 = -7;
	int16_t x3296 = 3;
	volatile int32_t t93 = 1251;

	t93 = ((x3293==(x3294==x3295))<<x3296);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3297 = 1U;
	int64_t x3298 = -1LL;
	uint8_t x3300 = 0U;
	volatile int32_t t94 = 1;

	t94 = ((x3297==(x3298==x3299))<<x3300);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3301 = INT64_MIN;
	uint32_t x3302 = UINT32_MAX;
	int16_t x3303 = INT16_MIN;
	int16_t x3304 = 8;

	t95 = ((x3301==(x3302==x3303))<<x3304);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x3333 = 418165791LLU;
	uint64_t x3334 = 173LLU;
	int8_t x3335 = INT8_MIN;
	uint8_t x3336 = 15U;
	volatile int32_t t96 = 165;

	t96 = ((x3333==(x3334==x3335))<<x3336);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3377 = -33LL;
	int8_t x3378 = INT8_MIN;
	uint64_t x3379 = UINT64_MAX;
	uint8_t x3380 = 14U;
	volatile int32_t t97 = 371;

	t97 = ((x3377==(x3378==x3379))<<x3380);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x3430 = -1LL;
	uint16_t x3431 = 1835U;
	int32_t x3432 = 0;
	static int32_t t98 = 737;

	t98 = ((x3429==(x3430==x3431))<<x3432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3433 = 80303815LL;
	int16_t x3435 = -165;
	volatile uint8_t x3436 = 21U;
	volatile int32_t t99 = -18;

	t99 = ((x3433==(x3434==x3435))<<x3436);

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

