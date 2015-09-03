#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x37 = INT8_MAX;
int8_t x40 = 0;
int8_t x94 = INT8_MAX;
static volatile int32_t t3 = -220;
static volatile int32_t t4 = -3933;
int32_t x186 = -2;
uint8_t x188 = 6U;
static volatile int32_t t6 = 754;
static int16_t x221 = -92;
uint32_t x223 = 1U;
uint8_t x224 = 1U;
int32_t t8 = -721501684;
int16_t x234 = 23;
int64_t x254 = -1LL;
uint32_t x299 = 297U;
static volatile uint16_t x356 = 1U;
volatile int32_t t14 = 1;
uint32_t x474 = UINT32_MAX;
uint32_t x475 = UINT32_MAX;
volatile uint8_t x476 = 14U;
int8_t x589 = 1;
uint16_t x603 = 7035U;
int64_t x679 = 29LL;
int16_t x714 = 1;
static volatile int16_t x824 = 14;
uint16_t x835 = UINT16_MAX;
volatile uint32_t x987 = 25U;
uint32_t x988 = 0U;
uint16_t x1000 = 4U;
volatile int32_t t35 = -183403247;
uint16_t x1131 = 63U;
volatile int32_t t39 = -8146;
int8_t x1363 = INT8_MAX;
static volatile int32_t t41 = 4;
static uint16_t x1421 = 988U;
static volatile int8_t x1456 = 3;
volatile int8_t x1499 = INT8_MAX;
static int32_t x1514 = INT32_MIN;
static uint32_t x1515 = 3375U;
volatile int32_t t46 = -11051178;
int32_t t47 = 0;
static uint16_t x1579 = 87U;
uint8_t x1635 = 2U;
uint32_t x1679 = 3389974U;
int64_t x2099 = 26690307732372448LL;
int32_t x2113 = INT32_MAX;
static int16_t x2158 = INT16_MAX;
int8_t x2160 = 7;
int16_t x2171 = 176;
static int16_t x2216 = 6;
static int32_t t59 = 75028;
static uint64_t x2309 = 45036694079137549LLU;
static volatile uint8_t x2312 = 1U;
volatile int32_t t61 = 16;
volatile int64_t x2398 = -3113857666429LL;
int16_t x2422 = INT16_MAX;
uint16_t x2424 = 6U;
uint8_t x2469 = UINT8_MAX;
int8_t x2484 = 1;
int32_t t66 = 1;
uint32_t x2487 = 36U;
int8_t x2488 = 0;
static int32_t x2498 = -1;
volatile int32_t t68 = 11791714;
uint8_t x2502 = 2U;
int16_t x2504 = 21;
int32_t t71 = -224;
static uint16_t x2613 = 13U;
static int32_t x2622 = INT32_MAX;
volatile uint32_t x2657 = 14U;
static volatile uint16_t x2660 = 29U;
static volatile int8_t x2705 = INT8_MIN;
static volatile uint32_t x2901 = 45U;
int32_t t79 = -65639;
int32_t x2927 = INT32_MAX;
int64_t x2941 = INT64_MIN;
int32_t t81 = 2;
uint16_t x2956 = 29U;
volatile int32_t t82 = 1;
uint16_t x2961 = UINT16_MAX;
uint32_t x2965 = 1682995U;
uint8_t x3120 = 1U;
static int16_t x3123 = INT16_MAX;
volatile int32_t x3242 = 0;
int8_t x3278 = INT8_MAX;
volatile int8_t x3445 = INT8_MIN;
int32_t x3447 = 8414897;
static int32_t t91 = -6;
uint64_t x3641 = UINT64_MAX;
volatile int16_t x3647 = 3240;
uint8_t x3678 = UINT8_MAX;
volatile int64_t x3680 = 1LL;
int32_t t94 = 273280;
int8_t x3708 = 18;
int16_t x3729 = INT16_MAX;
uint64_t x3785 = 559988321183777LLU;
volatile int32_t x3806 = -219060613;
int16_t x3808 = 3;


void f0(void) {
	int32_t x1 = -3560727;
	static int16_t x2 = INT16_MIN;
	volatile int64_t x3 = 6048LL;
	int32_t x4 = 3;
	int32_t t0 = 26;

	t0 = ((x1<=x2)==(x3>>x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x38 = INT16_MIN;
	uint8_t x39 = 10U;
	static volatile int32_t t1 = 498177418;

	t1 = ((x37<=x38)==(x39>>x40));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x93 = -1;
	int16_t x95 = 6;
	uint8_t x96 = 4U;
	volatile int32_t t2 = -80923316;

	t2 = ((x93<=x94)==(x95>>x96));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x101 = -3;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 1863021916258LLU;
	volatile uint8_t x104 = 15U;

	t3 = ((x101<=x102)==(x103>>x104));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x113 = 885573LLU;
	int64_t x114 = 25LL;
	volatile uint8_t x115 = 9U;
	uint16_t x116 = 3U;

	t4 = ((x113<=x114)==(x115>>x116));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = INT8_MAX;
	int16_t x164 = 10;
	volatile int32_t t5 = -627182;

	t5 = ((x161<=x162)==(x163>>x164));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x185 = 112985345U;
	volatile uint8_t x187 = 36U;

	t6 = ((x185<=x186)==(x187>>x188));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x213 = 20;
	uint64_t x214 = UINT64_MAX;
	volatile uint16_t x215 = UINT16_MAX;
	uint8_t x216 = 2U;
	int32_t t7 = 1496604;

	t7 = ((x213<=x214)==(x215>>x216));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x222 = INT32_MAX;

	t8 = ((x221<=x222)==(x223>>x224));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x233 = INT32_MIN;
	uint64_t x235 = 3618680LLU;
	static uint32_t x236 = 0U;
	int32_t t9 = -26009186;

	t9 = ((x233<=x234)==(x235>>x236));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x241 = INT32_MIN;
	uint64_t x242 = UINT64_MAX;
	static uint64_t x243 = UINT64_MAX;
	int16_t x244 = 41;
	int32_t t10 = -821488518;

	t10 = ((x241<=x242)==(x243>>x244));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x253 = 3830181556277LLU;
	uint64_t x255 = 30530LLU;
	uint32_t x256 = 14U;
	int32_t t11 = 4232;

	t11 = ((x253<=x254)==(x255>>x256));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x297 = 727371159664LLU;
	static uint16_t x298 = 50U;
	uint16_t x300 = 6U;
	int32_t t12 = 0;

	t12 = ((x297<=x298)==(x299>>x300));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x353 = 32U;
	int32_t x354 = INT32_MAX;
	int16_t x355 = INT16_MAX;
	int32_t t13 = 50;

	t13 = ((x353<=x354)==(x355>>x356));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x361 = -1;
	int32_t x362 = INT32_MAX;
	static int32_t x363 = 13828;
	volatile uint8_t x364 = 28U;

	t14 = ((x361<=x362)==(x363>>x364));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x397 = 3144412391777557LLU;
	int16_t x398 = -1;
	volatile uint16_t x399 = 73U;
	static volatile uint16_t x400 = 19U;
	volatile int32_t t15 = 26600341;

	t15 = ((x397<=x398)==(x399>>x400));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x473 = -1;
	int32_t t16 = 966268613;

	t16 = ((x473<=x474)==(x475>>x476));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x497 = -1;
	int32_t x498 = INT32_MAX;
	volatile int32_t x499 = INT32_MAX;
	uint8_t x500 = 1U;
	static int32_t t17 = -3068;

	t17 = ((x497<=x498)==(x499>>x500));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x501 = 6U;
	int16_t x502 = -1;
	uint64_t x503 = 99695LLU;
	uint16_t x504 = 9U;
	volatile int32_t t18 = -9663;

	t18 = ((x501<=x502)==(x503>>x504));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x509 = 0U;
	volatile uint32_t x510 = UINT32_MAX;
	static int64_t x511 = 126165300624LL;
	uint8_t x512 = 1U;
	volatile int32_t t19 = -85307811;

	t19 = ((x509<=x510)==(x511>>x512));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x517 = INT64_MAX;
	uint8_t x518 = 121U;
	uint8_t x519 = 0U;
	uint16_t x520 = 9U;
	volatile int32_t t20 = 67;

	t20 = ((x517<=x518)==(x519>>x520));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x529 = INT32_MIN;
	static int16_t x530 = INT16_MAX;
	static int64_t x531 = 19840299450LL;
	static uint8_t x532 = 14U;
	static volatile int32_t t21 = -218;

	t21 = ((x529<=x530)==(x531>>x532));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x590 = 36;
	uint8_t x591 = 68U;
	static int8_t x592 = 1;
	volatile int32_t t22 = 107;

	t22 = ((x589<=x590)==(x591>>x592));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x601 = INT64_MIN;
	static int32_t x602 = 1;
	int32_t x604 = 5;
	volatile int32_t t23 = -75;

	t23 = ((x601<=x602)==(x603>>x604));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x677 = INT64_MIN;
	int32_t x678 = 445;
	static uint16_t x680 = 3U;
	volatile int32_t t24 = -129984898;

	t24 = ((x677<=x678)==(x679>>x680));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x705 = -327599;
	uint8_t x706 = UINT8_MAX;
	int32_t x707 = INT32_MAX;
	uint8_t x708 = 0U;
	volatile int32_t t25 = 19;

	t25 = ((x705<=x706)==(x707>>x708));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x709 = INT64_MAX;
	uint64_t x710 = UINT64_MAX;
	static uint64_t x711 = 50589077855798LLU;
	volatile uint8_t x712 = 5U;
	int32_t t26 = -168332;

	t26 = ((x709<=x710)==(x711>>x712));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x713 = 0U;
	static uint32_t x715 = 1006U;
	int8_t x716 = 0;
	volatile int32_t t27 = 1;

	t27 = ((x713<=x714)==(x715>>x716));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x797 = INT16_MAX;
	static volatile int8_t x798 = 11;
	uint16_t x799 = 10629U;
	uint16_t x800 = 28U;
	volatile int32_t t28 = -44058932;

	t28 = ((x797<=x798)==(x799>>x800));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x821 = UINT64_MAX;
	int16_t x822 = INT16_MIN;
	volatile int32_t x823 = INT32_MAX;
	int32_t t29 = -873;

	t29 = ((x821<=x822)==(x823>>x824));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x833 = -1;
	int32_t x834 = INT32_MIN;
	int8_t x836 = 0;
	int32_t t30 = 0;

	t30 = ((x833<=x834)==(x835>>x836));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x881 = 163LL;
	static uint32_t x882 = 1734475455U;
	int32_t x883 = INT32_MAX;
	volatile int8_t x884 = 31;
	int32_t t31 = 9051867;

	t31 = ((x881<=x882)==(x883>>x884));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x893 = 2701;
	int8_t x894 = INT8_MIN;
	int8_t x895 = INT8_MAX;
	uint32_t x896 = 7U;
	int32_t t32 = 16;

	t32 = ((x893<=x894)==(x895>>x896));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x985 = INT64_MIN;
	static int64_t x986 = -42959307003612LL;
	int32_t t33 = 10;

	t33 = ((x985<=x986)==(x987>>x988));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x997 = UINT32_MAX;
	static int32_t x998 = INT32_MIN;
	volatile int64_t x999 = INT64_MAX;
	int32_t t34 = -1309040;

	t34 = ((x997<=x998)==(x999>>x1000));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1093 = -1;
	static uint32_t x1094 = UINT32_MAX;
	uint64_t x1095 = 1241LLU;
	int32_t x1096 = 1;

	t35 = ((x1093<=x1094)==(x1095>>x1096));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1129 = 1485552164700036091LLU;
	int8_t x1130 = INT8_MIN;
	uint8_t x1132 = 0U;
	int32_t t36 = 14187113;

	t36 = ((x1129<=x1130)==(x1131>>x1132));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1137 = INT64_MIN;
	int8_t x1138 = -3;
	static uint16_t x1139 = UINT16_MAX;
	int8_t x1140 = 4;
	int32_t t37 = 8;

	t37 = ((x1137<=x1138)==(x1139>>x1140));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1189 = 7889198;
	uint32_t x1190 = 778U;
	uint16_t x1191 = UINT16_MAX;
	int8_t x1192 = 0;
	int32_t t38 = -1862184;

	t38 = ((x1189<=x1190)==(x1191>>x1192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x1285 = UINT8_MAX;
	static int16_t x1286 = INT16_MIN;
	int8_t x1287 = INT8_MAX;
	volatile uint32_t x1288 = 7U;

	t39 = ((x1285<=x1286)==(x1287>>x1288));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x1361 = 42U;
	volatile int32_t x1362 = -1;
	uint32_t x1364 = 11U;
	int32_t t40 = -1908;

	t40 = ((x1361<=x1362)==(x1363>>x1364));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1385 = -1;
	int16_t x1386 = INT16_MIN;
	volatile int32_t x1387 = 39;
	uint16_t x1388 = 1U;

	t41 = ((x1385<=x1386)==(x1387>>x1388));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x1422 = INT64_MAX;
	uint64_t x1423 = UINT64_MAX;
	volatile uint8_t x1424 = 0U;
	int32_t t42 = 9104;

	t42 = ((x1421<=x1422)==(x1423>>x1424));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1429 = -8138;
	int32_t x1430 = INT32_MAX;
	volatile uint32_t x1431 = 14U;
	static int8_t x1432 = 3;
	static int32_t t43 = -88513;

	t43 = ((x1429<=x1430)==(x1431>>x1432));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1453 = -100;
	int8_t x1454 = -52;
	uint64_t x1455 = UINT64_MAX;
	volatile int32_t t44 = 25838409;

	t44 = ((x1453<=x1454)==(x1455>>x1456));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1497 = -1;
	int64_t x1498 = INT64_MAX;
	uint32_t x1500 = 9U;
	int32_t t45 = -98546724;

	t45 = ((x1497<=x1498)==(x1499>>x1500));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1513 = -184122172651LL;
	uint8_t x1516 = 3U;

	t46 = ((x1513<=x1514)==(x1515>>x1516));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x1521 = 1359U;
	volatile int16_t x1522 = INT16_MIN;
	volatile int32_t x1523 = INT32_MAX;
	uint16_t x1524 = 3U;

	t47 = ((x1521<=x1522)==(x1523>>x1524));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1577 = INT32_MIN;
	int32_t x1578 = 894357;
	uint16_t x1580 = 15U;
	int32_t t48 = -7;

	t48 = ((x1577<=x1578)==(x1579>>x1580));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1633 = -1;
	uint8_t x1634 = 2U;
	uint16_t x1636 = 4U;
	volatile int32_t t49 = -56;

	t49 = ((x1633<=x1634)==(x1635>>x1636));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x1657 = 12123749U;
	uint16_t x1658 = 809U;
	volatile uint64_t x1659 = 121602695LLU;
	uint8_t x1660 = 55U;
	static volatile int32_t t50 = 0;

	t50 = ((x1657<=x1658)==(x1659>>x1660));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x1665 = 14U;
	uint64_t x1666 = 24514992277978LLU;
	uint16_t x1667 = 28U;
	uint64_t x1668 = 0LLU;
	int32_t t51 = 24921;

	t51 = ((x1665<=x1666)==(x1667>>x1668));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1677 = -133733378;
	uint8_t x1678 = 22U;
	uint16_t x1680 = 1U;
	int32_t t52 = 41541211;

	t52 = ((x1677<=x1678)==(x1679>>x1680));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1865 = INT32_MIN;
	uint16_t x1866 = UINT16_MAX;
	uint8_t x1867 = UINT8_MAX;
	int8_t x1868 = 3;
	volatile int32_t t53 = -26;

	t53 = ((x1865<=x1866)==(x1867>>x1868));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2005 = 4;
	uint32_t x2006 = 27U;
	int16_t x2007 = 0;
	volatile int8_t x2008 = 0;
	int32_t t54 = 48279;

	t54 = ((x2005<=x2006)==(x2007>>x2008));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2097 = 1668U;
	int8_t x2098 = INT8_MIN;
	int64_t x2100 = 1LL;
	volatile int32_t t55 = -3015633;

	t55 = ((x2097<=x2098)==(x2099>>x2100));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2114 = INT64_MIN;
	int64_t x2115 = 16786225LL;
	uint32_t x2116 = 1U;
	volatile int32_t t56 = 34662;

	t56 = ((x2113<=x2114)==(x2115>>x2116));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x2157 = 9U;
	uint8_t x2159 = 4U;
	volatile int32_t t57 = 3685;

	t57 = ((x2157<=x2158)==(x2159>>x2160));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2169 = -438114;
	int64_t x2170 = INT64_MIN;
	static volatile int64_t x2172 = 0LL;
	volatile int32_t t58 = 120;

	t58 = ((x2169<=x2170)==(x2171>>x2172));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2213 = INT16_MIN;
	int8_t x2214 = INT8_MIN;
	volatile int8_t x2215 = INT8_MAX;

	t59 = ((x2213<=x2214)==(x2215>>x2216));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x2237 = INT64_MAX;
	int8_t x2238 = INT8_MIN;
	uint32_t x2239 = 128996021U;
	int8_t x2240 = 0;
	volatile int32_t t60 = 6010502;

	t60 = ((x2237<=x2238)==(x2239>>x2240));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2310 = 185856187962919972LLU;
	volatile uint64_t x2311 = UINT64_MAX;

	t61 = ((x2309<=x2310)==(x2311>>x2312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2397 = INT8_MAX;
	uint8_t x2399 = 124U;
	uint8_t x2400 = 20U;
	int32_t t62 = 320;

	t62 = ((x2397<=x2398)==(x2399>>x2400));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2421 = -890245LL;
	uint64_t x2423 = UINT64_MAX;
	int32_t t63 = 4368;

	t63 = ((x2421<=x2422)==(x2423>>x2424));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2445 = 554327U;
	uint8_t x2446 = 6U;
	volatile uint8_t x2447 = 1U;
	volatile uint8_t x2448 = 2U;
	volatile int32_t t64 = -26849515;

	t64 = ((x2445<=x2446)==(x2447>>x2448));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2470 = INT8_MIN;
	volatile uint16_t x2471 = UINT16_MAX;
	uint16_t x2472 = 7U;
	int32_t t65 = -140598;

	t65 = ((x2469<=x2470)==(x2471>>x2472));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2481 = 1804;
	int16_t x2482 = -7;
	uint32_t x2483 = UINT32_MAX;

	t66 = ((x2481<=x2482)==(x2483>>x2484));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2485 = 479U;
	uint16_t x2486 = UINT16_MAX;
	int32_t t67 = -62;

	t67 = ((x2485<=x2486)==(x2487>>x2488));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2497 = -1LL;
	uint16_t x2499 = 1U;
	static int32_t x2500 = 24;

	t68 = ((x2497<=x2498)==(x2499>>x2500));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2501 = INT8_MIN;
	int8_t x2503 = INT8_MAX;
	int32_t t69 = -476962028;

	t69 = ((x2501<=x2502)==(x2503>>x2504));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2569 = -1LL;
	uint64_t x2570 = UINT64_MAX;
	static volatile int8_t x2571 = INT8_MAX;
	uint16_t x2572 = 1U;
	static int32_t t70 = -4622711;

	t70 = ((x2569<=x2570)==(x2571>>x2572));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2609 = UINT64_MAX;
	uint32_t x2610 = 5791114U;
	int8_t x2611 = INT8_MAX;
	static uint8_t x2612 = 14U;

	t71 = ((x2609<=x2610)==(x2611>>x2612));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x2614 = INT16_MAX;
	int8_t x2615 = 2;
	static uint8_t x2616 = 6U;
	static int32_t t72 = 23;

	t72 = ((x2613<=x2614)==(x2615>>x2616));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2617 = 15U;
	int8_t x2618 = INT8_MIN;
	int16_t x2619 = INT16_MAX;
	static int32_t x2620 = 3;
	volatile int32_t t73 = 3782355;

	t73 = ((x2617<=x2618)==(x2619>>x2620));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2621 = 0;
	volatile uint64_t x2623 = 2832403575679LLU;
	uint16_t x2624 = 11U;
	static int32_t t74 = -59303;

	t74 = ((x2621<=x2622)==(x2623>>x2624));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2649 = 1015545U;
	uint64_t x2650 = 6011728LLU;
	uint16_t x2651 = 30681U;
	uint16_t x2652 = 21U;
	volatile int32_t t75 = -280;

	t75 = ((x2649<=x2650)==(x2651>>x2652));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2658 = 652U;
	uint32_t x2659 = 8304279U;
	int32_t t76 = -115715258;

	t76 = ((x2657<=x2658)==(x2659>>x2660));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x2706 = UINT16_MAX;
	volatile uint32_t x2707 = 318788U;
	int32_t x2708 = 1;
	volatile int32_t t77 = -670271607;

	t77 = ((x2705<=x2706)==(x2707>>x2708));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2761 = 588366247U;
	volatile int8_t x2762 = INT8_MIN;
	int8_t x2763 = INT8_MAX;
	volatile int8_t x2764 = 0;
	int32_t t78 = 7770;

	t78 = ((x2761<=x2762)==(x2763>>x2764));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2902 = -1LL;
	uint16_t x2903 = 554U;
	int8_t x2904 = 5;

	t79 = ((x2901<=x2902)==(x2903>>x2904));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x2925 = 35;
	int64_t x2926 = 105957LL;
	volatile int8_t x2928 = 2;
	int32_t t80 = -179;

	t80 = ((x2925<=x2926)==(x2927>>x2928));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x2942 = INT64_MIN;
	volatile int16_t x2943 = INT16_MAX;
	uint8_t x2944 = 0U;

	t81 = ((x2941<=x2942)==(x2943>>x2944));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2953 = 781;
	static int64_t x2954 = 103LL;
	int16_t x2955 = INT16_MAX;

	t82 = ((x2953<=x2954)==(x2955>>x2956));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2962 = INT32_MAX;
	uint8_t x2963 = 22U;
	int16_t x2964 = 1;
	volatile int32_t t83 = 40914237;

	t83 = ((x2961<=x2962)==(x2963>>x2964));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2966 = -10;
	volatile int64_t x2967 = 143335836187LL;
	static volatile uint8_t x2968 = 0U;
	static int32_t t84 = -1;

	t84 = ((x2965<=x2966)==(x2967>>x2968));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x3053 = UINT8_MAX;
	int64_t x3054 = INT64_MIN;
	static volatile uint8_t x3055 = 0U;
	uint16_t x3056 = 0U;
	int32_t t85 = -226;

	t85 = ((x3053<=x3054)==(x3055>>x3056));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x3117 = UINT16_MAX;
	int64_t x3118 = -1LL;
	uint8_t x3119 = 5U;
	int32_t t86 = 19;

	t86 = ((x3117<=x3118)==(x3119>>x3120));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3121 = 27U;
	uint16_t x3122 = UINT16_MAX;
	int16_t x3124 = 6;
	volatile int32_t t87 = -291;

	t87 = ((x3121<=x3122)==(x3123>>x3124));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3241 = UINT8_MAX;
	uint16_t x3243 = UINT16_MAX;
	static uint8_t x3244 = 4U;
	volatile int32_t t88 = 693821;

	t88 = ((x3241<=x3242)==(x3243>>x3244));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x3277 = 2U;
	uint64_t x3279 = UINT64_MAX;
	uint8_t x3280 = 2U;
	volatile int32_t t89 = 28;

	t89 = ((x3277<=x3278)==(x3279>>x3280));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3289 = 12;
	static int16_t x3290 = INT16_MIN;
	volatile uint8_t x3291 = 68U;
	int8_t x3292 = 0;
	int32_t t90 = -55418142;

	t90 = ((x3289<=x3290)==(x3291>>x3292));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x3446 = INT64_MIN;
	uint8_t x3448 = 10U;

	t91 = ((x3445<=x3446)==(x3447>>x3448));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x3642 = -5149652;
	int64_t x3643 = 163887723740047LL;
	uint32_t x3644 = 1U;
	volatile int32_t t92 = 183;

	t92 = ((x3641<=x3642)==(x3643>>x3644));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3645 = INT64_MIN;
	static volatile int32_t x3646 = INT32_MIN;
	int8_t x3648 = 3;
	int32_t t93 = 218132;

	t93 = ((x3645<=x3646)==(x3647>>x3648));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3677 = -1LL;
	static uint8_t x3679 = 0U;

	t94 = ((x3677<=x3678)==(x3679>>x3680));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x3705 = UINT32_MAX;
	static int16_t x3706 = -1;
	volatile uint16_t x3707 = 2535U;
	int32_t t95 = -117375;

	t95 = ((x3705<=x3706)==(x3707>>x3708));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x3730 = -2LL;
	volatile int64_t x3731 = INT64_MAX;
	uint8_t x3732 = 5U;
	static int32_t t96 = 16;

	t96 = ((x3729<=x3730)==(x3731>>x3732));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x3753 = INT64_MIN;
	int64_t x3754 = INT64_MIN;
	uint16_t x3755 = UINT16_MAX;
	uint8_t x3756 = 24U;
	int32_t t97 = 243473;

	t97 = ((x3753<=x3754)==(x3755>>x3756));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x3786 = INT8_MAX;
	int32_t x3787 = INT32_MAX;
	static volatile uint16_t x3788 = 3U;
	volatile int32_t t98 = -730476;

	t98 = ((x3785<=x3786)==(x3787>>x3788));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3805 = INT64_MIN;
	uint16_t x3807 = 2U;
	static volatile int32_t t99 = 70553463;

	t99 = ((x3805<=x3806)==(x3807>>x3808));

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

