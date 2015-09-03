#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
volatile int64_t x3 = 1121096098785300LL;
uint64_t x77 = 3049561LLU;
uint64_t t1 = 10554859583723LLU;
int8_t x84 = 2;
int32_t t2 = 2755;
volatile uint8_t x222 = UINT8_MAX;
static volatile uint16_t x233 = 10667U;
int8_t x234 = INT8_MIN;
int8_t x421 = INT8_MAX;
static volatile uint8_t x424 = 37U;
static uint64_t x474 = 1008181840814705870LLU;
int16_t x485 = INT16_MIN;
volatile int64_t x486 = 662626LL;
volatile int32_t t10 = -2125;
uint64_t t13 = 9373961LLU;
int32_t x634 = INT32_MIN;
volatile int16_t x635 = INT16_MAX;
volatile uint8_t x636 = 1U;
uint16_t x710 = UINT16_MAX;
static int16_t x715 = INT16_MAX;
uint16_t x773 = 12788U;
static int8_t x774 = 11;
volatile int32_t t19 = -498;
volatile int32_t x847 = INT32_MAX;
uint16_t x848 = 1U;
uint8_t x928 = 3U;
int32_t x989 = INT32_MAX;
int32_t x1137 = INT32_MAX;
int16_t x1139 = INT16_MAX;
static uint8_t x1140 = 6U;
volatile uint8_t x1296 = 1U;
uint32_t x1307 = 2713487U;
static int32_t x1376 = 0;
int64_t x1609 = -1LL;
static volatile uint8_t x1611 = 13U;
int32_t t34 = -32127976;
static uint64_t x1673 = UINT64_MAX;
volatile uint64_t t35 = UINT64_MAX;
uint8_t x1888 = 38U;
int32_t t37 = -244;
uint8_t x1956 = 15U;
uint8_t x2031 = 0U;
int8_t x2085 = INT8_MIN;
uint64_t x2087 = 23LLU;
static int32_t x2198 = -4102;
int64_t x2199 = INT64_MAX;
uint8_t x2209 = 0U;
volatile uint64_t x2247 = 14353913LLU;
int64_t t46 = -43466142593760LL;
volatile int8_t x2338 = -1;
static uint8_t x2443 = UINT8_MAX;
static volatile uint64_t x2638 = 12LLU;
uint64_t x2796 = 4LLU;
int8_t x2848 = 7;
static int8_t x2949 = INT8_MIN;
int32_t x2950 = -1835;
volatile int32_t t59 = 29191;
static int8_t x2961 = 7;
volatile uint64_t x2966 = 76LLU;
int64_t x3057 = INT64_MIN;
volatile int64_t x3058 = -1813LL;
uint8_t x3060 = 1U;
static volatile int32_t x3061 = -2;
uint32_t x3062 = 11894933U;
volatile uint32_t t66 = 5780929U;
int64_t x3331 = 7611LL;
uint16_t x3332 = 4U;
uint8_t x3428 = 1U;
static int16_t x3465 = -22;
int32_t t74 = 1;
volatile int32_t t75 = 664;
volatile int8_t x3669 = INT8_MIN;
uint64_t x3727 = 257111LLU;
uint64_t x3786 = 415LLU;
int32_t t80 = 20728354;
uint8_t x3955 = 70U;
int8_t x3969 = INT8_MIN;
static uint32_t x3971 = 14429742U;
int32_t x4314 = INT32_MIN;
int32_t x4421 = 10907401;
static volatile int16_t x4462 = 2940;
uint32_t x4467 = 8089217U;
static uint8_t x4468 = 14U;
static int32_t t89 = -297876071;
int32_t x4478 = INT32_MAX;
int64_t x4539 = 198LL;
volatile int8_t x4540 = 0;
static int16_t x4889 = INT16_MAX;
static int8_t x4892 = 0;
uint64_t x4929 = 21518867495LLU;
uint64_t x4931 = 60LLU;
int32_t x4966 = 0;


void f0(void) {
	int64_t x2 = -274714802089LL;
	int8_t x4 = 0;
	volatile int32_t t0 = 598;

	t0 = (x1^(x2<=(x3>>x4)));

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x78 = 3089U;
	int32_t x79 = INT32_MAX;
	uint8_t x80 = 2U;

	t1 = (x77^(x78<=(x79>>x80)));

	if (t1 != 3049560LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x81 = 43U;
	int8_t x82 = -1;
	volatile uint32_t x83 = 1363793943U;

	t2 = (x81^(x82<=(x83>>x84)));

	if (t2 != 43) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x85 = INT32_MIN;
	volatile int8_t x86 = -47;
	int16_t x87 = INT16_MAX;
	static uint8_t x88 = 26U;
	int32_t t3 = -2;

	t3 = (x85^(x86<=(x87>>x88)));

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x221 = INT16_MIN;
	uint32_t x223 = 9971U;
	int8_t x224 = 0;
	int32_t t4 = -65961507;

	t4 = (x221^(x222<=(x223>>x224)));

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x235 = 145540;
	uint8_t x236 = 14U;
	volatile int32_t t5 = -443835;

	t5 = (x233^(x234<=(x235>>x236)));

	if (t5 != 10666) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x249 = 63606432653123LLU;
	uint16_t x250 = UINT16_MAX;
	uint32_t x251 = UINT32_MAX;
	uint8_t x252 = 6U;
	uint64_t t6 = 107012528873069735LLU;

	t6 = (x249^(x250<=(x251>>x252)));

	if (t6 != 63606432653122LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	uint8_t x320 = 1U;
	volatile int32_t t7 = 1039277601;

	t7 = (x317^(x318<=(x319>>x320)));

	if (t7 != 2147483646) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x422 = 252U;
	volatile uint64_t x423 = 404LLU;
	int32_t t8 = -3;

	t8 = (x421^(x422<=(x423>>x424)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x473 = -1LL;
	uint32_t x475 = UINT32_MAX;
	uint8_t x476 = 15U;
	int64_t t9 = -243218LL;

	t9 = (x473^(x474<=(x475>>x476)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x487 = 17440U;
	int16_t x488 = 19;

	t10 = (x485^(x486<=(x487>>x488)));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x529 = 10;
	volatile uint32_t x530 = 6262U;
	uint32_t x531 = UINT32_MAX;
	uint8_t x532 = 8U;
	int32_t t11 = 8036;

	t11 = (x529^(x530<=(x531>>x532)));

	if (t11 != 11) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x581 = -1794;
	int64_t x582 = -29760518047LL;
	volatile int32_t x583 = 554959363;
	int8_t x584 = 5;
	int32_t t12 = -80431;

	t12 = (x581^(x582<=(x583>>x584)));

	if (t12 != -1793) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x597 = 36131115177247343LLU;
	int8_t x598 = INT8_MIN;
	volatile uint32_t x599 = 113U;
	int8_t x600 = 29;

	t13 = (x597^(x598<=(x599>>x600)));

	if (t13 != 36131115177247343LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x633 = 0;
	volatile int32_t t14 = 2;

	t14 = (x633^(x634<=(x635>>x636)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x709 = 52U;
	uint64_t x711 = 26LLU;
	int16_t x712 = 1;
	static int32_t t15 = 336204;

	t15 = (x709^(x710<=(x711>>x712)));

	if (t15 != 52) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x713 = INT64_MAX;
	volatile int32_t x714 = INT32_MIN;
	int8_t x716 = 5;
	volatile int64_t t16 = 29905LL;

	t16 = (x713^(x714<=(x715>>x716)));

	if (t16 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x775 = 7U;
	uint8_t x776 = 28U;
	int32_t t17 = -2014;

	t17 = (x773^(x774<=(x775>>x776)));

	if (t17 != 12788) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x821 = 330;
	int64_t x822 = -1LL;
	uint8_t x823 = UINT8_MAX;
	uint8_t x824 = 2U;
	static volatile int32_t t18 = 2;

	t18 = (x821^(x822<=(x823>>x824)));

	if (t18 != 331) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x841 = -1;
	int16_t x842 = INT16_MAX;
	uint16_t x843 = UINT16_MAX;
	uint8_t x844 = 26U;

	t19 = (x841^(x842<=(x843>>x844)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x845 = -1LL;
	volatile uint16_t x846 = 831U;
	volatile int64_t t20 = 237LL;

	t20 = (x845^(x846<=(x847>>x848)));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x857 = INT8_MIN;
	int16_t x858 = INT16_MIN;
	volatile int32_t x859 = INT32_MAX;
	uint8_t x860 = 0U;
	volatile int32_t t21 = 7;

	t21 = (x857^(x858<=(x859>>x860)));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x877 = INT64_MIN;
	static int64_t x878 = -1LL;
	uint32_t x879 = 491160U;
	int8_t x880 = 0;
	int64_t t22 = 1LL;

	t22 = (x877^(x878<=(x879>>x880)));

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x925 = UINT32_MAX;
	int16_t x926 = INT16_MIN;
	static int16_t x927 = INT16_MAX;
	uint32_t t23 = 10571U;

	t23 = (x925^(x926<=(x927>>x928)));

	if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x981 = 4;
	uint64_t x982 = 267786104LLU;
	volatile uint64_t x983 = UINT64_MAX;
	volatile uint32_t x984 = 32U;
	int32_t t24 = 3;

	t24 = (x981^(x982<=(x983>>x984)));

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x990 = INT32_MIN;
	static int8_t x991 = INT8_MAX;
	int8_t x992 = 15;
	static int32_t t25 = -1726;

	t25 = (x989^(x990<=(x991>>x992)));

	if (t25 != 2147483646) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1001 = INT8_MIN;
	int32_t x1002 = INT32_MIN;
	static uint8_t x1003 = 125U;
	uint16_t x1004 = 4U;
	int32_t t26 = -71626;

	t26 = (x1001^(x1002<=(x1003>>x1004)));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1041 = -9;
	int64_t x1042 = 341048457LL;
	int64_t x1043 = 99LL;
	static int16_t x1044 = 0;
	int32_t t27 = 195;

	t27 = (x1041^(x1042<=(x1043>>x1044)));

	if (t27 != -9) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1138 = 1;
	volatile int32_t t28 = 4997198;

	t28 = (x1137^(x1138<=(x1139>>x1140)));

	if (t28 != 2147483646) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1293 = INT8_MAX;
	int16_t x1294 = INT16_MIN;
	uint16_t x1295 = 175U;
	volatile int32_t t29 = -6416318;

	t29 = (x1293^(x1294<=(x1295>>x1296)));

	if (t29 != 126) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1305 = INT16_MAX;
	int64_t x1306 = 3LL;
	uint8_t x1308 = 9U;
	volatile int32_t t30 = 129335119;

	t30 = (x1305^(x1306<=(x1307>>x1308)));

	if (t30 != 32766) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1373 = INT16_MIN;
	uint32_t x1374 = 8202923U;
	uint16_t x1375 = 435U;
	static volatile int32_t t31 = 931901395;

	t31 = (x1373^(x1374<=(x1375>>x1376)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1489 = 1102869194764LL;
	uint32_t x1490 = 5U;
	volatile int8_t x1491 = INT8_MAX;
	volatile uint8_t x1492 = 0U;
	int64_t t32 = 5647725725LL;

	t32 = (x1489^(x1490<=(x1491>>x1492)));

	if (t32 != 1102869194765LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1610 = -11;
	int8_t x1612 = 0;
	volatile int64_t t33 = 15164330933579807LL;

	t33 = (x1609^(x1610<=(x1611>>x1612)));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1669 = -25394516;
	static int16_t x1670 = INT16_MIN;
	uint16_t x1671 = 3U;
	int32_t x1672 = 24;

	t34 = (x1669^(x1670<=(x1671>>x1672)));

	if (t34 != -25394515) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1674 = 30135938LL;
	uint16_t x1675 = 5U;
	uint16_t x1676 = 7U;

	t35 = (x1673^(x1674<=(x1675>>x1676)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1813 = 0;
	static volatile int64_t x1814 = INT64_MAX;
	uint16_t x1815 = UINT16_MAX;
	uint32_t x1816 = 8U;
	int32_t t36 = 5154900;

	t36 = (x1813^(x1814<=(x1815>>x1816)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1885 = INT8_MAX;
	int64_t x1886 = INT64_MIN;
	static volatile uint64_t x1887 = 1384182248642LLU;

	t37 = (x1885^(x1886<=(x1887>>x1888)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1953 = 1059831389LLU;
	uint64_t x1954 = UINT64_MAX;
	int16_t x1955 = INT16_MAX;
	static volatile uint64_t t38 = 14573208558998365LLU;

	t38 = (x1953^(x1954<=(x1955>>x1956)));

	if (t38 != 1059831389LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1981 = -417183056LL;
	int32_t x1982 = -1;
	uint16_t x1983 = 29793U;
	int8_t x1984 = 3;
	volatile int64_t t39 = 12237140186LL;

	t39 = (x1981^(x1982<=(x1983>>x1984)));

	if (t39 != -417183055LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1989 = INT8_MAX;
	static int64_t x1990 = INT64_MIN;
	int64_t x1991 = INT64_MAX;
	uint8_t x1992 = 44U;
	int32_t t40 = -455645;

	t40 = (x1989^(x1990<=(x1991>>x1992)));

	if (t40 != 126) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2029 = UINT8_MAX;
	uint32_t x2030 = UINT32_MAX;
	volatile uint16_t x2032 = 0U;
	volatile int32_t t41 = -3;

	t41 = (x2029^(x2030<=(x2031>>x2032)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2081 = 130U;
	uint8_t x2082 = 1U;
	volatile int16_t x2083 = INT16_MAX;
	uint8_t x2084 = 8U;
	int32_t t42 = -176613822;

	t42 = (x2081^(x2082<=(x2083>>x2084)));

	if (t42 != 131) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2086 = 796U;
	static uint64_t x2088 = 5LLU;
	static volatile int32_t t43 = 61032915;

	t43 = (x2085^(x2086<=(x2087>>x2088)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x2197 = 884487719LLU;
	volatile int32_t x2200 = 1;
	static volatile uint64_t t44 = 13LLU;

	t44 = (x2197^(x2198<=(x2199>>x2200)));

	if (t44 != 884487718LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2210 = 164LLU;
	volatile uint16_t x2211 = 119U;
	uint8_t x2212 = 30U;
	volatile int32_t t45 = 26;

	t45 = (x2209^(x2210<=(x2211>>x2212)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2245 = -4314146051054459076LL;
	int8_t x2246 = INT8_MIN;
	static int8_t x2248 = 2;

	t46 = (x2245^(x2246<=(x2247>>x2248)));

	if (t46 != -4314146051054459076LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2277 = -1LL;
	uint8_t x2278 = UINT8_MAX;
	static int64_t x2279 = 103803031LL;
	uint8_t x2280 = 3U;
	volatile int64_t t47 = 15190413902484428LL;

	t47 = (x2277^(x2278<=(x2279>>x2280)));

	if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2281 = -1;
	int16_t x2282 = INT16_MIN;
	uint16_t x2283 = 1U;
	volatile int64_t x2284 = 6LL;
	static volatile int32_t t48 = 5;

	t48 = (x2281^(x2282<=(x2283>>x2284)));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x2337 = 27266419931909LLU;
	uint64_t x2339 = UINT64_MAX;
	int8_t x2340 = 0;
	volatile uint64_t t49 = 511906843608073171LLU;

	t49 = (x2337^(x2338<=(x2339>>x2340)));

	if (t49 != 27266419931908LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2429 = 4044U;
	static volatile int64_t x2430 = -1LL;
	static uint64_t x2431 = 5628908932257626LLU;
	int8_t x2432 = 0;
	int32_t t50 = -1343517;

	t50 = (x2429^(x2430<=(x2431>>x2432)));

	if (t50 != 4044) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2441 = 495109557801407442LL;
	static int16_t x2442 = -1;
	volatile int16_t x2444 = 2;
	int64_t t51 = -525LL;

	t51 = (x2441^(x2442<=(x2443>>x2444)));

	if (t51 != 495109557801407443LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2457 = 465526U;
	uint8_t x2458 = UINT8_MAX;
	int64_t x2459 = INT64_MAX;
	uint8_t x2460 = 1U;
	volatile uint32_t t52 = 2259681U;

	t52 = (x2457^(x2458<=(x2459>>x2460)));

	if (t52 != 465527U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2637 = -1;
	static volatile int64_t x2639 = 1798990313465LL;
	uint32_t x2640 = 1U;
	int32_t t53 = -40;

	t53 = (x2637^(x2638<=(x2639>>x2640)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x2657 = UINT32_MAX;
	static volatile uint16_t x2658 = 162U;
	static volatile uint8_t x2659 = 6U;
	uint8_t x2660 = 0U;
	static uint32_t t54 = UINT32_MAX;

	t54 = (x2657^(x2658<=(x2659>>x2660)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2773 = -1;
	int64_t x2774 = 278497434533LL;
	uint32_t x2775 = 10928616U;
	int16_t x2776 = 2;
	int32_t t55 = -31;

	t55 = (x2773^(x2774<=(x2775>>x2776)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x2793 = 5579446272143LLU;
	int16_t x2794 = INT16_MAX;
	int32_t x2795 = 449108798;
	uint64_t t56 = 3212071611LLU;

	t56 = (x2793^(x2794<=(x2795>>x2796)));

	if (t56 != 5579446272142LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2845 = 295U;
	uint8_t x2846 = 116U;
	uint64_t x2847 = UINT64_MAX;
	volatile int32_t t57 = 1;

	t57 = (x2845^(x2846<=(x2847>>x2848)));

	if (t57 != 294) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2881 = INT16_MIN;
	static int16_t x2882 = -1;
	int16_t x2883 = 8;
	int16_t x2884 = 0;
	int32_t t58 = -544;

	t58 = (x2881^(x2882<=(x2883>>x2884)));

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2951 = 599977467LL;
	int16_t x2952 = 1;

	t59 = (x2949^(x2950<=(x2951>>x2952)));

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x2962 = INT64_MIN;
	int8_t x2963 = 12;
	uint64_t x2964 = 1LLU;
	int32_t t60 = 15;

	t60 = (x2961^(x2962<=(x2963>>x2964)));

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x2965 = 261LLU;
	int8_t x2967 = INT8_MAX;
	uint8_t x2968 = 1U;
	uint64_t t61 = 322360876066313LLU;

	t61 = (x2965^(x2966<=(x2967>>x2968)));

	if (t61 != 261LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3037 = INT16_MIN;
	int32_t x3038 = -1;
	static uint32_t x3039 = 31824U;
	uint8_t x3040 = 1U;
	static volatile int32_t t62 = -7135;

	t62 = (x3037^(x3038<=(x3039>>x3040)));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3059 = UINT64_MAX;
	int64_t t63 = INT64_MIN;

	t63 = (x3057^(x3058<=(x3059>>x3060)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3063 = 1U;
	uint16_t x3064 = 23U;
	volatile int32_t t64 = 42508145;

	t64 = (x3061^(x3062<=(x3063>>x3064)));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x3065 = 27U;
	static int8_t x3066 = INT8_MIN;
	uint8_t x3067 = 0U;
	uint8_t x3068 = 5U;
	int32_t t65 = 4055483;

	t65 = (x3065^(x3066<=(x3067>>x3068)));

	if (t65 != 26) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3073 = 236908U;
	static uint16_t x3074 = 1412U;
	static int32_t x3075 = 681;
	int8_t x3076 = 1;

	t66 = (x3073^(x3074<=(x3075>>x3076)));

	if (t66 != 236908U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3097 = -339492;
	uint64_t x3098 = 4530921074480LLU;
	int8_t x3099 = 4;
	int16_t x3100 = 0;
	int32_t t67 = 901352;

	t67 = (x3097^(x3098<=(x3099>>x3100)));

	if (t67 != -339492) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3145 = INT16_MAX;
	int64_t x3146 = INT64_MIN;
	uint8_t x3147 = 62U;
	uint8_t x3148 = 0U;
	int32_t t68 = -99043;

	t68 = (x3145^(x3146<=(x3147>>x3148)));

	if (t68 != 32766) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x3209 = 7809428610484253038LLU;
	static volatile int16_t x3210 = 400;
	uint32_t x3211 = UINT32_MAX;
	uint16_t x3212 = 1U;
	volatile uint64_t t69 = 193480LLU;

	t69 = (x3209^(x3210<=(x3211>>x3212)));

	if (t69 != 7809428610484253039LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3285 = INT32_MIN;
	int64_t x3286 = -3852990192LL;
	int16_t x3287 = 253;
	volatile uint8_t x3288 = 26U;
	static volatile int32_t t70 = 0;

	t70 = (x3285^(x3286<=(x3287>>x3288)));

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3329 = INT64_MAX;
	int16_t x3330 = -1;
	static int64_t t71 = -14986490201983689LL;

	t71 = (x3329^(x3330<=(x3331>>x3332)));

	if (t71 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x3393 = UINT32_MAX;
	static int8_t x3394 = INT8_MIN;
	static int8_t x3395 = 43;
	static int8_t x3396 = 3;
	uint32_t t72 = 33U;

	t72 = (x3393^(x3394<=(x3395>>x3396)));

	if (t72 != 4294967294U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3425 = INT64_MIN;
	uint32_t x3426 = UINT32_MAX;
	int16_t x3427 = INT16_MAX;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x3425^(x3426<=(x3427>>x3428)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3466 = 0;
	uint16_t x3467 = 35U;
	static int64_t x3468 = 2LL;

	t74 = (x3465^(x3466<=(x3467>>x3468)));

	if (t74 != -21) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3593 = -3;
	int64_t x3594 = INT64_MAX;
	volatile int16_t x3595 = INT16_MAX;
	volatile uint64_t x3596 = 12LLU;

	t75 = (x3593^(x3594<=(x3595>>x3596)));

	if (t75 != -3) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3629 = -1LL;
	uint8_t x3630 = UINT8_MAX;
	uint16_t x3631 = 3956U;
	uint16_t x3632 = 6U;
	int64_t t76 = 101LL;

	t76 = (x3629^(x3630<=(x3631>>x3632)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x3670 = INT32_MIN;
	uint32_t x3671 = UINT32_MAX;
	uint8_t x3672 = 15U;
	volatile int32_t t77 = -924518623;

	t77 = (x3669^(x3670<=(x3671>>x3672)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3725 = -1;
	int32_t x3726 = INT32_MAX;
	static uint8_t x3728 = 17U;
	static volatile int32_t t78 = 109052822;

	t78 = (x3725^(x3726<=(x3727>>x3728)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3765 = 23U;
	int32_t x3766 = INT32_MIN;
	volatile uint16_t x3767 = UINT16_MAX;
	volatile int8_t x3768 = 7;
	static int32_t t79 = -408429;

	t79 = (x3765^(x3766<=(x3767>>x3768)));

	if (t79 != 22) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3785 = -1;
	uint8_t x3787 = 39U;
	uint8_t x3788 = 23U;

	t80 = (x3785^(x3786<=(x3787>>x3788)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3953 = INT32_MAX;
	int32_t x3954 = INT32_MAX;
	int8_t x3956 = 0;
	int32_t t81 = INT32_MAX;

	t81 = (x3953^(x3954<=(x3955>>x3956)));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x3970 = 227U;
	int8_t x3972 = 29;
	int32_t t82 = 52769215;

	t82 = (x3969^(x3970<=(x3971>>x3972)));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4053 = -1LL;
	int16_t x4054 = -3;
	uint8_t x4055 = UINT8_MAX;
	int64_t x4056 = 0LL;
	volatile int64_t t83 = -22632436LL;

	t83 = (x4053^(x4054<=(x4055>>x4056)));

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4141 = 7;
	volatile uint8_t x4142 = UINT8_MAX;
	uint32_t x4143 = UINT32_MAX;
	static int16_t x4144 = 1;
	static volatile int32_t t84 = -111;

	t84 = (x4141^(x4142<=(x4143>>x4144)));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4189 = 4U;
	static int32_t x4190 = INT32_MIN;
	uint8_t x4191 = 118U;
	int64_t x4192 = 2LL;
	int32_t t85 = 4244;

	t85 = (x4189^(x4190<=(x4191>>x4192)));

	if (t85 != 5) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x4313 = -1;
	static volatile int32_t x4315 = 1860636;
	static uint16_t x4316 = 6U;
	int32_t t86 = 35119057;

	t86 = (x4313^(x4314<=(x4315>>x4316)));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x4422 = 6U;
	uint64_t x4423 = UINT64_MAX;
	int16_t x4424 = 58;
	volatile int32_t t87 = 1;

	t87 = (x4421^(x4422<=(x4423>>x4424)));

	if (t87 != 10907400) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4461 = INT32_MAX;
	uint16_t x4463 = 4U;
	int32_t x4464 = 8;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x4461^(x4462<=(x4463>>x4464)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x4465 = 1055;
	uint8_t x4466 = 5U;

	t89 = (x4465^(x4466<=(x4467>>x4468)));

	if (t89 != 1054) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4477 = INT16_MIN;
	uint8_t x4479 = 2U;
	int8_t x4480 = 27;
	volatile int32_t t90 = 283;

	t90 = (x4477^(x4478<=(x4479>>x4480)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x4537 = 12065661U;
	uint64_t x4538 = UINT64_MAX;
	uint32_t t91 = 20459579U;

	t91 = (x4537^(x4538<=(x4539>>x4540)));

	if (t91 != 12065661U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4653 = 0U;
	int64_t x4654 = 2857973LL;
	uint8_t x4655 = 2U;
	uint16_t x4656 = 1U;
	volatile int32_t t92 = 53766303;

	t92 = (x4653^(x4654<=(x4655>>x4656)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4669 = -1053236556802349242LL;
	int16_t x4670 = INT16_MAX;
	static int8_t x4671 = INT8_MAX;
	int8_t x4672 = 15;
	int64_t t93 = 491741779698LL;

	t93 = (x4669^(x4670<=(x4671>>x4672)));

	if (t93 != -1053236556802349242LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x4757 = 78601607U;
	uint16_t x4758 = 9243U;
	int64_t x4759 = INT64_MAX;
	uint8_t x4760 = 22U;
	volatile uint32_t t94 = 0U;

	t94 = (x4757^(x4758<=(x4759>>x4760)));

	if (t94 != 78601606U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4805 = -1;
	int64_t x4806 = INT64_MAX;
	volatile int64_t x4807 = INT64_MAX;
	int32_t x4808 = 0;
	int32_t t95 = 3377241;

	t95 = (x4805^(x4806<=(x4807>>x4808)));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x4833 = INT64_MIN;
	volatile int16_t x4834 = INT16_MIN;
	int32_t x4835 = INT32_MAX;
	int8_t x4836 = 1;
	static volatile int64_t t96 = -51168LL;

	t96 = (x4833^(x4834<=(x4835>>x4836)));

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x4890 = 1837U;
	uint64_t x4891 = 2212859LLU;
	volatile int32_t t97 = -387578;

	t97 = (x4889^(x4890<=(x4891>>x4892)));

	if (t97 != 32766) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4930 = 2U;
	uint32_t x4932 = 5U;
	volatile uint64_t t98 = 6237616LLU;

	t98 = (x4929^(x4930<=(x4931>>x4932)));

	if (t98 != 21518867495LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4965 = INT8_MAX;
	volatile int32_t x4967 = INT32_MAX;
	volatile int16_t x4968 = 1;
	volatile int32_t t99 = 499714;

	t99 = (x4965^(x4966<=(x4967>>x4968)));

	if (t99 != 126) { NG(); } else { ; }
	
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

