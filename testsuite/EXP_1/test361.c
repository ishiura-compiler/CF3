
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

static int16_t x56 = 0;
volatile int64_t x74 = INT64_MAX;
uint16_t x78 = 228U;
int32_t x81 = -40705171;
int16_t x83 = INT16_MAX;
int8_t x220 = 7;
int16_t x258 = 5;
uint8_t x272 = 25U;
int16_t x287 = -1;
int16_t x319 = -28;
volatile int32_t t10 = -73268;
static volatile int32_t t11 = 31838950;
int64_t x390 = -350156337185790LL;
uint8_t x430 = UINT8_MAX;
static uint16_t x431 = 2709U;
uint32_t x457 = UINT32_MAX;
volatile uint32_t t15 = 162758U;
int16_t x508 = 3;
volatile int32_t t16 = 120146;
uint16_t x513 = 309U;
static int32_t x516 = 3;
int64_t x619 = 3378375224585104136LL;
int8_t x745 = -1;
static int16_t x746 = -1;
int8_t x751 = -1;
uint8_t x752 = 49U;
volatile int64_t x766 = INT64_MIN;
static int64_t t21 = -1601067311148LL;
int64_t t22 = -44395835225463LL;
volatile uint16_t x830 = 247U;
uint8_t x849 = 4U;
static int16_t x851 = INT16_MAX;
int8_t x958 = INT8_MIN;
int8_t x975 = -1;
uint16_t x976 = 1U;
int32_t t30 = 2554003;
static int8_t x989 = -1;
uint64_t x993 = UINT64_MAX;
volatile uint64_t t33 = 52LLU;
volatile int64_t t34 = 3567388973225LL;
uint64_t x1058 = 3LLU;
uint64_t t36 = 30824794LLU;
static uint64_t t37 = 2236931893957909814LLU;
static int16_t x1070 = -1;
int32_t t39 = 14;
int8_t x1086 = INT8_MIN;
int8_t x1111 = INT8_MIN;
int8_t x1122 = 45;
static int16_t x1204 = 0;
uint32_t x1248 = 7U;
volatile uint16_t x1381 = 118U;
static int64_t x1383 = -1LL;
uint32_t x1384 = 3U;
uint16_t x1397 = UINT16_MAX;
int16_t x1398 = 7;
volatile uint64_t x1400 = 3LLU;
int8_t x1557 = INT8_MAX;
volatile int32_t x1558 = -1730517;
int16_t x1593 = -1;
static uint32_t x1594 = 958605614U;
uint32_t x1597 = UINT32_MAX;
uint32_t t53 = 7U;
uint32_t x1715 = 3U;
int16_t x1718 = -1;
static int32_t t57 = -18;
static uint16_t x1733 = UINT16_MAX;
uint16_t x1735 = 26U;
static uint64_t x1736 = 16LLU;
uint8_t x1756 = 1U;
int64_t t59 = -8565085552LL;
volatile uint32_t x1863 = UINT32_MAX;
static volatile int16_t x1893 = INT16_MIN;
volatile uint32_t x1895 = 102U;
uint8_t x1896 = 0U;
int16_t x1899 = 684;
int16_t x2003 = -937;
int16_t x2010 = INT16_MAX;
int32_t t70 = 631729;
int8_t x2156 = 1;
static volatile int8_t x2187 = INT8_MIN;
static int32_t x2242 = INT32_MAX;
uint16_t x2244 = 0U;
int8_t x2332 = 12;
int64_t x2368 = 1LL;
uint64_t x2373 = 36196862202LLU;
static int8_t x2407 = 2;
int64_t t82 = 16809LL;
uint64_t x2518 = 10415LLU;
int64_t x2783 = -1LL;
int8_t x2909 = INT8_MAX;
uint8_t x2910 = 11U;
static uint64_t x2911 = 123273414203LLU;
static int64_t x2912 = 0LL;
volatile int32_t t93 = -15;
uint8_t x3100 = 16U;
int16_t x3114 = 22;
volatile int64_t x3115 = -66810154LL;
uint8_t x3116 = 4U;
volatile int64_t x3122 = INT64_MIN;
volatile uint8_t x3136 = 1U;
static volatile int8_t x3185 = 24;
uint32_t x3186 = 0U;
static int8_t x3189 = INT8_MIN;
static volatile int32_t t100 = 368652444;
static uint16_t x3245 = UINT16_MAX;
int8_t x3246 = INT8_MIN;
int8_t x3306 = INT8_MIN;
static uint64_t x3361 = UINT64_MAX;
uint8_t x3420 = 62U;
static volatile int16_t x3449 = INT16_MIN;
uint16_t x3468 = 0U;
int32_t x3515 = 5318226;
uint32_t x3546 = UINT32_MAX;
static volatile uint32_t t110 = 2U;
static volatile uint64_t t111 = 116LLU;
int64_t x3650 = 502881LL;
int32_t x3721 = INT32_MIN;
volatile uint32_t t117 = 137890126U;
int8_t x4106 = 0;
static volatile uint32_t x4111 = 13363197U;
static int16_t x4112 = 0;
volatile int32_t x4167 = -21181493;
volatile int64_t x4207 = INT64_MIN;
int8_t x4262 = 0;
uint64_t x4375 = 268282441LLU;
static uint8_t x4412 = 16U;
uint8_t x4479 = UINT8_MAX;
volatile int64_t t129 = 2497220084708657LL;
uint64_t x4501 = UINT64_MAX;
volatile int8_t x4513 = INT8_MIN;
static int8_t x4552 = 19;
volatile int8_t x4585 = -1;
int8_t x4587 = INT8_MIN;
static uint32_t x4588 = 1U;
int8_t x4621 = INT8_MIN;
volatile uint64_t x4622 = UINT64_MAX;
volatile int8_t x4623 = 41;
static volatile uint64_t t136 = 1084981000434737LLU;
int64_t t137 = 173618382370873718LL;
uint16_t x4752 = 10U;
int64_t x4910 = -1LL;
static volatile int32_t x4987 = INT32_MIN;
int32_t t143 = -4726;
uint32_t t146 = 0U;
int32_t x5240 = 1;
int8_t x5266 = -1;
uint32_t t148 = 284655U;
static volatile int8_t x5304 = 1;
int16_t x5337 = INT16_MIN;
uint64_t x5338 = 522LLU;
uint64_t t150 = 690LLU;
int64_t x5345 = INT64_MAX;
uint64_t t152 = 4099135LLU;
static int16_t x5437 = INT16_MAX;
static int8_t x5496 = 0;
uint32_t x5543 = 5936943U;
volatile uint32_t t156 = 613887U;
int64_t x5571 = -72412327999909034LL;
volatile uint32_t x5710 = 15753867U;
int8_t x5770 = INT8_MIN;
volatile uint64_t x5845 = 52059365902144690LLU;
volatile int32_t t164 = 118;
uint8_t x5948 = 2U;
static uint16_t x6050 = 52U;
int16_t x6089 = INT16_MIN;
int16_t x6192 = 1;
uint16_t x6267 = 39U;
volatile int64_t x6268 = 6LL;
uint16_t x6288 = 11U;
int8_t x6371 = INT8_MAX;
int32_t x6379 = 4969219;
static uint16_t x6414 = UINT16_MAX;
uint16_t x6421 = 8505U;
uint8_t x6424 = 2U;
volatile uint64_t t178 = 1624313402938LLU;
int64_t x6483 = -77755394LL;
uint16_t x6484 = 1U;
uint64_t t179 = 41503974724LLU;
uint16_t x6505 = UINT16_MAX;
uint32_t x6581 = UINT32_MAX;
volatile uint8_t x6584 = 13U;
int32_t t182 = 23474;
int64_t t184 = 28989246LL;
uint16_t x6961 = 2U;
int16_t x6962 = INT16_MIN;
int64_t x7029 = INT64_MAX;
volatile int64_t t193 = -1567938229390LL;
int8_t x7056 = 0;
int16_t x7065 = INT16_MIN;
int16_t x7086 = -400;
int8_t x7165 = INT8_MAX;
volatile int32_t t197 = 3;
int8_t x7177 = -3;
uint16_t x7178 = 11U;


void f0(void) {
    	uint32_t x21 = UINT32_MAX;
	uint16_t x22 = UINT16_MAX;
	uint8_t x23 = UINT8_MAX;
	uint16_t x24 = 0U;
	volatile uint32_t t0 = 43U;

    t0 = (((x21-x22)&x23)>>x24);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x53 = -1LL;
	static int32_t x54 = INT32_MAX;
	static int32_t x55 = 1241966;
	volatile int64_t t1 = -914052707291LL;

    t1 = (((x53-x54)&x55)>>x56);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x73 = UINT64_MAX;
	uint8_t x75 = UINT8_MAX;
	int16_t x76 = 6;
	static volatile uint64_t t2 = 146650780LLU;

    t2 = (((x73-x74)&x75)>>x76);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x77 = 458U;
	int8_t x79 = INT8_MIN;
	uint16_t x80 = 1U;
	static volatile int32_t t3 = 17455;

    t3 = (((x77-x78)&x79)>>x80);

    if (t3 != 64) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x82 = 2;
	volatile uint8_t x84 = 8U;
	static int32_t t4 = -110956907;

    t4 = (((x81-x82)&x83)>>x84);

    if (t4 != 99) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x217 = -1;
	volatile int32_t x218 = -1;
	uint16_t x219 = UINT16_MAX;
	int32_t t5 = 24542;

    t5 = (((x217-x218)&x219)>>x220);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x249 = 6575U;
	int16_t x250 = 1;
	volatile uint16_t x251 = 3U;
	uint8_t x252 = 19U;
	static uint32_t t6 = 121124310U;

    t6 = (((x249-x250)&x251)>>x252);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x257 = INT8_MIN;
	volatile int64_t x259 = INT64_MAX;
	static uint32_t x260 = 5U;
	static volatile int64_t t7 = 102LL;

    t7 = (((x257-x258)&x259)>>x260);

    if (t7 != 288230376151711739LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x269 = INT32_MIN;
	uint64_t x270 = 1497342998016LLU;
	static int32_t x271 = 1512;
	static volatile uint64_t t8 = 405508494952004LLU;

    t8 = (((x269-x270)&x271)>>x272);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x285 = 66U;
	volatile uint64_t x286 = 1LLU;
	uint8_t x288 = 7U;
	volatile uint64_t t9 = 26942477993254659LLU;

    t9 = (((x285-x286)&x287)>>x288);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x317 = -3;
	static volatile int32_t x318 = INT32_MIN;
	static int8_t x320 = 29;

    t10 = (((x317-x318)&x319)>>x320);

    if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x325 = -1;
	static int16_t x326 = -1;
	volatile uint16_t x327 = 11931U;
	uint16_t x328 = 1U;

    t11 = (((x325-x326)&x327)>>x328);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x389 = UINT64_MAX;
	static int32_t x391 = -31;
	volatile int16_t x392 = 1;
	volatile uint64_t t12 = 107LLU;

    t12 = (((x389-x390)&x391)>>x392);

    if (t12 != 175078168592880LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x429 = INT16_MIN;
	uint8_t x432 = 10U;
	int32_t t13 = 2834412;

    t13 = (((x429-x430)&x431)>>x432);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x433 = -1;
	uint32_t x434 = UINT32_MAX;
	uint64_t x435 = 169341987478LLU;
	static uint64_t x436 = 8LLU;
	volatile uint64_t t14 = 7147309LLU;

    t14 = (((x433-x434)&x435)>>x436);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x458 = INT8_MAX;
	static uint16_t x459 = 6U;
	uint8_t x460 = 1U;

    t15 = (((x457-x458)&x459)>>x460);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x505 = 57;
	static int32_t x506 = -3;
	int16_t x507 = -1;

    t16 = (((x505-x506)&x507)>>x508);

    if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x514 = 0;
	int16_t x515 = 2;
	volatile int32_t t17 = -9308;

    t17 = (((x513-x514)&x515)>>x516);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x617 = -53;
	int64_t x618 = INT64_MIN;
	uint8_t x620 = 25U;
	int64_t t18 = -11849111076607LL;

    t18 = (((x617-x618)&x619)>>x620);

    if (t18 != 100683427589LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x747 = 7832807757104666837LLU;
	volatile int16_t x748 = 0;
	volatile uint64_t t19 = 958566LLU;

    t19 = (((x745-x746)&x747)>>x748);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x749 = -3;
	uint64_t x750 = 81746364LLU;
	uint64_t t20 = 7321063356598324857LLU;

    t20 = (((x749-x750)&x751)>>x752);

    if (t20 != 32767LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x765 = -1;
	volatile uint8_t x767 = 3U;
	int8_t x768 = 1;

    t21 = (((x765-x766)&x767)>>x768);

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x825 = INT64_MIN;
	int64_t x826 = -1LL;
	static uint16_t x827 = UINT16_MAX;
	uint8_t x828 = 1U;

    t22 = (((x825-x826)&x827)>>x828);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x829 = 6U;
	static uint8_t x831 = UINT8_MAX;
	static uint8_t x832 = 12U;
	uint32_t t23 = 315U;

    t23 = (((x829-x830)&x831)>>x832);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x850 = -232933499878LL;
	int8_t x852 = 0;
	int64_t t24 = 995LL;

    t24 = (((x849-x850)&x851)>>x852);

    if (t24 != 9194LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x861 = 2076515;
	static uint32_t x862 = 13976649U;
	static volatile int32_t x863 = -41;
	int8_t x864 = 0;
	static uint32_t t25 = 13U;

    t25 = (((x861-x862)&x863)>>x864);

    if (t25 != 4283067154U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x881 = 1;
	int16_t x882 = -1;
	int32_t x883 = -1;
	int8_t x884 = 0;
	static volatile int32_t t26 = 867;

    t26 = (((x881-x882)&x883)>>x884);

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x925 = 204U;
	int32_t x926 = -1;
	int8_t x927 = INT8_MIN;
	static uint8_t x928 = 0U;
	volatile uint32_t t27 = 2038793U;

    t27 = (((x925-x926)&x927)>>x928);

    if (t27 != 128U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x937 = UINT8_MAX;
	static volatile int8_t x938 = INT8_MIN;
	int64_t x939 = -40LL;
	int8_t x940 = 0;
	volatile int64_t t28 = 0LL;

    t28 = (((x937-x938)&x939)>>x940);

    if (t28 != 344LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x957 = -158916;
	static volatile int8_t x959 = 12;
	uint16_t x960 = 0U;
	static volatile int32_t t29 = 488052993;

    t29 = (((x957-x958)&x959)>>x960);

    if (t29 != 12) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x973 = -1;
	int8_t x974 = -26;

    t30 = (((x973-x974)&x975)>>x976);

    if (t30 != 12) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x985 = 1;
	int16_t x986 = INT16_MIN;
	static uint16_t x987 = 5841U;
	uint8_t x988 = 0U;
	int32_t t31 = -6831869;

    t31 = (((x985-x986)&x987)>>x988);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x990 = INT8_MIN;
	uint16_t x991 = 18927U;
	uint16_t x992 = 14U;
	int32_t t32 = -4737329;

    t32 = (((x989-x990)&x991)>>x992);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x994 = -294LL;
	static volatile int8_t x995 = -11;
	static uint16_t x996 = 7U;

    t33 = (((x993-x994)&x995)>>x996);

    if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x1021 = 26U;
	uint16_t x1022 = 1U;
	volatile int64_t x1023 = -119033LL;
	uint64_t x1024 = 1LLU;

    t34 = (((x1021-x1022)&x1023)>>x1024);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1025 = 252702627LL;
	int8_t x1026 = INT8_MAX;
	int8_t x1027 = INT8_MIN;
	static uint16_t x1028 = 0U;
	int64_t t35 = -100203660659LL;

    t35 = (((x1025-x1026)&x1027)>>x1028);

    if (t35 != 252702464LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x1057 = 14U;
	int32_t x1059 = INT32_MIN;
	uint8_t x1060 = 3U;

    t36 = (((x1057-x1058)&x1059)>>x1060);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x1061 = UINT64_MAX;
	static volatile int16_t x1062 = INT16_MIN;
	static uint64_t x1063 = UINT64_MAX;
	uint32_t x1064 = 6U;

    t37 = (((x1061-x1062)&x1063)>>x1064);

    if (t37 != 511LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x1069 = UINT64_MAX;
	int8_t x1071 = 3;
	uint8_t x1072 = 18U;
	volatile uint64_t t38 = 3390LLU;

    t38 = (((x1069-x1070)&x1071)>>x1072);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x1081 = 23;
	int8_t x1082 = 1;
	int32_t x1083 = INT32_MAX;
	uint16_t x1084 = 0U;

    t39 = (((x1081-x1082)&x1083)>>x1084);

    if (t39 != 22) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x1085 = 2U;
	static int16_t x1087 = 370;
	static uint64_t x1088 = 3LLU;
	int32_t t40 = 364951812;

    t40 = (((x1085-x1086)&x1087)>>x1088);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x1105 = INT32_MAX;
	int64_t x1106 = 408LL;
	int16_t x1107 = INT16_MIN;
	int8_t x1108 = 1;
	volatile int64_t t41 = 2096908453497910201LL;

    t41 = (((x1105-x1106)&x1107)>>x1108);

    if (t41 != 1073725440LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x1109 = UINT8_MAX;
	uint16_t x1110 = 15U;
	static uint8_t x1112 = 4U;
	volatile int32_t t42 = 3937980;

    t42 = (((x1109-x1110)&x1111)>>x1112);

    if (t42 != 8) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x1121 = UINT16_MAX;
	volatile int64_t x1123 = 368272486407720LL;
	volatile int16_t x1124 = 1;
	volatile int64_t t43 = -5466512780LL;

    t43 = (((x1121-x1122)&x1123)>>x1124);

    if (t43 != 20224LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x1201 = 26LLU;
	int8_t x1202 = -1;
	int64_t x1203 = -17256LL;
	volatile uint64_t t44 = 64079745LLU;

    t44 = (((x1201-x1202)&x1203)>>x1204);

    if (t44 != 24LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x1245 = 1975541289U;
	uint32_t x1246 = 11095U;
	int64_t x1247 = INT64_MAX;
	volatile int64_t t45 = -726204836879129LL;

    t45 = (((x1245-x1246)&x1247)>>x1248);

    if (t45 != 15433829LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x1289 = INT64_MIN;
	uint8_t x1290 = 0U;
	uint8_t x1291 = 10U;
	int32_t x1292 = 13;
	int64_t t46 = -1279136085529957LL;

    t46 = (((x1289-x1290)&x1291)>>x1292);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x1382 = 34;
	volatile int64_t t47 = 893000919656LL;

    t47 = (((x1381-x1382)&x1383)>>x1384);

    if (t47 != 10LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x1399 = INT16_MIN;
	int32_t t48 = 158135;

    t48 = (((x1397-x1398)&x1399)>>x1400);

    if (t48 != 4096) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x1537 = 6;
	uint64_t x1538 = UINT64_MAX;
	uint32_t x1539 = 804278082U;
	uint8_t x1540 = 1U;
	uint64_t t49 = 869093449972LLU;

    t49 = (((x1537-x1538)&x1539)>>x1540);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x1559 = 1599332770LLU;
	int8_t x1560 = 0;
	volatile uint64_t t50 = 44865494737932LLU;

    t50 = (((x1557-x1558)&x1559)>>x1560);

    if (t50 != 1204224LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1589 = INT16_MAX;
	int16_t x1590 = -1;
	volatile int8_t x1591 = INT8_MAX;
	int32_t x1592 = 1;
	volatile int32_t t51 = 396756121;

    t51 = (((x1589-x1590)&x1591)>>x1592);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x1595 = -1;
	uint16_t x1596 = 1U;
	volatile uint32_t t52 = 83302U;

    t52 = (((x1593-x1594)&x1595)>>x1596);

    if (t52 != 1668180840U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x1598 = 0U;
	int8_t x1599 = INT8_MAX;
	uint8_t x1600 = 8U;

    t53 = (((x1597-x1598)&x1599)>>x1600);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x1617 = INT64_MAX;
	uint64_t x1618 = 149776808170LLU;
	int64_t x1619 = INT64_MIN;
	volatile int32_t x1620 = 0;
	volatile uint64_t t54 = 13LLU;

    t54 = (((x1617-x1618)&x1619)>>x1620);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x1669 = 1282LLU;
	uint64_t x1670 = 113540331110268LLU;
	int8_t x1671 = INT8_MIN;
	int16_t x1672 = 2;
	static uint64_t t55 = 6586995084770081416LLU;

    t55 = (((x1669-x1670)&x1671)>>x1672);

    if (t55 != 4611657633344610656LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x1713 = INT32_MIN;
	int64_t x1714 = -1LL;
	uint8_t x1716 = 2U;
	volatile int64_t t56 = -425LL;

    t56 = (((x1713-x1714)&x1715)>>x1716);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x1717 = -60;
	uint16_t x1719 = 19U;
	uint8_t x1720 = 1U;

    t57 = (((x1717-x1718)&x1719)>>x1720);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x1734 = -168;
	int32_t t58 = 214320509;

    t58 = (((x1733-x1734)&x1735)>>x1736);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x1753 = INT64_MIN;
	volatile int32_t x1754 = -1;
	static volatile uint32_t x1755 = UINT32_MAX;

    t59 = (((x1753-x1754)&x1755)>>x1756);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x1761 = 3U;
	uint64_t x1762 = 106146090409LLU;
	int16_t x1763 = -1;
	int16_t x1764 = 0;
	uint64_t t60 = 1142LLU;

    t60 = (((x1761-x1762)&x1763)>>x1764);

    if (t60 != 18446743967563461210LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x1801 = UINT32_MAX;
	volatile int32_t x1802 = INT32_MAX;
	volatile int32_t x1803 = INT32_MAX;
	int16_t x1804 = 11;
	volatile uint32_t t61 = 3160U;

    t61 = (((x1801-x1802)&x1803)>>x1804);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint16_t x1861 = UINT16_MAX;
	static int8_t x1862 = INT8_MIN;
	int8_t x1864 = 6;
	uint32_t t62 = 1U;

    t62 = (((x1861-x1862)&x1863)>>x1864);

    if (t62 != 1025U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x1894 = -51;
	volatile uint32_t t63 = 120U;

    t63 = (((x1893-x1894)&x1895)>>x1896);

    if (t63 != 34U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x1897 = 186445534LLU;
	int16_t x1898 = INT16_MIN;
	int8_t x1900 = 0;
	uint64_t t64 = 1LLU;

    t64 = (((x1897-x1898)&x1899)>>x1900);

    if (t64 != 652LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x1905 = 38303930U;
	int64_t x1906 = INT64_MAX;
	uint64_t x1907 = UINT64_MAX;
	int8_t x1908 = 0;
	uint64_t t65 = 96LLU;

    t65 = (((x1905-x1906)&x1907)>>x1908);

    if (t65 != 9223372036893079739LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x2001 = INT8_MAX;
	uint8_t x2002 = 12U;
	uint8_t x2004 = 17U;
	static int32_t t66 = -2;

    t66 = (((x2001-x2002)&x2003)>>x2004);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x2009 = INT8_MIN;
	uint16_t x2011 = UINT16_MAX;
	uint8_t x2012 = 4U;
	volatile int32_t t67 = 482845362;

    t67 = (((x2009-x2010)&x2011)>>x2012);

    if (t67 != 2040) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x2029 = 0;
	volatile uint32_t x2030 = 0U;
	int32_t x2031 = -1854820;
	volatile uint8_t x2032 = 26U;
	volatile uint32_t t68 = 17U;

    t68 = (((x2029-x2030)&x2031)>>x2032);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x2073 = UINT32_MAX;
	int32_t x2074 = -1;
	int64_t x2075 = INT64_MIN;
	volatile uint8_t x2076 = 13U;
	int64_t t69 = 40747758563050LL;

    t69 = (((x2073-x2074)&x2075)>>x2076);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x2137 = 1;
	volatile uint8_t x2138 = 107U;
	uint16_t x2139 = UINT16_MAX;
	static uint16_t x2140 = 13U;

    t70 = (((x2137-x2138)&x2139)>>x2140);

    if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint64_t x2153 = UINT64_MAX;
	int16_t x2154 = -3;
	static volatile int16_t x2155 = INT16_MIN;
	volatile uint64_t t71 = 448846104557511614LLU;

    t71 = (((x2153-x2154)&x2155)>>x2156);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x2185 = 118U;
	int8_t x2186 = INT8_MIN;
	volatile uint8_t x2188 = 0U;
	uint32_t t72 = 13015057U;

    t72 = (((x2185-x2186)&x2187)>>x2188);

    if (t72 != 128U) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x2241 = 27858U;
	static volatile int64_t x2243 = 585844LL;
	volatile int64_t t73 = -1LL;

    t73 = (((x2241-x2242)&x2243)>>x2244);

    if (t73 != 24656LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x2249 = UINT16_MAX;
	uint8_t x2250 = UINT8_MAX;
	uint64_t x2251 = UINT64_MAX;
	uint64_t x2252 = 38LLU;
	volatile uint64_t t74 = 51930198LLU;

    t74 = (((x2249-x2250)&x2251)>>x2252);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2329 = -1;
	volatile uint64_t x2330 = UINT64_MAX;
	int32_t x2331 = 1;
	uint64_t t75 = 71074728393742992LLU;

    t75 = (((x2329-x2330)&x2331)>>x2332);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x2349 = -1;
	static int64_t x2350 = INT64_MIN;
	int8_t x2351 = -1;
	uint8_t x2352 = 10U;
	int64_t t76 = -518172439LL;

    t76 = (((x2349-x2350)&x2351)>>x2352);

    if (t76 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x2361 = -1LL;
	volatile int16_t x2362 = INT16_MIN;
	int64_t x2363 = INT64_MIN;
	int8_t x2364 = 7;
	volatile int64_t t77 = 726649702451646928LL;

    t77 = (((x2361-x2362)&x2363)>>x2364);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x2365 = 11537382U;
	uint64_t x2366 = 21LLU;
	int32_t x2367 = -1;
	uint64_t t78 = 6814850807LLU;

    t78 = (((x2365-x2366)&x2367)>>x2368);

    if (t78 != 5768680LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x2374 = 534;
	static int16_t x2375 = INT16_MAX;
	int8_t x2376 = 1;
	static uint64_t t79 = 3841815LLU;

    t79 = (((x2373-x2374)&x2375)>>x2376);

    if (t79 != 9074LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x2405 = -60637866;
	int32_t x2406 = INT32_MIN;
	volatile int8_t x2408 = 14;
	int32_t t80 = -257915;

    t80 = (((x2405-x2406)&x2407)>>x2408);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x2489 = INT8_MIN;
	int64_t x2490 = INT64_MIN;
	int32_t x2491 = 10;
	int8_t x2492 = 0;
	volatile int64_t t81 = -7789LL;

    t81 = (((x2489-x2490)&x2491)>>x2492);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x2497 = 10998532U;
	int32_t x2498 = INT32_MAX;
	static int64_t x2499 = INT64_MIN;
	uint32_t x2500 = 21U;

    t82 = (((x2497-x2498)&x2499)>>x2500);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x2517 = INT8_MAX;
	int16_t x2519 = -1;
	uint16_t x2520 = 0U;
	volatile uint64_t t83 = 515330062497LLU;

    t83 = (((x2517-x2518)&x2519)>>x2520);

    if (t83 != 18446744073709541328LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2537 = -1;
	int8_t x2538 = -3;
	int16_t x2539 = 43;
	uint8_t x2540 = 10U;
	volatile int32_t t84 = 0;

    t84 = (((x2537-x2538)&x2539)>>x2540);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x2697 = 12U;
	uint32_t x2698 = 1288864U;
	uint8_t x2699 = 0U;
	int32_t x2700 = 4;
	volatile uint32_t t85 = 822950U;

    t85 = (((x2697-x2698)&x2699)>>x2700);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x2705 = INT64_MIN;
	int32_t x2706 = -2044;
	uint16_t x2707 = 5U;
	static int8_t x2708 = 4;
	int64_t t86 = 1761183823731543LL;

    t86 = (((x2705-x2706)&x2707)>>x2708);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x2773 = INT8_MIN;
	static int8_t x2774 = INT8_MIN;
	static uint64_t x2775 = 36652LLU;
	uint32_t x2776 = 0U;
	volatile uint64_t t87 = 8384249200681LLU;

    t87 = (((x2773-x2774)&x2775)>>x2776);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x2781 = UINT8_MAX;
	volatile int16_t x2782 = -1;
	int64_t x2784 = 0LL;
	int64_t t88 = 2198887143227LL;

    t88 = (((x2781-x2782)&x2783)>>x2784);

    if (t88 != 256LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x2833 = -1;
	uint32_t x2834 = UINT32_MAX;
	int32_t x2835 = -364008681;
	uint8_t x2836 = 4U;
	volatile uint32_t t89 = 15U;

    t89 = (((x2833-x2834)&x2835)>>x2836);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x2905 = 0U;
	volatile int64_t x2906 = -1LL;
	int64_t x2907 = 700LL;
	int16_t x2908 = 6;
	int64_t t90 = 895LL;

    t90 = (((x2905-x2906)&x2907)>>x2908);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t t91 = 2127325430257927LLU;

    t91 = (((x2909-x2910)&x2911)>>x2912);

    if (t91 != 48LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x2933 = INT16_MIN;
	static int32_t x2934 = INT32_MIN;
	static int64_t x2935 = -8542752407005LL;
	uint8_t x2936 = 45U;
	int64_t t92 = -1993LL;

    t92 = (((x2933-x2934)&x2935)>>x2936);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x2989 = INT16_MAX;
	volatile int16_t x2990 = -1;
	int16_t x2991 = INT16_MIN;
	volatile uint8_t x2992 = 2U;

    t93 = (((x2989-x2990)&x2991)>>x2992);

    if (t93 != 8192) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x3021 = UINT8_MAX;
	int16_t x3022 = INT16_MIN;
	uint8_t x3023 = 55U;
	uint8_t x3024 = 6U;
	static int32_t t94 = 1;

    t94 = (((x3021-x3022)&x3023)>>x3024);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x3097 = 72557477353850581LL;
	int16_t x3098 = -1;
	static volatile int16_t x3099 = 11313;
	int64_t t95 = -30830954LL;

    t95 = (((x3097-x3098)&x3099)>>x3100);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x3113 = INT8_MAX;
	volatile int64_t t96 = -66755488865LL;

    t96 = (((x3113-x3114)&x3115)>>x3116);

    if (t96 != 4LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x3121 = 113LLU;
	static uint64_t x3123 = 4LLU;
	volatile int64_t x3124 = 0LL;
	volatile uint64_t t97 = 181777861961791LLU;

    t97 = (((x3121-x3122)&x3123)>>x3124);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x3133 = 444U;
	static int32_t x3134 = 3340;
	volatile int16_t x3135 = 1;
	uint32_t t98 = 586770U;

    t98 = (((x3133-x3134)&x3135)>>x3136);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x3187 = 11;
	static int8_t x3188 = 7;
	uint32_t t99 = 1001U;

    t99 = (((x3185-x3186)&x3187)>>x3188);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x3190 = INT8_MAX;
	uint8_t x3191 = UINT8_MAX;
	int16_t x3192 = 15;

    t100 = (((x3189-x3190)&x3191)>>x3192);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x3247 = UINT16_MAX;
	volatile uint8_t x3248 = 26U;
	volatile int32_t t101 = 7030038;

    t101 = (((x3245-x3246)&x3247)>>x3248);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x3305 = 1281U;
	static int32_t x3307 = -1;
	static int16_t x3308 = 25;
	int32_t t102 = -116698;

    t102 = (((x3305-x3306)&x3307)>>x3308);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x3357 = 1U;
	int16_t x3358 = INT16_MIN;
	int8_t x3359 = 40;
	static volatile uint8_t x3360 = 1U;
	int32_t t103 = 136902103;

    t103 = (((x3357-x3358)&x3359)>>x3360);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3362 = INT16_MIN;
	static int32_t x3363 = -2;
	uint8_t x3364 = 3U;
	static uint64_t t104 = 5615230497857408LLU;

    t104 = (((x3361-x3362)&x3363)>>x3364);

    if (t104 != 4095LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x3401 = INT32_MIN;
	int32_t x3402 = INT32_MIN;
	int16_t x3403 = 866;
	int32_t x3404 = 3;
	volatile int32_t t105 = -14;

    t105 = (((x3401-x3402)&x3403)>>x3404);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x3417 = 33137671LLU;
	uint8_t x3418 = 4U;
	uint8_t x3419 = UINT8_MAX;
	volatile uint64_t t106 = 266629511561841LLU;

    t106 = (((x3417-x3418)&x3419)>>x3420);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x3450 = INT64_MIN;
	uint8_t x3451 = UINT8_MAX;
	uint16_t x3452 = 5U;
	volatile int64_t t107 = 57071887LL;

    t107 = (((x3449-x3450)&x3451)>>x3452);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x3465 = INT16_MAX;
	uint64_t x3466 = 206128LLU;
	static uint16_t x3467 = UINT16_MAX;
	uint64_t t108 = 3305LLU;

    t108 = (((x3465-x3466)&x3467)>>x3468);

    if (t108 != 23247LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x3513 = -1341224397299LL;
	int64_t x3514 = INT64_MIN;
	int16_t x3516 = 3;
	static volatile int64_t t109 = -2455LL;

    t109 = (((x3513-x3514)&x3515)>>x3516);

    if (t109 != 532672LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x3545 = 43U;
	int16_t x3547 = INT16_MIN;
	uint8_t x3548 = 1U;

    t110 = (((x3545-x3546)&x3547)>>x3548);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x3585 = 1LLU;
	uint32_t x3586 = 556287U;
	uint16_t x3587 = UINT16_MAX;
	int32_t x3588 = 4;

    t111 = (((x3585-x3586)&x3587)>>x3588);

    if (t111 != 2096LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x3589 = -1LL;
	volatile int8_t x3590 = -1;
	int32_t x3591 = -249;
	uint64_t x3592 = 10LLU;
	volatile int64_t t112 = 89889LL;

    t112 = (((x3589-x3590)&x3591)>>x3592);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x3649 = 34948435LLU;
	static int8_t x3651 = INT8_MIN;
	int8_t x3652 = 35;
	uint64_t t113 = 532LLU;

    t113 = (((x3649-x3650)&x3651)>>x3652);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x3722 = 18408825LLU;
	uint16_t x3723 = UINT16_MAX;
	uint8_t x3724 = 4U;
	uint64_t t114 = 46839077994LLU;

    t114 = (((x3721-x3722)&x3723)>>x3724);

    if (t114 != 424LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x3765 = INT32_MIN;
	volatile int64_t x3766 = -1LL;
	uint16_t x3767 = UINT16_MAX;
	volatile int64_t x3768 = 0LL;
	int64_t t115 = 812940700968059LL;

    t115 = (((x3765-x3766)&x3767)>>x3768);

    if (t115 != 1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x3853 = 0U;
	uint16_t x3854 = UINT16_MAX;
	int32_t x3855 = INT32_MAX;
	static uint8_t x3856 = 23U;
	volatile int32_t t116 = -824053;

    t116 = (((x3853-x3854)&x3855)>>x3856);

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x3885 = 0;
	volatile uint16_t x3886 = 248U;
	uint32_t x3887 = UINT32_MAX;
	static uint8_t x3888 = 17U;

    t117 = (((x3885-x3886)&x3887)>>x3888);

    if (t117 != 32767U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x3957 = -1105075055244929436LL;
	int16_t x3958 = 808;
	uint32_t x3959 = 96833900U;
	static volatile int8_t x3960 = 1;
	static volatile int64_t t118 = -10LL;

    t118 = (((x3957-x3958)&x3959)>>x3960);

    if (t118 != 14715030LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x4029 = 0U;
	int64_t x4030 = INT64_MAX;
	int8_t x4031 = 22;
	uint8_t x4032 = 3U;
	static int64_t t119 = 4177344757LL;

    t119 = (((x4029-x4030)&x4031)>>x4032);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x4085 = -1;
	uint32_t x4086 = 3U;
	static volatile int64_t x4087 = INT64_MIN;
	int16_t x4088 = 33;
	static int64_t t120 = -1886483887434LL;

    t120 = (((x4085-x4086)&x4087)>>x4088);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x4105 = INT8_MAX;
	volatile int64_t x4107 = INT64_MIN;
	uint16_t x4108 = 7U;
	static volatile int64_t t121 = 24522235601LL;

    t121 = (((x4105-x4106)&x4107)>>x4108);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x4109 = 29714586726428195LLU;
	uint32_t x4110 = 577833U;
	uint64_t t122 = 1440LLU;

    t122 = (((x4109-x4110)&x4111)>>x4112);

    if (t122 != 4261112LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x4165 = INT16_MAX;
	static int64_t x4166 = -1LL;
	uint16_t x4168 = 3U;
	int64_t t123 = 730855319656LL;

    t123 = (((x4165-x4166)&x4167)>>x4168);

    if (t123 != 4096LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x4169 = -1LL;
	static uint64_t x4170 = 1832378496298576LLU;
	int16_t x4171 = -1;
	static uint16_t x4172 = 13U;
	uint64_t t124 = 10321399926LLU;

    t124 = (((x4169-x4170)&x4171)>>x4172);

    if (t124 != 2251576134669586LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x4205 = INT32_MIN;
	static volatile int32_t x4206 = INT32_MIN;
	volatile uint32_t x4208 = 5U;
	static volatile int64_t t125 = 226399503LL;

    t125 = (((x4205-x4206)&x4207)>>x4208);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x4261 = UINT64_MAX;
	static uint32_t x4263 = 1407329U;
	volatile uint8_t x4264 = 1U;
	volatile uint64_t t126 = 447LLU;

    t126 = (((x4261-x4262)&x4263)>>x4264);

    if (t126 != 703664LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x4373 = 1;
	int8_t x4374 = INT8_MAX;
	uint16_t x4376 = 51U;
	uint64_t t127 = 306198439LLU;

    t127 = (((x4373-x4374)&x4375)>>x4376);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x4409 = -1;
	int8_t x4410 = -1;
	int32_t x4411 = INT32_MIN;
	int32_t t128 = -25666;

    t128 = (((x4409-x4410)&x4411)>>x4412);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x4477 = INT64_MAX;
	static int16_t x4478 = 14;
	uint16_t x4480 = 0U;

    t129 = (((x4477-x4478)&x4479)>>x4480);

    if (t129 != 241LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x4489 = 521138523LLU;
	static int8_t x4490 = -1;
	int8_t x4491 = -1;
	int8_t x4492 = 25;
	volatile uint64_t t130 = 857454LLU;

    t130 = (((x4489-x4490)&x4491)>>x4492);

    if (t130 != 15LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x4502 = 11U;
	uint32_t x4503 = 5U;
	volatile int8_t x4504 = 21;
	static volatile uint64_t t131 = 87598197652LLU;

    t131 = (((x4501-x4502)&x4503)>>x4504);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x4514 = 226822LLU;
	int16_t x4515 = 7;
	uint32_t x4516 = 0U;
	uint64_t t132 = 208933665456200LLU;

    t132 = (((x4513-x4514)&x4515)>>x4516);

    if (t132 != 2LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x4549 = 98362U;
	int16_t x4550 = -1;
	uint32_t x4551 = UINT32_MAX;
	static uint32_t t133 = 234977209U;

    t133 = (((x4549-x4550)&x4551)>>x4552);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x4586 = -1;
	static volatile int32_t t134 = 934022766;

    t134 = (((x4585-x4586)&x4587)>>x4588);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x4613 = INT16_MAX;
	static uint16_t x4614 = 414U;
	uint64_t x4615 = 6976313734969308LLU;
	uint8_t x4616 = 7U;
	volatile uint64_t t135 = 2581436142933577LLU;

    t135 = (((x4613-x4614)&x4615)>>x4616);

    if (t135 != 108LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x4624 = 0;

    t136 = (((x4621-x4622)&x4623)>>x4624);

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x4649 = INT64_MIN;
	int8_t x4650 = -1;
	uint16_t x4651 = UINT16_MAX;
	volatile uint8_t x4652 = 24U;

    t137 = (((x4649-x4650)&x4651)>>x4652);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x4737 = 1U;
	int8_t x4738 = 0;
	uint32_t x4739 = UINT32_MAX;
	uint8_t x4740 = 3U;
	volatile uint32_t t138 = 33728121U;

    t138 = (((x4737-x4738)&x4739)>>x4740);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x4749 = 8178;
	int64_t x4750 = INT64_MAX;
	static int16_t x4751 = 9348;
	int64_t t139 = -626198376LL;

    t139 = (((x4749-x4750)&x4751)>>x4752);

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x4825 = INT16_MIN;
	uint32_t x4826 = 304136937U;
	uint8_t x4827 = 0U;
	uint8_t x4828 = 4U;
	uint32_t t140 = 21759U;

    t140 = (((x4825-x4826)&x4827)>>x4828);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x4877 = UINT16_MAX;
	int16_t x4878 = -3252;
	static volatile int64_t x4879 = -715789787LL;
	int16_t x4880 = 15;
	int64_t t141 = 1557160053LL;

    t141 = (((x4877-x4878)&x4879)>>x4880);

    if (t141 != 2LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x4909 = 20252;
	volatile uint8_t x4911 = UINT8_MAX;
	int16_t x4912 = 2;
	int64_t t142 = -931986826LL;

    t142 = (((x4909-x4910)&x4911)>>x4912);

    if (t142 != 7LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x4985 = 16U;
	int16_t x4986 = INT16_MIN;
	uint8_t x4988 = 0U;

    t143 = (((x4985-x4986)&x4987)>>x4988);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x5069 = INT32_MIN;
	volatile int32_t x5070 = INT32_MIN;
	uint32_t x5071 = 1760446U;
	uint8_t x5072 = 4U;
	uint32_t t144 = 226575U;

    t144 = (((x5069-x5070)&x5071)>>x5072);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x5081 = -1;
	int64_t x5082 = -443888954LL;
	volatile int32_t x5083 = INT32_MAX;
	volatile int8_t x5084 = 4;
	volatile int64_t t145 = 45111650LL;

    t145 = (((x5081-x5082)&x5083)>>x5084);

    if (t145 != 27743059LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x5165 = INT32_MIN;
	uint32_t x5166 = UINT32_MAX;
	uint16_t x5167 = 1U;
	uint16_t x5168 = 0U;

    t146 = (((x5165-x5166)&x5167)>>x5168);

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x5237 = INT16_MAX;
	int16_t x5238 = INT16_MAX;
	int16_t x5239 = -277;
	int32_t t147 = 92539;

    t147 = (((x5237-x5238)&x5239)>>x5240);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x5265 = 15928U;
	volatile uint32_t x5267 = 182126795U;
	uint64_t x5268 = 28LLU;

    t148 = (((x5265-x5266)&x5267)>>x5268);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x5301 = INT8_MAX;
	int8_t x5302 = INT8_MAX;
	int8_t x5303 = INT8_MIN;
	volatile int32_t t149 = 23336;

    t149 = (((x5301-x5302)&x5303)>>x5304);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x5339 = -1;
	volatile uint8_t x5340 = 2U;

    t150 = (((x5337-x5338)&x5339)>>x5340);

    if (t150 != 4611686018427379581LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x5346 = 272051074167513LL;
	uint16_t x5347 = 2779U;
	int8_t x5348 = 1;
	volatile int64_t t151 = -6047554385LL;

    t151 = (((x5345-x5346)&x5347)>>x5348);

    if (t151 != 1025LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x5361 = 41282LLU;
	uint8_t x5362 = 7U;
	int32_t x5363 = -16924219;
	static volatile uint16_t x5364 = 28U;

    t152 = (((x5361-x5362)&x5363)>>x5364);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x5438 = 156LLU;
	int8_t x5439 = INT8_MIN;
	uint8_t x5440 = 16U;
	uint64_t t153 = 114262403126LLU;

    t153 = (((x5437-x5438)&x5439)>>x5440);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x5461 = 9090667927288333LL;
	int8_t x5462 = INT8_MIN;
	int32_t x5463 = INT32_MIN;
	int8_t x5464 = 1;
	int64_t t154 = -7LL;

    t154 = (((x5461-x5462)&x5463)>>x5464);

    if (t154 != 4545333824585728LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x5493 = UINT32_MAX;
	int64_t x5494 = -5825131LL;
	int16_t x5495 = INT16_MIN;
	int64_t t155 = -521350LL;

    t155 = (((x5493-x5494)&x5495)>>x5496);

    if (t155 != 4300767232LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x5541 = 648;
	uint16_t x5542 = 241U;
	uint16_t x5544 = 1U;

    t156 = (((x5541-x5542)&x5543)>>x5544);

    if (t156 != 131U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x5569 = 3U;
	int8_t x5570 = INT8_MIN;
	int8_t x5572 = 14;
	int64_t t157 = 1191196008411LL;

    t157 = (((x5569-x5570)&x5571)>>x5572);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x5709 = INT8_MIN;
	uint16_t x5711 = 0U;
	int8_t x5712 = 3;
	uint32_t t158 = 1309096075U;

    t158 = (((x5709-x5710)&x5711)>>x5712);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x5757 = 1001U;
	int8_t x5758 = INT8_MAX;
	static uint64_t x5759 = 17714526612LLU;
	static uint16_t x5760 = 40U;
	volatile uint64_t t159 = 17367LLU;

    t159 = (((x5757-x5758)&x5759)>>x5760);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x5765 = UINT32_MAX;
	volatile int32_t x5766 = -17346;
	static int16_t x5767 = INT16_MAX;
	int16_t x5768 = 0;
	uint32_t t160 = 19658U;

    t160 = (((x5765-x5766)&x5767)>>x5768);

    if (t160 != 17345U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x5769 = INT8_MIN;
	uint32_t x5771 = UINT32_MAX;
	static uint32_t x5772 = 1U;
	volatile uint32_t t161 = 41161U;

    t161 = (((x5769-x5770)&x5771)>>x5772);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x5777 = -10LL;
	static int32_t x5778 = INT32_MIN;
	uint32_t x5779 = 26022U;
	static volatile uint8_t x5780 = 14U;
	volatile int64_t t162 = -506665LL;

    t162 = (((x5777-x5778)&x5779)>>x5780);

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x5846 = UINT64_MAX;
	uint64_t x5847 = 1951438784117LLU;
	static int16_t x5848 = 8;
	static volatile uint64_t t163 = 25016896LLU;

    t163 = (((x5845-x5846)&x5847)>>x5848);

    if (t163 != 6543822916LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x5897 = INT8_MAX;
	int32_t x5898 = -2976275;
	volatile int16_t x5899 = INT16_MIN;
	int8_t x5900 = 1;

    t164 = (((x5897-x5898)&x5899)>>x5900);

    if (t164 != 1474560) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x5945 = INT64_MIN;
	static int64_t x5946 = INT64_MIN;
	volatile int16_t x5947 = 3194;
	int64_t t165 = 1094855LL;

    t165 = (((x5945-x5946)&x5947)>>x5948);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x6049 = 3;
	uint16_t x6051 = UINT16_MAX;
	int8_t x6052 = 0;
	int32_t t166 = 75;

    t166 = (((x6049-x6050)&x6051)>>x6052);

    if (t166 != 65487) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x6077 = -4;
	uint32_t x6078 = 77U;
	static int32_t x6079 = -1;
	int64_t x6080 = 8LL;
	uint32_t t167 = 174338020U;

    t167 = (((x6077-x6078)&x6079)>>x6080);

    if (t167 != 16777215U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x6090 = 10LLU;
	int64_t x6091 = INT64_MAX;
	static volatile uint8_t x6092 = 3U;
	volatile uint64_t t168 = 69307131LLU;

    t168 = (((x6089-x6090)&x6091)>>x6092);

    if (t168 != 1152921504606842878LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x6189 = -605791643814025973LL;
	volatile int32_t x6190 = -32910;
	static uint16_t x6191 = 5U;
	static volatile int64_t t169 = 132797730LL;

    t169 = (((x6189-x6190)&x6191)>>x6192);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x6193 = 7711U;
	int64_t x6194 = -8156858319LL;
	uint32_t x6195 = 116054U;
	uint8_t x6196 = 0U;
	volatile int64_t t170 = -438809733LL;

    t170 = (((x6193-x6194)&x6195)>>x6196);

    if (t170 != 116038LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x6213 = 1U;
	int64_t x6214 = 207685846LL;
	uint8_t x6215 = 2U;
	uint8_t x6216 = 25U;
	volatile int64_t t171 = -11205022723LL;

    t171 = (((x6213-x6214)&x6215)>>x6216);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x6229 = INT32_MIN;
	int16_t x6230 = INT16_MIN;
	uint32_t x6231 = 16U;
	uint8_t x6232 = 0U;
	volatile uint32_t t172 = 22U;

    t172 = (((x6229-x6230)&x6231)>>x6232);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x6265 = INT16_MAX;
	int16_t x6266 = -1;
	int32_t t173 = -44;

    t173 = (((x6265-x6266)&x6267)>>x6268);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x6285 = UINT64_MAX;
	volatile int8_t x6286 = INT8_MIN;
	static int32_t x6287 = INT32_MIN;
	volatile uint64_t t174 = 7LLU;

    t174 = (((x6285-x6286)&x6287)>>x6288);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x6369 = -1;
	int64_t x6370 = INT64_MAX;
	uint32_t x6372 = 1U;
	static int64_t t175 = 13747LL;

    t175 = (((x6369-x6370)&x6371)>>x6372);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x6377 = INT32_MAX;
	uint64_t x6378 = UINT64_MAX;
	uint8_t x6380 = 22U;
	volatile uint64_t t176 = 3581519456952810LLU;

    t176 = (((x6377-x6378)&x6379)>>x6380);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x6413 = INT8_MIN;
	int32_t x6415 = INT32_MAX;
	uint32_t x6416 = 0U;
	volatile int32_t t177 = 96793019;

    t177 = (((x6413-x6414)&x6415)>>x6416);

    if (t177 != 2147417985) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x6422 = 202871758783LLU;
	int8_t x6423 = -1;

    t178 = (((x6421-x6422)&x6423)>>x6424);

    if (t178 != 4611685967709450334LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x6481 = INT16_MAX;
	volatile uint64_t x6482 = 12630LLU;

    t179 = (((x6481-x6482)&x6483)>>x6484);

    if (t179 != 1364LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x6506 = INT16_MIN;
	volatile int16_t x6507 = INT16_MIN;
	uint8_t x6508 = 7U;
	volatile int32_t t180 = 279138583;

    t180 = (((x6505-x6506)&x6507)>>x6508);

    if (t180 != 512) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x6582 = 461422LL;
	uint16_t x6583 = 1301U;
	static volatile int64_t t181 = 520416429685LL;

    t181 = (((x6581-x6582)&x6583)>>x6584);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x6753 = -1;
	int32_t x6754 = INT32_MAX;
	static int32_t x6755 = 53;
	uint8_t x6756 = 0U;

    t182 = (((x6753-x6754)&x6755)>>x6756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x6773 = UINT16_MAX;
	int64_t x6774 = INT64_MAX;
	uint16_t x6775 = UINT16_MAX;
	int8_t x6776 = 0;
	volatile int64_t t183 = -859393988447334103LL;

    t183 = (((x6773-x6774)&x6775)>>x6776);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x6785 = 130394924U;
	int64_t x6786 = 455919279611435514LL;
	uint8_t x6787 = UINT8_MAX;
	volatile int8_t x6788 = 0;

    t184 = (((x6785-x6786)&x6787)>>x6788);

    if (t184 != 50LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x6793 = 879869910635542LLU;
	volatile int32_t x6794 = INT32_MAX;
	uint16_t x6795 = UINT16_MAX;
	int8_t x6796 = 3;
	uint64_t t185 = 131742008251812248LLU;

    t185 = (((x6793-x6794)&x6795)>>x6796);

    if (t185 != 6786LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x6809 = 7;
	static int8_t x6810 = INT8_MAX;
	uint64_t x6811 = 47554036LLU;
	int16_t x6812 = 0;
	volatile uint64_t t186 = 8867550880038116LLU;

    t186 = (((x6809-x6810)&x6811)>>x6812);

    if (t186 != 47553920LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x6849 = INT8_MIN;
	int32_t x6850 = -293502;
	static volatile int64_t x6851 = INT64_MIN;
	int8_t x6852 = 1;
	static int64_t t187 = -7143LL;

    t187 = (((x6849-x6850)&x6851)>>x6852);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x6897 = 1751LLU;
	static int8_t x6898 = -1;
	uint8_t x6899 = 0U;
	static uint16_t x6900 = 12U;
	volatile uint64_t t188 = 15253810LLU;

    t188 = (((x6897-x6898)&x6899)>>x6900);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x6963 = 1676U;
	int8_t x6964 = 12;
	static int32_t t189 = -74387;

    t189 = (((x6961-x6962)&x6963)>>x6964);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x6973 = UINT16_MAX;
	int32_t x6974 = -1;
	volatile uint16_t x6975 = UINT16_MAX;
	uint16_t x6976 = 25U;
	int32_t t190 = 170251;

    t190 = (((x6973-x6974)&x6975)>>x6976);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x6989 = 2LL;
	uint8_t x6990 = UINT8_MAX;
	uint8_t x6991 = 27U;
	volatile int16_t x6992 = 45;
	volatile int64_t t191 = 74553080494698281LL;

    t191 = (((x6989-x6990)&x6991)>>x6992);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x7001 = -1LL;
	static volatile uint32_t x7002 = 2U;
	static int64_t x7003 = 3207LL;
	volatile uint16_t x7004 = 10U;
	int64_t t192 = -157810LL;

    t192 = (((x7001-x7002)&x7003)>>x7004);

    if (t192 != 3LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x7030 = INT64_MAX;
	int8_t x7031 = INT8_MAX;
	int64_t x7032 = 0LL;

    t193 = (((x7029-x7030)&x7031)>>x7032);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x7053 = UINT32_MAX;
	volatile uint16_t x7054 = 1U;
	volatile int8_t x7055 = 17;
	volatile uint32_t t194 = 17482671U;

    t194 = (((x7053-x7054)&x7055)>>x7056);

    if (t194 != 16U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x7066 = 1;
	static int8_t x7067 = INT8_MAX;
	uint8_t x7068 = 1U;
	volatile int32_t t195 = 92414;

    t195 = (((x7065-x7066)&x7067)>>x7068);

    if (t195 != 63) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x7085 = -1;
	int32_t x7087 = INT32_MAX;
	volatile uint8_t x7088 = 16U;
	volatile int32_t t196 = -180757378;

    t196 = (((x7085-x7086)&x7087)>>x7088);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x7166 = INT8_MIN;
	uint16_t x7167 = 1U;
	uint16_t x7168 = 22U;

    t197 = (((x7165-x7166)&x7167)>>x7168);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x7179 = 1020;
	int8_t x7180 = 11;
	static int32_t t198 = -925611;

    t198 = (((x7177-x7178)&x7179)>>x7180);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x7185 = -253;
	int8_t x7186 = INT8_MAX;
	uint16_t x7187 = 4413U;
	static volatile uint8_t x7188 = 8U;
	int32_t t199 = -60160309;

    t199 = (((x7185-x7186)&x7187)>>x7188);

    if (t199 != 16) { NG(); } else { ; }
	
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

