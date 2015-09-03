#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x314 = INT16_MIN;
uint32_t x319 = 3U;
uint8_t x320 = 3U;
int64_t x479 = INT64_MIN;
int64_t x531 = INT64_MIN;
uint16_t x532 = 0U;
uint64_t t6 = 1767814LLU;
uint8_t x561 = UINT8_MAX;
int8_t x639 = -3;
uint64_t t9 = 16079153LLU;
int32_t x649 = 173741046;
static uint16_t x651 = 0U;
volatile int64_t x659 = -19524LL;
int8_t x660 = 0;
int32_t x691 = INT32_MIN;
static int8_t x740 = -7;
volatile int32_t t14 = 526;
static int32_t x789 = 1;
volatile uint64_t x803 = UINT64_MAX;
volatile int32_t x1044 = INT32_MIN;
static uint8_t x1059 = 0U;
int64_t x1267 = 0LL;
static volatile uint32_t x1331 = UINT32_MAX;
static int32_t x1332 = -1;
static volatile int64_t t26 = -1211408403597323LL;
int8_t x1414 = -1;
int8_t x1452 = 0;
volatile uint32_t t28 = 14530510U;
int32_t x1493 = 51693;
int16_t x1561 = INT16_MAX;
static int16_t x1562 = -1;
uint64_t x1564 = UINT64_MAX;
volatile int32_t x1571 = INT32_MIN;
volatile int32_t x1675 = 0;
int64_t t33 = 161LL;
int64_t x1983 = INT64_MIN;
int8_t x2038 = INT8_MIN;
int32_t x2039 = -1;
int32_t t39 = -2130768;
volatile int64_t t41 = -15729802627392469LL;
uint16_t x2325 = 8717U;
int64_t x2409 = 33312159LL;
int8_t x2519 = -1;
static int64_t t47 = 877162157754619714LL;
uint64_t t50 = 6776515LLU;
int8_t x2777 = INT8_MIN;
int32_t x2778 = -1;
static int16_t x2860 = 0;
uint16_t x2877 = 3U;
uint16_t x2880 = 0U;
volatile int64_t x2965 = INT64_MAX;
int16_t x2967 = -1;
int32_t x2968 = -1;
static volatile int64_t t55 = 61187381276117018LL;
uint16_t x3027 = 1012U;
uint16_t x3101 = 79U;
uint64_t x3117 = 186377233982614637LLU;
int8_t x3347 = INT8_MIN;
int64_t x3355 = -1LL;
static int64_t x3375 = -1LL;
static volatile int8_t x3376 = 0;
uint64_t x3454 = UINT64_MAX;
uint16_t x3456 = 3U;
int32_t x3461 = INT32_MAX;
int32_t x3562 = -1;
int32_t x3578 = -1;
uint8_t x3673 = UINT8_MAX;
int32_t x3679 = 0;
static int16_t x3870 = -1;
int64_t x3885 = 1204445LL;
int16_t x3976 = 4;
uint8_t x4149 = 7U;
int32_t x4498 = 1;
volatile int32_t x4531 = INT32_MIN;
uint8_t x4532 = 0U;
uint32_t x4607 = 4U;
uint64_t t85 = 763432LLU;
volatile int8_t x4650 = 2;
volatile int64_t t88 = -2LL;
int32_t x4955 = INT32_MIN;
volatile uint64_t t89 = 1248LLU;
uint8_t x5030 = 4U;
int16_t x5193 = INT16_MAX;
uint16_t x5196 = 1U;
int8_t x5420 = -1;
volatile uint64_t t94 = 1623224777LLU;
static int32_t x5513 = INT32_MIN;
int32_t x5516 = -1;
int64_t x5561 = INT64_MIN;
volatile int32_t x5654 = -1;
volatile int16_t x5656 = -1;


void f0(void) {
	static int8_t x81 = INT8_MIN;
	volatile uint32_t x82 = UINT32_MAX;
	int8_t x83 = -4;
	static int16_t x84 = -1;
	volatile uint32_t t0 = 86U;

	t0 = ((x81%x82)<<(x83*x84));

	if (t0 != 4294965248U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x165 = 130LLU;
	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	uint64_t x168 = 37176503562LLU;
	static volatile uint64_t t1 = 2019315LLU;

	t1 = ((x165%x166)<<(x167*x168));

	if (t1 != 130LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x313 = INT32_MIN;
	volatile int8_t x315 = INT8_MIN;
	int8_t x316 = 0;
	int32_t t2 = 623609;

	t2 = ((x313%x314)<<(x315*x316));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MIN;
	uint32_t t3 = 33808825U;

	t3 = ((x317%x318)<<(x319*x320));

	if (t3 != 4294966784U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = -29;
	int32_t t4 = -51;

	t4 = ((x377%x378)<<(x379*x380));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x477 = 2549U;
	int32_t x478 = -1;
	volatile uint64_t x480 = 2154874LLU;
	volatile int32_t t5 = 365;

	t5 = ((x477%x478)<<(x479*x480));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x529 = UINT64_MAX;
	static int64_t x530 = 88LL;

	t6 = ((x529%x530)<<(x531*x532));

	if (t6 != 15LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x557 = INT16_MAX;
	uint32_t x558 = 63U;
	uint8_t x559 = 0U;
	uint8_t x560 = 2U;
	uint32_t t7 = 27U;

	t7 = ((x557%x558)<<(x559*x560));

	if (t7 != 7U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x562 = INT8_MAX;
	uint64_t x563 = UINT64_MAX;
	int16_t x564 = -1;
	volatile int32_t t8 = -4030;

	t8 = ((x561%x562)<<(x563*x564));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x637 = 139630LLU;
	int32_t x638 = 3776554;
	uint32_t x640 = UINT32_MAX;

	t9 = ((x637%x638)<<(x639*x640));

	if (t9 != 1117040LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x650 = 2U;
	int16_t x652 = INT16_MAX;
	int32_t t10 = -123788;

	t10 = ((x649%x650)<<(x651*x652));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x657 = 248942093LL;
	uint64_t x658 = 1LLU;
	volatile uint64_t t11 = 24LLU;

	t11 = ((x657%x658)<<(x659*x660));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x661 = 458753387778358346LLU;
	volatile int64_t x662 = INT64_MIN;
	volatile uint8_t x663 = 0U;
	int64_t x664 = 16345LL;
	uint64_t t12 = 168LLU;

	t12 = ((x661%x662)<<(x663*x664));

	if (t12 != 458753387778358346LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x689 = 144937634LLU;
	static int16_t x690 = INT16_MIN;
	uint8_t x692 = 0U;
	volatile uint64_t t13 = 19LLU;

	t13 = ((x689%x690)<<(x691*x692));

	if (t13 != 144937634LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x737 = 100109276;
	static uint8_t x738 = 56U;
	volatile int8_t x739 = -1;

	t14 = ((x737%x738)<<(x739*x740));

	if (t14 != 4608) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x790 = 136919010324017LLU;
	volatile uint64_t x791 = 3870795166852743LLU;
	int16_t x792 = 0;
	uint64_t t15 = 344LLU;

	t15 = ((x789%x790)<<(x791*x792));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x801 = UINT64_MAX;
	int16_t x802 = -1;
	static int64_t x804 = -53LL;
	volatile uint64_t t16 = 196LLU;

	t16 = ((x801%x802)<<(x803*x804));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x817 = UINT32_MAX;
	uint32_t x818 = 49192333U;
	static int8_t x819 = 22;
	int16_t x820 = 1;
	uint32_t t17 = 1813989U;

	t17 = ((x817%x818)<<(x819*x820));

	if (t17 != 1157627904U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1017 = INT64_MIN;
	static int32_t x1018 = -1;
	int8_t x1019 = 0;
	uint8_t x1020 = 15U;
	int64_t t18 = 784812059449603760LL;

	t18 = ((x1017%x1018)<<(x1019*x1020));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1041 = 0;
	int8_t x1042 = INT8_MAX;
	uint64_t x1043 = 0LLU;
	int32_t t19 = -1;

	t19 = ((x1041%x1042)<<(x1043*x1044));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1045 = INT64_MIN;
	volatile int16_t x1046 = -1;
	int16_t x1047 = -1;
	uint32_t x1048 = UINT32_MAX;
	volatile int64_t t20 = -6364LL;

	t20 = ((x1045%x1046)<<(x1047*x1048));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1057 = -1;
	uint32_t x1058 = UINT32_MAX;
	int64_t x1060 = INT64_MIN;
	volatile uint32_t t21 = 19085869U;

	t21 = ((x1057%x1058)<<(x1059*x1060));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1165 = INT8_MIN;
	static uint64_t x1166 = 4094230666944476LLU;
	int16_t x1167 = -202;
	static int8_t x1168 = 0;
	uint64_t t22 = 6030823905LLU;

	t22 = ((x1165%x1166)<<(x1167*x1168));

	if (t22 != 2234919124687108LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1209 = 82U;
	int8_t x1210 = INT8_MIN;
	volatile int32_t x1211 = -1;
	int16_t x1212 = -1;
	volatile uint32_t t23 = 5122182U;

	t23 = ((x1209%x1210)<<(x1211*x1212));

	if (t23 != 164U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1265 = INT64_MIN;
	int32_t x1266 = INT32_MIN;
	static int16_t x1268 = INT16_MAX;
	int64_t t24 = 9447LL;

	t24 = ((x1265%x1266)<<(x1267*x1268));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1317 = INT8_MIN;
	volatile int8_t x1318 = -1;
	uint32_t x1319 = UINT32_MAX;
	int32_t x1320 = -1;
	int32_t t25 = 1;

	t25 = ((x1317%x1318)<<(x1319*x1320));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1329 = 1U;
	int64_t x1330 = 464625293LL;

	t26 = ((x1329%x1330)<<(x1331*x1332));

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x1413 = 1U;
	static uint16_t x1415 = UINT16_MAX;
	static uint64_t x1416 = 0LLU;
	volatile int32_t t27 = -285;

	t27 = ((x1413%x1414)<<(x1415*x1416));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1449 = 2001U;
	uint16_t x1450 = 851U;
	static int16_t x1451 = INT16_MAX;

	t28 = ((x1449%x1450)<<(x1451*x1452));

	if (t28 != 299U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1494 = -1;
	int32_t x1495 = 0;
	int64_t x1496 = INT64_MIN;
	int32_t t29 = 2986065;

	t29 = ((x1493%x1494)<<(x1495*x1496));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1563 = 0;
	volatile int32_t t30 = 19863;

	t30 = ((x1561%x1562)<<(x1563*x1564));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1569 = 63492;
	uint64_t x1570 = UINT64_MAX;
	int16_t x1572 = 0;
	static uint64_t t31 = 6966LLU;

	t31 = ((x1569%x1570)<<(x1571*x1572));

	if (t31 != 63492LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1673 = 8;
	static int64_t x1674 = 9LL;
	volatile int32_t x1676 = 1;
	int64_t t32 = -11910610646LL;

	t32 = ((x1673%x1674)<<(x1675*x1676));

	if (t32 != 8LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1825 = 66419LL;
	int16_t x1826 = INT16_MAX;
	int8_t x1827 = -1;
	int16_t x1828 = -1;

	t33 = ((x1825%x1826)<<(x1827*x1828));

	if (t33 != 1770LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1877 = -1LL;
	int64_t x1878 = -1LL;
	uint8_t x1879 = 0U;
	uint16_t x1880 = 13U;
	volatile int64_t t34 = -1943464578907429854LL;

	t34 = ((x1877%x1878)<<(x1879*x1880));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1917 = INT64_MAX;
	int64_t x1918 = -142866286LL;
	static int16_t x1919 = -1;
	int8_t x1920 = 0;
	int64_t t35 = 38421542666LL;

	t35 = ((x1917%x1918)<<(x1919*x1920));

	if (t35 != 90839715LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1981 = 142U;
	volatile int64_t x1982 = INT64_MAX;
	volatile uint64_t x1984 = 17987623087466744LLU;
	volatile int64_t t36 = 1885730347985547LL;

	t36 = ((x1981%x1982)<<(x1983*x1984));

	if (t36 != 142LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1993 = 1;
	int32_t x1994 = -1;
	static int16_t x1995 = -1;
	volatile int16_t x1996 = -1;
	int32_t t37 = 0;

	t37 = ((x1993%x1994)<<(x1995*x1996));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2009 = INT32_MAX;
	volatile int64_t x2010 = -6239464424969816LL;
	int32_t x2011 = 334960;
	volatile int32_t x2012 = 0;
	volatile int64_t t38 = -36519053325669643LL;

	t38 = ((x2009%x2010)<<(x2011*x2012));

	if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2037 = INT8_MIN;
	volatile int8_t x2040 = -1;

	t39 = ((x2037%x2038)<<(x2039*x2040));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2049 = INT64_MAX;
	int16_t x2050 = -481;
	int32_t x2051 = INT32_MIN;
	uint8_t x2052 = 0U;
	int64_t t40 = 28LL;

	t40 = ((x2049%x2050)<<(x2051*x2052));

	if (t40 != 449LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x2061 = UINT8_MAX;
	static int64_t x2062 = -12987712129LL;
	int16_t x2063 = 0;
	static int16_t x2064 = INT16_MIN;

	t41 = ((x2061%x2062)<<(x2063*x2064));

	if (t41 != 255LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2241 = INT32_MAX;
	int16_t x2242 = 15;
	int16_t x2243 = 0;
	volatile int64_t x2244 = INT64_MIN;
	int32_t t42 = 1692;

	t42 = ((x2241%x2242)<<(x2243*x2244));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2326 = 1193;
	static int8_t x2327 = INT8_MAX;
	volatile uint8_t x2328 = 0U;
	volatile int32_t t43 = -15;

	t43 = ((x2325%x2326)<<(x2327*x2328));

	if (t43 != 366) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2337 = 143720LL;
	volatile int32_t x2338 = -1;
	int8_t x2339 = -1;
	int64_t x2340 = -14LL;
	static volatile int64_t t44 = -753444871975LL;

	t44 = ((x2337%x2338)<<(x2339*x2340));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2410 = INT8_MIN;
	uint16_t x2411 = 25760U;
	int32_t x2412 = 0;
	int64_t t45 = 14LL;

	t45 = ((x2409%x2410)<<(x2411*x2412));

	if (t45 != 31LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2417 = 4791707410721132LLU;
	uint8_t x2418 = UINT8_MAX;
	uint16_t x2419 = 0U;
	uint16_t x2420 = UINT16_MAX;
	uint64_t t46 = 753739645751298LLU;

	t46 = ((x2417%x2418)<<(x2419*x2420));

	if (t46 != 92LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2517 = INT64_MAX;
	int32_t x2518 = INT32_MIN;
	uint8_t x2520 = 0U;

	t47 = ((x2517%x2518)<<(x2519*x2520));

	if (t47 != 2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2533 = INT64_MIN;
	volatile uint64_t x2534 = 10531656945759943LLU;
	uint16_t x2535 = 139U;
	static uint8_t x2536 = 0U;
	volatile uint64_t t48 = 7428719400185LLU;

	t48 = ((x2533%x2534)<<(x2535*x2536));

	if (t48 != 8172209314825683LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2573 = INT64_MIN;
	int16_t x2574 = INT16_MIN;
	volatile uint64_t x2575 = 1LLU;
	int8_t x2576 = 1;
	static int64_t t49 = -113LL;

	t49 = ((x2573%x2574)<<(x2575*x2576));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2697 = 31U;
	uint64_t x2698 = 250534699483992720LLU;
	volatile int8_t x2699 = 1;
	static int8_t x2700 = 1;

	t50 = ((x2697%x2698)<<(x2699*x2700));

	if (t50 != 62LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2779 = INT32_MIN;
	volatile uint32_t x2780 = 18U;
	int32_t t51 = 517661758;

	t51 = ((x2777%x2778)<<(x2779*x2780));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2857 = INT8_MAX;
	volatile uint16_t x2858 = 71U;
	static uint16_t x2859 = 118U;
	volatile int32_t t52 = 212640141;

	t52 = ((x2857%x2858)<<(x2859*x2860));

	if (t52 != 56) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2878 = INT64_MIN;
	volatile int16_t x2879 = -1;
	volatile int64_t t53 = -872454929690673718LL;

	t53 = ((x2877%x2878)<<(x2879*x2880));

	if (t53 != 3LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2945 = 11LLU;
	uint8_t x2946 = UINT8_MAX;
	static uint16_t x2947 = 19U;
	uint8_t x2948 = 0U;
	uint64_t t54 = 100625199LLU;

	t54 = ((x2945%x2946)<<(x2947*x2948));

	if (t54 != 11LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2966 = 14U;

	t55 = ((x2965%x2966)<<(x2967*x2968));

	if (t55 != 14LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3025 = -1;
	uint32_t x3026 = 736U;
	volatile uint16_t x3028 = 0U;
	uint32_t t56 = 5U;

	t56 = ((x3025%x3026)<<(x3027*x3028));

	if (t56 != 287U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x3102 = INT32_MIN;
	int32_t x3103 = INT32_MAX;
	int16_t x3104 = 0;
	int32_t t57 = 0;

	t57 = ((x3101%x3102)<<(x3103*x3104));

	if (t57 != 79) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x3118 = 481LLU;
	static int8_t x3119 = -1;
	volatile uint8_t x3120 = 0U;
	volatile uint64_t t58 = 8LLU;

	t58 = ((x3117%x3118)<<(x3119*x3120));

	if (t58 != 365LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3193 = 31538151;
	uint16_t x3194 = 2U;
	int8_t x3195 = 0;
	uint32_t x3196 = 1U;
	volatile int32_t t59 = -1;

	t59 = ((x3193%x3194)<<(x3195*x3196));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3197 = INT16_MAX;
	int64_t x3198 = -1LL;
	int32_t x3199 = -1;
	volatile int8_t x3200 = -13;
	int64_t t60 = -4526322451560786166LL;

	t60 = ((x3197%x3198)<<(x3199*x3200));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3241 = UINT64_MAX;
	uint32_t x3242 = UINT32_MAX;
	int8_t x3243 = -4;
	int8_t x3244 = 0;
	volatile uint64_t t61 = 139690LLU;

	t61 = ((x3241%x3242)<<(x3243*x3244));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3345 = INT64_MIN;
	int32_t x3346 = INT32_MIN;
	volatile int8_t x3348 = 0;
	static int64_t t62 = -626LL;

	t62 = ((x3345%x3346)<<(x3347*x3348));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3353 = UINT16_MAX;
	int64_t x3354 = 142969612252LL;
	static volatile int64_t x3356 = -1LL;
	volatile int64_t t63 = -40186157846LL;

	t63 = ((x3353%x3354)<<(x3355*x3356));

	if (t63 != 131070LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3373 = 322521048LLU;
	int32_t x3374 = INT32_MAX;
	static volatile uint64_t t64 = 2032352059LLU;

	t64 = ((x3373%x3374)<<(x3375*x3376));

	if (t64 != 322521048LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3429 = UINT8_MAX;
	uint16_t x3430 = 35U;
	int8_t x3431 = -1;
	static volatile uint16_t x3432 = 0U;
	int32_t t65 = -12;

	t65 = ((x3429%x3430)<<(x3431*x3432));

	if (t65 != 10) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x3453 = 336;
	uint8_t x3455 = 1U;
	uint64_t t66 = 20773948590044LLU;

	t66 = ((x3453%x3454)<<(x3455*x3456));

	if (t66 != 2688LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3462 = 12246252U;
	int8_t x3463 = -1;
	volatile uint32_t x3464 = UINT32_MAX;
	static volatile uint32_t t67 = 3902760U;

	t67 = ((x3461%x3462)<<(x3463*x3464));

	if (t67 != 8779094U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3561 = 242998952U;
	int16_t x3563 = INT16_MIN;
	int8_t x3564 = 0;
	uint32_t t68 = 48U;

	t68 = ((x3561%x3562)<<(x3563*x3564));

	if (t68 != 242998952U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x3577 = -386129996202241LL;
	int32_t x3579 = INT32_MIN;
	volatile int8_t x3580 = 0;
	int64_t t69 = -25971171076537LL;

	t69 = ((x3577%x3578)<<(x3579*x3580));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x3674 = 3LL;
	uint16_t x3675 = 0U;
	uint64_t x3676 = 16363895080226LLU;
	int64_t t70 = -123909166253LL;

	t70 = ((x3673%x3674)<<(x3675*x3676));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x3677 = INT32_MAX;
	int32_t x3678 = -1;
	uint16_t x3680 = 216U;
	static volatile int32_t t71 = 101090;

	t71 = ((x3677%x3678)<<(x3679*x3680));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3865 = INT64_MIN;
	int16_t x3866 = -1;
	static uint8_t x3867 = 0U;
	int16_t x3868 = -1;
	volatile int64_t t72 = -220857950731762LL;

	t72 = ((x3865%x3866)<<(x3867*x3868));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3869 = INT16_MAX;
	volatile int8_t x3871 = -2;
	int16_t x3872 = 0;
	int32_t t73 = 1;

	t73 = ((x3869%x3870)<<(x3871*x3872));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3886 = UINT8_MAX;
	uint32_t x3887 = UINT32_MAX;
	int32_t x3888 = -27;
	int64_t t74 = 3LL;

	t74 = ((x3885%x3886)<<(x3887*x3888));

	if (t74 != 10737418240LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3973 = INT8_MIN;
	static volatile uint32_t x3974 = 58469U;
	volatile int16_t x3975 = 0;
	volatile uint32_t t75 = 15486U;

	t75 = ((x3973%x3974)<<(x3975*x3976));

	if (t75 != 9835U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x4021 = INT64_MAX;
	static int16_t x4022 = INT16_MAX;
	int32_t x4023 = -1;
	uint32_t x4024 = UINT32_MAX;
	int64_t t76 = -431760708125LL;

	t76 = ((x4021%x4022)<<(x4023*x4024));

	if (t76 != 14LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x4025 = -1;
	int32_t x4026 = -1;
	int16_t x4027 = -1;
	uint64_t x4028 = UINT64_MAX;
	volatile int32_t t77 = 9;

	t77 = ((x4025%x4026)<<(x4027*x4028));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4033 = 10706;
	uint16_t x4034 = 4U;
	int8_t x4035 = -1;
	int8_t x4036 = 0;
	int32_t t78 = 416;

	t78 = ((x4033%x4034)<<(x4035*x4036));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4150 = INT16_MIN;
	static int8_t x4151 = -1;
	int16_t x4152 = -6;
	volatile int32_t t79 = -556389514;

	t79 = ((x4149%x4150)<<(x4151*x4152));

	if (t79 != 448) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4241 = UINT32_MAX;
	int8_t x4242 = 7;
	uint8_t x4243 = 0U;
	volatile uint64_t x4244 = 11LLU;
	uint32_t t80 = 92930198U;

	t80 = ((x4241%x4242)<<(x4243*x4244));

	if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4497 = INT8_MIN;
	int16_t x4499 = -1;
	volatile int32_t x4500 = -1;
	int32_t t81 = -1;

	t81 = ((x4497%x4498)<<(x4499*x4500));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x4529 = 94032;
	static int32_t x4530 = -4;
	int32_t t82 = 16519;

	t82 = ((x4529%x4530)<<(x4531*x4532));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4569 = UINT16_MAX;
	volatile int64_t x4570 = INT64_MIN;
	int32_t x4571 = -1;
	static int8_t x4572 = -1;
	volatile int64_t t83 = 225634203992436304LL;

	t83 = ((x4569%x4570)<<(x4571*x4572));

	if (t83 != 131070LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4589 = INT64_MIN;
	static volatile uint8_t x4590 = 2U;
	uint8_t x4591 = 10U;
	int16_t x4592 = 1;
	int64_t t84 = 1841166005LL;

	t84 = ((x4589%x4590)<<(x4591*x4592));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4605 = UINT64_MAX;
	uint8_t x4606 = 20U;
	static int32_t x4608 = INT32_MIN;

	t85 = ((x4605%x4606)<<(x4607*x4608));

	if (t85 != 15LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4649 = UINT32_MAX;
	uint8_t x4651 = 2U;
	int8_t x4652 = 10;
	uint32_t t86 = 120617U;

	t86 = ((x4649%x4650)<<(x4651*x4652));

	if (t86 != 1048576U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4677 = INT8_MAX;
	int32_t x4678 = INT32_MIN;
	static volatile int8_t x4679 = 0;
	int32_t x4680 = 15097;
	volatile int32_t t87 = -2;

	t87 = ((x4677%x4678)<<(x4679*x4680));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4745 = INT8_MIN;
	int64_t x4746 = -1LL;
	static int8_t x4747 = -1;
	int8_t x4748 = 0;

	t88 = ((x4745%x4746)<<(x4747*x4748));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4953 = UINT64_MAX;
	int8_t x4954 = -1;
	volatile uint32_t x4956 = 44U;

	t89 = ((x4953%x4954)<<(x4955*x4956));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x5029 = INT16_MIN;
	volatile uint8_t x5031 = 0U;
	int16_t x5032 = 6;
	static int32_t t90 = -114;

	t90 = ((x5029%x5030)<<(x5031*x5032));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5053 = 72321U;
	int16_t x5054 = -1;
	int16_t x5055 = INT16_MIN;
	int8_t x5056 = 0;
	volatile uint32_t t91 = 9386U;

	t91 = ((x5053%x5054)<<(x5055*x5056));

	if (t91 != 72321U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5194 = -1LL;
	volatile uint8_t x5195 = 27U;
	int64_t t92 = -93101282649003984LL;

	t92 = ((x5193%x5194)<<(x5195*x5196));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x5409 = 89930;
	int16_t x5410 = INT16_MIN;
	uint8_t x5411 = 0U;
	static int8_t x5412 = -1;
	int32_t t93 = -566;

	t93 = ((x5409%x5410)<<(x5411*x5412));

	if (t93 != 24394) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5417 = 32524238990LLU;
	uint64_t x5418 = 4381483982049603692LLU;
	int32_t x5419 = -1;

	t94 = ((x5417%x5418)<<(x5419*x5420));

	if (t94 != 65048477980LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5489 = UINT64_MAX;
	static int16_t x5490 = 288;
	int16_t x5491 = 0;
	int16_t x5492 = 24;
	volatile uint64_t t95 = 41597554302483710LLU;

	t95 = ((x5489%x5490)<<(x5491*x5492));

	if (t95 != 159LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5514 = INT32_MIN;
	int32_t x5515 = -3;
	volatile int32_t t96 = -509980298;

	t96 = ((x5513%x5514)<<(x5515*x5516));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5549 = INT64_MAX;
	int8_t x5550 = 1;
	uint8_t x5551 = 0U;
	int16_t x5552 = INT16_MIN;
	int64_t t97 = -4561926471612884872LL;

	t97 = ((x5549%x5550)<<(x5551*x5552));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x5562 = INT8_MIN;
	int8_t x5563 = -1;
	volatile int32_t x5564 = -1;
	int64_t t98 = 489185425291367LL;

	t98 = ((x5561%x5562)<<(x5563*x5564));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5653 = 5U;
	static int8_t x5655 = -15;
	static uint32_t t99 = 215U;

	t99 = ((x5653%x5654)<<(x5655*x5656));

	if (t99 != 163840U) { NG(); } else { ; }
	
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

