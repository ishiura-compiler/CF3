#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
uint8_t x4 = 26U;
volatile int32_t t0 = 3;
volatile uint32_t x26 = UINT32_MAX;
int32_t x173 = INT32_MIN;
static int32_t x174 = INT32_MAX;
volatile uint16_t x175 = UINT16_MAX;
volatile int32_t t3 = 1;
static volatile int64_t x209 = INT64_MIN;
int64_t x210 = -1LL;
uint8_t x268 = 14U;
uint64_t x457 = 0LLU;
static uint32_t x458 = 16031U;
static int8_t x593 = -1;
int32_t x629 = -18178956;
int16_t x630 = INT16_MIN;
uint16_t x741 = 1472U;
int32_t x743 = INT32_MAX;
uint8_t x838 = 10U;
uint8_t x839 = 7U;
static volatile int32_t t15 = -16774;
volatile uint8_t x875 = 0U;
volatile int32_t t16 = -473898;
volatile int8_t x952 = 5;
uint32_t x1077 = UINT32_MAX;
int16_t x1078 = INT16_MIN;
uint16_t x1111 = 3U;
static uint16_t x1276 = 6U;
volatile uint64_t t22 = 0LLU;
int64_t x1446 = -1LL;
static int8_t x1448 = 1;
static uint64_t x1511 = 108420LLU;
int8_t x1536 = 12;
int32_t t26 = 660981029;
static uint8_t x1763 = UINT8_MAX;
uint8_t x1839 = 7U;
int32_t x1992 = 7;
int16_t x2105 = -1;
static volatile uint8_t x2108 = 3U;
int32_t t33 = 342908821;
int16_t x2149 = INT16_MIN;
uint8_t x2150 = 0U;
int16_t x2174 = 456;
int64_t x2246 = 107LL;
static volatile uint64_t x2323 = UINT64_MAX;
static uint16_t x2328 = 2U;
volatile uint8_t x2379 = UINT8_MAX;
int8_t x2396 = 1;
static volatile uint32_t t44 = 574U;
uint32_t x2934 = 792477U;
volatile int32_t t46 = -4427;
int8_t x3005 = INT8_MAX;
uint64_t t47 = 95518597441LLU;
int16_t x3060 = 3;
int32_t t49 = -67013148;
volatile uint64_t x3137 = 57517LLU;
uint16_t x3140 = 0U;
volatile uint64_t t52 = 53785368025704817LLU;
int8_t x3249 = INT8_MAX;
int64_t x3251 = INT64_MAX;
static int8_t x3252 = 2;
uint64_t x3281 = 360863580097560LLU;
uint64_t t54 = 2563LLU;
int64_t x3366 = -1LL;
static int8_t x3450 = INT8_MIN;
volatile uint16_t x3461 = 6014U;
static int32_t x3462 = INT32_MAX;
volatile int32_t t60 = 106385;
volatile int64_t x3467 = INT64_MAX;
static uint64_t x3531 = 28200156563499LLU;
int16_t x3632 = 0;
uint64_t t64 = 11599LLU;
uint16_t x3885 = UINT16_MAX;
int32_t t65 = -405902;
int32_t x3913 = -442822;
int8_t x3916 = 13;
int8_t x4017 = INT8_MIN;
volatile uint16_t x4020 = 1U;
volatile int64_t x4073 = INT64_MIN;
uint8_t x4124 = 0U;
volatile uint32_t t69 = 255U;
volatile uint32_t x4715 = 2U;
uint8_t x4736 = 1U;
int32_t t77 = -6800;
uint32_t x4797 = 181U;
volatile int32_t x4798 = INT32_MIN;
volatile int32_t x4809 = -4;
uint8_t x4812 = 2U;
int32_t t80 = 6;
volatile int8_t x5455 = INT8_MAX;
volatile int32_t t82 = 35;
int32_t x5528 = 0;
int32_t t85 = 351050403;
static volatile int32_t t86 = 0;
volatile uint32_t x5584 = 0U;
uint32_t x5619 = 826850U;
uint32_t x5632 = 1U;
uint8_t x5690 = 2U;
int32_t x5710 = INT32_MIN;
int32_t x5793 = INT32_MIN;
int8_t x5836 = 0;
int32_t x6078 = INT32_MAX;
static uint8_t x6100 = 63U;


void f0(void) {
	uint8_t x2 = 112U;
	int16_t x3 = 6111;

	t0 = ((x1<=x2)+(x3>>x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x25 = -1LL;
	volatile uint64_t x27 = UINT64_MAX;
	volatile uint16_t x28 = 34U;
	uint64_t t1 = 4282337219LLU;

	t1 = ((x25<=x26)+(x27>>x28));

	if (t1 != 1073741824LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x29 = INT8_MAX;
	volatile uint8_t x30 = 2U;
	volatile int8_t x31 = INT8_MAX;
	static int8_t x32 = 0;
	static volatile int32_t t2 = -1779441;

	t2 = ((x29<=x30)+(x31>>x32));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x176 = 0;

	t3 = ((x173<=x174)+(x175>>x176));

	if (t3 != 65536) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x185 = -1881;
	uint32_t x186 = UINT32_MAX;
	int8_t x187 = 1;
	int32_t x188 = 1;
	int32_t t4 = 1245106;

	t4 = ((x185<=x186)+(x187>>x188));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x211 = 30;
	volatile int32_t x212 = 21;
	int32_t t5 = -1;

	t5 = ((x209<=x210)+(x211>>x212));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x266 = INT16_MIN;
	uint32_t x267 = 265587U;
	volatile uint32_t t6 = 119966555U;

	t6 = ((x265<=x266)+(x267>>x268));

	if (t6 != 16U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x321 = INT32_MAX;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = INT32_MAX;
	uint8_t x324 = 1U;
	int32_t t7 = 46231;

	t7 = ((x321<=x322)+(x323>>x324));

	if (t7 != 1073741823) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x381 = 1323U;
	int8_t x382 = 1;
	static uint32_t x383 = 554019629U;
	int32_t x384 = 2;
	static uint32_t t8 = 221U;

	t8 = ((x381<=x382)+(x383>>x384));

	if (t8 != 138504907U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x453 = UINT32_MAX;
	static int32_t x454 = INT32_MIN;
	uint64_t x455 = 1103585008253624941LLU;
	int8_t x456 = 14;
	volatile uint64_t t9 = 261LLU;

	t9 = ((x453<=x454)+(x455>>x456));

	if (t9 != 67357483413917LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x459 = 2U;
	uint16_t x460 = 23U;
	volatile int32_t t10 = -14802511;

	t10 = ((x457<=x458)+(x459>>x460));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x594 = INT64_MIN;
	uint64_t x595 = UINT64_MAX;
	int16_t x596 = 1;
	static uint64_t t11 = 7390289206LLU;

	t11 = ((x593<=x594)+(x595>>x596));

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x631 = UINT16_MAX;
	volatile uint32_t x632 = 20U;
	int32_t t12 = 22;

	t12 = ((x629<=x630)+(x631>>x632));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x705 = INT16_MIN;
	uint16_t x706 = 9877U;
	int16_t x707 = INT16_MAX;
	uint8_t x708 = 0U;
	int32_t t13 = -8047;

	t13 = ((x705<=x706)+(x707>>x708));

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x742 = 21LLU;
	uint32_t x744 = 1U;
	volatile int32_t t14 = 174181;

	t14 = ((x741<=x742)+(x743>>x744));

	if (t14 != 1073741823) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x837 = -1;
	uint8_t x840 = 20U;

	t15 = ((x837<=x838)+(x839>>x840));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x873 = INT16_MAX;
	int32_t x874 = -1961;
	volatile uint8_t x876 = 1U;

	t16 = ((x873<=x874)+(x875>>x876));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x949 = -1;
	uint16_t x950 = UINT16_MAX;
	int32_t x951 = 8091320;
	int32_t t17 = -1397;

	t17 = ((x949<=x950)+(x951>>x952));

	if (t17 != 252854) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x1079 = UINT16_MAX;
	uint16_t x1080 = 0U;
	int32_t t18 = -1945;

	t18 = ((x1077<=x1078)+(x1079>>x1080));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1109 = INT8_MIN;
	static volatile int64_t x1110 = -1LL;
	int16_t x1112 = 2;
	volatile int32_t t19 = -1;

	t19 = ((x1109<=x1110)+(x1111>>x1112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1113 = INT64_MIN;
	volatile uint8_t x1114 = 116U;
	uint16_t x1115 = UINT16_MAX;
	volatile uint8_t x1116 = 2U;
	static int32_t t20 = -61129474;

	t20 = ((x1113<=x1114)+(x1115>>x1116));

	if (t20 != 16384) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1273 = 320233959LL;
	int16_t x1274 = -1;
	int64_t x1275 = INT64_MAX;
	static int64_t t21 = 23LL;

	t21 = ((x1273<=x1274)+(x1275>>x1276));

	if (t21 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x1365 = 7340U;
	static volatile int32_t x1366 = 45679;
	static uint64_t x1367 = 182135230036744736LLU;
	int32_t x1368 = 20;

	t22 = ((x1365<=x1366)+(x1367>>x1368));

	if (t22 != 173697690999LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1445 = -1LL;
	static volatile int32_t x1447 = 2184730;
	volatile int32_t t23 = 5599277;

	t23 = ((x1445<=x1446)+(x1447>>x1448));

	if (t23 != 1092366) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1509 = INT8_MIN;
	volatile int64_t x1510 = INT64_MIN;
	int8_t x1512 = 5;
	uint64_t t24 = 529881802007863LLU;

	t24 = ((x1509<=x1510)+(x1511>>x1512));

	if (t24 != 3388LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1533 = INT16_MIN;
	static int8_t x1534 = 58;
	uint64_t x1535 = 1994738956841LLU;
	static volatile uint64_t t25 = 45471915477103841LLU;

	t25 = ((x1533<=x1534)+(x1535>>x1536));

	if (t25 != 486996816LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1613 = UINT32_MAX;
	int64_t x1614 = 80LL;
	int8_t x1615 = 1;
	volatile int16_t x1616 = 1;

	t26 = ((x1613<=x1614)+(x1615>>x1616));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1621 = INT16_MIN;
	uint32_t x1622 = 34U;
	uint16_t x1623 = UINT16_MAX;
	int8_t x1624 = 4;
	volatile int32_t t27 = 900913;

	t27 = ((x1621<=x1622)+(x1623>>x1624));

	if (t27 != 4095) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1761 = INT32_MIN;
	int16_t x1762 = -1;
	uint32_t x1764 = 2U;
	static int32_t t28 = -1;

	t28 = ((x1761<=x1762)+(x1763>>x1764));

	if (t28 != 64) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1837 = 1;
	uint64_t x1838 = 182625597536LLU;
	int8_t x1840 = 3;
	int32_t t29 = 2186;

	t29 = ((x1837<=x1838)+(x1839>>x1840));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1853 = 0U;
	int64_t x1854 = 6388469LL;
	volatile uint8_t x1855 = 91U;
	volatile uint8_t x1856 = 1U;
	volatile int32_t t30 = 7551;

	t30 = ((x1853<=x1854)+(x1855>>x1856));

	if (t30 != 46) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1909 = 258U;
	int16_t x1910 = INT16_MIN;
	int64_t x1911 = 135368856LL;
	int8_t x1912 = 0;
	static int64_t t31 = -64188890076272926LL;

	t31 = ((x1909<=x1910)+(x1911>>x1912));

	if (t31 != 135368857LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1989 = UINT32_MAX;
	volatile int32_t x1990 = -260375;
	static volatile int64_t x1991 = 41261928LL;
	volatile int64_t t32 = -5LL;

	t32 = ((x1989<=x1990)+(x1991>>x1992));

	if (t32 != 322358LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2106 = 21U;
	int16_t x2107 = 80;

	t33 = ((x2105<=x2106)+(x2107>>x2108));

	if (t33 != 11) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2151 = 2298603LLU;
	uint16_t x2152 = 2U;
	uint64_t t34 = 2277442585720LLU;

	t34 = ((x2149<=x2150)+(x2151>>x2152));

	if (t34 != 574651LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2157 = UINT32_MAX;
	int8_t x2158 = -18;
	uint64_t x2159 = UINT64_MAX;
	uint32_t x2160 = 0U;
	uint64_t t35 = UINT64_MAX;

	t35 = ((x2157<=x2158)+(x2159>>x2160));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2173 = INT8_MAX;
	uint64_t x2175 = 8912073780415531LLU;
	volatile uint8_t x2176 = 5U;
	volatile uint64_t t36 = 464129245245LLU;

	t36 = ((x2173<=x2174)+(x2175>>x2176));

	if (t36 != 278502305637986LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2213 = -57;
	static int16_t x2214 = INT16_MIN;
	int64_t x2215 = 437969292LL;
	static int8_t x2216 = 38;
	volatile int64_t t37 = 25722165813LL;

	t37 = ((x2213<=x2214)+(x2215>>x2216));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x2245 = UINT64_MAX;
	static volatile int8_t x2247 = 1;
	uint16_t x2248 = 31U;
	int32_t t38 = 109929384;

	t38 = ((x2245<=x2246)+(x2247>>x2248));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x2321 = INT64_MIN;
	int64_t x2322 = -52801LL;
	int8_t x2324 = 8;
	uint64_t t39 = 10726752299LLU;

	t39 = ((x2321<=x2322)+(x2323>>x2324));

	if (t39 != 72057594037927936LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2325 = 76U;
	static int32_t x2326 = -163431;
	static int8_t x2327 = 3;
	volatile int32_t t40 = 6;

	t40 = ((x2325<=x2326)+(x2327>>x2328));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2377 = INT16_MAX;
	int32_t x2378 = 670289;
	int16_t x2380 = 3;
	int32_t t41 = -343766599;

	t41 = ((x2377<=x2378)+(x2379>>x2380));

	if (t41 != 32) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2393 = -345LL;
	static volatile uint32_t x2394 = 1U;
	static uint64_t x2395 = 904585705LLU;
	uint64_t t42 = 288LLU;

	t42 = ((x2393<=x2394)+(x2395>>x2396));

	if (t42 != 452292853LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2433 = INT64_MIN;
	uint16_t x2434 = 11U;
	static int8_t x2435 = INT8_MAX;
	uint16_t x2436 = 0U;
	static volatile int32_t t43 = -11007694;

	t43 = ((x2433<=x2434)+(x2435>>x2436));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2597 = INT8_MIN;
	int16_t x2598 = INT16_MIN;
	uint32_t x2599 = 7673U;
	int8_t x2600 = 23;

	t44 = ((x2597<=x2598)+(x2599>>x2600));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2705 = UINT32_MAX;
	static int16_t x2706 = -2;
	int64_t x2707 = INT64_MAX;
	int8_t x2708 = 60;
	static volatile int64_t t45 = -151679435417714543LL;

	t45 = ((x2705<=x2706)+(x2707>>x2708));

	if (t45 != 7LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2933 = 239U;
	int16_t x2935 = 657;
	static uint16_t x2936 = 3U;

	t46 = ((x2933<=x2934)+(x2935>>x2936));

	if (t46 != 83) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x3006 = INT32_MIN;
	volatile uint64_t x3007 = 1366497809489990LLU;
	uint32_t x3008 = 15U;

	t47 = ((x3005<=x3006)+(x3007>>x3008));

	if (t47 != 41702203658LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3041 = -7651154LL;
	static uint8_t x3042 = 0U;
	uint16_t x3043 = UINT16_MAX;
	volatile int8_t x3044 = 1;
	volatile int32_t t48 = -2611;

	t48 = ((x3041<=x3042)+(x3043>>x3044));

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3057 = 35U;
	uint16_t x3058 = 121U;
	uint8_t x3059 = 3U;

	t49 = ((x3057<=x3058)+(x3059>>x3060));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x3077 = 406319654276LLU;
	int32_t x3078 = -31;
	volatile int8_t x3079 = 1;
	static uint16_t x3080 = 4U;
	int32_t t50 = 692884088;

	t50 = ((x3077<=x3078)+(x3079>>x3080));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3138 = 1LLU;
	int16_t x3139 = INT16_MAX;
	volatile int32_t t51 = -147541491;

	t51 = ((x3137<=x3138)+(x3139>>x3140));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3141 = INT16_MIN;
	volatile int16_t x3142 = INT16_MIN;
	uint64_t x3143 = UINT64_MAX;
	uint16_t x3144 = 0U;

	t52 = ((x3141<=x3142)+(x3143>>x3144));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3250 = 8202U;
	int64_t t53 = 6053319450LL;

	t53 = ((x3249<=x3250)+(x3251>>x3252));

	if (t53 != 2305843009213693952LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3282 = 1;
	uint64_t x3283 = 255280LLU;
	int32_t x3284 = 4;

	t54 = ((x3281<=x3282)+(x3283>>x3284));

	if (t54 != 15955LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3285 = INT16_MAX;
	int64_t x3286 = 96348890341LL;
	int16_t x3287 = 724;
	int8_t x3288 = 1;
	static volatile int32_t t55 = -3612039;

	t55 = ((x3285<=x3286)+(x3287>>x3288));

	if (t55 != 363) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3297 = 891;
	int32_t x3298 = 3798;
	uint8_t x3299 = UINT8_MAX;
	int16_t x3300 = 0;
	volatile int32_t t56 = -3833887;

	t56 = ((x3297<=x3298)+(x3299>>x3300));

	if (t56 != 256) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3365 = INT64_MIN;
	uint16_t x3367 = 27557U;
	int8_t x3368 = 3;
	volatile int32_t t57 = 9611;

	t57 = ((x3365<=x3366)+(x3367>>x3368));

	if (t57 != 3445) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3401 = INT8_MIN;
	int64_t x3402 = INT64_MAX;
	int16_t x3403 = INT16_MAX;
	static int16_t x3404 = 0;
	static int32_t t58 = -1020024;

	t58 = ((x3401<=x3402)+(x3403>>x3404));

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3449 = INT64_MAX;
	uint64_t x3451 = 22649438LLU;
	uint16_t x3452 = 11U;
	uint64_t t59 = 47480032LLU;

	t59 = ((x3449<=x3450)+(x3451>>x3452));

	if (t59 != 11059LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3463 = 4;
	static uint64_t x3464 = 29LLU;

	t60 = ((x3461<=x3462)+(x3463>>x3464));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3465 = UINT16_MAX;
	int16_t x3466 = INT16_MAX;
	int16_t x3468 = 1;
	int64_t t61 = -7LL;

	t61 = ((x3465<=x3466)+(x3467>>x3468));

	if (t61 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3529 = -1;
	uint16_t x3530 = 14U;
	uint8_t x3532 = 5U;
	volatile uint64_t t62 = 1405553LLU;

	t62 = ((x3529<=x3530)+(x3531>>x3532));

	if (t62 != 881254892610LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3605 = 971830729504469624LLU;
	static int8_t x3606 = 15;
	volatile int8_t x3607 = INT8_MAX;
	static uint8_t x3608 = 4U;
	volatile int32_t t63 = 85;

	t63 = ((x3605<=x3606)+(x3607>>x3608));

	if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3629 = 1;
	int8_t x3630 = 1;
	uint64_t x3631 = 1956LLU;

	t64 = ((x3629<=x3630)+(x3631>>x3632));

	if (t64 != 1957LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3886 = -55241315;
	uint16_t x3887 = UINT16_MAX;
	uint32_t x3888 = 15U;

	t65 = ((x3885<=x3886)+(x3887>>x3888));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3914 = -10375;
	int64_t x3915 = 739796745287699LL;
	volatile int64_t t66 = -68956586432889548LL;

	t66 = ((x3913<=x3914)+(x3915>>x3916));

	if (t66 != 90307219884LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4018 = 0;
	static uint64_t x4019 = 1069875712087LLU;
	volatile uint64_t t67 = 31449262361993094LLU;

	t67 = ((x4017<=x4018)+(x4019>>x4020));

	if (t67 != 534937856044LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4074 = UINT8_MAX;
	int8_t x4075 = 32;
	uint32_t x4076 = 0U;
	int32_t t68 = -716689;

	t68 = ((x4073<=x4074)+(x4075>>x4076));

	if (t68 != 33) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x4121 = -1LL;
	int8_t x4122 = -1;
	uint32_t x4123 = UINT32_MAX;

	t69 = ((x4121<=x4122)+(x4123>>x4124));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x4185 = 357052085LLU;
	uint64_t x4186 = 4481223133243481797LLU;
	static uint16_t x4187 = 302U;
	static volatile int16_t x4188 = 2;
	int32_t t70 = -61631794;

	t70 = ((x4185<=x4186)+(x4187>>x4188));

	if (t70 != 76) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x4397 = UINT64_MAX;
	int8_t x4398 = INT8_MIN;
	uint8_t x4399 = 83U;
	static int16_t x4400 = 28;
	static int32_t t71 = 60;

	t71 = ((x4397<=x4398)+(x4399>>x4400));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x4441 = UINT8_MAX;
	static int8_t x4442 = INT8_MIN;
	uint8_t x4443 = 1U;
	uint8_t x4444 = 29U;
	int32_t t72 = -6388;

	t72 = ((x4441<=x4442)+(x4443>>x4444));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x4577 = -1LL;
	volatile int32_t x4578 = INT32_MIN;
	volatile int64_t x4579 = INT64_MAX;
	static int32_t x4580 = 14;
	int64_t t73 = -3167569097518468584LL;

	t73 = ((x4577<=x4578)+(x4579>>x4580));

	if (t73 != 562949953421311LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x4613 = INT64_MAX;
	static uint16_t x4614 = 266U;
	volatile uint16_t x4615 = 2344U;
	static int8_t x4616 = 0;
	static volatile int32_t t74 = 119984;

	t74 = ((x4613<=x4614)+(x4615>>x4616));

	if (t74 != 2344) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4697 = -1;
	int16_t x4698 = -7033;
	uint64_t x4699 = 4348017717871LLU;
	static int8_t x4700 = 0;
	uint64_t t75 = 70731605LLU;

	t75 = ((x4697<=x4698)+(x4699>>x4700));

	if (t75 != 4348017717871LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4713 = 68U;
	int8_t x4714 = -1;
	uint16_t x4716 = 1U;
	uint32_t t76 = 353041U;

	t76 = ((x4713<=x4714)+(x4715>>x4716));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x4733 = -1LL;
	static uint16_t x4734 = 13859U;
	volatile uint16_t x4735 = 118U;

	t77 = ((x4733<=x4734)+(x4735>>x4736));

	if (t77 != 60) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4799 = INT8_MAX;
	uint8_t x4800 = 11U;
	volatile int32_t t78 = -909634;

	t78 = ((x4797<=x4798)+(x4799>>x4800));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4810 = 8;
	uint64_t x4811 = UINT64_MAX;
	uint64_t t79 = 2625242711493227LLU;

	t79 = ((x4809<=x4810)+(x4811>>x4812));

	if (t79 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5033 = UINT64_MAX;
	int32_t x5034 = INT32_MIN;
	uint16_t x5035 = 24U;
	uint16_t x5036 = 26U;

	t80 = ((x5033<=x5034)+(x5035>>x5036));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x5065 = INT16_MAX;
	volatile uint32_t x5066 = 358U;
	int16_t x5067 = 7164;
	int16_t x5068 = 1;
	static volatile int32_t t81 = -36;

	t81 = ((x5065<=x5066)+(x5067>>x5068));

	if (t81 != 3582) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5453 = INT8_MIN;
	int32_t x5454 = -1;
	static uint16_t x5456 = 1U;

	t82 = ((x5453<=x5454)+(x5455>>x5456));

	if (t82 != 64) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5473 = -103346LL;
	int8_t x5474 = INT8_MIN;
	uint64_t x5475 = 6876748886228LLU;
	int8_t x5476 = 0;
	volatile uint64_t t83 = 190694415273274LLU;

	t83 = ((x5473<=x5474)+(x5475>>x5476));

	if (t83 != 6876748886229LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x5513 = 0LLU;
	uint16_t x5514 = 2001U;
	static uint64_t x5515 = 1516378303756712LLU;
	volatile int8_t x5516 = 1;
	static uint64_t t84 = 1549304996045894406LLU;

	t84 = ((x5513<=x5514)+(x5515>>x5516));

	if (t84 != 758189151878357LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5525 = -1;
	uint8_t x5526 = UINT8_MAX;
	uint8_t x5527 = 29U;

	t85 = ((x5525<=x5526)+(x5527>>x5528));

	if (t85 != 30) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5573 = 3;
	volatile uint64_t x5574 = UINT64_MAX;
	int8_t x5575 = INT8_MAX;
	volatile int16_t x5576 = 1;

	t86 = ((x5573<=x5574)+(x5575>>x5576));

	if (t86 != 64) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5581 = UINT8_MAX;
	int64_t x5582 = -1LL;
	uint8_t x5583 = 103U;
	static int32_t t87 = -450;

	t87 = ((x5581<=x5582)+(x5583>>x5584));

	if (t87 != 103) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5617 = UINT32_MAX;
	volatile uint16_t x5618 = 0U;
	uint8_t x5620 = 20U;
	uint32_t t88 = 26U;

	t88 = ((x5617<=x5618)+(x5619>>x5620));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x5625 = -1LL;
	static uint32_t x5626 = 59525U;
	uint8_t x5627 = 7U;
	volatile uint16_t x5628 = 13U;
	static volatile int32_t t89 = -177106;

	t89 = ((x5625<=x5626)+(x5627>>x5628));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5629 = -1;
	static uint64_t x5630 = UINT64_MAX;
	uint64_t x5631 = 1444567569106390LLU;
	volatile uint64_t t90 = 15101141226064179LLU;

	t90 = ((x5629<=x5630)+(x5631>>x5632));

	if (t90 != 722283784553196LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x5637 = 1253;
	int32_t x5638 = INT32_MIN;
	volatile uint32_t x5639 = 2U;
	uint8_t x5640 = 14U;
	static volatile uint32_t t91 = 31691376U;

	t91 = ((x5637<=x5638)+(x5639>>x5640));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x5661 = 16;
	int32_t x5662 = INT32_MIN;
	int16_t x5663 = INT16_MAX;
	uint64_t x5664 = 20LLU;
	int32_t t92 = 59198;

	t92 = ((x5661<=x5662)+(x5663>>x5664));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5689 = 8883289679276807776LLU;
	uint8_t x5691 = 15U;
	uint16_t x5692 = 22U;
	int32_t t93 = -9711004;

	t93 = ((x5689<=x5690)+(x5691>>x5692));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5709 = INT32_MIN;
	uint32_t x5711 = 0U;
	int32_t x5712 = 0;
	static uint32_t t94 = 1350901U;

	t94 = ((x5709<=x5710)+(x5711>>x5712));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5781 = 157213370284LLU;
	volatile uint32_t x5782 = UINT32_MAX;
	uint64_t x5783 = 516070126390742340LLU;
	volatile uint16_t x5784 = 3U;
	static volatile uint64_t t95 = 3968487069908040LLU;

	t95 = ((x5781<=x5782)+(x5783>>x5784));

	if (t95 != 64508765798842792LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5794 = 26074U;
	int64_t x5795 = 74LL;
	volatile uint8_t x5796 = 2U;
	int64_t t96 = 1820782918994556LL;

	t96 = ((x5793<=x5794)+(x5795>>x5796));

	if (t96 != 19LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5833 = -1;
	volatile uint64_t x5834 = UINT64_MAX;
	uint8_t x5835 = UINT8_MAX;
	volatile int32_t t97 = 60099221;

	t97 = ((x5833<=x5834)+(x5835>>x5836));

	if (t97 != 256) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6077 = 3U;
	int32_t x6079 = 472;
	volatile int16_t x6080 = 1;
	volatile int32_t t98 = 0;

	t98 = ((x6077<=x6078)+(x6079>>x6080));

	if (t98 != 237) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6097 = INT16_MAX;
	int64_t x6098 = INT64_MIN;
	volatile int64_t x6099 = 17003015252155LL;
	volatile int64_t t99 = -1702014649527027478LL;

	t99 = ((x6097<=x6098)+(x6099>>x6100));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

