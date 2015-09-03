#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x86 = 5U;
volatile int32_t t1 = 66035166;
uint32_t x140 = UINT32_MAX;
int64_t x208 = INT64_MIN;
uint64_t t4 = 882LLU;
static uint8_t x234 = 3U;
int64_t x235 = INT64_MIN;
volatile int32_t t5 = -1;
int64_t x313 = INT64_MAX;
static uint8_t x414 = 0U;
uint16_t x415 = UINT16_MAX;
int8_t x425 = INT8_MAX;
uint32_t x427 = 3667950U;
volatile int64_t x428 = -1LL;
static uint32_t x590 = 5U;
int8_t x650 = 1;
volatile int8_t x651 = -1;
volatile uint64_t x897 = 368904129207596318LLU;
uint64_t t14 = 11004706LLU;
volatile int32_t x904 = INT32_MIN;
static int16_t x975 = 4;
static int32_t x1106 = 1;
int32_t x1107 = 8170796;
static int64_t x1108 = INT64_MIN;
volatile uint64_t x1149 = UINT64_MAX;
int64_t x1152 = -1LL;
int8_t x1173 = 3;
int32_t x1176 = INT32_MIN;
int8_t x1799 = -1;
int32_t t21 = -26;
int16_t x1803 = INT16_MIN;
int32_t x1820 = -23095;
volatile int32_t t23 = 1940562;
volatile uint8_t x1854 = 0U;
volatile uint8_t x1855 = UINT8_MAX;
uint64_t x1913 = 211592728644511882LLU;
uint64_t x1914 = 25LLU;
uint64_t x1921 = 21LLU;
volatile int64_t t28 = 139735791LL;
int32_t x2142 = 1;
uint32_t x2170 = 0U;
int8_t x2192 = -1;
uint16_t x2198 = 6U;
volatile int16_t x2253 = 77;
volatile uint16_t x2254 = 9U;
volatile int32_t x2372 = -1;
volatile uint16_t x2589 = UINT16_MAX;
uint8_t x2590 = 2U;
static int32_t t41 = 585;
int8_t x2754 = 7;
int8_t x2827 = 22;
uint16_t x2898 = 3U;
uint64_t x2926 = 7LLU;
static uint64_t x2957 = 96302LLU;
uint8_t x2962 = 7U;
volatile int16_t x2969 = INT16_MAX;
uint8_t x2972 = UINT8_MAX;
static int16_t x3016 = INT16_MAX;
int8_t x3201 = 4;
int32_t x3202 = 3;
uint16_t x3327 = 7297U;
int64_t x3351 = INT64_MIN;
static int16_t x3352 = INT16_MAX;
int32_t x3377 = 350;
int64_t x3795 = 100448618662895LL;
int8_t x3796 = 9;
volatile int8_t x3838 = 0;
static uint64_t t62 = 39861353918LLU;
static volatile uint8_t x4042 = 0U;
uint32_t x4073 = UINT32_MAX;
volatile uint32_t t68 = 12382U;
volatile int32_t x4083 = INT32_MIN;
volatile int32_t t69 = -5222;
volatile uint64_t t70 = 114594873098935LLU;
volatile int32_t x4113 = INT32_MAX;
volatile int32_t x4116 = INT32_MAX;
int64_t x4221 = 254898784661LL;
static volatile int64_t t76 = 1174037933LL;
uint8_t x4474 = 0U;
volatile uint32_t t77 = 4918U;
static int32_t x4488 = -14388;
volatile int16_t x4576 = INT16_MIN;
int32_t t80 = 230881;
volatile uint32_t x4668 = 374167U;
uint8_t x4757 = UINT8_MAX;
int8_t x4758 = 9;
int8_t x4809 = 3;
uint16_t x4877 = 1U;
uint8_t x4878 = 0U;
int32_t x4997 = 11115;
static uint8_t x4998 = 4U;
volatile int32_t t91 = -1;
static uint64_t x5508 = UINT64_MAX;
uint32_t x5590 = 3U;
int16_t x5631 = INT16_MIN;
int16_t x5655 = 5;
static int64_t x5852 = INT64_MIN;
volatile int32_t t99 = -899;


void f0(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int8_t x10 = 2;
	uint64_t x11 = 692492093LLU;
	static volatile uint64_t x12 = 658428976475205087LLU;
	volatile int32_t t0 = 0;

	t0 = ((x9<<x10)-(x11<x12));

	if (t0 != 1019) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x85 = 29U;
	static int16_t x87 = -1;
	int32_t x88 = INT32_MIN;

	t1 = ((x85<<x86)-(x87<x88));

	if (t1 != 928) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x137 = UINT16_MAX;
	volatile uint16_t x138 = 0U;
	static uint32_t x139 = 2664U;
	volatile int32_t t2 = -3768299;

	t2 = ((x137<<x138)-(x139<x140));

	if (t2 != 65534) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x205 = 73045142713035LLU;
	static uint64_t x206 = 55LLU;
	int32_t x207 = 469957203;
	static uint64_t t3 = 1234LLU;

	t3 = ((x205<<x206)-(x207<x208));

	if (t3 != 7313845794849685504LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x213 = UINT64_MAX;
	volatile uint16_t x214 = 39U;
	static int64_t x215 = -5034509042742LL;
	int8_t x216 = -13;

	t4 = ((x213<<x214)-(x215<x216));

	if (t4 != 18446743523953737727LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x233 = 23U;
	uint64_t x236 = UINT64_MAX;

	t5 = ((x233<<x234)-(x235<x236));

	if (t5 != 183) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x314 = 0;
	uint16_t x315 = UINT16_MAX;
	int64_t x316 = INT64_MIN;
	static int64_t t6 = INT64_MAX;

	t6 = ((x313<<x314)-(x315<x316));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x413 = 61U;
	volatile int8_t x416 = INT8_MIN;
	int32_t t7 = -1262980;

	t7 = ((x413<<x414)-(x415<x416));

	if (t7 != 61) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x426 = 1U;
	volatile int32_t t8 = -96810;

	t8 = ((x425<<x426)-(x427<x428));

	if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x509 = INT16_MAX;
	volatile int8_t x510 = 1;
	uint8_t x511 = 2U;
	uint16_t x512 = 7U;
	int32_t t9 = -1797;

	t9 = ((x509<<x510)-(x511<x512));

	if (t9 != 65533) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x589 = 1;
	volatile int8_t x591 = INT8_MAX;
	int32_t x592 = INT32_MIN;
	static volatile int32_t t10 = -120542785;

	t10 = ((x589<<x590)-(x591<x592));

	if (t10 != 32) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x601 = 29LLU;
	uint8_t x602 = 0U;
	static volatile int16_t x603 = -1;
	static uint64_t x604 = UINT64_MAX;
	uint64_t t11 = 182882259LLU;

	t11 = ((x601<<x602)-(x603<x604));

	if (t11 != 29LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x649 = 183;
	int16_t x652 = INT16_MIN;
	int32_t t12 = -2416;

	t12 = ((x649<<x650)-(x651<x652));

	if (t12 != 366) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x801 = 15338820;
	int8_t x802 = 0;
	int16_t x803 = INT16_MIN;
	int16_t x804 = INT16_MIN;
	volatile int32_t t13 = -337;

	t13 = ((x801<<x802)-(x803<x804));

	if (t13 != 15338820) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x898 = 8U;
	int32_t x899 = -1;
	int8_t x900 = -1;

	t14 = ((x897<<x898)-(x899<x900));

	if (t14 != 2205736708596899328LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x901 = 636U;
	int16_t x902 = 1;
	volatile int32_t x903 = INT32_MIN;
	volatile uint32_t t15 = 592U;

	t15 = ((x901<<x902)-(x903<x904));

	if (t15 != 1272U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x973 = INT64_MAX;
	uint8_t x974 = 0U;
	static int32_t x976 = 1129;
	volatile int64_t t16 = 4LL;

	t16 = ((x973<<x974)-(x975<x976));

	if (t16 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x1105 = 8455LLU;
	volatile uint64_t t17 = 18380542LLU;

	t17 = ((x1105<<x1106)-(x1107<x1108));

	if (t17 != 16910LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1150 = 0;
	uint16_t x1151 = 0U;
	static uint64_t t18 = UINT64_MAX;

	t18 = ((x1149<<x1150)-(x1151<x1152));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1174 = 0;
	volatile int64_t x1175 = 3458155837LL;
	int32_t t19 = -2455;

	t19 = ((x1173<<x1174)-(x1175<x1176));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1517 = 549755U;
	int16_t x1518 = 1;
	int8_t x1519 = 31;
	uint16_t x1520 = UINT16_MAX;
	volatile uint32_t t20 = 3U;

	t20 = ((x1517<<x1518)-(x1519<x1520));

	if (t20 != 1099509U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1797 = 6702903;
	static uint8_t x1798 = 1U;
	static volatile uint64_t x1800 = 693LLU;

	t21 = ((x1797<<x1798)-(x1799<x1800));

	if (t21 != 13405806) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1801 = UINT64_MAX;
	uint8_t x1802 = 6U;
	uint16_t x1804 = UINT16_MAX;
	uint64_t t22 = 529789115423056891LLU;

	t22 = ((x1801<<x1802)-(x1803<x1804));

	if (t22 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1817 = UINT16_MAX;
	static uint8_t x1818 = 0U;
	int16_t x1819 = INT16_MAX;

	t23 = ((x1817<<x1818)-(x1819<x1820));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x1853 = 26U;
	int64_t x1856 = INT64_MIN;
	int32_t t24 = -5901324;

	t24 = ((x1853<<x1854)-(x1855<x1856));

	if (t24 != 26) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x1889 = 31U;
	static uint16_t x1890 = 5U;
	volatile int16_t x1891 = INT16_MAX;
	int64_t x1892 = 79538552552086LL;
	volatile int32_t t25 = 4065275;

	t25 = ((x1889<<x1890)-(x1891<x1892));

	if (t25 != 991) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1915 = 70937922U;
	uint8_t x1916 = 3U;
	uint64_t t26 = 3092417LLU;

	t26 = ((x1913<<x1914)-(x1915<x1916));

	if (t26 != 17178931099053588480LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1922 = 1;
	int32_t x1923 = INT32_MIN;
	uint64_t x1924 = 29LLU;
	volatile uint64_t t27 = 454637043317994LLU;

	t27 = ((x1921<<x1922)-(x1923<x1924));

	if (t27 != 42LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1953 = 175783232522LL;
	int8_t x1954 = 0;
	int16_t x1955 = -3392;
	static int16_t x1956 = INT16_MIN;

	t28 = ((x1953<<x1954)-(x1955<x1956));

	if (t28 != 175783232522LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x2141 = 5500U;
	int64_t x2143 = -1LL;
	uint16_t x2144 = UINT16_MAX;
	uint32_t t29 = 816917U;

	t29 = ((x2141<<x2142)-(x2143<x2144));

	if (t29 != 10999U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x2149 = 26435634LLU;
	int8_t x2150 = 38;
	int64_t x2151 = INT64_MIN;
	static volatile int32_t x2152 = -16334;
	volatile uint64_t t30 = 11598281536LLU;

	t30 = ((x2149<<x2150)-(x2151<x2152));

	if (t30 != 7266571742657642495LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2157 = 0U;
	static int32_t x2158 = 2;
	int64_t x2159 = -17647033162428LL;
	static uint16_t x2160 = 2336U;
	int32_t t31 = 694;

	t31 = ((x2157<<x2158)-(x2159<x2160));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2169 = 296274U;
	static uint8_t x2171 = UINT8_MAX;
	int64_t x2172 = INT64_MIN;
	uint32_t t32 = 129349289U;

	t32 = ((x2169<<x2170)-(x2171<x2172));

	if (t32 != 296274U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x2189 = 2U;
	uint8_t x2190 = 6U;
	int32_t x2191 = 34080;
	static volatile int32_t t33 = -1;

	t33 = ((x2189<<x2190)-(x2191<x2192));

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x2197 = UINT32_MAX;
	volatile uint16_t x2199 = 1U;
	int16_t x2200 = INT16_MAX;
	volatile uint32_t t34 = 461U;

	t34 = ((x2197<<x2198)-(x2199<x2200));

	if (t34 != 4294967231U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2255 = 52212LL;
	static uint64_t x2256 = 31071LLU;
	volatile int32_t t35 = 5;

	t35 = ((x2253<<x2254)-(x2255<x2256));

	if (t35 != 39424) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2257 = 120U;
	uint16_t x2258 = 18U;
	static int32_t x2259 = -1;
	int16_t x2260 = 0;
	int32_t t36 = 3425241;

	t36 = ((x2257<<x2258)-(x2259<x2260));

	if (t36 != 31457279) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x2369 = 63051081;
	int8_t x2370 = 3;
	uint32_t x2371 = UINT32_MAX;
	int32_t t37 = -7342701;

	t37 = ((x2369<<x2370)-(x2371<x2372));

	if (t37 != 504408648) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2409 = 6;
	uint8_t x2410 = 0U;
	int32_t x2411 = 46144;
	static uint16_t x2412 = 24930U;
	volatile int32_t t38 = -107520518;

	t38 = ((x2409<<x2410)-(x2411<x2412));

	if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2591 = -1;
	volatile uint32_t x2592 = UINT32_MAX;
	int32_t t39 = -107062530;

	t39 = ((x2589<<x2590)-(x2591<x2592));

	if (t39 != 262140) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2601 = 1;
	uint32_t x2602 = 3U;
	volatile int64_t x2603 = INT64_MIN;
	uint32_t x2604 = 937U;
	volatile int32_t t40 = -340494;

	t40 = ((x2601<<x2602)-(x2603<x2604));

	if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2673 = 9U;
	uint16_t x2674 = 3U;
	volatile uint16_t x2675 = UINT16_MAX;
	int64_t x2676 = -1LL;

	t41 = ((x2673<<x2674)-(x2675<x2676));

	if (t41 != 72) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2709 = INT8_MAX;
	volatile uint32_t x2710 = 1U;
	static int8_t x2711 = INT8_MIN;
	uint32_t x2712 = 62793U;
	static volatile int32_t t42 = 22622;

	t42 = ((x2709<<x2710)-(x2711<x2712));

	if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2753 = 45032590LL;
	int64_t x2755 = INT64_MIN;
	int8_t x2756 = -47;
	static volatile int64_t t43 = -502046375LL;

	t43 = ((x2753<<x2754)-(x2755<x2756));

	if (t43 != 5764171519LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2825 = 1LL;
	uint8_t x2826 = 15U;
	int16_t x2828 = -1;
	volatile int64_t t44 = -135315LL;

	t44 = ((x2825<<x2826)-(x2827<x2828));

	if (t44 != 32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2897 = 1;
	int8_t x2899 = INT8_MIN;
	static int16_t x2900 = INT16_MAX;
	int32_t t45 = 1;

	t45 = ((x2897<<x2898)-(x2899<x2900));

	if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2925 = 11;
	uint16_t x2927 = 5U;
	uint64_t x2928 = 1LLU;
	static volatile int32_t t46 = -8282106;

	t46 = ((x2925<<x2926)-(x2927<x2928));

	if (t46 != 1408) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2958 = 1;
	volatile uint16_t x2959 = 68U;
	int64_t x2960 = INT64_MAX;
	static uint64_t t47 = 24745503LLU;

	t47 = ((x2957<<x2958)-(x2959<x2960));

	if (t47 != 192603LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x2961 = 6;
	uint64_t x2963 = 72033607934LLU;
	int64_t x2964 = INT64_MIN;
	int32_t t48 = 50828723;

	t48 = ((x2961<<x2962)-(x2963<x2964));

	if (t48 != 767) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2970 = 2U;
	int64_t x2971 = INT64_MIN;
	volatile int32_t t49 = -23047;

	t49 = ((x2969<<x2970)-(x2971<x2972));

	if (t49 != 131067) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3013 = INT8_MAX;
	static uint8_t x3014 = 3U;
	uint16_t x3015 = UINT16_MAX;
	static volatile int32_t t50 = -904;

	t50 = ((x3013<<x3014)-(x3015<x3016));

	if (t50 != 1016) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3101 = 1490730U;
	static uint32_t x3102 = 2U;
	static int16_t x3103 = -30;
	static int16_t x3104 = -1;
	static uint32_t t51 = 3U;

	t51 = ((x3101<<x3102)-(x3103<x3104));

	if (t51 != 5962919U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x3197 = 87299092U;
	int8_t x3198 = 24;
	static int64_t x3199 = -1LL;
	volatile int8_t x3200 = -19;
	volatile uint32_t t52 = 85647330U;

	t52 = ((x3197<<x3198)-(x3199<x3200));

	if (t52 != 335544320U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x3203 = 14729;
	uint8_t x3204 = 3U;
	volatile int32_t t53 = -192;

	t53 = ((x3201<<x3202)-(x3203<x3204));

	if (t53 != 32) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3293 = INT8_MAX;
	int8_t x3294 = 1;
	volatile int64_t x3295 = -2LL;
	int64_t x3296 = INT64_MAX;
	volatile int32_t t54 = -490829061;

	t54 = ((x3293<<x3294)-(x3295<x3296));

	if (t54 != 253) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x3325 = UINT64_MAX;
	int16_t x3326 = 3;
	int64_t x3328 = INT64_MIN;
	volatile uint64_t t55 = 52LLU;

	t55 = ((x3325<<x3326)-(x3327<x3328));

	if (t55 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3349 = 35U;
	uint8_t x3350 = 5U;
	int32_t t56 = -796;

	t56 = ((x3349<<x3350)-(x3351<x3352));

	if (t56 != 1119) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3378 = 7;
	uint64_t x3379 = 515720071LLU;
	int16_t x3380 = -1;
	int32_t t57 = 1;

	t57 = ((x3377<<x3378)-(x3379<x3380));

	if (t57 != 44799) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x3445 = 2;
	static uint32_t x3446 = 14U;
	volatile uint64_t x3447 = 88724397972LLU;
	static int32_t x3448 = INT32_MIN;
	static volatile int32_t t58 = -1;

	t58 = ((x3445<<x3446)-(x3447<x3448));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3613 = 53U;
	uint64_t x3614 = 13LLU;
	int32_t x3615 = -1;
	uint32_t x3616 = 222U;
	int32_t t59 = 2;

	t59 = ((x3613<<x3614)-(x3615<x3616));

	if (t59 != 434176) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3793 = INT16_MAX;
	int8_t x3794 = 3;
	int32_t t60 = -24353;

	t60 = ((x3793<<x3794)-(x3795<x3796));

	if (t60 != 262136) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3837 = UINT16_MAX;
	uint32_t x3839 = 463895408U;
	int32_t x3840 = -1;
	volatile int32_t t61 = 391144110;

	t61 = ((x3837<<x3838)-(x3839<x3840));

	if (t61 != 65534) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3901 = 31537771LLU;
	volatile uint16_t x3902 = 4U;
	static int8_t x3903 = 10;
	uint16_t x3904 = UINT16_MAX;

	t62 = ((x3901<<x3902)-(x3903<x3904));

	if (t62 != 504604335LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3953 = 0;
	static uint64_t x3954 = 4LLU;
	uint32_t x3955 = UINT32_MAX;
	volatile int64_t x3956 = INT64_MIN;
	volatile int32_t t63 = -1958;

	t63 = ((x3953<<x3954)-(x3955<x3956));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3977 = 0;
	static volatile uint8_t x3978 = 15U;
	uint64_t x3979 = 0LLU;
	volatile int16_t x3980 = -1;
	volatile int32_t t64 = 3662;

	t64 = ((x3977<<x3978)-(x3979<x3980));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3997 = UINT64_MAX;
	int64_t x3998 = 62LL;
	uint8_t x3999 = 3U;
	uint16_t x4000 = 713U;
	volatile uint64_t t65 = 3450LLU;

	t65 = ((x3997<<x3998)-(x3999<x4000));

	if (t65 != 13835058055282163711LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4001 = 13U;
	int8_t x4002 = 3;
	int16_t x4003 = -11;
	static int64_t x4004 = INT64_MIN;
	int32_t t66 = 300;

	t66 = ((x4001<<x4002)-(x4003<x4004));

	if (t66 != 104) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4041 = UINT32_MAX;
	int32_t x4043 = INT32_MIN;
	int64_t x4044 = -1LL;
	uint32_t t67 = 185443100U;

	t67 = ((x4041<<x4042)-(x4043<x4044));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4074 = 14U;
	int64_t x4075 = INT64_MIN;
	uint16_t x4076 = UINT16_MAX;

	t68 = ((x4073<<x4074)-(x4075<x4076));

	if (t68 != 4294950911U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4081 = 3331U;
	uint8_t x4082 = 17U;
	int8_t x4084 = -3;

	t69 = ((x4081<<x4082)-(x4083<x4084));

	if (t69 != 436600831) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4109 = 253LLU;
	static uint32_t x4110 = 1U;
	int16_t x4111 = INT16_MIN;
	int32_t x4112 = INT32_MIN;

	t70 = ((x4109<<x4110)-(x4111<x4112));

	if (t70 != 506LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4114 = 0LL;
	uint8_t x4115 = UINT8_MAX;
	int32_t t71 = -5390931;

	t71 = ((x4113<<x4114)-(x4115<x4116));

	if (t71 != 2147483646) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4222 = 6U;
	int16_t x4223 = INT16_MIN;
	uint32_t x4224 = 2572U;
	static int64_t t72 = 744435446LL;

	t72 = ((x4221<<x4222)-(x4223<x4224));

	if (t72 != 16313522218304LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4301 = 1U;
	static uint32_t x4302 = 3U;
	uint16_t x4303 = 9U;
	uint16_t x4304 = 89U;
	static int32_t t73 = 1238869;

	t73 = ((x4301<<x4302)-(x4303<x4304));

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x4325 = 15421U;
	uint8_t x4326 = 0U;
	int16_t x4327 = INT16_MAX;
	int8_t x4328 = INT8_MAX;
	volatile uint32_t t74 = 215U;

	t74 = ((x4325<<x4326)-(x4327<x4328));

	if (t74 != 15421U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x4389 = INT32_MAX;
	volatile uint8_t x4390 = 0U;
	volatile int16_t x4391 = INT16_MAX;
	int8_t x4392 = INT8_MIN;
	volatile int32_t t75 = INT32_MAX;

	t75 = ((x4389<<x4390)-(x4391<x4392));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4457 = 770358379643158786LL;
	uint8_t x4458 = 1U;
	static int8_t x4459 = -1;
	volatile int64_t x4460 = INT64_MAX;

	t76 = ((x4457<<x4458)-(x4459<x4460));

	if (t76 != 1540716759286317571LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4473 = 0U;
	static volatile uint16_t x4475 = UINT16_MAX;
	int64_t x4476 = -30597LL;

	t77 = ((x4473<<x4474)-(x4475<x4476));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4485 = 1;
	volatile uint8_t x4486 = 11U;
	volatile int32_t x4487 = -1;
	int32_t t78 = 20979530;

	t78 = ((x4485<<x4486)-(x4487<x4488));

	if (t78 != 2048) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4489 = 1U;
	int16_t x4490 = 5;
	uint32_t x4491 = 309079U;
	int64_t x4492 = INT64_MIN;
	int32_t t79 = 100;

	t79 = ((x4489<<x4490)-(x4491<x4492));

	if (t79 != 32) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4573 = INT8_MAX;
	int64_t x4574 = 6LL;
	int8_t x4575 = 2;

	t80 = ((x4573<<x4574)-(x4575<x4576));

	if (t80 != 8128) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4665 = UINT64_MAX;
	uint8_t x4666 = 19U;
	uint64_t x4667 = UINT64_MAX;
	uint64_t t81 = 33355006888674474LLU;

	t81 = ((x4665<<x4666)-(x4667<x4668));

	if (t81 != 18446744073709027328LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4759 = 720U;
	uint16_t x4760 = 5401U;
	volatile int32_t t82 = -2785458;

	t82 = ((x4757<<x4758)-(x4759<x4760));

	if (t82 != 130559) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4810 = 8U;
	uint64_t x4811 = 6485716LLU;
	static volatile int16_t x4812 = -8395;
	int32_t t83 = 78;

	t83 = ((x4809<<x4810)-(x4811<x4812));

	if (t83 != 767) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x4879 = -1;
	int8_t x4880 = -12;
	int32_t t84 = 9;

	t84 = ((x4877<<x4878)-(x4879<x4880));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4901 = UINT64_MAX;
	int8_t x4902 = 2;
	uint32_t x4903 = UINT32_MAX;
	volatile int64_t x4904 = INT64_MIN;
	volatile uint64_t t85 = 12584156475LLU;

	t85 = ((x4901<<x4902)-(x4903<x4904));

	if (t85 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x4999 = UINT32_MAX;
	int64_t x5000 = 3LL;
	int32_t t86 = 282808805;

	t86 = ((x4997<<x4998)-(x4999<x5000));

	if (t86 != 177840) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x5037 = INT64_MAX;
	uint8_t x5038 = 0U;
	uint32_t x5039 = UINT32_MAX;
	static int64_t x5040 = -1LL;
	static int64_t t87 = INT64_MAX;

	t87 = ((x5037<<x5038)-(x5039<x5040));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5121 = 7U;
	uint8_t x5122 = 3U;
	uint64_t x5123 = 3810LLU;
	static int32_t x5124 = 23158245;
	static int32_t t88 = -6477709;

	t88 = ((x5121<<x5122)-(x5123<x5124));

	if (t88 != 55) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5225 = 49U;
	static volatile uint16_t x5226 = 13U;
	volatile int8_t x5227 = 4;
	int8_t x5228 = INT8_MIN;
	int32_t t89 = -804410158;

	t89 = ((x5225<<x5226)-(x5227<x5228));

	if (t89 != 401408) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5317 = UINT32_MAX;
	static int8_t x5318 = 1;
	int64_t x5319 = INT64_MIN;
	int32_t x5320 = INT32_MAX;
	uint32_t t90 = 395812U;

	t90 = ((x5317<<x5318)-(x5319<x5320));

	if (t90 != 4294967293U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5405 = 254;
	uint8_t x5406 = 1U;
	uint16_t x5407 = 10643U;
	volatile uint64_t x5408 = 11989747LLU;

	t91 = ((x5405<<x5406)-(x5407<x5408));

	if (t91 != 507) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5505 = INT16_MAX;
	static uint8_t x5506 = 2U;
	uint32_t x5507 = 25020246U;
	volatile int32_t t92 = -232;

	t92 = ((x5505<<x5506)-(x5507<x5508));

	if (t92 != 131067) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5533 = 13U;
	int16_t x5534 = 1;
	volatile uint8_t x5535 = UINT8_MAX;
	static int32_t x5536 = INT32_MIN;
	static int32_t t93 = -12186;

	t93 = ((x5533<<x5534)-(x5535<x5536));

	if (t93 != 26) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x5589 = 28U;
	int16_t x5591 = INT16_MIN;
	static int8_t x5592 = -1;
	volatile int32_t t94 = 183875170;

	t94 = ((x5589<<x5590)-(x5591<x5592));

	if (t94 != 223) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x5629 = 1;
	uint16_t x5630 = 0U;
	int8_t x5632 = INT8_MIN;
	int32_t t95 = -42;

	t95 = ((x5629<<x5630)-(x5631<x5632));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x5633 = 54U;
	uint32_t x5634 = 13U;
	static int16_t x5635 = INT16_MAX;
	int32_t x5636 = INT32_MIN;
	int32_t t96 = -875;

	t96 = ((x5633<<x5634)-(x5635<x5636));

	if (t96 != 442368) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5653 = INT16_MAX;
	static volatile int8_t x5654 = 0;
	int64_t x5656 = INT64_MIN;
	static volatile int32_t t97 = -847928625;

	t97 = ((x5653<<x5654)-(x5655<x5656));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5761 = INT32_MAX;
	uint16_t x5762 = 0U;
	int8_t x5763 = -11;
	static int64_t x5764 = INT64_MIN;
	int32_t t98 = INT32_MAX;

	t98 = ((x5761<<x5762)-(x5763<x5764));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5849 = UINT8_MAX;
	volatile uint16_t x5850 = 5U;
	int16_t x5851 = -802;

	t99 = ((x5849<<x5850)-(x5851<x5852));

	if (t99 != 8160) { NG(); } else { ; }
	
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

