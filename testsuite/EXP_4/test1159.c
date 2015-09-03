#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x33 = INT8_MIN;
uint8_t x108 = 0U;
int8_t x124 = 9;
int64_t t3 = 3743244487454989537LL;
int32_t t4 = -11496;
volatile int8_t x216 = 27;
int8_t x262 = INT8_MAX;
uint8_t x264 = 10U;
int64_t t6 = 129525914581676962LL;
int16_t x285 = -1;
int8_t x312 = 6;
volatile int64_t t9 = -42245996290934369LL;
static int32_t x466 = INT32_MIN;
int16_t x467 = 29;
uint32_t x523 = UINT32_MAX;
static int64_t x541 = -1LL;
static uint64_t x592 = 63LLU;
int8_t x765 = 0;
volatile uint64_t x767 = UINT64_MAX;
int8_t x768 = 17;
uint32_t x865 = 60923U;
volatile uint8_t x868 = 9U;
int32_t x892 = 0;
int32_t x938 = INT32_MIN;
static volatile int64_t t21 = -1355126706269LL;
int16_t x1029 = INT16_MIN;
uint64_t x1032 = 6LLU;
uint64_t t24 = 773093LLU;
volatile uint8_t x1071 = UINT8_MAX;
volatile uint32_t t25 = 1741035171U;
static int32_t x1085 = 394;
uint32_t x1093 = UINT32_MAX;
static uint8_t x1412 = 1U;
volatile uint64_t t28 = 171607795333422877LLU;
volatile uint8_t x1502 = 0U;
uint8_t x1503 = UINT8_MAX;
volatile int32_t t34 = 2726583;
static volatile uint8_t x1655 = 16U;
static uint64_t x1656 = 27LLU;
static int32_t x1673 = INT32_MIN;
uint64_t x1693 = 996LLU;
volatile int32_t t39 = -13621280;
int16_t x2251 = 159;
volatile uint32_t x2499 = 11U;
volatile int64_t t42 = 2547107909504LL;
uint8_t x2537 = 84U;
volatile int32_t t44 = 1;
int32_t x2549 = INT32_MIN;
int64_t x2633 = -1LL;
uint64_t x2647 = 45884149078244179LLU;
static uint16_t x2979 = 2963U;
uint64_t t53 = 1422LLU;
int16_t x3078 = INT16_MAX;
int16_t x3079 = INT16_MAX;
static volatile int32_t t54 = -1;
static volatile uint8_t x3292 = 0U;
uint64_t t57 = 30605216034LLU;
int64_t x3347 = INT64_MAX;
int64_t t58 = -21708389003LL;
volatile int8_t x3415 = INT8_MAX;
uint32_t x3450 = 1U;
uint32_t x3452 = 0U;
volatile uint64_t t61 = 209126LLU;
int64_t x3466 = -1LL;
static int32_t x3501 = -258204;
static int16_t x3502 = 684;
uint16_t x3808 = 4U;
uint64_t t68 = 63198384480LLU;
int64_t x3922 = 60LL;
uint8_t x3924 = 2U;
int16_t x3941 = -1;
uint16_t x3965 = 20U;
int32_t x4101 = -186;
static int16_t x4261 = -1;
volatile uint8_t x4264 = 1U;
int32_t t78 = INT32_MIN;
int32_t x4381 = -476081257;
uint32_t t80 = 309617U;
static uint64_t x4427 = UINT64_MAX;
volatile uint16_t x4428 = 1U;
uint16_t x4744 = 2U;
volatile int8_t x4760 = 16;
static volatile uint32_t x4805 = 45180594U;
uint64_t t86 = 177564761180LLU;
uint32_t x4878 = UINT32_MAX;
static uint64_t x4889 = UINT64_MAX;
volatile int32_t x4990 = INT32_MIN;
static int32_t x5025 = INT32_MAX;
uint32_t t92 = 14U;
int16_t x5077 = INT16_MAX;
int8_t x5078 = INT8_MIN;
int64_t x5079 = 40LL;
uint32_t x5115 = 1465358993U;
volatile int32_t x5289 = INT32_MAX;
uint8_t x5292 = 3U;
uint16_t x5390 = UINT16_MAX;
volatile uint8_t x5392 = 4U;
static int16_t x5590 = INT16_MIN;


void f0(void) {
	static uint32_t x34 = 3332612U;
	static uint8_t x35 = 1U;
	static uint16_t x36 = 0U;
	static volatile uint32_t t0 = 20724U;

	t0 = (x33-(x34|(x35>>x36)));

	if (t0 != 4291634555U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x105 = INT32_MAX;
	int16_t x106 = -9;
	uint32_t x107 = 54648U;
	uint32_t t1 = 7U;

	t1 = (x105-(x106|(x107>>x108)));

	if (t1 != 2147483648U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x121 = INT32_MIN;
	uint64_t x122 = UINT64_MAX;
	int8_t x123 = 29;
	volatile uint64_t t2 = 11736LLU;

	t2 = (x121-(x122|(x123>>x124)));

	if (t2 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x141 = 81183254800LL;
	uint16_t x142 = 410U;
	uint8_t x143 = 90U;
	uint64_t x144 = 10LLU;

	t3 = (x141-(x142|(x143>>x144)));

	if (t3 != 81183254390LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x161 = -1;
	int8_t x162 = 4;
	uint8_t x163 = 2U;
	volatile uint8_t x164 = 0U;

	t4 = (x161-(x162|(x163>>x164)));

	if (t4 != -7) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x213 = 7U;
	int16_t x214 = INT16_MIN;
	volatile uint16_t x215 = 51U;
	int32_t t5 = 106;

	t5 = (x213-(x214|(x215>>x216)));

	if (t5 != 32775) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x261 = -1;
	static int64_t x263 = 42LL;

	t6 = (x261-(x262|(x263>>x264)));

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x286 = UINT8_MAX;
	volatile uint64_t x287 = UINT64_MAX;
	volatile int8_t x288 = 0;
	uint64_t t7 = 257139911539217LLU;

	t7 = (x285-(x286|(x287>>x288)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x309 = 60U;
	static uint64_t x310 = 3LLU;
	uint16_t x311 = UINT16_MAX;
	volatile uint64_t t8 = 9565099333675320LLU;

	t8 = (x309-(x310|(x311>>x312)));

	if (t8 != 18446744073709550653LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x341 = UINT8_MAX;
	static volatile int8_t x342 = -1;
	volatile int64_t x343 = 10123LL;
	static int8_t x344 = 5;

	t9 = (x341-(x342|(x343>>x344)));

	if (t9 != 256LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x465 = INT32_MIN;
	int8_t x468 = 1;
	static int32_t t10 = 0;

	t10 = (x465-(x466|(x467>>x468)));

	if (t10 != -14) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x485 = 1495U;
	static uint64_t x486 = UINT64_MAX;
	uint16_t x487 = UINT16_MAX;
	static uint8_t x488 = 30U;
	volatile uint64_t t11 = 4324074880081LLU;

	t11 = (x485-(x486|(x487>>x488)));

	if (t11 != 1496LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x521 = UINT64_MAX;
	int8_t x522 = INT8_MIN;
	static volatile int32_t x524 = 9;
	static volatile uint64_t t12 = 235834769472119284LLU;

	t12 = (x521-(x522|(x523>>x524)));

	if (t12 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x542 = 2012170299U;
	volatile uint64_t x543 = 71LLU;
	uint64_t x544 = 2LLU;
	uint64_t t13 = 2154070852931LLU;

	t13 = (x541-(x542|(x543>>x544)));

	if (t13 != 18446744071697381316LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x577 = 19337165929315LL;
	static int64_t x578 = 6824159108724089LL;
	uint16_t x579 = 203U;
	uint16_t x580 = 3U;
	volatile int64_t t14 = -49075277203189LL;

	t14 = (x577-(x578|(x579>>x580)));

	if (t14 != -6804821942794774LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x589 = INT8_MIN;
	int32_t x590 = -1;
	int64_t x591 = 53279LL;
	int64_t t15 = -815071355231913LL;

	t15 = (x589-(x590|(x591>>x592)));

	if (t15 != -127LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x645 = UINT32_MAX;
	uint64_t x646 = 5LLU;
	uint64_t x647 = 32LLU;
	static volatile int16_t x648 = 13;
	static volatile uint64_t t16 = 14LLU;

	t16 = (x645-(x646|(x647>>x648)));

	if (t16 != 4294967290LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x766 = 70U;
	static volatile uint64_t t17 = 65475157904883701LLU;

	t17 = (x765-(x766|(x767>>x768)));

	if (t17 != 18446603336221196289LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x866 = INT16_MIN;
	int64_t x867 = 154793327199367854LL;
	static int64_t t18 = 1591546453974716LL;

	t18 = (x865-(x866|(x867>>x868)));

	if (t18 != 83234LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x889 = UINT8_MAX;
	int8_t x890 = INT8_MIN;
	static uint16_t x891 = UINT16_MAX;
	volatile int32_t t19 = -29698712;

	t19 = (x889-(x890|(x891>>x892)));

	if (t19 != 256) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x905 = INT32_MAX;
	int8_t x906 = INT8_MIN;
	uint32_t x907 = 352U;
	int16_t x908 = 0;
	uint32_t t20 = 92830822U;

	t20 = (x905-(x906|(x907>>x908)));

	if (t20 != 2147483679U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x937 = INT64_MIN;
	volatile int64_t x939 = INT64_MAX;
	volatile uint8_t x940 = 6U;

	t21 = (x937-(x938|(x939>>x940)));

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x977 = -747011005462989191LL;
	int64_t x978 = -1LL;
	static int32_t x979 = INT32_MAX;
	uint8_t x980 = 18U;
	int64_t t22 = 711800088582604LL;

	t22 = (x977-(x978|(x979>>x980)));

	if (t22 != -747011005462989190LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x989 = 6;
	int32_t x990 = 57418;
	uint8_t x991 = UINT8_MAX;
	int32_t x992 = 22;
	volatile int32_t t23 = 193;

	t23 = (x989-(x990|(x991>>x992)));

	if (t23 != -57412) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1030 = UINT64_MAX;
	volatile uint16_t x1031 = 118U;

	t24 = (x1029-(x1030|(x1031>>x1032)));

	if (t24 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1069 = 2;
	static uint32_t x1070 = 418180U;
	int8_t x1072 = 11;

	t25 = (x1069-(x1070|(x1071>>x1072)));

	if (t25 != 4294549118U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x1086 = UINT16_MAX;
	static uint16_t x1087 = UINT16_MAX;
	uint8_t x1088 = 13U;
	static int32_t t26 = 111118195;

	t26 = (x1085-(x1086|(x1087>>x1088)));

	if (t26 != -65141) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1094 = 1;
	int16_t x1095 = INT16_MAX;
	volatile uint8_t x1096 = 19U;
	uint32_t t27 = 1813U;

	t27 = (x1093-(x1094|(x1095>>x1096)));

	if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1409 = UINT64_MAX;
	int16_t x1410 = 5;
	uint8_t x1411 = 0U;

	t28 = (x1409-(x1410|(x1411>>x1412)));

	if (t28 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1433 = 1294886464LLU;
	uint16_t x1434 = UINT16_MAX;
	uint64_t x1435 = 9217897893317776823LLU;
	volatile uint16_t x1436 = 1U;
	uint64_t t29 = 3LLU;

	t29 = (x1433-(x1434|(x1435>>x1436)));

	if (t29 != 13837795128345519681LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x1441 = -53;
	int64_t x1442 = -1LL;
	volatile int8_t x1443 = 15;
	static uint8_t x1444 = 4U;
	int64_t t30 = 2357869388591975LL;

	t30 = (x1441-(x1442|(x1443>>x1444)));

	if (t30 != -52LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1493 = -3224LL;
	uint16_t x1494 = 57U;
	int64_t x1495 = INT64_MAX;
	int32_t x1496 = 11;
	int64_t t31 = -262469173542686138LL;

	t31 = (x1493-(x1494|(x1495>>x1496)));

	if (t31 != -4503599627373719LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1497 = -11022LL;
	int16_t x1498 = -7315;
	int32_t x1499 = INT32_MAX;
	static int8_t x1500 = 1;
	int64_t t32 = -3466641889556137712LL;

	t32 = (x1497-(x1498|(x1499>>x1500)));

	if (t32 != -11021LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1501 = 369849058560LL;
	uint32_t x1504 = 5U;
	volatile int64_t t33 = 633LL;

	t33 = (x1501-(x1502|(x1503>>x1504)));

	if (t33 != 369849058553LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1565 = -3;
	int8_t x1566 = -15;
	volatile int8_t x1567 = 0;
	int8_t x1568 = 18;

	t34 = (x1565-(x1566|(x1567>>x1568)));

	if (t34 != 12) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1653 = INT32_MAX;
	uint64_t x1654 = UINT64_MAX;
	volatile uint64_t t35 = 1812063224149566LLU;

	t35 = (x1653-(x1654|(x1655>>x1656)));

	if (t35 != 2147483648LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1674 = 9971007;
	static volatile uint32_t x1675 = 2079053045U;
	uint8_t x1676 = 5U;
	static uint32_t t36 = 14137279U;

	t36 = (x1673-(x1674|(x1675>>x1676)));

	if (t36 != 2082504769U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1694 = 1LL;
	uint32_t x1695 = 104746U;
	volatile int8_t x1696 = 14;
	volatile uint64_t t37 = 400077409621LLU;

	t37 = (x1693-(x1694|(x1695>>x1696)));

	if (t37 != 989LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1745 = INT8_MIN;
	int8_t x1746 = INT8_MAX;
	int64_t x1747 = 72LL;
	int16_t x1748 = 0;
	volatile int64_t t38 = 3081LL;

	t38 = (x1745-(x1746|(x1747>>x1748)));

	if (t38 != -255LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1765 = 17147;
	static int8_t x1766 = 0;
	static volatile uint16_t x1767 = 114U;
	int8_t x1768 = 14;

	t39 = (x1765-(x1766|(x1767>>x1768)));

	if (t39 != 17147) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2081 = INT32_MIN;
	volatile int16_t x2082 = INT16_MIN;
	uint32_t x2083 = 24259U;
	volatile uint16_t x2084 = 12U;
	static volatile uint32_t t40 = 1042667U;

	t40 = (x2081-(x2082|(x2083>>x2084)));

	if (t40 != 2147516411U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x2249 = 1U;
	volatile int64_t x2250 = -1LL;
	static uint32_t x2252 = 4U;
	volatile int64_t t41 = 376508884154684045LL;

	t41 = (x2249-(x2250|(x2251>>x2252)));

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2497 = -422LL;
	int64_t x2498 = INT64_MIN;
	int8_t x2500 = 6;

	t42 = (x2497-(x2498|(x2499>>x2500)));

	if (t42 != 9223372036854775386LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x2517 = UINT64_MAX;
	int64_t x2518 = 383278032402968761LL;
	static uint8_t x2519 = UINT8_MAX;
	uint32_t x2520 = 1U;
	uint64_t t43 = 191405LLU;

	t43 = (x2517-(x2518|(x2519>>x2520)));

	if (t43 != 18063466041306582784LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x2538 = INT16_MAX;
	uint8_t x2539 = 104U;
	uint16_t x2540 = 19U;

	t44 = (x2537-(x2538|(x2539>>x2540)));

	if (t44 != -32683) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2550 = -1;
	int64_t x2551 = INT64_MAX;
	int8_t x2552 = 5;
	volatile int64_t t45 = -466391LL;

	t45 = (x2549-(x2550|(x2551>>x2552)));

	if (t45 != -2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2561 = 829348356801037LL;
	uint32_t x2562 = 3749U;
	int32_t x2563 = INT32_MAX;
	uint16_t x2564 = 16U;
	static int64_t t46 = 1364921LL;

	t46 = (x2561-(x2562|(x2563>>x2564)));

	if (t46 != 829348356768270LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2585 = INT64_MIN;
	int64_t x2586 = INT64_MIN;
	static uint64_t x2587 = 504030803226164767LLU;
	int8_t x2588 = 1;
	volatile uint64_t t47 = 105072052366638446LLU;

	t47 = (x2585-(x2586|(x2587>>x2588)));

	if (t47 != 18194728672096469233LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2634 = 3U;
	uint32_t x2635 = 9140082U;
	uint16_t x2636 = 2U;
	int64_t t48 = -2797715510847LL;

	t48 = (x2633-(x2634|(x2635>>x2636)));

	if (t48 != -2285024LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2645 = INT32_MIN;
	int32_t x2646 = 10286594;
	uint8_t x2648 = 3U;
	uint64_t t49 = 689LLU;

	t49 = (x2645-(x2646|(x2647>>x2648)));

	if (t49 != 18441008552926709910LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2749 = UINT32_MAX;
	uint32_t x2750 = 448204U;
	volatile int8_t x2751 = INT8_MAX;
	int8_t x2752 = 0;
	uint32_t t50 = 830U;

	t50 = (x2749-(x2750|(x2751>>x2752)));

	if (t50 != 4294519040U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2937 = 4279LLU;
	static uint16_t x2938 = UINT16_MAX;
	int16_t x2939 = 9;
	int8_t x2940 = 0;
	static uint64_t t51 = 367066139636257LLU;

	t51 = (x2937-(x2938|(x2939>>x2940)));

	if (t51 != 18446744073709490360LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2977 = -1LL;
	static int64_t x2978 = INT64_MIN;
	int16_t x2980 = 11;
	volatile int64_t t52 = -30404238625128895LL;

	t52 = (x2977-(x2978|(x2979>>x2980)));

	if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3033 = INT8_MIN;
	static uint16_t x3034 = 95U;
	uint64_t x3035 = UINT64_MAX;
	int8_t x3036 = 12;

	t53 = (x3033-(x3034|(x3035>>x3036)));

	if (t53 != 18442240474082180993LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3077 = INT8_MAX;
	uint8_t x3080 = 1U;

	t54 = (x3077-(x3078|(x3079>>x3080)));

	if (t54 != -32640) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3093 = INT64_MIN;
	int16_t x3094 = INT16_MIN;
	volatile int8_t x3095 = 0;
	volatile uint8_t x3096 = 6U;
	static volatile int64_t t55 = 2150564659322461LL;

	t55 = (x3093-(x3094|(x3095>>x3096)));

	if (t55 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3133 = UINT64_MAX;
	int64_t x3134 = -1LL;
	uint8_t x3135 = UINT8_MAX;
	static int8_t x3136 = 3;
	volatile uint64_t t56 = 162718963082122603LLU;

	t56 = (x3133-(x3134|(x3135>>x3136)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3289 = UINT16_MAX;
	uint64_t x3290 = 5488938264219LLU;
	uint64_t x3291 = 134312LLU;

	t57 = (x3289-(x3290|(x3291>>x3292)));

	if (t57 != 18446738584771350852LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x3345 = UINT16_MAX;
	static int16_t x3346 = INT16_MIN;
	int16_t x3348 = 1;

	t58 = (x3345-(x3346|(x3347>>x3348)));

	if (t58 != 65536LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3397 = 1U;
	static int32_t x3398 = INT32_MIN;
	int8_t x3399 = 6;
	uint32_t x3400 = 1U;
	volatile int32_t t59 = -100;

	t59 = (x3397-(x3398|(x3399>>x3400)));

	if (t59 != 2147483646) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3413 = INT64_MAX;
	int16_t x3414 = INT16_MAX;
	uint16_t x3416 = 6U;
	volatile int64_t t60 = -1139217LL;

	t60 = (x3413-(x3414|(x3415>>x3416)));

	if (t60 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3449 = 14U;
	uint64_t x3451 = 41826952LLU;

	t61 = (x3449-(x3450|(x3451>>x3452)));

	if (t61 != 18446744073667724677LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x3465 = INT16_MIN;
	static uint32_t x3467 = 7U;
	uint8_t x3468 = 10U;
	volatile int64_t t62 = -52LL;

	t62 = (x3465-(x3466|(x3467>>x3468)));

	if (t62 != -32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3503 = 4;
	int8_t x3504 = 24;
	volatile int32_t t63 = -109271916;

	t63 = (x3501-(x3502|(x3503>>x3504)));

	if (t63 != -258888) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3557 = -275;
	uint32_t x3558 = 728723U;
	int32_t x3559 = 47166;
	uint8_t x3560 = 7U;
	volatile uint32_t t64 = 64748276U;

	t64 = (x3557-(x3558|(x3559>>x3560)));

	if (t64 != 4294237946U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3601 = INT16_MIN;
	uint64_t x3602 = 442LLU;
	uint32_t x3603 = 7179893U;
	int8_t x3604 = 1;
	volatile uint64_t t65 = 84595LLU;

	t65 = (x3601-(x3602|(x3603>>x3604)));

	if (t65 != 18446744073705928774LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3681 = 430446394398756LLU;
	int32_t x3682 = INT32_MIN;
	uint16_t x3683 = 461U;
	volatile uint8_t x3684 = 0U;
	volatile uint64_t t66 = 1513206200LLU;

	t66 = (x3681-(x3682|(x3683>>x3684)));

	if (t66 != 430448541881943LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3689 = -1;
	int16_t x3690 = -1;
	uint16_t x3691 = 147U;
	static int8_t x3692 = 1;
	int32_t t67 = -60107;

	t67 = (x3689-(x3690|(x3691>>x3692)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3805 = -3897;
	uint64_t x3806 = 5285LLU;
	uint8_t x3807 = 24U;

	t68 = (x3805-(x3806|(x3807>>x3808)));

	if (t68 != 18446744073709542434LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3853 = 2486719LL;
	uint64_t x3854 = UINT64_MAX;
	static uint16_t x3855 = UINT16_MAX;
	uint64_t x3856 = 20LLU;
	volatile uint64_t t69 = 0LLU;

	t69 = (x3853-(x3854|(x3855>>x3856)));

	if (t69 != 2486720LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x3877 = 1618U;
	static int16_t x3878 = INT16_MIN;
	static int32_t x3879 = 1;
	uint8_t x3880 = 2U;
	uint32_t t70 = 4764700U;

	t70 = (x3877-(x3878|(x3879>>x3880)));

	if (t70 != 34386U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x3909 = 1U;
	volatile int8_t x3910 = INT8_MAX;
	uint64_t x3911 = 175210511LLU;
	static int8_t x3912 = 0;
	volatile uint64_t t71 = 247462414179484238LLU;

	t71 = (x3909-(x3910|(x3911>>x3912)));

	if (t71 != 18446744073534340994LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3921 = -1;
	volatile uint64_t x3923 = 44LLU;
	static uint64_t t72 = 372LLU;

	t72 = (x3921-(x3922|(x3923>>x3924)));

	if (t72 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x3925 = INT8_MAX;
	static int8_t x3926 = INT8_MIN;
	volatile uint32_t x3927 = 3U;
	static uint8_t x3928 = 30U;
	volatile uint32_t t73 = 839032301U;

	t73 = (x3925-(x3926|(x3927>>x3928)));

	if (t73 != 255U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3942 = INT8_MAX;
	static uint8_t x3943 = 5U;
	static uint8_t x3944 = 3U;
	int32_t t74 = 56906;

	t74 = (x3941-(x3942|(x3943>>x3944)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3966 = 8039247U;
	uint8_t x3967 = 0U;
	int64_t x3968 = 23LL;
	uint32_t t75 = 7372841U;

	t75 = (x3965-(x3966|(x3967>>x3968)));

	if (t75 != 4286928069U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4102 = 41298U;
	int64_t x4103 = 186032831789313LL;
	uint16_t x4104 = 16U;
	volatile int64_t t76 = -124250409825LL;

	t76 = (x4101-(x4102|(x4103>>x4104)));

	if (t76 != -2838668948LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4129 = UINT64_MAX;
	uint64_t x4130 = 10424709769872232LLU;
	volatile uint64_t x4131 = UINT64_MAX;
	int32_t x4132 = 2;
	volatile uint64_t t77 = 4401529954LLU;

	t77 = (x4129-(x4130|(x4131>>x4132)));

	if (t77 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4262 = INT32_MAX;
	static int8_t x4263 = 0;

	t78 = (x4261-(x4262|(x4263>>x4264)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4277 = 4;
	uint64_t x4278 = 1563828952LLU;
	volatile int8_t x4279 = 41;
	volatile uint8_t x4280 = 2U;
	static uint64_t t79 = 2635914306365553885LLU;

	t79 = (x4277-(x4278|(x4279>>x4280)));

	if (t79 != 18446744072145722666LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x4382 = UINT8_MAX;
	volatile uint32_t x4383 = 27U;
	uint8_t x4384 = 1U;

	t80 = (x4381-(x4382|(x4383>>x4384)));

	if (t80 != 3818885784U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4417 = INT16_MIN;
	int64_t x4418 = INT64_MIN;
	int32_t x4419 = INT32_MAX;
	static uint32_t x4420 = 4U;
	volatile int64_t t81 = -6795617676332282LL;

	t81 = (x4417-(x4418|(x4419>>x4420)));

	if (t81 != 9223372036720525313LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4425 = -943;
	int16_t x4426 = INT16_MIN;
	volatile uint64_t t82 = 32234LLU;

	t82 = (x4425-(x4426|(x4427>>x4428)));

	if (t82 != 18446744073709550674LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4741 = INT16_MIN;
	int16_t x4742 = INT16_MAX;
	uint8_t x4743 = UINT8_MAX;
	static volatile int32_t t83 = -1339;

	t83 = (x4741-(x4742|(x4743>>x4744)));

	if (t83 != -65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4757 = 1U;
	volatile uint16_t x4758 = 27U;
	int32_t x4759 = 2807;
	static volatile int32_t t84 = 1908;

	t84 = (x4757-(x4758|(x4759>>x4760)));

	if (t84 != -26) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4806 = 1295748LLU;
	static uint16_t x4807 = 152U;
	volatile int8_t x4808 = 1;
	volatile uint64_t t85 = 57579490266323098LLU;

	t85 = (x4805-(x4806|(x4807>>x4808)));

	if (t85 != 43884774LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4853 = 1450590U;
	uint64_t x4854 = UINT64_MAX;
	int8_t x4855 = 1;
	volatile uint8_t x4856 = 6U;

	t86 = (x4853-(x4854|(x4855>>x4856)));

	if (t86 != 1450591LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x4877 = 5559441LL;
	int32_t x4879 = INT32_MAX;
	volatile int32_t x4880 = 1;
	int64_t t87 = 48764606793477LL;

	t87 = (x4877-(x4878|(x4879>>x4880)));

	if (t87 != -4289407854LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4890 = INT8_MAX;
	uint32_t x4891 = 224103868U;
	int8_t x4892 = 20;
	static volatile uint64_t t88 = 9302739LLU;

	t88 = (x4889-(x4890|(x4891>>x4892)));

	if (t88 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4897 = 13261427320994629LLU;
	static int64_t x4898 = INT64_MIN;
	volatile uint64_t x4899 = 53LLU;
	uint8_t x4900 = 13U;
	uint64_t t89 = 1LLU;

	t89 = (x4897-(x4898|(x4899>>x4900)));

	if (t89 != 9236633464175770437LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x4921 = 437;
	static volatile int64_t x4922 = -416681416950LL;
	volatile uint64_t x4923 = 3659625LLU;
	uint16_t x4924 = 2U;
	volatile uint64_t t90 = 326437229153947LLU;

	t90 = (x4921-(x4922|(x4923>>x4924)));

	if (t90 != 416681036251LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4989 = -1;
	uint64_t x4991 = 480070065501051LLU;
	uint64_t x4992 = 61LLU;
	uint64_t t91 = 14LLU;

	t91 = (x4989-(x4990|(x4991>>x4992)));

	if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x5026 = 31256U;
	static int32_t x5027 = INT32_MAX;
	static uint32_t x5028 = 19U;

	t92 = (x5025-(x5026|(x5027>>x5028)));

	if (t92 != 2147450880U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5080 = 1U;
	static int64_t t93 = -21950543298261LL;

	t93 = (x5077-(x5078|(x5079>>x5080)));

	if (t93 != 32875LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x5105 = -1LL;
	int16_t x5106 = -1;
	int32_t x5107 = INT32_MAX;
	static int32_t x5108 = 1;
	static int64_t t94 = -7779436217744LL;

	t94 = (x5105-(x5106|(x5107>>x5108)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x5113 = 925;
	volatile uint64_t x5114 = UINT64_MAX;
	static volatile uint32_t x5116 = 4U;
	uint64_t t95 = 3871437158459776873LLU;

	t95 = (x5113-(x5114|(x5115>>x5116)));

	if (t95 != 926LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5290 = 387226535;
	int16_t x5291 = INT16_MAX;
	int32_t t96 = -674;

	t96 = (x5289-(x5290|(x5291>>x5292)));

	if (t96 != 1760256000) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5389 = UINT64_MAX;
	uint8_t x5391 = 1U;
	volatile uint64_t t97 = 1811425347700LLU;

	t97 = (x5389-(x5390|(x5391>>x5392)));

	if (t97 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x5509 = 8183;
	static volatile uint64_t x5510 = 24245647LLU;
	int64_t x5511 = 34LL;
	int16_t x5512 = 0;
	uint64_t t98 = 15782158596375896LLU;

	t98 = (x5509-(x5510|(x5511>>x5512)));

	if (t98 != 18446744073685314120LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5589 = INT64_MAX;
	static uint64_t x5591 = 115507913LLU;
	static volatile uint64_t x5592 = 3LLU;
	uint64_t t99 = 6359500912393366LLU;

	t99 = (x5589-(x5590|(x5591>>x5592)));

	if (t99 != 9223372036854788006LLU) { NG(); } else { ; }
	
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

