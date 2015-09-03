#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x259 = 0U;
volatile uint8_t x260 = 0U;
volatile int32_t t2 = 1;
int32_t x269 = 196731;
int8_t x272 = -1;
volatile uint64_t t8 = 341167252091LLU;
int64_t x664 = INT64_MIN;
uint64_t x725 = 36604664641984LLU;
volatile uint64_t t10 = 117593LLU;
static uint16_t x757 = 749U;
volatile int32_t t13 = -223;
uint16_t x766 = 2U;
int64_t x767 = 81725300890376975LL;
int8_t x849 = 1;
volatile int8_t x850 = 2;
int64_t x851 = INT64_MIN;
int8_t x974 = 6;
volatile uint8_t x1005 = 0U;
static uint64_t x1091 = UINT64_MAX;
uint64_t x1183 = 833908446155LLU;
int32_t t24 = 2893;
int64_t x1219 = 1111704860LL;
volatile int32_t t26 = 150174554;
uint8_t x1226 = 3U;
int64_t x1227 = INT64_MAX;
uint64_t x1228 = 45068087712LLU;
static uint32_t x1245 = UINT32_MAX;
static uint32_t x1376 = 393980U;
uint16_t x1486 = 31U;
int32_t x1500 = -37;
static uint32_t x1581 = 10U;
int64_t x1605 = 2953457819256LL;
int16_t x1606 = 0;
int64_t t37 = 16661629553775LL;
int32_t x1627 = -1;
static int64_t x1628 = INT64_MIN;
uint64_t t39 = UINT64_MAX;
int64_t x1917 = INT64_MAX;
uint16_t x1919 = UINT16_MAX;
static int8_t x1934 = 1;
int64_t x1935 = -12277LL;
int8_t x1970 = 0;
int32_t t44 = 25664;
uint64_t x2177 = 959499LLU;
int32_t x2187 = -543224;
volatile uint64_t x2211 = UINT64_MAX;
volatile uint32_t x2258 = 6U;
volatile int32_t t48 = -204;
int8_t x2293 = INT8_MAX;
int16_t x2327 = -1;
volatile int16_t x2541 = 1;
uint16_t x2544 = UINT16_MAX;
uint64_t x2574 = 1LLU;
static int8_t x2577 = 6;
static int32_t t58 = 2;
static int32_t x2647 = -1;
uint16_t x2955 = 2U;
volatile uint64_t t61 = 2LLU;
volatile int64_t t62 = INT64_MAX;
int64_t x3011 = -1LL;
uint8_t x3057 = UINT8_MAX;
uint32_t x3059 = UINT32_MAX;
static int16_t x3212 = INT16_MIN;
int32_t t65 = -1288;
static int8_t x3220 = INT8_MIN;
int32_t x3254 = 1;
static uint64_t x3256 = UINT64_MAX;
volatile int32_t t67 = -226905318;
volatile uint16_t x3262 = 5U;
uint8_t x3410 = 5U;
static volatile uint16_t x3412 = 5U;
volatile int32_t t70 = -50;
volatile int64_t x3511 = -1LL;
uint16_t x3685 = 273U;
volatile int32_t x3686 = 0;
volatile int16_t x3748 = -672;
static int8_t x3914 = 4;
int32_t x3916 = -1;
int64_t x3949 = INT64_MAX;
uint64_t x3951 = 79893866892LLU;
static uint16_t x3965 = 2011U;
static uint16_t x3968 = 3827U;
uint16_t x4090 = 0U;
int8_t x4135 = 44;
volatile int32_t t82 = 7;
uint8_t x4198 = 2U;
int16_t x4199 = INT16_MIN;
volatile uint64_t x4221 = UINT64_MAX;
int8_t x4465 = 39;
int32_t t89 = -2980;
static uint32_t x4866 = 2U;
int8_t x4868 = -1;
uint32_t x4873 = UINT32_MAX;
int32_t x4874 = 0;
uint32_t t92 = UINT32_MAX;
volatile uint8_t x5038 = 1U;
int16_t x5039 = -1;
uint64_t x5040 = 4513471831LLU;
int16_t x5175 = INT16_MIN;
static uint64_t t95 = 89156LLU;
static int8_t x5362 = 0;
int32_t x5364 = -26333536;


void f0(void) {
	int16_t x57 = INT16_MAX;
	volatile int32_t x58 = 0;
	int32_t x59 = INT32_MIN;
	static uint8_t x60 = 103U;
	volatile int32_t t0 = 126;

	t0 = (x57>>(x58<<(x59<x60)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x253 = 4U;
	volatile int8_t x254 = 0;
	static uint16_t x255 = 0U;
	uint16_t x256 = 16306U;
	static int32_t t1 = -60;

	t1 = (x253>>(x254<<(x255<x256)));

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x257 = 1U;
	uint8_t x258 = 2U;

	t2 = (x257>>(x258<<(x259<x260)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x270 = 2U;
	int32_t x271 = INT32_MIN;
	volatile int32_t t3 = -21615;

	t3 = (x269>>(x270<<(x271<x272)));

	if (t3 != 12295) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x277 = INT64_MAX;
	uint32_t x278 = 2U;
	uint32_t x279 = 622811227U;
	volatile int16_t x280 = INT16_MIN;
	int64_t t4 = -5LL;

	t4 = (x277>>(x278<<(x279<x280)));

	if (t4 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x349 = 17;
	volatile uint8_t x350 = 1U;
	int32_t x351 = INT32_MIN;
	static int64_t x352 = INT64_MIN;
	volatile int32_t t5 = 12;

	t5 = (x349>>(x350<<(x351<x352)));

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x401 = UINT32_MAX;
	static int16_t x402 = 3;
	int8_t x403 = 15;
	int32_t x404 = INT32_MIN;
	static volatile uint32_t t6 = 1718U;

	t6 = (x401>>(x402<<(x403<x404)));

	if (t6 != 536870911U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x493 = 555211491572LLU;
	int8_t x494 = 0;
	uint16_t x495 = UINT16_MAX;
	volatile int8_t x496 = INT8_MIN;
	uint64_t t7 = 1446LLU;

	t7 = (x493>>(x494<<(x495<x496)));

	if (t7 != 555211491572LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x581 = 11LLU;
	uint16_t x582 = 5U;
	uint64_t x583 = UINT64_MAX;
	volatile uint16_t x584 = 612U;

	t8 = (x581>>(x582<<(x583<x584)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x661 = 0U;
	static volatile uint8_t x662 = 25U;
	int16_t x663 = 15;
	volatile int32_t t9 = -56;

	t9 = (x661>>(x662<<(x663<x664)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x726 = 5U;
	uint16_t x727 = 3U;
	volatile uint16_t x728 = 120U;

	t10 = (x725>>(x726<<(x727<x728)));

	if (t10 != 35746742814LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x741 = 468904409U;
	int8_t x742 = 4;
	volatile int16_t x743 = INT16_MAX;
	int16_t x744 = 335;
	uint32_t t11 = 407247U;

	t11 = (x741>>(x742<<(x743<x744)));

	if (t11 != 29306525U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x758 = 1;
	volatile int64_t x759 = 8606853LL;
	static uint32_t x760 = 0U;
	int32_t t12 = 583;

	t12 = (x757>>(x758<<(x759<x760)));

	if (t12 != 374) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x761 = 4U;
	static int16_t x762 = 0;
	volatile int8_t x763 = INT8_MIN;
	int32_t x764 = -1;

	t13 = (x761>>(x762<<(x763<x764)));

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x765 = 2357U;
	int16_t x768 = -11;
	volatile int32_t t14 = 264052643;

	t14 = (x765>>(x766<<(x767<x768)));

	if (t14 != 589) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x852 = 18;
	int32_t t15 = -4309;

	t15 = (x849>>(x850<<(x851<x852)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x925 = 387LLU;
	static uint8_t x926 = 58U;
	static uint16_t x927 = UINT16_MAX;
	int16_t x928 = INT16_MAX;
	volatile uint64_t t16 = 7935813940452156LLU;

	t16 = (x925>>(x926<<(x927<x928)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x945 = 0;
	uint16_t x946 = 2U;
	static uint8_t x947 = UINT8_MAX;
	volatile int8_t x948 = 1;
	int32_t t17 = 134;

	t17 = (x945>>(x946<<(x947<x948)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x973 = 987284818U;
	uint64_t x975 = UINT64_MAX;
	volatile int32_t x976 = -1;
	static volatile uint32_t t18 = 18U;

	t18 = (x973>>(x974<<(x975<x976)));

	if (t18 != 15426325U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x977 = INT16_MAX;
	int8_t x978 = 1;
	volatile uint16_t x979 = UINT16_MAX;
	static int32_t x980 = INT32_MIN;
	int32_t t19 = 0;

	t19 = (x977>>(x978<<(x979<x980)));

	if (t19 != 16383) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1006 = 3;
	volatile uint32_t x1007 = 103590660U;
	int32_t x1008 = -1;
	int32_t t20 = -57654103;

	t20 = (x1005>>(x1006<<(x1007<x1008)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1065 = 2991U;
	static uint16_t x1066 = 0U;
	int16_t x1067 = INT16_MIN;
	int16_t x1068 = INT16_MAX;
	volatile int32_t t21 = -3988377;

	t21 = (x1065>>(x1066<<(x1067<x1068)));

	if (t21 != 2991) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1089 = 4706163770622679LLU;
	static uint16_t x1090 = 2U;
	volatile uint16_t x1092 = UINT16_MAX;
	uint64_t t22 = 10949151614LLU;

	t22 = (x1089>>(x1090<<(x1091<x1092)));

	if (t22 != 1176540942655669LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1137 = 1U;
	static int32_t x1138 = 2;
	static int16_t x1139 = -1;
	int64_t x1140 = INT64_MIN;
	volatile int32_t t23 = 2620156;

	t23 = (x1137>>(x1138<<(x1139<x1140)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1181 = UINT8_MAX;
	volatile int8_t x1182 = 5;
	uint64_t x1184 = 130867LLU;

	t24 = (x1181>>(x1182<<(x1183<x1184)));

	if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1213 = UINT8_MAX;
	uint8_t x1214 = 11U;
	uint64_t x1215 = 99215710054564LLU;
	static int32_t x1216 = 4176597;
	int32_t t25 = 39761;

	t25 = (x1213>>(x1214<<(x1215<x1216)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1217 = 2U;
	int8_t x1218 = 0;
	volatile int8_t x1220 = INT8_MIN;

	t26 = (x1217>>(x1218<<(x1219<x1220)));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1225 = 771253026;
	int32_t t27 = 1;

	t27 = (x1225>>(x1226<<(x1227<x1228)));

	if (t27 != 96406628) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1246 = 28;
	uint16_t x1247 = UINT16_MAX;
	int8_t x1248 = INT8_MIN;
	uint32_t t28 = 1578881U;

	t28 = (x1245>>(x1246<<(x1247<x1248)));

	if (t28 != 15U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1257 = 1;
	int8_t x1258 = 1;
	static volatile uint32_t x1259 = 101056U;
	volatile uint32_t x1260 = 363U;
	volatile int32_t t29 = 59502888;

	t29 = (x1257>>(x1258<<(x1259<x1260)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1277 = UINT16_MAX;
	int32_t x1278 = 0;
	static uint32_t x1279 = 481573502U;
	uint8_t x1280 = 5U;
	volatile int32_t t30 = 0;

	t30 = (x1277>>(x1278<<(x1279<x1280)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1373 = INT16_MAX;
	int8_t x1374 = 0;
	volatile int64_t x1375 = INT64_MIN;
	int32_t t31 = -37623;

	t31 = (x1373>>(x1374<<(x1375<x1376)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1397 = INT8_MAX;
	uint8_t x1398 = 1U;
	int16_t x1399 = 97;
	volatile int8_t x1400 = INT8_MAX;
	int32_t t32 = -254773;

	t32 = (x1397>>(x1398<<(x1399<x1400)));

	if (t32 != 31) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1485 = 44787LLU;
	uint32_t x1487 = 52U;
	uint64_t x1488 = 179111509226182LLU;
	uint64_t t33 = 10LLU;

	t33 = (x1485>>(x1486<<(x1487<x1488)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1497 = 12;
	volatile uint16_t x1498 = 0U;
	int16_t x1499 = INT16_MAX;
	volatile int32_t t34 = -863;

	t34 = (x1497>>(x1498<<(x1499<x1500)));

	if (t34 != 12) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1549 = 123;
	uint8_t x1550 = 12U;
	volatile int16_t x1551 = INT16_MIN;
	volatile uint64_t x1552 = 501LLU;
	volatile int32_t t35 = -2026003;

	t35 = (x1549>>(x1550<<(x1551<x1552)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1582 = 2;
	static int32_t x1583 = -1;
	int32_t x1584 = 1230;
	uint32_t t36 = 118428838U;

	t36 = (x1581>>(x1582<<(x1583<x1584)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1607 = 641226U;
	static volatile int16_t x1608 = -1;

	t37 = (x1605>>(x1606<<(x1607<x1608)));

	if (t37 != 2953457819256LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1625 = 26734439123012444LLU;
	uint16_t x1626 = 16U;
	static volatile uint64_t t38 = 1981818809177550445LLU;

	t38 = (x1625>>(x1626<<(x1627<x1628)));

	if (t38 != 407935167282LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x1665 = UINT64_MAX;
	uint64_t x1666 = 0LLU;
	uint8_t x1667 = 48U;
	int32_t x1668 = INT32_MIN;

	t39 = (x1665>>(x1666<<(x1667<x1668)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x1861 = 3U;
	static int8_t x1862 = 1;
	int32_t x1863 = 890498250;
	uint32_t x1864 = UINT32_MAX;
	int32_t t40 = -28670594;

	t40 = (x1861>>(x1862<<(x1863<x1864)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1897 = UINT64_MAX;
	static int16_t x1898 = 7;
	int16_t x1899 = INT16_MIN;
	volatile uint8_t x1900 = 12U;
	volatile uint64_t t41 = 6554772LLU;

	t41 = (x1897>>(x1898<<(x1899<x1900)));

	if (t41 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x1918 = 9;
	int8_t x1920 = -1;
	int64_t t42 = 55569566872031764LL;

	t42 = (x1917>>(x1918<<(x1919<x1920)));

	if (t42 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1933 = UINT64_MAX;
	uint64_t x1936 = UINT64_MAX;
	volatile uint64_t t43 = 4676LLU;

	t43 = (x1933>>(x1934<<(x1935<x1936)));

	if (t43 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1969 = INT16_MAX;
	static volatile int64_t x1971 = INT64_MAX;
	volatile int8_t x1972 = -1;

	t44 = (x1969>>(x1970<<(x1971<x1972)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2178 = 61;
	volatile int64_t x2179 = -114LL;
	int32_t x2180 = INT32_MIN;
	volatile uint64_t t45 = 81636LLU;

	t45 = (x2177>>(x2178<<(x2179<x2180)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2185 = INT16_MAX;
	volatile int16_t x2186 = 4;
	int16_t x2188 = -1;
	static volatile int32_t t46 = 1;

	t46 = (x2185>>(x2186<<(x2187<x2188)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2209 = UINT64_MAX;
	int16_t x2210 = 1;
	volatile int8_t x2212 = INT8_MAX;
	uint64_t t47 = 78656925461814675LLU;

	t47 = (x2209>>(x2210<<(x2211<x2212)));

	if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2257 = INT8_MAX;
	static uint8_t x2259 = 2U;
	int16_t x2260 = INT16_MIN;

	t48 = (x2257>>(x2258<<(x2259<x2260)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2269 = 23873079LL;
	volatile uint8_t x2270 = 6U;
	int8_t x2271 = INT8_MAX;
	int64_t x2272 = INT64_MIN;
	volatile int64_t t49 = 149082585590706LL;

	t49 = (x2269>>(x2270<<(x2271<x2272)));

	if (t49 != 373016LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2294 = 4U;
	int8_t x2295 = 1;
	int32_t x2296 = 5;
	volatile int32_t t50 = 159;

	t50 = (x2293>>(x2294<<(x2295<x2296)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2321 = 7U;
	volatile uint8_t x2322 = 22U;
	uint32_t x2323 = UINT32_MAX;
	uint8_t x2324 = 22U;
	static uint32_t t51 = 717748U;

	t51 = (x2321>>(x2322<<(x2323<x2324)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2325 = 6033LLU;
	static int16_t x2326 = 2;
	int8_t x2328 = -1;
	uint64_t t52 = 6LLU;

	t52 = (x2325>>(x2326<<(x2327<x2328)));

	if (t52 != 1508LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2445 = 1557U;
	uint8_t x2446 = 0U;
	uint16_t x2447 = 12052U;
	volatile uint8_t x2448 = 2U;
	volatile int32_t t53 = 0;

	t53 = (x2445>>(x2446<<(x2447<x2448)));

	if (t53 != 1557) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2453 = 83392U;
	uint64_t x2454 = 2LLU;
	volatile int8_t x2455 = -1;
	int32_t x2456 = -1;
	volatile uint32_t t54 = 82U;

	t54 = (x2453>>(x2454<<(x2455<x2456)));

	if (t54 != 20848U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2517 = INT8_MAX;
	volatile int16_t x2518 = 17;
	int16_t x2519 = 10;
	int16_t x2520 = INT16_MIN;
	int32_t t55 = 1;

	t55 = (x2517>>(x2518<<(x2519<x2520)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2542 = 1;
	int32_t x2543 = 816986;
	volatile int32_t t56 = 38;

	t56 = (x2541>>(x2542<<(x2543<x2544)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2573 = 491U;
	static uint64_t x2575 = 2067653LLU;
	int8_t x2576 = INT8_MIN;
	static volatile uint32_t t57 = 284306431U;

	t57 = (x2573>>(x2574<<(x2575<x2576)));

	if (t57 != 122U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2578 = 1U;
	int64_t x2579 = INT64_MIN;
	static uint32_t x2580 = 8119815U;

	t58 = (x2577>>(x2578<<(x2579<x2580)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2585 = 1;
	uint16_t x2586 = 3U;
	uint8_t x2587 = 0U;
	int8_t x2588 = INT8_MIN;
	static int32_t t59 = 13;

	t59 = (x2585>>(x2586<<(x2587<x2588)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x2645 = 15829711207734LL;
	int8_t x2646 = 12;
	int64_t x2648 = INT64_MAX;
	int64_t t60 = -654155310180LL;

	t60 = (x2645>>(x2646<<(x2647<x2648)));

	if (t60 != 943524LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2953 = 15539301LLU;
	volatile uint16_t x2954 = 32U;
	int16_t x2956 = 2;

	t61 = (x2953>>(x2954<<(x2955<x2956)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x2969 = INT64_MAX;
	uint32_t x2970 = 0U;
	int32_t x2971 = -2732;
	uint64_t x2972 = 56532LLU;

	t62 = (x2969>>(x2970<<(x2971<x2972)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3009 = INT32_MAX;
	uint8_t x3010 = 0U;
	static int8_t x3012 = -2;
	volatile int32_t t63 = INT32_MAX;

	t63 = (x3009>>(x3010<<(x3011<x3012)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x3058 = 3;
	static int8_t x3060 = 57;
	static volatile int32_t t64 = -94;

	t64 = (x3057>>(x3058<<(x3059<x3060)));

	if (t64 != 31) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3209 = INT32_MAX;
	static int32_t x3210 = 1;
	static volatile int16_t x3211 = INT16_MAX;

	t65 = (x3209>>(x3210<<(x3211<x3212)));

	if (t65 != 1073741823) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3217 = 2U;
	static volatile uint16_t x3218 = 1U;
	volatile uint64_t x3219 = UINT64_MAX;
	volatile uint32_t t66 = 3332U;

	t66 = (x3217>>(x3218<<(x3219<x3220)));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x3253 = 56U;
	int64_t x3255 = INT64_MIN;

	t67 = (x3253>>(x3254<<(x3255<x3256)));

	if (t67 != 14) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x3261 = 3;
	static uint16_t x3263 = 10U;
	int64_t x3264 = INT64_MIN;
	int32_t t68 = -7;

	t68 = (x3261>>(x3262<<(x3263<x3264)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3273 = INT8_MAX;
	uint32_t x3274 = 13U;
	int32_t x3275 = -1;
	int32_t x3276 = -1;
	volatile int32_t t69 = -25164911;

	t69 = (x3273>>(x3274<<(x3275<x3276)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x3409 = 246U;
	volatile int32_t x3411 = -1;

	t70 = (x3409>>(x3410<<(x3411<x3412)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3509 = 2017179248U;
	uint8_t x3510 = 16U;
	int64_t x3512 = INT64_MIN;
	volatile uint32_t t71 = 3U;

	t71 = (x3509>>(x3510<<(x3511<x3512)));

	if (t71 != 30779U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3687 = -3;
	int16_t x3688 = 1;
	volatile int32_t t72 = 5393746;

	t72 = (x3685>>(x3686<<(x3687<x3688)));

	if (t72 != 273) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3745 = INT32_MAX;
	uint8_t x3746 = 3U;
	uint64_t x3747 = UINT64_MAX;
	volatile int32_t t73 = 112;

	t73 = (x3745>>(x3746<<(x3747<x3748)));

	if (t73 != 268435455) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3765 = 33;
	static int8_t x3766 = 1;
	int16_t x3767 = 6;
	static uint8_t x3768 = 5U;
	int32_t t74 = -71814;

	t74 = (x3765>>(x3766<<(x3767<x3768)));

	if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3853 = 34U;
	volatile uint32_t x3854 = 0U;
	static volatile uint32_t x3855 = 429905U;
	int32_t x3856 = INT32_MAX;
	volatile int32_t t75 = -10;

	t75 = (x3853>>(x3854<<(x3855<x3856)));

	if (t75 != 34) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3869 = 842609501LLU;
	static volatile int64_t x3870 = 1LL;
	static int64_t x3871 = INT64_MAX;
	int16_t x3872 = -1;
	uint64_t t76 = 650229964338LLU;

	t76 = (x3869>>(x3870<<(x3871<x3872)));

	if (t76 != 421304750LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3913 = 1;
	static volatile uint32_t x3915 = 5U;
	static volatile int32_t t77 = 658;

	t77 = (x3913>>(x3914<<(x3915<x3916)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x3929 = 13;
	int8_t x3930 = 1;
	static int16_t x3931 = INT16_MIN;
	static uint8_t x3932 = 45U;
	static volatile int32_t t78 = 1157;

	t78 = (x3929>>(x3930<<(x3931<x3932)));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x3950 = 0U;
	int64_t x3952 = INT64_MAX;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x3949>>(x3950<<(x3951<x3952)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3966 = 29U;
	volatile uint32_t x3967 = 17261U;
	int32_t t80 = 1008346;

	t80 = (x3965>>(x3966<<(x3967<x3968)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4089 = 14U;
	static uint32_t x4091 = 99736715U;
	uint16_t x4092 = 0U;
	volatile uint32_t t81 = 298U;

	t81 = (x4089>>(x4090<<(x4091<x4092)));

	if (t81 != 14U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4133 = UINT16_MAX;
	int16_t x4134 = 1;
	int32_t x4136 = -1;

	t82 = (x4133>>(x4134<<(x4135<x4136)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x4197 = 1LL;
	int64_t x4200 = 2904539LL;
	volatile int64_t t83 = -27803915182399LL;

	t83 = (x4197>>(x4198<<(x4199<x4200)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4222 = 12U;
	volatile int64_t x4223 = -531571681303970297LL;
	int8_t x4224 = -12;
	uint64_t t84 = 894118LLU;

	t84 = (x4221>>(x4222<<(x4223<x4224)));

	if (t84 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4265 = 0;
	int8_t x4266 = 0;
	static int16_t x4267 = 22;
	static int32_t x4268 = -382991;
	volatile int32_t t85 = -86082273;

	t85 = (x4265>>(x4266<<(x4267<x4268)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x4297 = 13090U;
	uint32_t x4298 = 3U;
	static int8_t x4299 = 34;
	volatile uint16_t x4300 = 24U;
	static int32_t t86 = 112;

	t86 = (x4297>>(x4298<<(x4299<x4300)));

	if (t86 != 1636) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4305 = UINT8_MAX;
	uint8_t x4306 = 1U;
	int16_t x4307 = INT16_MIN;
	int64_t x4308 = INT64_MAX;
	volatile int32_t t87 = -36318832;

	t87 = (x4305>>(x4306<<(x4307<x4308)));

	if (t87 != 63) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x4466 = 1;
	volatile int64_t x4467 = INT64_MIN;
	static int8_t x4468 = -23;
	volatile int32_t t88 = -3;

	t88 = (x4465>>(x4466<<(x4467<x4468)));

	if (t88 != 9) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x4557 = 2U;
	int8_t x4558 = 1;
	uint8_t x4559 = UINT8_MAX;
	static int16_t x4560 = INT16_MAX;

	t89 = (x4557>>(x4558<<(x4559<x4560)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x4761 = INT32_MAX;
	static int8_t x4762 = 15;
	static int16_t x4763 = 6;
	int8_t x4764 = INT8_MIN;
	volatile int32_t t90 = -127518;

	t90 = (x4761>>(x4762<<(x4763<x4764)));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x4865 = 4U;
	int8_t x4867 = -1;
	volatile uint32_t t91 = 14264U;

	t91 = (x4865>>(x4866<<(x4867<x4868)));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4875 = 1U;
	static int16_t x4876 = INT16_MAX;

	t92 = (x4873>>(x4874<<(x4875<x4876)));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x5037 = 40523861LLU;
	volatile uint64_t t93 = 7248591470333LLU;

	t93 = (x5037>>(x5038<<(x5039<x5040)));

	if (t93 != 20261930LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x5097 = 2U;
	uint64_t x5098 = 0LLU;
	uint64_t x5099 = 461424LLU;
	int32_t x5100 = INT32_MAX;
	volatile int32_t t94 = 0;

	t94 = (x5097>>(x5098<<(x5099<x5100)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x5173 = 132181367368701248LLU;
	uint8_t x5174 = 0U;
	int32_t x5176 = -427195;

	t95 = (x5173>>(x5174<<(x5175<x5176)));

	if (t95 != 132181367368701248LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x5193 = INT64_MAX;
	uint8_t x5194 = 16U;
	int32_t x5195 = INT32_MIN;
	volatile int64_t x5196 = 102873969LL;
	static volatile int64_t t96 = -124896905LL;

	t96 = (x5193>>(x5194<<(x5195<x5196)));

	if (t96 != 2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5229 = 8U;
	static volatile uint8_t x5230 = 30U;
	uint64_t x5231 = UINT64_MAX;
	uint8_t x5232 = 0U;
	static int32_t t97 = -26238;

	t97 = (x5229>>(x5230<<(x5231<x5232)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5265 = 11849U;
	uint32_t x5266 = 0U;
	int16_t x5267 = INT16_MAX;
	static int8_t x5268 = INT8_MAX;
	volatile uint32_t t98 = 2048090777U;

	t98 = (x5265>>(x5266<<(x5267<x5268)));

	if (t98 != 11849U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5361 = INT8_MAX;
	int64_t x5363 = -1LL;
	volatile int32_t t99 = 8;

	t99 = (x5361>>(x5362<<(x5363<x5364)));

	if (t99 != 127) { NG(); } else { ; }
	
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

