#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -39;
int8_t x71 = 1;
uint32_t x86 = UINT32_MAX;
static volatile int64_t x125 = 20045335LL;
int32_t x126 = 8150260;
static int32_t t5 = 432054670;
uint16_t x419 = 2U;
uint32_t x517 = 28745U;
volatile uint64_t x518 = 4872965607296096LLU;
volatile int32_t t9 = 63;
int32_t t11 = -133016415;
uint8_t x838 = UINT8_MAX;
volatile int16_t x995 = 1;
int64_t x1107 = 1LL;
uint8_t x1381 = 10U;
int64_t x1382 = INT64_MAX;
uint64_t x1384 = UINT64_MAX;
static uint8_t x1427 = 1U;
static uint32_t x1428 = UINT32_MAX;
int32_t t21 = 502;
static volatile int32_t x1463 = 0;
int16_t x1505 = INT16_MIN;
int64_t x1666 = INT64_MAX;
int32_t x1668 = INT32_MIN;
int32_t t26 = 6;
int64_t x1865 = 1265630LL;
int16_t x1896 = -2;
uint32_t x1923 = 0U;
volatile uint64_t x1924 = UINT64_MAX;
volatile uint16_t x1930 = UINT16_MAX;
volatile int32_t t32 = -17628633;
volatile uint32_t x2079 = 34U;
uint8_t x2159 = 1U;
volatile int32_t t34 = 3;
uint64_t x2217 = 3539456920924906084LLU;
uint64_t x2218 = 4996329861867LLU;
int16_t x2220 = 3963;
uint16_t x2230 = UINT16_MAX;
int8_t x2243 = 5;
int32_t t42 = 3979030;
int64_t x2764 = -1009242181866449LL;
volatile int32_t x2969 = 886474;
static volatile uint8_t x2983 = 0U;
static volatile uint32_t x3069 = 2047937282U;
static uint8_t x3070 = UINT8_MAX;
uint32_t x3106 = 7131U;
volatile int32_t t48 = -153930;
static uint16_t x3143 = 4U;
static int32_t x3258 = 344;
int16_t x3272 = -1;
volatile uint32_t x3362 = UINT32_MAX;
int8_t x3419 = 20;
int32_t t53 = -117524;
int64_t x3465 = -1796119764LL;
static volatile int32_t x3673 = -1;
static volatile int16_t x3675 = 0;
uint64_t x3676 = 778688140406LLU;
int32_t t56 = 635;
static uint32_t x3737 = UINT32_MAX;
static uint16_t x3738 = UINT16_MAX;
int32_t t60 = 7;
static volatile int32_t t61 = 2;
volatile int8_t x4111 = 2;
static volatile int32_t t63 = 398512;
uint8_t x4261 = 0U;
volatile uint8_t x4263 = 4U;
int8_t x4368 = INT8_MIN;
uint64_t x4389 = 61408LLU;
volatile uint8_t x4391 = 30U;
volatile int8_t x4425 = -61;
int32_t x4430 = 108945654;
int8_t x4431 = 6;
volatile int32_t t69 = 9559;
volatile int8_t x4487 = 0;
volatile int32_t t70 = -1;
uint64_t x4578 = 79287783704077271LLU;
int32_t x4657 = INT32_MIN;
volatile uint64_t x4862 = 438146LLU;
int64_t x5021 = INT64_MIN;
static int16_t x5024 = -112;
uint32_t x5159 = 2U;
uint16_t x5378 = 7245U;
volatile int32_t x5456 = INT32_MIN;
int64_t x5465 = -1089996724717159739LL;
uint16_t x5586 = UINT16_MAX;
int32_t t88 = -9051;
uint64_t x5702 = UINT64_MAX;
uint32_t x5703 = 39U;
volatile int64_t x5704 = -10811044955541LL;
int64_t x5797 = INT64_MIN;
int8_t x5798 = INT8_MAX;
int32_t x5817 = INT32_MIN;
uint64_t x5917 = UINT64_MAX;
uint32_t x5925 = 0U;
uint64_t x5926 = 20344LLU;
int32_t x5927 = 6;
int64_t x6092 = -1LL;
uint64_t x6110 = 1016465LLU;
static volatile int32_t t98 = -6024;
static volatile int32_t t99 = -63167879;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = UINT32_MAX;
	static uint8_t x3 = 1U;
	int32_t t0 = 395667;

	t0 = ((x1/(x2>>x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x69 = 4U;
	uint16_t x70 = 43U;
	uint16_t x72 = 198U;
	volatile int32_t t1 = -984;

	t1 = ((x69/(x70>>x71))<=x72);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x85 = INT8_MAX;
	volatile int8_t x87 = 10;
	int32_t x88 = INT32_MIN;
	volatile int32_t t2 = 15302884;

	t2 = ((x85/(x86>>x87))<=x88);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x127 = 1U;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t3 = -278;

	t3 = ((x125/(x126>>x127))<=x128);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x201 = 131U;
	static int64_t x202 = INT64_MAX;
	uint8_t x203 = 12U;
	uint32_t x204 = 51138732U;
	static int32_t t4 = -93204;

	t4 = ((x201/(x202>>x203))<=x204);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x285 = UINT64_MAX;
	volatile int64_t x286 = INT64_MAX;
	volatile uint8_t x287 = 1U;
	uint64_t x288 = 68113957372692LLU;

	t5 = ((x285/(x286>>x287))<=x288);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x417 = INT8_MIN;
	uint16_t x418 = 158U;
	static int64_t x420 = 21006441332LL;
	volatile int32_t t6 = 1;

	t6 = ((x417/(x418>>x419))<=x420);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x519 = 4U;
	volatile uint64_t x520 = 1LLU;
	int32_t t7 = -1856214;

	t7 = ((x517/(x518>>x519))<=x520);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x733 = 41U;
	int8_t x734 = INT8_MAX;
	uint8_t x735 = 2U;
	int8_t x736 = 42;
	int32_t t8 = 4;

	t8 = ((x733/(x734>>x735))<=x736);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x757 = 12914625954378862LLU;
	int64_t x758 = INT64_MAX;
	uint8_t x759 = 0U;
	static int8_t x760 = INT8_MIN;

	t9 = ((x757/(x758>>x759))<=x760);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x789 = -62;
	uint64_t x790 = UINT64_MAX;
	uint64_t x791 = 4LLU;
	static int32_t x792 = INT32_MIN;
	int32_t t10 = -8644571;

	t10 = ((x789/(x790>>x791))<=x792);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x809 = 13937711510811845LLU;
	int64_t x810 = 30810912LL;
	static int8_t x811 = 1;
	int64_t x812 = -1LL;

	t11 = ((x809/(x810>>x811))<=x812);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x837 = INT16_MAX;
	uint8_t x839 = 2U;
	volatile uint64_t x840 = 282943504LLU;
	static volatile int32_t t12 = 1;

	t12 = ((x837/(x838>>x839))<=x840);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x993 = UINT64_MAX;
	volatile uint8_t x994 = 3U;
	int8_t x996 = 1;
	volatile int32_t t13 = 222;

	t13 = ((x993/(x994>>x995))<=x996);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1105 = INT16_MIN;
	volatile int64_t x1106 = 761441490191241380LL;
	uint64_t x1108 = 63120477673817LLU;
	int32_t t14 = 5;

	t14 = ((x1105/(x1106>>x1107))<=x1108);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1197 = INT8_MAX;
	uint8_t x1198 = UINT8_MAX;
	uint8_t x1199 = 1U;
	volatile uint64_t x1200 = UINT64_MAX;
	volatile int32_t t15 = 14;

	t15 = ((x1197/(x1198>>x1199))<=x1200);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1249 = 751U;
	int64_t x1250 = 1869483467898LL;
	uint64_t x1251 = 0LLU;
	int8_t x1252 = INT8_MIN;
	volatile int32_t t16 = -920;

	t16 = ((x1249/(x1250>>x1251))<=x1252);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x1253 = INT8_MIN;
	int64_t x1254 = 355123LL;
	uint64_t x1255 = 8LLU;
	static int8_t x1256 = INT8_MIN;
	static int32_t t17 = -6209;

	t17 = ((x1253/(x1254>>x1255))<=x1256);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1261 = 235310598;
	uint32_t x1262 = 7592U;
	int8_t x1263 = 0;
	int64_t x1264 = INT64_MIN;
	volatile int32_t t18 = -3958976;

	t18 = ((x1261/(x1262>>x1263))<=x1264);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1383 = 0U;
	volatile int32_t t19 = -189990184;

	t19 = ((x1381/(x1382>>x1383))<=x1384);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1397 = 24;
	volatile uint32_t x1398 = UINT32_MAX;
	static uint16_t x1399 = 18U;
	volatile uint64_t x1400 = 307LLU;
	volatile int32_t t20 = 847666;

	t20 = ((x1397/(x1398>>x1399))<=x1400);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1425 = 234911999LLU;
	static uint32_t x1426 = 743039210U;

	t21 = ((x1425/(x1426>>x1427))<=x1428);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1461 = INT16_MIN;
	static int32_t x1462 = 520914;
	int64_t x1464 = INT64_MIN;
	static int32_t t22 = 96800104;

	t22 = ((x1461/(x1462>>x1463))<=x1464);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1506 = INT16_MAX;
	int8_t x1507 = 1;
	uint64_t x1508 = UINT64_MAX;
	int32_t t23 = -46203536;

	t23 = ((x1505/(x1506>>x1507))<=x1508);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1665 = -1;
	static int16_t x1667 = 21;
	int32_t t24 = -1;

	t24 = ((x1665/(x1666>>x1667))<=x1668);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1677 = INT32_MIN;
	int16_t x1678 = INT16_MAX;
	int64_t x1679 = 13LL;
	int8_t x1680 = INT8_MIN;
	volatile int32_t t25 = 516600;

	t25 = ((x1677/(x1678>>x1679))<=x1680);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1693 = INT64_MIN;
	uint16_t x1694 = UINT16_MAX;
	int8_t x1695 = 1;
	int32_t x1696 = INT32_MIN;

	t26 = ((x1693/(x1694>>x1695))<=x1696);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1857 = -2;
	int32_t x1858 = INT32_MAX;
	static uint8_t x1859 = 13U;
	volatile int32_t x1860 = -715;
	int32_t t27 = -255708;

	t27 = ((x1857/(x1858>>x1859))<=x1860);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1866 = 68U;
	int16_t x1867 = 4;
	static int16_t x1868 = -99;
	volatile int32_t t28 = 100060866;

	t28 = ((x1865/(x1866>>x1867))<=x1868);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1893 = INT16_MIN;
	volatile uint64_t x1894 = UINT64_MAX;
	int8_t x1895 = 24;
	static volatile int32_t t29 = -562737;

	t29 = ((x1893/(x1894>>x1895))<=x1896);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1921 = INT16_MIN;
	uint32_t x1922 = 265755240U;
	volatile int32_t t30 = 1;

	t30 = ((x1921/(x1922>>x1923))<=x1924);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1929 = -1;
	volatile uint8_t x1931 = 0U;
	int64_t x1932 = -1LL;
	volatile int32_t t31 = -49508101;

	t31 = ((x1929/(x1930>>x1931))<=x1932);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1941 = 81U;
	uint64_t x1942 = UINT64_MAX;
	uint8_t x1943 = 24U;
	int64_t x1944 = -558106085442742LL;

	t32 = ((x1941/(x1942>>x1943))<=x1944);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2077 = 1796894436LL;
	int64_t x2078 = INT64_MAX;
	static int8_t x2080 = -1;
	volatile int32_t t33 = -130;

	t33 = ((x2077/(x2078>>x2079))<=x2080);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2157 = -7204;
	uint16_t x2158 = UINT16_MAX;
	uint16_t x2160 = 2U;

	t34 = ((x2157/(x2158>>x2159))<=x2160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2219 = 0;
	int32_t t35 = -21230602;

	t35 = ((x2217/(x2218>>x2219))<=x2220);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x2221 = 30577;
	uint64_t x2222 = 2129893597383890215LLU;
	static int8_t x2223 = 1;
	int16_t x2224 = -1639;
	volatile int32_t t36 = -14869135;

	t36 = ((x2221/(x2222>>x2223))<=x2224);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2229 = -1;
	uint8_t x2231 = 2U;
	int32_t x2232 = 1498013;
	static volatile int32_t t37 = 6904975;

	t37 = ((x2229/(x2230>>x2231))<=x2232);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2241 = 68U;
	int16_t x2242 = 8489;
	int16_t x2244 = INT16_MIN;
	volatile int32_t t38 = 308715113;

	t38 = ((x2241/(x2242>>x2243))<=x2244);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2389 = UINT16_MAX;
	uint32_t x2390 = UINT32_MAX;
	uint32_t x2391 = 10U;
	static volatile int64_t x2392 = INT64_MAX;
	volatile int32_t t39 = -750385;

	t39 = ((x2389/(x2390>>x2391))<=x2392);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2517 = INT32_MIN;
	static volatile uint64_t x2518 = UINT64_MAX;
	int8_t x2519 = 54;
	uint16_t x2520 = 13U;
	volatile int32_t t40 = 62157455;

	t40 = ((x2517/(x2518>>x2519))<=x2520);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2545 = 1U;
	uint32_t x2546 = UINT32_MAX;
	uint8_t x2547 = 3U;
	int64_t x2548 = -1LL;
	volatile int32_t t41 = 2;

	t41 = ((x2545/(x2546>>x2547))<=x2548);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2729 = 19U;
	volatile uint32_t x2730 = 15399637U;
	static uint16_t x2731 = 3U;
	volatile int16_t x2732 = 7;

	t42 = ((x2729/(x2730>>x2731))<=x2732);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2761 = -1LL;
	static uint64_t x2762 = UINT64_MAX;
	static uint16_t x2763 = 9U;
	static int32_t t43 = -6025277;

	t43 = ((x2761/(x2762>>x2763))<=x2764);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2789 = 1LL;
	int64_t x2790 = 371846703940757020LL;
	int8_t x2791 = 16;
	int16_t x2792 = -178;
	int32_t t44 = -10092315;

	t44 = ((x2789/(x2790>>x2791))<=x2792);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x2970 = UINT32_MAX;
	uint8_t x2971 = 0U;
	static volatile uint32_t x2972 = UINT32_MAX;
	int32_t t45 = 90306455;

	t45 = ((x2969/(x2970>>x2971))<=x2972);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2981 = INT32_MAX;
	volatile uint64_t x2982 = 774259376689LLU;
	static int32_t x2984 = INT32_MIN;
	int32_t t46 = 112;

	t46 = ((x2981/(x2982>>x2983))<=x2984);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3071 = 0;
	uint16_t x3072 = 2U;
	static int32_t t47 = 31033567;

	t47 = ((x3069/(x3070>>x3071))<=x3072);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x3105 = INT16_MAX;
	int8_t x3107 = 1;
	static int64_t x3108 = -1LL;

	t48 = ((x3105/(x3106>>x3107))<=x3108);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3141 = INT64_MIN;
	static volatile int16_t x3142 = 422;
	int16_t x3144 = INT16_MIN;
	static int32_t t49 = -3923817;

	t49 = ((x3141/(x3142>>x3143))<=x3144);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3257 = UINT16_MAX;
	int8_t x3259 = 0;
	volatile uint32_t x3260 = 160287767U;
	static volatile int32_t t50 = -14281;

	t50 = ((x3257/(x3258>>x3259))<=x3260);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3269 = UINT16_MAX;
	static int64_t x3270 = 15462083456212476LL;
	int8_t x3271 = 0;
	int32_t t51 = -1;

	t51 = ((x3269/(x3270>>x3271))<=x3272);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3361 = INT64_MIN;
	volatile int8_t x3363 = 2;
	uint16_t x3364 = 5981U;
	volatile int32_t t52 = -5490;

	t52 = ((x3361/(x3362>>x3363))<=x3364);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3417 = -51632252;
	volatile uint32_t x3418 = 32460389U;
	int64_t x3420 = -6143023453LL;

	t53 = ((x3417/(x3418>>x3419))<=x3420);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x3466 = 124358435LL;
	uint8_t x3467 = 1U;
	int32_t x3468 = -1;
	int32_t t54 = -1193132;

	t54 = ((x3465/(x3466>>x3467))<=x3468);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3601 = INT16_MIN;
	uint16_t x3602 = 1U;
	int16_t x3603 = 0;
	int32_t x3604 = INT32_MIN;
	volatile int32_t t55 = 1;

	t55 = ((x3601/(x3602>>x3603))<=x3604);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x3674 = 1397362LLU;

	t56 = ((x3673/(x3674>>x3675))<=x3676);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3681 = -1LL;
	uint16_t x3682 = 281U;
	static uint64_t x3683 = 7LLU;
	volatile int8_t x3684 = INT8_MIN;
	int32_t t57 = 1;

	t57 = ((x3681/(x3682>>x3683))<=x3684);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x3739 = 7U;
	volatile uint64_t x3740 = 52404809135767LLU;
	int32_t t58 = 133456;

	t58 = ((x3737/(x3738>>x3739))<=x3740);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3741 = 14;
	int32_t x3742 = 22132828;
	uint32_t x3743 = 6U;
	uint64_t x3744 = 7303548100LLU;
	volatile int32_t t59 = 6;

	t59 = ((x3741/(x3742>>x3743))<=x3744);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3841 = -78LL;
	static uint64_t x3842 = 3787968497LLU;
	volatile uint16_t x3843 = 0U;
	volatile int16_t x3844 = INT16_MAX;

	t60 = ((x3841/(x3842>>x3843))<=x3844);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3849 = 255261107U;
	static int64_t x3850 = INT64_MAX;
	int16_t x3851 = 0;
	static uint64_t x3852 = 11081958867484LLU;

	t61 = ((x3849/(x3850>>x3851))<=x3852);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x3961 = INT32_MIN;
	int64_t x3962 = INT64_MAX;
	uint8_t x3963 = 1U;
	int32_t x3964 = INT32_MIN;
	static volatile int32_t t62 = 56326046;

	t62 = ((x3961/(x3962>>x3963))<=x3964);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x4109 = INT16_MIN;
	static uint64_t x4110 = UINT64_MAX;
	int8_t x4112 = -1;

	t63 = ((x4109/(x4110>>x4111))<=x4112);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4262 = UINT16_MAX;
	volatile int64_t x4264 = -1LL;
	int32_t t64 = -13895683;

	t64 = ((x4261/(x4262>>x4263))<=x4264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x4365 = UINT32_MAX;
	int16_t x4366 = 38;
	uint8_t x4367 = 1U;
	volatile int32_t t65 = -10;

	t65 = ((x4365/(x4366>>x4367))<=x4368);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x4390 = INT64_MAX;
	int32_t x4392 = -14019725;
	volatile int32_t t66 = 223679971;

	t66 = ((x4389/(x4390>>x4391))<=x4392);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4421 = -104;
	volatile uint32_t x4422 = 5U;
	uint32_t x4423 = 1U;
	volatile int8_t x4424 = INT8_MIN;
	volatile int32_t t67 = 3;

	t67 = ((x4421/(x4422>>x4423))<=x4424);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x4426 = 94LLU;
	int8_t x4427 = 1;
	int32_t x4428 = -1;
	volatile int32_t t68 = 95960;

	t68 = ((x4425/(x4426>>x4427))<=x4428);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4429 = 261145800436786LLU;
	volatile uint8_t x4432 = 32U;

	t69 = ((x4429/(x4430>>x4431))<=x4432);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x4485 = 1U;
	volatile uint16_t x4486 = UINT16_MAX;
	static int8_t x4488 = INT8_MIN;

	t70 = ((x4485/(x4486>>x4487))<=x4488);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4577 = 0LL;
	static int8_t x4579 = 0;
	int64_t x4580 = INT64_MIN;
	volatile int32_t t71 = -699697;

	t71 = ((x4577/(x4578>>x4579))<=x4580);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4585 = INT8_MIN;
	static int64_t x4586 = INT64_MAX;
	volatile int8_t x4587 = 1;
	static int8_t x4588 = -1;
	volatile int32_t t72 = -16608084;

	t72 = ((x4585/(x4586>>x4587))<=x4588);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x4658 = UINT16_MAX;
	uint16_t x4659 = 2U;
	volatile int16_t x4660 = INT16_MIN;
	volatile int32_t t73 = 571038;

	t73 = ((x4657/(x4658>>x4659))<=x4660);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x4861 = INT64_MIN;
	uint8_t x4863 = 4U;
	static int8_t x4864 = -1;
	int32_t t74 = 12184756;

	t74 = ((x4861/(x4862>>x4863))<=x4864);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4869 = UINT8_MAX;
	int8_t x4870 = 58;
	int8_t x4871 = 1;
	static int32_t x4872 = INT32_MIN;
	static int32_t t75 = -2;

	t75 = ((x4869/(x4870>>x4871))<=x4872);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4913 = INT8_MIN;
	static uint32_t x4914 = 616474253U;
	uint8_t x4915 = 0U;
	int16_t x4916 = INT16_MAX;
	volatile int32_t t76 = 12314589;

	t76 = ((x4913/(x4914>>x4915))<=x4916);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x4997 = 131983647746072LLU;
	volatile int32_t x4998 = INT32_MAX;
	uint16_t x4999 = 3U;
	int32_t x5000 = -1;
	volatile int32_t t77 = 2;

	t77 = ((x4997/(x4998>>x4999))<=x5000);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5022 = 9684;
	int64_t x5023 = 0LL;
	volatile int32_t t78 = 28687608;

	t78 = ((x5021/(x5022>>x5023))<=x5024);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5033 = UINT64_MAX;
	uint64_t x5034 = 61068701561777054LLU;
	static uint8_t x5035 = 14U;
	int64_t x5036 = -1LL;
	int32_t t79 = -242795803;

	t79 = ((x5033/(x5034>>x5035))<=x5036);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5157 = 92195870896LLU;
	static int64_t x5158 = 47633LL;
	int64_t x5160 = 636752LL;
	volatile int32_t t80 = 29800;

	t80 = ((x5157/(x5158>>x5159))<=x5160);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5309 = 12;
	volatile uint8_t x5310 = UINT8_MAX;
	int16_t x5311 = 5;
	uint32_t x5312 = 47U;
	volatile int32_t t81 = 993;

	t81 = ((x5309/(x5310>>x5311))<=x5312);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x5377 = INT64_MIN;
	static int16_t x5379 = 1;
	int16_t x5380 = 12;
	int32_t t82 = 731723;

	t82 = ((x5377/(x5378>>x5379))<=x5380);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5453 = -1;
	volatile uint32_t x5454 = UINT32_MAX;
	uint8_t x5455 = 3U;
	static volatile int32_t t83 = 300;

	t83 = ((x5453/(x5454>>x5455))<=x5456);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5466 = INT8_MAX;
	volatile int8_t x5467 = 2;
	int8_t x5468 = INT8_MIN;
	volatile int32_t t84 = 5019554;

	t84 = ((x5465/(x5466>>x5467))<=x5468);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5509 = INT64_MAX;
	int64_t x5510 = INT64_MAX;
	uint16_t x5511 = 2U;
	int64_t x5512 = INT64_MIN;
	int32_t t85 = 25;

	t85 = ((x5509/(x5510>>x5511))<=x5512);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5577 = 11525;
	uint8_t x5578 = 24U;
	uint16_t x5579 = 2U;
	uint64_t x5580 = UINT64_MAX;
	volatile int32_t t86 = 620;

	t86 = ((x5577/(x5578>>x5579))<=x5580);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5585 = INT16_MIN;
	static int8_t x5587 = 1;
	uint32_t x5588 = 427U;
	int32_t t87 = 3407;

	t87 = ((x5585/(x5586>>x5587))<=x5588);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5593 = 7U;
	static int64_t x5594 = INT64_MAX;
	uint64_t x5595 = 3LLU;
	int16_t x5596 = INT16_MIN;

	t88 = ((x5593/(x5594>>x5595))<=x5596);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5701 = 7U;
	volatile int32_t t89 = -16538;

	t89 = ((x5701/(x5702>>x5703))<=x5704);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5799 = 1;
	int8_t x5800 = INT8_MIN;
	int32_t t90 = 10794;

	t90 = ((x5797/(x5798>>x5799))<=x5800);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5818 = 13166U;
	uint8_t x5819 = 0U;
	int8_t x5820 = 2;
	volatile int32_t t91 = -776;

	t91 = ((x5817/(x5818>>x5819))<=x5820);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x5918 = 8U;
	uint32_t x5919 = 0U;
	volatile uint8_t x5920 = UINT8_MAX;
	static int32_t t92 = 2585456;

	t92 = ((x5917/(x5918>>x5919))<=x5920);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5928 = 0U;
	volatile int32_t t93 = -3858;

	t93 = ((x5925/(x5926>>x5927))<=x5928);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6033 = 1;
	uint64_t x6034 = 2129132996928827LLU;
	static uint8_t x6035 = 3U;
	static int8_t x6036 = 1;
	int32_t t94 = 3667081;

	t94 = ((x6033/(x6034>>x6035))<=x6036);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x6049 = 12968384921960506LLU;
	uint32_t x6050 = UINT32_MAX;
	static uint32_t x6051 = 18U;
	uint16_t x6052 = UINT16_MAX;
	volatile int32_t t95 = 1;

	t95 = ((x6049/(x6050>>x6051))<=x6052);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x6089 = -99;
	uint64_t x6090 = 1956855LLU;
	static int64_t x6091 = 13LL;
	static int32_t t96 = -30975188;

	t96 = ((x6089/(x6090>>x6091))<=x6092);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6109 = 146984U;
	int16_t x6111 = 8;
	static uint64_t x6112 = 125733435721330524LLU;
	volatile int32_t t97 = 2;

	t97 = ((x6109/(x6110>>x6111))<=x6112);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6269 = INT16_MIN;
	uint64_t x6270 = UINT64_MAX;
	uint8_t x6271 = 2U;
	int8_t x6272 = INT8_MIN;

	t98 = ((x6269/(x6270>>x6271))<=x6272);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6313 = -1LL;
	int64_t x6314 = INT64_MAX;
	volatile uint8_t x6315 = 32U;
	int8_t x6316 = INT8_MIN;

	t99 = ((x6313/(x6314>>x6315))<=x6316);

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

