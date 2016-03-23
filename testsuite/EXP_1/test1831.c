
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

volatile uint16_t x10 = UINT16_MAX;
volatile int8_t x11 = -1;
uint16_t x12 = 0U;
uint32_t x17 = 118031U;
int8_t x18 = INT8_MAX;
uint64_t x113 = 20949894899LLU;
static volatile int8_t x123 = INT8_MIN;
int32_t x129 = -5260905;
volatile int32_t t6 = 12795;
uint16_t x146 = 22209U;
static volatile int64_t x203 = -9973072313357LL;
int8_t x204 = 27;
uint64_t x411 = UINT64_MAX;
int8_t x427 = INT8_MIN;
int16_t x451 = INT16_MIN;
int8_t x452 = 1;
volatile int32_t t15 = 434;
int16_t x461 = -1;
static int64_t x462 = -450806461010948078LL;
volatile int64_t t16 = -2886380272LL;
volatile int64_t x470 = -1LL;
volatile int64_t x542 = INT64_MIN;
static int64_t t19 = -115948681LL;
int8_t x557 = 0;
uint8_t x560 = 27U;
volatile int64_t t21 = 4493LL;
static int64_t t23 = 170552655307907357LL;
static int16_t x609 = -3;
uint16_t x611 = UINT16_MAX;
volatile int32_t t25 = -407;
volatile uint64_t t27 = 31274950841122093LLU;
static int32_t x821 = INT32_MIN;
static int64_t x823 = 3055367542425LL;
int64_t t29 = -215LL;
int32_t x857 = -134798;
static uint16_t x860 = 26U;
uint32_t x918 = 2968U;
int32_t x919 = -1;
uint16_t x920 = 3U;
volatile int32_t t32 = 25;
static int64_t x926 = -2943360LL;
uint32_t x1022 = 128946U;
volatile uint16_t x1034 = UINT16_MAX;
int32_t x1049 = -1832730;
int64_t x1091 = INT64_MIN;
static int64_t t42 = -1195509267369LL;
int64_t x1097 = INT64_MAX;
volatile uint64_t x1113 = 220286LLU;
int8_t x1144 = 3;
int64_t t47 = 3263808504280019277LL;
static uint64_t x1171 = 217284900529204448LLU;
volatile int32_t x1192 = 8;
int32_t x1334 = 571959149;
static uint32_t x1391 = UINT32_MAX;
static uint64_t x1392 = 2LLU;
static volatile int64_t x1479 = INT64_MIN;
uint64_t t56 = 68179742197610958LLU;
static int8_t x1485 = -50;
int32_t t57 = 0;
uint16_t x1560 = 9U;
int32_t x1583 = 659;
uint8_t x1584 = 0U;
int16_t x1595 = 12733;
uint64_t x1829 = UINT64_MAX;
volatile int64_t x1922 = INT64_MIN;
int16_t x2050 = INT16_MIN;
volatile int32_t t72 = 1005;
static int16_t x2065 = -1;
static int32_t x2067 = INT32_MIN;
volatile int64_t x2068 = 0LL;
volatile int32_t t75 = 3406666;
uint8_t x2148 = 5U;
int64_t x2154 = INT64_MIN;
int64_t x2157 = -34247894222331039LL;
uint8_t x2160 = 6U;
int16_t x2167 = INT16_MIN;
uint16_t x2208 = 20U;
static int32_t x2246 = -24393560;
volatile int32_t x2349 = INT32_MIN;
static volatile int8_t x2357 = -1;
static int16_t x2358 = INT16_MAX;
int32_t x2360 = 9;
volatile uint64_t x2405 = UINT64_MAX;
int8_t x2406 = 35;
int32_t x2407 = -1;
volatile int32_t t84 = -442;
static int8_t x2411 = -1;
volatile int32_t t85 = 13308;
int16_t x2423 = INT16_MIN;
int32_t x2513 = 1;
int32_t x2531 = -5;
static int32_t t90 = 2364428;
uint8_t x2580 = 5U;
static int8_t x2679 = INT8_MIN;
uint32_t t95 = 0U;
volatile int32_t t96 = -600777331;
volatile int32_t t97 = 1000;
int8_t x2728 = 0;
int8_t x2850 = -3;
volatile int32_t t100 = 26891;
uint8_t x2857 = 1U;
volatile uint64_t x2858 = 1188186165LLU;
int32_t x2859 = 31810103;
uint16_t x2891 = 230U;
uint32_t x2922 = 59U;
volatile int8_t x2985 = -1;
uint32_t x2986 = 698U;
volatile uint32_t x2987 = 1U;
volatile uint8_t x3032 = 1U;
volatile int8_t x3040 = 1;
volatile int32_t t107 = 7182;
int64_t x3050 = INT64_MIN;
int64_t x3058 = INT64_MAX;
uint16_t x3061 = UINT16_MAX;
volatile uint64_t x3086 = 351481562818280LLU;
volatile uint64_t x3265 = 3789071399245LLU;
int8_t x3266 = -1;
volatile int64_t t117 = -5714718640262LL;
volatile int8_t x3387 = -36;
int8_t x3491 = 7;
uint8_t x3492 = 2U;
int32_t t119 = 147;
int16_t x3562 = INT16_MAX;
uint16_t x3625 = 57U;
volatile int64_t x3626 = -1LL;
static uint16_t x3639 = 14U;
static volatile uint16_t x3654 = 6195U;
volatile int16_t x3758 = -1621;
int64_t x3794 = INT64_MAX;
uint16_t x3812 = 3U;
volatile int32_t t130 = 0;
static int16_t x3871 = INT16_MIN;
int8_t x3901 = -1;
int32_t t133 = -18712164;
int16_t x3913 = -1;
uint8_t x3915 = 21U;
static int32_t t134 = 14764775;
static int64_t x3941 = INT64_MIN;
int16_t x3977 = 4688;
int8_t x4034 = 0;
static int64_t x4035 = INT64_MIN;
int32_t t139 = -64;
static uint16_t x4078 = 0U;
int64_t x4094 = -1LL;
static int32_t x4188 = 7;
int32_t t143 = -168;
uint64_t x4287 = 11230143280LLU;
uint8_t x4400 = 22U;
int64_t x4490 = -1LL;
volatile int8_t x4492 = 3;
static int8_t x4567 = -7;
volatile int32_t t150 = -347;
static int8_t x4597 = 0;
static volatile int8_t x4598 = INT8_MAX;
uint8_t x4599 = 25U;
static volatile int8_t x4600 = 0;
int16_t x4722 = INT16_MAX;
int8_t x4723 = -1;
volatile uint8_t x4778 = 61U;
int64_t x4938 = 74705281292973961LL;
static int8_t x4939 = 4;
volatile uint8_t x4944 = 0U;
int32_t x4983 = INT32_MIN;
volatile int32_t t161 = 128964124;
int32_t x5037 = INT32_MIN;
int64_t x5059 = -1LL;
static volatile uint8_t x5060 = 30U;
int64_t t163 = -1767678LL;
int8_t x5129 = INT8_MIN;
int64_t x5131 = INT64_MIN;
volatile int64_t t165 = 2765054289956LL;
int8_t x5139 = 4;
volatile int32_t t167 = -636;
int16_t x5181 = INT16_MAX;
int32_t x5182 = -1;
static int64_t t168 = 8850259643797274LL;
uint64_t x5337 = 110064712522563001LLU;
int32_t t174 = 1623;
uint16_t x5428 = 14U;
uint32_t x5465 = UINT32_MAX;
int64_t x5497 = 322206350032655LL;
int64_t t179 = 9664730281268721LL;
static int64_t x5657 = 0LL;
volatile uint64_t t181 = 30344LLU;
volatile int8_t x5662 = INT8_MAX;
static uint8_t x5715 = 5U;
int8_t x5716 = 0;
int32_t t185 = -96895;
volatile int32_t t186 = -555185285;
int8_t x5834 = INT8_MAX;
volatile int32_t t188 = 441439;
uint8_t x5918 = UINT8_MAX;
int8_t x5919 = 14;
static int16_t x5920 = 3;
uint64_t x5970 = UINT64_MAX;
uint8_t x5972 = 1U;
volatile int64_t t190 = -52094LL;
int8_t x5977 = -1;
int8_t x5978 = INT8_MAX;
int16_t x5979 = -958;
volatile int32_t t191 = 3989;
uint16_t x5984 = 25U;
uint32_t x6026 = 3U;
int8_t x6120 = 7;
int32_t t194 = -81;
volatile int64_t t196 = -2505900004348344LL;
static uint32_t x6232 = 1U;


void f0(void) {
    	int32_t x9 = INT32_MIN;
	static volatile int32_t t0 = -1;

    t0 = (((x9<=x10)%x11)>>x12);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x19 = INT8_MIN;
	int8_t x20 = 0;
	int32_t t1 = 111811;

    t1 = (((x17<=x18)%x19)>>x20);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x29 = INT64_MIN;
	volatile int16_t x30 = -62;
	volatile int32_t x31 = -320275;
	uint32_t x32 = 25U;
	static int32_t t2 = 2;

    t2 = (((x29<=x30)%x31)>>x32);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x45 = 92U;
	uint8_t x46 = UINT8_MAX;
	volatile int32_t x47 = -1;
	uint8_t x48 = 0U;
	int32_t t3 = -96;

    t3 = (((x45<=x46)%x47)>>x48);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x114 = -23700LL;
	int32_t x115 = -643;
	uint64_t x116 = 20LLU;
	volatile int32_t t4 = 7745891;

    t4 = (((x113<=x114)%x115)>>x116);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x121 = INT64_MAX;
	volatile int64_t x122 = INT64_MAX;
	static volatile int8_t x124 = 27;
	int32_t t5 = 1035718369;

    t5 = (((x121<=x122)%x123)>>x124);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x130 = INT8_MIN;
	volatile uint8_t x131 = 100U;
	int16_t x132 = 26;

    t6 = (((x129<=x130)%x131)>>x132);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x133 = -1;
	volatile int32_t x134 = INT32_MAX;
	static volatile uint16_t x135 = UINT16_MAX;
	volatile uint8_t x136 = 2U;
	volatile int32_t t7 = 1108;

    t7 = (((x133<=x134)%x135)>>x136);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x141 = 299937913U;
	int32_t x142 = -1;
	int16_t x143 = INT16_MAX;
	uint16_t x144 = 14U;
	volatile int32_t t8 = -40964918;

    t8 = (((x141<=x142)%x143)>>x144);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x145 = -109861836;
	static volatile uint16_t x147 = 1002U;
	uint8_t x148 = 6U;
	static int32_t t9 = 4310;

    t9 = (((x145<=x146)%x147)>>x148);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x201 = UINT16_MAX;
	int64_t x202 = INT64_MIN;
	static int64_t t10 = 175668856020LL;

    t10 = (((x201<=x202)%x203)>>x204);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x377 = INT64_MIN;
	int8_t x378 = 0;
	int16_t x379 = -5;
	static volatile int8_t x380 = 0;
	static int32_t t11 = 0;

    t11 = (((x377<=x378)%x379)>>x380);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x409 = INT16_MIN;
	uint32_t x410 = 58707926U;
	uint8_t x412 = 0U;
	static uint64_t t12 = 13LLU;

    t12 = (((x409<=x410)%x411)>>x412);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x421 = INT64_MAX;
	int32_t x422 = INT32_MIN;
	int16_t x423 = INT16_MAX;
	uint64_t x424 = 3LLU;
	static int32_t t13 = -142083;

    t13 = (((x421<=x422)%x423)>>x424);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x425 = 2U;
	int8_t x426 = INT8_MIN;
	static volatile uint8_t x428 = 0U;
	int32_t t14 = 83;

    t14 = (((x425<=x426)%x427)>>x428);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x449 = INT8_MIN;
	int8_t x450 = 2;

    t15 = (((x449<=x450)%x451)>>x452);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x463 = INT64_MAX;
	static uint16_t x464 = 41U;

    t16 = (((x461<=x462)%x463)>>x464);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x469 = 79045802U;
	int32_t x471 = INT32_MIN;
	uint8_t x472 = 18U;
	volatile int32_t t17 = -175;

    t17 = (((x469<=x470)%x471)>>x472);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x481 = -1;
	uint8_t x482 = 0U;
	int16_t x483 = INT16_MAX;
	volatile uint8_t x484 = 14U;
	int32_t t18 = 59;

    t18 = (((x481<=x482)%x483)>>x484);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x541 = INT64_MIN;
	int64_t x543 = -151292921891LL;
	static int8_t x544 = 1;

    t19 = (((x541<=x542)%x543)>>x544);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x545 = INT64_MAX;
	int16_t x546 = INT16_MAX;
	uint8_t x547 = 99U;
	uint64_t x548 = 3LLU;
	volatile int32_t t20 = 4;

    t20 = (((x545<=x546)%x547)>>x548);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x558 = INT32_MAX;
	static int64_t x559 = INT64_MIN;

    t21 = (((x557<=x558)%x559)>>x560);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x561 = INT32_MIN;
	static int64_t x562 = INT64_MAX;
	uint8_t x563 = 108U;
	static uint16_t x564 = 14U;
	int32_t t22 = 332273;

    t22 = (((x561<=x562)%x563)>>x564);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x585 = UINT16_MAX;
	volatile uint64_t x586 = 1LLU;
	int64_t x587 = -161LL;
	int8_t x588 = 22;

    t23 = (((x585<=x586)%x587)>>x588);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x593 = INT8_MIN;
	int32_t x594 = INT32_MIN;
	uint8_t x595 = 1U;
	static uint16_t x596 = 0U;
	volatile int32_t t24 = 48702;

    t24 = (((x593<=x594)%x595)>>x596);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x610 = -1;
	static int8_t x612 = 0;

    t25 = (((x609<=x610)%x611)>>x612);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x621 = -8223;
	int8_t x622 = INT8_MIN;
	static volatile int64_t x623 = -26006195113123086LL;
	int8_t x624 = 1;
	int64_t t26 = 1275311153064506LL;

    t26 = (((x621<=x622)%x623)>>x624);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x641 = INT8_MAX;
	int64_t x642 = INT64_MIN;
	uint64_t x643 = 131602194855928LLU;
	volatile uint8_t x644 = 1U;

    t27 = (((x641<=x642)%x643)>>x644);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x817 = -1LL;
	static volatile int8_t x818 = -1;
	uint8_t x819 = 1U;
	uint8_t x820 = 0U;
	static volatile int32_t t28 = -164337;

    t28 = (((x817<=x818)%x819)>>x820);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x822 = -432373450LL;
	volatile uint16_t x824 = 3U;

    t29 = (((x821<=x822)%x823)>>x824);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x858 = UINT32_MAX;
	uint8_t x859 = UINT8_MAX;
	volatile int32_t t30 = 5;

    t30 = (((x857<=x858)%x859)>>x860);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x893 = 616714LLU;
	int32_t x894 = -1;
	static uint8_t x895 = 1U;
	uint8_t x896 = 0U;
	volatile int32_t t31 = 0;

    t31 = (((x893<=x894)%x895)>>x896);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x917 = 443;

    t32 = (((x917<=x918)%x919)>>x920);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x925 = -6999;
	int32_t x927 = 31810;
	volatile uint8_t x928 = 0U;
	int32_t t33 = -2977;

    t33 = (((x925<=x926)%x927)>>x928);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x997 = INT8_MIN;
	static uint32_t x998 = UINT32_MAX;
	int32_t x999 = 182509;
	uint64_t x1000 = 13LLU;
	static int32_t t34 = 913119;

    t34 = (((x997<=x998)%x999)>>x1000);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x1009 = INT32_MIN;
	static uint32_t x1010 = 456U;
	int64_t x1011 = -1LL;
	static int32_t x1012 = 51;
	volatile int64_t t35 = -961568LL;

    t35 = (((x1009<=x1010)%x1011)>>x1012);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1021 = -1;
	uint16_t x1023 = 4824U;
	static int8_t x1024 = 1;
	static volatile int32_t t36 = -357509996;

    t36 = (((x1021<=x1022)%x1023)>>x1024);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1033 = INT64_MIN;
	uint16_t x1035 = 10911U;
	static int16_t x1036 = 30;
	static volatile int32_t t37 = 99;

    t37 = (((x1033<=x1034)%x1035)>>x1036);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1041 = -2;
	volatile int16_t x1042 = -1;
	volatile uint8_t x1043 = UINT8_MAX;
	static volatile uint8_t x1044 = 0U;
	volatile int32_t t38 = 265487421;

    t38 = (((x1041<=x1042)%x1043)>>x1044);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x1050 = INT32_MIN;
	uint8_t x1051 = 1U;
	uint16_t x1052 = 3U;
	int32_t t39 = -69;

    t39 = (((x1049<=x1050)%x1051)>>x1052);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1053 = UINT64_MAX;
	uint64_t x1054 = 203262759897LLU;
	uint8_t x1055 = 1U;
	uint8_t x1056 = 0U;
	static volatile int32_t t40 = 1;

    t40 = (((x1053<=x1054)%x1055)>>x1056);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x1061 = UINT64_MAX;
	int16_t x1062 = INT16_MIN;
	uint16_t x1063 = 28037U;
	int8_t x1064 = 9;
	int32_t t41 = -112569;

    t41 = (((x1061<=x1062)%x1063)>>x1064);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1089 = INT64_MAX;
	int16_t x1090 = INT16_MAX;
	uint8_t x1092 = 19U;

    t42 = (((x1089<=x1090)%x1091)>>x1092);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x1098 = INT16_MIN;
	uint32_t x1099 = UINT32_MAX;
	int8_t x1100 = 0;
	static uint32_t t43 = 3357U;

    t43 = (((x1097<=x1098)%x1099)>>x1100);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x1114 = -1;
	uint8_t x1115 = UINT8_MAX;
	uint8_t x1116 = 9U;
	int32_t t44 = 275787;

    t44 = (((x1113<=x1114)%x1115)>>x1116);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x1117 = 5;
	static volatile int16_t x1118 = -26;
	int64_t x1119 = -1LL;
	int8_t x1120 = 7;
	static volatile int64_t t45 = 436020824305869628LL;

    t45 = (((x1117<=x1118)%x1119)>>x1120);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x1141 = UINT8_MAX;
	int16_t x1142 = -3;
	volatile int32_t x1143 = INT32_MIN;
	volatile int32_t t46 = 380472;

    t46 = (((x1141<=x1142)%x1143)>>x1144);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x1149 = 1;
	static uint64_t x1150 = 9284561LLU;
	int64_t x1151 = INT64_MIN;
	uint8_t x1152 = 12U;

    t47 = (((x1149<=x1150)%x1151)>>x1152);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x1169 = -1LL;
	uint32_t x1170 = 206399U;
	int8_t x1172 = 0;
	uint64_t t48 = 24321832584302619LLU;

    t48 = (((x1169<=x1170)%x1171)>>x1172);

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1173 = 92825631368LL;
	static int16_t x1174 = INT16_MIN;
	static uint8_t x1175 = 54U;
	int16_t x1176 = 20;
	int32_t t49 = -31269;

    t49 = (((x1173<=x1174)%x1175)>>x1176);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x1189 = -6471;
	volatile int8_t x1190 = INT8_MIN;
	uint16_t x1191 = 743U;
	int32_t t50 = 467398030;

    t50 = (((x1189<=x1190)%x1191)>>x1192);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x1333 = 2U;
	uint16_t x1335 = UINT16_MAX;
	static uint8_t x1336 = 29U;
	int32_t t51 = 85166;

    t51 = (((x1333<=x1334)%x1335)>>x1336);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x1357 = INT16_MAX;
	int64_t x1358 = 33217426781848LL;
	int8_t x1359 = INT8_MIN;
	static uint8_t x1360 = 13U;
	volatile int32_t t52 = 1;

    t52 = (((x1357<=x1358)%x1359)>>x1360);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x1389 = 16961755751LLU;
	int64_t x1390 = INT64_MAX;
	volatile uint32_t t53 = 100309U;

    t53 = (((x1389<=x1390)%x1391)>>x1392);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x1441 = 15055;
	volatile uint64_t x1442 = 300502117LLU;
	int64_t x1443 = -1LL;
	static int16_t x1444 = 39;
	int64_t t54 = 27421513LL;

    t54 = (((x1441<=x1442)%x1443)>>x1444);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x1477 = 31326U;
	uint64_t x1478 = 16720473LLU;
	uint32_t x1480 = 1U;
	int64_t t55 = 202LL;

    t55 = (((x1477<=x1478)%x1479)>>x1480);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1481 = 1;
	int16_t x1482 = INT16_MIN;
	volatile uint64_t x1483 = 13964716054920LLU;
	static int16_t x1484 = 5;

    t56 = (((x1481<=x1482)%x1483)>>x1484);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x1486 = 27U;
	static int32_t x1487 = -1;
	volatile uint8_t x1488 = 27U;

    t57 = (((x1485<=x1486)%x1487)>>x1488);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x1557 = 10U;
	int32_t x1558 = -123785671;
	static int16_t x1559 = INT16_MAX;
	static int32_t t58 = -196;

    t58 = (((x1557<=x1558)%x1559)>>x1560);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x1561 = 2;
	int64_t x1562 = INT64_MAX;
	int8_t x1563 = -1;
	uint8_t x1564 = 1U;
	int32_t t59 = -1837107;

    t59 = (((x1561<=x1562)%x1563)>>x1564);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x1581 = INT64_MIN;
	static int8_t x1582 = -1;
	int32_t t60 = 158;

    t60 = (((x1581<=x1582)%x1583)>>x1584);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x1593 = INT64_MIN;
	uint32_t x1594 = UINT32_MAX;
	uint8_t x1596 = 1U;
	volatile int32_t t61 = 2175;

    t61 = (((x1593<=x1594)%x1595)>>x1596);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x1601 = INT8_MIN;
	static uint32_t x1602 = UINT32_MAX;
	volatile uint64_t x1603 = 108165625998LLU;
	uint8_t x1604 = 5U;
	uint64_t t62 = 34080986119277709LLU;

    t62 = (((x1601<=x1602)%x1603)>>x1604);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x1617 = 1U;
	static volatile int64_t x1618 = INT64_MIN;
	int8_t x1619 = -2;
	static volatile uint8_t x1620 = 2U;
	static volatile int32_t t63 = 350;

    t63 = (((x1617<=x1618)%x1619)>>x1620);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x1621 = INT32_MIN;
	uint16_t x1622 = 20U;
	static volatile int32_t x1623 = INT32_MIN;
	int32_t x1624 = 13;
	static volatile int32_t t64 = 93912;

    t64 = (((x1621<=x1622)%x1623)>>x1624);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x1717 = 9;
	uint8_t x1718 = 27U;
	uint16_t x1719 = UINT16_MAX;
	static int16_t x1720 = 0;
	volatile int32_t t65 = 0;

    t65 = (((x1717<=x1718)%x1719)>>x1720);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x1789 = INT8_MAX;
	uint64_t x1790 = 2311LLU;
	int32_t x1791 = -1;
	static int16_t x1792 = 12;
	static volatile int32_t t66 = 7;

    t66 = (((x1789<=x1790)%x1791)>>x1792);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x1830 = -32314697093634LL;
	int64_t x1831 = -1LL;
	static uint8_t x1832 = 1U;
	volatile int64_t t67 = -357707086329LL;

    t67 = (((x1829<=x1830)%x1831)>>x1832);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x1885 = INT8_MIN;
	int64_t x1886 = 23645745401809LL;
	volatile int64_t x1887 = INT64_MIN;
	uint8_t x1888 = 12U;
	volatile int64_t t68 = -34084117735691LL;

    t68 = (((x1885<=x1886)%x1887)>>x1888);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x1913 = -1;
	int8_t x1914 = INT8_MIN;
	int8_t x1915 = INT8_MIN;
	int32_t x1916 = 17;
	static int32_t t69 = -10;

    t69 = (((x1913<=x1914)%x1915)>>x1916);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x1921 = UINT8_MAX;
	int32_t x1923 = 775;
	static int8_t x1924 = 0;
	int32_t t70 = -6;

    t70 = (((x1921<=x1922)%x1923)>>x1924);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x2045 = 1U;
	int32_t x2046 = 154204343;
	volatile uint8_t x2047 = 7U;
	static int16_t x2048 = 0;
	volatile int32_t t71 = 0;

    t71 = (((x2045<=x2046)%x2047)>>x2048);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2049 = -2;
	int16_t x2051 = -1;
	int8_t x2052 = 12;

    t72 = (((x2049<=x2050)%x2051)>>x2052);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x2053 = -1LL;
	int16_t x2054 = -1;
	volatile uint64_t x2055 = UINT64_MAX;
	uint16_t x2056 = 1U;
	volatile uint64_t t73 = 1399724418847226LLU;

    t73 = (((x2053<=x2054)%x2055)>>x2056);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x2066 = UINT16_MAX;
	int32_t t74 = 5;

    t74 = (((x2065<=x2066)%x2067)>>x2068);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x2133 = -60;
	static uint64_t x2134 = 212312110775817778LLU;
	static int16_t x2135 = 90;
	uint32_t x2136 = 3U;

    t75 = (((x2133<=x2134)%x2135)>>x2136);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x2145 = 1U;
	static int8_t x2146 = -1;
	int32_t x2147 = 288032783;
	volatile int32_t t76 = -10068;

    t76 = (((x2145<=x2146)%x2147)>>x2148);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2153 = -39;
	uint64_t x2155 = 155795901LLU;
	uint32_t x2156 = 63U;
	volatile uint64_t t77 = 699LLU;

    t77 = (((x2153<=x2154)%x2155)>>x2156);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x2158 = 5U;
	int8_t x2159 = INT8_MAX;
	static volatile int32_t t78 = -27963;

    t78 = (((x2157<=x2158)%x2159)>>x2160);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x2165 = 56U;
	int8_t x2166 = INT8_MIN;
	volatile uint64_t x2168 = 1LLU;
	static volatile int32_t t79 = 35540;

    t79 = (((x2165<=x2166)%x2167)>>x2168);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x2205 = 1;
	int16_t x2206 = INT16_MIN;
	static uint8_t x2207 = 6U;
	static volatile int32_t t80 = -1495717;

    t80 = (((x2205<=x2206)%x2207)>>x2208);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x2245 = INT64_MIN;
	uint32_t x2247 = UINT32_MAX;
	uint8_t x2248 = 3U;
	uint32_t t81 = 11519U;

    t81 = (((x2245<=x2246)%x2247)>>x2248);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint16_t x2350 = UINT16_MAX;
	int32_t x2351 = INT32_MAX;
	volatile uint8_t x2352 = 3U;
	int32_t t82 = -53252190;

    t82 = (((x2349<=x2350)%x2351)>>x2352);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x2359 = -48972LL;
	int64_t t83 = -4239822LL;

    t83 = (((x2357<=x2358)%x2359)>>x2360);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2408 = 1;

    t84 = (((x2405<=x2406)%x2407)>>x2408);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x2409 = INT64_MIN;
	uint64_t x2410 = 35502604710618955LLU;
	int8_t x2412 = 0;

    t85 = (((x2409<=x2410)%x2411)>>x2412);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x2421 = -1;
	volatile uint16_t x2422 = UINT16_MAX;
	uint16_t x2424 = 0U;
	int32_t t86 = 13;

    t86 = (((x2421<=x2422)%x2423)>>x2424);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x2473 = UINT64_MAX;
	volatile uint32_t x2474 = 1U;
	static volatile int64_t x2475 = 760771400903330LL;
	uint8_t x2476 = 12U;
	volatile int64_t t87 = -49083395244LL;

    t87 = (((x2473<=x2474)%x2475)>>x2476);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x2501 = 12U;
	int64_t x2502 = -1LL;
	int8_t x2503 = 21;
	uint8_t x2504 = 1U;
	volatile int32_t t88 = -126750;

    t88 = (((x2501<=x2502)%x2503)>>x2504);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x2514 = -1;
	int16_t x2515 = INT16_MIN;
	int8_t x2516 = 14;
	volatile int32_t t89 = -11223;

    t89 = (((x2513<=x2514)%x2515)>>x2516);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x2529 = INT8_MAX;
	int16_t x2530 = -1;
	volatile int8_t x2532 = 3;

    t90 = (((x2529<=x2530)%x2531)>>x2532);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x2577 = 14609038691852555LLU;
	int16_t x2578 = -1;
	uint64_t x2579 = UINT64_MAX;
	uint64_t t91 = 1691490799LLU;

    t91 = (((x2577<=x2578)%x2579)>>x2580);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x2581 = -1;
	uint16_t x2582 = 3U;
	volatile int32_t x2583 = -1;
	int16_t x2584 = 25;
	static int32_t t92 = -11352;

    t92 = (((x2581<=x2582)%x2583)>>x2584);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x2669 = UINT32_MAX;
	int8_t x2670 = -7;
	static uint8_t x2671 = 1U;
	static uint32_t x2672 = 12U;
	int32_t t93 = -746358295;

    t93 = (((x2669<=x2670)%x2671)>>x2672);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x2677 = UINT32_MAX;
	uint64_t x2678 = 325424588LLU;
	static uint32_t x2680 = 11U;
	int32_t t94 = -572415;

    t94 = (((x2677<=x2678)%x2679)>>x2680);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x2681 = 7U;
	static volatile uint64_t x2682 = UINT64_MAX;
	uint32_t x2683 = 10824U;
	int16_t x2684 = 25;

    t95 = (((x2681<=x2682)%x2683)>>x2684);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x2697 = -1;
	int16_t x2698 = -2;
	int32_t x2699 = 1;
	volatile int32_t x2700 = 1;

    t96 = (((x2697<=x2698)%x2699)>>x2700);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x2705 = 10898U;
	static volatile int32_t x2706 = INT32_MAX;
	int8_t x2707 = INT8_MIN;
	int16_t x2708 = 0;

    t97 = (((x2705<=x2706)%x2707)>>x2708);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x2725 = 133779842953766878LLU;
	uint32_t x2726 = 6432107U;
	int8_t x2727 = -1;
	static int32_t t98 = -8;

    t98 = (((x2725<=x2726)%x2727)>>x2728);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x2841 = INT32_MIN;
	static int8_t x2842 = INT8_MIN;
	int16_t x2843 = INT16_MAX;
	int64_t x2844 = 1LL;
	int32_t t99 = 99107246;

    t99 = (((x2841<=x2842)%x2843)>>x2844);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x2849 = 1U;
	uint16_t x2851 = 14502U;
	static uint16_t x2852 = 4U;

    t100 = (((x2849<=x2850)%x2851)>>x2852);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x2860 = 21U;
	int32_t t101 = 8673552;

    t101 = (((x2857<=x2858)%x2859)>>x2860);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x2881 = -19087815;
	volatile uint16_t x2882 = UINT16_MAX;
	volatile int16_t x2883 = -1;
	int8_t x2884 = 0;
	static volatile int32_t t102 = 2784;

    t102 = (((x2881<=x2882)%x2883)>>x2884);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x2889 = INT32_MIN;
	int32_t x2890 = INT32_MIN;
	volatile int32_t x2892 = 0;
	int32_t t103 = -121870;

    t103 = (((x2889<=x2890)%x2891)>>x2892);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x2921 = INT16_MIN;
	int32_t x2923 = INT32_MIN;
	volatile int8_t x2924 = 21;
	static int32_t t104 = -7573393;

    t104 = (((x2921<=x2922)%x2923)>>x2924);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x2988 = 6U;
	uint32_t t105 = 45U;

    t105 = (((x2985<=x2986)%x2987)>>x2988);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x3029 = -890;
	static int64_t x3030 = -1LL;
	int8_t x3031 = 24;
	int32_t t106 = -4624732;

    t106 = (((x3029<=x3030)%x3031)>>x3032);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x3037 = UINT64_MAX;
	int16_t x3038 = -49;
	volatile int32_t x3039 = -108;

    t107 = (((x3037<=x3038)%x3039)>>x3040);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3049 = -1;
	int32_t x3051 = -1;
	uint8_t x3052 = 25U;
	volatile int32_t t108 = -168398132;

    t108 = (((x3049<=x3050)%x3051)>>x3052);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x3057 = -1;
	static int32_t x3059 = INT32_MIN;
	static volatile int8_t x3060 = 7;
	volatile int32_t t109 = -63;

    t109 = (((x3057<=x3058)%x3059)>>x3060);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x3062 = -1;
	int16_t x3063 = INT16_MIN;
	uint32_t x3064 = 0U;
	static volatile int32_t t110 = 26004761;

    t110 = (((x3061<=x3062)%x3063)>>x3064);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x3085 = -1;
	uint64_t x3087 = 345642194561LLU;
	int32_t x3088 = 16;
	volatile uint64_t t111 = 260100350585LLU;

    t111 = (((x3085<=x3086)%x3087)>>x3088);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x3161 = 2116905183329491899LL;
	volatile int32_t x3162 = INT32_MAX;
	static int16_t x3163 = 59;
	static uint8_t x3164 = 18U;
	volatile int32_t t112 = -1;

    t112 = (((x3161<=x3162)%x3163)>>x3164);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x3205 = 468488LLU;
	static int64_t x3206 = INT64_MAX;
	uint64_t x3207 = 1024763815272459LLU;
	int8_t x3208 = 0;
	uint64_t t113 = 470235196530988405LLU;

    t113 = (((x3205<=x3206)%x3207)>>x3208);

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x3225 = 9503U;
	uint64_t x3226 = UINT64_MAX;
	static volatile int32_t x3227 = 118;
	int16_t x3228 = 0;
	static int32_t t114 = -3034;

    t114 = (((x3225<=x3226)%x3227)>>x3228);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x3267 = -1183310;
	int16_t x3268 = 3;
	volatile int32_t t115 = 62798969;

    t115 = (((x3265<=x3266)%x3267)>>x3268);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x3285 = -1;
	int16_t x3286 = INT16_MIN;
	static int32_t x3287 = INT32_MIN;
	uint8_t x3288 = 15U;
	static volatile int32_t t116 = 11;

    t116 = (((x3285<=x3286)%x3287)>>x3288);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3297 = 12382;
	volatile int8_t x3298 = INT8_MIN;
	volatile int64_t x3299 = INT64_MAX;
	uint8_t x3300 = 1U;

    t117 = (((x3297<=x3298)%x3299)>>x3300);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x3385 = -1;
	uint8_t x3386 = 56U;
	volatile int32_t x3388 = 1;
	int32_t t118 = 46772290;

    t118 = (((x3385<=x3386)%x3387)>>x3388);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x3489 = INT32_MAX;
	static int32_t x3490 = INT32_MIN;

    t119 = (((x3489<=x3490)%x3491)>>x3492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x3541 = -1LL;
	int8_t x3542 = INT8_MIN;
	volatile int16_t x3543 = INT16_MIN;
	static int8_t x3544 = 1;
	volatile int32_t t120 = -12840;

    t120 = (((x3541<=x3542)%x3543)>>x3544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x3561 = INT64_MIN;
	int16_t x3563 = INT16_MIN;
	int16_t x3564 = 3;
	volatile int32_t t121 = -120;

    t121 = (((x3561<=x3562)%x3563)>>x3564);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x3627 = INT64_MIN;
	uint32_t x3628 = 15U;
	volatile int64_t t122 = -18546397828235LL;

    t122 = (((x3625<=x3626)%x3627)>>x3628);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x3629 = INT8_MIN;
	volatile uint64_t x3630 = 4620296085445359LLU;
	uint32_t x3631 = 337U;
	int8_t x3632 = 16;
	uint32_t t123 = 27U;

    t123 = (((x3629<=x3630)%x3631)>>x3632);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x3637 = -1;
	int32_t x3638 = -2;
	static int8_t x3640 = 26;
	volatile int32_t t124 = 7;

    t124 = (((x3637<=x3638)%x3639)>>x3640);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x3653 = UINT8_MAX;
	int64_t x3655 = INT64_MIN;
	int16_t x3656 = 52;
	static int64_t t125 = -1732012330363141433LL;

    t125 = (((x3653<=x3654)%x3655)>>x3656);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x3673 = 151590073U;
	volatile uint64_t x3674 = UINT64_MAX;
	uint64_t x3675 = UINT64_MAX;
	int16_t x3676 = 2;
	volatile uint64_t t126 = 4390874373925984LLU;

    t126 = (((x3673<=x3674)%x3675)>>x3676);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x3753 = INT16_MAX;
	volatile int32_t x3754 = INT32_MIN;
	static int64_t x3755 = INT64_MAX;
	uint8_t x3756 = 7U;
	volatile int64_t t127 = -136578080973811785LL;

    t127 = (((x3753<=x3754)%x3755)>>x3756);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x3757 = INT32_MIN;
	volatile int8_t x3759 = -1;
	static int8_t x3760 = 10;
	int32_t t128 = -27;

    t128 = (((x3757<=x3758)%x3759)>>x3760);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x3793 = -1LL;
	uint8_t x3795 = UINT8_MAX;
	uint16_t x3796 = 1U;
	volatile int32_t t129 = -915;

    t129 = (((x3793<=x3794)%x3795)>>x3796);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x3809 = INT32_MIN;
	volatile uint32_t x3810 = 2U;
	int8_t x3811 = 21;

    t130 = (((x3809<=x3810)%x3811)>>x3812);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x3869 = INT16_MAX;
	uint8_t x3870 = 7U;
	uint16_t x3872 = 0U;
	int32_t t131 = 3063895;

    t131 = (((x3869<=x3870)%x3871)>>x3872);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x3889 = INT8_MIN;
	uint32_t x3890 = 8124631U;
	static volatile int8_t x3891 = -1;
	volatile int8_t x3892 = 6;
	volatile int32_t t132 = 179257;

    t132 = (((x3889<=x3890)%x3891)>>x3892);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x3902 = 3132487U;
	int16_t x3903 = INT16_MAX;
	static volatile uint32_t x3904 = 1U;

    t133 = (((x3901<=x3902)%x3903)>>x3904);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x3914 = INT64_MIN;
	static int16_t x3916 = 1;

    t134 = (((x3913<=x3914)%x3915)>>x3916);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x3942 = 1;
	int16_t x3943 = INT16_MAX;
	uint64_t x3944 = 1LLU;
	int32_t t135 = -27222979;

    t135 = (((x3941<=x3942)%x3943)>>x3944);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x3978 = -1LL;
	uint32_t x3979 = 68U;
	uint64_t x3980 = 6LLU;
	uint32_t t136 = 1337U;

    t136 = (((x3977<=x3978)%x3979)>>x3980);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x3993 = -1;
	int64_t x3994 = INT64_MAX;
	int8_t x3995 = INT8_MIN;
	volatile uint8_t x3996 = 10U;
	volatile int32_t t137 = 117486193;

    t137 = (((x3993<=x3994)%x3995)>>x3996);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x4033 = -12245;
	int8_t x4036 = 24;
	int64_t t138 = 118593789871786433LL;

    t138 = (((x4033<=x4034)%x4035)>>x4036);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x4069 = INT64_MIN;
	volatile uint32_t x4070 = 981000598U;
	static volatile int8_t x4071 = -1;
	int64_t x4072 = 1LL;

    t139 = (((x4069<=x4070)%x4071)>>x4072);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x4077 = 6U;
	volatile int16_t x4079 = 1;
	int8_t x4080 = 4;
	int32_t t140 = -1;

    t140 = (((x4077<=x4078)%x4079)>>x4080);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x4093 = 187U;
	uint32_t x4095 = 779830561U;
	uint16_t x4096 = 0U;
	uint32_t t141 = 606255089U;

    t141 = (((x4093<=x4094)%x4095)>>x4096);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x4141 = INT64_MIN;
	uint32_t x4142 = UINT32_MAX;
	static int16_t x4143 = INT16_MIN;
	uint8_t x4144 = 25U;
	volatile int32_t t142 = 5658436;

    t142 = (((x4141<=x4142)%x4143)>>x4144);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x4185 = 47887373664LL;
	volatile uint16_t x4186 = UINT16_MAX;
	int16_t x4187 = 20;

    t143 = (((x4185<=x4186)%x4187)>>x4188);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x4257 = 483068U;
	volatile int16_t x4258 = INT16_MIN;
	int64_t x4259 = -1LL;
	uint32_t x4260 = 53U;
	int64_t t144 = 8214LL;

    t144 = (((x4257<=x4258)%x4259)>>x4260);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x4285 = INT8_MAX;
	static int64_t x4286 = INT64_MIN;
	int8_t x4288 = 2;
	volatile uint64_t t145 = 5297154LLU;

    t145 = (((x4285<=x4286)%x4287)>>x4288);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x4341 = -435403687;
	uint8_t x4342 = 75U;
	int32_t x4343 = INT32_MIN;
	uint8_t x4344 = 0U;
	static int32_t t146 = -15391;

    t146 = (((x4341<=x4342)%x4343)>>x4344);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x4397 = 594364;
	int16_t x4398 = -3;
	static uint32_t x4399 = 1345447U;
	volatile uint32_t t147 = 37U;

    t147 = (((x4397<=x4398)%x4399)>>x4400);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x4489 = 11;
	uint16_t x4491 = 492U;
	volatile int32_t t148 = -5465933;

    t148 = (((x4489<=x4490)%x4491)>>x4492);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x4565 = INT8_MAX;
	uint32_t x4566 = UINT32_MAX;
	int8_t x4568 = 15;
	int32_t t149 = -1;

    t149 = (((x4565<=x4566)%x4567)>>x4568);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x4581 = 5723405664276590238LLU;
	volatile int16_t x4582 = -1;
	int16_t x4583 = INT16_MIN;
	static uint8_t x4584 = 1U;

    t150 = (((x4581<=x4582)%x4583)>>x4584);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t t151 = 221442439;

    t151 = (((x4597<=x4598)%x4599)>>x4600);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x4673 = 717053LLU;
	uint8_t x4674 = 7U;
	static uint16_t x4675 = UINT16_MAX;
	volatile int32_t x4676 = 3;
	static int32_t t152 = -54;

    t152 = (((x4673<=x4674)%x4675)>>x4676);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x4681 = -1LL;
	int8_t x4682 = INT8_MAX;
	int32_t x4683 = -1;
	static int32_t x4684 = 0;
	volatile int32_t t153 = -51487677;

    t153 = (((x4681<=x4682)%x4683)>>x4684);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x4705 = -1;
	volatile int64_t x4706 = 4521500460873LL;
	volatile int32_t x4707 = INT32_MIN;
	int8_t x4708 = 1;
	volatile int32_t t154 = 2008054;

    t154 = (((x4705<=x4706)%x4707)>>x4708);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x4721 = 84172733253716LLU;
	uint32_t x4724 = 11U;
	volatile int32_t t155 = 11;

    t155 = (((x4721<=x4722)%x4723)>>x4724);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x4777 = 1;
	int64_t x4779 = -899292437990028340LL;
	uint8_t x4780 = 0U;
	volatile int64_t t156 = 49767LL;

    t156 = (((x4777<=x4778)%x4779)>>x4780);

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x4781 = -3;
	int64_t x4782 = -1LL;
	static int8_t x4783 = -1;
	uint16_t x4784 = 1U;
	int32_t t157 = 2;

    t157 = (((x4781<=x4782)%x4783)>>x4784);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x4861 = -1;
	volatile uint16_t x4862 = 2296U;
	uint16_t x4863 = 2589U;
	static uint8_t x4864 = 1U;
	volatile int32_t t158 = -6687585;

    t158 = (((x4861<=x4862)%x4863)>>x4864);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x4937 = INT32_MAX;
	int8_t x4940 = 14;
	volatile int32_t t159 = 1;

    t159 = (((x4937<=x4938)%x4939)>>x4940);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x4941 = 11;
	uint32_t x4942 = 7U;
	int16_t x4943 = -499;
	volatile int32_t t160 = -240817634;

    t160 = (((x4941<=x4942)%x4943)>>x4944);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x4981 = 1;
	volatile int64_t x4982 = -1LL;
	int8_t x4984 = 0;

    t161 = (((x4981<=x4982)%x4983)>>x4984);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x5038 = INT8_MIN;
	volatile uint64_t x5039 = 2303339194930022LLU;
	uint64_t x5040 = 1LLU;
	static uint64_t t162 = 942436304LLU;

    t162 = (((x5037<=x5038)%x5039)>>x5040);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x5057 = INT64_MAX;
	int16_t x5058 = INT16_MIN;

    t163 = (((x5057<=x5058)%x5059)>>x5060);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x5093 = -5;
	int16_t x5094 = INT16_MIN;
	int16_t x5095 = INT16_MAX;
	int8_t x5096 = 0;
	volatile int32_t t164 = -34564405;

    t164 = (((x5093<=x5094)%x5095)>>x5096);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x5130 = INT8_MIN;
	uint32_t x5132 = 8U;

    t165 = (((x5129<=x5130)%x5131)>>x5132);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x5137 = INT8_MIN;
	int16_t x5138 = -41;
	int8_t x5140 = 23;
	static int32_t t166 = -1959;

    t166 = (((x5137<=x5138)%x5139)>>x5140);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x5145 = INT64_MAX;
	uint16_t x5146 = UINT16_MAX;
	volatile int8_t x5147 = INT8_MAX;
	static uint8_t x5148 = 19U;

    t167 = (((x5145<=x5146)%x5147)>>x5148);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x5183 = 6789623171804LL;
	int8_t x5184 = 1;

    t168 = (((x5181<=x5182)%x5183)>>x5184);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x5225 = -1;
	uint8_t x5226 = 6U;
	volatile int8_t x5227 = -1;
	volatile uint8_t x5228 = 0U;
	int32_t t169 = -16734121;

    t169 = (((x5225<=x5226)%x5227)>>x5228);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x5249 = UINT8_MAX;
	uint64_t x5250 = 128348478045LLU;
	static int32_t x5251 = -1;
	static uint8_t x5252 = 3U;
	int32_t t170 = -124;

    t170 = (((x5249<=x5250)%x5251)>>x5252);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x5277 = 0;
	int16_t x5278 = 1;
	volatile int8_t x5279 = -12;
	int8_t x5280 = 3;
	int32_t t171 = 29242;

    t171 = (((x5277<=x5278)%x5279)>>x5280);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x5297 = INT64_MIN;
	int64_t x5298 = -499LL;
	int8_t x5299 = -1;
	int8_t x5300 = 5;
	volatile int32_t t172 = 66635;

    t172 = (((x5297<=x5298)%x5299)>>x5300);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x5338 = 933U;
	int8_t x5339 = 1;
	int64_t x5340 = 1LL;
	volatile int32_t t173 = 46633;

    t173 = (((x5337<=x5338)%x5339)>>x5340);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x5377 = INT8_MIN;
	static int8_t x5378 = INT8_MIN;
	static uint8_t x5379 = 6U;
	int8_t x5380 = 0;

    t174 = (((x5377<=x5378)%x5379)>>x5380);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x5425 = UINT8_MAX;
	int16_t x5426 = INT16_MIN;
	static uint16_t x5427 = 3372U;
	volatile int32_t t175 = -754427917;

    t175 = (((x5425<=x5426)%x5427)>>x5428);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x5466 = -744969775;
	uint32_t x5467 = 4824U;
	volatile uint8_t x5468 = 3U;
	uint32_t t176 = 57192177U;

    t176 = (((x5465<=x5466)%x5467)>>x5468);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x5498 = INT8_MAX;
	uint8_t x5499 = 15U;
	static uint8_t x5500 = 0U;
	volatile int32_t t177 = 53140;

    t177 = (((x5497<=x5498)%x5499)>>x5500);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x5577 = UINT64_MAX;
	uint8_t x5578 = 2U;
	uint16_t x5579 = 15U;
	static int8_t x5580 = 2;
	int32_t t178 = -1051355242;

    t178 = (((x5577<=x5578)%x5579)>>x5580);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x5617 = INT32_MAX;
	int16_t x5618 = -738;
	static int64_t x5619 = -1LL;
	int8_t x5620 = 4;

    t179 = (((x5617<=x5618)%x5619)>>x5620);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x5649 = INT8_MIN;
	uint16_t x5650 = 6797U;
	static int16_t x5651 = 28;
	uint8_t x5652 = 0U;
	volatile int32_t t180 = -13951835;

    t180 = (((x5649<=x5650)%x5651)>>x5652);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x5658 = INT64_MIN;
	uint64_t x5659 = 18LLU;
	uint16_t x5660 = 25U;

    t181 = (((x5657<=x5658)%x5659)>>x5660);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x5661 = 15U;
	uint16_t x5663 = 31U;
	static uint16_t x5664 = 6U;
	int32_t t182 = -4166689;

    t182 = (((x5661<=x5662)%x5663)>>x5664);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x5685 = INT32_MIN;
	static int16_t x5686 = INT16_MIN;
	int64_t x5687 = -1LL;
	volatile int16_t x5688 = 0;
	static int64_t t183 = 21240LL;

    t183 = (((x5685<=x5686)%x5687)>>x5688);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x5713 = UINT64_MAX;
	static int64_t x5714 = -1LL;
	volatile int32_t t184 = 100797;

    t184 = (((x5713<=x5714)%x5715)>>x5716);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x5733 = 36;
	int64_t x5734 = -29006277455643LL;
	uint8_t x5735 = 6U;
	static uint8_t x5736 = 1U;

    t185 = (((x5733<=x5734)%x5735)>>x5736);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x5769 = 30418636LLU;
	int16_t x5770 = 1;
	static uint8_t x5771 = UINT8_MAX;
	uint8_t x5772 = 3U;

    t186 = (((x5769<=x5770)%x5771)>>x5772);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x5797 = INT16_MAX;
	volatile int8_t x5798 = INT8_MIN;
	static int8_t x5799 = INT8_MIN;
	uint8_t x5800 = 3U;
	int32_t t187 = -188;

    t187 = (((x5797<=x5798)%x5799)>>x5800);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x5833 = 17;
	int8_t x5835 = -5;
	volatile uint8_t x5836 = 3U;

    t188 = (((x5833<=x5834)%x5835)>>x5836);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x5917 = -44994298979845950LL;
	int32_t t189 = -1894638;

    t189 = (((x5917<=x5918)%x5919)>>x5920);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x5969 = INT16_MIN;
	static int64_t x5971 = INT64_MIN;

    t190 = (((x5969<=x5970)%x5971)>>x5972);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x5980 = 3U;

    t191 = (((x5977<=x5978)%x5979)>>x5980);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x5981 = 0U;
	static int64_t x5982 = INT64_MIN;
	uint16_t x5983 = UINT16_MAX;
	static volatile int32_t t192 = -1713;

    t192 = (((x5981<=x5982)%x5983)>>x5984);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x6025 = INT64_MAX;
	volatile int8_t x6027 = -1;
	static uint16_t x6028 = 2U;
	int32_t t193 = 521253;

    t193 = (((x6025<=x6026)%x6027)>>x6028);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x6117 = INT16_MAX;
	volatile int32_t x6118 = INT32_MIN;
	int8_t x6119 = INT8_MAX;

    t194 = (((x6117<=x6118)%x6119)>>x6120);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x6133 = -27;
	int16_t x6134 = INT16_MAX;
	static int16_t x6135 = 3963;
	int8_t x6136 = 0;
	static int32_t t195 = 264454;

    t195 = (((x6133<=x6134)%x6135)>>x6136);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x6193 = UINT8_MAX;
	int32_t x6194 = -1;
	int64_t x6195 = INT64_MIN;
	volatile int64_t x6196 = 1LL;

    t196 = (((x6193<=x6194)%x6195)>>x6196);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x6197 = 43U;
	int64_t x6198 = -651322245493LL;
	int64_t x6199 = -1LL;
	uint8_t x6200 = 1U;
	int64_t t197 = 237LL;

    t197 = (((x6197<=x6198)%x6199)>>x6200);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x6229 = INT64_MIN;
	int8_t x6230 = -1;
	static uint32_t x6231 = 6468162U;
	volatile uint32_t t198 = 1166U;

    t198 = (((x6229<=x6230)%x6231)>>x6232);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x6237 = INT32_MAX;
	int64_t x6238 = 21068697726540LL;
	int32_t x6239 = INT32_MIN;
	uint8_t x6240 = 14U;
	static int32_t t199 = -71;

    t199 = (((x6237<=x6238)%x6239)>>x6240);

    if (t199 != 0) { NG(); } else { ; }
	
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

