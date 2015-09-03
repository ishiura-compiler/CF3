#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = -1LL;
int8_t x10 = INT8_MAX;
uint8_t x11 = 24U;
uint32_t x102 = UINT32_MAX;
volatile uint8_t x114 = 122U;
volatile int64_t t4 = -36682054929565LL;
int8_t x197 = -1;
int8_t x198 = INT8_MIN;
int16_t x222 = -1;
uint32_t x223 = UINT32_MAX;
uint64_t x289 = 202LLU;
volatile uint16_t x298 = UINT16_MAX;
int16_t x749 = INT16_MIN;
int32_t x750 = -1592622;
uint32_t x751 = 22877751U;
uint8_t x841 = UINT8_MAX;
uint64_t x843 = 3241968272LLU;
uint64_t x847 = UINT64_MAX;
static uint8_t x900 = 24U;
uint16_t x940 = 3U;
int32_t x1060 = 1;
volatile int32_t t19 = 96135;
int16_t x1086 = INT16_MIN;
uint64_t t21 = 77041533561LLU;
static uint8_t x1136 = 1U;
uint8_t x1228 = 3U;
static volatile uint8_t x1294 = UINT8_MAX;
int64_t x1295 = 3LL;
static int64_t t24 = INT64_MIN;
static uint64_t x1330 = 48635610010LLU;
int16_t x1332 = 1;
uint16_t x1360 = 5U;
int64_t x1370 = INT64_MIN;
int64_t x1542 = 1209799271LL;
int32_t x1543 = 268030;
uint16_t x1565 = 960U;
uint16_t x1567 = 1U;
volatile int64_t x1641 = INT64_MIN;
static uint16_t x1684 = 13U;
volatile uint64_t x1775 = UINT64_MAX;
static volatile int32_t t32 = 1;
uint64_t x1795 = 4545LLU;
int32_t x1830 = -15098;
static uint64_t x1832 = 4LLU;
static uint64_t x1911 = 1121089758712781710LLU;
static volatile int32_t t36 = 1103696;
uint8_t x1995 = 1U;
int8_t x1996 = 0;
volatile int32_t t43 = 179524;
volatile int32_t t44 = -11157;
volatile uint32_t x2269 = 206213072U;
static volatile uint8_t x2275 = 17U;
int8_t x2276 = 2;
static int64_t x2294 = -1LL;
int8_t x2296 = 27;
int8_t x2378 = 0;
int32_t x2394 = -1;
uint16_t x2396 = 25U;
uint32_t x2417 = UINT32_MAX;
uint64_t x2419 = 31LLU;
static volatile uint8_t x2420 = 24U;
uint16_t x2536 = 7U;
volatile int32_t t55 = 4341941;
int32_t t57 = 0;
int16_t x2631 = INT16_MAX;
volatile int32_t t61 = -321579520;
uint8_t x3069 = 53U;
uint16_t x3076 = 0U;
uint8_t x3089 = 1U;
static volatile uint64_t x3092 = 0LLU;
int16_t x3136 = 0;
int16_t x3369 = INT16_MIN;
int32_t x3482 = INT32_MIN;
static uint16_t x3538 = 2589U;
uint16_t x3589 = 0U;
static int32_t x3744 = 8;
volatile int32_t x3762 = INT32_MIN;
volatile uint32_t x3810 = UINT32_MAX;
uint8_t x3812 = 3U;
static uint8_t x3815 = UINT8_MAX;
volatile int16_t x3850 = -1;
int64_t t84 = -939277107941501079LL;
volatile int8_t x3881 = -1;
uint32_t x3883 = UINT32_MAX;
int16_t x3903 = 90;
static volatile uint16_t x4070 = UINT16_MAX;
int32_t x4142 = INT32_MIN;
int32_t x4235 = 2;
uint8_t x4236 = 12U;
int64_t x4341 = INT64_MIN;
int8_t x4493 = -13;
uint8_t x4581 = UINT8_MAX;
int64_t x4633 = INT64_MAX;
static uint64_t x4635 = 1180857660LLU;
int32_t t99 = -1;


void f0(void) {
	uint8_t x12 = 1U;
	volatile int64_t t0 = -16306191073627LL;

	t0 = (x9+(x10<=(x11>>x12)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x45 = 19930124966859337LLU;
	int32_t x46 = INT32_MAX;
	int8_t x47 = 5;
	static int8_t x48 = 0;
	volatile uint64_t t1 = 174036339374726LLU;

	t1 = (x45+(x46<=(x47>>x48)));

	if (t1 != 19930124966859337LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x61 = 1618067400LLU;
	int8_t x62 = -1;
	int16_t x63 = 202;
	volatile int8_t x64 = 1;
	uint64_t t2 = 2538863745413147996LLU;

	t2 = (x61+(x62<=(x63>>x64)));

	if (t2 != 1618067401LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x101 = UINT8_MAX;
	int8_t x103 = 17;
	int8_t x104 = 2;
	static int32_t t3 = 792281471;

	t3 = (x101+(x102<=(x103>>x104)));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x113 = -285522432124717LL;
	uint16_t x115 = 233U;
	uint32_t x116 = 28U;

	t4 = (x113+(x114<=(x115>>x116)));

	if (t4 != -285522432124717LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x199 = INT32_MAX;
	static int16_t x200 = 0;
	int32_t t5 = -281152;

	t5 = (x197+(x198<=(x199>>x200)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x221 = -1;
	static int8_t x224 = 12;
	volatile int32_t t6 = 271703266;

	t6 = (x221+(x222<=(x223>>x224)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x229 = INT64_MAX;
	uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 491U;
	static uint16_t x232 = 0U;
	static int64_t t7 = INT64_MAX;

	t7 = (x229+(x230<=(x231>>x232)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x265 = UINT8_MAX;
	static volatile int64_t x266 = -1LL;
	static uint32_t x267 = 0U;
	uint64_t x268 = 2LLU;
	int32_t t8 = -176;

	t8 = (x265+(x266<=(x267>>x268)));

	if (t8 != 256) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x290 = INT16_MAX;
	uint64_t x291 = UINT64_MAX;
	static int8_t x292 = 26;
	volatile uint64_t t9 = 789432442371201LLU;

	t9 = (x289+(x290<=(x291>>x292)));

	if (t9 != 203LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x297 = -120838151385600676LL;
	uint16_t x299 = UINT16_MAX;
	uint32_t x300 = 6U;
	int64_t t10 = 69266135760228162LL;

	t10 = (x297+(x298<=(x299>>x300)));

	if (t10 != -120838151385600676LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x305 = 795826U;
	uint8_t x306 = UINT8_MAX;
	uint8_t x307 = 22U;
	int8_t x308 = 2;
	volatile uint32_t t11 = 356212U;

	t11 = (x305+(x306<=(x307>>x308)));

	if (t11 != 795826U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x509 = UINT64_MAX;
	static uint32_t x510 = 613542171U;
	int16_t x511 = INT16_MAX;
	uint8_t x512 = 0U;
	static volatile uint64_t t12 = UINT64_MAX;

	t12 = (x509+(x510<=(x511>>x512)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x617 = 685U;
	volatile uint16_t x618 = 91U;
	static uint16_t x619 = 273U;
	volatile int32_t x620 = 0;
	static int32_t t13 = -5;

	t13 = (x617+(x618<=(x619>>x620)));

	if (t13 != 686) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x752 = 7U;
	int32_t t14 = -156508;

	t14 = (x749+(x750<=(x751>>x752)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x842 = -1;
	int8_t x844 = 20;
	int32_t t15 = -116;

	t15 = (x841+(x842<=(x843>>x844)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x845 = -435;
	uint16_t x846 = 5U;
	uint8_t x848 = 8U;
	int32_t t16 = 12346;

	t16 = (x845+(x846<=(x847>>x848)));

	if (t16 != -434) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x897 = INT32_MIN;
	int8_t x898 = 3;
	int8_t x899 = INT8_MAX;
	int32_t t17 = INT32_MIN;

	t17 = (x897+(x898<=(x899>>x900)));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x937 = -1;
	volatile int16_t x938 = 6936;
	volatile int8_t x939 = INT8_MAX;
	int32_t t18 = -614;

	t18 = (x937+(x938<=(x939>>x940)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1057 = INT16_MIN;
	int8_t x1058 = -14;
	uint8_t x1059 = 23U;

	t19 = (x1057+(x1058<=(x1059>>x1060)));

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1069 = 0U;
	static uint64_t x1070 = UINT64_MAX;
	uint16_t x1071 = 741U;
	static uint32_t x1072 = 1U;
	static volatile int32_t t20 = 67787;

	t20 = (x1069+(x1070<=(x1071>>x1072)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1085 = 21776628LLU;
	volatile uint32_t x1087 = UINT32_MAX;
	int16_t x1088 = 12;

	t21 = (x1085+(x1086<=(x1087>>x1088)));

	if (t21 != 21776628LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1133 = 30U;
	int8_t x1134 = INT8_MAX;
	volatile uint8_t x1135 = UINT8_MAX;
	volatile int32_t t22 = -191356906;

	t22 = (x1133+(x1134<=(x1135>>x1136)));

	if (t22 != 31) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1225 = 8U;
	uint32_t x1226 = UINT32_MAX;
	uint64_t x1227 = UINT64_MAX;
	static volatile int32_t t23 = 5795;

	t23 = (x1225+(x1226<=(x1227>>x1228)));

	if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1293 = INT64_MIN;
	int8_t x1296 = 0;

	t24 = (x1293+(x1294<=(x1295>>x1296)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1329 = 58001LLU;
	uint32_t x1331 = UINT32_MAX;
	uint64_t t25 = 22291256466LLU;

	t25 = (x1329+(x1330<=(x1331>>x1332)));

	if (t25 != 58001LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1357 = 2LLU;
	int64_t x1358 = INT64_MIN;
	int16_t x1359 = INT16_MAX;
	static uint64_t t26 = 3310893LLU;

	t26 = (x1357+(x1358<=(x1359>>x1360)));

	if (t26 != 3LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1369 = -1;
	volatile uint8_t x1371 = UINT8_MAX;
	int32_t x1372 = 9;
	volatile int32_t t27 = 14851;

	t27 = (x1369+(x1370<=(x1371>>x1372)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1541 = 1181825081673826LLU;
	volatile uint16_t x1544 = 0U;
	volatile uint64_t t28 = 1747LLU;

	t28 = (x1541+(x1542<=(x1543>>x1544)));

	if (t28 != 1181825081673826LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1566 = INT8_MIN;
	static volatile uint8_t x1568 = 14U;
	volatile int32_t t29 = -5707250;

	t29 = (x1565+(x1566<=(x1567>>x1568)));

	if (t29 != 961) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1642 = INT32_MAX;
	uint16_t x1643 = 195U;
	uint16_t x1644 = 5U;
	static int64_t t30 = INT64_MIN;

	t30 = (x1641+(x1642<=(x1643>>x1644)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1681 = -40;
	static int32_t x1682 = -185272982;
	static int64_t x1683 = INT64_MAX;
	int32_t t31 = -747496;

	t31 = (x1681+(x1682<=(x1683>>x1684)));

	if (t31 != -39) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1773 = -11;
	int8_t x1774 = -1;
	volatile uint8_t x1776 = 4U;

	t32 = (x1773+(x1774<=(x1775>>x1776)));

	if (t32 != -11) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1793 = INT8_MIN;
	static uint8_t x1794 = UINT8_MAX;
	uint8_t x1796 = 14U;
	volatile int32_t t33 = -1;

	t33 = (x1793+(x1794<=(x1795>>x1796)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1829 = 252617690U;
	static uint64_t x1831 = UINT64_MAX;
	uint32_t t34 = 8032787U;

	t34 = (x1829+(x1830<=(x1831>>x1832)));

	if (t34 != 252617690U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1909 = INT64_MIN;
	static uint64_t x1910 = UINT64_MAX;
	volatile uint8_t x1912 = 27U;
	int64_t t35 = INT64_MIN;

	t35 = (x1909+(x1910<=(x1911>>x1912)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1973 = 3U;
	int16_t x1974 = INT16_MIN;
	uint64_t x1975 = 46686357LLU;
	static uint8_t x1976 = 4U;

	t36 = (x1973+(x1974<=(x1975>>x1976)));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1993 = INT64_MIN;
	uint32_t x1994 = 127U;
	int64_t t37 = INT64_MIN;

	t37 = (x1993+(x1994<=(x1995>>x1996)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2013 = -6;
	uint64_t x2014 = 4624099784946920LLU;
	static volatile int16_t x2015 = INT16_MAX;
	static int16_t x2016 = 7;
	int32_t t38 = -18885132;

	t38 = (x2013+(x2014<=(x2015>>x2016)));

	if (t38 != -6) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2021 = -1;
	int64_t x2022 = INT64_MIN;
	volatile uint32_t x2023 = 4116U;
	uint8_t x2024 = 18U;
	volatile int32_t t39 = -138;

	t39 = (x2021+(x2022<=(x2023>>x2024)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2041 = 4038;
	int32_t x2042 = -1;
	uint32_t x2043 = UINT32_MAX;
	uint32_t x2044 = 1U;
	volatile int32_t t40 = -98485188;

	t40 = (x2041+(x2042<=(x2043>>x2044)));

	if (t40 != 4038) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2045 = UINT64_MAX;
	volatile int32_t x2046 = 18614330;
	volatile int32_t x2047 = 3095768;
	static volatile uint16_t x2048 = 0U;
	uint64_t t41 = UINT64_MAX;

	t41 = (x2045+(x2046<=(x2047>>x2048)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2125 = INT8_MIN;
	int8_t x2126 = 4;
	int32_t x2127 = 1;
	uint32_t x2128 = 12U;
	static int32_t t42 = 1727926;

	t42 = (x2125+(x2126<=(x2127>>x2128)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2149 = UINT16_MAX;
	int64_t x2150 = -1LL;
	static uint16_t x2151 = 5U;
	static int64_t x2152 = 0LL;

	t43 = (x2149+(x2150<=(x2151>>x2152)));

	if (t43 != 65536) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2209 = UINT8_MAX;
	static int64_t x2210 = INT64_MIN;
	static uint32_t x2211 = 21518U;
	int16_t x2212 = 1;

	t44 = (x2209+(x2210<=(x2211>>x2212)));

	if (t44 != 256) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2270 = -1LL;
	static uint8_t x2271 = 75U;
	uint8_t x2272 = 22U;
	uint32_t t45 = 575U;

	t45 = (x2269+(x2270<=(x2271>>x2272)));

	if (t45 != 206213073U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2273 = INT16_MIN;
	int8_t x2274 = INT8_MAX;
	int32_t t46 = -379067;

	t46 = (x2273+(x2274<=(x2275>>x2276)));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2293 = INT64_MIN;
	uint8_t x2295 = UINT8_MAX;
	int64_t t47 = -3LL;

	t47 = (x2293+(x2294<=(x2295>>x2296)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x2365 = UINT8_MAX;
	int32_t x2366 = INT32_MIN;
	uint16_t x2367 = UINT16_MAX;
	static volatile uint16_t x2368 = 0U;
	volatile int32_t t48 = -391590;

	t48 = (x2365+(x2366<=(x2367>>x2368)));

	if (t48 != 256) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2377 = -1LL;
	volatile uint8_t x2379 = 15U;
	int32_t x2380 = 2;
	volatile int64_t t49 = -1758075640353LL;

	t49 = (x2377+(x2378<=(x2379>>x2380)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2393 = INT32_MAX;
	static uint64_t x2395 = 721959LLU;
	int32_t t50 = INT32_MAX;

	t50 = (x2393+(x2394<=(x2395>>x2396)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2418 = INT32_MIN;
	uint32_t t51 = UINT32_MAX;

	t51 = (x2417+(x2418<=(x2419>>x2420)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2449 = -1;
	int8_t x2450 = INT8_MIN;
	static volatile uint16_t x2451 = 18U;
	uint8_t x2452 = 2U;
	volatile int32_t t52 = 717068;

	t52 = (x2449+(x2450<=(x2451>>x2452)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x2509 = 3;
	int16_t x2510 = INT16_MIN;
	int64_t x2511 = INT64_MAX;
	int64_t x2512 = 3LL;
	int32_t t53 = -3572;

	t53 = (x2509+(x2510<=(x2511>>x2512)));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2517 = 28830U;
	volatile uint64_t x2518 = 64936830264LLU;
	volatile uint16_t x2519 = 25657U;
	static uint64_t x2520 = 13LLU;
	int32_t t54 = 0;

	t54 = (x2517+(x2518<=(x2519>>x2520)));

	if (t54 != 28830) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2533 = 18;
	int64_t x2534 = -1LL;
	uint8_t x2535 = 0U;

	t55 = (x2533+(x2534<=(x2535>>x2536)));

	if (t55 != 19) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2565 = UINT16_MAX;
	static volatile int64_t x2566 = -1LL;
	uint32_t x2567 = UINT32_MAX;
	volatile uint16_t x2568 = 1U;
	volatile int32_t t56 = -236;

	t56 = (x2565+(x2566<=(x2567>>x2568)));

	if (t56 != 65536) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2609 = -3707103;
	int32_t x2610 = -1;
	volatile int16_t x2611 = 99;
	int16_t x2612 = 17;

	t57 = (x2609+(x2610<=(x2611>>x2612)));

	if (t57 != -3707102) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2629 = INT8_MIN;
	static int64_t x2630 = INT64_MAX;
	static uint32_t x2632 = 19U;
	int32_t t58 = -1775;

	t58 = (x2629+(x2630<=(x2631>>x2632)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2669 = 121;
	int64_t x2670 = INT64_MAX;
	volatile int32_t x2671 = INT32_MAX;
	volatile int8_t x2672 = 22;
	static int32_t t59 = -250750;

	t59 = (x2669+(x2670<=(x2671>>x2672)));

	if (t59 != 121) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2925 = UINT8_MAX;
	int16_t x2926 = -1;
	volatile uint8_t x2927 = UINT8_MAX;
	int8_t x2928 = 1;
	int32_t t60 = 162;

	t60 = (x2925+(x2926<=(x2927>>x2928)));

	if (t60 != 256) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2961 = -1;
	static uint64_t x2962 = 835069882684LLU;
	volatile uint64_t x2963 = 2089482339092LLU;
	int64_t x2964 = 3LL;

	t61 = (x2961+(x2962<=(x2963>>x2964)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x3005 = UINT8_MAX;
	volatile int8_t x3006 = -1;
	static int32_t x3007 = 26676694;
	uint16_t x3008 = 5U;
	int32_t t62 = 861949;

	t62 = (x3005+(x3006<=(x3007>>x3008)));

	if (t62 != 256) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3061 = INT64_MIN;
	static int32_t x3062 = -1;
	uint16_t x3063 = 6409U;
	int16_t x3064 = 4;
	volatile int64_t t63 = -1019916796337113LL;

	t63 = (x3061+(x3062<=(x3063>>x3064)));

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3070 = -1;
	volatile uint8_t x3071 = UINT8_MAX;
	volatile uint64_t x3072 = 0LLU;
	int32_t t64 = 45237225;

	t64 = (x3069+(x3070<=(x3071>>x3072)));

	if (t64 != 54) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3073 = 126U;
	uint16_t x3074 = UINT16_MAX;
	int64_t x3075 = 8166565485668610LL;
	static int32_t t65 = -6231;

	t65 = (x3073+(x3074<=(x3075>>x3076)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3090 = 8971U;
	uint32_t x3091 = 12885U;
	int32_t t66 = -125333;

	t66 = (x3089+(x3090<=(x3091>>x3092)));

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x3105 = -3766;
	volatile int32_t x3106 = 1716;
	volatile int16_t x3107 = 7;
	uint8_t x3108 = 1U;
	int32_t t67 = 0;

	t67 = (x3105+(x3106<=(x3107>>x3108)));

	if (t67 != -3766) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3133 = UINT8_MAX;
	int64_t x3134 = -1LL;
	static uint8_t x3135 = UINT8_MAX;
	volatile int32_t t68 = -500;

	t68 = (x3133+(x3134<=(x3135>>x3136)));

	if (t68 != 256) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3197 = INT32_MIN;
	volatile int8_t x3198 = -6;
	static volatile uint32_t x3199 = 16339U;
	int8_t x3200 = 2;
	int32_t t69 = INT32_MIN;

	t69 = (x3197+(x3198<=(x3199>>x3200)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3370 = -16;
	uint16_t x3371 = 16190U;
	volatile int8_t x3372 = 6;
	int32_t t70 = 90922;

	t70 = (x3369+(x3370<=(x3371>>x3372)));

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x3389 = 1U;
	int64_t x3390 = 0LL;
	uint8_t x3391 = 7U;
	uint16_t x3392 = 16U;
	static int32_t t71 = 45597;

	t71 = (x3389+(x3390<=(x3391>>x3392)));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3417 = INT8_MAX;
	uint16_t x3418 = UINT16_MAX;
	uint64_t x3419 = 3466909446531LLU;
	uint32_t x3420 = 4U;
	int32_t t72 = -55;

	t72 = (x3417+(x3418<=(x3419>>x3420)));

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3481 = 54LLU;
	uint16_t x3483 = 2U;
	uint8_t x3484 = 6U;
	uint64_t t73 = 115438146LLU;

	t73 = (x3481+(x3482<=(x3483>>x3484)));

	if (t73 != 55LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3501 = INT32_MIN;
	int8_t x3502 = -1;
	static uint32_t x3503 = 4957U;
	uint16_t x3504 = 13U;
	int32_t t74 = INT32_MIN;

	t74 = (x3501+(x3502<=(x3503>>x3504)));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3537 = 1U;
	uint32_t x3539 = 7848U;
	int8_t x3540 = 1;
	volatile uint32_t t75 = 0U;

	t75 = (x3537+(x3538<=(x3539>>x3540)));

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x3590 = 47033LLU;
	uint8_t x3591 = UINT8_MAX;
	volatile uint32_t x3592 = 9U;
	volatile int32_t t76 = 81;

	t76 = (x3589+(x3590<=(x3591>>x3592)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x3673 = 9577LLU;
	uint64_t x3674 = UINT64_MAX;
	int8_t x3675 = 0;
	int8_t x3676 = 10;
	uint64_t t77 = 33738500638220557LLU;

	t77 = (x3673+(x3674<=(x3675>>x3676)));

	if (t77 != 9577LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3685 = 1546654;
	int64_t x3686 = INT64_MIN;
	uint8_t x3687 = 3U;
	static volatile int8_t x3688 = 2;
	int32_t t78 = -2517;

	t78 = (x3685+(x3686<=(x3687>>x3688)));

	if (t78 != 1546655) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x3741 = UINT64_MAX;
	uint32_t x3742 = 23770U;
	volatile uint16_t x3743 = 65U;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x3741+(x3742<=(x3743>>x3744)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3761 = INT16_MIN;
	static int16_t x3763 = 1;
	int16_t x3764 = 0;
	volatile int32_t t80 = 110854;

	t80 = (x3761+(x3762<=(x3763>>x3764)));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x3809 = UINT64_MAX;
	uint64_t x3811 = UINT64_MAX;
	static uint64_t t81 = 125871928128LLU;

	t81 = (x3809+(x3810<=(x3811>>x3812)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3813 = -1;
	int32_t x3814 = INT32_MIN;
	int8_t x3816 = 2;
	int32_t t82 = -65536;

	t82 = (x3813+(x3814<=(x3815>>x3816)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3817 = -1;
	int16_t x3818 = -1;
	volatile int8_t x3819 = 3;
	uint8_t x3820 = 3U;
	static int32_t t83 = -8054528;

	t83 = (x3817+(x3818<=(x3819>>x3820)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x3849 = -1LL;
	uint32_t x3851 = 42U;
	int32_t x3852 = 15;

	t84 = (x3849+(x3850<=(x3851>>x3852)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x3882 = -10252;
	uint8_t x3884 = 13U;
	volatile int32_t t85 = 1218841;

	t85 = (x3881+(x3882<=(x3883>>x3884)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x3897 = INT64_MIN;
	int64_t x3898 = INT64_MIN;
	int16_t x3899 = INT16_MAX;
	int32_t x3900 = 3;
	static int64_t t86 = 61356931177765LL;

	t86 = (x3897+(x3898<=(x3899>>x3900)));

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3901 = 52LLU;
	static uint16_t x3902 = UINT16_MAX;
	uint8_t x3904 = 1U;
	volatile uint64_t t87 = 166436375664845508LLU;

	t87 = (x3901+(x3902<=(x3903>>x3904)));

	if (t87 != 52LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3937 = UINT32_MAX;
	static int32_t x3938 = INT32_MIN;
	uint32_t x3939 = 3U;
	volatile int16_t x3940 = 0;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x3937+(x3938<=(x3939>>x3940)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4069 = 188U;
	int8_t x4071 = INT8_MAX;
	volatile uint64_t x4072 = 5LLU;
	volatile uint32_t t89 = 898U;

	t89 = (x4069+(x4070<=(x4071>>x4072)));

	if (t89 != 188U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4141 = 9948039581LLU;
	static volatile uint32_t x4143 = 59024U;
	int8_t x4144 = 19;
	volatile uint64_t t90 = 68LLU;

	t90 = (x4141+(x4142<=(x4143>>x4144)));

	if (t90 != 9948039581LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x4233 = INT16_MAX;
	int8_t x4234 = -1;
	static int32_t t91 = 95400649;

	t91 = (x4233+(x4234<=(x4235>>x4236)));

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4342 = 2;
	uint16_t x4343 = 26U;
	uint64_t x4344 = 15LLU;
	static int64_t t92 = INT64_MIN;

	t92 = (x4341+(x4342<=(x4343>>x4344)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4345 = 452320365LLU;
	int64_t x4346 = -194791187LL;
	int8_t x4347 = INT8_MAX;
	uint8_t x4348 = 1U;
	uint64_t t93 = 246874LLU;

	t93 = (x4345+(x4346<=(x4347>>x4348)));

	if (t93 != 452320366LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x4477 = -104790;
	static volatile uint64_t x4478 = UINT64_MAX;
	static volatile int16_t x4479 = 1;
	int8_t x4480 = 3;
	volatile int32_t t94 = -2759197;

	t94 = (x4477+(x4478<=(x4479>>x4480)));

	if (t94 != -104790) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x4494 = INT8_MIN;
	uint64_t x4495 = UINT64_MAX;
	static volatile uint16_t x4496 = 27U;
	static volatile int32_t t95 = -12;

	t95 = (x4493+(x4494<=(x4495>>x4496)));

	if (t95 != -13) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4582 = 0;
	uint8_t x4583 = UINT8_MAX;
	uint8_t x4584 = 1U;
	int32_t t96 = 6755599;

	t96 = (x4581+(x4582<=(x4583>>x4584)));

	if (t96 != 256) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x4634 = INT32_MIN;
	static int8_t x4636 = 23;
	static int64_t t97 = INT64_MAX;

	t97 = (x4633+(x4634<=(x4635>>x4636)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4637 = UINT16_MAX;
	volatile uint64_t x4638 = UINT64_MAX;
	static int32_t x4639 = 478191321;
	uint8_t x4640 = 1U;
	int32_t t98 = -61;

	t98 = (x4637+(x4638<=(x4639>>x4640)));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4649 = -1;
	int16_t x4650 = -3531;
	uint64_t x4651 = 3LLU;
	uint16_t x4652 = 11U;

	t99 = (x4649+(x4650<=(x4651>>x4652)));

	if (t99 != -1) { NG(); } else { ; }
	
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

