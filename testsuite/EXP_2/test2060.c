#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 1U;
int8_t x3 = INT8_MIN;
volatile uint16_t x4 = 1U;
int64_t x251 = 22080602652LL;
int64_t t2 = -504143247LL;
uint16_t x348 = 0U;
uint64_t t3 = 432LLU;
int8_t x479 = INT8_MIN;
static uint16_t x508 = 0U;
static volatile int16_t x579 = INT16_MIN;
volatile int16_t x616 = 23;
uint64_t t8 = 15286568LLU;
uint8_t x715 = UINT8_MAX;
uint64_t t11 = 56565432302LLU;
uint32_t t14 = 19U;
int8_t x1080 = 10;
uint8_t x1093 = UINT8_MAX;
volatile uint16_t x1185 = 1U;
int32_t x1186 = -1;
volatile uint16_t x1197 = UINT16_MAX;
static int8_t x1249 = -44;
static volatile uint64_t x1251 = 683113LLU;
int8_t x1273 = INT8_MIN;
volatile uint64_t t23 = 239LLU;
uint16_t x1327 = UINT16_MAX;
uint64_t x1517 = UINT64_MAX;
uint32_t t28 = 7971U;
uint64_t x1722 = 3516LLU;
int16_t x1724 = 11;
uint64_t t31 = 5237930701LLU;
int16_t x1871 = INT16_MIN;
int32_t x2165 = 23123;
volatile uint64_t x2168 = 1LLU;
uint8_t x2196 = 16U;
volatile uint64_t t35 = 130174075399LLU;
uint16_t x2280 = 6U;
int32_t x2322 = 22992;
volatile uint32_t t37 = 1775388887U;
uint64_t x2332 = 21LLU;
uint16_t x2339 = 0U;
static uint64_t t40 = 25944LLU;
uint32_t x2390 = 764327700U;
uint32_t x2391 = 36U;
uint32_t t45 = 46136618U;
static int32_t x2751 = INT32_MIN;
uint32_t x2752 = 3U;
static volatile int8_t x2807 = INT8_MAX;
volatile uint32_t t49 = 2432U;
volatile int32_t x2881 = INT32_MIN;
int16_t x2959 = 747;
static volatile int64_t t56 = -1978272697006524695LL;
uint64_t x3241 = 360045916647LLU;
uint32_t t59 = 130332333U;
volatile int16_t x3339 = INT16_MAX;
uint64_t x3399 = UINT64_MAX;
static int8_t x3497 = INT8_MIN;
static int8_t x3500 = 0;
static volatile int32_t x3518 = -1;
int64_t t63 = 85759893761LL;
uint8_t x3741 = UINT8_MAX;
int64_t x3807 = -768890331LL;
int32_t x3863 = 40;
volatile uint64_t t68 = 399211566334840LLU;
static int64_t x4130 = 213915362984521LL;
int64_t t70 = -4257225007198525811LL;
volatile int16_t x4249 = -1;
volatile uint32_t x4252 = 1U;
static volatile uint32_t t75 = 237324U;
int32_t x4965 = INT32_MIN;
uint32_t x4966 = 329U;
int32_t x4967 = INT32_MIN;
volatile uint64_t x5065 = 88471354844LLU;
int8_t x5087 = INT8_MAX;
volatile int8_t x5088 = 0;
uint8_t x5360 = 0U;
volatile uint64_t x5579 = UINT64_MAX;
volatile uint8_t x5627 = UINT8_MAX;
uint64_t t87 = 596955747LLU;
static uint16_t x5754 = UINT16_MAX;
volatile uint16_t x5756 = 53U;
int16_t x5763 = INT16_MIN;
uint64_t t89 = 90841437LLU;
int64_t x5845 = 3407LL;
volatile uint32_t x5935 = UINT32_MAX;
static uint8_t x5991 = UINT8_MAX;
volatile int64_t t93 = 474027LL;
uint16_t x6042 = UINT16_MAX;
volatile uint8_t x6044 = 52U;
int32_t x6145 = -1;
int64_t x6219 = -20257780857603989LL;
volatile int8_t x6220 = 1;


void f0(void) {
	uint8_t x1 = 1U;
	static volatile uint32_t t0 = 533783U;

	t0 = ((x1*(x2^x3))<<x4);

	if (t0 != 4294967042U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x173 = 0;
	volatile int16_t x174 = -12;
	volatile int64_t x175 = INT64_MIN;
	static uint8_t x176 = 23U;
	static volatile int64_t t1 = -63686040340LL;

	t1 = ((x173*(x174^x175))<<x176);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x249 = 105U;
	uint8_t x250 = 67U;
	uint8_t x252 = 9U;

	t2 = ((x249*(x250^x251))<<x252);

	if (t2 != 1187053202173440LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x345 = -1;
	volatile uint64_t x346 = UINT64_MAX;
	volatile int32_t x347 = 15038328;

	t3 = ((x345*(x346^x347))<<x348);

	if (t3 != 15038329LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x477 = UINT64_MAX;
	uint16_t x478 = 1U;
	uint64_t x480 = 1LLU;
	uint64_t t4 = 945711803446759678LLU;

	t4 = ((x477*(x478^x479))<<x480);

	if (t4 != 254LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x485 = INT16_MAX;
	uint64_t x486 = 574097367278098975LLU;
	static uint32_t x487 = 3698U;
	uint8_t x488 = 6U;
	uint64_t t5 = 66311773485449LLU;

	t5 = ((x485*(x486^x487))<<x488);

	if (t5 != 5947779837079512256LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x505 = 29U;
	uint64_t x506 = 3262372LLU;
	static volatile uint32_t x507 = UINT32_MAX;
	volatile uint64_t t6 = 3517243456118291LLU;

	t6 = ((x505*(x506^x507))<<x508);

	if (t6 != 124459442767LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x577 = UINT64_MAX;
	int16_t x578 = -1;
	uint8_t x580 = 2U;
	volatile uint64_t t7 = 140965270334579LLU;

	t7 = ((x577*(x578^x579))<<x580);

	if (t7 != 18446744073709420548LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x613 = UINT8_MAX;
	static uint64_t x614 = UINT64_MAX;
	int8_t x615 = -42;

	t8 = ((x613*(x614^x615))<<x616);

	if (t8 != 87702896640LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x653 = -2415336;
	uint16_t x654 = UINT16_MAX;
	uint64_t x655 = 174216961275239LLU;
	uint16_t x656 = 3U;
	volatile uint64_t t9 = 1154LLU;

	t9 = ((x653*(x654^x655))<<x656);

	if (t9 != 9414177721331200512LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x657 = 48708U;
	int16_t x658 = 0;
	volatile int16_t x659 = INT16_MIN;
	uint8_t x660 = 8U;
	uint32_t t10 = 23U;

	t10 = ((x657*(x658^x659))<<x660);

	if (t10 != 3724541952U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x713 = UINT64_MAX;
	int64_t x714 = -3922538131096LL;
	uint8_t x716 = 1U;

	t11 = ((x713*(x714^x715))<<x716);

	if (t11 != 7845076262098LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x829 = INT8_MIN;
	uint32_t x830 = 4641892U;
	uint8_t x831 = 6U;
	uint16_t x832 = 27U;
	uint32_t t12 = 0U;

	t12 = ((x829*(x830^x831))<<x832);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x841 = UINT8_MAX;
	static uint8_t x842 = 1U;
	static uint8_t x843 = 97U;
	uint32_t x844 = 0U;
	volatile int32_t t13 = -15;

	t13 = ((x841*(x842^x843))<<x844);

	if (t13 != 24480) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x865 = INT16_MAX;
	uint32_t x866 = 33029187U;
	volatile uint8_t x867 = 3U;
	uint16_t x868 = 0U;

	t14 = ((x865*(x866^x867))<<x868);

	if (t14 != 4230480832U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x969 = 3859990365738569LLU;
	int16_t x970 = INT16_MAX;
	uint64_t x971 = 32749033LLU;
	volatile uint8_t x972 = 6U;
	uint64_t t15 = 37233065826LLU;

	t15 = ((x969*(x970^x971))<<x972);

	if (t15 != 4823707258068210048LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x1077 = 6403130LLU;
	int16_t x1078 = 2243;
	volatile uint16_t x1079 = UINT16_MAX;
	volatile uint64_t t16 = 41622160LLU;

	t16 = ((x1077*(x1078^x1079))<<x1080);

	if (t16 != 414993309655040LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1094 = INT16_MIN;
	static int16_t x1095 = -1;
	static uint64_t x1096 = 0LLU;
	static int32_t t17 = 11407;

	t17 = ((x1093*(x1094^x1095))<<x1096);

	if (t17 != 8355585) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1097 = 1768;
	volatile uint64_t x1098 = 31LLU;
	volatile uint32_t x1099 = 10700807U;
	volatile uint8_t x1100 = 0U;
	uint64_t t18 = 3606210LLU;

	t18 = ((x1097*(x1098^x1099))<<x1100);

	if (t18 != 18919056832LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x1177 = INT32_MIN;
	static uint64_t x1178 = 80707807LLU;
	volatile int8_t x1179 = INT8_MIN;
	uint8_t x1180 = 22U;
	volatile uint64_t t19 = 228525850044LLU;

	t19 = ((x1177*(x1178^x1179))<<x1180);

	if (t19 != 1450159080013299712LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1187 = 29856272LLU;
	uint8_t x1188 = 12U;
	uint64_t t20 = 457420963832LLU;

	t20 = ((x1185*(x1186^x1187))<<x1188);

	if (t20 != 18446743951418257408LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1198 = INT16_MIN;
	volatile int16_t x1199 = INT16_MIN;
	static uint16_t x1200 = 12U;
	volatile int32_t t21 = -28011;

	t21 = ((x1197*(x1198^x1199))<<x1200);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1250 = INT64_MIN;
	uint8_t x1252 = 0U;
	volatile uint64_t t22 = 6869663119114LLU;

	t22 = ((x1249*(x1250^x1251))<<x1252);

	if (t22 != 18446744073679494644LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1274 = 7177009;
	volatile uint64_t x1275 = 10928666LLU;
	int8_t x1276 = 57;

	t23 = ((x1273*(x1274^x1275))<<x1276);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1325 = 5;
	static uint32_t x1326 = UINT32_MAX;
	uint8_t x1328 = 3U;
	static uint32_t t24 = 11008U;

	t24 = ((x1325*(x1326^x1327))<<x1328);

	if (t24 != 4292345856U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1365 = 1;
	uint64_t x1366 = 602368624045LLU;
	static volatile int32_t x1367 = -1;
	uint16_t x1368 = 1U;
	volatile uint64_t t25 = 3225506677089004LLU;

	t25 = ((x1365*(x1366^x1367))<<x1368);

	if (t25 != 18446742868972303524LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1518 = 14U;
	int32_t x1519 = -69611;
	volatile uint8_t x1520 = 3U;
	uint64_t t26 = 7LLU;

	t26 = ((x1517*(x1518^x1519))<<x1520);

	if (t26 != 556840LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1565 = INT8_MAX;
	static volatile uint32_t x1566 = 175357837U;
	static uint16_t x1567 = 102U;
	int64_t x1568 = 6LL;
	uint32_t t27 = 0U;

	t27 = ((x1565*(x1566^x1567))<<x1568);

	if (t27 != 3675088192U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1601 = INT32_MIN;
	int8_t x1602 = -19;
	uint32_t x1603 = UINT32_MAX;
	static uint8_t x1604 = 2U;

	t28 = ((x1601*(x1602^x1603))<<x1604);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1649 = INT8_MAX;
	uint64_t x1650 = UINT64_MAX;
	uint64_t x1651 = UINT64_MAX;
	int16_t x1652 = 6;
	volatile uint64_t t29 = 1525176899LLU;

	t29 = ((x1649*(x1650^x1651))<<x1652);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1717 = INT64_MAX;
	int8_t x1718 = -1;
	static int32_t x1719 = -1;
	uint16_t x1720 = 14U;
	volatile int64_t t30 = 5931845803680812LL;

	t30 = ((x1717*(x1718^x1719))<<x1720);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1721 = 76U;
	uint32_t x1723 = 2276U;

	t31 = ((x1721*(x1722^x1723))<<x1724);

	if (t31 != 212926464LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1809 = INT8_MIN;
	uint64_t x1810 = 7503LLU;
	volatile int64_t x1811 = -1LL;
	uint16_t x1812 = 0U;
	volatile uint64_t t32 = 62908176531093970LLU;

	t32 = ((x1809*(x1810^x1811))<<x1812);

	if (t32 != 960512LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1869 = 4U;
	volatile int32_t x1870 = -1;
	uint8_t x1872 = 7U;
	static volatile int32_t t33 = -37;

	t33 = ((x1869*(x1870^x1871))<<x1872);

	if (t33 != 16776704) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x2166 = 20;
	uint8_t x2167 = UINT8_MAX;
	int32_t t34 = -3536;

	t34 = ((x2165*(x2166^x2167))<<x2168);

	if (t34 != 10867810) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2193 = INT32_MAX;
	int64_t x2194 = INT64_MIN;
	uint64_t x2195 = 370LLU;

	t35 = ((x2193*(x2194^x2195))<<x2196);

	if (t35 != 52072870667223040LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2277 = INT8_MAX;
	uint32_t x2278 = 353887U;
	volatile int32_t x2279 = INT32_MAX;
	volatile uint32_t t36 = 964289U;

	t36 = ((x2277*(x2278^x2279))<<x2280);

	if (t36 != 1418565632U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2321 = 14201U;
	static volatile int32_t x2323 = INT32_MIN;
	static int8_t x2324 = 0;

	t37 = ((x2321*(x2322^x2323))<<x2324);

	if (t37 != 2473993040U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2329 = UINT32_MAX;
	volatile int16_t x2330 = INT16_MIN;
	int32_t x2331 = 0;
	uint32_t t38 = 3U;

	t38 = ((x2329*(x2330^x2331))<<x2332);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x2337 = 1573935453U;
	uint64_t x2338 = UINT64_MAX;
	int8_t x2340 = 1;
	volatile uint64_t t39 = 410427930LLU;

	t39 = ((x2337*(x2338^x2339))<<x2340);

	if (t39 != 18446744070561680710LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x2361 = 5310LLU;
	static int32_t x2362 = -1;
	static int16_t x2363 = -1;
	volatile int32_t x2364 = 3;

	t40 = ((x2361*(x2362^x2363))<<x2364);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2389 = UINT32_MAX;
	volatile uint8_t x2392 = 12U;
	uint32_t t41 = 3842996U;

	t41 = ((x2389*(x2390^x2391))<<x2392);

	if (t41 != 344784896U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2453 = 48;
	int32_t x2454 = INT32_MIN;
	uint64_t x2455 = UINT64_MAX;
	static volatile uint8_t x2456 = 7U;
	uint64_t t42 = 1406741774146LLU;

	t42 = ((x2453*(x2454^x2455))<<x2456);

	if (t42 != 13194139527168LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x2465 = 5U;
	uint32_t x2466 = 149985U;
	uint32_t x2467 = 72664900U;
	static volatile uint32_t x2468 = 3U;
	volatile uint32_t t43 = 20925U;

	t43 = ((x2465*(x2466^x2467))<<x2468);

	if (t43 != 2911259080U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2525 = -1;
	volatile int8_t x2526 = -1;
	uint64_t x2527 = 0LLU;
	static volatile int32_t x2528 = 2;
	uint64_t t44 = 1573863933833LLU;

	t44 = ((x2525*(x2526^x2527))<<x2528);

	if (t44 != 4LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2605 = 174U;
	int32_t x2606 = INT32_MIN;
	static uint32_t x2607 = 2243788U;
	static int16_t x2608 = 12;

	t45 = ((x2605*(x2606^x2607))<<x2608);

	if (t45 != 1428848640U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2705 = 7U;
	uint64_t x2706 = UINT64_MAX;
	uint32_t x2707 = 407U;
	uint16_t x2708 = 3U;
	volatile uint64_t t46 = 71178619441LLU;

	t46 = ((x2705*(x2706^x2707))<<x2708);

	if (t46 != 18446744073709528768LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2749 = UINT8_MAX;
	uint32_t x2750 = 70973U;
	volatile uint32_t t47 = 2U;

	t47 = ((x2749*(x2750^x2751))<<x2752);

	if (t47 != 144784920U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2805 = -1;
	int32_t x2806 = -25190;
	uint8_t x2808 = 1U;
	int32_t t48 = 23570;

	t48 = ((x2805*(x2806^x2807))<<x2808);

	if (t48 != 50230) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x2809 = -1;
	uint32_t x2810 = UINT32_MAX;
	static int16_t x2811 = INT16_MAX;
	volatile int32_t x2812 = 2;

	t49 = ((x2809*(x2810^x2811))<<x2812);

	if (t49 != 131072U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2853 = INT16_MIN;
	int8_t x2854 = 1;
	uint64_t x2855 = UINT64_MAX;
	int16_t x2856 = 1;
	volatile uint64_t t50 = 14098161496LLU;

	t50 = ((x2853*(x2854^x2855))<<x2856);

	if (t50 != 131072LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2882 = -1;
	int32_t x2883 = -1;
	uint8_t x2884 = 2U;
	volatile int32_t t51 = -122;

	t51 = ((x2881*(x2882^x2883))<<x2884);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2897 = UINT64_MAX;
	int64_t x2898 = INT64_MAX;
	volatile uint8_t x2899 = 25U;
	int16_t x2900 = 2;
	uint64_t t52 = 1225765LLU;

	t52 = ((x2897*(x2898^x2899))<<x2900);

	if (t52 != 104LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2957 = 2;
	int8_t x2958 = 0;
	uint8_t x2960 = 1U;
	volatile int32_t t53 = 572;

	t53 = ((x2957*(x2958^x2959))<<x2960);

	if (t53 != 2988) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2965 = UINT64_MAX;
	static int16_t x2966 = -1;
	int8_t x2967 = 6;
	uint16_t x2968 = 2U;
	uint64_t t54 = 665603627904LLU;

	t54 = ((x2965*(x2966^x2967))<<x2968);

	if (t54 != 28LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2977 = INT16_MIN;
	volatile uint64_t x2978 = 2807LLU;
	int8_t x2979 = -2;
	static volatile int8_t x2980 = 0;
	uint64_t t55 = 7369LLU;

	t55 = ((x2977*(x2978^x2979))<<x2980);

	if (t55 != 91979776LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x3057 = 56943312;
	int64_t x3058 = 289LL;
	static uint16_t x3059 = 460U;
	static uint8_t x3060 = 1U;

	t56 = ((x3057*(x3058^x3059))<<x3060);

	if (t56 != 26991129888LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3065 = -91509360;
	int8_t x3066 = 0;
	int16_t x3067 = -1;
	int8_t x3068 = 1;
	volatile int32_t t57 = 162994700;

	t57 = ((x3065*(x3066^x3067))<<x3068);

	if (t57 != 183018720) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3242 = 1514897246U;
	int64_t x3243 = INT64_MAX;
	static uint8_t x3244 = 6U;
	volatile uint64_t t58 = 703692794LLU;

	t58 = ((x3241*(x3242^x3243))<<x3244);

	if (t58 != 12002184515747877312LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3277 = INT16_MIN;
	int16_t x3278 = INT16_MIN;
	static uint32_t x3279 = UINT32_MAX;
	int8_t x3280 = 31;

	t59 = ((x3277*(x3278^x3279))<<x3280);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x3337 = INT32_MIN;
	uint32_t x3338 = 689U;
	uint8_t x3340 = 3U;
	volatile uint32_t t60 = 0U;

	t60 = ((x3337*(x3338^x3339))<<x3340);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x3397 = INT32_MIN;
	int16_t x3398 = -1;
	uint8_t x3400 = 4U;
	uint64_t t61 = 6390LLU;

	t61 = ((x3397*(x3398^x3399))<<x3400);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3498 = 12;
	uint32_t x3499 = 23452160U;
	volatile uint32_t t62 = 0U;

	t62 = ((x3497*(x3498^x3499))<<x3500);

	if (t62 != 1293089280U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3517 = -1LL;
	int64_t x3519 = 15220LL;
	static int16_t x3520 = 1;

	t63 = ((x3517*(x3518^x3519))<<x3520);

	if (t63 != 30442LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3529 = INT8_MIN;
	int8_t x3530 = -37;
	uint16_t x3531 = UINT16_MAX;
	static int8_t x3532 = 1;
	int32_t t64 = 1001;

	t64 = ((x3529*(x3530^x3531))<<x3532);

	if (t64 != 16768000) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x3593 = 200468531705915LLU;
	static uint64_t x3594 = 15069716017LLU;
	int64_t x3595 = -5413631LL;
	uint8_t x3596 = 0U;
	volatile uint64_t t65 = 343575LLU;

	t65 = ((x3593*(x3594^x3595))<<x3596);

	if (t65 != 16045953096983798800LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3742 = INT32_MIN;
	int64_t x3743 = -5707LL;
	volatile uint32_t x3744 = 3U;
	int64_t t66 = -27655767LL;

	t66 = ((x3741*(x3742^x3743))<<x3744);

	if (t66 != 4380854999640LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3805 = 4001671U;
	static int8_t x3806 = -19;
	static uint32_t x3808 = 3U;
	volatile int64_t t67 = -8721160992LL;

	t67 = ((x3805*(x3806^x3807))<<x3808);

	if (t67 != 24614768509690816LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3861 = -1;
	uint64_t x3862 = UINT64_MAX;
	int8_t x3864 = 12;

	t68 = ((x3861*(x3862^x3863))<<x3864);

	if (t68 != 167936LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4109 = UINT64_MAX;
	uint32_t x4110 = 33U;
	int64_t x4111 = -1LL;
	static volatile uint32_t x4112 = 3U;
	uint64_t t69 = 19112335521LLU;

	t69 = ((x4109*(x4110^x4111))<<x4112);

	if (t69 != 272LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4129 = -5;
	volatile int16_t x4131 = INT16_MIN;
	int8_t x4132 = 0;

	t70 = ((x4129*(x4130^x4131))<<x4132);

	if (t70 != 1069576815080595LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4250 = -1;
	int32_t x4251 = 34160886;
	volatile int32_t t71 = -2055063;

	t71 = ((x4249*(x4250^x4251))<<x4252);

	if (t71 != 68321774) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x4441 = UINT64_MAX;
	uint64_t x4442 = 40967LLU;
	static volatile int32_t x4443 = 5166676;
	int8_t x4444 = 3;
	uint64_t t72 = 3178975624LLU;

	t72 = ((x4441*(x4442^x4443))<<x4444);

	if (t72 != 18446744073668414824LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4529 = 820355U;
	int16_t x4530 = -1;
	static uint32_t x4531 = 102U;
	int16_t x4532 = 0;
	static uint32_t t73 = 108025939U;

	t73 = ((x4529*(x4530^x4531))<<x4532);

	if (t73 != 4210470731U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4745 = 0U;
	volatile uint32_t x4746 = UINT32_MAX;
	int8_t x4747 = -1;
	uint8_t x4748 = 3U;
	volatile uint32_t t74 = 48329390U;

	t74 = ((x4745*(x4746^x4747))<<x4748);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x4833 = 24U;
	int8_t x4834 = 0;
	volatile uint32_t x4835 = 37253526U;
	int32_t x4836 = 8;

	t75 = ((x4833*(x4834^x4835))<<x4836);

	if (t75 != 1252397056U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4968 = 13;
	volatile uint32_t t76 = 68017U;

	t76 = ((x4965*(x4966^x4967))<<x4968);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5066 = INT16_MIN;
	static uint16_t x5067 = UINT16_MAX;
	uint8_t x5068 = 5U;
	uint64_t t77 = 470523668596LLU;

	t77 = ((x5065*(x5066^x5067))<<x5068);

	if (t77 != 18353972303249294464LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5085 = -1LL;
	volatile int64_t x5086 = INT64_MIN;
	int64_t t78 = 3LL;

	t78 = ((x5085*(x5086^x5087))<<x5088);

	if (t78 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5161 = -1476;
	volatile uint8_t x5162 = 15U;
	int16_t x5163 = INT16_MIN;
	uint8_t x5164 = 3U;
	int32_t t79 = -1;

	t79 = ((x5161*(x5162^x5163))<<x5164);

	if (t79 != 386747424) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x5165 = 754941022U;
	int8_t x5166 = -14;
	static volatile int16_t x5167 = INT16_MIN;
	uint16_t x5168 = 0U;
	static uint32_t t80 = 373U;

	t80 = ((x5165*(x5166^x5167))<<x5168);

	if (t80 != 1211511516U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x5305 = INT64_MAX;
	static uint64_t x5306 = 29786856156LLU;
	int8_t x5307 = INT8_MIN;
	uint8_t x5308 = 0U;
	uint64_t t81 = 2431LLU;

	t81 = ((x5305*(x5306^x5307))<<x5308);

	if (t81 != 29786856100LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5357 = 5152303798LLU;
	int16_t x5358 = INT16_MIN;
	uint8_t x5359 = 17U;
	volatile uint64_t t82 = 4681394372010LLU;

	t82 = ((x5357*(x5358^x5359))<<x5360);

	if (t82 != 18446575330607863318LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5417 = -1;
	int16_t x5418 = INT16_MIN;
	uint8_t x5419 = 39U;
	int8_t x5420 = 1;
	volatile int32_t t83 = 3662835;

	t83 = ((x5417*(x5418^x5419))<<x5420);

	if (t83 != 65458) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5437 = -1;
	int16_t x5438 = INT16_MIN;
	static uint16_t x5439 = 791U;
	uint32_t x5440 = 0U;
	int32_t t84 = 3836069;

	t84 = ((x5437*(x5438^x5439))<<x5440);

	if (t84 != 31977) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x5529 = 2402312U;
	int32_t x5530 = -1;
	uint16_t x5531 = UINT16_MAX;
	uint8_t x5532 = 7U;
	uint32_t t85 = 765471U;

	t85 = ((x5529*(x5530^x5531))<<x5532);

	if (t85 != 4227858432U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5577 = 7U;
	uint16_t x5578 = 5379U;
	uint8_t x5580 = 21U;
	volatile uint64_t t86 = 109LLU;

	t86 = ((x5577*(x5578^x5579))<<x5580);

	if (t86 != 18446743994730807296LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5625 = UINT64_MAX;
	int32_t x5626 = INT32_MAX;
	uint8_t x5628 = 44U;

	t87 = ((x5625*(x5626^x5627))<<x5628);

	if (t87 != 4503599627370496LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x5753 = INT64_MIN;
	volatile uint64_t x5755 = 29990565LLU;
	volatile uint64_t t88 = 3548349585341681LLU;

	t88 = ((x5753*(x5754^x5755))<<x5756);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5761 = UINT64_MAX;
	int16_t x5762 = INT16_MIN;
	volatile int8_t x5764 = 11;

	t89 = ((x5761*(x5762^x5763))<<x5764);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5846 = UINT64_MAX;
	uint32_t x5847 = 146588457U;
	int8_t x5848 = 1;
	volatile uint64_t t90 = 826049192330LLU;

	t90 = ((x5845*(x5846^x5847))<<x5848);

	if (t90 != 18446743074855798804LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x5877 = 0;
	int64_t x5878 = INT64_MAX;
	static int8_t x5879 = INT8_MAX;
	uint32_t x5880 = 1U;
	int64_t t91 = -7348424122732508LL;

	t91 = ((x5877*(x5878^x5879))<<x5880);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5933 = INT64_MAX;
	int8_t x5934 = -1;
	int16_t x5936 = 3;
	int64_t t92 = 18707653149LL;

	t92 = ((x5933*(x5934^x5935))<<x5936);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5989 = -1;
	static int64_t x5990 = -1LL;
	static uint16_t x5992 = 1U;

	t93 = ((x5989*(x5990^x5991))<<x5992);

	if (t93 != 512LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x6041 = UINT64_MAX;
	int8_t x6043 = 0;
	volatile uint64_t t94 = 14335960928LLU;

	t94 = ((x6041*(x6042^x6043))<<x6044);

	if (t94 != 4503599627370496LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6053 = UINT8_MAX;
	static volatile int16_t x6054 = -2;
	int16_t x6055 = INT16_MIN;
	uint8_t x6056 = 0U;
	int32_t t95 = -663;

	t95 = ((x6053*(x6054^x6055))<<x6056);

	if (t95 != 8355330) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6105 = -30;
	uint32_t x6106 = 36417U;
	static volatile uint64_t x6107 = 6168657736LLU;
	uint8_t x6108 = 15U;
	volatile uint64_t t96 = 349782122119LLU;

	t96 = ((x6105*(x6106^x6107))<<x6108);

	if (t96 != 18440680007781646336LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6113 = -1;
	uint32_t x6114 = 6U;
	int32_t x6115 = -1;
	uint8_t x6116 = 1U;
	static volatile uint32_t t97 = 104323U;

	t97 = ((x6113*(x6114^x6115))<<x6116);

	if (t97 != 14U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x6146 = INT16_MIN;
	int16_t x6147 = 1;
	uint8_t x6148 = 1U;
	volatile int32_t t98 = 26683;

	t98 = ((x6145*(x6146^x6147))<<x6148);

	if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6217 = -1LL;
	int16_t x6218 = 42;
	volatile int64_t t99 = 9044LL;

	t99 = ((x6217*(x6218^x6219))<<x6220);

	if (t99 != 40515561715208062LL) { NG(); } else { ; }
	
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

