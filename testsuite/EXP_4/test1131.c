#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x134 = INT16_MIN;
volatile int32_t x175 = INT32_MAX;
int8_t x212 = 0;
int32_t x270 = INT32_MAX;
volatile uint64_t x271 = UINT64_MAX;
int16_t x290 = INT16_MAX;
volatile int64_t x337 = -1LL;
int8_t x338 = -10;
static volatile int8_t x464 = 26;
static int64_t x802 = -1LL;
int64_t t17 = -30693735417041LL;
volatile uint8_t x844 = 0U;
int64_t x889 = -1LL;
int32_t x892 = 7;
int16_t x921 = INT16_MAX;
static int16_t x945 = 1465;
int8_t x948 = 1;
uint16_t x1137 = 12U;
uint32_t x1139 = UINT32_MAX;
static volatile int32_t t26 = -375;
uint8_t x1461 = 2U;
uint8_t x1535 = 28U;
volatile int32_t x1554 = -1;
int32_t x1581 = 160;
int32_t x1584 = 23;
uint8_t x1710 = 1U;
int64_t x1711 = INT64_MAX;
volatile int32_t t31 = 53294104;
static int8_t x1713 = -12;
int8_t x1714 = INT8_MAX;
volatile uint64_t x1783 = 90785524560603925LLU;
volatile int8_t x1819 = INT8_MAX;
volatile int64_t x1949 = INT64_MIN;
uint16_t x2030 = UINT16_MAX;
uint8_t x2104 = 7U;
static int32_t t41 = -8000561;
int64_t x2210 = -19LL;
int32_t x2218 = -1;
int32_t x2293 = INT32_MIN;
int16_t x2337 = INT16_MIN;
uint64_t x2403 = UINT64_MAX;
uint8_t x2444 = 11U;
int32_t t51 = -4620895;
int32_t x2649 = -1;
int16_t x2651 = 0;
static volatile int32_t x2754 = 6051021;
uint16_t x2761 = UINT16_MAX;
static int8_t x2869 = -15;
uint8_t x2897 = 2U;
volatile uint16_t x2899 = UINT16_MAX;
static uint32_t x2900 = 11U;
int16_t x2981 = INT16_MIN;
int8_t x2982 = -1;
uint16_t x2984 = 0U;
int8_t x3157 = -1;
int8_t x3228 = 0;
volatile int64_t t66 = 32010909280309LL;
static int32_t x3234 = -1;
volatile uint16_t x3238 = 29620U;
int32_t x3536 = 2;
uint32_t t71 = 198928639U;
static volatile int32_t t73 = -1;
int32_t x3675 = INT32_MAX;
int32_t x3813 = 10491293;
uint8_t x3816 = 7U;
static volatile int64_t x3875 = 345389207721250LL;
int8_t x3897 = -1;
int32_t t77 = -65532;
static uint32_t x4205 = 483640695U;
static volatile int16_t x4206 = 369;
volatile int32_t t80 = 1695;
uint16_t x4219 = UINT16_MAX;
uint8_t x4220 = 10U;
static volatile uint8_t x4232 = 5U;
volatile int32_t t82 = -12886878;
volatile int8_t x4246 = INT8_MIN;
static int16_t x4284 = 0;
static int8_t x4304 = 5;
volatile uint16_t x4307 = UINT16_MAX;
volatile int32_t t91 = 1319596;
int64_t x4493 = INT64_MIN;
int64_t t92 = INT64_MIN;
volatile int32_t t95 = -117163;
static int8_t x4862 = 1;
int32_t t97 = -1730885;
int8_t x4969 = INT8_MIN;
int8_t x4970 = -1;
uint64_t x5016 = 49LLU;


void f0(void) {
	static uint16_t x53 = UINT16_MAX;
	int8_t x54 = -1;
	volatile uint8_t x55 = UINT8_MAX;
	static volatile int16_t x56 = 3;
	volatile int32_t t0 = 505435052;

	t0 = (x53^(x54<(x55>>x56)));

	if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x133 = -1;
	int8_t x135 = 0;
	uint64_t x136 = 0LLU;
	int32_t t1 = 27225677;

	t1 = (x133^(x134<(x135>>x136)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x157 = INT16_MIN;
	int16_t x158 = INT16_MIN;
	volatile int16_t x159 = INT16_MAX;
	volatile uint32_t x160 = 2U;
	volatile int32_t t2 = 543;

	t2 = (x157^(x158<(x159>>x160)));

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = UINT32_MAX;
	volatile uint8_t x176 = 0U;
	int32_t t3 = -393;

	t3 = (x173^(x174<(x175>>x176)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x209 = INT8_MIN;
	uint64_t x210 = 4130626LLU;
	int32_t x211 = INT32_MAX;
	int32_t t4 = 118;

	t4 = (x209^(x210<(x211>>x212)));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x265 = INT16_MIN;
	uint16_t x266 = 15U;
	volatile uint16_t x267 = UINT16_MAX;
	uint32_t x268 = 17U;
	int32_t t5 = 37;

	t5 = (x265^(x266<(x267>>x268)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x269 = 28326U;
	static uint8_t x272 = 7U;
	static volatile int32_t t6 = -5701667;

	t6 = (x269^(x270<(x271>>x272)));

	if (t6 != 28327) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x289 = -1;
	uint16_t x291 = 0U;
	uint16_t x292 = 1U;
	int32_t t7 = 15806;

	t7 = (x289^(x290<(x291>>x292)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MIN;
	static uint64_t x311 = 7764LLU;
	int16_t x312 = 18;
	int32_t t8 = 0;

	t8 = (x309^(x310<(x311>>x312)));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x339 = UINT32_MAX;
	int8_t x340 = 29;
	int64_t t9 = 1057751356728LL;

	t9 = (x337^(x338<(x339>>x340)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x437 = UINT32_MAX;
	int32_t x438 = 4;
	static int8_t x439 = 13;
	uint32_t x440 = 1U;
	volatile uint32_t t10 = 18086757U;

	t10 = (x437^(x438<(x439>>x440)));

	if (t10 != 4294967294U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x461 = 0U;
	uint8_t x462 = UINT8_MAX;
	uint8_t x463 = 2U;
	volatile uint32_t t11 = 107337U;

	t11 = (x461^(x462<(x463>>x464)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x629 = INT32_MAX;
	int32_t x630 = 519160919;
	uint8_t x631 = UINT8_MAX;
	uint8_t x632 = 1U;
	int32_t t12 = INT32_MAX;

	t12 = (x629^(x630<(x631>>x632)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x661 = UINT8_MAX;
	uint8_t x662 = 2U;
	volatile uint16_t x663 = 1U;
	volatile uint8_t x664 = 25U;
	volatile int32_t t13 = -13;

	t13 = (x661^(x662<(x663>>x664)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x685 = 13;
	volatile int8_t x686 = 63;
	static int32_t x687 = 407928;
	int16_t x688 = 1;
	int32_t t14 = -265578;

	t14 = (x685^(x686<(x687>>x688)));

	if (t14 != 12) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x749 = UINT8_MAX;
	uint16_t x750 = 20678U;
	uint16_t x751 = 1916U;
	static uint8_t x752 = 3U;
	volatile int32_t t15 = -837587;

	t15 = (x749^(x750<(x751>>x752)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x801 = 7;
	static int8_t x803 = 0;
	static uint64_t x804 = 26LLU;
	volatile int32_t t16 = -17;

	t16 = (x801^(x802<(x803>>x804)));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x833 = -3817630067259941LL;
	int8_t x834 = INT8_MAX;
	volatile uint64_t x835 = UINT64_MAX;
	volatile uint32_t x836 = 3U;

	t17 = (x833^(x834<(x835>>x836)));

	if (t17 != -3817630067259942LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x841 = UINT64_MAX;
	static uint8_t x842 = UINT8_MAX;
	static uint16_t x843 = UINT16_MAX;
	volatile uint64_t t18 = 24049LLU;

	t18 = (x841^(x842<(x843>>x844)));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x890 = 1898;
	uint8_t x891 = UINT8_MAX;
	volatile int64_t t19 = 136510LL;

	t19 = (x889^(x890<(x891>>x892)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x897 = -1;
	uint64_t x898 = UINT64_MAX;
	uint16_t x899 = 0U;
	static int8_t x900 = 0;
	int32_t t20 = 982751193;

	t20 = (x897^(x898<(x899>>x900)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x922 = 66525614962LL;
	int32_t x923 = 78;
	uint8_t x924 = 0U;
	volatile int32_t t21 = -23;

	t21 = (x921^(x922<(x923>>x924)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x946 = 38U;
	int64_t x947 = 6246666424058LL;
	volatile int32_t t22 = 630;

	t22 = (x945^(x946<(x947>>x948)));

	if (t22 != 1464) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x965 = 0U;
	int64_t x966 = -305LL;
	volatile uint64_t x967 = UINT64_MAX;
	volatile uint8_t x968 = 4U;
	volatile int32_t t23 = -57161553;

	t23 = (x965^(x966<(x967>>x968)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1001 = 24706028365023LLU;
	static int16_t x1002 = INT16_MAX;
	uint64_t x1003 = UINT64_MAX;
	int8_t x1004 = 54;
	uint64_t t24 = 1012961125LLU;

	t24 = (x1001^(x1002<(x1003>>x1004)));

	if (t24 != 24706028365023LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1138 = -1;
	static volatile uint64_t x1140 = 5LLU;
	static int32_t t25 = -585699794;

	t25 = (x1137^(x1138<(x1139>>x1140)));

	if (t25 != 12) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1397 = UINT8_MAX;
	uint64_t x1398 = 8465059LLU;
	int8_t x1399 = INT8_MAX;
	volatile int8_t x1400 = 2;

	t26 = (x1397^(x1398<(x1399>>x1400)));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1462 = 5LL;
	static uint16_t x1463 = 1540U;
	int32_t x1464 = 27;
	static int32_t t27 = 14088;

	t27 = (x1461^(x1462<(x1463>>x1464)));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1533 = INT16_MAX;
	static uint16_t x1534 = 0U;
	volatile uint8_t x1536 = 1U;
	volatile int32_t t28 = -52816;

	t28 = (x1533^(x1534<(x1535>>x1536)));

	if (t28 != 32766) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x1553 = INT8_MIN;
	uint8_t x1555 = UINT8_MAX;
	volatile uint64_t x1556 = 11LLU;
	int32_t t29 = 668;

	t29 = (x1553^(x1554<(x1555>>x1556)));

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1582 = UINT16_MAX;
	volatile int8_t x1583 = INT8_MAX;
	int32_t t30 = 326;

	t30 = (x1581^(x1582<(x1583>>x1584)));

	if (t30 != 160) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1709 = INT8_MAX;
	uint16_t x1712 = 41U;

	t31 = (x1709^(x1710<(x1711>>x1712)));

	if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1715 = 2709940322342LLU;
	uint16_t x1716 = 17U;
	static int32_t t32 = -6040328;

	t32 = (x1713^(x1714<(x1715>>x1716)));

	if (t32 != -11) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x1781 = 0LL;
	int64_t x1782 = INT64_MIN;
	uint8_t x1784 = 6U;
	int64_t t33 = 8705716986074LL;

	t33 = (x1781^(x1782<(x1783>>x1784)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1817 = 0U;
	static int32_t x1818 = INT32_MAX;
	volatile uint8_t x1820 = 0U;
	uint32_t t34 = 12247U;

	t34 = (x1817^(x1818<(x1819>>x1820)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1825 = -4;
	int8_t x1826 = -1;
	uint8_t x1827 = 1U;
	volatile int32_t x1828 = 1;
	volatile int32_t t35 = 28;

	t35 = (x1825^(x1826<(x1827>>x1828)));

	if (t35 != -3) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1950 = -1369619676605268LL;
	int16_t x1951 = 81;
	uint8_t x1952 = 5U;
	volatile int64_t t36 = 91LL;

	t36 = (x1949^(x1950<(x1951>>x1952)));

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2005 = INT8_MIN;
	int32_t x2006 = -1146;
	uint64_t x2007 = 662395073046LLU;
	static uint8_t x2008 = 38U;
	volatile int32_t t37 = -2453;

	t37 = (x2005^(x2006<(x2007>>x2008)));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2013 = 527093443990LLU;
	volatile int32_t x2014 = -1;
	uint64_t x2015 = UINT64_MAX;
	uint16_t x2016 = 37U;
	volatile uint64_t t38 = 2LLU;

	t38 = (x2013^(x2014<(x2015>>x2016)));

	if (t38 != 527093443990LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2029 = INT8_MIN;
	static uint64_t x2031 = UINT64_MAX;
	int64_t x2032 = 45LL;
	static int32_t t39 = 89481730;

	t39 = (x2029^(x2030<(x2031>>x2032)));

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2101 = INT32_MAX;
	int32_t x2102 = INT32_MIN;
	int32_t x2103 = 226227;
	int32_t t40 = -3;

	t40 = (x2101^(x2102<(x2103>>x2104)));

	if (t40 != 2147483646) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2117 = -646;
	int16_t x2118 = INT16_MIN;
	static int64_t x2119 = 1384638887746351LL;
	int8_t x2120 = 3;

	t41 = (x2117^(x2118<(x2119>>x2120)));

	if (t41 != -645) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2125 = INT8_MIN;
	volatile int32_t x2126 = -1;
	volatile int64_t x2127 = INT64_MAX;
	int16_t x2128 = 0;
	volatile int32_t t42 = 1683219;

	t42 = (x2125^(x2126<(x2127>>x2128)));

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2209 = 31U;
	volatile int16_t x2211 = 1;
	int64_t x2212 = 3LL;
	int32_t t43 = 7;

	t43 = (x2209^(x2210<(x2211>>x2212)));

	if (t43 != 30) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2217 = INT64_MAX;
	int32_t x2219 = 22;
	uint8_t x2220 = 4U;
	int64_t t44 = 1470LL;

	t44 = (x2217^(x2218<(x2219>>x2220)));

	if (t44 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2294 = UINT8_MAX;
	uint32_t x2295 = 8U;
	static volatile int8_t x2296 = 18;
	int32_t t45 = INT32_MIN;

	t45 = (x2293^(x2294<(x2295>>x2296)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2305 = 105U;
	uint32_t x2306 = 89654U;
	int16_t x2307 = INT16_MAX;
	int16_t x2308 = 1;
	static int32_t t46 = -58176101;

	t46 = (x2305^(x2306<(x2307>>x2308)));

	if (t46 != 105) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2338 = INT64_MIN;
	uint8_t x2339 = 23U;
	uint8_t x2340 = 1U;
	int32_t t47 = -1;

	t47 = (x2337^(x2338<(x2339>>x2340)));

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2401 = 113831961941LLU;
	volatile uint32_t x2402 = UINT32_MAX;
	static uint16_t x2404 = 58U;
	uint64_t t48 = 36048903118059366LLU;

	t48 = (x2401^(x2402<(x2403>>x2404)));

	if (t48 != 113831961941LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2433 = 171323998330LLU;
	static int64_t x2434 = INT64_MIN;
	uint64_t x2435 = UINT64_MAX;
	uint8_t x2436 = 1U;
	volatile uint64_t t49 = 20LLU;

	t49 = (x2433^(x2434<(x2435>>x2436)));

	if (t49 != 171323998330LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2441 = UINT64_MAX;
	volatile int64_t x2442 = INT64_MIN;
	volatile uint16_t x2443 = 9374U;
	static volatile uint64_t t50 = 150947LLU;

	t50 = (x2441^(x2442<(x2443>>x2444)));

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2569 = -1;
	int8_t x2570 = INT8_MIN;
	uint8_t x2571 = 15U;
	static int16_t x2572 = 0;

	t51 = (x2569^(x2570<(x2571>>x2572)));

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2597 = 2709U;
	uint32_t x2598 = 1U;
	uint32_t x2599 = UINT32_MAX;
	uint32_t x2600 = 2U;
	volatile uint32_t t52 = 3123399U;

	t52 = (x2597^(x2598<(x2599>>x2600)));

	if (t52 != 2708U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x2650 = -232;
	volatile uint8_t x2652 = 1U;
	volatile int32_t t53 = 143639;

	t53 = (x2649^(x2650<(x2651>>x2652)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x2753 = -1;
	static int64_t x2755 = 1215532LL;
	static uint8_t x2756 = 1U;
	static int32_t t54 = -3497046;

	t54 = (x2753^(x2754<(x2755>>x2756)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x2762 = -1LL;
	uint32_t x2763 = 392930289U;
	uint32_t x2764 = 3U;
	volatile int32_t t55 = -233530281;

	t55 = (x2761^(x2762<(x2763>>x2764)));

	if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2849 = -1;
	volatile int64_t x2850 = INT64_MAX;
	static int16_t x2851 = 4256;
	uint16_t x2852 = 2U;
	volatile int32_t t56 = 85840596;

	t56 = (x2849^(x2850<(x2851>>x2852)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2870 = INT16_MIN;
	uint8_t x2871 = 0U;
	volatile uint32_t x2872 = 1U;
	volatile int32_t t57 = 689691;

	t57 = (x2869^(x2870<(x2871>>x2872)));

	if (t57 != -16) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x2898 = INT64_MAX;
	volatile int32_t t58 = 92079906;

	t58 = (x2897^(x2898<(x2899>>x2900)));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2983 = INT8_MAX;
	int32_t t59 = -326;

	t59 = (x2981^(x2982<(x2983>>x2984)));

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3001 = INT8_MIN;
	int32_t x3002 = 4506;
	uint16_t x3003 = UINT16_MAX;
	int64_t x3004 = 5LL;
	static volatile int32_t t60 = -29610957;

	t60 = (x3001^(x3002<(x3003>>x3004)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3061 = 14316U;
	volatile int32_t x3062 = -1;
	uint8_t x3063 = UINT8_MAX;
	uint8_t x3064 = 3U;
	volatile int32_t t61 = 7269973;

	t61 = (x3061^(x3062<(x3063>>x3064)));

	if (t61 != 14317) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3117 = 268;
	volatile int8_t x3118 = -1;
	volatile int8_t x3119 = INT8_MAX;
	volatile uint16_t x3120 = 0U;
	int32_t t62 = -485;

	t62 = (x3117^(x3118<(x3119>>x3120)));

	if (t62 != 269) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3158 = 1;
	int32_t x3159 = 105;
	int8_t x3160 = 29;
	int32_t t63 = 12632;

	t63 = (x3157^(x3158<(x3159>>x3160)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3205 = 26U;
	uint16_t x3206 = 23U;
	uint16_t x3207 = UINT16_MAX;
	static uint8_t x3208 = 1U;
	static volatile int32_t t64 = -1;

	t64 = (x3205^(x3206<(x3207>>x3208)));

	if (t64 != 27) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3221 = -47;
	static uint8_t x3222 = 0U;
	static volatile int8_t x3223 = INT8_MAX;
	uint16_t x3224 = 3U;
	volatile int32_t t65 = 410473;

	t65 = (x3221^(x3222<(x3223>>x3224)));

	if (t65 != -48) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3225 = 221LL;
	uint8_t x3226 = 4U;
	int32_t x3227 = 48457012;

	t66 = (x3225^(x3226<(x3227>>x3228)));

	if (t66 != 220LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3233 = INT16_MIN;
	int64_t x3235 = INT64_MAX;
	static int16_t x3236 = 4;
	int32_t t67 = -64673;

	t67 = (x3233^(x3234<(x3235>>x3236)));

	if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3237 = -7887188;
	volatile uint64_t x3239 = 6434272589524002118LLU;
	uint32_t x3240 = 17U;
	volatile int32_t t68 = -636988;

	t68 = (x3237^(x3238<(x3239>>x3240)));

	if (t68 != -7887187) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x3329 = INT16_MIN;
	static int64_t x3330 = INT64_MIN;
	int8_t x3331 = INT8_MAX;
	static volatile uint8_t x3332 = 0U;
	volatile int32_t t69 = 371;

	t69 = (x3329^(x3330<(x3331>>x3332)));

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3445 = INT32_MIN;
	int64_t x3446 = INT64_MIN;
	uint32_t x3447 = 13U;
	static uint16_t x3448 = 16U;
	volatile int32_t t70 = -2257179;

	t70 = (x3445^(x3446<(x3447>>x3448)));

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3533 = 443539U;
	static int64_t x3534 = INT64_MIN;
	uint64_t x3535 = UINT64_MAX;

	t71 = (x3533^(x3534<(x3535>>x3536)));

	if (t71 != 443539U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3581 = -1;
	int16_t x3582 = INT16_MAX;
	uint16_t x3583 = 13936U;
	volatile uint16_t x3584 = 0U;
	volatile int32_t t72 = -861;

	t72 = (x3581^(x3582<(x3583>>x3584)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x3649 = INT8_MIN;
	int16_t x3650 = INT16_MAX;
	int8_t x3651 = INT8_MAX;
	uint8_t x3652 = 3U;

	t73 = (x3649^(x3650<(x3651>>x3652)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3673 = -483418;
	int8_t x3674 = INT8_MIN;
	uint8_t x3676 = 0U;
	int32_t t74 = 337;

	t74 = (x3673^(x3674<(x3675>>x3676)));

	if (t74 != -483417) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3814 = -1;
	uint32_t x3815 = UINT32_MAX;
	volatile int32_t t75 = -13078;

	t75 = (x3813^(x3814<(x3815>>x3816)));

	if (t75 != 10491293) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3873 = 129U;
	int16_t x3874 = -21;
	uint8_t x3876 = 14U;
	int32_t t76 = -79;

	t76 = (x3873^(x3874<(x3875>>x3876)));

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x3898 = INT64_MAX;
	int32_t x3899 = INT32_MAX;
	int8_t x3900 = 1;

	t77 = (x3897^(x3898<(x3899>>x3900)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4109 = 307U;
	int64_t x4110 = INT64_MIN;
	int64_t x4111 = INT64_MAX;
	volatile int16_t x4112 = 2;
	int32_t t78 = 30;

	t78 = (x4109^(x4110<(x4111>>x4112)));

	if (t78 != 306) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4207 = 1545288223U;
	int32_t x4208 = 4;
	uint32_t t79 = 6U;

	t79 = (x4205^(x4206<(x4207>>x4208)));

	if (t79 != 483640694U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4209 = INT16_MIN;
	int16_t x4210 = -1;
	uint16_t x4211 = UINT16_MAX;
	uint8_t x4212 = 0U;

	t80 = (x4209^(x4210<(x4211>>x4212)));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4217 = 16298328868734LLU;
	int8_t x4218 = -18;
	uint64_t t81 = 1309417013258LLU;

	t81 = (x4217^(x4218<(x4219>>x4220)));

	if (t81 != 16298328868735LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4229 = INT32_MIN;
	uint8_t x4230 = 3U;
	static uint64_t x4231 = 809713098LLU;

	t82 = (x4229^(x4230<(x4231>>x4232)));

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x4245 = 75974069004941715LLU;
	uint8_t x4247 = UINT8_MAX;
	static volatile int8_t x4248 = 0;
	volatile uint64_t t83 = 1799552290410169815LLU;

	t83 = (x4245^(x4246<(x4247>>x4248)));

	if (t83 != 75974069004941714LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4261 = UINT32_MAX;
	uint8_t x4262 = 0U;
	uint16_t x4263 = UINT16_MAX;
	static volatile uint8_t x4264 = 6U;
	volatile uint32_t t84 = 33U;

	t84 = (x4261^(x4262<(x4263>>x4264)));

	if (t84 != 4294967294U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4281 = -1LL;
	static int8_t x4282 = 48;
	uint64_t x4283 = 5LLU;
	volatile int64_t t85 = -21190015LL;

	t85 = (x4281^(x4282<(x4283>>x4284)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4301 = 8U;
	uint64_t x4302 = UINT64_MAX;
	int32_t x4303 = 184650;
	volatile int32_t t86 = -851898;

	t86 = (x4301^(x4302<(x4303>>x4304)));

	if (t86 != 8) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4305 = UINT64_MAX;
	volatile uint8_t x4306 = 10U;
	int8_t x4308 = 5;
	volatile uint64_t t87 = 3193955027162140LLU;

	t87 = (x4305^(x4306<(x4307>>x4308)));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4341 = 3110U;
	int16_t x4342 = INT16_MIN;
	static uint64_t x4343 = UINT64_MAX;
	uint8_t x4344 = 15U;
	uint32_t t88 = 131U;

	t88 = (x4341^(x4342<(x4343>>x4344)));

	if (t88 != 3110U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4453 = INT8_MAX;
	int8_t x4454 = INT8_MIN;
	int64_t x4455 = INT64_MAX;
	static uint8_t x4456 = 28U;
	int32_t t89 = -2;

	t89 = (x4453^(x4454<(x4455>>x4456)));

	if (t89 != 126) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4465 = 15U;
	static volatile uint8_t x4466 = UINT8_MAX;
	uint8_t x4467 = 6U;
	uint64_t x4468 = 0LLU;
	volatile int32_t t90 = 8112;

	t90 = (x4465^(x4466<(x4467>>x4468)));

	if (t90 != 15) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4477 = 10889U;
	int64_t x4478 = -1LL;
	uint32_t x4479 = UINT32_MAX;
	int16_t x4480 = 1;

	t91 = (x4477^(x4478<(x4479>>x4480)));

	if (t91 != 10888) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4494 = 694LL;
	uint32_t x4495 = 6U;
	uint8_t x4496 = 16U;

	t92 = (x4493^(x4494<(x4495>>x4496)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x4525 = INT8_MIN;
	static int16_t x4526 = INT16_MAX;
	uint64_t x4527 = 812705LLU;
	static int8_t x4528 = 0;
	static int32_t t93 = -24719;

	t93 = (x4525^(x4526<(x4527>>x4528)));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4713 = -1;
	int64_t x4714 = -1LL;
	volatile int8_t x4715 = INT8_MAX;
	uint8_t x4716 = 7U;
	int32_t t94 = -505153;

	t94 = (x4713^(x4714<(x4715>>x4716)));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x4761 = -1;
	static uint16_t x4762 = 2U;
	uint8_t x4763 = UINT8_MAX;
	static uint8_t x4764 = 3U;

	t95 = (x4761^(x4762<(x4763>>x4764)));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4825 = INT8_MAX;
	static int16_t x4826 = 7;
	uint32_t x4827 = UINT32_MAX;
	uint8_t x4828 = 1U;
	static int32_t t96 = 214976;

	t96 = (x4825^(x4826<(x4827>>x4828)));

	if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x4861 = INT16_MAX;
	int32_t x4863 = INT32_MAX;
	volatile uint8_t x4864 = 3U;

	t97 = (x4861^(x4862<(x4863>>x4864)));

	if (t97 != 32766) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x4971 = 78060787U;
	volatile uint16_t x4972 = 3U;
	int32_t t98 = -56;

	t98 = (x4969^(x4970<(x4971>>x4972)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5013 = UINT64_MAX;
	uint32_t x5014 = 14860303U;
	static int64_t x5015 = 9488255328051LL;
	uint64_t t99 = UINT64_MAX;

	t99 = (x5013^(x5014<(x5015>>x5016)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

