#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x13 = -1LL;
uint64_t t0 = 121803590LLU;
uint64_t x43 = 4409070989062LLU;
static int8_t x84 = 9;
int8_t x93 = -1;
uint8_t x96 = 0U;
static int32_t t3 = -1;
int8_t x150 = INT8_MIN;
volatile int16_t x187 = 0;
uint32_t t7 = 1825U;
int32_t x306 = 212266861;
uint16_t x307 = 1982U;
static int16_t x314 = INT16_MIN;
int8_t x343 = INT8_MIN;
uint8_t x420 = 11U;
volatile int64_t x449 = -1LL;
int16_t x450 = INT16_MAX;
int16_t x546 = 83;
volatile int8_t x547 = -1;
static volatile int16_t x581 = 1;
int16_t x583 = INT16_MIN;
volatile int64_t t16 = -53LL;
int16_t x638 = -1;
uint16_t x658 = UINT16_MAX;
static volatile uint64_t t18 = 1LLU;
volatile uint32_t x828 = 44U;
int32_t x875 = INT32_MIN;
static int16_t x942 = -511;
int32_t x959 = INT32_MAX;
uint8_t x1020 = 4U;
volatile uint32_t t26 = 22U;
int16_t x1149 = -1;
static int16_t x1152 = 32;
int8_t x1338 = -1;
uint8_t x1340 = 17U;
int32_t t31 = 1;
uint32_t x1372 = 3U;
static int32_t x1439 = 2133919;
volatile int32_t t33 = -760189;
int16_t x1457 = -1;
static volatile uint8_t x1523 = UINT8_MAX;
volatile uint16_t x1524 = 1U;
volatile int32_t x1565 = INT32_MIN;
uint32_t x1566 = 98356900U;
uint16_t x1697 = 84U;
uint8_t x1698 = 54U;
uint32_t x1715 = 9U;
uint8_t x1716 = 1U;
static uint32_t x1749 = UINT32_MAX;
int64_t t39 = -1LL;
uint64_t x1807 = 4LLU;
static volatile uint64_t t42 = 210657038342541558LLU;
static volatile uint16_t x1855 = UINT16_MAX;
static volatile int16_t x1856 = 5;
int32_t x1897 = -2;
static volatile int32_t t46 = -1643;
uint64_t x2025 = 668406201747906631LLU;
uint16_t x2028 = 1U;
int16_t x2072 = 23;
static volatile uint64_t t49 = 645LLU;
uint32_t x2245 = 376U;
int16_t x2286 = 1736;
int32_t t52 = -119;
static uint8_t x2396 = 30U;
volatile uint16_t x2408 = 44U;
uint32_t x2461 = 24193U;
int8_t x2640 = 0;
volatile int64_t x2649 = 8570155138LL;
uint8_t x2652 = 3U;
int64_t x2671 = -1LL;
int8_t x2672 = 8;
int64_t x2709 = INT64_MIN;
uint8_t x2712 = 2U;
uint8_t x2792 = 27U;
int64_t t62 = -155984563221115LL;
uint8_t x2847 = 100U;
uint8_t x3090 = 42U;
int64_t x3199 = INT64_MAX;
uint8_t x3290 = UINT8_MAX;
int32_t x3365 = -1;
volatile int8_t x3415 = INT8_MIN;
int8_t x3428 = 0;
int32_t t80 = 1258077;
volatile uint8_t x3472 = 0U;
uint8_t x3477 = 22U;
static uint8_t x3481 = 12U;
static int8_t x3493 = INT8_MIN;
uint64_t x3533 = 888LLU;
uint64_t x3538 = 184060LLU;
uint16_t x3540 = 13U;
uint64_t x3545 = 1827LLU;
volatile int32_t x3546 = INT32_MAX;
uint8_t x3550 = 20U;
static uint32_t x3609 = 972633849U;
uint64_t x3622 = 229812444LLU;
uint64_t t91 = 4655722LLU;
static volatile uint32_t t92 = 42U;
volatile uint8_t x3680 = 24U;
static int8_t x3789 = INT8_MIN;
int16_t x3931 = -7;


void f0(void) {
	uint64_t x14 = 327223508756082LLU;
	static uint8_t x15 = 27U;
	volatile uint16_t x16 = 0U;

	t0 = (((x13|x14)+x15)>>x16);

	if (t0 != 26LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x41 = 1378LL;
	static uint64_t x42 = 152279174LLU;
	volatile uint16_t x44 = 1U;
	volatile uint64_t t1 = 13527898758832522LLU;

	t1 = (((x41|x42)+x43)>>x44);

	if (t1 != 2204611634806LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = INT32_MAX;
	volatile uint8_t x83 = UINT8_MAX;
	int32_t t2 = 2774483;

	t2 = (((x81|x82)+x83)>>x84);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x94 = 7U;
	volatile uint8_t x95 = UINT8_MAX;

	t3 = (((x93|x94)+x95)>>x96);

	if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x121 = -1LL;
	int8_t x122 = 0;
	uint64_t x123 = UINT64_MAX;
	uint8_t x124 = 0U;
	uint64_t t4 = 7069LLU;

	t4 = (((x121|x122)+x123)>>x124);

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x149 = INT8_MAX;
	int8_t x151 = INT8_MAX;
	volatile uint32_t x152 = 23U;
	static int32_t t5 = -353;

	t5 = (((x149|x150)+x151)>>x152);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x153 = INT16_MAX;
	int64_t x154 = 1403353384544319LL;
	volatile int8_t x155 = 5;
	uint8_t x156 = 3U;
	static int64_t t6 = -7058493LL;

	t6 = (((x153|x154)+x155)>>x156);

	if (t6 != 175419173068800LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x185 = -529;
	static uint32_t x186 = 95786U;
	uint8_t x188 = 3U;

	t7 = (((x185|x186)+x187)>>x188);

	if (t7 != 536870909U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x217 = 3;
	volatile int16_t x218 = 523;
	static int32_t x219 = 24;
	uint16_t x220 = 1U;
	int32_t t8 = 1;

	t8 = (((x217|x218)+x219)>>x220);

	if (t8 != 273) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x305 = INT8_MIN;
	uint16_t x308 = 15U;
	volatile int32_t t9 = 11;

	t9 = (((x305|x306)+x307)>>x308);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x313 = 5769320U;
	int16_t x315 = -3;
	static volatile uint8_t x316 = 7U;
	uint32_t t10 = 967970U;

	t10 = (((x313|x314)+x315)>>x316);

	if (t10 != 33554192U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x341 = INT16_MAX;
	volatile int16_t x342 = INT16_MAX;
	int8_t x344 = 1;
	volatile int32_t t11 = -14511;

	t11 = (((x341|x342)+x343)>>x344);

	if (t11 != 16319) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x417 = INT32_MIN;
	uint32_t x418 = 4951U;
	uint64_t x419 = UINT64_MAX;
	volatile uint64_t t12 = 252052566741LLU;

	t12 = (((x417|x418)+x419)>>x420);

	if (t12 != 1048578LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x451 = 1U;
	int32_t x452 = 2;
	int64_t t13 = -458058046424LL;

	t13 = (((x449|x450)+x451)>>x452);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x541 = 1789;
	static uint16_t x542 = 1610U;
	static volatile uint8_t x543 = 7U;
	uint8_t x544 = 5U;
	int32_t t14 = -76231402;

	t14 = (((x541|x542)+x543)>>x544);

	if (t14 != 56) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x545 = 4288273809219934LL;
	uint64_t x548 = 5LLU;
	static int64_t t15 = -1020LL;

	t15 = (((x545|x546)+x547)>>x548);

	if (t15 != 134008556538122LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x582 = 658464131874660LL;
	int8_t x584 = 5;

	t16 = (((x581|x582)+x583)>>x584);

	if (t16 != 20577004120059LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x637 = INT8_MIN;
	uint8_t x639 = UINT8_MAX;
	static uint32_t x640 = 0U;
	volatile int32_t t17 = 203933951;

	t17 = (((x637|x638)+x639)>>x640);

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x657 = 2467662LLU;
	volatile int32_t x659 = INT32_MIN;
	uint8_t x660 = 3U;

	t18 = (((x657|x658)+x659)>>x660);

	if (t18 != 2305843008945569791LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x689 = INT64_MIN;
	volatile int32_t x690 = -1;
	volatile uint64_t x691 = 1742145LLU;
	int8_t x692 = 2;
	uint64_t t19 = 815809806623LLU;

	t19 = (((x689|x690)+x691)>>x692);

	if (t19 != 435536LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x789 = 5271;
	static uint8_t x790 = 0U;
	uint64_t x791 = 1LLU;
	uint8_t x792 = 27U;
	uint64_t t20 = 23840662417LLU;

	t20 = (((x789|x790)+x791)>>x792);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x825 = 459;
	int64_t x826 = -1LL;
	static uint32_t x827 = UINT32_MAX;
	int64_t t21 = 51LL;

	t21 = (((x825|x826)+x827)>>x828);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x873 = UINT32_MAX;
	volatile uint8_t x874 = UINT8_MAX;
	volatile uint64_t x876 = 0LLU;
	static volatile uint32_t t22 = 46U;

	t22 = (((x873|x874)+x875)>>x876);

	if (t22 != 2147483647U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x941 = -447523LL;
	uint64_t x943 = UINT64_MAX;
	int8_t x944 = 1;
	static volatile uint64_t t23 = 6539854903525642LLU;

	t23 = (((x941|x942)+x943)>>x944);

	if (t23 != 9223372036854775790LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x957 = 278U;
	int32_t x958 = -1;
	uint8_t x960 = 3U;
	static uint32_t t24 = 212522U;

	t24 = (((x957|x958)+x959)>>x960);

	if (t24 != 268435455U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1017 = 0U;
	uint64_t x1018 = 5750LLU;
	static uint64_t x1019 = UINT64_MAX;
	volatile uint64_t t25 = 274756242LLU;

	t25 = (((x1017|x1018)+x1019)>>x1020);

	if (t25 != 359LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1049 = UINT16_MAX;
	uint8_t x1050 = UINT8_MAX;
	uint32_t x1051 = 1728229224U;
	uint8_t x1052 = 4U;

	t26 = (((x1049|x1050)+x1051)>>x1052);

	if (t26 != 108018422U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1150 = INT32_MAX;
	int64_t x1151 = 251298LL;
	static volatile int64_t t27 = 42985792LL;

	t27 = (((x1149|x1150)+x1151)>>x1152);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1161 = 120714880LLU;
	int32_t x1162 = INT32_MIN;
	static int32_t x1163 = INT32_MAX;
	uint8_t x1164 = 35U;
	uint64_t t28 = 417420675LLU;

	t28 = (((x1161|x1162)+x1163)>>x1164);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x1269 = 17224177LLU;
	volatile int8_t x1270 = 5;
	int8_t x1271 = INT8_MAX;
	static int32_t x1272 = 3;
	static uint64_t t29 = 221LLU;

	t29 = (((x1269|x1270)+x1271)>>x1272);

	if (t29 != 2153038LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1333 = 11LLU;
	uint64_t x1334 = 4879966649563768591LLU;
	static int16_t x1335 = INT16_MAX;
	volatile uint8_t x1336 = 1U;
	static uint64_t t30 = 54698780LLU;

	t30 = (((x1333|x1334)+x1335)>>x1336);

	if (t30 != 2439983324781900679LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x1337 = INT32_MIN;
	uint8_t x1339 = UINT8_MAX;

	t31 = (((x1337|x1338)+x1339)>>x1340);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1369 = -688;
	int32_t x1370 = INT32_MIN;
	uint64_t x1371 = 506891LLU;
	volatile uint64_t t32 = 10137LLU;

	t32 = (((x1369|x1370)+x1371)>>x1372);

	if (t32 != 63275LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1437 = -1;
	uint8_t x1438 = 16U;
	int32_t x1440 = 4;

	t33 = (((x1437|x1438)+x1439)>>x1440);

	if (t33 != 133369) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1458 = 1;
	volatile int8_t x1459 = INT8_MAX;
	uint32_t x1460 = 8U;
	volatile int32_t t34 = 17150;

	t34 = (((x1457|x1458)+x1459)>>x1460);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1521 = INT16_MIN;
	uint16_t x1522 = UINT16_MAX;
	int32_t t35 = -175338;

	t35 = (((x1521|x1522)+x1523)>>x1524);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1567 = 4U;
	static int8_t x1568 = 1;
	volatile uint32_t t36 = 107956U;

	t36 = (((x1565|x1566)+x1567)>>x1568);

	if (t36 != 1122920276U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x1699 = UINT8_MAX;
	uint8_t x1700 = 0U;
	volatile int32_t t37 = 63;

	t37 = (((x1697|x1698)+x1699)>>x1700);

	if (t37 != 373) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1713 = 11310U;
	volatile int32_t x1714 = 6716306;
	uint32_t t38 = 31525628U;

	t38 = (((x1713|x1714)+x1715)>>x1716);

	if (t38 != 3358691U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1750 = 14373768693LL;
	int8_t x1751 = INT8_MIN;
	int16_t x1752 = 2;

	t39 = (((x1749|x1750)+x1751)>>x1752);

	if (t39 != 4294967263LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1761 = 5U;
	volatile uint64_t x1762 = UINT64_MAX;
	uint64_t x1763 = 14121855063309090LLU;
	uint64_t x1764 = 31LLU;
	volatile uint64_t t40 = 263178237841320967LLU;

	t40 = (((x1761|x1762)+x1763)>>x1764);

	if (t40 != 6576001LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1777 = -1031;
	volatile int32_t x1778 = INT32_MAX;
	uint8_t x1779 = UINT8_MAX;
	static volatile uint32_t x1780 = 0U;
	int32_t t41 = 852974;

	t41 = (((x1777|x1778)+x1779)>>x1780);

	if (t41 != 254) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1805 = INT32_MIN;
	volatile uint8_t x1806 = 1U;
	uint16_t x1808 = 23U;

	t42 = (((x1805|x1806)+x1807)>>x1808);

	if (t42 != 2199023255296LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1849 = INT8_MIN;
	static volatile uint32_t x1850 = 44975U;
	int8_t x1851 = INT8_MIN;
	int32_t x1852 = 23;
	volatile uint32_t t43 = 5365U;

	t43 = (((x1849|x1850)+x1851)>>x1852);

	if (t43 != 511U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1853 = UINT32_MAX;
	int32_t x1854 = -319;
	uint32_t t44 = 6U;

	t44 = (((x1853|x1854)+x1855)>>x1856);

	if (t44 != 2047U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1898 = UINT64_MAX;
	int8_t x1899 = -1;
	uint8_t x1900 = 10U;
	uint64_t t45 = 467295LLU;

	t45 = (((x1897|x1898)+x1899)>>x1900);

	if (t45 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1933 = -1;
	int8_t x1934 = INT8_MIN;
	uint16_t x1935 = 27328U;
	int16_t x1936 = 13;

	t46 = (((x1933|x1934)+x1935)>>x1936);

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2026 = 3970U;
	int32_t x2027 = INT32_MIN;
	volatile uint64_t t47 = 893748875LLU;

	t47 = (((x2025|x2026)+x2027)>>x2028);

	if (t47 != 334203099800213475LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2057 = UINT8_MAX;
	uint32_t x2058 = UINT32_MAX;
	static uint64_t x2059 = 4LLU;
	uint16_t x2060 = 1U;
	uint64_t t48 = 16481818177LLU;

	t48 = (((x2057|x2058)+x2059)>>x2060);

	if (t48 != 2147483649LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x2069 = 3436LLU;
	int32_t x2070 = INT32_MIN;
	static volatile uint32_t x2071 = UINT32_MAX;

	t49 = (((x2069|x2070)+x2071)>>x2072);

	if (t49 != 256LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2093 = -1LL;
	uint32_t x2094 = 36U;
	volatile uint8_t x2095 = 30U;
	uint8_t x2096 = 8U;
	volatile int64_t t50 = -92433603973LL;

	t50 = (((x2093|x2094)+x2095)>>x2096);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2246 = INT8_MAX;
	static int16_t x2247 = -1;
	volatile int16_t x2248 = 0;
	volatile uint32_t t51 = 210214U;

	t51 = (((x2245|x2246)+x2247)>>x2248);

	if (t51 != 382U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x2285 = 14U;
	uint8_t x2287 = 120U;
	int8_t x2288 = 0;

	t52 = (((x2285|x2286)+x2287)>>x2288);

	if (t52 != 1862) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2361 = INT16_MAX;
	static uint8_t x2362 = UINT8_MAX;
	int8_t x2363 = -15;
	uint32_t x2364 = 7U;
	volatile int32_t t53 = 497587;

	t53 = (((x2361|x2362)+x2363)>>x2364);

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2393 = INT32_MAX;
	int32_t x2394 = 3;
	int8_t x2395 = -1;
	static int32_t t54 = 354;

	t54 = (((x2393|x2394)+x2395)>>x2396);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2405 = 159205521932039272LL;
	static uint16_t x2406 = 14919U;
	uint8_t x2407 = 3U;
	int64_t t55 = -4105604072LL;

	t55 = (((x2405|x2406)+x2407)>>x2408);

	if (t55 != 9049LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2462 = -20;
	volatile int8_t x2463 = -1;
	static int8_t x2464 = 0;
	volatile uint32_t t56 = 27U;

	t56 = (((x2461|x2462)+x2463)>>x2464);

	if (t56 != 4294967276U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2629 = 5LL;
	int32_t x2630 = INT32_MAX;
	uint8_t x2631 = 2U;
	int16_t x2632 = 0;
	static int64_t t57 = 864674454793639LL;

	t57 = (((x2629|x2630)+x2631)>>x2632);

	if (t57 != 2147483649LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2637 = 90989136U;
	int8_t x2638 = 1;
	static int16_t x2639 = INT16_MIN;
	uint32_t t58 = 30U;

	t58 = (((x2637|x2638)+x2639)>>x2640);

	if (t58 != 90956369U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2650 = 2272183872739285LL;
	int64_t x2651 = -1LL;
	int64_t t59 = -415333LL;

	t59 = (((x2649|x2650)+x2651)>>x2652);

	if (t59 != 284024037404410LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2669 = 0U;
	int64_t x2670 = 317039583586LL;
	int64_t t60 = -236518293LL;

	t60 = (((x2669|x2670)+x2671)>>x2672);

	if (t60 != 1238435873LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2710 = -1;
	uint64_t x2711 = 14946784081748884LLU;
	uint64_t t61 = 31446587704023LLU;

	t61 = (((x2709|x2710)+x2711)>>x2712);

	if (t61 != 3736696020437220LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2789 = INT16_MIN;
	int64_t x2790 = -1LL;
	int32_t x2791 = INT32_MAX;

	t62 = (((x2789|x2790)+x2791)>>x2792);

	if (t62 != 15LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2845 = 7U;
	uint16_t x2846 = 1U;
	int8_t x2848 = 9;
	int32_t t63 = -2286;

	t63 = (((x2845|x2846)+x2847)>>x2848);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2861 = 841LL;
	int16_t x2862 = 511;
	int64_t x2863 = -1LL;
	static uint8_t x2864 = 7U;
	int64_t t64 = -3329LL;

	t64 = (((x2861|x2862)+x2863)>>x2864);

	if (t64 != 7LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2949 = INT8_MAX;
	int64_t x2950 = 28069556LL;
	volatile uint32_t x2951 = 36U;
	uint8_t x2952 = 0U;
	volatile int64_t t65 = 24834LL;

	t65 = (((x2949|x2950)+x2951)>>x2952);

	if (t65 != 28069667LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x2965 = -1;
	int64_t x2966 = INT64_MIN;
	static uint64_t x2967 = UINT64_MAX;
	volatile int8_t x2968 = 1;
	uint64_t t66 = 142152375908901LLU;

	t66 = (((x2965|x2966)+x2967)>>x2968);

	if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x2977 = 5537047LLU;
	uint16_t x2978 = 2U;
	static int16_t x2979 = -1;
	int8_t x2980 = 29;
	uint64_t t67 = 9683861008LLU;

	t67 = (((x2977|x2978)+x2979)>>x2980);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x3005 = 236U;
	int8_t x3006 = INT8_MIN;
	volatile int16_t x3007 = INT16_MAX;
	uint8_t x3008 = 5U;
	int32_t t68 = 8058;

	t68 = (((x3005|x3006)+x3007)>>x3008);

	if (t68 != 1023) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3021 = UINT32_MAX;
	volatile int16_t x3022 = INT16_MAX;
	static uint64_t x3023 = 7387LLU;
	int8_t x3024 = 3;
	volatile uint64_t t69 = 29904434681198684LLU;

	t69 = (((x3021|x3022)+x3023)>>x3024);

	if (t69 != 536871835LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3089 = 424233LLU;
	int16_t x3091 = 2428;
	int8_t x3092 = 1;
	volatile uint64_t t70 = 4103292LLU;

	t70 = (((x3089|x3090)+x3091)>>x3092);

	if (t70 != 213331LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x3169 = 41U;
	uint8_t x3170 = 0U;
	int32_t x3171 = 41505;
	static volatile uint8_t x3172 = 1U;
	int32_t t71 = 6910;

	t71 = (((x3169|x3170)+x3171)>>x3172);

	if (t71 != 20773) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x3193 = 265U;
	int32_t x3194 = INT32_MAX;
	int8_t x3195 = INT8_MIN;
	volatile int8_t x3196 = 0;
	volatile uint32_t t72 = 1725182927U;

	t72 = (((x3193|x3194)+x3195)>>x3196);

	if (t72 != 2147483519U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3197 = INT64_MAX;
	uint64_t x3198 = UINT64_MAX;
	volatile uint8_t x3200 = 58U;
	uint64_t t73 = 11630092574LLU;

	t73 = (((x3197|x3198)+x3199)>>x3200);

	if (t73 != 31LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x3245 = 3516U;
	volatile uint64_t x3246 = 497362471880094615LLU;
	int64_t x3247 = -106949132LL;
	int8_t x3248 = 11;
	static volatile uint64_t t74 = 104557612662009312LLU;

	t74 = (((x3245|x3246)+x3247)>>x3248);

	if (t74 != 242852769420482LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x3289 = INT8_MIN;
	uint64_t x3291 = 1766230LLU;
	uint8_t x3292 = 10U;
	uint64_t t75 = 5087LLU;

	t75 = (((x3289|x3290)+x3291)>>x3292);

	if (t75 != 1724LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3325 = INT8_MIN;
	uint16_t x3326 = 1U;
	int32_t x3327 = 14122;
	uint8_t x3328 = 7U;
	int32_t t76 = -115;

	t76 = (((x3325|x3326)+x3327)>>x3328);

	if (t76 != 109) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3366 = 88LLU;
	uint16_t x3367 = 468U;
	volatile int8_t x3368 = 1;
	volatile uint64_t t77 = 3365353371120202217LLU;

	t77 = (((x3365|x3366)+x3367)>>x3368);

	if (t77 != 233LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3381 = 62U;
	int32_t x3382 = -1;
	int16_t x3383 = 268;
	uint8_t x3384 = 0U;
	int32_t t78 = -554616819;

	t78 = (((x3381|x3382)+x3383)>>x3384);

	if (t78 != 267) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3413 = 898U;
	int32_t x3414 = INT32_MIN;
	int16_t x3416 = 0;
	volatile uint32_t t79 = 4065113U;

	t79 = (((x3413|x3414)+x3415)>>x3416);

	if (t79 != 2147484418U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x3425 = INT8_MIN;
	static uint16_t x3426 = UINT16_MAX;
	uint16_t x3427 = UINT16_MAX;

	t80 = (((x3425|x3426)+x3427)>>x3428);

	if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x3469 = 837404078795LLU;
	uint16_t x3470 = 419U;
	int8_t x3471 = -1;
	volatile uint64_t t81 = 16264622147LLU;

	t81 = (((x3469|x3470)+x3471)>>x3472);

	if (t81 != 837404079082LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3473 = 634;
	int16_t x3474 = INT16_MAX;
	volatile uint8_t x3475 = 113U;
	uint16_t x3476 = 2U;
	static int32_t t82 = -221;

	t82 = (((x3473|x3474)+x3475)>>x3476);

	if (t82 != 8220) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3478 = INT32_MAX;
	static int8_t x3479 = -14;
	static volatile int8_t x3480 = 1;
	int32_t t83 = -25021;

	t83 = (((x3477|x3478)+x3479)>>x3480);

	if (t83 != 1073741816) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3482 = INT32_MIN;
	static uint64_t x3483 = 592595774LLU;
	int32_t x3484 = 0;
	volatile uint64_t t84 = 156LLU;

	t84 = (((x3481|x3482)+x3483)>>x3484);

	if (t84 != 18446744072154663754LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3494 = 12U;
	uint16_t x3495 = 16431U;
	volatile uint8_t x3496 = 4U;
	int32_t t85 = 8018;

	t85 = (((x3493|x3494)+x3495)>>x3496);

	if (t85 != 1019) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x3534 = INT16_MAX;
	int8_t x3535 = INT8_MIN;
	uint16_t x3536 = 1U;
	static uint64_t t86 = 12166182401811261LLU;

	t86 = (((x3533|x3534)+x3535)>>x3536);

	if (t86 != 16319LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3537 = UINT8_MAX;
	static int64_t x3539 = INT64_MIN;
	static uint64_t t87 = 41892429361LLU;

	t87 = (((x3537|x3538)+x3539)>>x3540);

	if (t87 != 1125899906842646LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x3547 = 701380111;
	static volatile int8_t x3548 = 31;
	uint64_t t88 = 762365080143LLU;

	t88 = (((x3545|x3546)+x3547)>>x3548);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3549 = 1U;
	int8_t x3551 = INT8_MAX;
	int8_t x3552 = 2;
	int32_t t89 = -90;

	t89 = (((x3549|x3550)+x3551)>>x3552);

	if (t89 != 37) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3610 = 3U;
	int64_t x3611 = 52381345LL;
	volatile uint8_t x3612 = 0U;
	volatile int64_t t90 = 916713LL;

	t90 = (((x3609|x3610)+x3611)>>x3612);

	if (t90 != 1025015196LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3621 = INT16_MAX;
	static int16_t x3623 = INT16_MIN;
	int32_t x3624 = 3;

	t91 = (((x3621|x3622)+x3623)>>x3624);

	if (t91 != 28725247LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x3669 = 1538417U;
	int8_t x3670 = INT8_MAX;
	volatile int32_t x3671 = -7;
	static uint32_t x3672 = 13U;

	t92 = (((x3669|x3670)+x3671)>>x3672);

	if (t92 != 187U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3677 = 3132U;
	int8_t x3678 = INT8_MIN;
	static uint32_t x3679 = UINT32_MAX;
	uint32_t t93 = 63167U;

	t93 = (((x3677|x3678)+x3679)>>x3680);

	if (t93 != 255U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3697 = -1;
	uint32_t x3698 = 2893U;
	uint32_t x3699 = 0U;
	uint16_t x3700 = 6U;
	uint32_t t94 = 1748U;

	t94 = (((x3697|x3698)+x3699)>>x3700);

	if (t94 != 67108863U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x3790 = INT8_MIN;
	int64_t x3791 = INT64_MAX;
	uint16_t x3792 = 31U;
	int64_t t95 = 1283591LL;

	t95 = (((x3789|x3790)+x3791)>>x3792);

	if (t95 != 4294967295LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3833 = INT64_MAX;
	int32_t x3834 = 0;
	int32_t x3835 = -1319758;
	uint8_t x3836 = 59U;
	volatile int64_t t96 = -84LL;

	t96 = (((x3833|x3834)+x3835)>>x3836);

	if (t96 != 15LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3897 = -1;
	uint16_t x3898 = 81U;
	int16_t x3899 = INT16_MAX;
	static int8_t x3900 = 22;
	volatile int32_t t97 = 278538;

	t97 = (((x3897|x3898)+x3899)>>x3900);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3929 = 52299115LLU;
	int16_t x3930 = -245;
	uint16_t x3932 = 18U;
	volatile uint64_t t98 = 2105800731208LLU;

	t98 = (((x3929|x3930)+x3931)>>x3932);

	if (t98 != 70368744177663LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x4009 = 13102U;
	int32_t x4010 = INT32_MAX;
	volatile int64_t x4011 = -1LL;
	volatile uint16_t x4012 = 0U;
	volatile int64_t t99 = 574276765305377298LL;

	t99 = (((x4009|x4010)+x4011)>>x4012);

	if (t99 != 2147483646LL) { NG(); } else { ; }
	
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

