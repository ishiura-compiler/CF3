#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x117 = -1;
static volatile uint8_t x118 = UINT8_MAX;
uint16_t x157 = 756U;
volatile int16_t x160 = INT16_MAX;
uint16_t x223 = 50U;
volatile uint64_t t4 = 1653304031668106LLU;
static volatile uint8_t x289 = UINT8_MAX;
int8_t x291 = 4;
uint32_t x605 = 1691864437U;
uint16_t x607 = 1U;
int8_t x608 = -7;
volatile int16_t x657 = -7915;
uint32_t x753 = 3065U;
static uint16_t x857 = 443U;
int8_t x936 = -1;
static uint64_t t10 = 1096LLU;
int16_t x957 = -1;
uint8_t x959 = 15U;
static volatile int32_t t12 = 487959;
int64_t x1001 = INT64_MIN;
volatile uint32_t x1070 = 3320U;
uint64_t x1072 = 1893LLU;
volatile int16_t x1153 = INT16_MIN;
int16_t x1207 = 1;
volatile uint32_t t18 = 4U;
int64_t x1389 = INT64_MIN;
int8_t x1391 = 6;
volatile uint64_t t20 = 16081248LLU;
int8_t x1489 = INT8_MIN;
volatile int8_t x1492 = INT8_MIN;
uint8_t x1517 = 61U;
volatile int16_t x1585 = 0;
static uint8_t x1586 = 44U;
int32_t t25 = -362742530;
uint64_t x1755 = 7LLU;
uint32_t x1805 = UINT32_MAX;
int8_t x1806 = 1;
uint8_t x1931 = 0U;
int64_t x2014 = 61762711373712LL;
uint64_t x2020 = 28230841LLU;
volatile uint16_t x2074 = 0U;
static int64_t x2077 = 89785702174212LL;
volatile int8_t x2078 = INT8_MAX;
uint64_t x2164 = 3816LLU;
int64_t x2170 = 717461573321LL;
int8_t x2173 = INT8_MIN;
int32_t x2175 = 19;
volatile uint8_t x2234 = 127U;
uint64_t t40 = 2768465673663736993LLU;
uint8_t x2339 = 13U;
int64_t t41 = 244124712LL;
static uint32_t x2418 = UINT32_MAX;
volatile uint32_t t42 = 19386273U;
static uint32_t x2518 = 18U;
uint64_t t44 = 246002615LLU;
volatile uint8_t x2535 = 1U;
int16_t x2645 = 1;
int16_t x2646 = INT16_MAX;
int8_t x2792 = -1;
uint64_t x2797 = UINT64_MAX;
volatile uint64_t t48 = 2802274628617161LLU;
int8_t x2921 = -1;
int64_t t50 = -10775LL;
volatile int8_t x2973 = -1;
volatile uint64_t t51 = 452400936379LLU;
int32_t x2981 = INT32_MIN;
volatile int32_t x2982 = 2190274;
volatile int8_t x2983 = 2;
int64_t x3086 = 281395LL;
static volatile uint64_t x3306 = UINT64_MAX;
volatile int8_t x3307 = 12;
uint8_t x3308 = UINT8_MAX;
volatile int64_t t57 = 10LL;
uint64_t t58 = 29223816LLU;
int8_t x3467 = 1;
volatile int64_t x3665 = INT64_MIN;
volatile uint16_t x3752 = 23849U;
int32_t x3925 = 1;
int16_t x3950 = 1;
static int64_t x4150 = 5907LL;
int8_t x4151 = 8;
uint32_t x4187 = 3U;
volatile uint8_t x4215 = 26U;
static int32_t x4216 = -15895;
uint32_t t69 = 111U;
uint8_t x4386 = UINT8_MAX;
uint64_t x4388 = UINT64_MAX;
uint32_t x4391 = 8U;
uint64_t x4494 = UINT64_MAX;
uint64_t t74 = 58LLU;
uint8_t x4570 = 97U;
uint64_t x4646 = UINT64_MAX;
int64_t x4648 = INT64_MIN;
uint16_t x4678 = UINT16_MAX;
int64_t x4737 = 2LL;
volatile uint16_t x4738 = 147U;
uint16_t x4739 = 3U;
int32_t x4753 = INT32_MAX;
volatile uint16_t x4938 = 6696U;
volatile int64_t t81 = -1LL;
int32_t t83 = -1645424;
uint8_t x5195 = 1U;
int16_t x5401 = 1;
uint32_t x5413 = 1U;
uint64_t x5581 = 1089145859220LLU;
uint16_t x5753 = 36U;
int8_t x5843 = 17;
uint64_t t94 = 583119173LLU;
static volatile uint32_t x5896 = 1328196U;
int8_t x5969 = INT8_MIN;
static uint16_t x5991 = 0U;
int32_t x6001 = -1;
static uint32_t x6002 = 107921U;
static uint8_t x6055 = 11U;


void f0(void) {
	static volatile int32_t x41 = INT32_MIN;
	uint64_t x42 = 8669988843740304370LLU;
	uint16_t x43 = 4U;
	volatile int16_t x44 = -1;
	static volatile uint64_t t0 = 4241659881297395LLU;

	t0 = (x41+((x42<<x43)-x44));

	if (t0 != 9592612981730524961LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x119 = 5;
	int16_t x120 = -1;
	static int32_t t1 = 379;

	t1 = (x117+((x118<<x119)-x120));

	if (t1 != 8160) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x149 = -1;
	static int16_t x150 = INT16_MAX;
	uint8_t x151 = 2U;
	int32_t x152 = INT32_MAX;
	int32_t t2 = 7;

	t2 = (x149+((x150<<x151)-x152));

	if (t2 != -2147352580) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x158 = 20206U;
	uint8_t x159 = 0U;
	uint32_t t3 = 94817U;

	t3 = (x157+((x158<<x159)-x160));

	if (t3 != 4294955491U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x221 = -1801471;
	uint64_t x222 = 62502LLU;
	static int16_t x224 = 5;

	t4 = (x221+((x222<<x223)-x224));

	if (t4 != 15030763756347228924LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x290 = 14U;
	uint8_t x292 = 14U;
	volatile int32_t t5 = -6812611;

	t5 = (x289+((x290<<x291)-x292));

	if (t5 != 465) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x606 = UINT16_MAX;
	uint32_t t6 = 13U;

	t6 = (x605+((x606<<x607)-x608));

	if (t6 != 1691995514U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x658 = 885344722590LLU;
	uint8_t x659 = 60U;
	int64_t x660 = INT64_MAX;
	static uint64_t t7 = 236170LLU;

	t7 = (x657+((x658<<x659)-x660));

	if (t7 != 6917529027641073942LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x754 = UINT64_MAX;
	uint8_t x755 = 1U;
	uint64_t x756 = 1431LLU;
	volatile uint64_t t8 = 202458461589LLU;

	t8 = (x753+((x754<<x755)-x756));

	if (t8 != 1632LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x858 = UINT32_MAX;
	uint8_t x859 = 7U;
	uint8_t x860 = UINT8_MAX;
	uint32_t t9 = 15462269U;

	t9 = (x857+((x858<<x859)-x860));

	if (t9 != 60U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x933 = 150964805007199779LLU;
	uint16_t x934 = 0U;
	int8_t x935 = 17;

	t10 = (x933+((x934<<x935)-x936));

	if (t10 != 150964805007199780LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x958 = 97713850LLU;
	static uint64_t x960 = UINT64_MAX;
	volatile uint64_t t11 = 142300913277LLU;

	t11 = (x957+((x958<<x959)-x960));

	if (t11 != 3201887436800LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x997 = INT8_MAX;
	static int8_t x998 = 1;
	uint16_t x999 = 0U;
	static int32_t x1000 = 10;

	t12 = (x997+((x998<<x999)-x1000));

	if (t12 != 118) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x1002 = 659U;
	int16_t x1003 = 4;
	static int8_t x1004 = -1;
	static int64_t t13 = 23602401425LL;

	t13 = (x1001+((x1002<<x1003)-x1004));

	if (t13 != -9223372036854765263LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x1069 = 81U;
	volatile int8_t x1071 = 0;
	volatile uint64_t t14 = 163197394888LLU;

	t14 = (x1069+((x1070<<x1071)-x1072));

	if (t14 != 1508LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1154 = 14644U;
	int8_t x1155 = 0;
	uint8_t x1156 = 23U;
	int32_t t15 = -1090698;

	t15 = (x1153+((x1154<<x1155)-x1156));

	if (t15 != -18147) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1205 = -3754;
	uint32_t x1206 = 524894503U;
	int64_t x1208 = 85036LL;
	int64_t t16 = -1924029946LL;

	t16 = (x1205+((x1206<<x1207)-x1208));

	if (t16 != 1049700216LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1265 = INT8_MAX;
	static uint64_t x1266 = 769LLU;
	uint8_t x1267 = 27U;
	volatile uint64_t x1268 = 5753LLU;
	volatile uint64_t t17 = 740051732561131093LLU;

	t17 = (x1265+((x1266<<x1267)-x1268));

	if (t17 != 103213427206LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1301 = INT8_MIN;
	volatile uint8_t x1302 = UINT8_MAX;
	volatile uint64_t x1303 = 10LLU;
	uint32_t x1304 = 2504858U;

	t18 = (x1301+((x1302<<x1303)-x1304));

	if (t18 != 4292723430U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x1369 = 1021378U;
	uint64_t x1370 = 278301LLU;
	volatile uint32_t x1371 = 53U;
	volatile uint64_t x1372 = UINT64_MAX;
	uint64_t t19 = 158863497737LLU;

	t19 = (x1369+((x1370<<x1371)-x1372));

	if (t19 != 16402109842884367811LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1390 = 1080980894LLU;
	volatile int8_t x1392 = INT8_MIN;

	t20 = (x1389+((x1390<<x1391)-x1392));

	if (t20 != 9223372106037553152LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x1490 = INT16_MAX;
	uint8_t x1491 = 3U;
	int32_t t21 = 6;

	t21 = (x1489+((x1490<<x1491)-x1492));

	if (t21 != 262136) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1518 = 34U;
	static int8_t x1519 = 6;
	int16_t x1520 = -3;
	volatile int32_t t22 = 7;

	t22 = (x1517+((x1518<<x1519)-x1520));

	if (t22 != 2240) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1587 = 1U;
	uint64_t x1588 = 807482577943115802LLU;
	volatile uint64_t t23 = 55538433701252856LLU;

	t23 = (x1585+((x1586<<x1587)-x1588));

	if (t23 != 17639261495766435902LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1669 = INT16_MAX;
	static volatile uint8_t x1670 = UINT8_MAX;
	uint64_t x1671 = 1LLU;
	int64_t x1672 = -35337865364069LL;
	int64_t t24 = -448871665244LL;

	t24 = (x1669+((x1670<<x1671)-x1672));

	if (t24 != 35337865397346LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1677 = INT16_MIN;
	static volatile uint16_t x1678 = 26U;
	static int16_t x1679 = 23;
	int32_t x1680 = INT32_MAX;

	t25 = (x1677+((x1678<<x1679)-x1680));

	if (t25 != -1929412607) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1753 = UINT64_MAX;
	static int8_t x1754 = INT8_MAX;
	int32_t x1756 = -1;
	uint64_t t26 = 83404354602707LLU;

	t26 = (x1753+((x1754<<x1755)-x1756));

	if (t26 != 16256LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x1793 = 1887U;
	static uint16_t x1794 = 334U;
	uint8_t x1795 = 1U;
	uint32_t x1796 = 2097685549U;
	uint32_t t27 = 429855U;

	t27 = (x1793+((x1794<<x1795)-x1796));

	if (t27 != 2197284302U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1807 = 0U;
	uint32_t x1808 = 51535086U;
	volatile uint32_t t28 = 7094U;

	t28 = (x1805+((x1806<<x1807)-x1808));

	if (t28 != 4243432210U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x1845 = 673542518U;
	uint32_t x1846 = 7354711U;
	volatile uint8_t x1847 = 17U;
	int8_t x1848 = INT8_MIN;
	uint32_t t29 = 2572U;

	t29 = (x1845+((x1846<<x1847)-x1848));

	if (t29 != 2597548534U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1929 = 36;
	volatile uint16_t x1930 = UINT16_MAX;
	int8_t x1932 = INT8_MIN;
	int32_t t30 = 0;

	t30 = (x1929+((x1930<<x1931)-x1932));

	if (t30 != 65699) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1933 = 85725352LL;
	int8_t x1934 = 3;
	uint64_t x1935 = 1LLU;
	static int64_t x1936 = INT64_MAX;
	volatile int64_t t31 = 693797309835LL;

	t31 = (x1933+((x1934<<x1935)-x1936));

	if (t31 != -9223372036769050449LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2013 = INT32_MIN;
	uint8_t x2015 = 1U;
	int64_t x2016 = 1641473434481LL;
	volatile int64_t t32 = -15361581285LL;

	t32 = (x2013+((x2014<<x2015)-x2016));

	if (t32 != 121881801829295LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2017 = INT32_MAX;
	uint64_t x2018 = UINT64_MAX;
	int16_t x2019 = 46;
	volatile uint64_t t33 = 55322735514530LLU;

	t33 = (x2017+((x2018<<x2019)-x2020));

	if (t33 != 18446673707084626758LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2073 = 181U;
	static int8_t x2075 = 2;
	int64_t x2076 = INT64_MAX;
	int64_t t34 = -279758337920500LL;

	t34 = (x2073+((x2074<<x2075)-x2076));

	if (t34 != -9223372036854775626LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2079 = 8U;
	volatile int16_t x2080 = -1;
	volatile int64_t t35 = 0LL;

	t35 = (x2077+((x2078<<x2079)-x2080));

	if (t35 != 89785702206725LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2105 = 543U;
	uint64_t x2106 = UINT64_MAX;
	uint8_t x2107 = 20U;
	volatile int32_t x2108 = INT32_MIN;
	volatile uint64_t t36 = 1791731LLU;

	t36 = (x2105+((x2106<<x2107)-x2108));

	if (t36 != 2146435615LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2161 = 8U;
	static uint16_t x2162 = UINT16_MAX;
	uint8_t x2163 = 13U;
	uint64_t t37 = 3LLU;

	t37 = (x2161+((x2162<<x2163)-x2164));

	if (t37 != 536858912LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2169 = 8059248554897050072LLU;
	uint8_t x2171 = 0U;
	static volatile int16_t x2172 = INT16_MAX;
	uint64_t t38 = 3LLU;

	t38 = (x2169+((x2170<<x2171)-x2172));

	if (t38 != 8059249272358590626LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2174 = 9;
	uint16_t x2176 = 2U;
	static volatile int32_t t39 = 3091264;

	t39 = (x2173+((x2174<<x2175)-x2176));

	if (t39 != 4718462) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x2233 = 179LLU;
	uint8_t x2235 = 13U;
	int16_t x2236 = 1;

	t40 = (x2233+((x2234<<x2235)-x2236));

	if (t40 != 1040562LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x2337 = INT64_MIN;
	uint16_t x2338 = 1U;
	volatile uint16_t x2340 = 6U;

	t41 = (x2337+((x2338<<x2339)-x2340));

	if (t41 != -9223372036854767622LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2417 = -59;
	int32_t x2419 = 3;
	int16_t x2420 = INT16_MIN;

	t42 = (x2417+((x2418<<x2419)-x2420));

	if (t42 != 32701U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2473 = -2;
	int8_t x2474 = INT8_MAX;
	volatile uint8_t x2475 = 2U;
	uint64_t x2476 = 56690233938463113LLU;
	volatile uint64_t t43 = 1787801251LLU;

	t43 = (x2473+((x2474<<x2475)-x2476));

	if (t43 != 18390053839771089009LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2517 = INT8_MIN;
	int8_t x2519 = 11;
	uint64_t x2520 = 924915009LLU;

	t44 = (x2517+((x2518<<x2519)-x2520));

	if (t44 != 18446744072784673343LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x2533 = 2667U;
	volatile int16_t x2534 = INT16_MAX;
	uint16_t x2536 = UINT16_MAX;
	static int32_t t45 = 24960536;

	t45 = (x2533+((x2534<<x2535)-x2536));

	if (t45 != 2666) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2647 = 8;
	static uint8_t x2648 = 13U;
	volatile int32_t t46 = -3;

	t46 = (x2645+((x2646<<x2647)-x2648));

	if (t46 != 8388340) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2789 = INT64_MIN;
	int8_t x2790 = 11;
	uint16_t x2791 = 3U;
	int64_t t47 = 414413056LL;

	t47 = (x2789+((x2790<<x2791)-x2792));

	if (t47 != -9223372036854775719LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x2798 = 450633762U;
	volatile uint16_t x2799 = 0U;
	int32_t x2800 = INT32_MIN;

	t48 = (x2797+((x2798<<x2799)-x2800));

	if (t48 != 2598117409LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2817 = INT64_MIN;
	uint32_t x2818 = 217391U;
	uint8_t x2819 = 24U;
	int8_t x2820 = 9;
	volatile int64_t t49 = -1LL;

	t49 = (x2817+((x2818<<x2819)-x2820));

	if (t49 != -9223372036066246665LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2922 = 8799LL;
	uint8_t x2923 = 9U;
	static int32_t x2924 = INT32_MIN;

	t50 = (x2921+((x2922<<x2923)-x2924));

	if (t50 != 2151988735LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2974 = UINT8_MAX;
	static uint32_t x2975 = 12U;
	uint64_t x2976 = UINT64_MAX;

	t51 = (x2973+((x2974<<x2975)-x2976));

	if (t51 != 1044480LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2984 = -2;
	volatile int32_t t52 = -227501;

	t52 = (x2981+((x2982<<x2983)-x2984));

	if (t52 != -2138722550) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x3085 = 3;
	static uint32_t x3087 = 0U;
	static int8_t x3088 = INT8_MIN;
	volatile int64_t t53 = -121789443891416521LL;

	t53 = (x3085+((x3086<<x3087)-x3088));

	if (t53 != 281526LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x3105 = INT8_MIN;
	static int16_t x3106 = 0;
	volatile uint16_t x3107 = 0U;
	int16_t x3108 = -1;
	static volatile int32_t t54 = -63;

	t54 = (x3105+((x3106<<x3107)-x3108));

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x3209 = INT8_MAX;
	int64_t x3210 = 253091330164677LL;
	uint8_t x3211 = 5U;
	uint64_t x3212 = UINT64_MAX;
	volatile uint64_t t55 = 940240369618578142LLU;

	t55 = (x3209+((x3210<<x3211)-x3212));

	if (t55 != 8098922565269792LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3305 = 403702841LL;
	static uint64_t t56 = 7462376128860LLU;

	t56 = (x3305+((x3306<<x3307)-x3308));

	if (t56 != 403698490LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3441 = -1653930061721003593LL;
	uint16_t x3442 = UINT16_MAX;
	uint16_t x3443 = 8U;
	int32_t x3444 = INT32_MAX;

	t57 = (x3441+((x3442<<x3443)-x3444));

	if (t57 != -1653930063851710280LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3461 = INT16_MIN;
	uint32_t x3462 = 529954104U;
	uint8_t x3463 = 3U;
	uint64_t x3464 = UINT64_MAX;

	t58 = (x3461+((x3462<<x3463)-x3464));

	if (t58 != 4239600065LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3465 = 122;
	int8_t x3466 = INT8_MAX;
	int16_t x3468 = INT16_MIN;
	volatile int32_t t59 = -65848135;

	t59 = (x3465+((x3466<<x3467)-x3468));

	if (t59 != 33144) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3666 = 1062160U;
	int8_t x3667 = 0;
	volatile uint32_t x3668 = 0U;
	int64_t t60 = -2836849481619LL;

	t60 = (x3665+((x3666<<x3667)-x3668));

	if (t60 != -9223372036853713648LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3729 = INT8_MIN;
	uint8_t x3730 = 0U;
	static uint32_t x3731 = 0U;
	int16_t x3732 = -1;
	static volatile int32_t t61 = 2441384;

	t61 = (x3729+((x3730<<x3731)-x3732));

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3749 = -1LL;
	volatile uint64_t x3750 = 1071776948474226730LLU;
	uint16_t x3751 = 9U;
	static volatile uint64_t t62 = 59LLU;

	t62 = (x3749+((x3750<<x3751)-x3752));

	if (t62 != 13794219481227065046LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3761 = INT16_MIN;
	int8_t x3762 = 1;
	uint16_t x3763 = 5U;
	volatile int8_t x3764 = INT8_MAX;
	static int32_t t63 = -800;

	t63 = (x3761+((x3762<<x3763)-x3764));

	if (t63 != -32863) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3926 = INT32_MAX;
	uint32_t x3927 = 0U;
	int32_t x3928 = 6821;
	volatile int32_t t64 = 1064649;

	t64 = (x3925+((x3926<<x3927)-x3928));

	if (t64 != 2147476827) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3949 = -1;
	uint8_t x3951 = 23U;
	int32_t x3952 = -1;
	int32_t t65 = 0;

	t65 = (x3949+((x3950<<x3951)-x3952));

	if (t65 != 8388608) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3977 = -1;
	volatile uint32_t x3978 = 125041U;
	static uint8_t x3979 = 0U;
	int32_t x3980 = INT32_MIN;
	static volatile uint32_t t66 = 14163U;

	t66 = (x3977+((x3978<<x3979)-x3980));

	if (t66 != 2147608688U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4149 = 4U;
	int8_t x4152 = INT8_MAX;
	static int64_t t67 = 13663223430923LL;

	t67 = (x4149+((x4150<<x4151)-x4152));

	if (t67 != 1512069LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4185 = 943588LL;
	uint16_t x4186 = 136U;
	int16_t x4188 = -1;
	int64_t t68 = 541674LL;

	t68 = (x4185+((x4186<<x4187)-x4188));

	if (t68 != 944677LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4213 = INT16_MIN;
	static uint32_t x4214 = UINT32_MAX;

	t69 = (x4213+((x4214<<x4215)-x4216));

	if (t69 != 4227841559U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x4381 = 126U;
	uint32_t x4382 = UINT32_MAX;
	int64_t x4383 = 6LL;
	int16_t x4384 = 0;
	volatile uint32_t t70 = 485971474U;

	t70 = (x4381+((x4382<<x4383)-x4384));

	if (t70 != 62U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4385 = INT16_MAX;
	uint8_t x4387 = 21U;
	static uint64_t t71 = 373863559218LLU;

	t71 = (x4385+((x4386<<x4387)-x4388));

	if (t71 != 534806528LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4389 = -16596193892593327LL;
	uint8_t x4390 = 31U;
	volatile uint8_t x4392 = 1U;
	int64_t t72 = -337843461428166LL;

	t72 = (x4389+((x4390<<x4391)-x4392));

	if (t72 != -16596193892585392LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4393 = 8982676093092764419LLU;
	uint64_t x4394 = 343189811937533360LLU;
	volatile uint8_t x4395 = 0U;
	uint64_t x4396 = 21474902044297565LLU;
	volatile uint64_t t73 = 25996117020LLU;

	t73 = (x4393+((x4394<<x4395)-x4396));

	if (t73 != 9304391002986000214LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4493 = 39U;
	int16_t x4495 = 0;
	uint8_t x4496 = 104U;

	t74 = (x4493+((x4494<<x4495)-x4496));

	if (t74 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4569 = 273359U;
	int32_t x4571 = 2;
	uint32_t x4572 = UINT32_MAX;
	volatile uint32_t t75 = 445475480U;

	t75 = (x4569+((x4570<<x4571)-x4572));

	if (t75 != 273748U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4645 = UINT64_MAX;
	uint16_t x4647 = 0U;
	volatile uint64_t t76 = 1560LLU;

	t76 = (x4645+((x4646<<x4647)-x4648));

	if (t76 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4677 = -1;
	uint16_t x4679 = 1U;
	int8_t x4680 = -7;
	volatile int32_t t77 = 492233612;

	t77 = (x4677+((x4678<<x4679)-x4680));

	if (t77 != 131076) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4740 = 250U;
	volatile int64_t t78 = -1789377LL;

	t78 = (x4737+((x4738<<x4739)-x4740));

	if (t78 != 928LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4754 = 17;
	int16_t x4755 = 2;
	volatile int64_t x4756 = -1LL;
	volatile int64_t t79 = -330LL;

	t79 = (x4753+((x4754<<x4755)-x4756));

	if (t79 != 2147483716LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4901 = UINT32_MAX;
	uint32_t x4902 = UINT32_MAX;
	uint8_t x4903 = 14U;
	int32_t x4904 = INT32_MIN;
	uint32_t t80 = 11716454U;

	t80 = (x4901+((x4902<<x4903)-x4904));

	if (t80 != 2147467263U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4937 = INT8_MAX;
	uint64_t x4939 = 2LLU;
	int64_t x4940 = -1LL;

	t81 = (x4937+((x4938<<x4939)-x4940));

	if (t81 != 26912LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x5005 = UINT16_MAX;
	uint8_t x5006 = 5U;
	uint32_t x5007 = 6U;
	uint8_t x5008 = 24U;
	static int32_t t82 = 454343072;

	t82 = (x5005+((x5006<<x5007)-x5008));

	if (t82 != 65831) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x5101 = UINT8_MAX;
	int32_t x5102 = INT32_MAX;
	uint16_t x5103 = 0U;
	uint16_t x5104 = UINT16_MAX;

	t83 = (x5101+((x5102<<x5103)-x5104));

	if (t83 != 2147418367) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x5193 = 21;
	uint64_t x5194 = 16873287980LLU;
	static uint64_t x5196 = 33910702792947181LLU;
	uint64_t t84 = 92734744904LLU;

	t84 = (x5193+((x5194<<x5195)-x5196));

	if (t84 != 18412833404663180416LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x5197 = INT32_MIN;
	static volatile int8_t x5198 = 0;
	static uint8_t x5199 = 21U;
	static int64_t x5200 = -1LL;
	int64_t t85 = 461487907LL;

	t85 = (x5197+((x5198<<x5199)-x5200));

	if (t85 != -2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x5269 = INT8_MIN;
	int64_t x5270 = 420LL;
	int8_t x5271 = 6;
	int32_t x5272 = INT32_MIN;
	int64_t t86 = 1142363538LL;

	t86 = (x5269+((x5270<<x5271)-x5272));

	if (t86 != 2147510400LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5361 = 40U;
	volatile uint8_t x5362 = UINT8_MAX;
	int16_t x5363 = 13;
	int64_t x5364 = -68975995717616LL;
	static volatile int64_t t87 = -22LL;

	t87 = (x5361+((x5362<<x5363)-x5364));

	if (t87 != 68975997806616LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5402 = UINT8_MAX;
	uint8_t x5403 = 4U;
	int32_t x5404 = -1;
	volatile int32_t t88 = -58597;

	t88 = (x5401+((x5402<<x5403)-x5404));

	if (t88 != 4082) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x5414 = UINT32_MAX;
	int8_t x5415 = 21;
	int8_t x5416 = INT8_MAX;
	uint32_t t89 = 269108617U;

	t89 = (x5413+((x5414<<x5415)-x5416));

	if (t89 != 4292870018U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x5582 = 32270582889370248LL;
	uint16_t x5583 = 5U;
	int16_t x5584 = -1;
	volatile uint64_t t90 = 27924467884295239LLU;

	t90 = (x5581+((x5582<<x5583)-x5584));

	if (t90 != 1032659741605707157LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x5649 = -2741876975965LL;
	int16_t x5650 = INT16_MAX;
	int8_t x5651 = 5;
	static uint16_t x5652 = 5168U;
	int64_t t91 = 551732567593230664LL;

	t91 = (x5649+((x5650<<x5651)-x5652));

	if (t91 != -2741875932589LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x5749 = INT32_MIN;
	volatile int16_t x5750 = 63;
	int8_t x5751 = 1;
	uint64_t x5752 = 8221LLU;
	static uint64_t t92 = 22972211149LLU;

	t92 = (x5749+((x5750<<x5751)-x5752));

	if (t92 != 18446744071562059873LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5754 = 1;
	static uint8_t x5755 = 8U;
	static uint64_t x5756 = UINT64_MAX;
	uint64_t t93 = 86443192014825675LLU;

	t93 = (x5753+((x5754<<x5755)-x5756));

	if (t93 != 293LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5841 = -1;
	uint32_t x5842 = 323729U;
	uint64_t x5844 = 457290246293LLU;

	t94 = (x5841+((x5842<<x5843)-x5844));

	if (t94 != 18446743620196407146LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5893 = -1;
	uint32_t x5894 = UINT32_MAX;
	uint8_t x5895 = 1U;
	uint32_t t95 = 1146U;

	t95 = (x5893+((x5894<<x5895)-x5896));

	if (t95 != 4293639097U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5970 = UINT64_MAX;
	uint8_t x5971 = 3U;
	int64_t x5972 = INT64_MAX;
	volatile uint64_t t96 = 13127061420LLU;

	t96 = (x5969+((x5970<<x5971)-x5972));

	if (t96 != 9223372036854775673LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5989 = INT32_MIN;
	int16_t x5990 = INT16_MAX;
	int32_t x5992 = -1;
	static int32_t t97 = 2;

	t97 = (x5989+((x5990<<x5991)-x5992));

	if (t97 != -2147450880) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6003 = 0;
	uint16_t x6004 = 13U;
	volatile uint32_t t98 = 0U;

	t98 = (x6001+((x6002<<x6003)-x6004));

	if (t98 != 107907U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6053 = 62U;
	volatile int16_t x6054 = 223;
	static volatile int64_t x6056 = 51LL;
	volatile int64_t t99 = -27117625285181LL;

	t99 = (x6053+((x6054<<x6055)-x6056));

	if (t99 != 456715LL) { NG(); } else { ; }
	
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

