#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x25 = 30;
uint64_t x26 = 8LLU;
static volatile uint64_t x133 = UINT64_MAX;
int16_t x221 = INT16_MAX;
volatile uint64_t x224 = UINT64_MAX;
int16_t x318 = 0;
static int8_t x319 = INT8_MIN;
uint32_t x641 = UINT32_MAX;
int16_t x675 = INT16_MIN;
uint8_t x676 = 85U;
static uint64_t x731 = UINT64_MAX;
volatile uint8_t x913 = 89U;
uint64_t x957 = 1LLU;
int16_t x1202 = 50;
uint32_t x1309 = 2628053U;
int64_t x1312 = -1LL;
volatile uint16_t x1370 = 11U;
uint8_t x1642 = 8U;
int64_t x1644 = -1LL;
static volatile int8_t x1645 = INT8_MAX;
uint64_t x1683 = 63925246LLU;
int64_t x1816 = -1LL;
uint16_t x1889 = 6250U;
static int64_t x1951 = INT64_MIN;
uint64_t x1953 = UINT64_MAX;
static int8_t x1990 = 1;
volatile int8_t x2002 = 0;
volatile uint32_t x2201 = 30U;
volatile uint32_t t31 = 1122U;
int32_t t32 = -1;
int32_t x2299 = INT32_MIN;
uint8_t x2874 = 6U;
uint32_t x3033 = 0U;
int32_t x3035 = INT32_MIN;
int16_t x3089 = 112;
int32_t x3090 = 4;
static uint8_t x3097 = UINT8_MAX;
int8_t x3100 = INT8_MIN;
int32_t x3102 = 3;
uint16_t x3266 = 14U;
uint8_t x3394 = 7U;
int64_t x3395 = INT64_MIN;
volatile int32_t t44 = -406868;
static int32_t x3433 = 702;
int16_t x3434 = 0;
int32_t x3435 = INT32_MAX;
int32_t t45 = -541;
uint64_t x3441 = 15238363964027LLU;
uint16_t x3495 = UINT16_MAX;
volatile int16_t x3629 = 72;
uint8_t x3630 = 1U;
int32_t t49 = 1740;
int8_t x3669 = INT8_MAX;
int32_t t50 = 443591232;
int8_t x3711 = 4;
volatile uint8_t x3749 = 9U;
int64_t x3750 = 0LL;
static int8_t x4130 = 1;
volatile int32_t x4131 = -188041;
uint64_t x4165 = UINT64_MAX;
int64_t x4168 = 12939999732780364LL;
int64_t x4191 = -1LL;
uint8_t x4254 = 0U;
static volatile int32_t x4255 = -127532;
uint8_t x4266 = 4U;
int16_t x4267 = INT16_MIN;
uint8_t x4268 = 1U;
volatile uint64_t x4301 = 1234296785167744996LLU;
uint8_t x4302 = 1U;
uint16_t x4303 = 127U;
uint8_t x4324 = UINT8_MAX;
volatile int8_t x4351 = -12;
int32_t x4352 = INT32_MIN;
volatile int8_t x4369 = 0;
volatile uint16_t x4370 = 3U;
static int64_t x4372 = INT64_MIN;
int32_t t63 = -2778;
uint32_t x4562 = 14U;
int32_t x4763 = INT32_MIN;
static volatile uint32_t t66 = 54323U;
volatile int8_t x4781 = INT8_MAX;
int64_t x4837 = 11891763LL;
uint16_t x4922 = 0U;
uint16_t x4926 = 4U;
volatile uint16_t x4927 = UINT16_MAX;
volatile int32_t x4928 = -1;
volatile int32_t t70 = 70953133;
uint16_t x5033 = UINT16_MAX;
uint64_t x5036 = 1784352792LLU;
volatile int8_t x5067 = INT8_MIN;
int8_t x5070 = 1;
volatile uint8_t x5086 = 0U;
int16_t x5088 = INT16_MAX;
uint64_t t74 = 200LLU;
uint32_t x5209 = 55631942U;
static int8_t x5279 = 2;
uint8_t x5410 = 2U;
int8_t x5428 = -1;
uint32_t x5437 = UINT32_MAX;
uint8_t x5440 = 0U;
volatile uint64_t t82 = 53086469LLU;
uint64_t x5552 = 6590136517660815902LLU;
int8_t x5700 = 0;
uint32_t x5841 = 73U;
int8_t x5843 = INT8_MIN;
uint32_t x5850 = 11U;
static volatile int8_t x5852 = INT8_MAX;
uint16_t x5945 = 189U;
int32_t x6234 = 0;
volatile int32_t x6235 = INT32_MIN;
static volatile uint64_t x6236 = 0LLU;
uint8_t x6265 = 9U;
uint32_t x6376 = 7393842U;
uint16_t x6384 = 1U;
int8_t x6530 = 5;
static int32_t t93 = -21201;
volatile int32_t x6564 = INT32_MIN;
volatile uint16_t x6569 = UINT16_MAX;
uint16_t x6606 = 3U;
volatile uint8_t x6607 = 1U;
volatile int16_t x6608 = INT16_MIN;
volatile int32_t t98 = -281757464;
int8_t x6761 = 0;


void f0(void) {
	static int16_t x27 = 12284;
	volatile int8_t x28 = 2;
	volatile int32_t t0 = -7776;

	t0 = ((x25<<x26)>>(x27==x28));

	if (t0 != 7680) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x41 = UINT8_MAX;
	static int32_t x42 = 5;
	uint8_t x43 = 12U;
	volatile uint16_t x44 = 2840U;
	volatile int32_t t1 = -95610910;

	t1 = ((x41<<x42)>>(x43==x44));

	if (t1 != 8160) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x134 = 38U;
	volatile int16_t x135 = 2752;
	static int32_t x136 = 14913229;
	uint64_t t2 = 48LLU;

	t2 = ((x133<<x134)>>(x135==x136));

	if (t2 != 18446743798831644672LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x222 = 1;
	static volatile int8_t x223 = INT8_MIN;
	int32_t t3 = 180;

	t3 = ((x221<<x222)>>(x223==x224));

	if (t3 != 65534) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x317 = 329;
	static int8_t x320 = -58;
	volatile int32_t t4 = 213754898;

	t4 = ((x317<<x318)>>(x319==x320));

	if (t4 != 329) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x329 = 10U;
	uint32_t x330 = 25U;
	volatile uint32_t x331 = UINT32_MAX;
	static volatile int8_t x332 = INT8_MAX;
	static volatile int32_t t5 = -88;

	t5 = ((x329<<x330)>>(x331==x332));

	if (t5 != 335544320) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x629 = 6577LLU;
	uint64_t x630 = 7LLU;
	static int16_t x631 = INT16_MIN;
	uint32_t x632 = UINT32_MAX;
	volatile uint64_t t6 = 1LLU;

	t6 = ((x629<<x630)>>(x631==x632));

	if (t6 != 841856LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x642 = 1U;
	int64_t x643 = INT64_MIN;
	uint8_t x644 = 1U;
	uint32_t t7 = 30U;

	t7 = ((x641<<x642)>>(x643==x644));

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x673 = 2964U;
	uint32_t x674 = 0U;
	uint32_t t8 = 30641U;

	t8 = ((x673<<x674)>>(x675==x676));

	if (t8 != 2964U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x729 = 1;
	int8_t x730 = 26;
	int16_t x732 = -211;
	volatile int32_t t9 = 223;

	t9 = ((x729<<x730)>>(x731==x732));

	if (t9 != 67108864) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x857 = INT64_MAX;
	int16_t x858 = 0;
	uint32_t x859 = 12877497U;
	int64_t x860 = INT64_MIN;
	volatile int64_t t10 = INT64_MAX;

	t10 = ((x857<<x858)>>(x859==x860));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x914 = 1U;
	volatile uint64_t x915 = 3296LLU;
	volatile int64_t x916 = -1LL;
	volatile int32_t t11 = -4463899;

	t11 = ((x913<<x914)>>(x915==x916));

	if (t11 != 178) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x958 = 6;
	uint32_t x959 = 1851993754U;
	uint64_t x960 = 463573653018LLU;
	uint64_t t12 = 7736355570LLU;

	t12 = ((x957<<x958)>>(x959==x960));

	if (t12 != 64LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x1017 = 4490456U;
	volatile int8_t x1018 = 2;
	uint16_t x1019 = 3271U;
	int8_t x1020 = INT8_MAX;
	volatile uint32_t t13 = 324672U;

	t13 = ((x1017<<x1018)>>(x1019==x1020));

	if (t13 != 17961824U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x1201 = 174001934LLU;
	uint64_t x1203 = 226LLU;
	int16_t x1204 = INT16_MIN;
	uint64_t t14 = 1886440634300LLU;

	t14 = ((x1201<<x1202)>>(x1203==x1204));

	if (t14 != 4339218240971472896LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1229 = 93U;
	uint16_t x1230 = 0U;
	static uint16_t x1231 = UINT16_MAX;
	static int8_t x1232 = INT8_MAX;
	int32_t t15 = -106;

	t15 = ((x1229<<x1230)>>(x1231==x1232));

	if (t15 != 93) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1310 = 0;
	uint32_t x1311 = 698568U;
	uint32_t t16 = 74125U;

	t16 = ((x1309<<x1310)>>(x1311==x1312));

	if (t16 != 2628053U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1369 = 81834373257835127LLU;
	int8_t x1371 = INT8_MIN;
	int8_t x1372 = 0;
	volatile uint64_t t17 = 507088807LLU;

	t17 = ((x1369<<x1370)>>(x1371==x1372));

	if (t17 != 1576099768660375552LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x1409 = 284U;
	uint8_t x1410 = 1U;
	volatile int32_t x1411 = INT32_MIN;
	int32_t x1412 = 126764789;
	volatile int32_t t18 = -40569297;

	t18 = ((x1409<<x1410)>>(x1411==x1412));

	if (t18 != 568) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1577 = UINT64_MAX;
	int8_t x1578 = 0;
	uint8_t x1579 = UINT8_MAX;
	int32_t x1580 = INT32_MIN;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x1577<<x1578)>>(x1579==x1580));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1641 = UINT8_MAX;
	uint32_t x1643 = 200682746U;
	int32_t t20 = -5809;

	t20 = ((x1641<<x1642)>>(x1643==x1644));

	if (t20 != 65280) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1646 = 4LLU;
	uint64_t x1647 = 4172064388LLU;
	int32_t x1648 = -1;
	volatile int32_t t21 = -15344;

	t21 = ((x1645<<x1646)>>(x1647==x1648));

	if (t21 != 2032) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1681 = 69574759883LL;
	int16_t x1682 = 0;
	int64_t x1684 = 5048343727LL;
	int64_t t22 = 400360567641662LL;

	t22 = ((x1681<<x1682)>>(x1683==x1684));

	if (t22 != 69574759883LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1793 = 315U;
	int8_t x1794 = 1;
	int8_t x1795 = -1;
	static int32_t x1796 = -39568073;
	volatile uint32_t t23 = 46070835U;

	t23 = ((x1793<<x1794)>>(x1795==x1796));

	if (t23 != 630U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1813 = 6861785U;
	int16_t x1814 = 3;
	uint64_t x1815 = 25579603326LLU;
	volatile uint32_t t24 = 75796027U;

	t24 = ((x1813<<x1814)>>(x1815==x1816));

	if (t24 != 54894280U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1890 = 1;
	volatile int64_t x1891 = 91477305265885759LL;
	uint8_t x1892 = 11U;
	static volatile int32_t t25 = 147;

	t25 = ((x1889<<x1890)>>(x1891==x1892));

	if (t25 != 12500) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1901 = 10U;
	int16_t x1902 = 0;
	int32_t x1903 = INT32_MAX;
	int64_t x1904 = INT64_MIN;
	volatile int32_t t26 = 1072100;

	t26 = ((x1901<<x1902)>>(x1903==x1904));

	if (t26 != 10) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1949 = INT64_MAX;
	volatile int64_t x1950 = 0LL;
	static int64_t x1952 = INT64_MIN;
	volatile int64_t t27 = 52520026325LL;

	t27 = ((x1949<<x1950)>>(x1951==x1952));

	if (t27 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1954 = 4;
	int32_t x1955 = INT32_MAX;
	uint32_t x1956 = UINT32_MAX;
	volatile uint64_t t28 = 2601974425832551583LLU;

	t28 = ((x1953<<x1954)>>(x1955==x1956));

	if (t28 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1989 = 1780692153226990LLU;
	static int16_t x1991 = INT16_MIN;
	int32_t x1992 = -1;
	uint64_t t29 = 59012969285LLU;

	t29 = ((x1989<<x1990)>>(x1991==x1992));

	if (t29 != 3561384306453980LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2001 = INT32_MAX;
	static volatile uint16_t x2003 = UINT16_MAX;
	uint16_t x2004 = 679U;
	volatile int32_t t30 = INT32_MAX;

	t30 = ((x2001<<x2002)>>(x2003==x2004));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2202 = 16U;
	volatile uint8_t x2203 = UINT8_MAX;
	volatile int32_t x2204 = -1;

	t31 = ((x2201<<x2202)>>(x2203==x2204));

	if (t31 != 1966080U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2205 = 2U;
	static uint8_t x2206 = 21U;
	int8_t x2207 = 1;
	static volatile int64_t x2208 = 8409019LL;

	t32 = ((x2205<<x2206)>>(x2207==x2208));

	if (t32 != 4194304) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x2233 = 9596632U;
	uint32_t x2234 = 1U;
	int32_t x2235 = 20;
	uint64_t x2236 = 4344020990216LLU;
	uint32_t t33 = 23489U;

	t33 = ((x2233<<x2234)>>(x2235==x2236));

	if (t33 != 19193264U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2297 = INT16_MAX;
	int8_t x2298 = 1;
	static uint32_t x2300 = 961621U;
	int32_t t34 = 5485863;

	t34 = ((x2297<<x2298)>>(x2299==x2300));

	if (t34 != 65534) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2573 = 0;
	uint8_t x2574 = 8U;
	int32_t x2575 = INT32_MAX;
	int64_t x2576 = 45LL;
	volatile int32_t t35 = -3;

	t35 = ((x2573<<x2574)>>(x2575==x2576));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x2873 = 3904803344397LL;
	static int32_t x2875 = -5037106;
	int8_t x2876 = INT8_MIN;
	int64_t t36 = -9397359LL;

	t36 = ((x2873<<x2874)>>(x2875==x2876));

	if (t36 != 249907414041408LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2889 = INT16_MAX;
	uint8_t x2890 = 1U;
	volatile uint64_t x2891 = 830311179LLU;
	int64_t x2892 = 31193727479721592LL;
	int32_t t37 = 171561810;

	t37 = ((x2889<<x2890)>>(x2891==x2892));

	if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x3034 = 29U;
	uint64_t x3036 = UINT64_MAX;
	uint32_t t38 = 1U;

	t38 = ((x3033<<x3034)>>(x3035==x3036));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x3091 = 1U;
	int16_t x3092 = 453;
	volatile int32_t t39 = -27774518;

	t39 = ((x3089<<x3090)>>(x3091==x3092));

	if (t39 != 1792) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x3098 = 1U;
	static int16_t x3099 = 1;
	volatile int32_t t40 = -286;

	t40 = ((x3097<<x3098)>>(x3099==x3100));

	if (t40 != 510) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x3101 = 70153006;
	uint8_t x3103 = UINT8_MAX;
	static uint16_t x3104 = 21U;
	int32_t t41 = 470674;

	t41 = ((x3101<<x3102)>>(x3103==x3104));

	if (t41 != 561224048) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3185 = 1832;
	uint16_t x3186 = 1U;
	int16_t x3187 = INT16_MIN;
	static int64_t x3188 = 526567630LL;
	int32_t t42 = -2;

	t42 = ((x3185<<x3186)>>(x3187==x3188));

	if (t42 != 3664) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3265 = 91313829U;
	int16_t x3267 = INT16_MIN;
	int32_t x3268 = -1;
	volatile uint32_t t43 = 1U;

	t43 = ((x3265<<x3266)>>(x3267==x3268));

	if (t43 != 1437155328U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x3393 = 30;
	volatile int64_t x3396 = -1LL;

	t44 = ((x3393<<x3394)>>(x3395==x3396));

	if (t44 != 3840) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x3436 = INT16_MAX;

	t45 = ((x3433<<x3434)>>(x3435==x3436));

	if (t45 != 702) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3442 = 15U;
	static uint32_t x3443 = UINT32_MAX;
	int8_t x3444 = -38;
	uint64_t t46 = 53989792587LLU;

	t46 = ((x3441<<x3442)>>(x3443==x3444));

	if (t46 != 499330710373236736LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3493 = 4826654169LLU;
	uint16_t x3494 = 7U;
	volatile uint32_t x3496 = 4018608U;
	volatile uint64_t t47 = 46382923LLU;

	t47 = ((x3493<<x3494)>>(x3495==x3496));

	if (t47 != 617811733632LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x3585 = 57U;
	int8_t x3586 = 25;
	uint32_t x3587 = UINT32_MAX;
	volatile uint64_t x3588 = UINT64_MAX;
	uint32_t t48 = 1012268U;

	t48 = ((x3585<<x3586)>>(x3587==x3588));

	if (t48 != 1912602624U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3631 = 12U;
	uint16_t x3632 = 142U;

	t49 = ((x3629<<x3630)>>(x3631==x3632));

	if (t49 != 144) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x3670 = 5U;
	static int16_t x3671 = -1;
	uint16_t x3672 = 3U;

	t50 = ((x3669<<x3670)>>(x3671==x3672));

	if (t50 != 4064) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3709 = INT64_MAX;
	uint8_t x3710 = 0U;
	int32_t x3712 = INT32_MAX;
	volatile int64_t t51 = INT64_MAX;

	t51 = ((x3709<<x3710)>>(x3711==x3712));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x3751 = 0;
	int8_t x3752 = -10;
	volatile int32_t t52 = -263295;

	t52 = ((x3749<<x3750)>>(x3751==x3752));

	if (t52 != 9) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3833 = 19444U;
	uint8_t x3834 = 1U;
	volatile uint16_t x3835 = 2988U;
	uint16_t x3836 = 29U;
	volatile int32_t t53 = 34070;

	t53 = ((x3833<<x3834)>>(x3835==x3836));

	if (t53 != 38888) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x4129 = 151U;
	volatile int32_t x4132 = INT32_MIN;
	volatile int32_t t54 = 22;

	t54 = ((x4129<<x4130)>>(x4131==x4132));

	if (t54 != 302) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x4166 = 2U;
	uint64_t x4167 = 13997LLU;
	static uint64_t t55 = 608372316025109LLU;

	t55 = ((x4165<<x4166)>>(x4167==x4168));

	if (t55 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4189 = 4687701LLU;
	uint8_t x4190 = 0U;
	uint16_t x4192 = 194U;
	uint64_t t56 = 453LLU;

	t56 = ((x4189<<x4190)>>(x4191==x4192));

	if (t56 != 4687701LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x4253 = 1622877405014LLU;
	static volatile int64_t x4256 = -179324501786480060LL;
	uint64_t t57 = 44155LLU;

	t57 = ((x4253<<x4254)>>(x4255==x4256));

	if (t57 != 1622877405014LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x4265 = 33U;
	static int32_t t58 = 6014;

	t58 = ((x4265<<x4266)>>(x4267==x4268));

	if (t58 != 528) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x4304 = INT16_MIN;
	uint64_t t59 = 55244293LLU;

	t59 = ((x4301<<x4302)>>(x4303==x4304));

	if (t59 != 2468593570335489992LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x4321 = 1653991750U;
	int8_t x4322 = 15;
	volatile int8_t x4323 = 0;
	static volatile uint32_t t60 = 2079U;

	t60 = ((x4321<<x4322)>>(x4323==x4324));

	if (t60 != 4104323072U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x4337 = 1058535393386326791LLU;
	uint64_t x4338 = 22LLU;
	int16_t x4339 = INT16_MIN;
	int8_t x4340 = INT8_MAX;
	uint64_t t61 = 3LLU;

	t61 = ((x4337<<x4338)>>(x4339==x4340));

	if (t61 != 1530729207993204736LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4349 = 259507253LL;
	volatile uint8_t x4350 = 25U;
	int64_t t62 = -23LL;

	t62 = ((x4349<<x4350)>>(x4351==x4352));

	if (t62 != 8707618474295296LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x4371 = -5;

	t63 = ((x4369<<x4370)>>(x4371==x4372));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4553 = INT16_MAX;
	int8_t x4554 = 2;
	int16_t x4555 = INT16_MAX;
	int32_t x4556 = -98;
	int32_t t64 = 387346;

	t64 = ((x4553<<x4554)>>(x4555==x4556));

	if (t64 != 131068) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4561 = UINT64_MAX;
	uint16_t x4563 = 65U;
	int32_t x4564 = INT32_MIN;
	uint64_t t65 = 10754897961181589LLU;

	t65 = ((x4561<<x4562)>>(x4563==x4564));

	if (t65 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x4761 = 0U;
	uint8_t x4762 = 15U;
	uint8_t x4764 = UINT8_MAX;

	t66 = ((x4761<<x4762)>>(x4763==x4764));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4782 = 1;
	volatile int32_t x4783 = -38586;
	volatile uint8_t x4784 = 1U;
	int32_t t67 = -1;

	t67 = ((x4781<<x4782)>>(x4783==x4784));

	if (t67 != 254) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4838 = 3U;
	volatile int32_t x4839 = INT32_MIN;
	uint16_t x4840 = 27U;
	static int64_t t68 = -117775781LL;

	t68 = ((x4837<<x4838)>>(x4839==x4840));

	if (t68 != 95134104LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x4921 = 3U;
	int32_t x4923 = -1;
	int8_t x4924 = INT8_MAX;
	uint32_t t69 = 7U;

	t69 = ((x4921<<x4922)>>(x4923==x4924));

	if (t69 != 3U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x4925 = 1;

	t70 = ((x4925<<x4926)>>(x4927==x4928));

	if (t70 != 16) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x5034 = 1U;
	uint16_t x5035 = 0U;
	volatile int32_t t71 = -88;

	t71 = ((x5033<<x5034)>>(x5035==x5036));

	if (t71 != 131070) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x5065 = 4;
	uint16_t x5066 = 4U;
	uint16_t x5068 = UINT16_MAX;
	int32_t t72 = -4791690;

	t72 = ((x5065<<x5066)>>(x5067==x5068));

	if (t72 != 64) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x5069 = 252LLU;
	uint16_t x5071 = 6U;
	static int8_t x5072 = INT8_MIN;
	uint64_t t73 = 1718628LLU;

	t73 = ((x5069<<x5070)>>(x5071==x5072));

	if (t73 != 504LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x5085 = 17826828LLU;
	uint16_t x5087 = UINT16_MAX;

	t74 = ((x5085<<x5086)>>(x5087==x5088));

	if (t74 != 17826828LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x5210 = 1;
	uint32_t x5211 = 1758432874U;
	static int8_t x5212 = INT8_MIN;
	uint32_t t75 = 2614U;

	t75 = ((x5209<<x5210)>>(x5211==x5212));

	if (t75 != 111263884U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x5257 = 0;
	uint16_t x5258 = 0U;
	int16_t x5259 = INT16_MIN;
	volatile int64_t x5260 = -163059409LL;
	int32_t t76 = 3772077;

	t76 = ((x5257<<x5258)>>(x5259==x5260));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5277 = 797U;
	uint32_t x5278 = 1U;
	uint16_t x5280 = 1U;
	int32_t t77 = 31415;

	t77 = ((x5277<<x5278)>>(x5279==x5280));

	if (t77 != 1594) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5329 = 116277934LLU;
	uint16_t x5330 = 0U;
	static int64_t x5331 = 96402LL;
	static int16_t x5332 = INT16_MAX;
	uint64_t t78 = 209132459316887LLU;

	t78 = ((x5329<<x5330)>>(x5331==x5332));

	if (t78 != 116277934LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5409 = 250;
	int16_t x5411 = 11944;
	int32_t x5412 = INT32_MIN;
	volatile int32_t t79 = -419719772;

	t79 = ((x5409<<x5410)>>(x5411==x5412));

	if (t79 != 1000) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5425 = 24LLU;
	int8_t x5426 = 8;
	static int32_t x5427 = -950535;
	uint64_t t80 = 7693LLU;

	t80 = ((x5425<<x5426)>>(x5427==x5428));

	if (t80 != 6144LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5438 = 7U;
	int16_t x5439 = INT16_MIN;
	volatile uint32_t t81 = 17U;

	t81 = ((x5437<<x5438)>>(x5439==x5440));

	if (t81 != 4294967168U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5445 = 3101029340LLU;
	uint32_t x5446 = 15U;
	int64_t x5447 = INT64_MAX;
	int8_t x5448 = 3;

	t82 = ((x5445<<x5446)>>(x5447==x5448));

	if (t82 != 101614529413120LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x5549 = INT8_MAX;
	uint32_t x5550 = 0U;
	volatile int64_t x5551 = -1073788950495225LL;
	volatile int32_t t83 = 4644925;

	t83 = ((x5549<<x5550)>>(x5551==x5552));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5697 = INT16_MAX;
	uint8_t x5698 = 3U;
	int16_t x5699 = -1;
	static volatile int32_t t84 = 185874;

	t84 = ((x5697<<x5698)>>(x5699==x5700));

	if (t84 != 262136) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x5842 = 0U;
	int32_t x5844 = INT32_MAX;
	uint32_t t85 = 28071U;

	t85 = ((x5841<<x5842)>>(x5843==x5844));

	if (t85 != 73U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5849 = 1U;
	int8_t x5851 = 1;
	static volatile int32_t t86 = -28;

	t86 = ((x5849<<x5850)>>(x5851==x5852));

	if (t86 != 2048) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5946 = 0U;
	static int16_t x5947 = INT16_MIN;
	static uint64_t x5948 = 6863478544LLU;
	int32_t t87 = -19840;

	t87 = ((x5945<<x5946)>>(x5947==x5948));

	if (t87 != 189) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6233 = 70U;
	volatile int32_t t88 = 2772;

	t88 = ((x6233<<x6234)>>(x6235==x6236));

	if (t88 != 70) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x6266 = 24U;
	static int64_t x6267 = 17552915LL;
	int16_t x6268 = INT16_MIN;
	int32_t t89 = -838619968;

	t89 = ((x6265<<x6266)>>(x6267==x6268));

	if (t89 != 150994944) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x6373 = 49809021480LLU;
	static int8_t x6374 = 1;
	int32_t x6375 = -456463;
	uint64_t t90 = 2336082LLU;

	t90 = ((x6373<<x6374)>>(x6375==x6376));

	if (t90 != 99618042960LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x6381 = 63U;
	uint64_t x6382 = 2LLU;
	int8_t x6383 = 51;
	int32_t t91 = 171495;

	t91 = ((x6381<<x6382)>>(x6383==x6384));

	if (t91 != 252) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6405 = 1696830374060611807LLU;
	static uint8_t x6406 = 3U;
	volatile int8_t x6407 = INT8_MAX;
	int8_t x6408 = INT8_MIN;
	volatile uint64_t t92 = 10LLU;

	t92 = ((x6405<<x6406)>>(x6407==x6408));

	if (t92 != 13574642992484894456LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x6529 = UINT8_MAX;
	int8_t x6531 = -7;
	static int16_t x6532 = -1;

	t93 = ((x6529<<x6530)>>(x6531==x6532));

	if (t93 != 8160) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6561 = 1094;
	static volatile uint32_t x6562 = 1U;
	uint64_t x6563 = 8968568283911291457LLU;
	volatile int32_t t94 = 455;

	t94 = ((x6561<<x6562)>>(x6563==x6564));

	if (t94 != 2188) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x6570 = 14LLU;
	volatile int8_t x6571 = INT8_MAX;
	uint16_t x6572 = UINT16_MAX;
	volatile int32_t t95 = -20;

	t95 = ((x6569<<x6570)>>(x6571==x6572));

	if (t95 != 1073725440) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x6589 = UINT64_MAX;
	volatile uint32_t x6590 = 53U;
	int64_t x6591 = INT64_MIN;
	uint8_t x6592 = 2U;
	volatile uint64_t t96 = 44LLU;

	t96 = ((x6589<<x6590)>>(x6591==x6592));

	if (t96 != 18437736874454810624LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6605 = 31673U;
	volatile int32_t t97 = 94045;

	t97 = ((x6605<<x6606)>>(x6607==x6608));

	if (t97 != 253384) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6633 = 1U;
	uint8_t x6634 = 0U;
	static int64_t x6635 = INT64_MAX;
	int32_t x6636 = -1;

	t98 = ((x6633<<x6634)>>(x6635==x6636));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x6762 = 7U;
	int8_t x6763 = -1;
	uint8_t x6764 = 0U;
	volatile int32_t t99 = 14;

	t99 = ((x6761<<x6762)>>(x6763==x6764));

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

