#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x28 = 0;
int8_t x32 = 0;
volatile uint32_t t3 = 2022317U;
uint8_t x164 = 17U;
int32_t t7 = -573;
int64_t x333 = -6054996351LL;
uint16_t x488 = 2U;
static int64_t x501 = INT64_MAX;
uint8_t x502 = UINT8_MAX;
int64_t t11 = -6467276541868LL;
int16_t x587 = INT16_MAX;
volatile int64_t t12 = -244786264354453LL;
int8_t x636 = 2;
volatile uint32_t x691 = 14U;
static int8_t x798 = INT8_MIN;
static int8_t x805 = INT8_MIN;
int64_t x807 = 519126106660319LL;
volatile int16_t x889 = 9588;
volatile int64_t x890 = -1LL;
volatile int8_t x954 = -12;
int8_t x956 = 1;
int16_t x1043 = 2008;
int64_t t20 = 0LL;
uint8_t x1082 = 0U;
volatile uint32_t t22 = 9567U;
int8_t x1123 = INT8_MAX;
uint16_t x1194 = 5534U;
volatile int32_t x1230 = -20216966;
uint16_t x1231 = 1U;
int64_t x1285 = INT64_MIN;
static int64_t x1287 = -1992597727LL;
int16_t x1288 = 4;
int8_t x1376 = 0;
volatile int64_t t28 = -3987LL;
static uint16_t x1386 = 0U;
volatile int8_t x1471 = INT8_MIN;
int32_t x1472 = 1;
int32_t x1789 = 58454393;
int16_t x1860 = 1;
volatile uint32_t x2178 = 0U;
static int16_t x2179 = INT16_MIN;
volatile uint16_t x2210 = 1U;
volatile int32_t t37 = -3637921;
uint64_t x2315 = 101466LLU;
int32_t x2383 = -1;
int32_t x2397 = 85;
uint64_t x2398 = 111812808LLU;
uint64_t x2454 = 7269206529LLU;
uint8_t x2510 = 2U;
uint64_t x2511 = 68655595447665LLU;
uint8_t x2536 = 1U;
static uint8_t x2592 = 29U;
volatile uint64_t t44 = 329267LLU;
int8_t x2604 = 45;
int16_t x2630 = -1;
uint64_t x2631 = 8146LLU;
uint8_t x2633 = 0U;
int8_t x2702 = INT8_MIN;
volatile uint16_t x2703 = 12U;
static uint8_t x2704 = 0U;
int16_t x2717 = INT16_MIN;
volatile int8_t x2720 = 0;
int16_t x2768 = 45;
int64_t t53 = -26404LL;
int32_t x2869 = INT32_MIN;
uint64_t t55 = 266117282241611LLU;
uint64_t x2874 = UINT64_MAX;
int16_t x2880 = 1;
int32_t x3034 = -48569;
uint16_t x3036 = 2U;
uint32_t x3145 = 4154319U;
int32_t x3197 = INT32_MAX;
uint64_t x3222 = UINT64_MAX;
volatile uint8_t x3348 = 0U;
int64_t x3389 = INT64_MIN;
int64_t t65 = -1096297258LL;
int32_t x3426 = -113312;
volatile int64_t t66 = -5122206LL;
uint16_t x3689 = UINT16_MAX;
int16_t x3692 = 0;
uint8_t x3766 = 29U;
uint64_t t72 = 1LLU;
volatile int16_t x3955 = INT16_MIN;
static int64_t x3961 = -1LL;
static int16_t x3962 = INT16_MIN;
static uint8_t x4105 = 0U;
static volatile int8_t x4329 = INT8_MIN;
static volatile int64_t x4330 = -1LL;
int8_t x4341 = INT8_MIN;
int64_t x4342 = -3661LL;
uint32_t x4343 = UINT32_MAX;
volatile int16_t x4489 = INT16_MIN;
uint16_t x4684 = 1U;
int64_t t80 = -649694900LL;
uint64_t x4742 = 32860LLU;
volatile int8_t x4743 = -1;
int8_t x4866 = INT8_MIN;
int8_t x4879 = 1;
static int8_t x5001 = 0;
static int64_t x5003 = 2LL;
uint8_t x5004 = 16U;
volatile uint8_t x5018 = UINT8_MAX;
int32_t x5045 = 3799;
volatile uint16_t x5046 = UINT16_MAX;
static volatile uint32_t t87 = 37082721U;
int64_t x5062 = INT64_MIN;
volatile int64_t t88 = -295848480899LL;
static uint64_t x5234 = UINT64_MAX;
int32_t x5235 = INT32_MIN;
volatile uint64_t t89 = 80087855837135LLU;
int32_t x5262 = -1;
int64_t x5359 = -1LL;
uint64_t x5397 = 28471557767607418LLU;
uint8_t x5399 = UINT8_MAX;
static volatile uint64_t x5430 = UINT64_MAX;
volatile int16_t x5431 = 8;
uint32_t x5680 = 18U;
volatile int32_t x5781 = INT32_MIN;


void f0(void) {
	int16_t x25 = -109;
	int32_t x26 = -632047;
	int64_t x27 = 19501606LL;
	int64_t t0 = 2237377012LL;

	t0 = ((x25^(x26-x27))>>x28);

	if (t0 != 20133752LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x29 = INT8_MAX;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = 97U;
	uint32_t t1 = 1310207443U;

	t1 = ((x29^(x30-x31))>>x32);

	if (t1 != 4294967136U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x53 = UINT32_MAX;
	int32_t x54 = -7;
	uint64_t x55 = 157462LLU;
	uint8_t x56 = 17U;
	static uint64_t t2 = 64325461244094361LLU;

	t2 = ((x53^(x54-x55))>>x56);

	if (t2 != 140737488322561LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x61 = 2U;
	static volatile int16_t x62 = INT16_MIN;
	uint32_t x63 = UINT32_MAX;
	uint16_t x64 = 1U;

	t3 = ((x61^(x62-x63))>>x64);

	if (t3 != 2147467265U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x113 = 272U;
	int8_t x114 = -1;
	volatile int64_t x115 = INT64_MIN;
	int32_t x116 = 1;
	volatile int64_t t4 = -3097LL;

	t4 = ((x113^(x114-x115))>>x116);

	if (t4 != 4611686018427387767LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = 7;
	uint16_t x159 = 12U;
	volatile uint32_t x160 = 0U;
	int32_t t5 = 2;

	t5 = ((x157^(x158-x159))>>x160);

	if (t5 != 32763) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x161 = 3;
	volatile uint16_t x162 = 7U;
	uint64_t x163 = 286LLU;
	volatile uint64_t t6 = 1773919LLU;

	t6 = ((x161^(x162-x163))>>x164);

	if (t6 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x217 = INT32_MIN;
	int16_t x218 = -4253;
	static int32_t x219 = 79;
	volatile uint16_t x220 = 0U;

	t7 = ((x217^(x218-x219))>>x220);

	if (t7 != 2147479316) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x277 = -1;
	uint64_t x278 = UINT64_MAX;
	uint16_t x279 = UINT16_MAX;
	int16_t x280 = 1;
	static uint64_t t8 = 745378027392LLU;

	t8 = ((x277^(x278-x279))>>x280);

	if (t8 != 32767LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x334 = -203;
	int8_t x335 = -1;
	int8_t x336 = 0;
	int64_t t9 = 0LL;

	t9 = ((x333^(x334-x335))>>x336);

	if (t9 != 6054996407LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x485 = INT16_MIN;
	uint32_t x486 = UINT32_MAX;
	static uint8_t x487 = 2U;
	uint32_t t10 = 6467273U;

	t10 = ((x485^(x486-x487))>>x488);

	if (t10 != 8191U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x503 = -1;
	int8_t x504 = 23;

	t11 = ((x501^(x502-x503))>>x504);

	if (t11 != 1099511627775LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x585 = -101998349639LL;
	int16_t x586 = 895;
	uint8_t x588 = 12U;

	t12 = ((x585^(x586-x587))>>x588);

	if (t12 != 24901939LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x633 = INT64_MIN;
	uint64_t x634 = UINT64_MAX;
	int16_t x635 = INT16_MIN;
	uint64_t t13 = 263242091839616305LLU;

	t13 = ((x633^(x634-x635))>>x636);

	if (t13 != 2305843009213702143LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x689 = 53685535298LLU;
	int32_t x690 = -1;
	uint16_t x692 = 1U;
	volatile uint64_t t14 = 49LLU;

	t14 = ((x689^(x690-x691))>>x692);

	if (t14 != 26844323545LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x709 = INT16_MAX;
	int16_t x710 = -9811;
	int64_t x711 = INT64_MIN;
	volatile uint16_t x712 = 59U;
	volatile int64_t t15 = 251610LL;

	t15 = ((x709^(x710-x711))>>x712);

	if (t15 != 15LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x797 = 40223U;
	int8_t x799 = -1;
	int8_t x800 = 1;
	static volatile uint32_t t16 = 436526U;

	t16 = ((x797^(x798-x799))>>x800);

	if (t16 != 2147463503U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x806 = INT8_MIN;
	static volatile uint64_t x808 = 6LLU;
	static int64_t t17 = -4235LL;

	t17 = ((x805^(x806-x807))>>x808);

	if (t17 != 8111345416568LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x891 = INT64_MIN;
	uint16_t x892 = 0U;
	volatile int64_t t18 = 130805221206190LL;

	t18 = ((x889^(x890-x891))>>x892);

	if (t18 != 9223372036854766219LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x953 = -4;
	uint32_t x955 = 120U;
	uint32_t t19 = 922U;

	t19 = ((x953^(x954-x955))>>x956);

	if (t19 != 64U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1041 = INT8_MIN;
	int64_t x1042 = -1293001587913329436LL;
	static volatile uint16_t x1044 = 0U;

	t20 = ((x1041^(x1042-x1043))>>x1044);

	if (t20 != 1293001587913331340LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1081 = -862;
	int16_t x1083 = 346;
	int16_t x1084 = 24;
	int32_t t21 = -105988225;

	t21 = ((x1081^(x1082-x1083))>>x1084);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1105 = 123U;
	int32_t x1106 = 41858004;
	uint32_t x1107 = UINT32_MAX;
	uint8_t x1108 = 4U;

	t22 = ((x1105^(x1106-x1107))>>x1108);

	if (t22 != 2616122U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1121 = INT64_MIN;
	static int64_t x1122 = -378767706783LL;
	uint64_t x1124 = 9LLU;
	volatile int64_t t23 = -139LL;

	t23 = ((x1121^(x1122-x1123))>>x1124);

	if (t23 != 18014397769701306LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1173 = UINT64_MAX;
	int32_t x1174 = 80460748;
	uint32_t x1175 = 1U;
	int32_t x1176 = 46;
	volatile uint64_t t24 = 6039608LLU;

	t24 = ((x1173^(x1174-x1175))>>x1176);

	if (t24 != 262143LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1193 = -3728627LL;
	static volatile int64_t x1195 = INT64_MAX;
	volatile uint8_t x1196 = 1U;
	volatile int64_t t25 = 1LL;

	t25 = ((x1193^(x1194-x1195))>>x1196);

	if (t25 != 4611686018425521993LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1229 = 20LLU;
	static volatile uint32_t x1232 = 1U;
	static uint64_t t26 = 118LLU;

	t26 = ((x1229^(x1230-x1231))>>x1232);

	if (t26 != 9223372036844667318LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1286 = INT32_MIN;
	int64_t t27 = 1811417099869304LL;

	t27 = ((x1285^(x1286-x1287))>>x1288);

	if (t27 != 576460752293743117LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1373 = INT64_MIN;
	int32_t x1374 = INT32_MIN;
	int16_t x1375 = -1;

	t28 = ((x1373^(x1374-x1375))>>x1376);

	if (t28 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1385 = -101879944705310454LL;
	uint64_t x1387 = 52845668LLU;
	uint32_t x1388 = 1U;
	static uint64_t t29 = 59LLU;

	t29 = ((x1385^(x1386-x1387))>>x1388);

	if (t29 != 50939972359917899LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1469 = UINT32_MAX;
	int8_t x1470 = INT8_MAX;
	volatile uint32_t t30 = 10U;

	t30 = ((x1469^(x1470-x1471))>>x1472);

	if (t30 != 2147483520U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1621 = -621366LL;
	volatile int8_t x1622 = -52;
	uint64_t x1623 = 9179947LLU;
	static volatile uint16_t x1624 = 57U;
	static volatile uint64_t t31 = 2035478989866710LLU;

	t31 = ((x1621^(x1622-x1623))>>x1624);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1790 = INT32_MAX;
	uint8_t x1791 = UINT8_MAX;
	int32_t x1792 = 3;
	volatile int32_t t32 = 182260444;

	t32 = ((x1789^(x1790-x1791))>>x1792);

	if (t32 != 261128655) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1857 = INT32_MAX;
	int16_t x1858 = INT16_MAX;
	int16_t x1859 = 766;
	static volatile int32_t t33 = 62;

	t33 = ((x1857^(x1858-x1859))>>x1860);

	if (t33 != 1073725823) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x2093 = INT16_MIN;
	int64_t x2094 = INT64_MIN;
	volatile int8_t x2095 = -39;
	uint8_t x2096 = 6U;
	volatile int64_t t34 = -915633108651384126LL;

	t34 = ((x2093^(x2094-x2095))>>x2096);

	if (t34 != 144115188075855360LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2177 = UINT64_MAX;
	static volatile uint8_t x2180 = 51U;
	uint64_t t35 = 6077261007024LLU;

	t35 = ((x2177^(x2178-x2179))>>x2180);

	if (t35 != 8191LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x2209 = INT16_MAX;
	volatile int8_t x2211 = INT8_MIN;
	uint8_t x2212 = 12U;
	static int32_t t36 = -1014;

	t36 = ((x2209^(x2210-x2211))>>x2212);

	if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2221 = INT32_MAX;
	int32_t x2222 = 109054628;
	static uint16_t x2223 = 27019U;
	uint16_t x2224 = 1U;

	t37 = ((x2221^(x2222-x2223))>>x2224);

	if (t37 != 1019228019) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x2313 = -1LL;
	int16_t x2314 = INT16_MIN;
	int8_t x2316 = 20;
	uint64_t t38 = 920830201LLU;

	t38 = ((x2313^(x2314-x2315))>>x2316);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x2381 = INT8_MIN;
	volatile uint32_t x2382 = 29576837U;
	uint8_t x2384 = 2U;
	uint32_t t39 = 86U;

	t39 = ((x2381^(x2382-x2383))>>x2384);

	if (t39 != 1066347585U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2399 = -1;
	uint8_t x2400 = 1U;
	volatile uint64_t t40 = 12511000220857952LLU;

	t40 = ((x2397^(x2398-x2399))>>x2400);

	if (t40 != 55906382LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2453 = UINT8_MAX;
	static uint32_t x2455 = 2570U;
	int16_t x2456 = 1;
	static uint64_t t41 = 401091321491279525LLU;

	t41 = ((x2453^(x2454-x2455))>>x2456);

	if (t41 != 3634601860LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2509 = INT64_MIN;
	uint32_t x2512 = 42U;
	uint64_t t42 = 6121765LLU;

	t42 = ((x2509^(x2510-x2511))>>x2512);

	if (t42 != 2097136LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2533 = INT32_MIN;
	static int32_t x2534 = INT32_MIN;
	int16_t x2535 = -2788;
	volatile int32_t t43 = 655487918;

	t43 = ((x2533^(x2534-x2535))>>x2536);

	if (t43 != 1394) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2589 = 241106877775LLU;
	int32_t x2590 = -22466;
	int8_t x2591 = INT8_MAX;

	t44 = ((x2589^(x2590-x2591))>>x2592);

	if (t44 != 34359737918LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2601 = INT16_MIN;
	static uint8_t x2602 = 32U;
	int64_t x2603 = 2762972055577813960LL;
	volatile int64_t t45 = -414508785LL;

	t45 = ((x2601^(x2602-x2603))>>x2604);

	if (t45 != 78528LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x2617 = -52509909794371989LL;
	static int8_t x2618 = -1;
	int32_t x2619 = INT32_MAX;
	uint8_t x2620 = 0U;
	volatile int64_t t46 = 87391LL;

	t46 = ((x2617^(x2618-x2619))>>x2620);

	if (t46 != 52509911120397931LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2629 = UINT8_MAX;
	int8_t x2632 = 4;
	uint64_t t47 = 15898LLU;

	t47 = ((x2629^(x2630-x2631))>>x2632);

	if (t47 != 1152921504606846477LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2634 = -1;
	volatile int64_t x2635 = -208736LL;
	int8_t x2636 = 0;
	int64_t t48 = 0LL;

	t48 = ((x2633^(x2634-x2635))>>x2636);

	if (t48 != 208735LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2697 = 7943;
	uint32_t x2698 = UINT32_MAX;
	static uint8_t x2699 = UINT8_MAX;
	static volatile uint32_t x2700 = 1U;
	uint32_t t49 = 106725U;

	t49 = ((x2697^(x2698-x2699))>>x2700);

	if (t49 != 2147479555U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2701 = UINT32_MAX;
	uint32_t t50 = 521U;

	t50 = ((x2701^(x2702-x2703))>>x2704);

	if (t50 != 139U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2718 = 1;
	uint32_t x2719 = 126584U;
	uint32_t t51 = 13983U;

	t51 = ((x2717^(x2718-x2719))>>x2720);

	if (t51 != 102793U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2761 = 2;
	static uint8_t x2762 = 5U;
	int32_t x2763 = -4744;
	uint8_t x2764 = 10U;
	volatile int32_t t52 = -1896;

	t52 = ((x2761^(x2762-x2763))>>x2764);

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2765 = -1;
	int64_t x2766 = -71387593285049009LL;
	uint8_t x2767 = 35U;

	t53 = ((x2765^(x2766-x2767))>>x2768);

	if (t53 != 2028LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2801 = 279LLU;
	static int64_t x2802 = INT64_MIN;
	static int64_t x2803 = INT64_MIN;
	volatile uint8_t x2804 = 3U;
	volatile uint64_t t54 = 984281LLU;

	t54 = ((x2801^(x2802-x2803))>>x2804);

	if (t54 != 34LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2870 = INT64_MIN;
	uint64_t x2871 = 29LLU;
	uint8_t x2872 = 13U;

	t55 = ((x2869^(x2870-x2871))>>x2872);

	if (t55 != 1125899907104767LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x2873 = 897985997;
	int32_t x2875 = -58607;
	volatile uint32_t x2876 = 13U;
	volatile uint64_t t56 = 1LLU;

	t56 = ((x2873^(x2874-x2875))>>x2876);

	if (t56 != 109622LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2877 = 644001650579LLU;
	static uint16_t x2878 = UINT16_MAX;
	int16_t x2879 = 0;
	volatile uint64_t t57 = 1195LLU;

	t57 = ((x2877^(x2878-x2879))>>x2880);

	if (t57 != 322000835638LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x2929 = UINT64_MAX;
	static volatile int16_t x2930 = INT16_MIN;
	uint16_t x2931 = UINT16_MAX;
	int8_t x2932 = 33;
	uint64_t t58 = 45201384890283581LLU;

	t58 = ((x2929^(x2930-x2931))>>x2932);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2949 = -1;
	int8_t x2950 = -3;
	volatile int64_t x2951 = -1LL;
	volatile int16_t x2952 = 12;
	volatile int64_t t59 = -20043300LL;

	t59 = ((x2949^(x2950-x2951))>>x2952);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x3033 = INT32_MIN;
	uint8_t x3035 = 4U;
	volatile int32_t t60 = -1;

	t60 = ((x3033^(x3034-x3035))>>x3036);

	if (t60 != 536858768) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3146 = 11024U;
	uint64_t x3147 = 3247856887LLU;
	uint16_t x3148 = 2U;
	volatile uint64_t t61 = 581056904090547488LLU;

	t61 = ((x3145^(x3146-x3147))>>x3148);

	if (t61 != 4611686017615113077LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3198 = INT16_MAX;
	uint8_t x3199 = 0U;
	static int8_t x3200 = 25;
	static int32_t t62 = -818;

	t62 = ((x3197^(x3198-x3199))>>x3200);

	if (t62 != 63) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3221 = 29U;
	int32_t x3223 = INT32_MIN;
	uint8_t x3224 = 0U;
	uint64_t t63 = 15721138807182757LLU;

	t63 = ((x3221^(x3222-x3223))>>x3224);

	if (t63 != 2147483618LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3345 = INT16_MIN;
	uint64_t x3346 = UINT64_MAX;
	static volatile uint32_t x3347 = 51U;
	static uint64_t t64 = 30761229LLU;

	t64 = ((x3345^(x3346-x3347))>>x3348);

	if (t64 != 32716LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3390 = -12197;
	int32_t x3391 = -1;
	int16_t x3392 = 40;

	t65 = ((x3389^(x3390-x3391))>>x3392);

	if (t65 != 8388607LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x3425 = INT64_MIN;
	volatile uint16_t x3427 = UINT16_MAX;
	int32_t x3428 = 56;

	t66 = ((x3425^(x3426-x3427))>>x3428);

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x3533 = 76U;
	volatile uint16_t x3534 = 14U;
	static int8_t x3535 = -1;
	uint8_t x3536 = 1U;
	volatile int32_t t67 = 35;

	t67 = ((x3533^(x3534-x3535))>>x3536);

	if (t67 != 33) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3690 = 1400855038LLU;
	int32_t x3691 = -1;
	uint64_t t68 = 3786264129LLU;

	t68 = ((x3689^(x3690-x3691))>>x3692);

	if (t68 != 1400874496LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3757 = UINT8_MAX;
	uint64_t x3758 = 3807054335851LLU;
	uint8_t x3759 = UINT8_MAX;
	uint32_t x3760 = 13U;
	uint64_t t69 = 63393731823LLU;

	t69 = ((x3757^(x3758-x3759))>>x3760);

	if (t69 != 464728312LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3765 = INT16_MAX;
	int8_t x3767 = -4;
	uint8_t x3768 = 11U;
	int32_t t70 = 35;

	t70 = ((x3765^(x3766-x3767))>>x3768);

	if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3857 = INT64_MIN;
	static int8_t x3858 = INT8_MIN;
	volatile uint64_t x3859 = 28019823090LLU;
	volatile uint8_t x3860 = 1U;
	volatile uint64_t t71 = 17855162176008418LLU;

	t71 = ((x3857^(x3858-x3859))>>x3860);

	if (t71 != 4611686004417476295LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x3865 = 1530U;
	uint32_t x3866 = UINT32_MAX;
	uint64_t x3867 = 1313291322312664022LLU;
	int16_t x3868 = 25;

	t72 = ((x3865^(x3866-x3867))>>x3868);

	if (t72 != 510616682639LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x3933 = -2;
	static int8_t x3934 = INT8_MIN;
	int64_t x3935 = 67457LL;
	int8_t x3936 = 2;
	volatile int64_t t73 = -23848195920534LL;

	t73 = ((x3933^(x3934-x3935))>>x3936);

	if (t73 != 16896LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3953 = UINT16_MAX;
	static uint8_t x3954 = 0U;
	volatile int8_t x3956 = 3;
	volatile int32_t t74 = -12687;

	t74 = ((x3953^(x3954-x3955))>>x3956);

	if (t74 != 4095) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x3963 = -1LL;
	int8_t x3964 = 27;
	volatile int64_t t75 = 1493300435878509LL;

	t75 = ((x3961^(x3962-x3963))>>x3964);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4106 = UINT16_MAX;
	volatile int32_t x4107 = -159797;
	int32_t x4108 = 12;
	int32_t t76 = -142713627;

	t76 = ((x4105^(x4106-x4107))>>x4108);

	if (t76 != 55) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4331 = 93831532614211LL;
	uint8_t x4332 = 5U;
	volatile int64_t t77 = 12138525248259584LL;

	t77 = ((x4329^(x4330-x4331))>>x4332);

	if (t77 != 2932235394193LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x4344 = 20U;
	volatile int64_t t78 = -123738031LL;

	t78 = ((x4341^(x4342-x4343))>>x4344);

	if (t78 != 4096LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4490 = -7103;
	static uint16_t x4491 = UINT16_MAX;
	uint64_t x4492 = 7LLU;
	static int32_t t79 = -4060;

	t79 = ((x4489^(x4490-x4491))>>x4492);

	if (t79 != 712) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4681 = INT64_MIN;
	int16_t x4682 = INT16_MIN;
	static int8_t x4683 = -2;

	t80 = ((x4681^(x4682-x4683))>>x4684);

	if (t80 != 4611686018427371521LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x4721 = 2459560343694559LLU;
	int16_t x4722 = 15;
	volatile uint32_t x4723 = 88638U;
	int8_t x4724 = 1;
	static uint64_t t81 = 614LLU;

	t81 = ((x4721^(x4722-x4723))>>x4724);

	if (t81 != 1229782242305159LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4741 = 6U;
	int8_t x4744 = 50;
	static volatile uint64_t t82 = 10475LLU;

	t82 = ((x4741^(x4742-x4743))>>x4744);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x4865 = INT32_MIN;
	volatile uint32_t x4867 = UINT32_MAX;
	uint16_t x4868 = 14U;
	static volatile uint32_t t83 = 1628275486U;

	t83 = ((x4865^(x4866-x4867))>>x4868);

	if (t83 != 131071U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4877 = 1U;
	uint32_t x4878 = 784790952U;
	volatile uint64_t x4880 = 0LLU;
	static volatile uint32_t t84 = 964467751U;

	t84 = ((x4877^(x4878-x4879))>>x4880);

	if (t84 != 784790950U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x5002 = 3;
	volatile int64_t t85 = 163LL;

	t85 = ((x5001^(x5002-x5003))>>x5004);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x5017 = INT32_MAX;
	int8_t x5019 = -28;
	static uint8_t x5020 = 4U;
	static volatile int32_t t86 = 1831;

	t86 = ((x5017^(x5018-x5019))>>x5020);

	if (t86 != 134217710) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5047 = 978267857U;
	int32_t x5048 = 6;

	t87 = ((x5045^(x5046-x5047))>>x5048);

	if (t87 != 51824511U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5061 = -57969992;
	int8_t x5063 = INT8_MIN;
	uint8_t x5064 = 1U;

	t88 = ((x5061^(x5062-x5063))>>x5064);

	if (t88 != 4611686018398402844LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5233 = 7909588U;
	uint8_t x5236 = 44U;

	t89 = ((x5233^(x5234-x5235))>>x5236);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x5261 = UINT16_MAX;
	int64_t x5263 = -1LL;
	int16_t x5264 = 1;
	volatile int64_t t90 = -12LL;

	t90 = ((x5261^(x5262-x5263))>>x5264);

	if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x5285 = 7386LL;
	static volatile uint64_t x5286 = UINT64_MAX;
	int64_t x5287 = 263613151LL;
	uint8_t x5288 = 1U;
	volatile uint64_t t91 = 559878452412093LLU;

	t91 = ((x5285^(x5286-x5287))>>x5288);

	if (t91 != 9223372036722967805LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5357 = 7216U;
	uint64_t x5358 = 286260907026885LLU;
	volatile uint8_t x5360 = 21U;
	uint64_t t92 = 1550862494691LLU;

	t92 = ((x5357^(x5358-x5359))>>x5360);

	if (t92 != 136499837LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5398 = -1LL;
	volatile uint8_t x5400 = 22U;
	volatile uint64_t t93 = 116939600LLU;

	t93 = ((x5397^(x5398-x5399))>>x5400);

	if (t93 != 4391258362756LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5429 = UINT32_MAX;
	uint8_t x5432 = 6U;
	uint64_t t94 = 17084179881173LLU;

	t94 = ((x5429^(x5430-x5431))>>x5432);

	if (t94 != 288230376084602880LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5489 = -1;
	int64_t x5490 = -1LL;
	uint32_t x5491 = 46022179U;
	uint8_t x5492 = 2U;
	volatile int64_t t95 = 1603024746258523155LL;

	t95 = ((x5489^(x5490-x5491))>>x5492);

	if (t95 != 11505544LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5677 = 239;
	uint8_t x5678 = UINT8_MAX;
	static int32_t x5679 = -9856925;
	static int32_t t96 = -2298;

	t96 = ((x5677^(x5678-x5679))>>x5680);

	if (t96 != 37) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x5782 = UINT64_MAX;
	uint32_t x5783 = 5042U;
	static int8_t x5784 = 1;
	uint64_t t97 = 335223336413158LLU;

	t97 = ((x5781^(x5782-x5783))>>x5784);

	if (t97 != 1073739302LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5801 = 228124LLU;
	int16_t x5802 = INT16_MIN;
	volatile int64_t x5803 = 19LL;
	uint8_t x5804 = 2U;
	uint64_t t98 = 52503815733788LLU;

	t98 = ((x5801^(x5802-x5803))>>x5804);

	if (t98 != 4611686018427322684LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x5845 = -1;
	static volatile int8_t x5846 = 0;
	uint64_t x5847 = 2LLU;
	uint16_t x5848 = 12U;
	volatile uint64_t t99 = 31181LLU;

	t99 = ((x5845^(x5846-x5847))>>x5848);

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

