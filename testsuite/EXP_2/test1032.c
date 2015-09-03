#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x36 = INT32_MAX;
volatile int32_t t0 = 44816;
static volatile uint32_t x258 = UINT32_MAX;
uint64_t t1 = 8323853613605619546LLU;
uint32_t x359 = 9U;
int32_t t2 = -4;
volatile int64_t x402 = 769932365839094LL;
uint8_t x443 = 25U;
uint64_t t4 = 127610765829LLU;
uint16_t x454 = 28305U;
volatile int32_t t6 = 491;
int8_t x602 = INT8_MAX;
static int16_t x603 = 0;
int32_t x644 = 6245;
volatile int32_t t9 = 77114569;
volatile int64_t t10 = -7799369LL;
volatile uint64_t x833 = UINT64_MAX;
uint8_t x835 = 4U;
volatile int64_t x836 = INT64_MIN;
static int32_t t12 = -802;
static int8_t x892 = INT8_MIN;
static uint64_t t13 = 467354777768948324LLU;
uint32_t x972 = 84U;
int8_t x1078 = 1;
int8_t x1443 = 7;
uint16_t x1479 = 18U;
int64_t x1557 = -8262409495073208LL;
int32_t x1663 = 25;
volatile uint64_t t28 = 218LLU;
uint8_t x1707 = 12U;
static uint32_t x1708 = UINT32_MAX;
uint8_t x1727 = 0U;
uint8_t x1740 = 4U;
volatile uint64_t x1832 = 379392LLU;
uint8_t x1835 = 1U;
static volatile int64_t t34 = -1449588121807424484LL;
int16_t x1897 = INT16_MAX;
volatile int16_t x1906 = 1098;
volatile int16_t x1907 = 2;
static int16_t x2121 = INT16_MIN;
int16_t x2249 = INT16_MIN;
int8_t x2379 = 0;
static volatile uint64_t x2654 = 9412605LLU;
uint8_t x2655 = 0U;
static int8_t x2718 = 31;
uint8_t x2719 = 30U;
static int64_t x2797 = -1LL;
uint64_t x2936 = 86244078468LLU;
uint8_t x3124 = 54U;
int64_t t48 = -296051LL;
int16_t x3245 = 11;
volatile uint64_t x3296 = 13474762653629LLU;
static int16_t x3419 = 13;
uint8_t x3534 = 104U;
uint8_t x3535 = 6U;
static int8_t x3603 = 0;
volatile uint64_t t55 = 38979785485071LLU;
uint8_t x3769 = 68U;
int32_t t57 = -145871585;
int16_t x3786 = INT16_MAX;
uint32_t x3787 = 6U;
volatile uint8_t x4279 = 14U;
static volatile uint64_t x4654 = 13141225398843LLU;
int32_t x4660 = 277;
static uint8_t x4855 = 1U;
uint32_t x4925 = 293204426U;
uint32_t x4926 = 12U;
int8_t x5115 = 0;
int8_t x5121 = -1;
int32_t t74 = -39;
int32_t x5261 = INT32_MAX;
int32_t x5262 = INT32_MAX;
uint32_t x5264 = UINT32_MAX;
static uint8_t x5267 = 1U;
int64_t x5321 = -1LL;
volatile int64_t x5373 = INT64_MIN;
uint32_t x5676 = 1966282U;
uint8_t x5709 = 27U;
uint32_t x5853 = 6U;
static int64_t t83 = -98502636660637952LL;
static uint8_t x6201 = UINT8_MAX;
int64_t x6293 = 39797LL;
int32_t x6337 = INT32_MIN;
int8_t x6491 = 1;
static uint64_t t91 = 489205974LLU;
volatile int16_t x6598 = 832;
static uint8_t x6639 = 5U;
volatile uint64_t x6737 = 12642996997747658LLU;
volatile uint64_t x6774 = 963688491833980033LLU;
int64_t x6814 = 607116106879347LL;


void f0(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = 2;

	t0 = ((x33-(x34>>x35))%x36);

	if (t0 != -191) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x257 = -3;
	int16_t x259 = 3;
	volatile uint64_t x260 = UINT64_MAX;

	t1 = ((x257-(x258>>x259))%x260);

	if (t1 != 3758096382LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x357 = -1;
	uint16_t x358 = UINT16_MAX;
	int8_t x360 = -1;

	t2 = ((x357-(x358>>x359))%x360);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x401 = INT16_MAX;
	int16_t x403 = 31;
	int64_t x404 = INT64_MIN;
	static int64_t t3 = 11504661LL;

	t3 = ((x401-(x402>>x403))%x404);

	if (t3 != -325760LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x441 = 23LLU;
	int8_t x442 = 50;
	int8_t x444 = INT8_MAX;

	t4 = ((x441-(x442>>x443))%x444);

	if (t4 != 23LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x453 = -1;
	static uint8_t x455 = 1U;
	static int32_t x456 = INT32_MIN;
	int32_t t5 = -64;

	t5 = ((x453-(x454>>x455))%x456);

	if (t5 != -14153) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x521 = UINT16_MAX;
	uint16_t x522 = UINT16_MAX;
	static uint8_t x523 = 0U;
	int8_t x524 = INT8_MAX;

	t6 = ((x521-(x522>>x523))%x524);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x525 = INT32_MIN;
	volatile uint32_t x526 = 447U;
	uint16_t x527 = 3U;
	static uint8_t x528 = 21U;
	volatile uint32_t t7 = 165942709U;

	t7 = ((x525-(x526>>x527))%x528);

	if (t7 != 10U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x601 = -1;
	int8_t x604 = -1;
	int32_t t8 = -8486;

	t8 = ((x601-(x602>>x603))%x604);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x641 = -2;
	static int8_t x642 = INT8_MAX;
	volatile int16_t x643 = 1;

	t9 = ((x641-(x642>>x643))%x644);

	if (t9 != -65) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x693 = INT32_MIN;
	volatile int64_t x694 = INT64_MAX;
	int16_t x695 = 55;
	int32_t x696 = INT32_MIN;

	t10 = ((x693-(x694>>x695))%x696);

	if (t10 != -255LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x834 = UINT8_MAX;
	uint64_t t11 = 121616443088833LLU;

	t11 = ((x833-(x834>>x835))%x836);

	if (t11 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x853 = 26;
	int32_t x854 = 16366024;
	volatile int8_t x855 = 18;
	int32_t x856 = -1;

	t12 = ((x853-(x854>>x855))%x856);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x889 = INT16_MIN;
	uint64_t x890 = 84317561746947715LLU;
	int32_t x891 = 25;

	t13 = ((x889-(x890>>x891))%x892);

	if (t13 != 18446744071196659690LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x905 = 1867268278U;
	uint64_t x906 = UINT64_MAX;
	int8_t x907 = 1;
	volatile uint8_t x908 = 11U;
	volatile uint64_t t14 = 250918325222943962LLU;

	t14 = ((x905-(x906>>x907))%x908);

	if (t14 != 5LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x921 = 120U;
	volatile uint64_t x922 = UINT64_MAX;
	int8_t x923 = 11;
	int32_t x924 = 14071087;
	static volatile uint64_t t15 = 7399268148558LLU;

	t15 = ((x921-(x922>>x923))%x924);

	if (t15 != 12686459LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x969 = INT16_MIN;
	int32_t x970 = INT32_MAX;
	int8_t x971 = 1;
	volatile uint32_t t16 = 7U;

	t16 = ((x969-(x970>>x971))%x972);

	if (t16 != 17U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x997 = 945U;
	int64_t x998 = INT64_MAX;
	static int8_t x999 = 0;
	uint16_t x1000 = 2U;
	volatile int64_t t17 = -123666LL;

	t17 = ((x997-(x998>>x999))%x1000);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1077 = -362;
	uint64_t x1079 = 6LLU;
	static volatile uint64_t x1080 = 4LLU;
	uint64_t t18 = 4LLU;

	t18 = ((x1077-(x1078>>x1079))%x1080);

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1253 = INT16_MAX;
	int8_t x1254 = INT8_MAX;
	uint8_t x1255 = 1U;
	int16_t x1256 = -34;
	int32_t t19 = 65535;

	t19 = ((x1253-(x1254>>x1255))%x1256);

	if (t19 != 30) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1265 = -1;
	int16_t x1266 = INT16_MAX;
	int8_t x1267 = 0;
	int8_t x1268 = INT8_MIN;
	volatile int32_t t20 = -30138501;

	t20 = ((x1265-(x1266>>x1267))%x1268);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1401 = -1;
	uint64_t x1402 = 68002LLU;
	static uint16_t x1403 = 2U;
	static int8_t x1404 = INT8_MAX;
	uint64_t t21 = 573557LLU;

	t21 = ((x1401-(x1402>>x1403))%x1404);

	if (t21 != 19LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1417 = INT16_MIN;
	int64_t x1418 = INT64_MAX;
	uint32_t x1419 = 1U;
	int8_t x1420 = 3;
	int64_t t22 = -45107029891LL;

	t22 = ((x1417-(x1418>>x1419))%x1420);

	if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1441 = 91540589LLU;
	static int16_t x1442 = INT16_MAX;
	uint16_t x1444 = 2U;
	static uint64_t t23 = 6057959771LLU;

	t23 = ((x1441-(x1442>>x1443))%x1444);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1477 = INT8_MIN;
	uint16_t x1478 = UINT16_MAX;
	int8_t x1480 = INT8_MIN;
	static volatile int32_t t24 = 17243;

	t24 = ((x1477-(x1478>>x1479))%x1480);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1558 = UINT32_MAX;
	static uint16_t x1559 = 10U;
	int64_t x1560 = INT64_MAX;
	int64_t t25 = 466769943087LL;

	t25 = ((x1557-(x1558>>x1559))%x1560);

	if (t25 != -8262409499267511LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1597 = -1;
	int16_t x1598 = 2759;
	int16_t x1599 = 6;
	static int8_t x1600 = INT8_MIN;
	int32_t t26 = -138223;

	t26 = ((x1597-(x1598>>x1599))%x1600);

	if (t26 != -44) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1661 = INT16_MIN;
	static int32_t x1662 = 98448329;
	volatile int64_t x1664 = -1LL;
	int64_t t27 = 138LL;

	t27 = ((x1661-(x1662>>x1663))%x1664);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1681 = INT8_MAX;
	uint64_t x1682 = UINT64_MAX;
	static volatile uint32_t x1683 = 1U;
	int8_t x1684 = INT8_MIN;

	t28 = ((x1681-(x1682>>x1683))%x1684);

	if (t28 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1705 = -1;
	int32_t x1706 = INT32_MAX;
	volatile uint32_t t29 = 2374872U;

	t29 = ((x1705-(x1706>>x1707))%x1708);

	if (t29 != 4294443008U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1725 = INT16_MIN;
	volatile uint32_t x1726 = 74U;
	int8_t x1728 = INT8_MIN;
	uint32_t t30 = 0U;

	t30 = ((x1725-(x1726>>x1727))%x1728);

	if (t30 != 4294934454U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1737 = 5U;
	uint16_t x1738 = UINT16_MAX;
	volatile int8_t x1739 = 1;
	static volatile uint32_t t31 = 79U;

	t31 = ((x1737-(x1738>>x1739))%x1740);

	if (t31 != 2U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1829 = INT64_MAX;
	volatile uint32_t x1830 = UINT32_MAX;
	volatile uint8_t x1831 = 7U;
	volatile uint64_t t32 = 1972823695870LLU;

	t32 = ((x1829-(x1830>>x1831))%x1832);

	if (t32 != 124416LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1833 = 3;
	uint32_t x1834 = 520311U;
	static uint16_t x1836 = 1U;
	uint32_t t33 = 694U;

	t33 = ((x1833-(x1834>>x1835))%x1836);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1837 = -1;
	uint16_t x1838 = 347U;
	uint16_t x1839 = 1U;
	int64_t x1840 = 613804290LL;

	t34 = ((x1837-(x1838>>x1839))%x1840);

	if (t34 != -174LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1898 = 12448661U;
	int8_t x1899 = 1;
	static int64_t x1900 = INT64_MAX;
	static volatile int64_t t35 = 10437885359662LL;

	t35 = ((x1897-(x1898>>x1899))%x1900);

	if (t35 != 4288775733LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1905 = -15659;
	static uint32_t x1908 = 468739375U;
	volatile uint32_t t36 = 49612587U;

	t36 = ((x1905-(x1906>>x1907))%x1908);

	if (t36 != 76296988U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x1933 = 427U;
	static uint16_t x1934 = UINT16_MAX;
	static uint16_t x1935 = 0U;
	int32_t x1936 = -1;
	int32_t t37 = -1898846;

	t37 = ((x1933-(x1934>>x1935))%x1936);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2065 = 0;
	static uint8_t x2066 = 96U;
	uint8_t x2067 = 1U;
	volatile uint16_t x2068 = 129U;
	volatile int32_t t38 = 629407996;

	t38 = ((x2065-(x2066>>x2067))%x2068);

	if (t38 != -48) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2122 = 1U;
	uint8_t x2123 = 2U;
	uint64_t x2124 = 3LLU;
	static volatile uint64_t t39 = 4953170254675428LLU;

	t39 = ((x2121-(x2122>>x2123))%x2124);

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2221 = 0;
	uint16_t x2222 = 1U;
	int8_t x2223 = 6;
	uint8_t x2224 = 48U;
	static int32_t t40 = -3652295;

	t40 = ((x2221-(x2222>>x2223))%x2224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2250 = UINT64_MAX;
	uint32_t x2251 = 1U;
	uint16_t x2252 = UINT16_MAX;
	static uint64_t t41 = 446948LLU;

	t41 = ((x2249-(x2250>>x2251))%x2252);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2377 = -1;
	uint64_t x2378 = UINT64_MAX;
	int8_t x2380 = INT8_MIN;
	uint64_t t42 = 106088467LLU;

	t42 = ((x2377-(x2378>>x2379))%x2380);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x2569 = INT8_MIN;
	static volatile uint32_t x2570 = 353480305U;
	uint16_t x2571 = 9U;
	int16_t x2572 = INT16_MIN;
	uint32_t t43 = 407278U;

	t43 = ((x2569-(x2570>>x2571))%x2572);

	if (t43 != 4294276777U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2653 = -61436189450751900LL;
	uint32_t x2656 = 2U;
	uint64_t t44 = 12000LLU;

	t44 = ((x2653-(x2654>>x2655))%x2656);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x2717 = 60023U;
	volatile int32_t x2720 = INT32_MIN;
	static volatile uint32_t t45 = 1U;

	t45 = ((x2717-(x2718>>x2719))%x2720);

	if (t45 != 60023U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2798 = 42U;
	uint8_t x2799 = 20U;
	static int32_t x2800 = -7892;
	int64_t t46 = 0LL;

	t46 = ((x2797-(x2798>>x2799))%x2800);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2933 = -27;
	volatile int64_t x2934 = INT64_MAX;
	uint8_t x2935 = 41U;
	static uint64_t t47 = 1319362520262453807LLU;

	t47 = ((x2933-(x2934>>x2935))%x2936);

	if (t47 != 27554563582LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3121 = INT64_MAX;
	uint32_t x3122 = UINT32_MAX;
	volatile int32_t x3123 = 29;

	t48 = ((x3121-(x3122>>x3123))%x3124);

	if (t48 != 18LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x3246 = UINT32_MAX;
	volatile uint64_t x3247 = 2LLU;
	int16_t x3248 = INT16_MAX;
	uint32_t t49 = 31U;

	t49 = ((x3245-(x3246>>x3247))%x3248);

	if (t49 != 15U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3293 = UINT64_MAX;
	static uint32_t x3294 = 1786U;
	uint32_t x3295 = 1U;
	volatile uint64_t t50 = 378335427494896990LLU;

	t50 = ((x3293-(x3294>>x3295))%x3296);

	if (t50 != 9597093907786LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3417 = 17320726379LLU;
	uint64_t x3418 = 1879287508LLU;
	uint8_t x3420 = 51U;
	uint64_t t51 = 43630479214950405LLU;

	t51 = ((x3417-(x3418>>x3419))%x3420);

	if (t51 != 37LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3533 = -1;
	static int8_t x3536 = INT8_MAX;
	volatile int32_t t52 = 355424;

	t52 = ((x3533-(x3534>>x3535))%x3536);

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3545 = -1;
	uint16_t x3546 = 223U;
	static uint16_t x3547 = 3U;
	int64_t x3548 = INT64_MIN;
	volatile int64_t t53 = -1006319486643LL;

	t53 = ((x3545-(x3546>>x3547))%x3548);

	if (t53 != -28LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3601 = INT8_MIN;
	int64_t x3602 = 3838809076188555012LL;
	volatile uint8_t x3604 = 17U;
	int64_t t54 = -2361123083450125LL;

	t54 = ((x3601-(x3602>>x3603))%x3604);

	if (t54 != -16LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3673 = UINT16_MAX;
	uint64_t x3674 = 3447LLU;
	static int8_t x3675 = 21;
	int64_t x3676 = -1LL;

	t55 = ((x3673-(x3674>>x3675))%x3676);

	if (t55 != 65535LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3701 = INT8_MAX;
	static volatile int32_t x3702 = 6827;
	uint8_t x3703 = 14U;
	int64_t x3704 = INT64_MAX;
	int64_t t56 = 1LL;

	t56 = ((x3701-(x3702>>x3703))%x3704);

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3770 = 154;
	volatile int8_t x3771 = 1;
	uint16_t x3772 = UINT16_MAX;

	t57 = ((x3769-(x3770>>x3771))%x3772);

	if (t57 != -9) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x3785 = -1844;
	uint16_t x3788 = 1U;
	int32_t t58 = -471659;

	t58 = ((x3785-(x3786>>x3787))%x3788);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4025 = UINT16_MAX;
	int32_t x4026 = INT32_MAX;
	int8_t x4027 = 1;
	int8_t x4028 = INT8_MAX;
	static int32_t t59 = 17;

	t59 = ((x4025-(x4026>>x4027))%x4028);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x4081 = 5U;
	static volatile uint16_t x4082 = UINT16_MAX;
	int8_t x4083 = 0;
	uint64_t x4084 = 214773980LLU;
	volatile uint64_t t60 = 19LLU;

	t60 = ((x4081-(x4082>>x4083))%x4084);

	if (t60 != 1519326LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x4209 = INT64_MAX;
	int16_t x4210 = INT16_MAX;
	uint8_t x4211 = 0U;
	uint8_t x4212 = UINT8_MAX;
	int64_t t61 = -322695LL;

	t61 = ((x4209-(x4210>>x4211))%x4212);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x4277 = 5U;
	uint64_t x4278 = 3320LLU;
	int32_t x4280 = INT32_MIN;
	volatile uint64_t t62 = 6163266994LLU;

	t62 = ((x4277-(x4278>>x4279))%x4280);

	if (t62 != 5LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x4653 = INT32_MIN;
	static uint8_t x4655 = 14U;
	uint64_t x4656 = 46272LLU;
	volatile uint64_t t63 = 92LLU;

	t63 = ((x4653-(x4654>>x4655))%x4656);

	if (t63 != 21239LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4657 = INT8_MIN;
	volatile int64_t x4658 = INT64_MAX;
	uint64_t x4659 = 48LLU;
	int64_t t64 = 71321339812LL;

	t64 = ((x4657-(x4658>>x4659))%x4660);

	if (t64 != -209LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4737 = -42;
	uint64_t x4738 = 10872LLU;
	int64_t x4739 = 17LL;
	int16_t x4740 = -1;
	uint64_t t65 = 32650LLU;

	t65 = ((x4737-(x4738>>x4739))%x4740);

	if (t65 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4785 = INT64_MAX;
	uint32_t x4786 = UINT32_MAX;
	uint8_t x4787 = 4U;
	int8_t x4788 = INT8_MIN;
	int64_t t66 = 792538LL;

	t66 = ((x4785-(x4786>>x4787))%x4788);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4821 = 0;
	uint16_t x4822 = 1U;
	int32_t x4823 = 0;
	static volatile int16_t x4824 = INT16_MIN;
	volatile int32_t t67 = -3167330;

	t67 = ((x4821-(x4822>>x4823))%x4824);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4853 = UINT32_MAX;
	static int16_t x4854 = INT16_MAX;
	int32_t x4856 = INT32_MAX;
	volatile uint32_t t68 = 3U;

	t68 = ((x4853-(x4854>>x4855))%x4856);

	if (t68 != 2147467265U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4909 = -1LL;
	int16_t x4910 = INT16_MAX;
	int8_t x4911 = 1;
	uint16_t x4912 = 11670U;
	volatile int64_t t69 = 7368339LL;

	t69 = ((x4909-(x4910>>x4911))%x4912);

	if (t69 != -4714LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x4927 = 26;
	int16_t x4928 = -116;
	volatile uint32_t t70 = 368334329U;

	t70 = ((x4925-(x4926>>x4927))%x4928);

	if (t70 != 293204426U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x5025 = INT64_MAX;
	int32_t x5026 = 158608130;
	uint8_t x5027 = 31U;
	static uint64_t x5028 = 262130553257LLU;
	volatile uint64_t t71 = 4769412045975410063LLU;

	t71 = ((x5025-(x5026>>x5027))%x5028);

	if (t71 != 254976600575LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5113 = INT16_MAX;
	int64_t x5114 = INT64_MAX;
	int16_t x5116 = -6436;
	volatile int64_t t72 = -269668813727623LL;

	t72 = ((x5113-(x5114>>x5115))%x5116);

	if (t72 != -1640LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5122 = 70986457485720559LLU;
	static uint32_t x5123 = 4U;
	int64_t x5124 = -1LL;
	uint64_t t73 = 4318981985LLU;

	t73 = ((x5121-(x5122>>x5123))%x5124);

	if (t73 != 18442307420116694081LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x5133 = -12;
	static int32_t x5134 = 37;
	uint8_t x5135 = 0U;
	int8_t x5136 = -1;

	t74 = ((x5133-(x5134>>x5135))%x5136);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5263 = 30U;
	volatile uint32_t t75 = 178510256U;

	t75 = ((x5261-(x5262>>x5263))%x5264);

	if (t75 != 2147483646U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x5265 = 0U;
	volatile uint64_t x5266 = UINT64_MAX;
	static int32_t x5268 = INT32_MIN;
	uint64_t t76 = 2822095763LLU;

	t76 = ((x5265-(x5266>>x5267))%x5268);

	if (t76 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5322 = 50LLU;
	uint32_t x5323 = 1U;
	int64_t x5324 = -1LL;
	volatile uint64_t t77 = 2745383181297374769LLU;

	t77 = ((x5321-(x5322>>x5323))%x5324);

	if (t77 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x5374 = 0U;
	int8_t x5375 = 1;
	volatile int16_t x5376 = INT16_MAX;
	volatile int64_t t78 = 2300236245307LL;

	t78 = ((x5373-(x5374>>x5375))%x5376);

	if (t78 != -8LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5417 = UINT32_MAX;
	uint64_t x5418 = 121492001037LLU;
	static uint16_t x5419 = 0U;
	int32_t x5420 = INT32_MIN;
	volatile uint64_t t79 = 14LLU;

	t79 = ((x5417-(x5418>>x5419))%x5420);

	if (t79 != 18446743956512517874LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x5589 = UINT64_MAX;
	uint32_t x5590 = UINT32_MAX;
	uint8_t x5591 = 0U;
	int32_t x5592 = -1;
	static volatile uint64_t t80 = 2268827913021354LLU;

	t80 = ((x5589-(x5590>>x5591))%x5592);

	if (t80 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x5673 = 14236U;
	uint8_t x5674 = UINT8_MAX;
	uint32_t x5675 = 2U;
	uint32_t t81 = 29U;

	t81 = ((x5673-(x5674>>x5675))%x5676);

	if (t81 != 14173U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5710 = INT64_MAX;
	uint8_t x5711 = 11U;
	int64_t x5712 = INT64_MIN;
	volatile int64_t t82 = -9992LL;

	t82 = ((x5709-(x5710>>x5711))%x5712);

	if (t82 != -4503599627370468LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x5854 = 60438440188453LL;
	int16_t x5855 = 27;
	static uint16_t x5856 = 205U;

	t83 = ((x5853-(x5854>>x5855))%x5856);

	if (t83 != -115LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x6202 = 31U;
	int16_t x6203 = 3;
	int64_t x6204 = INT64_MIN;
	volatile int64_t t84 = 1LL;

	t84 = ((x6201-(x6202>>x6203))%x6204);

	if (t84 != 252LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x6294 = 107414U;
	static volatile uint8_t x6295 = 11U;
	int64_t x6296 = 535627455644408392LL;
	int64_t t85 = -22539422520LL;

	t85 = ((x6293-(x6294>>x6295))%x6296);

	if (t85 != 39745LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x6309 = 23;
	uint64_t x6310 = UINT64_MAX;
	static int8_t x6311 = 0;
	static int32_t x6312 = -1;
	volatile uint64_t t86 = 44180922962680LLU;

	t86 = ((x6309-(x6310>>x6311))%x6312);

	if (t86 != 24LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x6338 = 46783626852079LL;
	uint32_t x6339 = 24U;
	int16_t x6340 = -1;
	volatile int64_t t87 = -50386LL;

	t87 = ((x6337-(x6338>>x6339))%x6340);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x6397 = 3U;
	static uint32_t x6398 = 57072U;
	uint16_t x6399 = 22U;
	uint64_t x6400 = 1210172887LLU;
	uint64_t t88 = 1159589LLU;

	t88 = ((x6397-(x6398>>x6399))%x6400);

	if (t88 != 3LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x6401 = -23725964LL;
	static volatile int8_t x6402 = 4;
	int32_t x6403 = 0;
	uint8_t x6404 = UINT8_MAX;
	volatile int64_t t89 = 412243LL;

	t89 = ((x6401-(x6402>>x6403))%x6404);

	if (t89 != -3LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x6477 = 53U;
	int64_t x6478 = INT64_MAX;
	static uint64_t x6479 = 43LLU;
	int8_t x6480 = -1;
	volatile int64_t t90 = 208529LL;

	t90 = ((x6477-(x6478>>x6479))%x6480);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6489 = INT32_MAX;
	static uint64_t x6490 = UINT64_MAX;
	uint64_t x6492 = UINT64_MAX;

	t91 = ((x6489-(x6490>>x6491))%x6492);

	if (t91 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6597 = -1LL;
	uint64_t x6599 = 16LLU;
	uint16_t x6600 = UINT16_MAX;
	int64_t t92 = -10289396812LL;

	t92 = ((x6597-(x6598>>x6599))%x6600);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6637 = 194LLU;
	uint16_t x6638 = UINT16_MAX;
	int32_t x6640 = -84;
	uint64_t t93 = 6LLU;

	t93 = ((x6637-(x6638>>x6639))%x6640);

	if (t93 != 18446744073709549763LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6693 = INT8_MAX;
	int64_t x6694 = INT64_MAX;
	static int8_t x6695 = 1;
	int8_t x6696 = INT8_MIN;
	int64_t t94 = 6910362857416230LL;

	t94 = ((x6693-(x6694>>x6695))%x6696);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6738 = INT16_MAX;
	int16_t x6739 = 0;
	static uint64_t x6740 = 2505733006673442999LLU;
	volatile uint64_t t95 = 15942998219099339LLU;

	t95 = ((x6737-(x6738>>x6739))%x6740);

	if (t95 != 12642996997714891LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x6773 = UINT64_MAX;
	uint8_t x6775 = 2U;
	int8_t x6776 = 24;
	static uint64_t t96 = 1LLU;

	t96 = ((x6773-(x6774>>x6775))%x6776);

	if (t96 != 15LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6797 = 6915500871LLU;
	volatile int16_t x6798 = INT16_MAX;
	int8_t x6799 = 0;
	uint16_t x6800 = 477U;
	volatile uint64_t t97 = 355795376539918753LLU;

	t97 = ((x6797-(x6798>>x6799))%x6800);

	if (t97 != 332LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x6813 = UINT32_MAX;
	static uint32_t x6815 = 4U;
	int8_t x6816 = 24;
	int64_t t98 = 378989473392869LL;

	t98 = ((x6813-(x6814>>x6815))%x6816);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6929 = -1;
	int32_t x6930 = INT32_MAX;
	static uint8_t x6931 = 4U;
	int64_t x6932 = INT64_MIN;
	int64_t t99 = -121649235507846LL;

	t99 = ((x6929-(x6930>>x6931))%x6932);

	if (t99 != -134217728LL) { NG(); } else { ; }
	
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

