#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 0;
int64_t x5 = 3LL;
static int64_t x7 = -1LL;
static int64_t t1 = 488832254LL;
int16_t x13 = 1;
volatile uint8_t x190 = 1U;
uint32_t x191 = UINT32_MAX;
int8_t x192 = -1;
int16_t x273 = 2262;
int16_t x328 = INT16_MIN;
static int16_t x329 = 1;
static volatile int8_t x422 = 0;
uint16_t x645 = 728U;
uint16_t x646 = 0U;
static int32_t x647 = 10704721;
uint8_t x654 = 5U;
int64_t x656 = -1LL;
static uint64_t x682 = 0LLU;
int8_t x977 = 21;
volatile int32_t t13 = 575628362;
uint8_t x1369 = 5U;
static uint8_t x1392 = 3U;
static volatile uint64_t t18 = 10220LLU;
int32_t t20 = -113545;
volatile uint64_t t22 = 549001719LLU;
static volatile int32_t t24 = 0;
static int16_t x1874 = 1;
uint8_t x2066 = 22U;
uint64_t x2190 = 1LLU;
uint32_t x2358 = 8U;
int8_t x2434 = 1;
static int64_t x2520 = INT64_MAX;
uint8_t x2673 = 66U;
int32_t x2676 = INT32_MAX;
int32_t x2839 = INT32_MIN;
volatile int64_t t38 = 3830337180120367LL;
static uint32_t x3006 = 0U;
int64_t x3007 = INT64_MAX;
int32_t t41 = 636891;
uint64_t x3443 = 11713361LLU;
static uint64_t t43 = 173LLU;
volatile uint8_t x3542 = 8U;
static volatile uint32_t x3544 = 264U;
uint8_t x3798 = 1U;
int32_t t47 = 47607171;
volatile int8_t x3911 = INT8_MAX;
static int16_t x3912 = -1;
int32_t t49 = 15302;
int16_t x4009 = INT16_MAX;
static int8_t x4439 = INT8_MIN;
int64_t x4440 = INT64_MIN;
static uint8_t x4582 = 1U;
volatile uint8_t x4586 = 1U;
uint64_t x4587 = UINT64_MAX;
volatile uint64_t t55 = 14LLU;
uint64_t t56 = 8267448192922727LLU;
int16_t x4663 = INT16_MAX;
volatile int32_t t58 = -1306030;
static volatile uint8_t x4690 = 16U;
int8_t x4696 = -1;
volatile int32_t t61 = 11284614;
int8_t x4866 = 0;
int32_t x4903 = -25;
uint64_t x4904 = 2994LLU;
volatile int64_t t65 = -27621912041LL;
static uint32_t x5121 = UINT32_MAX;
uint16_t x5124 = 1U;
uint16_t x5265 = 6856U;
volatile uint64_t x5357 = UINT64_MAX;
uint8_t x5360 = 3U;
uint64_t x5405 = 111072409031546LLU;
uint8_t x5561 = UINT8_MAX;
static int32_t x5563 = 656;
uint32_t x5733 = 24203U;
uint32_t x5877 = 52U;
uint8_t x5909 = UINT8_MAX;
int8_t x5911 = 3;
volatile int64_t x5973 = 1075794520300LL;
int64_t x5989 = 27566LL;
static uint16_t x5990 = 14U;
static int32_t x5991 = -1;
volatile uint64_t x6504 = UINT64_MAX;
static int32_t x6668 = INT32_MIN;
uint16_t x6828 = 2U;
volatile uint16_t x6886 = 26U;
int64_t t82 = -5416873352461984LL;
int8_t x7166 = 1;
int32_t x7355 = INT32_MIN;
int8_t x7398 = 2;
int16_t x7400 = INT16_MIN;
volatile uint32_t t86 = 0U;
volatile uint8_t x7426 = 3U;
int32_t t87 = -735488;
volatile int32_t t89 = -12;
static uint32_t x7583 = 220892107U;
uint16_t x7594 = 6U;
int64_t x7621 = INT64_MAX;
volatile uint8_t x7914 = 11U;
static uint32_t x7994 = 0U;
int8_t x7996 = INT8_MIN;
static uint32_t x8043 = 328645516U;
static uint32_t x8065 = 18081212U;
static volatile int64_t t97 = -15564391575562LL;
volatile int8_t x8127 = INT8_MIN;
static int8_t x8207 = -1;


void f0(void) {
	uint8_t x1 = 1U;
	int32_t x3 = -1;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 27534;

	t0 = ((x1<<x2)%(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 14U;
	uint8_t x8 = 100U;

	t1 = ((x5<<x6)%(x7&x8));

	if (t1 != 52LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = 11U;
	int64_t x15 = -3942LL;
	volatile int64_t x16 = INT64_MAX;
	volatile int64_t t2 = -882583774983296LL;

	t2 = ((x13<<x14)%(x15&x16));

	if (t2 != 2048LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x189 = 3;
	static volatile uint32_t t3 = 9910591U;

	t3 = ((x189<<x190)%(x191&x192));

	if (t3 != 6U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x274 = 0U;
	int32_t x275 = 3402725;
	int8_t x276 = INT8_MAX;
	volatile int32_t t4 = 170;

	t4 = ((x273<<x274)%(x275&x276));

	if (t4 != 40) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x325 = 416471U;
	uint8_t x326 = 12U;
	int8_t x327 = INT8_MIN;
	static uint32_t t5 = 1339619U;

	t5 = ((x325<<x326)%(x327&x328));

	if (t5 != 1705865216U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x330 = 1U;
	volatile int64_t x331 = -429160905777LL;
	volatile int8_t x332 = -1;
	volatile int64_t t6 = -7822974299584LL;

	t6 = ((x329<<x330)%(x331&x332));

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x421 = INT16_MAX;
	static volatile int16_t x423 = 78;
	uint8_t x424 = 96U;
	static int32_t t7 = 13541;

	t7 = ((x421<<x422)%(x423&x424));

	if (t7 != 63) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x521 = 19U;
	uint8_t x522 = 19U;
	uint16_t x523 = 7U;
	int16_t x524 = 14;
	volatile int32_t t8 = 1;

	t8 = ((x521<<x522)%(x523&x524));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x553 = 31862U;
	volatile int32_t x554 = 6;
	uint32_t x555 = 31600851U;
	int16_t x556 = INT16_MIN;
	static uint32_t t9 = 71468638U;

	t9 = ((x553<<x554)%(x555&x556));

	if (t9 != 2039168U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x648 = INT16_MAX;
	static int32_t t10 = 3925;

	t10 = ((x645<<x646)%(x647&x648));

	if (t10 != 728) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x653 = UINT8_MAX;
	static int32_t x655 = INT32_MAX;
	volatile int64_t t11 = 5722364LL;

	t11 = ((x653<<x654)%(x655&x656));

	if (t11 != 8160LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x681 = UINT64_MAX;
	int64_t x683 = -1LL;
	uint32_t x684 = 167U;
	volatile uint64_t t12 = 4047LLU;

	t12 = ((x681<<x682)%(x683&x684));

	if (t12 != 48LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x978 = 2U;
	volatile uint16_t x979 = 138U;
	int8_t x980 = -1;

	t13 = ((x977<<x978)%(x979&x980));

	if (t13 != 84) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1005 = UINT16_MAX;
	int8_t x1006 = 1;
	int16_t x1007 = INT16_MIN;
	int8_t x1008 = INT8_MIN;
	volatile int32_t t14 = 82;

	t14 = ((x1005<<x1006)%(x1007&x1008));

	if (t14 != 32766) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x1125 = 562U;
	volatile uint8_t x1126 = 6U;
	static uint64_t x1127 = UINT64_MAX;
	int16_t x1128 = INT16_MIN;
	uint64_t t15 = 57896166072LLU;

	t15 = ((x1125<<x1126)%(x1127&x1128));

	if (t15 != 35968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1297 = 159839042U;
	uint32_t x1298 = 6U;
	int64_t x1299 = INT64_MIN;
	static int64_t x1300 = INT64_MIN;
	int64_t t16 = -43LL;

	t16 = ((x1297<<x1298)%(x1299&x1300));

	if (t16 != 1639764096LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x1370 = 3;
	int64_t x1371 = 1630152LL;
	static int16_t x1372 = INT16_MIN;
	int64_t t17 = -76705010LL;

	t17 = ((x1369<<x1370)%(x1371&x1372));

	if (t17 != 40LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1389 = 101LLU;
	static uint16_t x1390 = 3U;
	uint16_t x1391 = UINT16_MAX;

	t18 = ((x1389<<x1390)%(x1391&x1392));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1401 = 8;
	volatile int8_t x1402 = 3;
	volatile int32_t x1403 = INT32_MIN;
	static int64_t x1404 = -85983341109972553LL;
	static volatile int64_t t19 = -896643LL;

	t19 = ((x1401<<x1402)%(x1403&x1404));

	if (t19 != 64LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x1493 = UINT8_MAX;
	static uint64_t x1494 = 3LLU;
	int8_t x1495 = -41;
	volatile uint8_t x1496 = 3U;

	t20 = ((x1493<<x1494)%(x1495&x1496));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1521 = 14975751045LLU;
	int16_t x1522 = 1;
	volatile int32_t x1523 = -190800887;
	volatile int8_t x1524 = 1;
	uint64_t t21 = 250582819567088LLU;

	t21 = ((x1521<<x1522)%(x1523&x1524));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1577 = 3;
	static volatile uint16_t x1578 = 2U;
	int64_t x1579 = -2986231245LL;
	uint64_t x1580 = 19160763436LLU;

	t22 = ((x1577<<x1578)%(x1579&x1580));

	if (t22 != 12LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1617 = 790321;
	int8_t x1618 = 1;
	static int64_t x1619 = INT64_MAX;
	uint32_t x1620 = UINT32_MAX;
	volatile int64_t t23 = 12LL;

	t23 = ((x1617<<x1618)%(x1619&x1620));

	if (t23 != 1580642LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1685 = 78;
	uint8_t x1686 = 1U;
	uint16_t x1687 = UINT16_MAX;
	volatile uint16_t x1688 = UINT16_MAX;

	t24 = ((x1685<<x1686)%(x1687&x1688));

	if (t24 != 156) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1805 = 29154LLU;
	uint16_t x1806 = 13U;
	uint8_t x1807 = 48U;
	volatile int32_t x1808 = INT32_MAX;
	volatile uint64_t t25 = 2LLU;

	t25 = ((x1805<<x1806)%(x1807&x1808));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1873 = 31051U;
	uint16_t x1875 = 3416U;
	int16_t x1876 = -2731;
	int32_t t26 = 27;

	t26 = ((x1873<<x1874)%(x1875&x1876));

	if (t26 != 902) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1897 = 191LLU;
	static volatile uint16_t x1898 = 0U;
	int64_t x1899 = 204252980LL;
	uint16_t x1900 = UINT16_MAX;
	volatile uint64_t t27 = 766542LLU;

	t27 = ((x1897<<x1898)%(x1899&x1900));

	if (t27 != 191LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x2065 = UINT32_MAX;
	static volatile uint64_t x2067 = UINT64_MAX;
	int64_t x2068 = -1212242058551574494LL;
	uint64_t t28 = 16LLU;

	t28 = ((x2065<<x2066)%(x2067&x2068));

	if (t28 != 4290772992LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2189 = 138913942111153LLU;
	int8_t x2191 = 14;
	static volatile int16_t x2192 = 386;
	static uint64_t t29 = 2761139358591LLU;

	t29 = ((x2189<<x2190)%(x2191&x2192));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x2225 = 1043379730U;
	static uint8_t x2226 = 11U;
	volatile uint64_t x2227 = UINT64_MAX;
	int64_t x2228 = -1LL;
	volatile uint64_t t30 = 6657LLU;

	t30 = ((x2225<<x2226)%(x2227&x2228));

	if (t30 != 2242940928LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2229 = UINT64_MAX;
	int8_t x2230 = 0;
	static volatile int64_t x2231 = 1849LL;
	static uint64_t x2232 = 1499550722220101LLU;
	volatile uint64_t t31 = 9628040LLU;

	t31 = ((x2229<<x2230)%(x2231&x2232));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2349 = 1U;
	uint16_t x2350 = 8U;
	volatile int8_t x2351 = -2;
	static int16_t x2352 = INT16_MAX;
	int32_t t32 = -13820214;

	t32 = ((x2349<<x2350)%(x2351&x2352));

	if (t32 != 256) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2357 = 6517U;
	int16_t x2359 = INT16_MIN;
	uint64_t x2360 = UINT64_MAX;
	uint64_t t33 = 1517191236043912810LLU;

	t33 = ((x2357<<x2358)%(x2359&x2360));

	if (t33 != 1668352LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2433 = 11U;
	int16_t x2435 = -6;
	volatile uint8_t x2436 = UINT8_MAX;
	static int32_t t34 = -223420189;

	t34 = ((x2433<<x2434)%(x2435&x2436));

	if (t34 != 22) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x2489 = UINT16_MAX;
	uint16_t x2490 = 0U;
	volatile uint64_t x2491 = UINT64_MAX;
	uint64_t x2492 = UINT64_MAX;
	static uint64_t t35 = 1050377333LLU;

	t35 = ((x2489<<x2490)%(x2491&x2492));

	if (t35 != 65535LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x2517 = 0U;
	int16_t x2518 = 0;
	uint64_t x2519 = UINT64_MAX;
	volatile uint64_t t36 = 4598739834LLU;

	t36 = ((x2517<<x2518)%(x2519&x2520));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2674 = 1;
	volatile int64_t x2675 = -1LL;
	volatile int64_t t37 = -370813815391325573LL;

	t37 = ((x2673<<x2674)%(x2675&x2676));

	if (t37 != 132LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2837 = 92U;
	static int8_t x2838 = 0;
	int64_t x2840 = INT64_MAX;

	t38 = ((x2837<<x2838)%(x2839&x2840));

	if (t38 != 92LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x3005 = 52U;
	static volatile uint16_t x3008 = 233U;
	volatile int64_t t39 = 5035265136LL;

	t39 = ((x3005<<x3006)%(x3007&x3008));

	if (t39 != 52LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x3025 = 14U;
	volatile int16_t x3026 = 1;
	int64_t x3027 = -1LL;
	int16_t x3028 = INT16_MIN;
	volatile int64_t t40 = 45438252521014855LL;

	t40 = ((x3025<<x3026)%(x3027&x3028));

	if (t40 != 28LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x3141 = 2544;
	volatile uint16_t x3142 = 12U;
	volatile int8_t x3143 = INT8_MIN;
	int32_t x3144 = INT32_MAX;

	t41 = ((x3141<<x3142)%(x3143&x3144));

	if (t41 != 10420224) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x3265 = 28;
	int16_t x3266 = 11;
	static uint64_t x3267 = 3130802LLU;
	volatile uint64_t x3268 = 5594537332899LLU;
	volatile uint64_t t42 = 108991316309335306LLU;

	t42 = ((x3265<<x3266)%(x3267&x3268));

	if (t42 != 57344LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x3441 = 9U;
	uint64_t x3442 = 14LLU;
	static int16_t x3444 = 3;

	t43 = ((x3441<<x3442)%(x3443&x3444));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3541 = 19486U;
	int16_t x3543 = INT16_MAX;
	volatile uint32_t t44 = 556423856U;

	t44 = ((x3541<<x3542)%(x3543&x3544));

	if (t44 != 136U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3657 = 884;
	uint32_t x3658 = 0U;
	static int8_t x3659 = INT8_MAX;
	uint64_t x3660 = UINT64_MAX;
	uint64_t t45 = 69512451159814LLU;

	t45 = ((x3657<<x3658)%(x3659&x3660));

	if (t45 != 122LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x3709 = 2229768LL;
	static uint8_t x3710 = 5U;
	static int32_t x3711 = -424;
	static uint64_t x3712 = 208206816176963LLU;
	volatile uint64_t t46 = 84389574573229239LLU;

	t46 = ((x3709<<x3710)%(x3711&x3712));

	if (t46 != 71352576LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x3797 = UINT8_MAX;
	int32_t x3799 = 3;
	int16_t x3800 = -1;

	t47 = ((x3797<<x3798)%(x3799&x3800));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x3845 = 1922178LLU;
	uint8_t x3846 = 7U;
	static volatile uint64_t x3847 = 3014993163LLU;
	volatile int64_t x3848 = 294013514492240LL;
	volatile uint64_t t48 = 5784LLU;

	t48 = ((x3845<<x3846)%(x3847&x3848));

	if (t48 != 246038784LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3909 = INT16_MAX;
	uint8_t x3910 = 10U;

	t49 = ((x3909<<x3910)%(x3911&x3912));

	if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x4010 = 8U;
	int16_t x4011 = -3;
	uint32_t x4012 = 556739U;
	static volatile uint32_t t50 = 265U;

	t50 = ((x4009<<x4010)%(x4011&x4012));

	if (t50 != 37297U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x4197 = INT16_MAX;
	volatile int16_t x4198 = 1;
	uint16_t x4199 = 372U;
	uint64_t x4200 = 1754151LLU;
	volatile uint64_t t51 = 13027299LLU;

	t51 = ((x4197<<x4198)%(x4199&x4200));

	if (t51 != 14LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x4301 = UINT64_MAX;
	int8_t x4302 = 0;
	static uint32_t x4303 = 478U;
	volatile int16_t x4304 = -1;
	volatile uint64_t t52 = 406075974LLU;

	t52 = ((x4301<<x4302)%(x4303&x4304));

	if (t52 != 149LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x4437 = INT8_MAX;
	uint8_t x4438 = 21U;
	volatile int64_t t53 = 7495LL;

	t53 = ((x4437<<x4438)%(x4439&x4440));

	if (t53 != 266338304LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x4581 = 6;
	static volatile uint64_t x4583 = 205LLU;
	uint16_t x4584 = UINT16_MAX;
	uint64_t t54 = 1001137918483532LLU;

	t54 = ((x4581<<x4582)%(x4583&x4584));

	if (t54 != 12LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x4585 = 212LL;
	int32_t x4588 = INT32_MIN;

	t55 = ((x4585<<x4586)%(x4587&x4588));

	if (t55 != 424LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4609 = UINT64_MAX;
	uint8_t x4610 = 27U;
	int64_t x4611 = INT64_MIN;
	int32_t x4612 = -1;

	t56 = ((x4609<<x4610)%(x4611&x4612));

	if (t56 != 9223372036720558080LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x4661 = 518U;
	static uint8_t x4662 = 1U;
	uint32_t x4664 = UINT32_MAX;
	volatile uint32_t t57 = 1270333060U;

	t57 = ((x4661<<x4662)%(x4663&x4664));

	if (t57 != 1036U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x4685 = UINT8_MAX;
	uint64_t x4686 = 0LLU;
	static uint8_t x4687 = 23U;
	uint16_t x4688 = UINT16_MAX;

	t58 = ((x4685<<x4686)%(x4687&x4688));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4689 = 2758198766912204708LLU;
	static int32_t x4691 = 1791;
	int8_t x4692 = -1;
	volatile uint64_t t59 = 3845950228608730868LLU;

	t59 = ((x4689<<x4690)%(x4691&x4692));

	if (t59 != 964LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4693 = 480756705464257054LLU;
	uint64_t x4694 = 1LLU;
	int32_t x4695 = INT32_MIN;
	static volatile uint64_t t60 = 4LLU;

	t60 = ((x4693<<x4694)%(x4695&x4696));

	if (t60 != 961513410928514108LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4757 = 7U;
	int8_t x4758 = 1;
	int8_t x4759 = 24;
	volatile int32_t x4760 = -38;

	t61 = ((x4757<<x4758)%(x4759&x4760));

	if (t61 != 14) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x4865 = 15935LLU;
	int32_t x4867 = INT32_MAX;
	int8_t x4868 = INT8_MIN;
	uint64_t t62 = 95917174383650LLU;

	t62 = ((x4865<<x4866)%(x4867&x4868));

	if (t62 != 15935LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4885 = UINT8_MAX;
	int8_t x4886 = 0;
	volatile int64_t x4887 = INT64_MIN;
	int16_t x4888 = -1;
	int64_t t63 = -7388952840709912LL;

	t63 = ((x4885<<x4886)%(x4887&x4888));

	if (t63 != 255LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4901 = 33U;
	volatile uint8_t x4902 = 1U;
	uint64_t t64 = 43503915550739LLU;

	t64 = ((x4901<<x4902)%(x4903&x4904));

	if (t64 != 66LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x5041 = 1552U;
	volatile uint16_t x5042 = 3U;
	int64_t x5043 = INT64_MIN;
	int64_t x5044 = INT64_MIN;

	t65 = ((x5041<<x5042)%(x5043&x5044));

	if (t65 != 12416LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x5122 = 1U;
	volatile int16_t x5123 = -16021;
	static uint32_t t66 = 13U;

	t66 = ((x5121<<x5122)%(x5123&x5124));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x5266 = 1U;
	int16_t x5267 = INT16_MAX;
	volatile int32_t x5268 = -1;
	int32_t t67 = -4573;

	t67 = ((x5265<<x5266)%(x5267&x5268));

	if (t67 != 13712) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x5358 = 2U;
	static uint64_t x5359 = UINT64_MAX;
	static volatile uint64_t t68 = 7LLU;

	t68 = ((x5357<<x5358)%(x5359&x5360));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x5406 = 2U;
	static int16_t x5407 = -1;
	static int64_t x5408 = INT64_MAX;
	volatile uint64_t t69 = 0LLU;

	t69 = ((x5405<<x5406)%(x5407&x5408));

	if (t69 != 444289636126184LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x5562 = 22;
	int64_t x5564 = -1LL;
	static int64_t t70 = 3LL;

	t70 = ((x5561<<x5562)%(x5563&x5564));

	if (t70 != 528LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x5649 = 2388;
	uint8_t x5650 = 13U;
	uint32_t x5651 = UINT32_MAX;
	int16_t x5652 = INT16_MIN;
	uint32_t t71 = 63175U;

	t71 = ((x5649<<x5650)%(x5651&x5652));

	if (t71 != 19562496U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x5734 = 0U;
	volatile int8_t x5735 = -1;
	volatile int8_t x5736 = INT8_MAX;
	volatile uint32_t t72 = 599907U;

	t72 = ((x5733<<x5734)%(x5735&x5736));

	if (t72 != 73U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5878 = 0U;
	int8_t x5879 = INT8_MAX;
	static int64_t x5880 = 49LL;
	int64_t t73 = -131304598954LL;

	t73 = ((x5877<<x5878)%(x5879&x5880));

	if (t73 != 3LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x5910 = 1U;
	static int16_t x5912 = INT16_MAX;
	volatile int32_t t74 = 3707;

	t74 = ((x5909<<x5910)%(x5911&x5912));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x5974 = 2;
	int64_t x5975 = -1LL;
	int16_t x5976 = -29;
	int64_t t75 = -417055756139LL;

	t75 = ((x5973<<x5974)%(x5975&x5976));

	if (t75 != 25LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x5992 = INT64_MIN;
	volatile int64_t t76 = -760342756614029LL;

	t76 = ((x5989<<x5990)%(x5991&x5992));

	if (t76 != 451641344LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x6057 = 21U;
	uint16_t x6058 = 2U;
	int64_t x6059 = INT64_MIN;
	int64_t x6060 = INT64_MIN;
	volatile int64_t t77 = -22614935932626LL;

	t77 = ((x6057<<x6058)%(x6059&x6060));

	if (t77 != 84LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x6125 = 104U;
	int8_t x6126 = 1;
	uint64_t x6127 = UINT64_MAX;
	int32_t x6128 = -244;
	uint64_t t78 = 11236810979LLU;

	t78 = ((x6125<<x6126)%(x6127&x6128));

	if (t78 != 208LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x6501 = UINT32_MAX;
	int64_t x6502 = 7LL;
	int16_t x6503 = INT16_MIN;
	static uint64_t t79 = 6LLU;

	t79 = ((x6501<<x6502)%(x6503&x6504));

	if (t79 != 4294967168LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x6665 = 58;
	uint8_t x6666 = 25U;
	volatile uint64_t x6667 = UINT64_MAX;
	uint64_t t80 = 70684231673663671LLU;

	t80 = ((x6665<<x6666)%(x6667&x6668));

	if (t80 != 1946157056LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x6825 = UINT8_MAX;
	int8_t x6826 = 0;
	volatile int32_t x6827 = -1;
	static volatile int32_t t81 = 39181226;

	t81 = ((x6825<<x6826)%(x6827&x6828));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x6885 = 0;
	int64_t x6887 = INT64_MIN;
	int8_t x6888 = INT8_MIN;

	t82 = ((x6885<<x6886)%(x6887&x6888));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x7165 = 34LLU;
	int64_t x7167 = -282LL;
	static int32_t x7168 = INT32_MIN;
	uint64_t t83 = 285859577888757318LLU;

	t83 = ((x7165<<x7166)%(x7167&x7168));

	if (t83 != 68LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x7333 = 1U;
	volatile int32_t x7334 = 1;
	static uint8_t x7335 = 1U;
	volatile int8_t x7336 = -21;
	int32_t t84 = 307150074;

	t84 = ((x7333<<x7334)%(x7335&x7336));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x7353 = UINT64_MAX;
	uint8_t x7354 = 1U;
	static int32_t x7356 = -21;
	uint64_t t85 = 231360320LLU;

	t85 = ((x7353<<x7354)%(x7355&x7356));

	if (t85 != 2147483646LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x7397 = 9U;
	static int8_t x7399 = INT8_MIN;

	t86 = ((x7397<<x7398)%(x7399&x7400));

	if (t86 != 36U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x7425 = INT16_MAX;
	static int8_t x7427 = -22;
	uint16_t x7428 = 310U;

	t87 = ((x7425<<x7426)%(x7427&x7428));

	if (t87 != 266) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x7481 = UINT64_MAX;
	uint8_t x7482 = 20U;
	volatile uint32_t x7483 = UINT32_MAX;
	volatile int16_t x7484 = INT16_MIN;
	static uint64_t t88 = 432153870501LLU;

	t88 = ((x7481<<x7482)%(x7483&x7484));

	if (t88 != 1072693248LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x7497 = 7;
	volatile int8_t x7498 = 1;
	uint8_t x7499 = UINT8_MAX;
	int32_t x7500 = 4;

	t89 = ((x7497<<x7498)%(x7499&x7500));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x7581 = 1028662LL;
	uint8_t x7582 = 2U;
	volatile int16_t x7584 = INT16_MIN;
	int64_t t90 = 20772939880301LL;

	t90 = ((x7581<<x7582)%(x7583&x7584));

	if (t90 != 4114648LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x7593 = INT8_MAX;
	int32_t x7595 = 13;
	uint16_t x7596 = 30163U;
	int32_t t91 = 1;

	t91 = ((x7593<<x7594)%(x7595&x7596));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x7622 = 0;
	int16_t x7623 = 6;
	volatile int64_t x7624 = -2380996146501LL;
	volatile int64_t t92 = -14079LL;

	t92 = ((x7621<<x7622)%(x7623&x7624));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x7793 = 1175483593LL;
	static uint64_t x7794 = 1LLU;
	uint16_t x7795 = 13U;
	static int16_t x7796 = -1;
	int64_t t93 = -1261279LL;

	t93 = ((x7793<<x7794)%(x7795&x7796));

	if (t93 != 9LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x7913 = 4585160U;
	static int16_t x7915 = INT16_MAX;
	volatile uint32_t x7916 = UINT32_MAX;
	uint32_t t94 = 16894565U;

	t94 = ((x7913<<x7914)%(x7915&x7916));

	if (t94 != 8045U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x7993 = INT16_MAX;
	int64_t x7995 = INT64_MIN;
	volatile int64_t t95 = 79036006289638LL;

	t95 = ((x7993<<x7994)%(x7995&x7996));

	if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x8041 = 291475U;
	volatile int8_t x8042 = 0;
	uint64_t x8044 = 6231104723821723LLU;
	static volatile uint64_t t96 = 0LLU;

	t96 = ((x8041<<x8042)%(x8043&x8044));

	if (t96 != 291475LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x8066 = 12;
	int16_t x8067 = -1;
	volatile int64_t x8068 = -1LL;

	t97 = ((x8065<<x8066)%(x8067&x8068));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x8125 = INT8_MAX;
	volatile uint32_t x8126 = 10U;
	static int32_t x8128 = INT32_MIN;
	volatile int32_t t98 = 423510928;

	t98 = ((x8125<<x8126)%(x8127&x8128));

	if (t98 != 130048) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x8205 = 1;
	static int16_t x8206 = 20;
	static uint32_t x8208 = 40U;
	volatile uint32_t t99 = 719U;

	t99 = ((x8205<<x8206)%(x8207&x8208));

	if (t99 != 16U) { NG(); } else { ; }
	
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

