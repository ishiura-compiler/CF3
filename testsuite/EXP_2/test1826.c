#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x45 = INT16_MAX;
volatile int64_t x46 = INT64_MIN;
uint8_t x122 = 17U;
int32_t t3 = -1039941713;
static volatile uint64_t x133 = 500218LLU;
static uint16_t x136 = 41U;
uint8_t x242 = 1U;
int64_t x275 = -18952177171352871LL;
volatile int64_t t7 = 112291530LL;
volatile uint16_t x437 = 169U;
volatile int64_t t11 = -1LL;
static uint8_t x461 = UINT8_MAX;
static int16_t x464 = 6;
static int8_t x556 = 40;
static int8_t x589 = -7;
static uint32_t x590 = 915046943U;
uint8_t x592 = 0U;
volatile uint8_t x644 = 19U;
volatile int32_t x673 = 2678;
uint32_t x676 = 7U;
int16_t x705 = 2839;
static int8_t x754 = -1;
int32_t x821 = INT32_MIN;
uint64_t x822 = UINT64_MAX;
static volatile uint32_t t24 = 35198U;
int32_t t25 = -4084;
uint64_t x878 = 3381538914522LLU;
static int64_t x879 = -683278052LL;
static uint64_t x937 = 8083613090671125LLU;
int32_t x938 = -1;
uint64_t x951 = UINT64_MAX;
static uint16_t x952 = 12U;
int16_t x969 = INT16_MAX;
volatile int64_t x979 = 116LL;
int8_t x1068 = 17;
static volatile int64_t t31 = -562143055927652LL;
uint32_t x1075 = UINT32_MAX;
uint32_t t32 = 507427U;
int16_t x1277 = 1;
volatile int32_t x1278 = -1;
uint8_t x1361 = 1U;
volatile uint8_t x1400 = 31U;
int64_t t38 = 2253147412200474LL;
int8_t x1575 = -60;
int16_t x1612 = 6;
int16_t x1630 = -13;
volatile uint8_t x1632 = 13U;
static int64_t t42 = -4567952983328143678LL;
volatile uint64_t t45 = 635LLU;
int64_t x1701 = INT64_MIN;
volatile int64_t t46 = 48922821841LL;
volatile uint16_t x1745 = UINT16_MAX;
int64_t x1823 = INT64_MIN;
static int64_t x1829 = INT64_MAX;
uint32_t x1831 = UINT32_MAX;
int64_t x1868 = 0LL;
static int8_t x1896 = 0;
int8_t x1939 = INT8_MIN;
int32_t t55 = INT32_MAX;
uint32_t x2116 = 1U;
uint8_t x2188 = 30U;
volatile int64_t t58 = 0LL;
int64_t x2238 = INT64_MAX;
int64_t x2273 = -3925081LL;
volatile uint8_t x2274 = UINT8_MAX;
volatile uint16_t x2299 = 379U;
uint32_t x2435 = 1U;
uint8_t x2436 = 13U;
int8_t x2439 = INT8_MIN;
static uint16_t x2506 = 155U;
static uint32_t t70 = 1U;
uint8_t x2560 = 2U;
static volatile int32_t t71 = -1722;
int32_t t72 = 9911754;
volatile int32_t x2669 = INT32_MAX;
static int8_t x2670 = INT8_MIN;
int32_t t75 = 11;
static int16_t x2757 = -65;
uint64_t x2758 = 42680863226LLU;
uint32_t x2808 = 2U;
uint8_t x3024 = 0U;
static uint64_t t82 = 37877749781LLU;
static volatile int8_t x3046 = -15;
static volatile int32_t x3048 = 0;
int64_t x3055 = 2714414393781830LL;
volatile uint8_t x3069 = 3U;
uint8_t x3070 = 16U;
static int16_t x3085 = -5;
volatile uint32_t t87 = 26664U;
volatile int16_t x3093 = -1;
int16_t x3095 = -1;
int32_t x3142 = INT32_MIN;
uint16_t x3145 = 1U;
uint16_t x3147 = 23484U;
int64_t t92 = -69070105LL;
static uint8_t x3164 = 18U;
int16_t x3227 = -1;
uint32_t t96 = 1983151U;
int16_t x3283 = 0;


void f0(void) {
	int16_t x47 = 184;
	static int64_t x48 = 4LL;
	volatile int64_t t0 = 3437163456226LL;

	t0 = ((x45&(x46&x47))<<x48);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x73 = 15831;
	volatile uint64_t x74 = UINT64_MAX;
	static uint64_t x75 = 626884785380155636LLU;
	volatile int32_t x76 = 19;
	uint64_t t1 = 10572409701887LLU;

	t1 = ((x73&(x74&x75))<<x76);

	if (t1 != 4406116352LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x97 = 657034;
	int32_t x98 = -7;
	static int32_t x99 = INT32_MIN;
	uint16_t x100 = 24U;
	volatile int32_t t2 = 5;

	t2 = ((x97&(x98&x99))<<x100);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x121 = INT8_MIN;
	static volatile int8_t x123 = 0;
	volatile uint8_t x124 = 1U;

	t3 = ((x121&(x122&x123))<<x124);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x134 = INT16_MAX;
	static uint16_t x135 = 996U;
	volatile uint64_t t4 = 7784270851LLU;

	t4 = ((x133&(x134&x135))<<x136);

	if (t4 != 1055531162664960LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x241 = INT64_MIN;
	uint8_t x243 = UINT8_MAX;
	static int16_t x244 = 1;
	volatile int64_t t5 = 1750617572LL;

	t5 = ((x241&(x242&x243))<<x244);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x253 = 3071118020648003LLU;
	int32_t x254 = INT32_MIN;
	static int32_t x255 = INT32_MIN;
	uint8_t x256 = 1U;
	volatile uint64_t t6 = 224104LLU;

	t6 = ((x253&(x254&x255))<<x256);

	if (t6 != 6142232730009600LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x273 = -5342;
	uint8_t x274 = UINT8_MAX;
	int32_t x276 = 34;

	t7 = ((x273&(x274&x275))<<x276);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x381 = INT8_MAX;
	static volatile uint64_t x382 = UINT64_MAX;
	uint64_t x383 = UINT64_MAX;
	uint8_t x384 = 2U;
	uint64_t t8 = 2722LLU;

	t8 = ((x381&(x382&x383))<<x384);

	if (t8 != 508LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x401 = 286617242878LLU;
	volatile int16_t x402 = INT16_MIN;
	int64_t x403 = 2410466LL;
	uint8_t x404 = 1U;
	uint64_t t9 = 44736LLU;

	t9 = ((x401&(x402&x403))<<x404);

	if (t9 != 4194304LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x438 = 668679U;
	volatile int16_t x439 = INT16_MIN;
	uint8_t x440 = 1U;
	static uint32_t t10 = 116U;

	t10 = ((x437&(x438&x439))<<x440);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x441 = INT64_MIN;
	uint16_t x442 = 6U;
	int32_t x443 = INT32_MAX;
	int8_t x444 = 24;

	t11 = ((x441&(x442&x443))<<x444);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x462 = INT8_MAX;
	static int64_t x463 = INT64_MIN;
	volatile int64_t t12 = -9803908707568LL;

	t12 = ((x461&(x462&x463))<<x464);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x553 = INT64_MIN;
	int32_t x554 = -1;
	uint8_t x555 = 50U;
	volatile int64_t t13 = 56LL;

	t13 = ((x553&(x554&x555))<<x556);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x591 = INT16_MIN;
	volatile uint32_t t14 = 63450U;

	t14 = ((x589&(x590&x591))<<x592);

	if (t14 != 915046400U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x609 = INT64_MIN;
	int16_t x610 = 4027;
	uint32_t x611 = 164494754U;
	int8_t x612 = 0;
	static int64_t t15 = -564LL;

	t15 = ((x609&(x610&x611))<<x612);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x613 = INT16_MAX;
	uint16_t x614 = UINT16_MAX;
	int16_t x615 = -1;
	volatile uint8_t x616 = 2U;
	volatile int32_t t16 = 144909880;

	t16 = ((x613&(x614&x615))<<x616);

	if (t16 != 131068) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x625 = INT32_MIN;
	uint16_t x626 = 980U;
	int8_t x627 = INT8_MAX;
	int64_t x628 = 0LL;
	volatile int32_t t17 = 155;

	t17 = ((x625&(x626&x627))<<x628);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x641 = 1912618LLU;
	uint8_t x642 = 17U;
	volatile int32_t x643 = -11;
	static uint64_t t18 = 7291LLU;

	t18 = ((x641&(x642&x643))<<x644);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x674 = INT64_MAX;
	static int16_t x675 = -1;
	int64_t t19 = 484008242464077381LL;

	t19 = ((x673&(x674&x675))<<x676);

	if (t19 != 342784LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x677 = 1667;
	int16_t x678 = 10;
	static volatile uint16_t x679 = 6U;
	static uint8_t x680 = 1U;
	int32_t t20 = 64427;

	t20 = ((x677&(x678&x679))<<x680);

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x706 = INT64_MIN;
	volatile int16_t x707 = INT16_MIN;
	int16_t x708 = 1;
	volatile int64_t t21 = -466482822326223730LL;

	t21 = ((x705&(x706&x707))<<x708);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x753 = -1;
	int64_t x755 = 2LL;
	int32_t x756 = 1;
	int64_t t22 = 196653453LL;

	t22 = ((x753&(x754&x755))<<x756);

	if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x823 = 1691949LLU;
	int8_t x824 = 12;
	uint64_t t23 = 1256639750122637LLU;

	t23 = ((x821&(x822&x823))<<x824);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x849 = UINT32_MAX;
	volatile int8_t x850 = -1;
	int16_t x851 = -1;
	uint32_t x852 = 14U;

	t24 = ((x849&(x850&x851))<<x852);

	if (t24 != 4294950912U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x869 = 955;
	int8_t x870 = -1;
	volatile uint16_t x871 = UINT16_MAX;
	volatile uint8_t x872 = 1U;

	t25 = ((x869&(x870&x871))<<x872);

	if (t25 != 1910) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x877 = 692861591U;
	int8_t x880 = 4;
	static volatile uint64_t t26 = 973916855LLU;

	t26 = ((x877&(x878&x879))<<x880);

	if (t26 != 339738880LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x939 = 4680734U;
	uint16_t x940 = 5U;
	static uint64_t t27 = 1013381515378LLU;

	t27 = ((x937&(x938&x939))<<x940);

	if (t27 != 145556096LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x949 = INT32_MAX;
	int8_t x950 = 1;
	volatile uint64_t t28 = 17LLU;

	t28 = ((x949&(x950&x951))<<x952);

	if (t28 != 4096LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x970 = -115923602LL;
	static uint32_t x971 = 910179U;
	uint32_t x972 = 1U;
	volatile int64_t t29 = 1363LL;

	t29 = ((x969&(x970&x971))<<x972);

	if (t29 != 17092LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x977 = INT16_MIN;
	int8_t x978 = -1;
	volatile uint16_t x980 = 1U;
	int64_t t30 = 15520981LL;

	t30 = ((x977&(x978&x979))<<x980);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1065 = INT16_MAX;
	volatile uint16_t x1066 = 28U;
	int64_t x1067 = INT64_MAX;

	t31 = ((x1065&(x1066&x1067))<<x1068);

	if (t31 != 3670016LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1073 = INT32_MIN;
	static int16_t x1074 = INT16_MIN;
	uint64_t x1076 = 3LLU;

	t32 = ((x1073&(x1074&x1075))<<x1076);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1261 = INT8_MAX;
	int64_t x1262 = INT64_MIN;
	int8_t x1263 = -24;
	static uint8_t x1264 = 0U;
	int64_t t33 = -380225980LL;

	t33 = ((x1261&(x1262&x1263))<<x1264);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1269 = UINT32_MAX;
	uint8_t x1270 = 0U;
	static int32_t x1271 = -1;
	uint8_t x1272 = 7U;
	volatile uint32_t t34 = 140063U;

	t34 = ((x1269&(x1270&x1271))<<x1272);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1279 = INT8_MIN;
	static uint8_t x1280 = 0U;
	int32_t t35 = -23;

	t35 = ((x1277&(x1278&x1279))<<x1280);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1321 = 208402857226244466LLU;
	static volatile uint64_t x1322 = UINT64_MAX;
	uint8_t x1323 = UINT8_MAX;
	static uint8_t x1324 = 43U;
	uint64_t t36 = 52115871LLU;

	t36 = ((x1321&(x1322&x1323))<<x1324);

	if (t36 != 1002754604531712LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x1362 = 5;
	volatile uint8_t x1363 = UINT8_MAX;
	static int8_t x1364 = 3;
	volatile int32_t t37 = 71;

	t37 = ((x1361&(x1362&x1363))<<x1364);

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1397 = INT64_MAX;
	int32_t x1398 = INT32_MAX;
	static int64_t x1399 = INT64_MAX;

	t38 = ((x1397&(x1398&x1399))<<x1400);

	if (t38 != 4611686016279904256LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1573 = 3074841044362LL;
	uint8_t x1574 = UINT8_MAX;
	static int16_t x1576 = 0;
	int64_t t39 = 5645938152LL;

	t39 = ((x1573&(x1574&x1575))<<x1576);

	if (t39 != 128LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1609 = INT64_MAX;
	int64_t x1610 = INT64_MIN;
	uint8_t x1611 = UINT8_MAX;
	volatile int64_t t40 = 396232487LL;

	t40 = ((x1609&(x1610&x1611))<<x1612);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1629 = INT64_MIN;
	int16_t x1631 = INT16_MAX;
	static int64_t t41 = -8249734LL;

	t41 = ((x1629&(x1630&x1631))<<x1632);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1645 = -1LL;
	int8_t x1646 = INT8_MIN;
	uint32_t x1647 = 147U;
	volatile uint64_t x1648 = 45LLU;

	t42 = ((x1645&(x1646&x1647))<<x1648);

	if (t42 != 4503599627370496LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1649 = UINT32_MAX;
	uint64_t x1650 = 298847678851LLU;
	int64_t x1651 = INT64_MIN;
	uint8_t x1652 = 0U;
	volatile uint64_t t43 = 32283179179LLU;

	t43 = ((x1649&(x1650&x1651))<<x1652);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1673 = INT16_MIN;
	static volatile uint8_t x1674 = 97U;
	static int32_t x1675 = -1;
	int16_t x1676 = 1;
	int32_t t44 = -15;

	t44 = ((x1673&(x1674&x1675))<<x1676);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1693 = -1LL;
	uint64_t x1694 = UINT64_MAX;
	static int16_t x1695 = -1;
	static uint8_t x1696 = 6U;

	t45 = ((x1693&(x1694&x1695))<<x1696);

	if (t45 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1702 = INT32_MAX;
	volatile uint32_t x1703 = UINT32_MAX;
	int8_t x1704 = 21;

	t46 = ((x1701&(x1702&x1703))<<x1704);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1746 = -1;
	static uint64_t x1747 = 355LLU;
	static int8_t x1748 = 7;
	uint64_t t47 = 99818463158LLU;

	t47 = ((x1745&(x1746&x1747))<<x1748);

	if (t47 != 45440LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x1789 = 2168LLU;
	int64_t x1790 = 576202LL;
	volatile uint8_t x1791 = 5U;
	int16_t x1792 = 0;
	volatile uint64_t t48 = 6149LLU;

	t48 = ((x1789&(x1790&x1791))<<x1792);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1821 = INT8_MIN;
	uint8_t x1822 = 6U;
	int32_t x1824 = 1;
	volatile int64_t t49 = -15LL;

	t49 = ((x1821&(x1822&x1823))<<x1824);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x1830 = INT16_MAX;
	int32_t x1832 = 34;
	int64_t t50 = 3298LL;

	t50 = ((x1829&(x1830&x1831))<<x1832);

	if (t50 != 562932773552128LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1865 = INT64_MIN;
	static volatile int64_t x1866 = INT64_MAX;
	int8_t x1867 = INT8_MIN;
	int64_t t51 = -3272757305LL;

	t51 = ((x1865&(x1866&x1867))<<x1868);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x1893 = 56;
	int32_t x1894 = -1;
	static int16_t x1895 = INT16_MAX;
	int32_t t52 = 3;

	t52 = ((x1893&(x1894&x1895))<<x1896);

	if (t52 != 56) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x1937 = UINT8_MAX;
	int32_t x1938 = -33528120;
	int8_t x1940 = 3;
	static int32_t t53 = 13;

	t53 = ((x1937&(x1938&x1939))<<x1940);

	if (t53 != 1024) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1945 = INT64_MIN;
	int64_t x1946 = -1LL;
	uint8_t x1947 = UINT8_MAX;
	int32_t x1948 = 44;
	volatile int64_t t54 = -48LL;

	t54 = ((x1945&(x1946&x1947))<<x1948);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2093 = INT32_MAX;
	int32_t x2094 = -1;
	volatile int8_t x2095 = -1;
	int16_t x2096 = 0;

	t55 = ((x2093&(x2094&x2095))<<x2096);

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2113 = 6003648389LLU;
	uint64_t x2114 = 529192927132LLU;
	int32_t x2115 = -12;
	volatile uint64_t t56 = 367LLU;

	t56 = ((x2113&(x2114&x2115))<<x2116);

	if (t56 != 9809448712LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2185 = 1460632828LLU;
	uint64_t x2186 = 4LLU;
	uint64_t x2187 = 3220903737164835975LLU;
	static volatile uint64_t t57 = 223985095469943904LLU;

	t57 = ((x2185&(x2186&x2187))<<x2188);

	if (t57 != 4294967296LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x2201 = 3U;
	volatile int32_t x2202 = -207;
	int64_t x2203 = INT64_MAX;
	uint64_t x2204 = 0LLU;

	t58 = ((x2201&(x2202&x2203))<<x2204);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2209 = INT32_MIN;
	int8_t x2210 = INT8_MIN;
	static uint16_t x2211 = UINT16_MAX;
	int8_t x2212 = 0;
	int32_t t59 = -66907535;

	t59 = ((x2209&(x2210&x2211))<<x2212);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2237 = INT16_MAX;
	int8_t x2239 = 46;
	int8_t x2240 = 1;
	int64_t t60 = 3045587815918631LL;

	t60 = ((x2237&(x2238&x2239))<<x2240);

	if (t60 != 92LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x2257 = 80U;
	int64_t x2258 = -285041694813LL;
	uint16_t x2259 = 63U;
	int32_t x2260 = 16;
	int64_t t61 = 165LL;

	t61 = ((x2257&(x2258&x2259))<<x2260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2275 = INT64_MIN;
	int8_t x2276 = 23;
	int64_t t62 = -109180573619LL;

	t62 = ((x2273&(x2274&x2275))<<x2276);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2281 = INT16_MIN;
	static uint64_t x2282 = 29711279113021LLU;
	static int8_t x2283 = 0;
	volatile uint16_t x2284 = 8U;
	volatile uint64_t t63 = 11619LLU;

	t63 = ((x2281&(x2282&x2283))<<x2284);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2297 = -1;
	uint64_t x2298 = 76821256LLU;
	uint8_t x2300 = 58U;
	uint64_t t64 = 7877LLU;

	t64 = ((x2297&(x2298&x2299))<<x2300);

	if (t64 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x2357 = 5U;
	volatile int8_t x2358 = INT8_MIN;
	int8_t x2359 = INT8_MIN;
	static uint64_t x2360 = 0LLU;
	volatile int32_t t65 = -26928806;

	t65 = ((x2357&(x2358&x2359))<<x2360);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2429 = 408550545U;
	int32_t x2430 = INT32_MAX;
	static int16_t x2431 = INT16_MIN;
	uint8_t x2432 = 7U;
	volatile uint32_t t66 = 30212U;

	t66 = ((x2429&(x2430&x2431))<<x2432);

	if (t66 != 750780416U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2433 = UINT64_MAX;
	int32_t x2434 = INT32_MAX;
	volatile uint64_t t67 = 332731LLU;

	t67 = ((x2433&(x2434&x2435))<<x2436);

	if (t67 != 8192LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2437 = INT64_MAX;
	int16_t x2438 = 1;
	static uint8_t x2440 = 6U;
	volatile int64_t t68 = 1024LL;

	t68 = ((x2437&(x2438&x2439))<<x2440);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x2477 = UINT8_MAX;
	volatile int16_t x2478 = 466;
	volatile int16_t x2479 = -1;
	uint8_t x2480 = 6U;
	static volatile int32_t t69 = 8038210;

	t69 = ((x2477&(x2478&x2479))<<x2480);

	if (t69 != 13440) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x2505 = INT16_MIN;
	uint32_t x2507 = 10281628U;
	uint8_t x2508 = 0U;

	t70 = ((x2505&(x2506&x2507))<<x2508);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2557 = 21;
	int32_t x2558 = -314497526;
	int32_t x2559 = -113847964;

	t71 = ((x2557&(x2558&x2559))<<x2560);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2561 = 18U;
	int32_t x2562 = -9005;
	int16_t x2563 = INT16_MAX;
	uint32_t x2564 = 1U;

	t72 = ((x2561&(x2562&x2563))<<x2564);

	if (t72 != 36) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2589 = -1;
	int16_t x2590 = INT16_MIN;
	int32_t x2591 = INT32_MAX;
	static volatile int8_t x2592 = 0;
	int32_t t73 = 3931617;

	t73 = ((x2589&(x2590&x2591))<<x2592);

	if (t73 != 2147450880) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2609 = 1350;
	static volatile uint32_t x2610 = 698U;
	volatile int64_t x2611 = INT64_MIN;
	volatile uint8_t x2612 = 3U;
	volatile int64_t t74 = 208904787385152LL;

	t74 = ((x2609&(x2610&x2611))<<x2612);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2671 = INT8_MAX;
	uint8_t x2672 = 3U;

	t75 = ((x2669&(x2670&x2671))<<x2672);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2759 = -69;
	uint16_t x2760 = 2U;
	volatile uint64_t t76 = 609872110165LLU;

	t76 = ((x2757&(x2758&x2759))<<x2760);

	if (t76 != 170723452648LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2805 = 14600399426134066LL;
	volatile int64_t x2806 = INT64_MIN;
	int32_t x2807 = -46;
	volatile int64_t t77 = 328LL;

	t77 = ((x2805&(x2806&x2807))<<x2808);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2821 = 1;
	volatile int16_t x2822 = INT16_MAX;
	static uint16_t x2823 = 2U;
	volatile int8_t x2824 = 27;
	volatile int32_t t78 = 227;

	t78 = ((x2821&(x2822&x2823))<<x2824);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2885 = INT32_MIN;
	uint16_t x2886 = 4U;
	int8_t x2887 = INT8_MAX;
	int8_t x2888 = 0;
	static int32_t t79 = 498156673;

	t79 = ((x2885&(x2886&x2887))<<x2888);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2925 = INT8_MAX;
	int64_t x2926 = INT64_MAX;
	int32_t x2927 = INT32_MAX;
	static uint8_t x2928 = 6U;
	volatile int64_t t80 = 3440LL;

	t80 = ((x2925&(x2926&x2927))<<x2928);

	if (t80 != 8128LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3001 = INT8_MAX;
	uint8_t x3002 = UINT8_MAX;
	uint32_t x3003 = 1U;
	static int8_t x3004 = 1;
	uint32_t t81 = 4U;

	t81 = ((x3001&(x3002&x3003))<<x3004);

	if (t81 != 2U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x3021 = 120113268U;
	uint16_t x3022 = 120U;
	static uint64_t x3023 = 1619015980LLU;

	t82 = ((x3021&(x3022&x3023))<<x3024);

	if (t82 != 32LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3045 = INT8_MIN;
	static int64_t x3047 = INT64_MAX;
	int64_t t83 = -32519749765503LL;

	t83 = ((x3045&(x3046&x3047))<<x3048);

	if (t83 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x3053 = -1;
	int8_t x3054 = INT8_MAX;
	static uint32_t x3056 = 0U;
	static int64_t t84 = 40047LL;

	t84 = ((x3053&(x3054&x3055))<<x3056);

	if (t84 != 70LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x3071 = UINT8_MAX;
	int32_t x3072 = 1;
	int32_t t85 = 264095490;

	t85 = ((x3069&(x3070&x3071))<<x3072);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x3073 = -1LL;
	static int32_t x3074 = INT32_MAX;
	uint32_t x3075 = UINT32_MAX;
	int16_t x3076 = 6;
	volatile int64_t t86 = 45829773634878092LL;

	t86 = ((x3073&(x3074&x3075))<<x3076);

	if (t86 != 137438953408LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3086 = -1;
	uint32_t x3087 = 22U;
	static int8_t x3088 = 3;

	t87 = ((x3085&(x3086&x3087))<<x3088);

	if (t87 != 144U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x3094 = 7495;
	int32_t x3096 = 0;
	int32_t t88 = -3732;

	t88 = ((x3093&(x3094&x3095))<<x3096);

	if (t88 != 7495) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3117 = 2969;
	uint8_t x3118 = 2U;
	volatile int8_t x3119 = INT8_MIN;
	uint8_t x3120 = 0U;
	volatile int32_t t89 = -2;

	t89 = ((x3117&(x3118&x3119))<<x3120);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3141 = UINT32_MAX;
	static uint16_t x3143 = 58U;
	uint8_t x3144 = 25U;
	uint32_t t90 = 38U;

	t90 = ((x3141&(x3142&x3143))<<x3144);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3146 = -1;
	volatile uint8_t x3148 = 2U;
	int32_t t91 = 29483;

	t91 = ((x3145&(x3146&x3147))<<x3148);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x3157 = -1LL;
	static int64_t x3158 = 498160345273725350LL;
	uint8_t x3159 = 2U;
	uint8_t x3160 = 1U;

	t92 = ((x3157&(x3158&x3159))<<x3160);

	if (t92 != 4LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x3161 = UINT8_MAX;
	static volatile int32_t x3162 = 425300;
	int32_t x3163 = -1;
	int32_t t93 = 3;

	t93 = ((x3161&(x3162&x3163))<<x3164);

	if (t93 != 22020096) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x3165 = UINT64_MAX;
	volatile uint64_t x3166 = 1119523192261LLU;
	uint8_t x3167 = 1U;
	uint8_t x3168 = 22U;
	volatile uint64_t t94 = 342470LLU;

	t94 = ((x3165&(x3166&x3167))<<x3168);

	if (t94 != 4194304LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x3225 = INT32_MIN;
	volatile uint8_t x3226 = 57U;
	uint8_t x3228 = 27U;
	static volatile int32_t t95 = -1;

	t95 = ((x3225&(x3226&x3227))<<x3228);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3261 = UINT32_MAX;
	int8_t x3262 = -15;
	int32_t x3263 = 48000798;
	int8_t x3264 = 0;

	t96 = ((x3261&(x3262&x3263))<<x3264);

	if (t96 != 48000784U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3281 = -1LL;
	int32_t x3282 = 1576114;
	int8_t x3284 = 14;
	volatile int64_t t97 = -469196LL;

	t97 = ((x3281&(x3282&x3283))<<x3284);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3305 = INT64_MAX;
	int64_t x3306 = -1LL;
	static int8_t x3307 = INT8_MAX;
	uint8_t x3308 = 3U;
	volatile int64_t t98 = -1997473768LL;

	t98 = ((x3305&(x3306&x3307))<<x3308);

	if (t98 != 1016LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3341 = 17U;
	static int8_t x3342 = 0;
	static uint16_t x3343 = 82U;
	uint16_t x3344 = 17U;
	int32_t t99 = 20702;

	t99 = ((x3341&(x3342&x3343))<<x3344);

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

