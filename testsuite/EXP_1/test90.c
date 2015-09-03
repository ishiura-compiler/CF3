#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x46 = INT16_MAX;
int8_t x47 = 0;
static uint32_t x83 = 19U;
static int64_t t4 = 47LL;
int16_t x134 = 6;
volatile int64_t x161 = 374952835425355LL;
int16_t x169 = 72;
static volatile int32_t t7 = -118874;
volatile int64_t t8 = -120886016550241LL;
volatile uint64_t t12 = 1418127905LLU;
int64_t t13 = 0LL;
uint64_t t15 = 2113294806950204LLU;
int16_t x536 = 1;
int8_t x601 = -21;
uint16_t x603 = 4U;
uint8_t x627 = 23U;
volatile int32_t x790 = INT32_MIN;
volatile uint64_t x845 = 9752821135LLU;
int16_t x846 = -14;
int16_t x848 = -15320;
int64_t x878 = -1LL;
static int8_t x895 = 0;
int16_t x911 = 3;
uint8_t x919 = 25U;
volatile uint32_t x951 = 4U;
volatile int32_t t37 = 1;
uint8_t x1127 = 3U;
uint64_t x1281 = 1525417871282034335LLU;
static int64_t x1282 = -10693628815LL;
uint64_t x1348 = UINT64_MAX;
uint32_t x1437 = 175024991U;
uint16_t x1439 = 3U;
int32_t x1505 = 11396;
int8_t x1507 = 0;
uint64_t t48 = 2113LLU;
volatile int64_t t50 = -1166380110227694501LL;
uint64_t x1565 = 1237384640917859200LLU;
static int64_t x1607 = 1LL;
uint16_t x1608 = 2738U;
volatile int64_t t52 = 522911332870616503LL;
int64_t x1748 = 3218LL;
uint32_t x1865 = 36666U;
static volatile int8_t x1878 = INT8_MAX;
volatile int16_t x1896 = -1;
uint64_t x2068 = 78236021739LLU;
int64_t x2079 = 1LL;
int64_t x2084 = -200502LL;
static int16_t x2093 = INT16_MAX;
volatile uint16_t x2111 = 28U;
int16_t x2112 = -69;
int16_t x2138 = 506;
static int32_t x2140 = -4337550;
static int64_t x2460 = -4267282844LL;
uint16_t x2774 = 20U;
int64_t x2775 = 0LL;
uint64_t x2794 = 124459839142861562LLU;
int32_t x2795 = 2;
volatile int64_t x2989 = -87679776LL;
int16_t x3063 = 0;
static int32_t x3064 = INT32_MAX;
static int16_t x3102 = 1;
static volatile int32_t t84 = -110394;
int16_t x3131 = 12;
int16_t x3249 = INT16_MIN;
int64_t t88 = -24806142988LL;
uint8_t x3323 = 13U;
static volatile int64_t t91 = 308093446611LL;
volatile uint8_t x3455 = 7U;
uint32_t x3489 = 266U;
uint8_t x3538 = 64U;
static int32_t x3540 = INT32_MIN;
int16_t x3783 = 1;


void f0(void) {
	uint32_t x1 = 42436354U;
	int16_t x2 = INT16_MAX;
	int64_t x3 = 0LL;
	int64_t x4 = -123195952562443LL;
	int64_t t0 = -3539216162LL;

	t0 = (((x1+x2)>>x3)|x4);

	if (t0 != -123195910094859LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x45 = 20U;
	int32_t x48 = INT32_MAX;
	volatile int32_t t1 = INT32_MAX;

	t1 = (((x45+x46)>>x47)|x48);

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x73 = 1358808851535409LL;
	int16_t x74 = 435;
	static volatile uint64_t x75 = 1LLU;
	volatile int64_t x76 = INT64_MIN;
	int64_t t2 = -9469230LL;

	t2 = (((x73+x74)>>x75)|x76);

	if (t2 != -9222692632429007886LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x81 = -1;
	int64_t x82 = 44228445402377LL;
	uint8_t x84 = 3U;
	volatile int64_t t3 = -6895061334LL;

	t3 = (((x81+x82)>>x83)|x84);

	if (t3 != 84359067LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x121 = 627U;
	uint8_t x122 = 0U;
	uint8_t x123 = 3U;
	int64_t x124 = -1LL;

	t4 = (((x121+x122)>>x123)|x124);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x133 = 3311140U;
	uint8_t x135 = 15U;
	int16_t x136 = INT16_MIN;
	uint32_t t5 = 951646U;

	t5 = (((x133+x134)>>x135)|x136);

	if (t5 != 4294934629U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x162 = UINT32_MAX;
	uint8_t x163 = 18U;
	int8_t x164 = -1;
	int64_t t6 = -7230LL;

	t6 = (((x161+x162)>>x163)|x164);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x170 = UINT16_MAX;
	uint32_t x171 = 22U;
	int16_t x172 = -1882;

	t7 = (((x169+x170)>>x171)|x172);

	if (t7 != -1882) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x221 = 1U;
	static int64_t x222 = -1LL;
	int8_t x223 = 0;
	uint8_t x224 = 2U;

	t8 = (((x221+x222)>>x223)|x224);

	if (t8 != 2LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x233 = 2;
	int16_t x234 = INT16_MAX;
	uint64_t x235 = 31LLU;
	volatile int8_t x236 = -1;
	int32_t t9 = -968477968;

	t9 = (((x233+x234)>>x235)|x236);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x297 = INT32_MAX;
	static volatile uint32_t x298 = 440282U;
	int16_t x299 = 2;
	static int64_t x300 = INT64_MIN;
	static volatile int64_t t10 = 3171603LL;

	t10 = (((x297+x298)>>x299)|x300);

	if (t10 != -9223372036317794826LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x305 = -16;
	static int32_t x306 = 108870;
	int8_t x307 = 1;
	uint64_t x308 = 500109787666270LLU;
	volatile uint64_t t11 = 3671518250LLU;

	t11 = (((x305+x306)>>x307)|x308);

	if (t11 != 500109787715551LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	int8_t x319 = 53;
	uint8_t x320 = 1U;

	t12 = (((x317+x318)>>x319)|x320);

	if (t12 != 2047LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x357 = -1;
	int64_t x358 = 268663207837058788LL;
	static uint16_t x359 = 1U;
	int8_t x360 = INT8_MIN;

	t13 = (((x357+x358)>>x359)|x360);

	if (t13 != -15LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x385 = 1801866098044906633LLU;
	int16_t x386 = INT16_MAX;
	uint8_t x387 = 10U;
	uint16_t x388 = 125U;
	static volatile uint64_t t14 = 6LLU;

	t14 = (((x385+x386)>>x387)|x388);

	if (t14 != 1759634861372031LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x493 = 6U;
	static uint64_t x494 = 2081531415795875766LLU;
	static int16_t x495 = 5;
	int16_t x496 = INT16_MAX;

	t15 = (((x493+x494)>>x495)|x496);

	if (t15 != 65047856743645183LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x525 = 2;
	uint64_t x526 = 63797LLU;
	int8_t x527 = 15;
	int64_t x528 = -1LL;
	uint64_t t16 = UINT64_MAX;

	t16 = (((x525+x526)>>x527)|x528);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x533 = 63478855086568856LLU;
	volatile int64_t x534 = INT64_MAX;
	uint64_t x535 = 12LLU;
	static uint64_t t17 = 9LLU;

	t17 = (((x533+x534)>>x535)|x536);

	if (t17 != 2267297581040367LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x545 = UINT16_MAX;
	int16_t x546 = INT16_MIN;
	int8_t x547 = 20;
	volatile int64_t x548 = INT64_MIN;
	volatile int64_t t18 = INT64_MIN;

	t18 = (((x545+x546)>>x547)|x548);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x602 = UINT32_MAX;
	uint32_t x604 = 6630U;
	volatile uint32_t t19 = 2017U;

	t19 = (((x601+x602)>>x603)|x604);

	if (t19 != 268435454U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x625 = 123U;
	int16_t x626 = -1;
	volatile uint16_t x628 = UINT16_MAX;
	volatile int32_t t20 = -965;

	t20 = (((x625+x626)>>x627)|x628);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x661 = INT8_MAX;
	uint32_t x662 = UINT32_MAX;
	uint32_t x663 = 16U;
	volatile int32_t x664 = INT32_MAX;
	uint32_t t21 = 25257U;

	t21 = (((x661+x662)>>x663)|x664);

	if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x685 = INT8_MAX;
	int16_t x686 = -1;
	volatile int8_t x687 = 31;
	static uint64_t x688 = 9116LLU;
	uint64_t t22 = 12281695LLU;

	t22 = (((x685+x686)>>x687)|x688);

	if (t22 != 9116LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x705 = 587352641720LLU;
	volatile int8_t x706 = 2;
	int8_t x707 = 37;
	int8_t x708 = INT8_MIN;
	volatile uint64_t t23 = 128806629224079291LLU;

	t23 = (((x705+x706)>>x707)|x708);

	if (t23 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x729 = INT32_MAX;
	uint64_t x730 = 4417418736614063446LLU;
	static uint8_t x731 = 14U;
	static volatile uint32_t x732 = 248U;
	static uint64_t t24 = 12LLU;

	t24 = (((x729+x730)>>x731)|x732);

	if (t24 != 269617842942204LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x753 = 19660986863490281LLU;
	static int32_t x754 = -6;
	int8_t x755 = 0;
	int8_t x756 = -4;
	static uint64_t t25 = UINT64_MAX;

	t25 = (((x753+x754)>>x755)|x756);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x765 = INT8_MIN;
	uint64_t x766 = UINT64_MAX;
	uint64_t x767 = 3LLU;
	int8_t x768 = -1;
	uint64_t t26 = UINT64_MAX;

	t26 = (((x765+x766)>>x767)|x768);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x789 = 836988377U;
	uint16_t x791 = 29U;
	int16_t x792 = INT16_MIN;
	uint32_t t27 = 60U;

	t27 = (((x789+x790)>>x791)|x792);

	if (t27 != 4294934533U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x821 = INT64_MIN;
	uint64_t x822 = 90934769332099LLU;
	int16_t x823 = 28;
	static int32_t x824 = -1;
	static volatile uint64_t t28 = UINT64_MAX;

	t28 = (((x821+x822)>>x823)|x824);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x833 = 2095662962LL;
	static int32_t x834 = -3;
	int16_t x835 = 12;
	uint64_t x836 = 519LLU;
	volatile uint64_t t29 = 5306958030159LLU;

	t29 = (((x833+x834)>>x835)|x836);

	if (t29 != 511639LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x837 = UINT8_MAX;
	uint32_t x838 = 6U;
	uint16_t x839 = 0U;
	int64_t x840 = -1LL;
	int64_t t30 = -312761316782LL;

	t30 = (((x837+x838)>>x839)|x840);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x847 = 61U;
	uint64_t t31 = 2818368352637049LLU;

	t31 = (((x845+x846)>>x847)|x848);

	if (t31 != 18446744073709536296LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x877 = UINT16_MAX;
	uint8_t x879 = 57U;
	int16_t x880 = -1;
	static volatile int64_t t32 = -370425600LL;

	t32 = (((x877+x878)>>x879)|x880);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x881 = INT64_MAX;
	int8_t x882 = INT8_MIN;
	int16_t x883 = 42;
	int8_t x884 = INT8_MIN;
	volatile int64_t t33 = 26LL;

	t33 = (((x881+x882)>>x883)|x884);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x893 = 0LL;
	int8_t x894 = INT8_MAX;
	int16_t x896 = INT16_MIN;
	volatile int64_t t34 = 19105882316574LL;

	t34 = (((x893+x894)>>x895)|x896);

	if (t34 != -32641LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x909 = 2U;
	int8_t x910 = INT8_MAX;
	static int32_t x912 = INT32_MIN;
	volatile uint32_t t35 = 3438U;

	t35 = (((x909+x910)>>x911)|x912);

	if (t35 != 2147483664U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x917 = 3283U;
	uint8_t x918 = 23U;
	int16_t x920 = INT16_MIN;
	volatile int32_t t36 = 14311997;

	t36 = (((x917+x918)>>x919)|x920);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x949 = 12U;
	int16_t x950 = -1;
	int32_t x952 = -1;

	t37 = (((x949+x950)>>x951)|x952);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1101 = 15123U;
	int32_t x1102 = -188;
	static uint32_t x1103 = 0U;
	int8_t x1104 = INT8_MAX;
	int32_t t38 = -7706653;

	t38 = (((x1101+x1102)>>x1103)|x1104);

	if (t38 != 14975) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1125 = -1;
	uint32_t x1126 = 336U;
	volatile int64_t x1128 = 2164288534033LL;
	volatile int64_t t39 = -7759LL;

	t39 = (((x1125+x1126)>>x1127)|x1128);

	if (t39 != 2164288534073LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x1283 = 0;
	volatile int64_t x1284 = INT64_MIN;
	static uint64_t t40 = 24537974LLU;

	t40 = (((x1281+x1282)>>x1283)|x1284);

	if (t40 != 10748789897443181328LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1309 = 804U;
	static uint32_t x1310 = 76U;
	uint64_t x1311 = 2LLU;
	volatile int16_t x1312 = INT16_MAX;
	uint32_t t41 = 58U;

	t41 = (((x1309+x1310)>>x1311)|x1312);

	if (t41 != 32767U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1345 = -1;
	static uint32_t x1346 = 52975U;
	uint8_t x1347 = 2U;
	static uint64_t t42 = UINT64_MAX;

	t42 = (((x1345+x1346)>>x1347)|x1348);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x1401 = UINT8_MAX;
	uint32_t x1402 = UINT32_MAX;
	uint16_t x1403 = 0U;
	volatile int64_t x1404 = 1067918018728LL;
	static volatile int64_t t43 = -33LL;

	t43 = (((x1401+x1402)>>x1403)|x1404);

	if (t43 != 1067918018814LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1421 = 15U;
	volatile uint64_t x1422 = 1695156203610LLU;
	int8_t x1423 = 1;
	int64_t x1424 = -596LL;
	volatile uint64_t t44 = 250413980LLU;

	t44 = (((x1421+x1422)>>x1423)|x1424);

	if (t44 != 18446744073709551036LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1438 = 13049U;
	int8_t x1440 = INT8_MIN;
	uint32_t t45 = 36902540U;

	t45 = (((x1437+x1438)>>x1439)|x1440);

	if (t45 != 4294967243U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1506 = INT16_MAX;
	int64_t x1508 = INT64_MIN;
	volatile int64_t t46 = -22329440LL;

	t46 = (((x1505+x1506)>>x1507)|x1508);

	if (t46 != -9223372036854731645LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1517 = INT16_MIN;
	volatile uint16_t x1518 = UINT16_MAX;
	uint8_t x1519 = 13U;
	int32_t x1520 = -1;
	volatile int32_t t47 = -26;

	t47 = (((x1517+x1518)>>x1519)|x1520);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1525 = INT8_MIN;
	uint64_t x1526 = 2052078855953002788LLU;
	static int16_t x1527 = 1;
	int8_t x1528 = INT8_MIN;

	t48 = (((x1525+x1526)>>x1527)|x1528);

	if (t48 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x1529 = 1113771436800LLU;
	int8_t x1530 = 19;
	int64_t x1531 = 0LL;
	volatile int16_t x1532 = INT16_MIN;
	volatile uint64_t t49 = 143738885LLU;

	t49 = (((x1529+x1530)>>x1531)|x1532);

	if (t49 != 18446744073709546259LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1561 = 37U;
	int8_t x1562 = -1;
	static int8_t x1563 = 7;
	int64_t x1564 = -312556LL;

	t50 = (((x1561+x1562)>>x1563)|x1564);

	if (t50 != -312556LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1566 = -1;
	static volatile uint8_t x1567 = 1U;
	volatile uint8_t x1568 = UINT8_MAX;
	static uint64_t t51 = 7LLU;

	t51 = (((x1565+x1566)>>x1567)|x1568);

	if (t51 != 618692320458929663LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1605 = -1LL;
	uint32_t x1606 = 1239U;

	t52 = (((x1605+x1606)>>x1607)|x1608);

	if (t52 != 2811LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x1649 = 62U;
	uint64_t x1650 = UINT64_MAX;
	volatile uint16_t x1651 = 1U;
	int16_t x1652 = 6;
	volatile uint64_t t53 = 565LLU;

	t53 = (((x1649+x1650)>>x1651)|x1652);

	if (t53 != 30LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1677 = 3165510987255360492LLU;
	uint8_t x1678 = UINT8_MAX;
	int16_t x1679 = 15;
	int32_t x1680 = -1133;
	volatile uint64_t t54 = 286212276933757727LLU;

	t54 = (((x1677+x1678)>>x1679)|x1680);

	if (t54 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1745 = 208U;
	int32_t x1746 = -1;
	uint8_t x1747 = 9U;
	int64_t t55 = -1732595138054268LL;

	t55 = (((x1745+x1746)>>x1747)|x1748);

	if (t55 != 3218LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1793 = 13LL;
	static uint16_t x1794 = UINT16_MAX;
	volatile int16_t x1795 = 48;
	int16_t x1796 = INT16_MAX;
	int64_t t56 = 1467280969LL;

	t56 = (((x1793+x1794)>>x1795)|x1796);

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x1866 = -14;
	volatile int8_t x1867 = 22;
	static int64_t x1868 = -1LL;
	int64_t t57 = 15282873394839LL;

	t57 = (((x1865+x1866)>>x1867)|x1868);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1877 = 5U;
	static int8_t x1879 = 1;
	uint32_t x1880 = 12502U;
	static uint32_t t58 = 209379U;

	t58 = (((x1877+x1878)>>x1879)|x1880);

	if (t58 != 12502U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x1893 = 5146273;
	static int8_t x1894 = -1;
	uint8_t x1895 = 2U;
	static volatile int32_t t59 = -1;

	t59 = (((x1893+x1894)>>x1895)|x1896);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x2065 = 36516U;
	int16_t x2066 = 1;
	static uint8_t x2067 = 1U;
	uint64_t t60 = 22305964LLU;

	t60 = (((x2065+x2066)>>x2067)|x2068);

	if (t60 != 78236022779LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2077 = 29396U;
	int32_t x2078 = 11419;
	uint16_t x2080 = 11271U;
	volatile int32_t t61 = 2;

	t61 = (((x2077+x2078)>>x2079)|x2080);

	if (t61 != 28599) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2081 = 221639U;
	int32_t x2082 = INT32_MAX;
	uint16_t x2083 = 13U;
	volatile int64_t t62 = 7283057634307340LL;

	t62 = (((x2081+x2082)>>x2083)|x2084);

	if (t62 != -200485LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2094 = 1380435LLU;
	volatile uint8_t x2095 = 16U;
	static volatile int32_t x2096 = 164;
	volatile uint64_t t63 = 780521192605850878LLU;

	t63 = (((x2093+x2094)>>x2095)|x2096);

	if (t63 != 181LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2109 = 1U;
	volatile int8_t x2110 = -1;
	int32_t t64 = -5478595;

	t64 = (((x2109+x2110)>>x2111)|x2112);

	if (t64 != -69) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2137 = INT8_MIN;
	static int8_t x2139 = 1;
	int32_t t65 = -8;

	t65 = (((x2137+x2138)>>x2139)|x2140);

	if (t65 != -4337409) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2189 = -1LL;
	int64_t x2190 = 2925526408LL;
	uint16_t x2191 = 30U;
	int64_t x2192 = INT64_MIN;
	int64_t t66 = -418368LL;

	t66 = (((x2189+x2190)>>x2191)|x2192);

	if (t66 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x2205 = INT16_MAX;
	int64_t x2206 = -1LL;
	int8_t x2207 = 1;
	int64_t x2208 = INT64_MIN;
	int64_t t67 = 106723796173787LL;

	t67 = (((x2205+x2206)>>x2207)|x2208);

	if (t67 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x2217 = -1LL;
	int64_t x2218 = 947LL;
	uint8_t x2219 = 8U;
	uint64_t x2220 = 19387575950057LLU;
	uint64_t t68 = 975910028133233194LLU;

	t68 = (((x2217+x2218)>>x2219)|x2220);

	if (t68 != 19387575950059LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2225 = UINT8_MAX;
	uint32_t x2226 = 31U;
	uint8_t x2227 = 10U;
	uint8_t x2228 = 12U;
	static volatile uint32_t t69 = 56174616U;

	t69 = (((x2225+x2226)>>x2227)|x2228);

	if (t69 != 12U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x2401 = INT16_MAX;
	int8_t x2402 = -1;
	volatile uint8_t x2403 = 3U;
	int8_t x2404 = -1;
	int32_t t70 = -1825607;

	t70 = (((x2401+x2402)>>x2403)|x2404);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x2457 = 387303559U;
	uint16_t x2458 = 2072U;
	volatile int64_t x2459 = 0LL;
	volatile int64_t t71 = -36361LL;

	t71 = (((x2457+x2458)>>x2459)|x2460);

	if (t71 != -3897032961LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2557 = INT16_MIN;
	volatile int64_t x2558 = 4082493118969762679LL;
	uint16_t x2559 = 4U;
	int64_t x2560 = INT64_MAX;
	volatile int64_t t72 = INT64_MAX;

	t72 = (((x2557+x2558)>>x2559)|x2560);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x2581 = INT64_MAX;
	int8_t x2582 = -1;
	uint32_t x2583 = 28U;
	uint32_t x2584 = 0U;
	volatile int64_t t73 = 44150245175368963LL;

	t73 = (((x2581+x2582)>>x2583)|x2584);

	if (t73 != 34359738367LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2677 = 995U;
	volatile int32_t x2678 = -1;
	static volatile int8_t x2679 = 3;
	volatile uint64_t x2680 = 580345906219468LLU;
	uint64_t t74 = 855174545646166081LLU;

	t74 = (((x2677+x2678)>>x2679)|x2680);

	if (t74 != 580345906219516LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x2733 = -1;
	static uint32_t x2734 = UINT32_MAX;
	uint64_t x2735 = 11LLU;
	int16_t x2736 = 786;
	uint32_t t75 = 1016995U;

	t75 = (((x2733+x2734)>>x2735)|x2736);

	if (t75 != 2097151U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2773 = -1LL;
	int16_t x2776 = INT16_MAX;
	volatile int64_t t76 = -1767104875LL;

	t76 = (((x2773+x2774)>>x2775)|x2776);

	if (t76 != 32767LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2793 = INT32_MIN;
	static int32_t x2796 = -76234331;
	volatile uint64_t t77 = 670041LLU;

	t77 = (((x2793+x2794)>>x2795)|x2796);

	if (t77 != 18446744073701091263LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2821 = -1;
	uint32_t x2822 = UINT32_MAX;
	int32_t x2823 = 1;
	uint64_t x2824 = 3LLU;
	volatile uint64_t t78 = 149902LLU;

	t78 = (((x2821+x2822)>>x2823)|x2824);

	if (t78 != 2147483647LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2889 = 508U;
	volatile int16_t x2890 = -1;
	uint8_t x2891 = 6U;
	static uint32_t x2892 = UINT32_MAX;
	static volatile uint32_t t79 = UINT32_MAX;

	t79 = (((x2889+x2890)>>x2891)|x2892);

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2990 = 405LLU;
	volatile uint8_t x2991 = 4U;
	int32_t x2992 = -1;
	static volatile uint64_t t80 = UINT64_MAX;

	t80 = (((x2989+x2990)>>x2991)|x2992);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3029 = -1LL;
	int32_t x3030 = 3;
	static int8_t x3031 = 6;
	uint16_t x3032 = 1U;
	volatile int64_t t81 = 8457340050684LL;

	t81 = (((x3029+x3030)>>x3031)|x3032);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3049 = 10518U;
	volatile int64_t x3050 = -1LL;
	uint64_t x3051 = 1LLU;
	int64_t x3052 = INT64_MIN;
	static int64_t t82 = -964373396LL;

	t82 = (((x3049+x3050)>>x3051)|x3052);

	if (t82 != -9223372036854770550LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3061 = 566076;
	int32_t x3062 = 256153106;
	static volatile int32_t t83 = INT32_MAX;

	t83 = (((x3061+x3062)>>x3063)|x3064);

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x3101 = UINT16_MAX;
	uint16_t x3103 = 2U;
	volatile int16_t x3104 = INT16_MIN;

	t84 = (((x3101+x3102)>>x3103)|x3104);

	if (t84 != -16384) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x3117 = INT64_MIN;
	volatile uint64_t x3118 = UINT64_MAX;
	int8_t x3119 = 21;
	static int64_t x3120 = -3078238LL;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (((x3117+x3118)>>x3119)|x3120);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3129 = 6;
	int16_t x3130 = INT16_MAX;
	volatile uint8_t x3132 = UINT8_MAX;
	int32_t t86 = -23498;

	t86 = (((x3129+x3130)>>x3131)|x3132);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3201 = 1U;
	volatile uint8_t x3202 = UINT8_MAX;
	int16_t x3203 = 8;
	int16_t x3204 = 0;
	volatile int32_t t87 = -63507017;

	t87 = (((x3201+x3202)>>x3203)|x3204);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3250 = INT32_MAX;
	static uint32_t x3251 = 3U;
	int64_t x3252 = -1LL;

	t88 = (((x3249+x3250)>>x3251)|x3252);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3257 = -1LL;
	int32_t x3258 = 1;
	int16_t x3259 = 1;
	int16_t x3260 = INT16_MAX;
	volatile int64_t t89 = 3663214147149632401LL;

	t89 = (((x3257+x3258)>>x3259)|x3260);

	if (t89 != 32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3321 = UINT8_MAX;
	int16_t x3322 = -1;
	int16_t x3324 = -1;
	volatile int32_t t90 = 1806573;

	t90 = (((x3321+x3322)>>x3323)|x3324);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3353 = INT8_MIN;
	int64_t x3354 = INT64_MAX;
	uint8_t x3355 = 2U;
	int16_t x3356 = INT16_MAX;

	t91 = (((x3353+x3354)>>x3355)|x3356);

	if (t91 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3453 = INT16_MIN;
	static volatile int32_t x3454 = INT32_MAX;
	uint64_t x3456 = 64213191380LLU;
	uint64_t t92 = 124418955121179042LLU;

	t92 = (((x3453+x3454)>>x3455)|x3456);

	if (t92 != 64223182591LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3490 = -1LL;
	uint8_t x3491 = 0U;
	int16_t x3492 = INT16_MIN;
	int64_t t93 = -17663660512342LL;

	t93 = (((x3489+x3490)>>x3491)|x3492);

	if (t93 != -32503LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3493 = 13200393784LL;
	uint32_t x3494 = 23269754U;
	int8_t x3495 = 5;
	int16_t x3496 = INT16_MIN;
	int64_t t94 = 556286242665968LL;

	t94 = (((x3493+x3494)>>x3495)|x3496);

	if (t94 != -30531LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3533 = 10825071LL;
	static int16_t x3534 = INT16_MIN;
	uint8_t x3535 = 1U;
	int64_t x3536 = INT64_MAX;
	int64_t t95 = INT64_MAX;

	t95 = (((x3533+x3534)>>x3535)|x3536);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3537 = -1;
	int32_t x3539 = 0;
	static int32_t t96 = 243;

	t96 = (((x3537+x3538)>>x3539)|x3540);

	if (t96 != -2147483585) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3585 = 23853378049LLU;
	volatile int8_t x3586 = INT8_MAX;
	static int8_t x3587 = 13;
	uint32_t x3588 = UINT32_MAX;
	volatile uint64_t t97 = 948935LLU;

	t97 = (((x3585+x3586)>>x3587)|x3588);

	if (t97 != 4294967295LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3701 = 2426080114368551577LLU;
	int64_t x3702 = -1LL;
	static uint8_t x3703 = 0U;
	volatile int64_t x3704 = INT64_MIN;
	uint64_t t98 = 17814335510889LLU;

	t98 = (((x3701+x3702)>>x3703)|x3704);

	if (t98 != 11649452151223327384LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x3781 = UINT32_MAX;
	volatile uint32_t x3782 = 31025U;
	uint16_t x3784 = 288U;
	volatile uint32_t t99 = 2U;

	t99 = (((x3781+x3782)>>x3783)|x3784);

	if (t99 != 15800U) { NG(); } else { ; }
	
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

