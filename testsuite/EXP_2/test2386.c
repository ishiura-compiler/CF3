
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x377 = UINT32_MAX;
int8_t x379 = -1;
int32_t t7 = 61999;
int8_t x554 = INT8_MIN;
int16_t x555 = -1;
uint16_t x556 = 1U;
uint16_t x560 = 8U;
volatile uint32_t t13 = 7395156U;
static uint64_t x656 = 7LLU;
static int64_t t14 = -7735229958080084LL;
uint32_t x662 = 66963062U;
uint64_t x671 = 57107467748538LLU;
int32_t x737 = INT32_MIN;
int32_t x738 = INT32_MAX;
volatile uint64_t t20 = 95181LLU;
volatile uint64_t x882 = 38107LLU;
static volatile int8_t x893 = -1;
volatile uint8_t x896 = 0U;
int64_t t22 = 59242105071204LL;
static int16_t x914 = 214;
static volatile int32_t t24 = 173;
uint32_t x963 = 299290U;
uint32_t t27 = 13016U;
int16_t x1281 = INT16_MIN;
volatile int64_t t30 = -25445483LL;
volatile int8_t x1330 = INT8_MAX;
int16_t x1332 = 0;
uint32_t x1364 = 21U;
int16_t x1399 = INT16_MAX;
uint32_t x1953 = UINT32_MAX;
static uint64_t x1977 = UINT64_MAX;
static volatile int16_t x1990 = INT16_MAX;
volatile uint16_t x2114 = 3U;
uint8_t x2116 = 2U;
int64_t t42 = -2917LL;
uint64_t x2137 = 16397356870LLU;
volatile int16_t x2150 = INT16_MAX;
volatile int16_t x2454 = 2;
static int32_t x2551 = INT32_MIN;
static uint32_t t49 = 709752U;
volatile int8_t x2626 = INT8_MIN;
int32_t x2627 = INT32_MIN;
uint64_t x2798 = 68615113664236177LLU;
uint8_t x2799 = 7U;
int8_t x2842 = INT8_MAX;
uint64_t x2941 = 740472555777891LLU;
uint16_t x2942 = 2990U;
static int64_t x2984 = 27LL;
uint8_t x3029 = 2U;
volatile uint32_t x3049 = 221U;
int64_t x3053 = -45180LL;
volatile int64_t t64 = 1284LL;
volatile int32_t x3370 = INT32_MIN;
int32_t x3372 = 1;
uint16_t x3500 = 1U;
uint64_t t69 = 218LLU;
uint32_t x3511 = 601U;
static volatile uint32_t t71 = 7122378U;
int64_t x3598 = INT64_MAX;
int16_t x3599 = -88;
volatile uint8_t x3668 = 1U;
volatile int64_t t74 = -60401207LL;
uint64_t x3679 = 25591313787753LLU;
uint64_t x3680 = 6LLU;
int8_t x3799 = INT8_MIN;
uint8_t x3800 = 14U;
uint64_t x3851 = 212406563679LLU;
uint16_t x3852 = 11U;
volatile uint8_t x3860 = 6U;
int8_t x3904 = 1;
static int32_t x4017 = INT32_MIN;
static volatile int8_t x4106 = -1;
int64_t x4107 = INT64_MIN;
static uint16_t x4180 = 0U;
uint64_t x4275 = UINT64_MAX;
static uint64_t x4297 = 128131682993305LLU;
int8_t x4298 = INT8_MIN;
int16_t x4300 = 3;
static uint32_t x4346 = 227069U;
int8_t x4348 = 0;
int8_t x4385 = INT8_MIN;
int8_t x4388 = 1;
int32_t x4413 = INT32_MIN;
uint64_t x4435 = 2628240695307168LLU;
uint16_t x4436 = 3U;
int8_t x4778 = INT8_MAX;
uint8_t x4900 = 23U;
int64_t x4917 = -2091LL;
static int8_t x4920 = 16;
uint32_t t103 = 11935914U;
int16_t x5063 = INT16_MAX;
uint8_t x5064 = 3U;
volatile int16_t x5123 = INT16_MIN;
int8_t x5176 = 1;
static volatile uint64_t t110 = 1842128490171LLU;
uint32_t x5344 = 8U;
int64_t t111 = -64269LL;
int8_t x5361 = -1;
int16_t x5362 = INT16_MIN;
uint8_t x5363 = 31U;
int32_t x5386 = INT32_MIN;
static uint8_t x5388 = 0U;
int64_t t113 = -1540LL;
volatile int8_t x5410 = INT8_MAX;
static int8_t x5454 = INT8_MIN;
uint64_t x5481 = 2921622665429684207LLU;
uint64_t t117 = 20633724648399LLU;
uint32_t x5514 = 118434U;
volatile int8_t x5515 = INT8_MAX;
int16_t x5567 = 2;
int16_t x5731 = INT16_MIN;
int32_t x5977 = -1;
int16_t x6100 = 12;
uint64_t x6162 = 228LLU;
uint8_t x6163 = 3U;
uint64_t x6213 = 159274LLU;
volatile uint64_t t128 = 8563820802LLU;
uint16_t x6226 = 175U;
static uint16_t x6439 = 3842U;
int32_t t131 = -635318515;
static int32_t x6442 = INT32_MIN;
static uint64_t x6444 = 1LLU;
int8_t x6514 = -15;
static int32_t t136 = 5;
int16_t x6569 = INT16_MIN;
int32_t x6570 = INT32_MIN;
uint32_t x6572 = 17U;
static uint64_t x6642 = 10855645LLU;
static int16_t x6655 = -2;
static uint16_t x6669 = 18788U;
static volatile uint64_t t140 = 3493950111371LLU;
uint32_t x6694 = UINT32_MAX;
static volatile uint64_t t141 = 166555306441LLU;
uint32_t x6878 = 946720062U;
volatile int64_t x7082 = -1LL;
static int64_t x7114 = -745514LL;
volatile uint32_t x7115 = 6592589U;
int8_t x7116 = 1;
int8_t x7134 = INT8_MAX;
int16_t x7135 = INT16_MIN;
uint64_t x7136 = 6LLU;
static uint64_t t149 = 7454582016976614LLU;
int16_t x7269 = -12;
static int8_t x7338 = INT8_MAX;
int16_t x7339 = INT16_MAX;
uint16_t x7360 = 15U;
uint32_t t153 = 1867988U;
volatile uint16_t x7377 = 12U;
volatile uint32_t x7378 = 168U;
volatile int64_t t155 = 3428159LL;
volatile uint16_t x7548 = 0U;
uint32_t t157 = 3387655U;
uint16_t x7650 = 975U;
static int8_t x7752 = 0;
int32_t t160 = 28;
volatile int32_t x7819 = -50968088;
int8_t x7820 = 0;
volatile uint32_t t163 = 3099593U;
uint16_t x8001 = 0U;
static int16_t x8017 = -1;
volatile int32_t x8051 = INT32_MIN;
static int32_t t167 = 18445;
volatile uint64_t t168 = 1550031557924043LLU;
uint32_t x8247 = UINT32_MAX;
uint32_t x8262 = 1040U;
static int64_t t171 = -1765367523379314LL;
volatile uint8_t x8441 = 108U;
int8_t x8442 = INT8_MIN;
volatile uint32_t x8443 = UINT32_MAX;
uint16_t x8505 = 10782U;
uint16_t x8506 = 2U;
int32_t x8620 = 1;
int32_t x8671 = -13634504;
int32_t x8841 = -1;
uint8_t x8868 = 41U;
uint32_t t180 = 2297U;
volatile int16_t x8966 = -27;
int64_t x9029 = -1345LL;
int8_t x9030 = INT8_MIN;
int16_t x9031 = 4;
volatile uint64_t x9097 = UINT64_MAX;
int16_t x9098 = 73;
volatile int32_t x9099 = -513787485;
uint16_t x9364 = 7U;
int8_t x9441 = INT8_MIN;
uint64_t x9525 = 7167LLU;
uint32_t x9606 = UINT32_MAX;
int16_t x9607 = 1715;
static volatile uint32_t t195 = 7U;
volatile uint16_t x9620 = 15U;
static int32_t x9689 = -1;
int8_t x9691 = -1;
uint16_t x9740 = 55U;
volatile uint64_t t199 = 149640239LLU;


void f0(void) {
    	int16_t x133 = INT16_MIN;
	uint32_t x134 = 1432445999U;
	uint16_t x135 = UINT16_MAX;
	uint32_t x136 = 1U;
	volatile uint32_t t0 = 3U;

    t0 = ((x133*(x134|x135))<<x136);

    if (t0 != 65536U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x225 = 10LL;
	static int8_t x226 = -1;
	uint64_t x227 = 268299513001025LLU;
	int16_t x228 = 15;
	uint64_t t1 = 337757763927LLU;

    t1 = ((x225*(x226|x227))<<x228);

    if (t1 != 18446744073709223936LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x373 = 46U;
	volatile uint32_t x374 = 4917241U;
	volatile int8_t x375 = INT8_MIN;
	uint16_t x376 = 3U;
	uint32_t t2 = 337424696U;

    t2 = ((x373*(x374|x375))<<x376);

    if (t2 != 4294964720U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x378 = 214468802;
	uint8_t x380 = 14U;
	uint32_t t3 = 64894532U;

    t3 = ((x377*(x378|x379))<<x380);

    if (t3 != 16384U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x437 = 918991125U;
	static int16_t x438 = INT16_MIN;
	int32_t x439 = -379151696;
	int8_t x440 = 7;
	uint32_t t4 = 160626U;

    t4 = ((x437*(x438|x439))<<x440);

    if (t4 != 95434752U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x465 = 3;
	int32_t x466 = 150049;
	uint8_t x467 = UINT8_MAX;
	volatile int16_t x468 = 2;
	int32_t t5 = 80;

    t5 = ((x465*(x466|x467))<<x468);

    if (t5 != 1803252) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x473 = 70U;
	static int8_t x474 = INT8_MAX;
	uint64_t x475 = 243032862LLU;
	uint64_t x476 = 1LLU;
	static volatile uint64_t t6 = 2216657LLU;

    t6 = ((x473*(x474|x475))<<x476);

    if (t6 != 34024614260LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x497 = -124327;
	int16_t x498 = -69;
	int8_t x499 = 5;
	volatile uint8_t x500 = 0U;

    t7 = ((x497*(x498|x499))<<x500);

    if (t7 != 8081255) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x517 = 13363U;
	uint8_t x518 = 3U;
	static int8_t x519 = INT8_MIN;
	static uint16_t x520 = 1U;
	volatile uint32_t t8 = 379U;

    t8 = ((x517*(x518|x519))<<x520);

    if (t8 != 4291626546U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x553 = INT16_MIN;
	int32_t t9 = 43011366;

    t9 = ((x553*(x554|x555))<<x556);

    if (t9 != 65536) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x557 = 54743320729LLU;
	int32_t x558 = -1;
	volatile uint16_t x559 = UINT16_MAX;
	uint64_t t10 = 80539LLU;

    t10 = ((x557*(x558|x559))<<x560);

    if (t10 != 18446730059419444992LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	static int16_t x586 = INT16_MIN;
	int16_t x587 = INT16_MAX;
	static uint8_t x588 = 0U;
	static uint64_t t11 = 153LLU;

    t11 = ((x585*(x586|x587))<<x588);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x601 = 65947289651LLU;
	uint64_t x602 = 7199789778743LLU;
	int32_t x603 = INT32_MAX;
	volatile uint64_t x604 = 3LLU;
	volatile uint64_t t12 = 917090667622LLU;

    t12 = ((x601*(x602|x603))<<x604);

    if (t12 != 4117573675520212584LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x613 = 1U;
	static int16_t x614 = INT16_MIN;
	volatile int16_t x615 = -6249;
	static int8_t x616 = 1;

    t13 = ((x613*(x614|x615))<<x616);

    if (t13 != 4294954798U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x653 = 0U;
	int32_t x654 = INT32_MIN;
	int64_t x655 = -1LL;

    t14 = ((x653*(x654|x655))<<x656);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x661 = UINT64_MAX;
	uint64_t x663 = 2353LLU;
	int8_t x664 = 39;
	volatile uint64_t t15 = 327LLU;

    t15 = ((x661*(x662|x663))<<x664);

    if (t15 != 78888310025486336LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x669 = 1493239493U;
	volatile int64_t x670 = -1LL;
	uint16_t x672 = 32U;
	static uint64_t t16 = 144264LLU;

    t16 = ((x669*(x670|x671))<<x672);

    if (t16 != 12033329286178930688LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x739 = 1557956101669704LLU;
	volatile int8_t x740 = 56;
	volatile uint64_t t17 = 21392073LLU;

    t17 = ((x737*(x738|x739))<<x740);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x809 = INT16_MIN;
	volatile int16_t x810 = INT16_MIN;
	static uint32_t x811 = 347U;
	uint8_t x812 = 4U;
	volatile uint32_t t18 = 21929051U;

    t18 = ((x809*(x810|x811))<<x812);

    if (t18 != 4113039360U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x829 = 6767703253723LLU;
	volatile int64_t x830 = 337640229758054LL;
	int16_t x831 = 71;
	uint8_t x832 = 29U;
	volatile uint64_t t19 = 1075573656997117LLU;

    t19 = ((x829*(x830|x831))<<x832);

    if (t19 != 13242933950776606720LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x833 = UINT64_MAX;
	int64_t x834 = -801453427127864LL;
	int64_t x835 = 66147142LL;
	int32_t x836 = 8;

    t20 = ((x833*(x834|x835))<<x836);

    if (t20 != 205172065242984960LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x881 = UINT8_MAX;
	static volatile int32_t x883 = INT32_MAX;
	int16_t x884 = 0;
	uint64_t t21 = 3860LLU;

    t21 = ((x881*(x882|x883))<<x884);

    if (t21 != 547608329985LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x894 = INT64_MIN;
	static int16_t x895 = INT16_MAX;

    t22 = ((x893*(x894|x895))<<x896);

    if (t22 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x913 = INT8_MAX;
	int16_t x915 = INT16_MAX;
	volatile uint16_t x916 = 0U;
	static int32_t t23 = 653336580;

    t23 = ((x913*(x914|x915))<<x916);

    if (t23 != 4161409) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x957 = INT8_MIN;
	int8_t x958 = INT8_MIN;
	static volatile uint8_t x959 = UINT8_MAX;
	uint8_t x960 = 5U;

    t24 = ((x957*(x958|x959))<<x960);

    if (t24 != 4096) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x961 = 6U;
	volatile uint8_t x962 = UINT8_MAX;
	volatile uint8_t x964 = 14U;
	static volatile uint32_t t25 = 133371470U;

    t25 = ((x961*(x962|x963))<<x964);

    if (t25 != 3674112000U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x993 = 449U;
	uint16_t x994 = 4603U;
	uint64_t x995 = 23290368828659LLU;
	uint8_t x996 = 10U;
	volatile uint64_t t26 = 3539872589072984447LLU;

    t26 = ((x993*(x994|x995))<<x996);

    if (t26 != 10708352620570143744LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x1133 = INT32_MIN;
	static volatile uint16_t x1134 = UINT16_MAX;
	static uint32_t x1135 = 2205686U;
	int8_t x1136 = 1;

    t27 = ((x1133*(x1134|x1135))<<x1136);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1177 = -1;
	int16_t x1178 = 1;
	static int32_t x1179 = -426954921;
	volatile uint8_t x1180 = 1U;
	int32_t t28 = 8177;

    t28 = ((x1177*(x1178|x1179))<<x1180);

    if (t28 != 853909842) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x1282 = INT16_MAX;
	int16_t x1283 = -109;
	volatile uint32_t x1284 = 3U;
	volatile int32_t t29 = 30608;

    t29 = ((x1281*(x1282|x1283))<<x1284);

    if (t29 != 262144) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1305 = INT8_MIN;
	int32_t x1306 = -26426;
	volatile int64_t x1307 = -91449LL;
	static uint16_t x1308 = 29U;

    t30 = ((x1305*(x1306|x1307))<<x1308);

    if (t30 != 1780727800659968LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x1329 = 0;
	int64_t x1331 = INT64_MIN;
	int64_t t31 = 232874LL;

    t31 = ((x1329*(x1330|x1331))<<x1332);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x1361 = 3232LLU;
	uint8_t x1362 = 2U;
	volatile int32_t x1363 = -1;
	static uint64_t t32 = 1714699971938358323LLU;

    t32 = ((x1361*(x1362|x1363))<<x1364);

    if (t32 != 18446744066931556352LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1397 = UINT64_MAX;
	volatile uint32_t x1398 = 120U;
	int8_t x1400 = 44;
	static uint64_t t33 = 1068LLU;

    t33 = ((x1397*(x1398|x1399))<<x1400);

    if (t33 != 17870300913592172544LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1453 = -1;
	uint32_t x1454 = 0U;
	int32_t x1455 = 67073095;
	int16_t x1456 = 13;
	static volatile uint32_t t34 = 23132U;

    t34 = ((x1453*(x1454|x1455))<<x1456);

    if (t34 != 293019648U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x1589 = UINT64_MAX;
	int8_t x1590 = INT8_MIN;
	int32_t x1591 = -1;
	uint8_t x1592 = 5U;
	static volatile uint64_t t35 = 412LLU;

    t35 = ((x1589*(x1590|x1591))<<x1592);

    if (t35 != 32LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x1609 = -1;
	int32_t x1610 = INT32_MIN;
	uint64_t x1611 = UINT64_MAX;
	int8_t x1612 = 1;
	volatile uint64_t t36 = 80178782022542452LLU;

    t36 = ((x1609*(x1610|x1611))<<x1612);

    if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x1629 = 17735772564403707LLU;
	int8_t x1630 = INT8_MIN;
	static uint8_t x1631 = 2U;
	uint8_t x1632 = 2U;
	static volatile uint64_t t37 = 867LLU;

    t37 = ((x1629*(x1630|x1631))<<x1632);

    if (t37 != 9507914701250083288LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1669 = -649456387LL;
	int8_t x1670 = INT8_MIN;
	static int16_t x1671 = INT16_MAX;
	int8_t x1672 = 0;
	int64_t t38 = 0LL;

    t38 = ((x1669*(x1670|x1671))<<x1672);

    if (t38 != 649456387LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x1954 = -1;
	static volatile int32_t x1955 = INT32_MIN;
	volatile uint8_t x1956 = 1U;
	volatile uint32_t t39 = 11U;

    t39 = ((x1953*(x1954|x1955))<<x1956);

    if (t39 != 2U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x1978 = 56U;
	static volatile int32_t x1979 = 159927335;
	static int8_t x1980 = 1;
	uint64_t t40 = 3578169682745589081LLU;

    t40 = ((x1977*(x1978|x1979))<<x1980);

    if (t40 != 18446744073389696898LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x1989 = -1;
	volatile uint32_t x1991 = UINT32_MAX;
	int16_t x1992 = 0;
	uint32_t t41 = 19998U;

    t41 = ((x1989*(x1990|x1991))<<x1992);

    if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x2113 = 30U;
	volatile int64_t x2115 = 41720413LL;

    t42 = ((x2113*(x2114|x2115))<<x2116);

    if (t42 != 5006449800LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x2138 = INT32_MAX;
	volatile int8_t x2139 = INT8_MIN;
	static volatile uint32_t x2140 = 43U;
	volatile uint64_t t43 = 243802644LLU;

    t43 = ((x2137*(x2138|x2139))<<x2140);

    if (t43 != 2415565473572716544LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x2149 = INT16_MIN;
	int32_t x2151 = -4;
	static uint8_t x2152 = 1U;
	int32_t t44 = 1624;

    t44 = ((x2149*(x2150|x2151))<<x2152);

    if (t44 != 65536) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2245 = UINT64_MAX;
	int16_t x2246 = INT16_MIN;
	static uint8_t x2247 = 1U;
	static volatile uint8_t x2248 = 11U;
	uint64_t t45 = 12LLU;

    t45 = ((x2245*(x2246|x2247))<<x2248);

    if (t45 != 67106816LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x2453 = 5210189329LLU;
	int16_t x2455 = 13;
	volatile uint8_t x2456 = 0U;
	uint64_t t46 = 0LLU;

    t46 = ((x2453*(x2454|x2455))<<x2456);

    if (t46 != 78152839935LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x2489 = -1;
	int16_t x2490 = -34;
	uint16_t x2491 = 8U;
	uint8_t x2492 = 2U;
	volatile int32_t t47 = 877411;

    t47 = ((x2489*(x2490|x2491))<<x2492);

    if (t47 != 136) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x2529 = -13957;
	volatile int64_t x2530 = -13LL;
	volatile int8_t x2531 = INT8_MAX;
	int16_t x2532 = 1;
	int64_t t48 = -10672LL;

    t48 = ((x2529*(x2530|x2531))<<x2532);

    if (t48 != 27914LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x2549 = UINT32_MAX;
	int16_t x2550 = INT16_MIN;
	static int8_t x2552 = 6;

    t49 = ((x2549*(x2550|x2551))<<x2552);

    if (t49 != 2097152U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x2625 = 7702LLU;
	volatile int32_t x2628 = 0;
	uint64_t t50 = 21466463589977LLU;

    t50 = ((x2625*(x2626|x2627))<<x2628);

    if (t50 != 18446744073708565760LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2685 = INT16_MIN;
	static int64_t x2686 = -90LL;
	int16_t x2687 = 13384;
	volatile int32_t x2688 = 5;
	volatile int64_t t51 = 23LL;

    t51 = ((x2685*(x2686|x2687))<<x2688);

    if (t51 != 18874368LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x2797 = -1302;
	uint8_t x2800 = 40U;
	static uint64_t t52 = 128LLU;

    t52 = ((x2797*(x2798|x2799))<<x2800);

    if (t52 != 15430464820347928576LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2841 = 653;
	uint32_t x2843 = 95729986U;
	uint16_t x2844 = 19U;
	volatile uint32_t t53 = 380482577U;

    t53 = ((x2841*(x2842|x2843))<<x2844);

    if (t53 != 1201143808U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x2917 = 124256792U;
	static volatile int32_t x2918 = -1;
	int32_t x2919 = INT32_MAX;
	int8_t x2920 = 0;
	uint32_t t54 = 11172342U;

    t54 = ((x2917*(x2918|x2919))<<x2920);

    if (t54 != 4170710504U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x2937 = 807;
	uint8_t x2938 = 0U;
	uint16_t x2939 = 2596U;
	uint8_t x2940 = 6U;
	int32_t t55 = 1;

    t55 = ((x2937*(x2938|x2939))<<x2940);

    if (t55 != 134078208) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2943 = UINT32_MAX;
	volatile int16_t x2944 = 12;
	uint64_t t56 = 12755215191104LLU;

    t56 = ((x2941*(x2942|x2943))<<x2944);

    if (t56 != 5250885752686497792LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x2981 = -1;
	uint16_t x2982 = UINT16_MAX;
	volatile int16_t x2983 = -102;
	static int32_t t57 = -1;

    t57 = ((x2981*(x2982|x2983))<<x2984);

    if (t57 != 134217728) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x2993 = -1;
	int32_t x2994 = INT32_MIN;
	int8_t x2995 = -1;
	int8_t x2996 = 6;
	static volatile int32_t t58 = 280681;

    t58 = ((x2993*(x2994|x2995))<<x2996);

    if (t58 != 64) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x3030 = 52;
	static int8_t x3031 = INT8_MAX;
	static uint32_t x3032 = 7U;
	static int32_t t59 = -1;

    t59 = ((x3029*(x3030|x3031))<<x3032);

    if (t59 != 32512) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x3050 = INT8_MIN;
	uint32_t x3051 = UINT32_MAX;
	uint8_t x3052 = 14U;
	static volatile uint32_t t60 = 54761966U;

    t60 = ((x3049*(x3050|x3051))<<x3052);

    if (t60 != 4291346432U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x3054 = INT16_MIN;
	int16_t x3055 = -1;
	int64_t x3056 = 6LL;
	static volatile int64_t t61 = 7468865LL;

    t61 = ((x3053*(x3054|x3055))<<x3056);

    if (t61 != 2891520LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x3057 = UINT32_MAX;
	volatile int8_t x3058 = 5;
	uint16_t x3059 = 20U;
	uint16_t x3060 = 9U;
	volatile uint32_t t62 = 42199U;

    t62 = ((x3057*(x3058|x3059))<<x3060);

    if (t62 != 4294956544U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x3125 = 15130;
	int8_t x3126 = INT8_MAX;
	static uint64_t x3127 = UINT64_MAX;
	uint8_t x3128 = 15U;
	volatile uint64_t t63 = 134777200439000LLU;

    t63 = ((x3125*(x3126|x3127))<<x3128);

    if (t63 != 18446744073213771776LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x3145 = -1;
	int8_t x3146 = INT8_MAX;
	volatile int64_t x3147 = -1LL;
	volatile int8_t x3148 = 0;

    t64 = ((x3145*(x3146|x3147))<<x3148);

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x3221 = -1;
	int16_t x3222 = -1;
	int8_t x3223 = INT8_MIN;
	static int16_t x3224 = 1;
	volatile int32_t t65 = 470466;

    t65 = ((x3221*(x3222|x3223))<<x3224);

    if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x3309 = 223432712U;
	uint8_t x3310 = 3U;
	volatile uint8_t x3311 = 92U;
	int8_t x3312 = 2;
	volatile uint32_t t66 = 670610695U;

    t66 = ((x3309*(x3310|x3311))<<x3312);

    if (t66 != 3300051936U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x3325 = 68511789413881LL;
	uint64_t x3326 = 5165868LLU;
	static int16_t x3327 = 118;
	uint64_t x3328 = 1LLU;
	volatile uint64_t t67 = 249LLU;

    t67 = ((x3325*(x3326|x3327))<<x3328);

    if (t67 != 6880682244314142492LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x3369 = UINT16_MAX;
	volatile uint32_t x3371 = 422481U;
	uint32_t t68 = 33772435U;

    t68 = ((x3369*(x3370|x3371))<<x3372);

    if (t68 != 3834977118U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x3497 = 1793297638531998063LLU;
	int32_t x3498 = INT32_MAX;
	volatile uint64_t x3499 = 3346LLU;

    t69 = ((x3497*(x3498|x3499))<<x3500);

    if (t69 != 4573682533379718434LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x3509 = INT32_MAX;
	int32_t x3510 = -65507;
	int8_t x3512 = 10;
	uint32_t t70 = 810599U;

    t70 = ((x3509*(x3510|x3511))<<x3512);

    if (t70 != 66489344U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x3541 = -3;
	int16_t x3542 = INT16_MIN;
	uint32_t x3543 = 177U;
	uint16_t x3544 = 4U;

    t71 = ((x3541*(x3542|x3543))<<x3544);

    if (t71 != 1564368U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x3557 = INT16_MIN;
	volatile uint32_t x3558 = 3U;
	int16_t x3559 = INT16_MIN;
	volatile uint64_t x3560 = 29LLU;
	static uint32_t t72 = 7866U;

    t72 = ((x3557*(x3558|x3559))<<x3560);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x3597 = 249614LLU;
	volatile int8_t x3600 = 7;
	uint64_t t73 = 8616227773756312940LLU;

    t73 = ((x3597*(x3598|x3599))<<x3600);

    if (t73 != 18446744073677601024LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x3665 = -1LL;
	int16_t x3666 = INT16_MIN;
	static volatile int64_t x3667 = INT64_MAX;

    t74 = ((x3665*(x3666|x3667))<<x3668);

    if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x3677 = 110348164;
	volatile uint64_t x3678 = UINT64_MAX;
	volatile uint64_t t75 = 59853198184202516LLU;

    t75 = ((x3677*(x3678|x3679))<<x3680);

    if (t75 != 18446744066647269120LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x3797 = INT8_MIN;
	static int16_t x3798 = INT16_MAX;
	int32_t t76 = -463743090;

    t76 = ((x3797*(x3798|x3799))<<x3800);

    if (t76 != 2097152) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x3817 = 15890849481036158LLU;
	int8_t x3818 = INT8_MIN;
	int16_t x3819 = 1392;
	volatile uint8_t x3820 = 1U;
	uint64_t t77 = 881269624833753LLU;

    t77 = ((x3817*(x3818|x3819))<<x3820);

    if (t77 != 17938236890316394560LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x3849 = -1;
	static int8_t x3850 = -1;
	uint64_t t78 = 7058273LLU;

    t78 = ((x3849*(x3850|x3851))<<x3852);

    if (t78 != 2048LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x3857 = -3;
	int64_t x3858 = 1LL;
	volatile int32_t x3859 = INT32_MIN;
	int64_t t79 = -3337432808LL;

    t79 = ((x3857*(x3858|x3859))<<x3860);

    if (t79 != 412316860224LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x3901 = UINT8_MAX;
	int8_t x3902 = INT8_MIN;
	static uint32_t x3903 = UINT32_MAX;
	volatile uint32_t t80 = 1U;

    t80 = ((x3901*(x3902|x3903))<<x3904);

    if (t80 != 4294966786U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x4018 = 29;
	uint64_t x4019 = 128534339389935830LLU;
	uint8_t x4020 = 30U;
	volatile uint64_t t81 = 261985LLU;

    t81 = ((x4017*(x4018|x4019))<<x4020);

    if (t81 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x4021 = -8;
	int8_t x4022 = 1;
	volatile uint64_t x4023 = 869639215128LLU;
	int8_t x4024 = 0;
	static volatile uint64_t t82 = 1150593145246548LLU;

    t82 = ((x4021*(x4022|x4023))<<x4024);

    if (t82 != 18446737116595830584LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x4105 = -3751;
	int8_t x4108 = 1;
	int64_t t83 = -4054066743681831LL;

    t83 = ((x4105*(x4106|x4107))<<x4108);

    if (t83 != 7502LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x4177 = -7;
	volatile int32_t x4178 = 489988;
	int16_t x4179 = INT16_MIN;
	volatile int32_t t84 = 243901;

    t84 = ((x4177*(x4178|x4179))<<x4180);

    if (t84 != 10724) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4273 = INT8_MIN;
	uint8_t x4274 = 54U;
	volatile int16_t x4276 = 1;
	volatile uint64_t t85 = 1035321531LLU;

    t85 = ((x4273*(x4274|x4275))<<x4276);

    if (t85 != 256LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x4299 = 12420670U;
	volatile uint64_t t86 = 10631708LLU;

    t86 = ((x4297*(x4298|x4299))<<x4300);

    if (t86 != 15755784203557831792LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x4321 = UINT32_MAX;
	static int16_t x4322 = INT16_MIN;
	int8_t x4323 = -1;
	int8_t x4324 = 2;
	volatile uint32_t t87 = 2034U;

    t87 = ((x4321*(x4322|x4323))<<x4324);

    if (t87 != 4U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x4345 = UINT64_MAX;
	int8_t x4347 = -1;
	volatile uint64_t t88 = 11502087420001LLU;

    t88 = ((x4345*(x4346|x4347))<<x4348);

    if (t88 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x4386 = -1802;
	static int64_t x4387 = -1090688924LL;
	int64_t t89 = -11267822096650587LL;

    t89 = ((x4385*(x4386|x4387))<<x4388);

    if (t89 != 461312LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x4414 = 2700U;
	uint16_t x4415 = UINT16_MAX;
	uint16_t x4416 = 3U;
	uint32_t t90 = 0U;

    t90 = ((x4413*(x4414|x4415))<<x4416);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x4433 = 0U;
	volatile int16_t x4434 = INT16_MIN;
	uint64_t t91 = 3LLU;

    t91 = ((x4433*(x4434|x4435))<<x4436);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x4489 = 121147U;
	volatile uint64_t x4490 = UINT64_MAX;
	uint64_t x4491 = 8716820592100960256LLU;
	static uint16_t x4492 = 62U;
	uint64_t t92 = 40218883LLU;

    t92 = ((x4489*(x4490|x4491))<<x4492);

    if (t92 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x4529 = 0U;
	int32_t x4530 = INT32_MAX;
	volatile int16_t x4531 = 161;
	uint8_t x4532 = 3U;
	static volatile uint32_t t93 = 112470900U;

    t93 = ((x4529*(x4530|x4531))<<x4532);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x4681 = 267157407LLU;
	int32_t x4682 = 308660065;
	int32_t x4683 = INT32_MAX;
	int16_t x4684 = 28;
	uint64_t t94 = 88856070146150LLU;

    t94 = ((x4681*(x4682|x4683))<<x4684);

    if (t94 != 17798568801034305536LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x4689 = 509472501464918LL;
	uint64_t x4690 = 1LLU;
	int8_t x4691 = -1;
	uint8_t x4692 = 23U;
	static uint64_t t95 = 11LLU;

    t95 = ((x4689*(x4690|x4691))<<x4692);

    if (t95 != 5879523531993120768LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x4777 = INT16_MAX;
	uint64_t x4779 = UINT64_MAX;
	volatile uint32_t x4780 = 1U;
	volatile uint64_t t96 = 6318921356144464LLU;

    t96 = ((x4777*(x4778|x4779))<<x4780);

    if (t96 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x4785 = -180;
	int32_t x4786 = INT32_MIN;
	static uint32_t x4787 = UINT32_MAX;
	int8_t x4788 = 0;
	uint32_t t97 = 58044U;

    t97 = ((x4785*(x4786|x4787))<<x4788);

    if (t97 != 180U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x4789 = 4347U;
	int8_t x4790 = INT8_MIN;
	uint64_t x4791 = UINT64_MAX;
	volatile uint8_t x4792 = 55U;
	static volatile uint64_t t98 = 805703153272588253LLU;

    t98 = ((x4789*(x4790|x4791))<<x4792);

    if (t98 != 9403516021949595648LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x4829 = 21U;
	uint8_t x4830 = UINT8_MAX;
	uint16_t x4831 = 1U;
	uint8_t x4832 = 2U;
	int32_t t99 = -6;

    t99 = ((x4829*(x4830|x4831))<<x4832);

    if (t99 != 21420) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x4881 = INT64_MIN;
	int32_t x4882 = INT32_MIN;
	uint64_t x4883 = 2535596901922LLU;
	static volatile int8_t x4884 = 1;
	uint64_t t100 = 323LLU;

    t100 = ((x4881*(x4882|x4883))<<x4884);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x4897 = 53687LLU;
	volatile int16_t x4898 = 10261;
	static volatile uint8_t x4899 = 3U;
	uint64_t t101 = 4406737587583132690LLU;

    t101 = ((x4897*(x4898|x4899))<<x4900);

    if (t101 != 4622036445954048LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x4918 = -1;
	uint64_t x4919 = 36590396LLU;
	static volatile uint64_t t102 = 423053326LLU;

    t102 = ((x4917*(x4918|x4919))<<x4920);

    if (t102 != 137035776LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x4925 = 77667U;
	int8_t x4926 = INT8_MAX;
	uint8_t x4927 = 9U;
	uint8_t x4928 = 17U;

    t103 = ((x4925*(x4926|x4927))<<x4928);

    if (t103 != 70909952U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x4965 = 47U;
	uint32_t x4966 = 0U;
	int16_t x4967 = INT16_MIN;
	uint16_t x4968 = 0U;
	uint32_t t104 = 2U;

    t104 = ((x4965*(x4966|x4967))<<x4968);

    if (t104 != 4293427200U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x5029 = -7;
	int32_t x5030 = -103;
	volatile int32_t x5031 = -1;
	int16_t x5032 = 0;
	volatile int32_t t105 = -3;

    t105 = ((x5029*(x5030|x5031))<<x5032);

    if (t105 != 7) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x5045 = -1;
	int64_t x5046 = 896305257LL;
	int32_t x5047 = INT32_MIN;
	static volatile uint8_t x5048 = 25U;
	volatile int64_t t106 = -129396104905LL;

    t106 = ((x5045*(x5046|x5047))<<x5048);

    if (t106 != 41982580240678912LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x5061 = 194905453LLU;
	volatile uint16_t x5062 = UINT16_MAX;
	uint64_t t107 = 220435162580LLU;

    t107 = ((x5061*(x5062|x5063))<<x5064);

    if (t107 != 102185030898840LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x5065 = INT8_MIN;
	int8_t x5066 = INT8_MIN;
	int16_t x5067 = -2421;
	uint8_t x5068 = 0U;
	volatile int32_t t108 = 9847;

    t108 = ((x5065*(x5066|x5067))<<x5068);

    if (t108 != 14976) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x5121 = -36;
	int64_t x5122 = INT64_MIN;
	volatile int32_t x5124 = 9;
	volatile int64_t t109 = 888719175968741LL;

    t109 = ((x5121*(x5122|x5123))<<x5124);

    if (t109 != 603979776LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x5173 = 1LLU;
	int32_t x5174 = INT32_MIN;
	static int16_t x5175 = -1;

    t110 = ((x5173*(x5174|x5175))<<x5176);

    if (t110 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x5341 = -43612LL;
	volatile int8_t x5342 = -50;
	volatile int8_t x5343 = INT8_MIN;

    t111 = ((x5341*(x5342|x5343))<<x5344);

    if (t111 != 558233600LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x5364 = 12LLU;
	int32_t t112 = -2685439;

    t112 = ((x5361*(x5362|x5363))<<x5364);

    if (t112 != 134090752) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x5385 = -1LL;
	int64_t x5387 = -1LL;

    t113 = ((x5385*(x5386|x5387))<<x5388);

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x5393 = -1757LL;
	int8_t x5394 = INT8_MIN;
	int8_t x5395 = -1;
	uint8_t x5396 = 18U;
	volatile int64_t t114 = 27563216218369LL;

    t114 = ((x5393*(x5394|x5395))<<x5396);

    if (t114 != 460587008LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x5409 = INT16_MIN;
	static volatile uint64_t x5411 = 130229LLU;
	int8_t x5412 = 2;
	static uint64_t t115 = 3100572739173118328LLU;

    t115 = ((x5409*(x5410|x5411))<<x5412);

    if (t115 != 18446744056630476800LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x5453 = -23;
	volatile int32_t x5455 = INT32_MAX;
	volatile int8_t x5456 = 19;
	int32_t t116 = 26;

    t116 = ((x5453*(x5454|x5455))<<x5456);

    if (t116 != 12058624) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x5482 = -1LL;
	static volatile int8_t x5483 = INT8_MIN;
	static uint16_t x5484 = 30U;

    t117 = ((x5481*(x5482|x5483))<<x5484);

    if (t117 != 10580464072900214784LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x5485 = 10602U;
	int32_t x5486 = INT32_MIN;
	int32_t x5487 = -1;
	uint8_t x5488 = 8U;
	static volatile uint32_t t118 = 690U;

    t118 = ((x5485*(x5486|x5487))<<x5488);

    if (t118 != 4292253184U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x5513 = UINT8_MAX;
	uint8_t x5516 = 1U;
	uint32_t t119 = 1U;

    t119 = ((x5513*(x5514|x5515))<<x5516);

    if (t119 != 60448770U) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x5565 = 4;
	static uint64_t x5566 = UINT64_MAX;
	volatile int8_t x5568 = 1;
	volatile uint64_t t120 = 79943686575580133LLU;

    t120 = ((x5565*(x5566|x5567))<<x5568);

    if (t120 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x5729 = 6705510LL;
	uint64_t x5730 = 40591206699LLU;
	uint8_t x5732 = 2U;
	uint64_t t121 = 1796947131860256LLU;

    t121 = ((x5729*(x5730|x5731))<<x5732);

    if (t121 != 18446743477482424456LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x5978 = UINT32_MAX;
	static int16_t x5979 = INT16_MAX;
	uint32_t x5980 = 13U;
	static uint32_t t122 = 36U;

    t122 = ((x5977*(x5978|x5979))<<x5980);

    if (t122 != 8192U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x6005 = UINT16_MAX;
	int8_t x6006 = -1;
	uint64_t x6007 = UINT64_MAX;
	int8_t x6008 = 0;
	volatile uint64_t t123 = 2019873134LLU;

    t123 = ((x6005*(x6006|x6007))<<x6008);

    if (t123 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x6017 = 157393143845714089LLU;
	uint32_t x6018 = 6143U;
	int64_t x6019 = -1LL;
	volatile uint8_t x6020 = 7U;
	uint64_t t124 = 1482LLU;

    t124 = ((x6017*(x6018|x6019))<<x6020);

    if (t124 != 16747165735167699840LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x6097 = -25652006;
	static int16_t x6098 = -1;
	volatile uint32_t x6099 = 128606U;
	volatile uint32_t t125 = 13171142U;

    t125 = ((x6097*(x6098|x6099))<<x6100);

    if (t125 != 1991401472U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x6161 = UINT64_MAX;
	volatile uint16_t x6164 = 1U;
	static uint64_t t126 = 3227501274685640697LLU;

    t126 = ((x6161*(x6162|x6163))<<x6164);

    if (t126 != 18446744073709551154LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x6185 = INT8_MIN;
	static uint32_t x6186 = 4470126U;
	int8_t x6187 = INT8_MIN;
	int8_t x6188 = 28;
	static volatile uint32_t t127 = 660417U;

    t127 = ((x6185*(x6186|x6187))<<x6188);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x6214 = -1;
	int64_t x6215 = -1LL;
	uint16_t x6216 = 2U;

    t128 = ((x6213*(x6214|x6215))<<x6216);

    if (t128 != 18446744073708914520LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x6225 = INT16_MIN;
	static uint32_t x6227 = 24442397U;
	int32_t x6228 = 3;
	volatile uint32_t t129 = 77U;

    t129 = ((x6225*(x6226|x6227))<<x6228);

    if (t129 != 621019136U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x6361 = INT8_MIN;
	uint16_t x6362 = 3420U;
	static volatile uint32_t x6363 = 1002U;
	static volatile uint8_t x6364 = 4U;
	static uint32_t t130 = 23728949U;

    t130 = ((x6361*(x6362|x6363))<<x6364);

    if (t130 != 4286582784U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x6437 = 1937U;
	volatile int8_t x6438 = INT8_MAX;
	static uint16_t x6440 = 0U;

    t131 = ((x6437*(x6438|x6439))<<x6440);

    if (t131 != 7684079) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x6441 = 256U;
	volatile int8_t x6443 = 0;
	volatile uint32_t t132 = 747061U;

    t132 = ((x6441*(x6442|x6443))<<x6444);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x6481 = 0;
	int64_t x6482 = 11125375LL;
	volatile int16_t x6483 = INT16_MIN;
	uint8_t x6484 = 1U;
	volatile int64_t t133 = -1997805378693107088LL;

    t133 = ((x6481*(x6482|x6483))<<x6484);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x6489 = INT32_MIN;
	int32_t x6490 = INT32_MIN;
	static int64_t x6491 = INT64_MIN;
	volatile int64_t x6492 = 0LL;
	int64_t t134 = -3836683LL;

    t134 = ((x6489*(x6490|x6491))<<x6492);

    if (t134 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x6513 = UINT32_MAX;
	volatile int32_t x6515 = -1;
	uint8_t x6516 = 4U;
	uint32_t t135 = 1825919047U;

    t135 = ((x6513*(x6514|x6515))<<x6516);

    if (t135 != 16U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x6525 = 21;
	volatile uint16_t x6526 = UINT16_MAX;
	uint8_t x6527 = 25U;
	uint16_t x6528 = 7U;

    t136 = ((x6525*(x6526|x6527))<<x6528);

    if (t136 != 176158080) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x6571 = UINT32_MAX;
	uint32_t t137 = 11U;

    t137 = ((x6569*(x6570|x6571))<<x6572);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x6641 = INT16_MAX;
	uint16_t x6643 = 10U;
	uint8_t x6644 = 2U;
	uint64_t t138 = 253731LLU;

    t138 = ((x6641*(x6642|x6643))<<x6644);

    if (t138 != 1422827940996LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x6653 = 20U;
	volatile uint32_t x6654 = 631876U;
	int64_t x6656 = 1LL;
	volatile uint32_t t139 = 848U;

    t139 = ((x6653*(x6654|x6655))<<x6656);

    if (t139 != 4294967216U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x6670 = INT32_MIN;
	uint64_t x6671 = 6118614LLU;
	static uint64_t x6672 = 5LLU;

    t140 = ((x6669*(x6670|x6671))<<x6672);

    if (t140 != 18445456650789270272LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x6693 = UINT64_MAX;
	int32_t x6695 = INT32_MIN;
	uint8_t x6696 = 3U;

    t141 = ((x6693*(x6694|x6695))<<x6696);

    if (t141 != 18446744039349813256LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x6781 = UINT32_MAX;
	static volatile int16_t x6782 = INT16_MIN;
	int16_t x6783 = -16;
	static int8_t x6784 = 19;
	volatile uint32_t t142 = 25U;

    t142 = ((x6781*(x6782|x6783))<<x6784);

    if (t142 != 8388608U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x6877 = INT32_MIN;
	volatile int32_t x6879 = -112219441;
	int8_t x6880 = 11;
	volatile uint32_t t143 = 2U;

    t143 = ((x6877*(x6878|x6879))<<x6880);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x7081 = INT8_MIN;
	int16_t x7083 = INT16_MIN;
	int8_t x7084 = 2;
	static volatile int64_t t144 = -4941854277921331LL;

    t144 = ((x7081*(x7082|x7083))<<x7084);

    if (t144 != 512LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x7089 = -186197908915703849LL;
	int8_t x7090 = INT8_MAX;
	int8_t x7091 = INT8_MIN;
	uint8_t x7092 = 0U;
	volatile int64_t t145 = -135LL;

    t145 = ((x7089*(x7090|x7091))<<x7092);

    if (t145 != 186197908915703849LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x7113 = INT8_MIN;
	static volatile int64_t t146 = -4174168LL;

    t146 = ((x7113*(x7114|x7115))<<x7116);

    if (t146 != 190849280LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x7133 = UINT32_MAX;
	volatile uint32_t t147 = 1158U;

    t147 = ((x7133*(x7134|x7135))<<x7136);

    if (t147 != 2089024U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x7149 = -53254264009LL;
	int8_t x7150 = INT8_MAX;
	int16_t x7151 = INT16_MIN;
	static volatile int8_t x7152 = 2;
	static int64_t t148 = -4LL;

    t148 = ((x7149*(x7150|x7151))<<x7152);

    if (t148 != 6953089726071076LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x7221 = 7426U;
	static uint64_t x7222 = 8308888876526435258LLU;
	int8_t x7223 = 16;
	uint32_t x7224 = 1U;

    t149 = ((x7221*(x7222|x7223))<<x7224);

    if (t149 != 13346485127425692392LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x7270 = -1;
	volatile int64_t x7271 = -40636212161039899LL;
	int8_t x7272 = 31;
	volatile int64_t t150 = 24910590169748803LL;

    t150 = ((x7269*(x7270|x7271))<<x7272);

    if (t150 != 25769803776LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x7317 = -102;
	static int8_t x7318 = -2;
	static int16_t x7319 = -18;
	int8_t x7320 = 10;
	static volatile int32_t t151 = -2;

    t151 = ((x7317*(x7318|x7319))<<x7320);

    if (t151 != 208896) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x7337 = 4U;
	volatile int8_t x7340 = 3;
	volatile int32_t t152 = 87;

    t152 = ((x7337*(x7338|x7339))<<x7340);

    if (t152 != 1048544) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x7357 = UINT32_MAX;
	volatile int16_t x7358 = INT16_MIN;
	int8_t x7359 = -7;

    t153 = ((x7357*(x7358|x7359))<<x7360);

    if (t153 != 229376U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x7379 = 4U;
	int16_t x7380 = 0;
	volatile uint32_t t154 = 245806990U;

    t154 = ((x7377*(x7378|x7379))<<x7380);

    if (t154 != 2064U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x7521 = INT8_MIN;
	int64_t x7522 = -1LL;
	int32_t x7523 = INT32_MAX;
	uint32_t x7524 = 31U;

    t155 = ((x7521*(x7522|x7523))<<x7524);

    if (t155 != 274877906944LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x7545 = 10U;
	int8_t x7546 = -1;
	uint32_t x7547 = 1780U;
	static volatile uint32_t t156 = 73845918U;

    t156 = ((x7545*(x7546|x7547))<<x7548);

    if (t156 != 4294967286U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x7605 = INT8_MAX;
	uint8_t x7606 = UINT8_MAX;
	uint32_t x7607 = 1996680U;
	volatile uint8_t x7608 = 3U;

    t157 = ((x7605*(x7606|x7607))<<x7608);

    if (t157 != 2028747784U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x7649 = UINT32_MAX;
	uint64_t x7651 = 3LLU;
	uint8_t x7652 = 0U;
	uint64_t t158 = 15842LLU;

    t158 = ((x7649*(x7650|x7651))<<x7652);

    if (t158 != 4187593112625LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x7749 = 57LLU;
	int16_t x7750 = -1;
	int64_t x7751 = INT64_MIN;
	volatile uint64_t t159 = 4001206333773246905LLU;

    t159 = ((x7749*(x7750|x7751))<<x7752);

    if (t159 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x7789 = -4;
	volatile int16_t x7790 = -1;
	int8_t x7791 = INT8_MIN;
	volatile int32_t x7792 = 4;

    t160 = ((x7789*(x7790|x7791))<<x7792);

    if (t160 != 64) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x7817 = INT8_MIN;
	int32_t x7818 = 468707596;
	int32_t t161 = -13990;

    t161 = ((x7817*(x7818|x7819))<<x7820);

    if (t161 != 723456) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x7821 = 585677995U;
	static uint32_t x7822 = UINT32_MAX;
	uint16_t x7823 = 32302U;
	int32_t x7824 = 1;
	uint32_t t162 = 830U;

    t162 = ((x7821*(x7822|x7823))<<x7824);

    if (t162 != 3123611306U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x7885 = -1;
	uint32_t x7886 = UINT32_MAX;
	int32_t x7887 = INT32_MIN;
	uint32_t x7888 = 1U;

    t163 = ((x7885*(x7886|x7887))<<x7888);

    if (t163 != 2U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x7961 = -298072;
	static int8_t x7962 = -1;
	static volatile int16_t x7963 = INT16_MIN;
	static int8_t x7964 = 0;
	int32_t t164 = -7564698;

    t164 = ((x7961*(x7962|x7963))<<x7964);

    if (t164 != 298072) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x8002 = INT32_MIN;
	uint8_t x8003 = 23U;
	static int16_t x8004 = 1;
	static int32_t t165 = 155010;

    t165 = ((x8001*(x8002|x8003))<<x8004);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x8018 = 13177954174705LLU;
	int8_t x8019 = INT8_MIN;
	uint8_t x8020 = 1U;
	uint64_t t166 = 10942913LLU;

    t166 = ((x8017*(x8018|x8019))<<x8020);

    if (t166 != 30LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x8049 = INT8_MIN;
	int16_t x8050 = -7093;
	uint8_t x8052 = 0U;

    t167 = ((x8049*(x8050|x8051))<<x8052);

    if (t167 != 907904) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x8185 = INT16_MAX;
	uint64_t x8186 = 954579LLU;
	uint64_t x8187 = 252LLU;
	int8_t x8188 = 0;

    t168 = ((x8185*(x8186|x8187))<<x8188);

    if (t168 != 31280131841LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x8245 = -3211948421875LL;
	uint64_t x8246 = 25206353LLU;
	uint64_t x8248 = 54LLU;
	uint64_t t169 = 359788949013865LLU;

    t169 = ((x8245*(x8246|x8247))<<x8248);

    if (t169 != 13600870874658897920LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x8261 = -189;
	uint32_t x8263 = UINT32_MAX;
	volatile uint16_t x8264 = 6U;
	uint32_t t170 = 5U;

    t170 = ((x8261*(x8262|x8263))<<x8264);

    if (t170 != 12096U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x8373 = INT32_MIN;
	volatile int32_t x8374 = -1;
	static int64_t x8375 = -151726068559449510LL;
	uint16_t x8376 = 16U;

    t171 = ((x8373*(x8374|x8375))<<x8376);

    if (t171 != 140737488355328LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x8433 = UINT32_MAX;
	int16_t x8434 = -5;
	uint64_t x8435 = UINT64_MAX;
	static volatile uint8_t x8436 = 1U;
	uint64_t t172 = 452LLU;

    t172 = ((x8433*(x8434|x8435))<<x8436);

    if (t172 != 18446744065119617026LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x8444 = 26;
	uint32_t t173 = 9288785U;

    t173 = ((x8441*(x8442|x8443))<<x8444);

    if (t173 != 1342177280U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x8507 = 204697329U;
	int64_t x8508 = 0LL;
	volatile uint32_t t174 = 58329U;

    t174 = ((x8505*(x8506|x8507))<<x8508);

    if (t174 != 3728399994U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x8617 = -51;
	int32_t x8618 = 95;
	int16_t x8619 = INT16_MIN;
	int32_t t175 = 48498;

    t175 = ((x8617*(x8618|x8619))<<x8620);

    if (t175 != 3332646) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x8669 = -2441;
	uint64_t x8670 = UINT64_MAX;
	static int8_t x8672 = 61;
	static uint64_t t176 = 6653630696652574LLU;

    t176 = ((x8669*(x8670|x8671))<<x8672);

    if (t176 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x8773 = -1;
	volatile int16_t x8774 = -1;
	int8_t x8775 = INT8_MAX;
	int8_t x8776 = 0;
	int32_t t177 = 710124;

    t177 = ((x8773*(x8774|x8775))<<x8776);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x8842 = INT16_MIN;
	int8_t x8843 = INT8_MIN;
	volatile uint8_t x8844 = 1U;
	volatile int32_t t178 = -177;

    t178 = ((x8841*(x8842|x8843))<<x8844);

    if (t178 != 256) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x8865 = INT32_MAX;
	uint64_t x8866 = UINT64_MAX;
	int32_t x8867 = INT32_MAX;
	static volatile uint64_t t179 = 8883098642315067176LLU;

    t179 = ((x8865*(x8866|x8867))<<x8868);

    if (t179 != 2199023255552LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x8897 = 2U;
	volatile uint32_t x8898 = 903267U;
	static int32_t x8899 = INT32_MIN;
	int16_t x8900 = 1;

    t180 = ((x8897*(x8898|x8899))<<x8900);

    if (t180 != 3613068U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x8925 = -12;
	int16_t x8926 = INT16_MIN;
	int32_t x8927 = -1;
	volatile int16_t x8928 = 0;
	static volatile int32_t t181 = 294297361;

    t181 = ((x8925*(x8926|x8927))<<x8928);

    if (t181 != 12) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x8965 = -1;
	int32_t x8967 = -1;
	static uint8_t x8968 = 24U;
	int32_t t182 = -65112945;

    t182 = ((x8965*(x8966|x8967))<<x8968);

    if (t182 != 16777216) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x9032 = 40;
	volatile int64_t t183 = -91914922LL;

    t183 = ((x9029*(x9030|x9031))<<x9032);

    if (t183 != 183376549280481280LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x9041 = INT32_MIN;
	volatile uint64_t x9042 = UINT64_MAX;
	uint16_t x9043 = 5775U;
	volatile int32_t x9044 = 53;
	static volatile uint64_t t184 = 3LLU;

    t184 = ((x9041*(x9042|x9043))<<x9044);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x9100 = 38;
	uint64_t t185 = 193527391561172LLU;

    t185 = ((x9097*(x9098|x9099))<<x9100);

    if (t185 != 12101600183645634560LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x9161 = -1;
	volatile uint64_t x9162 = UINT64_MAX;
	volatile uint64_t x9163 = 1112068143LLU;
	int8_t x9164 = 22;
	uint64_t t186 = 0LLU;

    t186 = ((x9161*(x9162|x9163))<<x9164);

    if (t186 != 4194304LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x9225 = -7153LL;
	volatile int16_t x9226 = -1;
	volatile int32_t x9227 = INT32_MIN;
	uint32_t x9228 = 34U;
	static volatile int64_t t187 = 76731814759LL;

    t187 = ((x9225*(x9226|x9227))<<x9228);

    if (t187 != 122887604273152LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x9333 = INT8_MAX;
	int16_t x9334 = INT16_MIN;
	uint32_t x9335 = UINT32_MAX;
	static uint8_t x9336 = 5U;
	volatile uint32_t t188 = 10994U;

    t188 = ((x9333*(x9334|x9335))<<x9336);

    if (t188 != 4294963232U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x9361 = 11399022276LLU;
	uint32_t x9362 = UINT32_MAX;
	int16_t x9363 = -430;
	volatile uint64_t t189 = 32720342231LLU;

    t189 = ((x9361*(x9362|x9363))<<x9364);

    if (t189 != 13232526423209319936LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x9377 = -1LL;
	int32_t x9378 = INT32_MIN;
	volatile int16_t x9379 = -1;
	uint16_t x9380 = 8U;
	volatile int64_t t190 = 36785703LL;

    t190 = ((x9377*(x9378|x9379))<<x9380);

    if (t190 != 256LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x9442 = -375537;
	int16_t x9443 = -1;
	uint8_t x9444 = 1U;
	int32_t t191 = 2689891;

    t191 = ((x9441*(x9442|x9443))<<x9444);

    if (t191 != 256) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x9489 = 88728398LLU;
	int64_t x9490 = INT64_MAX;
	int32_t x9491 = -1;
	uint8_t x9492 = 3U;
	uint64_t t192 = 1458668671130LLU;

    t192 = ((x9489*(x9490|x9491))<<x9492);

    if (t192 != 18446744072999724432LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x9526 = INT32_MIN;
	int32_t x9527 = -1;
	uint16_t x9528 = 1U;
	uint64_t t193 = 1140LLU;

    t193 = ((x9525*(x9526|x9527))<<x9528);

    if (t193 != 18446744073709537282LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x9553 = INT8_MIN;
	volatile uint64_t x9554 = 1489256033557182041LLU;
	int16_t x9555 = -1;
	uint8_t x9556 = 0U;
	volatile uint64_t t194 = 48LLU;

    t194 = ((x9553*(x9554|x9555))<<x9556);

    if (t194 != 128LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x9605 = -24;
	uint8_t x9608 = 0U;

    t195 = ((x9605*(x9606|x9607))<<x9608);

    if (t195 != 24U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x9617 = UINT64_MAX;
	volatile uint16_t x9618 = 31385U;
	static int32_t x9619 = -1;
	static uint64_t t196 = 760381714091160367LLU;

    t196 = ((x9617*(x9618|x9619))<<x9620);

    if (t196 != 32768LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x9690 = INT64_MIN;
	volatile uint64_t x9692 = 57LLU;
	int64_t t197 = -3741182204505944LL;

    t197 = ((x9689*(x9690|x9691))<<x9692);

    if (t197 != 144115188075855872LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x9733 = UINT8_MAX;
	static volatile uint64_t x9734 = UINT64_MAX;
	static int32_t x9735 = INT32_MAX;
	uint8_t x9736 = 1U;
	uint64_t t198 = 16LLU;

    t198 = ((x9733*(x9734|x9735))<<x9736);

    if (t198 != 18446744073709551106LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x9737 = 3U;
	int8_t x9738 = INT8_MIN;
	volatile uint64_t x9739 = 1590481565612737562LLU;

    t199 = ((x9737*(x9738|x9739))<<x9740);

    if (t199 != 7421932185906577408LLU) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

