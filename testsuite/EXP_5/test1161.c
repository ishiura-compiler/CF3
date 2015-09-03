#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x150 = 11U;
int16_t x152 = -1;
int32_t x168 = -1;
int8_t x213 = -1;
uint8_t x214 = 32U;
uint16_t x215 = 1U;
uint32_t x216 = UINT32_MAX;
static volatile uint32_t t3 = 472736408U;
volatile uint32_t x438 = UINT32_MAX;
volatile int64_t t5 = -33LL;
static uint8_t x547 = 2U;
uint64_t x548 = UINT64_MAX;
uint64_t x690 = UINT64_MAX;
static uint8_t x691 = 2U;
uint16_t x692 = UINT16_MAX;
int64_t x741 = -44010310537488LL;
volatile uint16_t x744 = 11U;
int8_t x957 = 3;
volatile uint8_t x967 = 2U;
int16_t x1050 = 30;
volatile int64_t t17 = -19861368969465LL;
int16_t x1086 = 909;
int16_t x1088 = 1718;
int32_t t21 = 8035;
static volatile int32_t t23 = 0;
static uint16_t x1323 = 7U;
static int64_t x1357 = INT64_MIN;
int16_t x1399 = 16;
volatile uint64_t t26 = 164412261421600764LLU;
static volatile uint8_t x1403 = 24U;
static volatile int32_t t27 = -3078532;
uint32_t t28 = 44371U;
uint64_t t29 = 1712LLU;
int64_t x1592 = 251469LL;
uint8_t x1598 = UINT8_MAX;
int64_t x1599 = 13LL;
int16_t x1600 = 6;
uint64_t x1645 = UINT64_MAX;
volatile int8_t x1646 = INT8_MAX;
int16_t x1647 = 1;
volatile uint64_t t32 = 1622287723856433LLU;
int32_t x1753 = -1;
int8_t x1754 = INT8_MAX;
volatile int16_t x1820 = INT16_MIN;
int32_t x1825 = INT32_MIN;
uint8_t x1827 = 2U;
volatile int32_t t38 = 95195114;
volatile uint16_t x2317 = 253U;
int16_t x2457 = 22;
int32_t x2524 = INT32_MIN;
int64_t t44 = -42521275049186980LL;
uint16_t x2644 = 5604U;
volatile int32_t x2732 = INT32_MIN;
static volatile int32_t x2777 = INT32_MAX;
static volatile uint16_t x2822 = 16160U;
static uint16_t x2824 = UINT16_MAX;
volatile int32_t x2877 = 2589549;
uint16_t x2880 = 403U;
uint32_t x2901 = UINT32_MAX;
int16_t x2931 = 7;
int64_t t53 = -99LL;
int8_t x2935 = 1;
uint64_t t54 = 1141357333LLU;
volatile uint32_t x3062 = UINT32_MAX;
uint16_t x3158 = 77U;
uint32_t x3159 = 6U;
volatile int8_t x3283 = 19;
volatile int64_t t60 = -268577328255515LL;
static uint32_t x3290 = 1294690310U;
uint32_t t61 = 245087U;
volatile uint64_t x3365 = 7LLU;
int64_t x3366 = 683972345799989LL;
int16_t x3367 = 0;
uint64_t t62 = 13301097536442LLU;
uint8_t x3387 = 53U;
static volatile uint64_t t64 = 93LLU;
static int32_t x3400 = -866868642;
int32_t t66 = -1;
uint32_t t67 = 25755121U;
static uint16_t x3526 = 3U;
uint16_t x3527 = 9U;
int8_t x3529 = -1;
uint8_t x3530 = UINT8_MAX;
int16_t x3589 = -1;
static volatile uint32_t x3604 = 0U;
uint8_t x3619 = 30U;
static uint16_t x3699 = 31U;
int64_t t76 = 480LL;
static int16_t x3795 = 11;
uint32_t x3810 = UINT32_MAX;
int64_t x3812 = INT64_MIN;
int64_t t78 = -1821LL;
static uint64_t t79 = 3129025125248980484LLU;
uint64_t x3874 = 13973625356LLU;
uint8_t x3902 = UINT8_MAX;
int32_t x3904 = INT32_MIN;
int16_t x4007 = 0;
uint8_t x4008 = 1U;
uint32_t x4032 = UINT32_MAX;
int64_t t86 = 5452601LL;
volatile uint64_t t87 = 583627215361960LLU;
int8_t x4399 = 2;
uint8_t x4400 = UINT8_MAX;
int32_t t89 = -15;
static int16_t x4546 = 7;
static uint8_t x4710 = UINT8_MAX;
static int32_t t95 = -54189;
static uint16_t x4722 = 41U;
volatile int64_t t96 = 7709LL;
int8_t x4917 = INT8_MIN;
static volatile int64_t x5068 = -3813565429258148500LL;
uint64_t x5146 = 251082887620108401LLU;


void f0(void) {
	volatile uint8_t x129 = UINT8_MAX;
	uint16_t x130 = 2665U;
	uint8_t x131 = 26U;
	int64_t x132 = -1LL;
	int64_t t0 = 9LL;

	t0 = (x129/((x130>>x131)|x132));

	if (t0 != -255LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x149 = INT16_MIN;
	volatile int8_t x151 = 1;
	int32_t t1 = 1;

	t1 = (x149/((x150>>x151)|x152));

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x165 = -1955LL;
	uint32_t x166 = 11132315U;
	uint8_t x167 = 5U;
	volatile int64_t t2 = 451388322LL;

	t2 = (x165/((x166>>x167)|x168));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {


	t3 = (x213/((x214>>x215)|x216));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x289 = INT8_MIN;
	int32_t x290 = 39521;
	static uint8_t x291 = 0U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t4 = 4647;

	t4 = (x289/((x290>>x291)|x292));

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x437 = 6280;
	static uint16_t x439 = 2U;
	int64_t x440 = INT64_MIN;

	t5 = (x437/((x438>>x439)|x440));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x545 = INT16_MIN;
	int8_t x546 = 1;
	uint64_t t6 = 1522430312LLU;

	t6 = (x545/((x546>>x547)|x548));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x573 = INT16_MAX;
	volatile uint64_t x574 = 14810LLU;
	volatile uint8_t x575 = 4U;
	int8_t x576 = -1;
	uint64_t t7 = 1911480556862LLU;

	t7 = (x573/((x574>>x575)|x576));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x577 = UINT8_MAX;
	int16_t x578 = 1;
	uint8_t x579 = 3U;
	int64_t x580 = -122109LL;
	int64_t t8 = 10209638023203LL;

	t8 = (x577/((x578>>x579)|x580));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x689 = 2U;
	volatile uint64_t t9 = 338868LLU;

	t9 = (x689/((x690>>x691)|x692));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x737 = -1;
	int32_t x738 = INT32_MAX;
	uint32_t x739 = 5U;
	int32_t x740 = -110026830;
	static int32_t t10 = -205944;

	t10 = (x737/((x738>>x739)|x740));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x742 = 1U;
	int16_t x743 = 0;
	static volatile int64_t t11 = -210160LL;

	t11 = (x741/((x742>>x743)|x744));

	if (t11 != -4000937321589LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x777 = UINT16_MAX;
	uint32_t x778 = UINT32_MAX;
	int16_t x779 = 18;
	int8_t x780 = -1;
	volatile uint32_t t12 = 53282U;

	t12 = (x777/((x778>>x779)|x780));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x853 = 61025821204561LLU;
	int8_t x854 = 15;
	uint32_t x855 = 9U;
	int8_t x856 = -12;
	uint64_t t13 = 0LLU;

	t13 = (x853/((x854>>x855)|x856));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x958 = INT64_MAX;
	uint16_t x959 = 49U;
	int32_t x960 = -4089;
	volatile int64_t t14 = 14790871913775LL;

	t14 = (x957/((x958>>x959)|x960));

	if (t14 != -3LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x965 = 885850654166268LL;
	static uint16_t x966 = UINT16_MAX;
	static int8_t x968 = INT8_MIN;
	volatile int64_t t15 = -555046933332412634LL;

	t15 = (x965/((x966>>x967)|x968));

	if (t15 != -885850654166268LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1049 = INT8_MAX;
	static uint16_t x1051 = 1U;
	volatile uint8_t x1052 = UINT8_MAX;
	static int32_t t16 = -251138;

	t16 = (x1049/((x1050>>x1051)|x1052));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1061 = UINT8_MAX;
	int64_t x1062 = 95604LL;
	uint8_t x1063 = 9U;
	int32_t x1064 = -1778207;

	t17 = (x1061/((x1062>>x1063)|x1064));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1085 = -1;
	uint8_t x1087 = 21U;
	volatile int32_t t18 = 980237141;

	t18 = (x1085/((x1086>>x1087)|x1088));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1105 = 134666U;
	int8_t x1106 = 35;
	int8_t x1107 = 24;
	volatile uint16_t x1108 = UINT16_MAX;
	static uint32_t t19 = 78U;

	t19 = (x1105/((x1106>>x1107)|x1108));

	if (t19 != 2U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x1133 = 1U;
	static uint64_t x1134 = UINT64_MAX;
	int8_t x1135 = 1;
	volatile uint32_t x1136 = 45035338U;
	uint64_t t20 = 113LLU;

	t20 = (x1133/((x1134>>x1135)|x1136));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1173 = -1;
	uint16_t x1174 = UINT16_MAX;
	static uint8_t x1175 = 3U;
	volatile uint16_t x1176 = UINT16_MAX;

	t21 = (x1173/((x1174>>x1175)|x1176));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1217 = UINT8_MAX;
	static uint16_t x1218 = 402U;
	uint8_t x1219 = 14U;
	int64_t x1220 = INT64_MIN;
	int64_t t22 = 701945206245LL;

	t22 = (x1217/((x1218>>x1219)|x1220));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1229 = 911U;
	int16_t x1230 = INT16_MAX;
	uint16_t x1231 = 3U;
	volatile int32_t x1232 = INT32_MIN;

	t23 = (x1229/((x1230>>x1231)|x1232));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1321 = -1;
	static uint64_t x1322 = UINT64_MAX;
	int32_t x1324 = -33265;
	volatile uint64_t t24 = 26192144146491271LLU;

	t24 = (x1321/((x1322>>x1323)|x1324));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1358 = 8769LLU;
	volatile uint16_t x1359 = 6U;
	volatile uint8_t x1360 = 7U;
	volatile uint64_t t25 = 179834479247084LLU;

	t25 = (x1357/((x1358>>x1359)|x1360));

	if (t25 != 64499105152830600LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1397 = UINT64_MAX;
	uint8_t x1398 = 0U;
	volatile uint8_t x1400 = 17U;

	t26 = (x1397/((x1398>>x1399)|x1400));

	if (t26 != 1085102592571150095LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1401 = UINT8_MAX;
	int32_t x1402 = INT32_MAX;
	int32_t x1404 = -1;

	t27 = (x1401/((x1402>>x1403)|x1404));

	if (t27 != -255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1461 = 0;
	static int32_t x1462 = INT32_MAX;
	uint8_t x1463 = 6U;
	uint32_t x1464 = 142112U;

	t28 = (x1461/((x1462>>x1463)|x1464));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x1561 = 1;
	uint8_t x1562 = UINT8_MAX;
	int8_t x1563 = 17;
	static uint64_t x1564 = 310872024LLU;

	t29 = (x1561/((x1562>>x1563)|x1564));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1589 = UINT16_MAX;
	uint64_t x1590 = 7898389630LLU;
	uint16_t x1591 = 4U;
	uint64_t t30 = 3241982861311575565LLU;

	t30 = (x1589/((x1590>>x1591)|x1592));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1597 = 0;
	int32_t t31 = 1;

	t31 = (x1597/((x1598>>x1599)|x1600));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x1648 = INT8_MAX;

	t32 = (x1645/((x1646>>x1647)|x1648));

	if (t32 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x1755 = 29U;
	int64_t x1756 = 97740821975589777LL;
	static int64_t t33 = -19552095965356150LL;

	t33 = (x1753/((x1754>>x1755)|x1756));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1785 = INT16_MIN;
	int64_t x1786 = 297386LL;
	uint16_t x1787 = 3U;
	int8_t x1788 = INT8_MIN;
	volatile int64_t t34 = 5LL;

	t34 = (x1785/((x1786>>x1787)|x1788));

	if (t34 != 436LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1817 = 95U;
	static volatile int8_t x1818 = 3;
	int8_t x1819 = 6;
	static int32_t t35 = -413;

	t35 = (x1817/((x1818>>x1819)|x1820));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1826 = UINT8_MAX;
	int64_t x1828 = INT64_MAX;
	volatile int64_t t36 = -118116277188800859LL;

	t36 = (x1825/((x1826>>x1827)|x1828));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1877 = INT16_MAX;
	uint8_t x1878 = UINT8_MAX;
	uint8_t x1879 = 14U;
	uint8_t x1880 = 20U;
	volatile int32_t t37 = 1;

	t37 = (x1877/((x1878>>x1879)|x1880));

	if (t37 != 1638) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2061 = 2622;
	int16_t x2062 = INT16_MAX;
	uint8_t x2063 = 18U;
	int16_t x2064 = INT16_MIN;

	t38 = (x2061/((x2062>>x2063)|x2064));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2301 = 8247U;
	static int8_t x2302 = 4;
	int8_t x2303 = 1;
	static volatile uint32_t x2304 = UINT32_MAX;
	uint32_t t39 = 193U;

	t39 = (x2301/((x2302>>x2303)|x2304));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2318 = 99LL;
	volatile uint16_t x2319 = 0U;
	uint8_t x2320 = 1U;
	static volatile int64_t t40 = 10473631466LL;

	t40 = (x2317/((x2318>>x2319)|x2320));

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2365 = 24969490;
	volatile int16_t x2366 = 7914;
	int8_t x2367 = 4;
	uint8_t x2368 = 83U;
	int32_t t41 = -32533;

	t41 = (x2365/((x2366>>x2367)|x2368));

	if (t41 != 48863) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2458 = 514662793LLU;
	int16_t x2459 = 3;
	uint8_t x2460 = UINT8_MAX;
	uint64_t t42 = 3119LLU;

	t42 = (x2457/((x2458>>x2459)|x2460));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2521 = UINT64_MAX;
	uint64_t x2522 = 596624691982LLU;
	static uint16_t x2523 = 26U;
	volatile uint64_t t43 = 560LLU;

	t43 = (x2521/((x2522>>x2523)|x2524));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x2557 = 3U;
	int64_t x2558 = 7LL;
	int32_t x2559 = 27;
	volatile int64_t x2560 = -118LL;

	t44 = (x2557/((x2558>>x2559)|x2560));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2641 = 26642336245308LL;
	uint16_t x2642 = UINT16_MAX;
	uint64_t x2643 = 10LLU;
	volatile int64_t t45 = -1345260LL;

	t45 = (x2641/((x2642>>x2643)|x2644));

	if (t45 != 4731368539LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2657 = INT8_MIN;
	uint64_t x2658 = UINT64_MAX;
	static uint16_t x2659 = 9U;
	int8_t x2660 = 25;
	uint64_t t46 = 3876510988661410936LLU;

	t46 = (x2657/((x2658>>x2659)|x2660));

	if (t46 != 512LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2729 = 23531812LL;
	int32_t x2730 = 1;
	int16_t x2731 = 1;
	volatile int64_t t47 = -1606384180LL;

	t47 = (x2729/((x2730>>x2731)|x2732));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2778 = INT16_MAX;
	uint8_t x2779 = 2U;
	static int32_t x2780 = -87346558;
	int32_t t48 = 2500;

	t48 = (x2777/((x2778>>x2779)|x2780));

	if (t48 != -24) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2813 = 10U;
	static uint16_t x2814 = 2674U;
	uint8_t x2815 = 0U;
	int32_t x2816 = -1;
	volatile int32_t t49 = 464;

	t49 = (x2813/((x2814>>x2815)|x2816));

	if (t49 != -10) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2821 = 27U;
	volatile int8_t x2823 = 0;
	volatile int32_t t50 = -107;

	t50 = (x2821/((x2822>>x2823)|x2824));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x2878 = UINT16_MAX;
	int8_t x2879 = 22;
	volatile int32_t t51 = -2524452;

	t51 = (x2877/((x2878>>x2879)|x2880));

	if (t51 != 6425) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2902 = 1;
	int32_t x2903 = 0;
	int32_t x2904 = -1;
	volatile uint32_t t52 = 22177U;

	t52 = (x2901/((x2902>>x2903)|x2904));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2929 = UINT16_MAX;
	uint8_t x2930 = UINT8_MAX;
	int64_t x2932 = 905662LL;

	t53 = (x2929/((x2930>>x2931)|x2932));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2933 = -1;
	uint64_t x2934 = 138422347182395100LLU;
	int64_t x2936 = INT64_MIN;

	t54 = (x2933/((x2934>>x2935)|x2936));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2965 = INT32_MIN;
	uint64_t x2966 = UINT64_MAX;
	static volatile uint16_t x2967 = 2U;
	uint16_t x2968 = 14897U;
	volatile uint64_t t55 = 4026869440766159LLU;

	t55 = (x2965/((x2966>>x2967)|x2968));

	if (t55 != 3LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x2981 = 1920U;
	static int16_t x2982 = 0;
	int64_t x2983 = 12LL;
	static int8_t x2984 = 1;
	uint32_t t56 = 59940797U;

	t56 = (x2981/((x2982>>x2983)|x2984));

	if (t56 != 1920U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3061 = INT32_MIN;
	uint8_t x3063 = 2U;
	int16_t x3064 = INT16_MAX;
	static volatile uint32_t t57 = 462U;

	t57 = (x3061/((x3062>>x3063)|x3064));

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3145 = -817;
	static uint16_t x3146 = 24054U;
	uint16_t x3147 = 14U;
	volatile int16_t x3148 = -1;
	int32_t t58 = 1029644;

	t58 = (x3145/((x3146>>x3147)|x3148));

	if (t58 != 817) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x3157 = 4U;
	uint64_t x3160 = UINT64_MAX;
	volatile uint64_t t59 = 15986504227026804LLU;

	t59 = (x3157/((x3158>>x3159)|x3160));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3281 = INT32_MIN;
	int64_t x3282 = 8479LL;
	int8_t x3284 = -1;

	t60 = (x3281/((x3282>>x3283)|x3284));

	if (t60 != 2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3289 = INT16_MAX;
	static volatile uint8_t x3291 = 5U;
	int32_t x3292 = INT32_MAX;

	t61 = (x3289/((x3290>>x3291)|x3292));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x3368 = 1;

	t62 = (x3365/((x3366>>x3367)|x3368));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3385 = -3797LL;
	int64_t x3386 = INT64_MAX;
	uint64_t x3388 = 437748871111049153LLU;
	uint64_t t63 = 2LLU;

	t63 = (x3385/((x3386>>x3387)|x3388));

	if (t63 != 42LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3389 = UINT64_MAX;
	int64_t x3390 = INT64_MAX;
	volatile uint16_t x3391 = 3U;
	uint32_t x3392 = UINT32_MAX;

	t64 = (x3389/((x3390>>x3391)|x3392));

	if (t64 != 16LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3397 = INT16_MIN;
	static uint32_t x3398 = 2U;
	uint16_t x3399 = 9U;
	volatile uint32_t t65 = 2983U;

	t65 = (x3397/((x3398>>x3399)|x3400));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x3405 = -645;
	int16_t x3406 = INT16_MAX;
	static uint32_t x3407 = 0U;
	int8_t x3408 = INT8_MIN;

	t66 = (x3405/((x3406>>x3407)|x3408));

	if (t66 != 645) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3453 = INT8_MAX;
	volatile uint32_t x3454 = UINT32_MAX;
	int16_t x3455 = 31;
	volatile uint16_t x3456 = UINT16_MAX;

	t67 = (x3453/((x3454>>x3455)|x3456));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3525 = 57U;
	uint32_t x3528 = 16286752U;
	volatile uint32_t t68 = 25U;

	t68 = (x3525/((x3526>>x3527)|x3528));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3531 = 4U;
	uint8_t x3532 = UINT8_MAX;
	int32_t t69 = -1;

	t69 = (x3529/((x3530>>x3531)|x3532));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3533 = INT64_MAX;
	uint64_t x3534 = 1558995754929LLU;
	uint8_t x3535 = 0U;
	static uint64_t x3536 = UINT64_MAX;
	uint64_t t70 = 5576975947269040LLU;

	t70 = (x3533/((x3534>>x3535)|x3536));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3590 = 775;
	uint32_t x3591 = 1U;
	uint16_t x3592 = UINT16_MAX;
	int32_t t71 = -47;

	t71 = (x3589/((x3590>>x3591)|x3592));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3601 = 1LLU;
	static int32_t x3602 = INT32_MAX;
	static uint8_t x3603 = 3U;
	uint64_t t72 = 52LLU;

	t72 = (x3601/((x3602>>x3603)|x3604));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x3617 = 9U;
	uint8_t x3618 = 1U;
	volatile int8_t x3620 = INT8_MIN;
	static volatile int32_t t73 = -47103;

	t73 = (x3617/((x3618>>x3619)|x3620));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x3637 = INT8_MAX;
	int64_t x3638 = 469772698493446LL;
	static uint16_t x3639 = 28U;
	int32_t x3640 = 7;
	volatile int64_t t74 = 110423058355248LL;

	t74 = (x3637/((x3638>>x3639)|x3640));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x3681 = INT8_MIN;
	volatile int64_t x3682 = INT64_MAX;
	static int8_t x3683 = 3;
	uint64_t x3684 = UINT64_MAX;
	uint64_t t75 = 2080LLU;

	t75 = (x3681/((x3682>>x3683)|x3684));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3697 = INT16_MAX;
	int64_t x3698 = 601490086LL;
	int16_t x3700 = INT16_MAX;

	t76 = (x3697/((x3698>>x3699)|x3700));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x3793 = 916158U;
	uint16_t x3794 = 299U;
	static uint32_t x3796 = 489750U;
	uint32_t t77 = 3900U;

	t77 = (x3793/((x3794>>x3795)|x3796));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3809 = INT8_MIN;
	static int8_t x3811 = 7;

	t78 = (x3809/((x3810>>x3811)|x3812));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x3845 = INT32_MIN;
	uint64_t x3846 = 4200007344LLU;
	volatile uint16_t x3847 = 11U;
	int8_t x3848 = INT8_MAX;

	t79 = (x3845/((x3846>>x3847)|x3848));

	if (t79 != 8994835746550LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3873 = INT32_MAX;
	uint32_t x3875 = 0U;
	volatile int64_t x3876 = INT64_MIN;
	uint64_t t80 = 540306432801800452LLU;

	t80 = (x3873/((x3874>>x3875)|x3876));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x3901 = -1LL;
	int8_t x3903 = 1;
	int64_t t81 = 15LL;

	t81 = (x3901/((x3902>>x3903)|x3904));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3925 = 768U;
	int8_t x3926 = 1;
	int8_t x3927 = 4;
	int8_t x3928 = INT8_MIN;
	volatile uint32_t t82 = 356U;

	t82 = (x3925/((x3926>>x3927)|x3928));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3945 = 1355863U;
	uint64_t x3946 = 8457246911LLU;
	int32_t x3947 = 46;
	int64_t x3948 = 244025LL;
	volatile uint64_t t83 = 572592057403149016LLU;

	t83 = (x3945/((x3946>>x3947)|x3948));

	if (t83 != 5LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x4005 = INT32_MIN;
	volatile int8_t x4006 = INT8_MAX;
	int32_t t84 = -3;

	t84 = (x4005/((x4006>>x4007)|x4008));

	if (t84 != -16909320) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x4029 = INT8_MIN;
	int8_t x4030 = 1;
	uint8_t x4031 = 7U;
	uint32_t t85 = 1U;

	t85 = (x4029/((x4030>>x4031)|x4032));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x4093 = UINT32_MAX;
	uint16_t x4094 = UINT16_MAX;
	uint32_t x4095 = 5U;
	volatile int64_t x4096 = INT64_MIN;

	t86 = (x4093/((x4094>>x4095)|x4096));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4233 = 12972629LLU;
	int8_t x4234 = INT8_MAX;
	int8_t x4235 = 5;
	static int16_t x4236 = INT16_MAX;

	t87 = (x4233/((x4234>>x4235)|x4236));

	if (t87 != 395LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x4249 = 29368LLU;
	static uint8_t x4250 = 1U;
	uint8_t x4251 = 1U;
	static uint64_t x4252 = 2300LLU;
	static volatile uint64_t t88 = 29992016488728LLU;

	t88 = (x4249/((x4250>>x4251)|x4252));

	if (t88 != 12LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4397 = -1562;
	int32_t x4398 = 2251845;

	t89 = (x4397/((x4398>>x4399)|x4400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4413 = 109U;
	int16_t x4414 = INT16_MAX;
	volatile uint8_t x4415 = 17U;
	uint8_t x4416 = 10U;
	int32_t t90 = -10929024;

	t90 = (x4413/((x4414>>x4415)|x4416));

	if (t90 != 10) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x4453 = INT16_MIN;
	int64_t x4454 = 522722258447400LL;
	uint32_t x4455 = 15U;
	uint64_t x4456 = 3085138084556571741LLU;
	static volatile uint64_t t91 = 1437LLU;

	t91 = (x4453/((x4454>>x4455)|x4456));

	if (t91 != 5LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4545 = INT8_MIN;
	uint8_t x4547 = 20U;
	volatile int8_t x4548 = 4;
	int32_t t92 = -2220;

	t92 = (x4545/((x4546>>x4547)|x4548));

	if (t92 != -32) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4597 = 112714543;
	int16_t x4598 = INT16_MAX;
	static uint8_t x4599 = 7U;
	static uint16_t x4600 = 30U;
	int32_t t93 = -9;

	t93 = (x4597/((x4598>>x4599)|x4600));

	if (t93 != 442017) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4613 = INT16_MIN;
	uint32_t x4614 = 153193449U;
	static uint16_t x4615 = 5U;
	int16_t x4616 = INT16_MIN;
	volatile uint32_t t94 = 0U;

	t94 = (x4613/((x4614>>x4615)|x4616));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4709 = INT32_MAX;
	volatile uint8_t x4711 = 3U;
	uint8_t x4712 = 12U;

	t95 = (x4709/((x4710>>x4711)|x4712));

	if (t95 != 69273666) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4721 = INT16_MIN;
	int8_t x4723 = 0;
	int64_t x4724 = -265375139LL;

	t96 = (x4721/((x4722>>x4723)|x4724));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x4918 = UINT8_MAX;
	static uint8_t x4919 = 1U;
	uint64_t x4920 = 16813LLU;
	volatile uint64_t t97 = 27497LLU;

	t97 = (x4917/((x4918>>x4919)|x4920));

	if (t97 != 1091846349435309LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x5065 = UINT16_MAX;
	static uint32_t x5066 = 3U;
	static uint8_t x5067 = 11U;
	static volatile int64_t t98 = 49LL;

	t98 = (x5065/((x5066>>x5067)|x5068));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5145 = INT32_MIN;
	volatile uint8_t x5147 = 0U;
	uint64_t x5148 = UINT64_MAX;
	uint64_t t99 = 13693444679575946LLU;

	t99 = (x5145/((x5146>>x5147)|x5148));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

