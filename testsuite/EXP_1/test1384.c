#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x23 = 99359U;
int8_t x122 = INT8_MIN;
uint32_t x123 = 22523776U;
int16_t x130 = 89;
int16_t x134 = INT16_MIN;
volatile int32_t t5 = 29468528;
int64_t x401 = INT64_MAX;
static uint8_t x521 = 100U;
int64_t x558 = INT64_MIN;
int32_t t15 = 317973172;
int32_t x574 = INT32_MIN;
int16_t x593 = INT16_MIN;
uint8_t x599 = UINT8_MAX;
uint32_t x655 = 4921U;
int8_t x656 = 1;
int32_t x692 = 0;
int32_t t22 = -6749144;
uint32_t x759 = 166675U;
uint16_t x760 = 9U;
uint32_t t23 = 700933U;
int64_t x879 = 15366LL;
uint8_t x944 = 1U;
int64_t t29 = 1783759296LL;
static uint16_t x1043 = UINT16_MAX;
uint16_t x1044 = 0U;
uint64_t x1050 = 51972429LLU;
int32_t t34 = -16150;
int32_t t35 = 1166543;
static int8_t x1109 = INT8_MAX;
int16_t x1121 = INT16_MIN;
uint64_t x1122 = 557292654088LLU;
int16_t x1173 = -1;
uint16_t x1174 = UINT16_MAX;
int8_t x1176 = 7;
volatile uint32_t x1204 = 20U;
int8_t x1259 = INT8_MAX;
volatile uint64_t x1294 = 927396LLU;
volatile int16_t x1342 = -1;
int16_t x1438 = INT16_MIN;
volatile int64_t x1781 = INT64_MIN;
int32_t t47 = -251;
int32_t t48 = -213592;
int16_t x1858 = -1;
int16_t x1859 = 719;
static int32_t t50 = -3792999;
int64_t x2015 = INT64_MAX;
static uint8_t x2064 = 13U;
int32_t x2095 = INT32_MIN;
volatile int8_t x2150 = INT8_MIN;
int8_t x2158 = INT8_MIN;
int16_t x2186 = INT16_MAX;
static uint64_t x2187 = 1044770235827003LLU;
int64_t x2226 = INT64_MIN;
uint32_t x2228 = 44U;
uint32_t x2251 = 421691085U;
uint8_t x2252 = 0U;
uint16_t x2263 = 465U;
volatile int32_t t62 = -3934028;
uint8_t x2372 = 5U;
static uint32_t x2378 = 115578U;
static uint8_t x2380 = 29U;
uint32_t x2464 = 27U;
int16_t x2570 = INT16_MAX;
int16_t x2571 = 0;
volatile int32_t t69 = 99062749;
static volatile int32_t t70 = 68595383;
int32_t x2675 = -1;
int64_t x2690 = INT64_MIN;
volatile int32_t x2692 = 9;
static int32_t t73 = -10470973;
uint8_t x2700 = 5U;
int8_t x2809 = INT8_MIN;
static int32_t x2941 = -27966012;
volatile uint64_t t79 = 10044LLU;
int64_t t80 = 1388730LL;
int32_t t81 = 62;
int16_t x3059 = 0;
int32_t x3063 = 104;
volatile uint8_t x3068 = 1U;
int32_t x3127 = -55058483;
volatile int32_t t87 = -48;
int32_t x3163 = INT32_MIN;
volatile int32_t t88 = 5084681;
static int64_t x3413 = -1LL;
volatile int32_t t89 = -229;
int64_t x3518 = INT64_MIN;
int16_t x3540 = 7;
volatile uint16_t x3544 = 14U;
volatile int32_t t93 = -62168;
volatile int32_t t94 = 46;
int32_t t95 = -111476211;
uint16_t x3661 = 136U;
uint32_t x3663 = 28890U;
uint64_t t98 = 19689909015LLU;


void f0(void) {
	int8_t x13 = -1;
	static int8_t x14 = INT8_MIN;
	int16_t x15 = 0;
	static uint8_t x16 = 3U;
	volatile int32_t t0 = -44;

	t0 = (((x13<x14)*x15)<<x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x21 = 8266499U;
	static int32_t x22 = INT32_MIN;
	uint16_t x24 = 0U;
	uint32_t t1 = 78842U;

	t1 = (((x21<x22)*x23)<<x24);

	if (t1 != 99359U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x113 = INT8_MIN;
	int64_t x114 = -852112026952713LL;
	int64_t x115 = INT64_MIN;
	uint8_t x116 = 9U;
	int64_t t2 = -265LL;

	t2 = (((x113<x114)*x115)<<x116);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x124 = 0U;
	static uint32_t t3 = 4711741U;

	t3 = (((x121<x122)*x123)<<x124);

	if (t3 != 22523776U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x129 = UINT16_MAX;
	int8_t x131 = 14;
	uint16_t x132 = 0U;
	int32_t t4 = 1064;

	t4 = (((x129<x130)*x131)<<x132);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x133 = 3U;
	static volatile uint16_t x135 = UINT16_MAX;
	uint8_t x136 = 7U;

	t5 = (((x133<x134)*x135)<<x136);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x181 = 536LLU;
	static int16_t x182 = -25;
	static int16_t x183 = 1004;
	static volatile uint16_t x184 = 1U;
	volatile int32_t t6 = 16;

	t6 = (((x181<x182)*x183)<<x184);

	if (t6 != 2008) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x269 = UINT32_MAX;
	volatile int64_t x270 = INT64_MIN;
	volatile int32_t x271 = -15303412;
	static uint8_t x272 = 15U;
	volatile int32_t t7 = 40;

	t7 = (((x269<x270)*x271)<<x272);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x353 = INT64_MAX;
	int8_t x354 = INT8_MIN;
	static int16_t x355 = 134;
	uint32_t x356 = 1U;
	volatile int32_t t8 = 0;

	t8 = (((x353<x354)*x355)<<x356);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x365 = 125420064LL;
	uint8_t x366 = 11U;
	static int64_t x367 = 1440LL;
	static uint16_t x368 = 0U;
	volatile int64_t t9 = 9429120597LL;

	t9 = (((x365<x366)*x367)<<x368);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x402 = INT16_MAX;
	volatile int8_t x403 = INT8_MIN;
	volatile uint16_t x404 = 2U;
	static int32_t t10 = -5207;

	t10 = (((x401<x402)*x403)<<x404);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x425 = INT64_MAX;
	int64_t x426 = INT64_MIN;
	int64_t x427 = INT64_MAX;
	int8_t x428 = 6;
	volatile int64_t t11 = 17639602LL;

	t11 = (((x425<x426)*x427)<<x428);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x441 = -1;
	volatile uint64_t x442 = 9415LLU;
	volatile int8_t x443 = -1;
	static uint8_t x444 = 3U;
	int32_t t12 = -34428;

	t12 = (((x441<x442)*x443)<<x444);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x493 = INT8_MIN;
	static int64_t x494 = INT64_MIN;
	int64_t x495 = 1LL;
	int32_t x496 = 59;
	volatile int64_t t13 = 1LL;

	t13 = (((x493<x494)*x495)<<x496);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x522 = INT8_MIN;
	int64_t x523 = INT64_MIN;
	static int16_t x524 = 27;
	int64_t t14 = 0LL;

	t14 = (((x521<x522)*x523)<<x524);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x557 = INT16_MIN;
	uint8_t x559 = 1U;
	volatile uint8_t x560 = 13U;

	t15 = (((x557<x558)*x559)<<x560);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x573 = INT32_MAX;
	int32_t x575 = INT32_MIN;
	int32_t x576 = 9;
	int32_t t16 = -34085148;

	t16 = (((x573<x574)*x575)<<x576);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x594 = -4096419;
	volatile uint16_t x595 = 594U;
	volatile uint16_t x596 = 1U;
	static volatile int32_t t17 = 5148;

	t17 = (((x593<x594)*x595)<<x596);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x597 = 1140U;
	uint16_t x598 = 124U;
	volatile uint8_t x600 = 3U;
	volatile int32_t t18 = -804;

	t18 = (((x597<x598)*x599)<<x600);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x637 = INT64_MAX;
	int16_t x638 = INT16_MIN;
	int8_t x639 = -3;
	int16_t x640 = 0;
	static int32_t t19 = -1014404271;

	t19 = (((x637<x638)*x639)<<x640);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x653 = -3634739LL;
	int16_t x654 = -172;
	volatile uint32_t t20 = 0U;

	t20 = (((x653<x654)*x655)<<x656);

	if (t20 != 9842U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x689 = INT32_MIN;
	uint64_t x690 = UINT64_MAX;
	volatile uint64_t x691 = 23LLU;
	static volatile uint64_t t21 = 18979816644261LLU;

	t21 = (((x689<x690)*x691)<<x692);

	if (t21 != 23LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x725 = UINT16_MAX;
	int16_t x726 = INT16_MAX;
	uint16_t x727 = 8162U;
	volatile uint8_t x728 = 2U;

	t22 = (((x725<x726)*x727)<<x728);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x757 = -1;
	uint64_t x758 = 83571237LLU;

	t23 = (((x757<x758)*x759)<<x760);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x809 = INT32_MAX;
	volatile int16_t x810 = INT16_MIN;
	volatile int16_t x811 = INT16_MAX;
	int16_t x812 = 5;
	static int32_t t24 = 9604;

	t24 = (((x809<x810)*x811)<<x812);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x849 = -10730;
	int8_t x850 = INT8_MAX;
	uint64_t x851 = UINT64_MAX;
	static int8_t x852 = 1;
	volatile uint64_t t25 = 285135LLU;

	t25 = (((x849<x850)*x851)<<x852);

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x877 = -1;
	uint64_t x878 = 214564898985621407LLU;
	int64_t x880 = 1LL;
	int64_t t26 = 35752980580784570LL;

	t26 = (((x877<x878)*x879)<<x880);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x901 = -1;
	int64_t x902 = INT64_MIN;
	volatile int64_t x903 = -1061235LL;
	volatile uint64_t x904 = 14LLU;
	static int64_t t27 = 650LL;

	t27 = (((x901<x902)*x903)<<x904);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x921 = UINT8_MAX;
	int64_t x922 = INT64_MIN;
	volatile int64_t x923 = INT64_MAX;
	volatile uint8_t x924 = 3U;
	int64_t t28 = -35301LL;

	t28 = (((x921<x922)*x923)<<x924);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x941 = 1U;
	int8_t x942 = -12;
	int64_t x943 = INT64_MAX;

	t29 = (((x941<x942)*x943)<<x944);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1021 = INT16_MIN;
	uint32_t x1022 = 874810U;
	uint16_t x1023 = UINT16_MAX;
	int16_t x1024 = 1;
	volatile int32_t t30 = 1;

	t30 = (((x1021<x1022)*x1023)<<x1024);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1041 = UINT16_MAX;
	uint32_t x1042 = 1405U;
	static int32_t t31 = -13869;

	t31 = (((x1041<x1042)*x1043)<<x1044);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1049 = -1108413647196226808LL;
	volatile int16_t x1051 = 265;
	volatile int16_t x1052 = 1;
	volatile int32_t t32 = 10461398;

	t32 = (((x1049<x1050)*x1051)<<x1052);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1073 = INT16_MAX;
	volatile int8_t x1074 = INT8_MAX;
	int8_t x1075 = INT8_MIN;
	static uint8_t x1076 = 5U;
	int32_t t33 = -85721;

	t33 = (((x1073<x1074)*x1075)<<x1076);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1077 = 551;
	static int64_t x1078 = -17950361978LL;
	int8_t x1079 = -28;
	uint16_t x1080 = 1U;

	t34 = (((x1077<x1078)*x1079)<<x1080);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1101 = INT16_MIN;
	int16_t x1102 = INT16_MIN;
	int16_t x1103 = 467;
	uint8_t x1104 = 29U;

	t35 = (((x1101<x1102)*x1103)<<x1104);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1110 = -1;
	volatile uint64_t x1111 = UINT64_MAX;
	static uint32_t x1112 = 0U;
	static uint64_t t36 = 1LLU;

	t36 = (((x1109<x1110)*x1111)<<x1112);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1123 = UINT8_MAX;
	uint8_t x1124 = 27U;
	static volatile int32_t t37 = -24056639;

	t37 = (((x1121<x1122)*x1123)<<x1124);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1175 = 456U;
	int32_t t38 = 8968;

	t38 = (((x1173<x1174)*x1175)<<x1176);

	if (t38 != 58368) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1201 = 5LLU;
	volatile uint16_t x1202 = 12089U;
	uint32_t x1203 = 17223626U;
	uint32_t t39 = 1U;

	t39 = (((x1201<x1202)*x1203)<<x1204);

	if (t39 != 4238344192U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1257 = INT32_MIN;
	int16_t x1258 = -1;
	int16_t x1260 = 1;
	volatile int32_t t40 = -4;

	t40 = (((x1257<x1258)*x1259)<<x1260);

	if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x1273 = 1U;
	uint64_t x1274 = UINT64_MAX;
	volatile uint32_t x1275 = 0U;
	volatile int8_t x1276 = 17;
	uint32_t t41 = 13208U;

	t41 = (((x1273<x1274)*x1275)<<x1276);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1293 = INT32_MIN;
	int16_t x1295 = INT16_MIN;
	uint8_t x1296 = 6U;
	volatile int32_t t42 = 226184243;

	t42 = (((x1293<x1294)*x1295)<<x1296);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1341 = 114U;
	volatile uint64_t x1343 = UINT64_MAX;
	uint8_t x1344 = 1U;
	static uint64_t t43 = 3747LLU;

	t43 = (((x1341<x1342)*x1343)<<x1344);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1437 = INT8_MIN;
	static uint32_t x1439 = UINT32_MAX;
	int16_t x1440 = 1;
	static volatile uint32_t t44 = 35341841U;

	t44 = (((x1437<x1438)*x1439)<<x1440);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1501 = INT64_MIN;
	int8_t x1502 = -1;
	static uint64_t x1503 = 50471326284033205LLU;
	uint32_t x1504 = 0U;
	uint64_t t45 = 112694743583LLU;

	t45 = (((x1501<x1502)*x1503)<<x1504);

	if (t45 != 50471326284033205LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1677 = INT64_MAX;
	int16_t x1678 = 11;
	int32_t x1679 = INT32_MIN;
	uint8_t x1680 = 5U;
	volatile int32_t t46 = -1237;

	t46 = (((x1677<x1678)*x1679)<<x1680);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1782 = INT16_MIN;
	volatile uint16_t x1783 = UINT16_MAX;
	uint8_t x1784 = 14U;

	t47 = (((x1781<x1782)*x1783)<<x1784);

	if (t47 != 1073725440) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1821 = 13U;
	volatile int64_t x1822 = INT64_MIN;
	static uint16_t x1823 = 9U;
	volatile uint16_t x1824 = 10U;

	t48 = (((x1821<x1822)*x1823)<<x1824);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1857 = INT32_MIN;
	static uint8_t x1860 = 0U;
	volatile int32_t t49 = 6;

	t49 = (((x1857<x1858)*x1859)<<x1860);

	if (t49 != 719) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x1869 = 13U;
	static int32_t x1870 = -1;
	uint8_t x1871 = 111U;
	volatile int16_t x1872 = 17;

	t50 = (((x1869<x1870)*x1871)<<x1872);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1917 = INT64_MAX;
	volatile int8_t x1918 = 1;
	static uint16_t x1919 = 4506U;
	uint32_t x1920 = 17U;
	volatile int32_t t51 = -1344;

	t51 = (((x1917<x1918)*x1919)<<x1920);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2013 = 500033548U;
	uint8_t x2014 = 65U;
	uint16_t x2016 = 14U;
	int64_t t52 = -197718LL;

	t52 = (((x2013<x2014)*x2015)<<x2016);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2021 = -1;
	uint64_t x2022 = 1226716LLU;
	volatile uint8_t x2023 = UINT8_MAX;
	uint8_t x2024 = 1U;
	volatile int32_t t53 = -118961;

	t53 = (((x2021<x2022)*x2023)<<x2024);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2061 = -35;
	uint64_t x2062 = 280128977433746327LLU;
	volatile int16_t x2063 = -2;
	int32_t t54 = 103369;

	t54 = (((x2061<x2062)*x2063)<<x2064);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2081 = INT64_MAX;
	int16_t x2082 = 0;
	static int64_t x2083 = 172LL;
	volatile uint8_t x2084 = 1U;
	int64_t t55 = -37721194788569943LL;

	t55 = (((x2081<x2082)*x2083)<<x2084);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2093 = INT8_MAX;
	uint16_t x2094 = 1U;
	int8_t x2096 = 2;
	int32_t t56 = -1;

	t56 = (((x2093<x2094)*x2095)<<x2096);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2149 = 190011906700620385LLU;
	static uint32_t x2151 = 1281U;
	uint8_t x2152 = 4U;
	static volatile uint32_t t57 = 47531U;

	t57 = (((x2149<x2150)*x2151)<<x2152);

	if (t57 != 20496U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x2157 = INT16_MAX;
	uint64_t x2159 = 156570896598455LLU;
	uint8_t x2160 = 1U;
	static volatile uint64_t t58 = 5206688701267145LLU;

	t58 = (((x2157<x2158)*x2159)<<x2160);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2185 = -1;
	uint16_t x2188 = 1U;
	static volatile uint64_t t59 = 443445079LLU;

	t59 = (((x2185<x2186)*x2187)<<x2188);

	if (t59 != 2089540471654006LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2225 = INT16_MIN;
	volatile int64_t x2227 = 204566571466611LL;
	int64_t t60 = 10552194618947818LL;

	t60 = (((x2225<x2226)*x2227)<<x2228);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2249 = INT64_MIN;
	static volatile int64_t x2250 = 1057745LL;
	static volatile uint32_t t61 = 2143U;

	t61 = (((x2249<x2250)*x2251)<<x2252);

	if (t61 != 421691085U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2261 = -8383573599190014LL;
	static int64_t x2262 = -4826009211934LL;
	static int16_t x2264 = 15;

	t62 = (((x2261<x2262)*x2263)<<x2264);

	if (t62 != 15237120) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x2337 = INT16_MIN;
	int64_t x2338 = -24787216915584261LL;
	static int64_t x2339 = -839LL;
	int16_t x2340 = 0;
	int64_t t63 = 4601691541LL;

	t63 = (((x2337<x2338)*x2339)<<x2340);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2369 = -1;
	int8_t x2370 = -37;
	uint64_t x2371 = 3586264208783868879LLU;
	volatile uint64_t t64 = 315901573875584452LLU;

	t64 = (((x2369<x2370)*x2371)<<x2372);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2377 = -1;
	static uint16_t x2379 = 7570U;
	int32_t t65 = 45153;

	t65 = (((x2377<x2378)*x2379)<<x2380);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2417 = UINT64_MAX;
	static uint64_t x2418 = 1099LLU;
	volatile int32_t x2419 = INT32_MAX;
	int8_t x2420 = 1;
	static int32_t t66 = -220354345;

	t66 = (((x2417<x2418)*x2419)<<x2420);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x2461 = UINT8_MAX;
	static volatile int16_t x2462 = INT16_MIN;
	int64_t x2463 = INT64_MAX;
	int64_t t67 = 11192414239674085LL;

	t67 = (((x2461<x2462)*x2463)<<x2464);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2493 = INT16_MIN;
	static int16_t x2494 = 2074;
	volatile int64_t x2495 = 11LL;
	uint8_t x2496 = 3U;
	int64_t t68 = 5251021LL;

	t68 = (((x2493<x2494)*x2495)<<x2496);

	if (t68 != 88LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x2569 = INT32_MAX;
	uint8_t x2572 = 0U;

	t69 = (((x2569<x2570)*x2571)<<x2572);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x2641 = 0U;
	int32_t x2642 = -1;
	static volatile int16_t x2643 = INT16_MIN;
	volatile uint8_t x2644 = 0U;

	t70 = (((x2641<x2642)*x2643)<<x2644);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2661 = 0;
	int32_t x2662 = INT32_MIN;
	int32_t x2663 = INT32_MIN;
	uint8_t x2664 = 8U;
	static volatile int32_t t71 = -2839807;

	t71 = (((x2661<x2662)*x2663)<<x2664);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2673 = 2;
	int64_t x2674 = -30468145080LL;
	int8_t x2676 = 2;
	volatile int32_t t72 = -6;

	t72 = (((x2673<x2674)*x2675)<<x2676);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2689 = -3878992585557LL;
	static int16_t x2691 = INT16_MIN;

	t73 = (((x2689<x2690)*x2691)<<x2692);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2697 = INT16_MIN;
	uint8_t x2698 = 80U;
	uint16_t x2699 = UINT16_MAX;
	int32_t t74 = -13439445;

	t74 = (((x2697<x2698)*x2699)<<x2700);

	if (t74 != 2097120) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2705 = 44U;
	int16_t x2706 = INT16_MIN;
	volatile int16_t x2707 = INT16_MIN;
	int8_t x2708 = 2;
	volatile int32_t t75 = 93018;

	t75 = (((x2705<x2706)*x2707)<<x2708);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2810 = 60U;
	uint32_t x2811 = 403U;
	int32_t x2812 = 4;
	volatile uint32_t t76 = 1330327874U;

	t76 = (((x2809<x2810)*x2811)<<x2812);

	if (t76 != 6448U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2845 = 127103697LL;
	volatile int16_t x2846 = INT16_MAX;
	static int8_t x2847 = INT8_MIN;
	uint8_t x2848 = 13U;
	volatile int32_t t77 = -476818;

	t77 = (((x2845<x2846)*x2847)<<x2848);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2942 = INT8_MIN;
	volatile uint8_t x2943 = UINT8_MAX;
	uint8_t x2944 = 1U;
	int32_t t78 = -40980;

	t78 = (((x2941<x2942)*x2943)<<x2944);

	if (t78 != 510) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2953 = -2182937;
	int16_t x2954 = -1;
	uint64_t x2955 = 104839652741853LLU;
	int8_t x2956 = 57;

	t79 = (((x2953<x2954)*x2955)<<x2956);

	if (t79 != 13402712491054596096LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2969 = UINT32_MAX;
	uint32_t x2970 = UINT32_MAX;
	volatile int64_t x2971 = INT64_MAX;
	int16_t x2972 = 0;

	t80 = (((x2969<x2970)*x2971)<<x2972);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2989 = INT16_MIN;
	int64_t x2990 = -616304480274LL;
	int8_t x2991 = -28;
	static uint8_t x2992 = 4U;

	t81 = (((x2989<x2990)*x2991)<<x2992);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3001 = -42;
	uint32_t x3002 = 20U;
	static int32_t x3003 = -1;
	int8_t x3004 = 5;
	int32_t t82 = -1049749;

	t82 = (((x3001<x3002)*x3003)<<x3004);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3057 = INT16_MAX;
	uint32_t x3058 = UINT32_MAX;
	uint8_t x3060 = 21U;
	volatile int32_t t83 = -27;

	t83 = (((x3057<x3058)*x3059)<<x3060);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3061 = -1;
	int64_t x3062 = -8912908584LL;
	uint64_t x3064 = 3LLU;
	int32_t t84 = -43;

	t84 = (((x3061<x3062)*x3063)<<x3064);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3065 = INT32_MIN;
	uint32_t x3066 = 1407064U;
	int16_t x3067 = INT16_MIN;
	int32_t t85 = 0;

	t85 = (((x3065<x3066)*x3067)<<x3068);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3125 = INT32_MIN;
	volatile uint64_t x3126 = 58754080669078LLU;
	static volatile int32_t x3128 = 0;
	volatile int32_t t86 = -530053638;

	t86 = (((x3125<x3126)*x3127)<<x3128);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3157 = INT32_MIN;
	uint32_t x3158 = UINT32_MAX;
	static uint16_t x3159 = 10U;
	uint16_t x3160 = 1U;

	t87 = (((x3157<x3158)*x3159)<<x3160);

	if (t87 != 20) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3161 = 2976U;
	int64_t x3162 = INT64_MIN;
	uint8_t x3164 = 0U;

	t88 = (((x3161<x3162)*x3163)<<x3164);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3414 = 992840700LLU;
	static int8_t x3415 = -4;
	uint8_t x3416 = 1U;

	t89 = (((x3413<x3414)*x3415)<<x3416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x3497 = UINT32_MAX;
	int8_t x3498 = INT8_MAX;
	uint32_t x3499 = 23506U;
	int8_t x3500 = 8;
	volatile uint32_t t90 = 28621U;

	t90 = (((x3497<x3498)*x3499)<<x3500);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x3517 = INT64_MIN;
	int32_t x3519 = INT32_MIN;
	uint8_t x3520 = 1U;
	int32_t t91 = 4410;

	t91 = (((x3517<x3518)*x3519)<<x3520);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3537 = 1;
	uint64_t x3538 = UINT64_MAX;
	static uint32_t x3539 = 179806612U;
	uint32_t t92 = 678562U;

	t92 = (((x3537<x3538)*x3539)<<x3540);

	if (t92 != 1540409856U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3541 = 0LL;
	volatile uint32_t x3542 = 22225U;
	int8_t x3543 = 24;

	t93 = (((x3541<x3542)*x3543)<<x3544);

	if (t93 != 393216) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x3577 = 25036312477999LLU;
	volatile int8_t x3578 = 0;
	volatile int8_t x3579 = -5;
	volatile uint8_t x3580 = 2U;

	t94 = (((x3577<x3578)*x3579)<<x3580);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3629 = 2;
	int32_t x3630 = -247134917;
	int32_t x3631 = INT32_MAX;
	volatile uint8_t x3632 = 4U;

	t95 = (((x3629<x3630)*x3631)<<x3632);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3662 = -1;
	static uint8_t x3664 = 15U;
	uint32_t t96 = 79964U;

	t96 = (((x3661<x3662)*x3663)<<x3664);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x3705 = 2U;
	int64_t x3706 = -1LL;
	int64_t x3707 = INT64_MAX;
	uint8_t x3708 = 0U;
	static volatile int64_t t97 = 173005762LL;

	t97 = (((x3705<x3706)*x3707)<<x3708);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3725 = 5U;
	uint16_t x3726 = 14U;
	uint64_t x3727 = 72076LLU;
	uint8_t x3728 = 12U;

	t98 = (((x3725<x3726)*x3727)<<x3728);

	if (t98 != 295223296LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3769 = 114U;
	uint8_t x3770 = UINT8_MAX;
	static uint16_t x3771 = 574U;
	uint16_t x3772 = 0U;
	volatile int32_t t99 = -8;

	t99 = (((x3769<x3770)*x3771)<<x3772);

	if (t99 != 574) { NG(); } else { ; }
	
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

