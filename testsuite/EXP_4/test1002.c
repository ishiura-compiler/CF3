#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 119248908U;
static uint64_t x53 = UINT64_MAX;
int64_t x54 = -1LL;
static uint32_t x55 = UINT32_MAX;
int32_t x57 = -1;
uint64_t x189 = UINT64_MAX;
int8_t x192 = 1;
int64_t x262 = -1LL;
volatile uint8_t x264 = 0U;
int32_t x787 = 75807;
int8_t x1157 = -24;
uint64_t t13 = 7159944126193212639LLU;
int16_t x1317 = INT16_MIN;
volatile uint16_t x1342 = UINT16_MAX;
static int8_t x1343 = 15;
uint8_t x1372 = 0U;
int8_t x1442 = INT8_MIN;
static uint32_t t20 = 883U;
volatile int16_t x1510 = -1025;
int32_t t21 = 326234181;
uint8_t x1555 = UINT8_MAX;
volatile uint64_t t22 = 19641LLU;
int16_t x1729 = 405;
int32_t x1770 = 1;
int16_t x1805 = -184;
static uint64_t x1806 = 1737533354358LLU;
uint32_t x1808 = 2U;
static uint8_t x2096 = 0U;
int64_t x2105 = INT64_MAX;
uint8_t x2108 = 4U;
int8_t x2209 = INT8_MIN;
volatile int8_t x2211 = 1;
int64_t x2217 = -1LL;
uint16_t x2219 = 0U;
uint8_t x2220 = 2U;
uint8_t x2333 = 33U;
uint16_t x2353 = 88U;
volatile int8_t x2355 = 1;
volatile uint16_t x2420 = 20U;
volatile int8_t x2460 = 0;
volatile int16_t x2874 = INT16_MIN;
volatile uint64_t t43 = 19003857800LLU;
uint16_t x2906 = 0U;
uint16_t x2907 = 9U;
uint32_t x2908 = 1U;
volatile int16_t x2969 = INT16_MIN;
uint64_t t46 = 1959310381122125LLU;
uint16_t x3031 = 28U;
static uint8_t x3163 = UINT8_MAX;
uint16_t x3164 = 8U;
uint32_t t49 = 14432183U;
uint8_t x3308 = 23U;
static uint16_t x3371 = 1755U;
int16_t x3372 = 7;
volatile int32_t t51 = -1317214;
volatile uint32_t t52 = 4000261U;
uint16_t x3503 = 14784U;
static int64_t x3627 = INT64_MAX;
static volatile uint32_t t57 = 192815U;
int64_t x3861 = -1LL;
uint8_t x3863 = UINT8_MAX;
volatile int32_t t59 = 2;
volatile uint8_t x3944 = 18U;
static uint32_t t61 = 4U;
int16_t x3998 = 7;
int64_t t62 = 182LL;
uint8_t x4019 = UINT8_MAX;
uint16_t x4021 = 0U;
volatile int32_t t64 = 409257340;
int16_t x4118 = INT16_MAX;
volatile int32_t t65 = -739394;
int16_t x4174 = -80;
uint16_t x4175 = 107U;
uint8_t x4176 = 11U;
uint32_t x4291 = 2U;
volatile uint64_t t69 = 57241716LLU;
volatile uint32_t t70 = 888U;
uint8_t x4432 = 15U;
uint8_t x4470 = 0U;
int32_t t73 = 151860;
static int16_t x4687 = INT16_MAX;
uint8_t x4688 = 3U;
static uint32_t t76 = 814517159U;
uint64_t x4813 = 2545267347102LLU;
int8_t x4815 = 33;
volatile int32_t x4918 = INT32_MAX;
static uint64_t x4938 = 478499237884919918LLU;
int8_t x4978 = 0;
static uint32_t x4991 = UINT32_MAX;
uint64_t x4995 = 33059486069427009LLU;
int16_t x5316 = 2;
int16_t x5344 = 0;
uint64_t t87 = 184LLU;
static int16_t x5361 = -1;
int8_t x5364 = 0;
static volatile uint32_t t88 = 54U;
int32_t x5401 = -1;
static volatile int32_t x5637 = INT32_MIN;
static int64_t x5649 = -9LL;
uint8_t x5714 = UINT8_MAX;
uint8_t x5716 = 51U;
volatile uint64_t t95 = 26964LLU;
static uint8_t x5823 = 62U;


void f0(void) {
	uint16_t x29 = 459U;
	uint8_t x30 = UINT8_MAX;
	volatile uint32_t x31 = UINT32_MAX;
	volatile int8_t x32 = 0;

	t0 = (x29+(x30^(x31<<x32)));

	if (t0 != 203U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x56 = 1;
	static volatile uint64_t t1 = 45848155223599LLU;

	t1 = (x53+(x54^(x55<<x56)));

	if (t1 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x58 = -1;
	static int16_t x59 = 47;
	uint64_t x60 = 12LLU;
	volatile int32_t t2 = 19;

	t2 = (x57+(x58^(x59<<x60)));

	if (t2 != -192514) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x117 = 0LLU;
	static uint32_t x118 = 4U;
	int16_t x119 = 255;
	volatile int8_t x120 = 1;
	volatile uint64_t t3 = 526283276LLU;

	t3 = (x117+(x118^(x119<<x120)));

	if (t3 != 506LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x190 = -1LL;
	volatile int8_t x191 = INT8_MAX;
	volatile uint64_t t4 = 4121023072174063LLU;

	t4 = (x189+(x190^(x191<<x192)));

	if (t4 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x261 = 31;
	volatile uint32_t x263 = UINT32_MAX;
	static volatile int64_t t5 = 4473119LL;

	t5 = (x261+(x262^(x263<<x264)));

	if (t5 != -4294967265LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x429 = 412LL;
	static uint64_t x430 = 27595LLU;
	uint8_t x431 = 1U;
	int32_t x432 = 4;
	uint64_t t6 = 255LLU;

	t6 = (x429+(x430^(x431<<x432)));

	if (t6 != 28023LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x461 = 6854811U;
	static volatile int32_t x462 = -331;
	int16_t x463 = 83;
	static int8_t x464 = 3;
	volatile uint32_t t7 = 197489583U;

	t7 = (x461+(x462^(x463<<x464)));

	if (t7 != 6853832U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x785 = INT8_MIN;
	uint8_t x786 = 109U;
	uint8_t x788 = 3U;
	volatile int32_t t8 = -261610538;

	t8 = (x785+(x786^(x787<<x788)));

	if (t8 != 606229) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x1153 = -1;
	int16_t x1154 = -1;
	volatile uint64_t x1155 = 30967219992508173LLU;
	static uint16_t x1156 = 12U;
	static volatile uint64_t t9 = 9476646LLU;

	t9 = (x1153+(x1154^(x1155<<x1156)));

	if (t9 != 2285475426653384702LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x1158 = INT8_MIN;
	static volatile int32_t x1159 = 1;
	uint16_t x1160 = 9U;
	volatile int32_t t10 = -262908592;

	t10 = (x1157+(x1158^(x1159<<x1160)));

	if (t10 != -664) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x1209 = -1;
	int16_t x1210 = INT16_MIN;
	uint16_t x1211 = 0U;
	uint8_t x1212 = 15U;
	int32_t t11 = 99;

	t11 = (x1209+(x1210^(x1211<<x1212)));

	if (t11 != -32769) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1237 = 20U;
	uint64_t x1238 = 68350487115130888LLU;
	static int8_t x1239 = INT8_MAX;
	volatile uint16_t x1240 = 2U;
	static uint64_t t12 = 1LLU;

	t12 = (x1237+(x1238^(x1239<<x1240)));

	if (t12 != 68350487115131400LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1309 = UINT64_MAX;
	uint16_t x1310 = 3U;
	uint16_t x1311 = UINT16_MAX;
	static int8_t x1312 = 0;

	t13 = (x1309+(x1310^(x1311<<x1312)));

	if (t13 != 65531LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1318 = 3780927649LLU;
	static uint16_t x1319 = 2089U;
	static uint8_t x1320 = 2U;
	volatile uint64_t t14 = 24778595LLU;

	t14 = (x1317+(x1318^(x1319<<x1320)));

	if (t14 != 3780886533LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x1341 = INT16_MIN;
	uint8_t x1344 = 1U;
	volatile int32_t t15 = -114665;

	t15 = (x1341+(x1342^(x1343<<x1344)));

	if (t15 != 32737) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1357 = INT32_MIN;
	int64_t x1358 = INT64_MAX;
	static uint64_t x1359 = 112786307286609LLU;
	volatile uint8_t x1360 = 1U;
	volatile uint64_t t16 = 8173782100LLU;

	t16 = (x1357+(x1358^(x1359<<x1360)));

	if (t16 != 9223146462092718941LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x1369 = INT64_MIN;
	volatile int8_t x1370 = 11;
	uint32_t x1371 = UINT32_MAX;
	volatile int64_t t17 = -6030635482629093LL;

	t17 = (x1369+(x1370^(x1371<<x1372)));

	if (t17 != -9223372032559808524LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1441 = -5710;
	uint8_t x1443 = 2U;
	uint8_t x1444 = 1U;
	volatile int32_t t18 = 0;

	t18 = (x1441+(x1442^(x1443<<x1444)));

	if (t18 != -5834) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1445 = INT64_MIN;
	static uint64_t x1446 = 171628017545325254LLU;
	uint8_t x1447 = 78U;
	uint8_t x1448 = 18U;
	volatile uint64_t t19 = 5130833471LLU;

	t19 = (x1445+(x1446^(x1447<<x1448)));

	if (t19 != 9395000054385945286LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1493 = 16216U;
	volatile uint32_t x1494 = 31834677U;
	uint8_t x1495 = UINT8_MAX;
	static volatile uint8_t x1496 = 0U;

	t20 = (x1493+(x1494^(x1495<<x1496)));

	if (t20 != 31851042U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1509 = 3U;
	uint16_t x1511 = 4U;
	static int8_t x1512 = 13;

	t21 = (x1509+(x1510^(x1511<<x1512)));

	if (t21 != -33790) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1553 = -1;
	uint64_t x1554 = 9397375920LLU;
	volatile int8_t x1556 = 2;

	t22 = (x1553+(x1554^(x1555<<x1556)));

	if (t22 != 9397375051LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1730 = UINT8_MAX;
	uint64_t x1731 = 407804579478LLU;
	static int8_t x1732 = 3;
	static volatile uint64_t t23 = 2852147925200105053LLU;

	t23 = (x1729+(x1730^(x1731<<x1732)));

	if (t23 != 3262436636132LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1749 = 1LL;
	volatile int32_t x1750 = -869291;
	int64_t x1751 = 1882442614962LL;
	uint32_t x1752 = 15U;
	int64_t t24 = -157198LL;

	t24 = (x1749+(x1750^(x1751<<x1752)));

	if (t24 != -61683879606764458LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x1769 = 5U;
	int8_t x1771 = 26;
	int8_t x1772 = 0;
	volatile int32_t t25 = 1938;

	t25 = (x1769+(x1770^(x1771<<x1772)));

	if (t25 != 32) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1801 = INT8_MIN;
	volatile uint16_t x1802 = 984U;
	uint64_t x1803 = 4471854833LLU;
	static uint8_t x1804 = 8U;
	uint64_t t26 = 18464039LLU;

	t26 = (x1801+(x1802^(x1803<<x1804)));

	if (t26 != 1144794837592LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1807 = 428550945835192LLU;
	volatile uint64_t t27 = 32515158169360LLU;

	t27 = (x1805+(x1806^(x1807<<x1808)));

	if (t27 != 1713707631170270LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1885 = UINT16_MAX;
	int8_t x1886 = INT8_MIN;
	uint8_t x1887 = 6U;
	volatile uint8_t x1888 = 4U;
	volatile int32_t t28 = 1;

	t28 = (x1885+(x1886^(x1887<<x1888)));

	if (t28 != 65503) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x1917 = 16491570295883097LLU;
	volatile uint32_t x1918 = 8U;
	volatile int32_t x1919 = INT32_MAX;
	static uint8_t x1920 = 0U;
	uint64_t t29 = 7574776002388655416LLU;

	t29 = (x1917+(x1918^(x1919<<x1920)));

	if (t29 != 16491572443366736LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x2009 = INT8_MIN;
	int16_t x2010 = INT16_MAX;
	uint8_t x2011 = 2U;
	volatile int32_t x2012 = 0;
	int32_t t30 = 42;

	t30 = (x2009+(x2010^(x2011<<x2012)));

	if (t30 != 32637) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2093 = INT16_MIN;
	static uint8_t x2094 = 8U;
	uint32_t x2095 = 1U;
	static volatile uint32_t t31 = 455237352U;

	t31 = (x2093+(x2094^(x2095<<x2096)));

	if (t31 != 4294934537U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x2106 = INT8_MIN;
	int16_t x2107 = INT16_MAX;
	volatile int64_t t32 = 56LL;

	t32 = (x2105+(x2106^(x2107<<x2108)));

	if (t32 != 9223372036854251631LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2210 = INT16_MAX;
	static int8_t x2212 = 23;
	static int32_t t33 = -644261;

	t33 = (x2209+(x2210^(x2211<<x2212)));

	if (t33 != 8421247) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x2218 = 1;
	int64_t t34 = -12602484885LL;

	t34 = (x2217+(x2218^(x2219<<x2220)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2285 = INT8_MIN;
	static uint64_t x2286 = 1130449016679073278LLU;
	int32_t x2287 = 417;
	static uint32_t x2288 = 6U;
	uint64_t t35 = 579372811118710LLU;

	t35 = (x2285+(x2286^(x2287<<x2288)));

	if (t35 != 1130449016679099710LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2334 = -1;
	int16_t x2335 = 6881;
	int16_t x2336 = 6;
	volatile int32_t t36 = 63000069;

	t36 = (x2333+(x2334^(x2335<<x2336)));

	if (t36 != -440352) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2354 = 425U;
	uint8_t x2356 = 17U;
	volatile int32_t t37 = 100244138;

	t37 = (x2353+(x2354^(x2355<<x2356)));

	if (t37 != 131585) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2417 = -1LL;
	int32_t x2418 = -1;
	uint32_t x2419 = 6U;
	volatile int64_t t38 = -1717523LL;

	t38 = (x2417+(x2418^(x2419<<x2420)));

	if (t38 != 4288675838LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2457 = INT8_MIN;
	volatile uint64_t x2458 = 4110988469LLU;
	int16_t x2459 = 6127;
	volatile uint64_t t39 = 11541341LLU;

	t39 = (x2457+(x2458^(x2459<<x2460)));

	if (t39 != 4110983898LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x2693 = UINT32_MAX;
	int8_t x2694 = -57;
	uint16_t x2695 = 1598U;
	uint8_t x2696 = 1U;
	uint32_t t40 = 1162395U;

	t40 = (x2693+(x2694^(x2695<<x2696)));

	if (t40 != 4294964154U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2841 = -1051459;
	int16_t x2842 = 5440;
	volatile int8_t x2843 = 4;
	int8_t x2844 = 14;
	int32_t t41 = -16329282;

	t41 = (x2841+(x2842^(x2843<<x2844)));

	if (t41 != -980483) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2873 = 5978459257095969890LLU;
	uint32_t x2875 = 14U;
	uint16_t x2876 = 17U;
	uint64_t t42 = 45LLU;

	t42 = (x2873+(x2874^(x2875<<x2876)));

	if (t42 != 5978459261389069410LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2885 = INT32_MIN;
	uint64_t x2886 = 1410124623473475743LLU;
	static uint8_t x2887 = 15U;
	uint16_t x2888 = 0U;

	t43 = (x2885+(x2886^(x2887<<x2888)));

	if (t43 != 1410124621325992080LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2905 = UINT64_MAX;
	volatile uint64_t t44 = 17LLU;

	t44 = (x2905+(x2906^(x2907<<x2908)));

	if (t44 != 17LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2970 = -1;
	static volatile int16_t x2971 = INT16_MAX;
	volatile uint8_t x2972 = 1U;
	int32_t t45 = 4664;

	t45 = (x2969+(x2970^(x2971<<x2972)));

	if (t45 != -98303) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3001 = -1;
	static volatile int8_t x3002 = INT8_MAX;
	uint64_t x3003 = 136599630950LLU;
	uint8_t x3004 = 0U;

	t46 = (x3001+(x3002^(x3003<<x3004)));

	if (t46 != 136599630872LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3029 = INT16_MIN;
	static int64_t x3030 = -1LL;
	volatile int32_t x3032 = 23;
	int64_t t47 = 1LL;

	t47 = (x3029+(x3030^(x3031<<x3032)));

	if (t47 != -234913793LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3041 = -26;
	int8_t x3042 = 0;
	static uint16_t x3043 = 186U;
	uint8_t x3044 = 7U;
	int32_t t48 = -4;

	t48 = (x3041+(x3042^(x3043<<x3044)));

	if (t48 != 23782) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3161 = INT8_MAX;
	volatile uint32_t x3162 = UINT32_MAX;

	t49 = (x3161+(x3162^(x3163<<x3164)));

	if (t49 != 4294902142U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3305 = 5022U;
	volatile int16_t x3306 = INT16_MAX;
	uint8_t x3307 = 44U;
	int32_t t50 = 80408262;

	t50 = (x3305+(x3306^(x3307<<x3308)));

	if (t50 != 369136541) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3369 = UINT16_MAX;
	int32_t x3370 = -1;

	t51 = (x3369+(x3370^(x3371<<x3372)));

	if (t51 != -159106) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3437 = -439379285;
	static int32_t x3438 = -8336;
	uint32_t x3439 = UINT32_MAX;
	uint8_t x3440 = 10U;

	t52 = (x3437+(x3438^(x3439<<x3440)));

	if (t52 != 3855597083U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3485 = -96600545695026LL;
	int64_t x3486 = INT64_MIN;
	static volatile uint64_t x3487 = 28717719LLU;
	volatile int8_t x3488 = 3;
	static uint64_t t53 = 326841LLU;

	t53 = (x3485+(x3486^(x3487<<x3488)));

	if (t53 != 9223275436538822534LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3501 = -14;
	volatile int16_t x3502 = INT16_MAX;
	volatile int8_t x3504 = 2;
	int32_t t54 = -26930833;

	t54 = (x3501+(x3502^(x3503<<x3504)));

	if (t54 != 39153) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3601 = 86477779313612981LLU;
	int16_t x3602 = 0;
	volatile int16_t x3603 = 0;
	static volatile uint16_t x3604 = 0U;
	uint64_t t55 = 86909664133449460LLU;

	t55 = (x3601+(x3602^(x3603<<x3604)));

	if (t55 != 86477779313612981LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3625 = INT16_MIN;
	volatile uint16_t x3626 = 2135U;
	uint16_t x3628 = 0U;
	volatile int64_t t56 = -359850LL;

	t56 = (x3625+(x3626^(x3627<<x3628)));

	if (t56 != 9223372036854740904LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3661 = INT8_MIN;
	static int32_t x3662 = -161794355;
	volatile uint32_t x3663 = UINT32_MAX;
	int8_t x3664 = 1;

	t57 = (x3661+(x3662^(x3663<<x3664)));

	if (t57 != 161794227U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3862 = -1;
	volatile int16_t x3864 = 2;
	volatile int64_t t58 = 5782397LL;

	t58 = (x3861+(x3862^(x3863<<x3864)));

	if (t58 != -1022LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3889 = 9U;
	static int32_t x3890 = -1;
	int8_t x3891 = INT8_MAX;
	static uint8_t x3892 = 3U;

	t59 = (x3889+(x3890^(x3891<<x3892)));

	if (t59 != -1008) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3941 = -1;
	uint32_t x3942 = 293065U;
	int8_t x3943 = INT8_MAX;
	uint32_t t60 = 187077992U;

	t60 = (x3941+(x3942^(x3943<<x3944)));

	if (t60 != 33061064U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3965 = 173973U;
	static int8_t x3966 = INT8_MIN;
	uint8_t x3967 = 50U;
	volatile uint32_t x3968 = 1U;

	t61 = (x3965+(x3966^(x3967<<x3968)));

	if (t61 != 173945U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3997 = 924;
	int64_t x3999 = 217377279513576LL;
	static volatile uint16_t x4000 = 10U;

	t62 = (x3997+(x3998^(x3999<<x4000)));

	if (t62 != 222594334221902755LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4017 = -1;
	uint8_t x4018 = 44U;
	int32_t x4020 = 18;
	volatile int32_t t63 = 3175145;

	t63 = (x4017+(x4018^(x4019<<x4020)));

	if (t63 != 66846763) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x4022 = UINT16_MAX;
	static uint8_t x4023 = 41U;
	uint8_t x4024 = 2U;

	t64 = (x4021+(x4022^(x4023<<x4024)));

	if (t64 != 65371) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4117 = INT8_MIN;
	volatile int8_t x4119 = 7;
	int8_t x4120 = 1;

	t65 = (x4117+(x4118^(x4119<<x4120)));

	if (t65 != 32625) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4173 = 5272U;
	static uint32_t t66 = 655936U;

	t66 = (x4173+(x4174^(x4175<<x4176)));

	if (t66 != 4294753352U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x4229 = 994798841;
	int8_t x4230 = INT8_MIN;
	uint32_t x4231 = 10140406U;
	uint16_t x4232 = 26U;
	volatile uint32_t t67 = 47223U;

	t67 = (x4229+(x4230^(x4231<<x4232)));

	if (t67 != 1665887353U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x4289 = -1LL;
	int64_t x4290 = -1LL;
	uint8_t x4292 = 0U;
	volatile int64_t t68 = -222948548183615890LL;

	t68 = (x4289+(x4290^(x4291<<x4292)));

	if (t68 != -4LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4297 = 26349024LLU;
	static int8_t x4298 = 27;
	static int64_t x4299 = INT64_MAX;
	uint8_t x4300 = 0U;

	t69 = (x4297+(x4298^(x4299<<x4300)));

	if (t69 != 9223372036881124804LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4337 = UINT32_MAX;
	int8_t x4338 = -1;
	uint32_t x4339 = 254123317U;
	static volatile uint8_t x4340 = 3U;

	t70 = (x4337+(x4338^(x4339<<x4340)));

	if (t70 != 2261980758U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4429 = INT32_MIN;
	int32_t x4430 = INT32_MAX;
	int16_t x4431 = 6;
	volatile int32_t t71 = 2;

	t71 = (x4429+(x4430^(x4431<<x4432)));

	if (t71 != -196609) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x4441 = INT8_MIN;
	volatile int16_t x4442 = INT16_MIN;
	volatile uint16_t x4443 = UINT16_MAX;
	uint8_t x4444 = 7U;
	volatile int32_t t72 = -1;

	t72 = (x4441+(x4442^(x4443<<x4444)));

	if (t72 != -8356096) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4469 = INT16_MIN;
	int8_t x4471 = INT8_MAX;
	static uint8_t x4472 = 0U;

	t73 = (x4469+(x4470^(x4471<<x4472)));

	if (t73 != -32641) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4577 = INT16_MAX;
	int8_t x4578 = -1;
	volatile uint16_t x4579 = 63U;
	static uint8_t x4580 = 5U;
	static int32_t t74 = -1;

	t74 = (x4577+(x4578^(x4579<<x4580)));

	if (t74 != 30750) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x4617 = INT16_MIN;
	int64_t x4618 = -1LL;
	static volatile uint32_t x4619 = UINT32_MAX;
	uint8_t x4620 = 7U;
	int64_t t75 = 1687472LL;

	t75 = (x4617+(x4618^(x4619<<x4620)));

	if (t75 != -4294999937LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4685 = 8172094U;
	int8_t x4686 = INT8_MIN;

	t76 = (x4685+(x4686^(x4687<<x4688)));

	if (t76 != 7910070U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x4814 = 2U;
	int32_t x4816 = 0;
	volatile uint64_t t77 = 8491887271151299027LLU;

	t77 = (x4813+(x4814^(x4815<<x4816)));

	if (t77 != 2545267347137LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4825 = 24U;
	uint8_t x4826 = UINT8_MAX;
	static uint8_t x4827 = 0U;
	volatile int8_t x4828 = 2;
	static volatile int32_t t78 = 1;

	t78 = (x4825+(x4826^(x4827<<x4828)));

	if (t78 != 279) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4917 = UINT64_MAX;
	uint16_t x4919 = UINT16_MAX;
	uint8_t x4920 = 3U;
	volatile uint64_t t79 = 716187189125486LLU;

	t79 = (x4917+(x4918^(x4919<<x4920)));

	if (t79 != 2146959366LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x4921 = INT64_MAX;
	uint64_t x4922 = 2LLU;
	int32_t x4923 = 0;
	int8_t x4924 = 6;
	uint64_t t80 = 65378208630674645LLU;

	t80 = (x4921+(x4922^(x4923<<x4924)));

	if (t80 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4937 = INT16_MAX;
	volatile int64_t x4939 = 46594928717891LL;
	int32_t x4940 = 10;
	static uint64_t t81 = 135LLU;

	t81 = (x4937+(x4938^(x4939<<x4940)));

	if (t81 != 435294923532307565LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4977 = UINT32_MAX;
	uint64_t x4979 = 1369016560785LLU;
	uint16_t x4980 = 3U;
	uint64_t t82 = 3446925962390LLU;

	t82 = (x4977+(x4978^(x4979<<x4980)));

	if (t82 != 10956427453575LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4989 = -1;
	int16_t x4990 = -11;
	uint8_t x4992 = 7U;
	volatile uint32_t t83 = 54020U;

	t83 = (x4989+(x4990^(x4991<<x4992)));

	if (t83 != 116U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4993 = INT64_MAX;
	int32_t x4994 = -1;
	uint16_t x4996 = 2U;
	uint64_t t84 = 1221936042241LLU;

	t84 = (x4993+(x4994^(x4995<<x4996)));

	if (t84 != 9091134092577067770LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5097 = 4;
	uint8_t x5098 = UINT8_MAX;
	static uint64_t x5099 = 14LLU;
	static uint16_t x5100 = 6U;
	static volatile uint64_t t85 = 6471374450528641LLU;

	t85 = (x5097+(x5098^(x5099<<x5100)));

	if (t85 != 899LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5313 = INT8_MIN;
	static int32_t x5314 = -1;
	uint32_t x5315 = 2398639U;
	uint32_t t86 = 33185592U;

	t86 = (x5313+(x5314^(x5315<<x5316)));

	if (t86 != 4285372611U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x5341 = 1U;
	static int16_t x5342 = -5;
	uint64_t x5343 = 2334509699446231LLU;

	t87 = (x5341+(x5342^(x5343<<x5344)));

	if (t87 != 18444409564010105389LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x5362 = INT8_MIN;
	uint32_t x5363 = 101355U;

	t88 = (x5361+(x5362^(x5363<<x5364)));

	if (t88 != 4294866026U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5393 = -1167;
	uint64_t x5394 = 42543580LLU;
	uint32_t x5395 = UINT32_MAX;
	int16_t x5396 = 0;
	volatile uint64_t t89 = 65774042681361LLU;

	t89 = (x5393+(x5394^(x5395<<x5396)));

	if (t89 != 4252422548LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x5402 = 25388LLU;
	static int64_t x5403 = 75193000LL;
	uint16_t x5404 = 5U;
	static volatile uint64_t t90 = 77905LLU;

	t90 = (x5401+(x5402^(x5403<<x5404)));

	if (t90 != 2406168107LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5425 = 1U;
	int8_t x5426 = 0;
	uint16_t x5427 = 214U;
	int8_t x5428 = 0;
	volatile int32_t t91 = 5;

	t91 = (x5425+(x5426^(x5427<<x5428)));

	if (t91 != 215) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5537 = UINT64_MAX;
	int16_t x5538 = -8413;
	volatile uint32_t x5539 = 110052531U;
	int8_t x5540 = 0;
	uint64_t t92 = 103739LLU;

	t92 = (x5537+(x5538^(x5539<<x5540)));

	if (t92 != 4184906639LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5638 = INT32_MIN;
	uint32_t x5639 = 916083533U;
	static int8_t x5640 = 8;
	uint32_t t93 = 0U;

	t93 = (x5637+(x5638^(x5639<<x5640)));

	if (t93 != 2589150464U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x5650 = 250;
	uint32_t x5651 = UINT32_MAX;
	uint32_t x5652 = 15U;
	volatile int64_t t94 = 1556097084736LL;

	t94 = (x5649+(x5650^(x5651<<x5652)));

	if (t94 != 4294934769LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5713 = 8539438148LLU;
	uint64_t x5715 = 987269799735315692LLU;

	t95 = (x5713+(x5714^(x5715<<x5716)));

	if (t95 != 7448953792210238787LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x5729 = 15U;
	int8_t x5730 = INT8_MIN;
	static int64_t x5731 = INT64_MAX;
	uint8_t x5732 = 0U;
	volatile int64_t t96 = 6LL;

	t96 = (x5729+(x5730^(x5731<<x5732)));

	if (t96 != -9223372036854775666LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x5801 = INT16_MIN;
	uint8_t x5802 = UINT8_MAX;
	uint16_t x5803 = 6U;
	volatile uint32_t x5804 = 0U;
	static int32_t t97 = 1015506462;

	t97 = (x5801+(x5802^(x5803<<x5804)));

	if (t97 != -32519) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x5821 = UINT8_MAX;
	static int32_t x5822 = INT32_MIN;
	uint8_t x5824 = 6U;
	static int32_t t98 = -146;

	t98 = (x5821+(x5822^(x5823<<x5824)));

	if (t98 != -2147479425) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6049 = 24U;
	uint16_t x6050 = 1271U;
	int64_t x6051 = 31217LL;
	uint64_t x6052 = 2LLU;
	static volatile int64_t t99 = 445867LL;

	t99 = (x6049+(x6050^(x6051<<x6052)));

	if (t99 != 123723LL) { NG(); } else { ; }
	
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

