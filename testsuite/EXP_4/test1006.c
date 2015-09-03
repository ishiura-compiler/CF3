#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x101 = INT32_MAX;
int8_t x186 = -3;
static uint32_t x187 = UINT32_MAX;
uint8_t x196 = 1U;
int8_t x375 = INT8_MAX;
int64_t t3 = 1007254200990LL;
int64_t x525 = INT64_MIN;
volatile int64_t t4 = 69767623LL;
int8_t x721 = -1;
volatile int64_t t9 = 0LL;
uint8_t x728 = 2U;
uint16_t x814 = 3466U;
int32_t x877 = -15;
int16_t x878 = INT16_MIN;
volatile uint64_t t12 = 61393432LLU;
uint32_t x925 = 954U;
volatile int16_t x1001 = -1;
uint16_t x1060 = 3U;
int16_t x1201 = -6631;
volatile int32_t x1261 = INT32_MIN;
int8_t x1273 = -1;
uint8_t x1274 = UINT8_MAX;
volatile uint64_t t24 = 1208620675767028670LLU;
uint8_t x1702 = UINT8_MAX;
static volatile int64_t x1778 = INT64_MIN;
int16_t x1885 = -14;
volatile int8_t x1886 = -1;
static int8_t x1894 = -1;
uint16_t x1895 = UINT16_MAX;
volatile uint8_t x1927 = UINT8_MAX;
int32_t x1989 = INT32_MIN;
int32_t x1990 = INT32_MAX;
static uint32_t t34 = 0U;
uint8_t x2074 = 55U;
volatile uint32_t x2076 = 5U;
int8_t x2222 = INT8_MIN;
uint32_t x2223 = 6569440U;
uint16_t x2247 = 26913U;
int8_t x2309 = -1;
uint32_t x2388 = 2U;
volatile uint8_t x2407 = 4U;
uint8_t x2408 = 6U;
static uint16_t x2444 = 1U;
volatile uint8_t x2504 = 12U;
uint64_t t44 = 2706LLU;
uint32_t x2570 = 234920798U;
uint8_t x2580 = 5U;
static int16_t x2698 = INT16_MIN;
int32_t x2869 = -1;
static int32_t x2870 = INT32_MIN;
static volatile uint8_t x2872 = 0U;
static volatile int32_t x2941 = INT32_MIN;
volatile uint32_t x2942 = 4U;
volatile uint32_t t51 = 421291U;
int64_t x2962 = 15689477LL;
uint32_t x2963 = UINT32_MAX;
volatile int64_t t56 = -1143461733100344388LL;
static int8_t x3576 = 13;
uint64_t x3583 = UINT64_MAX;
uint16_t x3714 = 28U;
volatile uint32_t t62 = 1U;
int16_t x4134 = -1614;
static volatile int16_t x4135 = INT16_MAX;
volatile uint16_t x4274 = UINT16_MAX;
uint32_t x4275 = UINT32_MAX;
static uint64_t t68 = 110249052208541806LLU;
volatile int64_t t69 = -8033161285411890LL;
int32_t x4462 = INT32_MIN;
static uint32_t x4515 = 22U;
static uint64_t x4659 = UINT64_MAX;
uint16_t x4660 = 2U;
int64_t t76 = -60761003502639659LL;
uint32_t x4926 = 0U;
volatile int8_t x5081 = 15;
static volatile int32_t t79 = 9923145;
volatile uint8_t x5207 = 36U;
volatile int32_t t83 = -24600951;
uint32_t x5232 = 5U;
int32_t x5242 = -4;
uint64_t x5502 = 32LLU;
int8_t x5504 = 0;
int8_t x5575 = 0;
int8_t x5576 = 4;
int64_t t88 = -76161239510700LL;
uint64_t x5710 = 0LLU;
int16_t x5741 = INT16_MIN;
static int32_t t90 = 7518;
static int64_t x5841 = INT64_MAX;
uint8_t x5876 = 1U;
int32_t t93 = -2510681;
volatile uint64_t x5891 = UINT64_MAX;
int32_t x6060 = 3;
uint32_t x6170 = UINT32_MAX;
volatile uint16_t x6337 = 6657U;
uint16_t x6373 = UINT16_MAX;


void f0(void) {
	volatile int16_t x102 = -6511;
	int64_t x103 = INT64_MAX;
	volatile int16_t x104 = 0;
	int64_t t0 = 8407265244LL;

	t0 = (x101%(x102^(x103<<x104)));

	if (t0 != 2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x185 = -1;
	volatile uint8_t x188 = 4U;
	uint32_t t1 = 131U;

	t1 = (x185%(x186^(x187<<x188)));

	if (t1 != 8U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x193 = 6979481LLU;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = UINT16_MAX;
	uint64_t t2 = 10311333332052LLU;

	t2 = (x193%(x194^(x195<<x196)));

	if (t2 != 6979481LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x373 = 103;
	int64_t x374 = INT64_MIN;
	static volatile int8_t x376 = 2;

	t3 = (x373%(x374^(x375<<x376)));

	if (t3 != 103LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x526 = -1LL;
	uint32_t x527 = UINT32_MAX;
	int8_t x528 = 1;

	t4 = (x525%(x526^(x527<<x528)));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x537 = INT16_MIN;
	uint64_t x538 = UINT64_MAX;
	uint64_t x539 = 0LLU;
	uint8_t x540 = 13U;
	uint64_t t5 = 14LLU;

	t5 = (x537%(x538^(x539<<x540)));

	if (t5 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x629 = INT16_MIN;
	int32_t x630 = 85;
	uint8_t x631 = UINT8_MAX;
	int8_t x632 = 0;
	int32_t t6 = -3912488;

	t6 = (x629%(x630^(x631<<x632)));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x665 = 5U;
	uint32_t x666 = 3U;
	uint8_t x667 = UINT8_MAX;
	static uint32_t x668 = 1U;
	uint32_t t7 = 65668475U;

	t7 = (x665%(x666^(x667<<x668)));

	if (t7 != 5U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x689 = -4LL;
	int16_t x690 = -1;
	uint32_t x691 = 1869U;
	int32_t x692 = 0;
	volatile int64_t t8 = 23852LL;

	t8 = (x689%(x690^(x691<<x692)));

	if (t8 != -4LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x722 = -5998803LL;
	uint32_t x723 = 514763411U;
	static uint16_t x724 = 7U;

	t9 = (x721%(x722^(x723<<x724)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x725 = 1U;
	static int16_t x726 = -3445;
	volatile uint16_t x727 = UINT16_MAX;
	int32_t t10 = -429768;

	t10 = (x725%(x726^(x727<<x728)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x813 = 1U;
	int16_t x815 = INT16_MAX;
	static int16_t x816 = 0;
	volatile int32_t t11 = 1;

	t11 = (x813%(x814^(x815<<x816)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x879 = 540468641584112889LLU;
	uint8_t x880 = 1U;

	t12 = (x877%(x878^(x879<<x880)));

	if (t12 != 1080937283168220671LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x905 = INT8_MIN;
	int8_t x906 = -14;
	int32_t x907 = INT32_MAX;
	int16_t x908 = 0;
	int32_t t13 = -15188;

	t13 = (x905%(x906^(x907<<x908)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x926 = 13U;
	int16_t x927 = 3;
	uint8_t x928 = 2U;
	uint32_t t14 = 1U;

	t14 = (x925%(x926^(x927<<x928)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x949 = INT8_MAX;
	uint64_t x950 = UINT64_MAX;
	uint64_t x951 = 310546751238LLU;
	uint16_t x952 = 3U;
	volatile uint64_t t15 = 187460438LLU;

	t15 = (x949%(x950^(x951<<x952)));

	if (t15 != 127LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1002 = INT16_MAX;
	uint16_t x1003 = 12U;
	int16_t x1004 = 0;
	int32_t t16 = 413722;

	t16 = (x1001%(x1002^(x1003<<x1004)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1057 = -35;
	volatile int8_t x1058 = INT8_MIN;
	volatile uint32_t x1059 = 0U;
	volatile uint32_t t17 = 31888U;

	t17 = (x1057%(x1058^(x1059<<x1060)));

	if (t17 != 93U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1081 = -1;
	uint32_t x1082 = 1419216735U;
	uint8_t x1083 = UINT8_MAX;
	uint8_t x1084 = 6U;
	uint32_t t18 = 1804U;

	t18 = (x1081%(x1082^(x1083<<x1084)));

	if (t18 != 37279266U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1085 = INT32_MIN;
	volatile int64_t x1086 = INT64_MIN;
	volatile uint8_t x1087 = 27U;
	volatile uint32_t x1088 = 3U;
	int64_t t19 = 451360799757258LL;

	t19 = (x1085%(x1086^(x1087<<x1088)));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1089 = 126U;
	int64_t x1090 = -1LL;
	uint64_t x1091 = UINT64_MAX;
	static uint8_t x1092 = 26U;
	uint64_t t20 = 2595279540725322550LLU;

	t20 = (x1089%(x1090^(x1091<<x1092)));

	if (t20 != 126LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1197 = -1;
	int64_t x1198 = INT64_MIN;
	static int16_t x1199 = 1;
	uint8_t x1200 = 15U;
	static int64_t t21 = -121442960LL;

	t21 = (x1197%(x1198^(x1199<<x1200)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1202 = INT64_MIN;
	volatile uint32_t x1203 = 25044186U;
	int8_t x1204 = 2;
	volatile int64_t t22 = -17330671183LL;

	t22 = (x1201%(x1202^(x1203<<x1204)));

	if (t22 != -6631LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1262 = UINT32_MAX;
	volatile int8_t x1263 = 3;
	volatile uint32_t x1264 = 2U;
	volatile uint32_t t23 = 13674942U;

	t23 = (x1261%(x1262^(x1263<<x1264)));

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1275 = UINT64_MAX;
	volatile int64_t x1276 = 1LL;

	t24 = (x1273%(x1274^(x1275<<x1276)));

	if (t24 != 254LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x1589 = INT16_MAX;
	static uint8_t x1590 = 7U;
	static volatile uint8_t x1591 = UINT8_MAX;
	volatile int16_t x1592 = 17;
	volatile int32_t t25 = 717;

	t25 = (x1589%(x1590^(x1591<<x1592)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1681 = 526894;
	int32_t x1682 = 71940;
	int8_t x1683 = 1;
	static volatile int8_t x1684 = 5;
	int32_t t26 = 38;

	t26 = (x1681%(x1682^(x1683<<x1684)));

	if (t26 != 23090) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1701 = UINT16_MAX;
	uint64_t x1703 = 10975402LLU;
	static int16_t x1704 = 10;
	static volatile uint64_t t27 = 20274760595366LLU;

	t27 = (x1701%(x1702^(x1703<<x1704)));

	if (t27 != 65535LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1761 = INT64_MIN;
	int64_t x1762 = -1LL;
	volatile uint32_t x1763 = UINT32_MAX;
	uint8_t x1764 = 8U;
	volatile int64_t t28 = 172623499098LL;

	t28 = (x1761%(x1762^(x1763<<x1764)));

	if (t28 != -2147516033LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1777 = INT16_MIN;
	volatile uint8_t x1779 = 87U;
	uint8_t x1780 = 13U;
	int64_t t29 = -62675551973LL;

	t29 = (x1777%(x1778^(x1779<<x1780)));

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1861 = INT32_MAX;
	uint64_t x1862 = 38367906349LLU;
	uint16_t x1863 = 9197U;
	volatile int32_t x1864 = 3;
	static volatile uint64_t t30 = 234LLU;

	t30 = (x1861%(x1862^(x1863<<x1864)));

	if (t30 != 2147483647LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1887 = 43635LL;
	uint16_t x1888 = 1U;
	volatile int64_t t31 = 570341684038558741LL;

	t31 = (x1885%(x1886^(x1887<<x1888)));

	if (t31 != -14LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1893 = UINT16_MAX;
	volatile int16_t x1896 = 0;
	int32_t t32 = -51869101;

	t32 = (x1893%(x1894^(x1895<<x1896)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1925 = INT64_MIN;
	uint8_t x1926 = UINT8_MAX;
	int16_t x1928 = 1;
	volatile int64_t t33 = 35260488LL;

	t33 = (x1925%(x1926^(x1927<<x1928)));

	if (t33 != -129LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1991 = UINT32_MAX;
	int8_t x1992 = 2;

	t34 = (x1989%(x1990^(x1991<<x1992)));

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x2073 = UINT8_MAX;
	static int16_t x2075 = 3059;
	int32_t t35 = 3568;

	t35 = (x2073%(x2074^(x2075<<x2076)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2209 = 77U;
	volatile uint64_t x2210 = 397698514624LLU;
	uint64_t x2211 = UINT64_MAX;
	volatile int16_t x2212 = 58;
	uint64_t t36 = 17952LLU;

	t36 = (x2209%(x2210^(x2211<<x2212)));

	if (t36 != 77LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2221 = 15U;
	uint8_t x2224 = 9U;
	volatile uint32_t t37 = 1U;

	t37 = (x2221%(x2222^(x2223<<x2224)));

	if (t37 != 15U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2245 = INT64_MIN;
	int64_t x2246 = INT64_MAX;
	int8_t x2248 = 0;
	static volatile int64_t t38 = -19203171912284750LL;

	t38 = (x2245%(x2246^(x2247<<x2248)));

	if (t38 != -26914LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2297 = 1227084132U;
	int16_t x2298 = 56;
	volatile uint32_t x2299 = 162285U;
	int16_t x2300 = 1;
	static volatile uint32_t t39 = 1729715U;

	t39 = (x2297%(x2298^(x2299<<x2300)));

	if (t39 != 179292U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2310 = 1380U;
	uint32_t x2311 = 49232U;
	uint16_t x2312 = 0U;
	volatile uint32_t t40 = 217U;

	t40 = (x2309%(x2310^(x2311<<x2312)));

	if (t40 != 40995U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2385 = UINT64_MAX;
	static volatile uint16_t x2386 = UINT16_MAX;
	int8_t x2387 = 8;
	static volatile uint64_t t41 = 1035968483897LLU;

	t41 = (x2385%(x2386^(x2387<<x2388)));

	if (t41 != 6866LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2405 = INT32_MAX;
	int8_t x2406 = INT8_MAX;
	volatile int32_t t42 = -244447267;

	t42 = (x2405%(x2406^(x2407<<x2408)));

	if (t42 != 349) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2441 = INT16_MIN;
	int64_t x2442 = -1LL;
	uint8_t x2443 = 1U;
	volatile int64_t t43 = 224626125LL;

	t43 = (x2441%(x2442^(x2443<<x2444)));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2501 = -5;
	uint64_t x2502 = 524517431LLU;
	int16_t x2503 = INT16_MAX;

	t44 = (x2501%(x2502^(x2503<<x2504)));

	if (t44 != 96525349LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2569 = INT8_MIN;
	int8_t x2571 = 0;
	static volatile uint16_t x2572 = 1U;
	static volatile uint32_t t45 = 16U;

	t45 = (x2569%(x2570^(x2571<<x2572)));

	if (t45 != 66392804U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2577 = INT64_MAX;
	int8_t x2578 = INT8_MIN;
	static volatile int16_t x2579 = INT16_MAX;
	int64_t t46 = -2LL;

	t46 = (x2577%(x2578^(x2579<<x2580)));

	if (t46 != 787007LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2689 = INT32_MIN;
	int8_t x2690 = INT8_MIN;
	int16_t x2691 = INT16_MAX;
	int16_t x2692 = 5;
	volatile int32_t t47 = 83089474;

	t47 = (x2689%(x2690^(x2691<<x2692)));

	if (t47 != -196608) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2697 = INT64_MIN;
	volatile uint64_t x2699 = 486LLU;
	volatile uint64_t x2700 = 3LLU;
	uint64_t t48 = 11684701858LLU;

	t48 = (x2697%(x2698^(x2699<<x2700)));

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2871 = UINT32_MAX;
	volatile uint32_t t49 = 419288642U;

	t49 = (x2869%(x2870^(x2871<<x2872)));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2913 = UINT32_MAX;
	int8_t x2914 = -1;
	static uint16_t x2915 = 20375U;
	uint8_t x2916 = 5U;
	uint32_t t50 = 15U;

	t50 = (x2913%(x2914^(x2915<<x2916)));

	if (t50 != 652000U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2943 = 999U;
	uint8_t x2944 = 3U;

	t51 = (x2941%(x2942^(x2943<<x2944)));

	if (t51 != 5924U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2961 = INT16_MAX;
	uint8_t x2964 = 6U;
	int64_t t52 = -489143034779LL;

	t52 = (x2961%(x2962^(x2963<<x2964)));

	if (t52 != 32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x3089 = -176;
	volatile int32_t x3090 = 2635794;
	uint8_t x3091 = 15U;
	int64_t x3092 = 9LL;
	int32_t t53 = -23505;

	t53 = (x3089%(x3090^(x3091<<x3092)));

	if (t53 != -176) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x3093 = INT16_MAX;
	uint8_t x3094 = 73U;
	volatile int32_t x3095 = INT32_MAX;
	int16_t x3096 = 0;
	static int32_t t54 = 70413;

	t54 = (x3093%(x3094^(x3095<<x3096)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3289 = INT16_MIN;
	int8_t x3290 = -18;
	int32_t x3291 = 7;
	volatile int8_t x3292 = 4;
	static int32_t t55 = 0;

	t55 = (x3289%(x3290^(x3291<<x3292)));

	if (t55 != -36) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x3293 = UINT8_MAX;
	int64_t x3294 = INT64_MIN;
	int8_t x3295 = INT8_MAX;
	static uint8_t x3296 = 2U;

	t56 = (x3293%(x3294^(x3295<<x3296)));

	if (t56 != 255LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3377 = UINT16_MAX;
	uint32_t x3378 = 27U;
	uint8_t x3379 = 105U;
	static int8_t x3380 = 0;
	uint32_t t57 = 6U;

	t57 = (x3377%(x3378^(x3379<<x3380)));

	if (t57 != 99U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3565 = INT16_MIN;
	uint32_t x3566 = 980633095U;
	volatile uint32_t x3567 = 39686308U;
	uint8_t x3568 = 0U;
	volatile uint32_t t58 = 0U;

	t58 = (x3565%(x3566^(x3567<<x3568)));

	if (t58 != 524559732U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3573 = -126668433;
	volatile int8_t x3574 = INT8_MAX;
	int8_t x3575 = 7;
	int32_t t59 = 3;

	t59 = (x3573%(x3574^(x3575<<x3576)));

	if (t59 != -2349) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3581 = -260776929;
	uint16_t x3582 = 11U;
	uint64_t x3584 = 17LLU;
	volatile uint64_t t60 = 49600634889LLU;

	t60 = (x3581%(x3582^(x3583<<x3584)));

	if (t60 != 18446744073448774687LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3713 = 534266LL;
	static uint16_t x3715 = UINT16_MAX;
	int8_t x3716 = 1;
	int64_t t61 = 1065048440541547755LL;

	t61 = (x3713%(x3714^(x3715<<x3716)));

	if (t61 != 10098LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3853 = UINT8_MAX;
	volatile uint32_t x3854 = 291065846U;
	static uint8_t x3855 = 0U;
	int16_t x3856 = 2;

	t62 = (x3853%(x3854^(x3855<<x3856)));

	if (t62 != 255U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x3857 = INT16_MIN;
	int64_t x3858 = INT64_MIN;
	static volatile uint32_t x3859 = 13514U;
	static uint16_t x3860 = 2U;
	int64_t t63 = 0LL;

	t63 = (x3857%(x3858^(x3859<<x3860)));

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3905 = INT32_MAX;
	int8_t x3906 = 28;
	uint64_t x3907 = 24824LLU;
	uint8_t x3908 = 7U;
	static uint64_t t64 = 99373971LLU;

	t64 = (x3905%(x3906^(x3907<<x3908)));

	if (t64 != 2671147LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4133 = -1215;
	uint16_t x4136 = 1U;
	static volatile int32_t t65 = -1;

	t65 = (x4133%(x4134^(x4135<<x4136)));

	if (t65 != -1215) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4157 = 1U;
	int16_t x4158 = INT16_MAX;
	uint64_t x4159 = UINT64_MAX;
	int32_t x4160 = 26;
	uint64_t t66 = 26710304945569LLU;

	t66 = (x4157%(x4158^(x4159<<x4160)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4273 = 2U;
	int16_t x4276 = 1;
	volatile uint32_t t67 = 43012925U;

	t67 = (x4273%(x4274^(x4275<<x4276)));

	if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4329 = 26U;
	static uint64_t x4330 = 1343834LLU;
	int64_t x4331 = 931189551LL;
	uint32_t x4332 = 3U;

	t68 = (x4329%(x4330^(x4331<<x4332)));

	if (t68 != 26LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4445 = -1;
	int64_t x4446 = INT64_MIN;
	int64_t x4447 = 4272559726355678LL;
	int16_t x4448 = 1;

	t69 = (x4445%(x4446^(x4447<<x4448)));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x4461 = UINT16_MAX;
	uint64_t x4463 = UINT64_MAX;
	int8_t x4464 = 0;
	uint64_t t70 = 18769332LLU;

	t70 = (x4461%(x4462^(x4463<<x4464)));

	if (t70 != 65535LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4469 = INT32_MAX;
	uint64_t x4470 = 810453056LLU;
	static volatile uint32_t x4471 = 1171U;
	static volatile int16_t x4472 = 27;
	uint64_t t71 = 52906336LLU;

	t71 = (x4469%(x4470^(x4471<<x4472)));

	if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4513 = -24;
	static int64_t x4514 = INT64_MIN;
	volatile int8_t x4516 = 5;
	volatile int64_t t72 = -238729624223LL;

	t72 = (x4513%(x4514^(x4515<<x4516)));

	if (t72 != -24LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4557 = INT8_MIN;
	volatile int64_t x4558 = 664234644475LL;
	static volatile uint64_t x4559 = 988598207530153LLU;
	int8_t x4560 = 8;
	uint64_t t73 = 12639661769755126LLU;

	t73 = (x4557%(x4558^(x4559<<x4560)));

	if (t73 != 224943544875968744LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x4657 = UINT8_MAX;
	uint64_t x4658 = UINT64_MAX;
	uint64_t t74 = 7088329712LLU;

	t74 = (x4657%(x4658^(x4659<<x4660)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4713 = 174LL;
	volatile uint64_t x4714 = 2824103945LLU;
	int16_t x4715 = 1;
	uint8_t x4716 = 15U;
	uint64_t t75 = 33656466LLU;

	t75 = (x4713%(x4714^(x4715<<x4716)));

	if (t75 != 174LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4749 = 416192793010LL;
	volatile int8_t x4750 = -26;
	uint32_t x4751 = UINT32_MAX;
	uint8_t x4752 = 23U;

	t76 = (x4749%(x4750^(x4751<<x4752)));

	if (t76 != 1685662LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4925 = INT16_MIN;
	uint32_t x4927 = UINT32_MAX;
	int16_t x4928 = 0;
	volatile uint32_t t77 = 91U;

	t77 = (x4925%(x4926^(x4927<<x4928)));

	if (t77 != 4294934528U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x4933 = 570366965782LLU;
	int64_t x4934 = -34LL;
	int16_t x4935 = INT16_MAX;
	uint8_t x4936 = 3U;
	static uint64_t t78 = 1276LLU;

	t78 = (x4933%(x4934^(x4935<<x4936)));

	if (t78 != 570366965782LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x5082 = INT8_MIN;
	static uint16_t x5083 = UINT16_MAX;
	int8_t x5084 = 1;

	t79 = (x5081%(x5082^(x5083<<x5084)));

	if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5137 = 260844004LLU;
	uint64_t x5138 = 1082347019054173257LLU;
	volatile int64_t x5139 = INT64_MAX;
	volatile uint64_t x5140 = 0LLU;
	static uint64_t t80 = 796LLU;

	t80 = (x5137%(x5138^(x5139<<x5140)));

	if (t80 != 260844004LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5177 = UINT8_MAX;
	int32_t x5178 = -1;
	static uint8_t x5179 = 96U;
	int8_t x5180 = 1;
	volatile int32_t t81 = 0;

	t81 = (x5177%(x5178^(x5179<<x5180)));

	if (t81 != 62) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5205 = UINT64_MAX;
	uint16_t x5206 = 1U;
	volatile uint8_t x5208 = 4U;
	uint64_t t82 = 9388405130370165LLU;

	t82 = (x5205%(x5206^(x5207<<x5208)));

	if (t82 != 434LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5225 = INT16_MAX;
	int16_t x5226 = INT16_MIN;
	static int8_t x5227 = 11;
	volatile uint8_t x5228 = 0U;

	t83 = (x5225%(x5226^(x5227<<x5228)));

	if (t83 != 10) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x5229 = 298;
	volatile int64_t x5230 = INT64_MAX;
	static volatile uint32_t x5231 = 132601U;
	int64_t t84 = 4116770366668LL;

	t84 = (x5229%(x5230^(x5231<<x5232)));

	if (t84 != 298LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x5241 = 2U;
	uint8_t x5243 = UINT8_MAX;
	uint16_t x5244 = 0U;
	volatile uint32_t t85 = 63U;

	t85 = (x5241%(x5242^(x5243<<x5244)));

	if (t85 != 2U) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x5297 = -1;
	int64_t x5298 = -1LL;
	uint64_t x5299 = 3264875147317LLU;
	uint32_t x5300 = 20U;
	volatile uint64_t t86 = 11653807583412LLU;

	t86 = (x5297%(x5298^(x5299<<x5300)));

	if (t86 != 3423469722473070592LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5501 = 1637018031U;
	static uint8_t x5503 = UINT8_MAX;
	volatile uint64_t t87 = 319830348029LLU;

	t87 = (x5501%(x5502^(x5503<<x5504)));

	if (t87 != 7LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5573 = -333;
	int64_t x5574 = INT64_MAX;

	t88 = (x5573%(x5574^(x5575<<x5576)));

	if (t88 != -333LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5709 = 65391U;
	uint8_t x5711 = UINT8_MAX;
	static volatile int8_t x5712 = 0;
	uint64_t t89 = 7212875LLU;

	t89 = (x5709%(x5710^(x5711<<x5712)));

	if (t89 != 111LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x5742 = INT16_MIN;
	volatile int32_t x5743 = 1025132;
	volatile uint16_t x5744 = 7U;

	t90 = (x5741%(x5742^(x5743<<x5744)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5813 = 9;
	int8_t x5814 = INT8_MIN;
	uint64_t x5815 = 49224210018483874LLU;
	int8_t x5816 = 10;
	uint64_t t91 = 2307445564LLU;

	t91 = (x5813%(x5814^(x5815<<x5816)));

	if (t91 != 9LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x5842 = -1746024LL;
	int64_t x5843 = 2231LL;
	uint8_t x5844 = 1U;
	volatile int64_t t92 = -387LL;

	t92 = (x5841%(x5842^(x5843<<x5844)));

	if (t92 != 917497LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5873 = 6U;
	int32_t x5874 = INT32_MIN;
	volatile uint8_t x5875 = UINT8_MAX;

	t93 = (x5873%(x5874^(x5875<<x5876)));

	if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x5889 = INT64_MIN;
	int16_t x5890 = -1;
	volatile int8_t x5892 = 13;
	uint64_t t94 = 296731401505500077LLU;

	t94 = (x5889%(x5890^(x5891<<x5892)));

	if (t94 != 2048LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x6045 = 62LL;
	uint32_t x6046 = 45U;
	int32_t x6047 = 407529;
	volatile uint8_t x6048 = 1U;
	volatile int64_t t95 = 97435752566LL;

	t95 = (x6045%(x6046^(x6047<<x6048)));

	if (t95 != 62LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6057 = -1;
	int16_t x6058 = -165;
	uint8_t x6059 = 21U;
	static volatile int32_t t96 = -5;

	t96 = (x6057%(x6058^(x6059<<x6060)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6169 = -4;
	uint32_t x6171 = 15U;
	volatile uint8_t x6172 = 6U;
	uint32_t t97 = 12551657U;

	t97 = (x6169%(x6170^(x6171<<x6172)));

	if (t97 != 957U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6338 = -1;
	uint32_t x6339 = UINT32_MAX;
	static uint8_t x6340 = 29U;
	volatile uint32_t t98 = 327918844U;

	t98 = (x6337%(x6338^(x6339<<x6340)));

	if (t98 != 6657U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x6374 = 1;
	uint64_t x6375 = UINT64_MAX;
	uint16_t x6376 = 48U;
	uint64_t t99 = 901152904LLU;

	t99 = (x6373%(x6374^(x6375<<x6376)));

	if (t99 != 65535LLU) { NG(); } else { ; }
	
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

