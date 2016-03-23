
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

static int8_t x10 = -1;
static int8_t x45 = 58;
static int16_t x46 = -1;
static int32_t t7 = -60381;
int32_t t8 = -780929011;
int16_t x225 = INT16_MIN;
uint8_t x226 = 21U;
int32_t t10 = 16658;
uint64_t x263 = UINT64_MAX;
volatile int32_t t11 = -960275;
uint64_t x278 = UINT64_MAX;
int32_t x297 = 253411;
static volatile uint16_t x309 = UINT16_MAX;
static int16_t x310 = INT16_MIN;
static int64_t x312 = 3LL;
static volatile uint64_t x452 = 7LLU;
int32_t t17 = -965;
int32_t t19 = 66394136;
int16_t x553 = INT16_MIN;
volatile int16_t x554 = -1062;
static volatile uint8_t x556 = 3U;
uint32_t x570 = UINT32_MAX;
static int32_t t22 = -7177;
uint16_t x668 = 2U;
static int32_t x747 = -10063790;
volatile int64_t x771 = 1LL;
int32_t t27 = 65004;
uint32_t x777 = UINT32_MAX;
int16_t x779 = INT16_MIN;
static int32_t x805 = 3;
int32_t t30 = 0;
static int8_t x880 = 4;
static volatile uint8_t x941 = 65U;
int8_t x942 = -1;
volatile int8_t x957 = INT8_MIN;
uint8_t x958 = 23U;
uint8_t x996 = 1U;
static int32_t x1034 = 103;
uint16_t x1035 = 244U;
int32_t x1041 = 59219538;
static volatile uint8_t x1146 = 5U;
static volatile int32_t x1317 = 884;
int32_t t44 = 16346769;
volatile uint8_t x1348 = 9U;
int8_t x1458 = INT8_MAX;
int16_t x1601 = INT16_MIN;
volatile uint64_t x1602 = UINT64_MAX;
int8_t x1705 = INT8_MAX;
volatile int32_t t54 = -314867027;
static volatile int64_t x1801 = -3786195946541895276LL;
int32_t t57 = -14;
static int32_t x1907 = INT32_MIN;
volatile int16_t x1908 = 18;
uint64_t x1926 = UINT64_MAX;
volatile uint8_t x1927 = UINT8_MAX;
uint32_t x1939 = 200U;
volatile int32_t t60 = -8142;
uint16_t x1946 = UINT16_MAX;
uint32_t x2004 = 12U;
volatile uint8_t x2030 = 1U;
int64_t x2031 = -11424217LL;
uint32_t x2041 = 266U;
int64_t x2042 = INT64_MAX;
int8_t x2043 = INT8_MIN;
volatile uint8_t x2053 = 0U;
volatile uint32_t x2121 = 10U;
volatile uint32_t x2124 = 15U;
static int32_t t68 = 3104582;
int16_t x2153 = INT16_MAX;
static int32_t x2177 = INT32_MIN;
static uint16_t x2191 = 1703U;
uint16_t x2254 = 3403U;
volatile int16_t x2275 = -13;
int32_t t76 = -68;
int8_t x2509 = INT8_MIN;
int32_t t79 = -1484;
volatile uint8_t x2524 = 1U;
int64_t x2569 = -29708476930115LL;
volatile uint8_t x2671 = 51U;
uint16_t x2676 = 2U;
volatile int8_t x2713 = INT8_MAX;
volatile int32_t t87 = -5916;
int32_t t88 = -12249492;
int16_t x2751 = INT16_MIN;
volatile int32_t t92 = 8887482;
volatile int8_t x2764 = 2;
int32_t t93 = -80904;
volatile uint16_t x2789 = 1U;
volatile uint64_t x2790 = 173LLU;
int16_t x2791 = INT16_MIN;
volatile uint16_t x2901 = 1268U;
volatile int32_t t96 = 1;
volatile int64_t x2909 = 0LL;
int32_t x2910 = -1;
uint8_t x2912 = 5U;
int32_t x2926 = -1;
int16_t x2927 = -1;
int64_t x2928 = 26LL;
int32_t x2985 = INT32_MIN;
static uint8_t x2988 = 0U;
int32_t t101 = -419;
volatile uint32_t x3017 = 3854U;
static int16_t x3038 = INT16_MIN;
uint8_t x3040 = 5U;
volatile uint32_t x3053 = 3U;
int32_t x3061 = 13;
int16_t x3062 = INT16_MAX;
static uint8_t x3108 = 0U;
uint16_t x3124 = 14U;
static volatile int32_t t109 = -39;
volatile int32_t x3141 = -1;
uint8_t x3144 = 25U;
volatile int32_t t110 = 4;
static uint32_t x3176 = 4U;
volatile int32_t t114 = 453;
volatile uint8_t x3266 = UINT8_MAX;
int64_t x3267 = 2120554728631595175LL;
int8_t x3268 = 2;
int16_t x3272 = 10;
int32_t t117 = -47908472;
volatile int8_t x3299 = INT8_MIN;
int32_t t118 = 10;
int64_t x3350 = 57327100549052249LL;
int32_t t119 = -12369;
volatile uint32_t x3385 = 35325U;
uint8_t x3387 = 119U;
int8_t x3388 = 6;
int64_t x3410 = INT64_MIN;
uint16_t x3431 = 930U;
static uint8_t x3568 = 1U;
volatile int16_t x3655 = INT16_MIN;
static volatile int16_t x3788 = 1;
int16_t x3826 = INT16_MIN;
int32_t x3827 = -1;
int16_t x3876 = 0;
int32_t t134 = -33;
volatile uint16_t x3953 = 1U;
int16_t x3988 = 0;
uint64_t x3997 = 197LLU;
volatile uint8_t x3999 = UINT8_MAX;
static volatile int32_t t139 = -184250077;
int16_t x4078 = -10;
static uint32_t x4080 = 4U;
int64_t x4098 = INT64_MAX;
volatile int8_t x4100 = 1;
volatile uint8_t x4120 = 0U;
static volatile uint8_t x4131 = UINT8_MAX;
static int32_t t143 = -18145193;
int32_t t144 = 3658045;
uint64_t x4195 = 6581852284LLU;
int8_t x4253 = -1;
int32_t x4349 = INT32_MAX;
int8_t x4428 = 8;
static int8_t x4453 = INT8_MIN;
int32_t x4455 = -44;
int8_t x4474 = INT8_MAX;
uint8_t x4525 = UINT8_MAX;
volatile int8_t x4528 = 2;
volatile uint8_t x4532 = 0U;
uint8_t x4556 = 0U;
static int32_t t156 = 1420;
uint8_t x4630 = 33U;
int16_t x4685 = INT16_MIN;
int32_t x4687 = -676014;
int8_t x4715 = INT8_MIN;
volatile int32_t t160 = 33652610;
static uint32_t x4779 = UINT32_MAX;
int32_t x4832 = 1;
int32_t t164 = -338037824;
int16_t x4853 = INT16_MIN;
int32_t x4871 = INT32_MAX;
uint32_t x4872 = 0U;
int8_t x4891 = -1;
static uint64_t x4892 = 8LLU;
uint32_t x4962 = UINT32_MAX;
volatile int8_t x5070 = INT8_MIN;
volatile int32_t x5072 = 1;
volatile uint64_t x5227 = 8LLU;
volatile int8_t x5228 = 5;
int64_t x5313 = -61804LL;
int32_t x5315 = INT32_MAX;
volatile int32_t t172 = -91117000;
int32_t x5469 = 220;
int16_t x5471 = INT16_MAX;
uint32_t x5503 = 149881396U;
volatile int8_t x5513 = -3;
volatile int64_t x5567 = INT64_MIN;
int32_t x5581 = -1;
static int32_t x5583 = -1;
volatile int32_t t180 = 1760;
uint16_t x5708 = 1U;
volatile int8_t x5751 = 0;
volatile int32_t t184 = 13;
uint16_t x5875 = 187U;
int32_t x5882 = INT32_MIN;
volatile uint16_t x6042 = UINT16_MAX;
static uint8_t x6044 = 23U;
uint32_t x6110 = 1U;
int8_t x6134 = 0;
int8_t x6191 = 1;
volatile int32_t t196 = -6;
uint8_t x6249 = UINT8_MAX;
int8_t x6263 = INT8_MIN;


void f0(void) {
    	int32_t x9 = INT32_MIN;
	uint8_t x11 = 2U;
	static int32_t x12 = 0;
	static int32_t t0 = -21518;

    t0 = (((x9&x10)!=x11)>>x12);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x17 = -1;
	static int8_t x18 = INT8_MAX;
	uint64_t x19 = 84366LLU;
	int64_t x20 = 3LL;
	volatile int32_t t1 = 180;

    t1 = (((x17&x18)!=x19)>>x20);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x47 = INT32_MIN;
	int8_t x48 = 8;
	int32_t t2 = -1493;

    t2 = (((x45&x46)!=x47)>>x48);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x53 = -1;
	int16_t x54 = -40;
	int8_t x55 = 1;
	uint8_t x56 = 19U;
	int32_t t3 = 659;

    t3 = (((x53&x54)!=x55)>>x56);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x65 = INT64_MIN;
	uint64_t x66 = 101LLU;
	static uint32_t x67 = UINT32_MAX;
	int64_t x68 = 0LL;
	volatile int32_t t4 = 57;

    t4 = (((x65&x66)!=x67)>>x68);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MIN;
	static uint16_t x75 = 3535U;
	int64_t x76 = 1LL;
	int32_t t5 = -224273;

    t5 = (((x73&x74)!=x75)>>x76);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	int8_t x88 = 2;
	volatile int32_t t6 = 32688351;

    t6 = (((x85&x86)!=x87)>>x88);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = 83U;
	uint8_t x140 = 6U;

    t7 = (((x137&x138)!=x139)>>x140);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x181 = INT64_MAX;
	int32_t x182 = -217215;
	int64_t x183 = 7890665002133174LL;
	uint8_t x184 = 28U;

    t8 = (((x181&x182)!=x183)>>x184);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x205 = INT64_MIN;
	static volatile int32_t x206 = INT32_MIN;
	volatile int32_t x207 = INT32_MIN;
	static int8_t x208 = 3;
	volatile int32_t t9 = 78770219;

    t9 = (((x205&x206)!=x207)>>x208);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x227 = INT8_MIN;
	uint8_t x228 = 2U;

    t10 = (((x225&x226)!=x227)>>x228);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x261 = 10;
	int8_t x262 = 24;
	int16_t x264 = 8;

    t11 = (((x261&x262)!=x263)>>x264);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x277 = 17458148LLU;
	int8_t x279 = -1;
	uint8_t x280 = 11U;
	int32_t t12 = 3;

    t12 = (((x277&x278)!=x279)>>x280);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x298 = UINT64_MAX;
	int64_t x299 = -16029441830LL;
	uint8_t x300 = 5U;
	volatile int32_t t13 = 81787;

    t13 = (((x297&x298)!=x299)>>x300);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x311 = INT16_MIN;
	volatile int32_t t14 = 200170231;

    t14 = (((x309&x310)!=x311)>>x312);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x345 = INT8_MIN;
	int8_t x346 = 5;
	static int32_t x347 = 975400;
	static uint8_t x348 = 4U;
	int32_t t15 = 957;

    t15 = (((x345&x346)!=x347)>>x348);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x433 = INT8_MIN;
	static int8_t x434 = INT8_MAX;
	int32_t x435 = INT32_MAX;
	uint32_t x436 = 0U;
	static int32_t t16 = -31;

    t16 = (((x433&x434)!=x435)>>x436);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x449 = -1976;
	volatile int8_t x450 = INT8_MAX;
	int64_t x451 = -650168LL;

    t17 = (((x449&x450)!=x451)>>x452);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x485 = 187U;
	static int64_t x486 = 10040640905LL;
	static int64_t x487 = 1018147240LL;
	static volatile int32_t x488 = 0;
	volatile int32_t t18 = -4;

    t18 = (((x485&x486)!=x487)>>x488);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x537 = UINT64_MAX;
	uint32_t x538 = 187U;
	int32_t x539 = -5780;
	static uint8_t x540 = 23U;

    t19 = (((x537&x538)!=x539)>>x540);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x555 = 5074354;
	volatile int32_t t20 = -451661;

    t20 = (((x553&x554)!=x555)>>x556);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x569 = INT16_MIN;
	uint32_t x571 = UINT32_MAX;
	int64_t x572 = 1LL;
	static int32_t t21 = 176540;

    t21 = (((x569&x570)!=x571)>>x572);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x609 = UINT8_MAX;
	uint16_t x610 = 22202U;
	int8_t x611 = 27;
	static uint8_t x612 = 1U;

    t22 = (((x609&x610)!=x611)>>x612);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x629 = UINT16_MAX;
	int64_t x630 = INT64_MIN;
	int16_t x631 = INT16_MAX;
	int8_t x632 = 0;
	int32_t t23 = -313772801;

    t23 = (((x629&x630)!=x631)>>x632);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x661 = 3559281447LLU;
	int64_t x662 = -1LL;
	volatile int64_t x663 = 21033124LL;
	int32_t x664 = 3;
	int32_t t24 = -26671895;

    t24 = (((x661&x662)!=x663)>>x664);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x665 = UINT8_MAX;
	uint16_t x666 = UINT16_MAX;
	int16_t x667 = INT16_MIN;
	static int32_t t25 = -1;

    t25 = (((x665&x666)!=x667)>>x668);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x745 = 41U;
	volatile int64_t x746 = -1LL;
	uint32_t x748 = 8U;
	static volatile int32_t t26 = 6;

    t26 = (((x745&x746)!=x747)>>x748);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x769 = UINT64_MAX;
	static uint8_t x770 = UINT8_MAX;
	uint32_t x772 = 8U;

    t27 = (((x769&x770)!=x771)>>x772);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x778 = INT8_MIN;
	volatile uint8_t x780 = 0U;
	volatile int32_t t28 = -34691;

    t28 = (((x777&x778)!=x779)>>x780);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x806 = UINT32_MAX;
	uint8_t x807 = UINT8_MAX;
	int16_t x808 = 1;
	volatile int32_t t29 = -13973077;

    t29 = (((x805&x806)!=x807)>>x808);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x821 = -1;
	int16_t x822 = INT16_MIN;
	static uint16_t x823 = 483U;
	static uint8_t x824 = 7U;

    t30 = (((x821&x822)!=x823)>>x824);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x869 = INT8_MIN;
	static uint16_t x870 = UINT16_MAX;
	uint16_t x871 = 2847U;
	int16_t x872 = 2;
	static int32_t t31 = 1944182;

    t31 = (((x869&x870)!=x871)>>x872);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x877 = 490424624481LLU;
	volatile int64_t x878 = -1LL;
	static int8_t x879 = -1;
	volatile int32_t t32 = 464995;

    t32 = (((x877&x878)!=x879)>>x880);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x943 = INT8_MIN;
	static int16_t x944 = 1;
	static int32_t t33 = 200265;

    t33 = (((x941&x942)!=x943)>>x944);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x959 = INT64_MAX;
	volatile int16_t x960 = 3;
	volatile int32_t t34 = 78706949;

    t34 = (((x957&x958)!=x959)>>x960);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x989 = 4605U;
	volatile int32_t x990 = INT32_MIN;
	volatile uint16_t x991 = UINT16_MAX;
	uint8_t x992 = 15U;
	int32_t t35 = 321645;

    t35 = (((x989&x990)!=x991)>>x992);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x993 = INT64_MAX;
	uint64_t x994 = UINT64_MAX;
	int16_t x995 = 2976;
	volatile int32_t t36 = 7611;

    t36 = (((x993&x994)!=x995)>>x996);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1033 = INT64_MIN;
	int16_t x1036 = 0;
	volatile int32_t t37 = 288785996;

    t37 = (((x1033&x1034)!=x1035)>>x1036);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1042 = 14U;
	int8_t x1043 = -1;
	static uint8_t x1044 = 1U;
	int32_t t38 = -1;

    t38 = (((x1041&x1042)!=x1043)>>x1044);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x1073 = UINT8_MAX;
	int64_t x1074 = -1LL;
	int32_t x1075 = INT32_MIN;
	volatile uint8_t x1076 = 4U;
	int32_t t39 = -8;

    t39 = (((x1073&x1074)!=x1075)>>x1076);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x1093 = 454258357U;
	static volatile uint32_t x1094 = 13386U;
	static int8_t x1095 = -1;
	volatile uint64_t x1096 = 3LLU;
	int32_t t40 = -28299598;

    t40 = (((x1093&x1094)!=x1095)>>x1096);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x1145 = -3;
	volatile uint64_t x1147 = 1725LLU;
	uint16_t x1148 = 2U;
	volatile int32_t t41 = 7569686;

    t41 = (((x1145&x1146)!=x1147)>>x1148);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1197 = -167333772511LL;
	int64_t x1198 = INT64_MIN;
	uint32_t x1199 = 0U;
	volatile uint32_t x1200 = 5U;
	int32_t t42 = -662148;

    t42 = (((x1197&x1198)!=x1199)>>x1200);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x1253 = 5879U;
	uint8_t x1254 = 0U;
	int64_t x1255 = -490567206774512LL;
	volatile int32_t x1256 = 2;
	int32_t t43 = -5;

    t43 = (((x1253&x1254)!=x1255)>>x1256);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x1318 = INT32_MAX;
	volatile int64_t x1319 = INT64_MAX;
	uint8_t x1320 = 4U;

    t44 = (((x1317&x1318)!=x1319)>>x1320);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x1345 = INT8_MAX;
	uint16_t x1346 = 271U;
	static uint8_t x1347 = UINT8_MAX;
	int32_t t45 = 0;

    t45 = (((x1345&x1346)!=x1347)>>x1348);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x1405 = INT64_MIN;
	int64_t x1406 = 432554966077939811LL;
	int16_t x1407 = INT16_MIN;
	volatile uint8_t x1408 = 0U;
	static int32_t t46 = 1856;

    t46 = (((x1405&x1406)!=x1407)>>x1408);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x1425 = INT32_MIN;
	int16_t x1426 = INT16_MAX;
	static uint64_t x1427 = 47252LLU;
	uint8_t x1428 = 25U;
	volatile int32_t t47 = -1;

    t47 = (((x1425&x1426)!=x1427)>>x1428);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x1457 = UINT32_MAX;
	uint32_t x1459 = UINT32_MAX;
	uint8_t x1460 = 0U;
	int32_t t48 = 59;

    t48 = (((x1457&x1458)!=x1459)>>x1460);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x1473 = 228843762451LLU;
	int8_t x1474 = INT8_MIN;
	int16_t x1475 = -1;
	static int16_t x1476 = 1;
	int32_t t49 = 1;

    t49 = (((x1473&x1474)!=x1475)>>x1476);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x1577 = 35;
	volatile int8_t x1578 = INT8_MIN;
	uint64_t x1579 = 1297343127638998LLU;
	volatile int8_t x1580 = 4;
	volatile int32_t t50 = 6;

    t50 = (((x1577&x1578)!=x1579)>>x1580);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x1603 = 200324837181LLU;
	uint16_t x1604 = 1U;
	int32_t t51 = -541221414;

    t51 = (((x1601&x1602)!=x1603)>>x1604);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1613 = INT64_MAX;
	int64_t x1614 = -1LL;
	int32_t x1615 = INT32_MIN;
	int8_t x1616 = 0;
	int32_t t52 = -2028;

    t52 = (((x1613&x1614)!=x1615)>>x1616);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x1706 = -2LL;
	int64_t x1707 = -1LL;
	static uint16_t x1708 = 1U;
	static volatile int32_t t53 = -659531634;

    t53 = (((x1705&x1706)!=x1707)>>x1708);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1769 = -1;
	int64_t x1770 = -33573079346811206LL;
	static int64_t x1771 = 2418480643LL;
	int8_t x1772 = 0;

    t54 = (((x1769&x1770)!=x1771)>>x1772);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1802 = 16U;
	int16_t x1803 = INT16_MAX;
	volatile int8_t x1804 = 0;
	int32_t t55 = 796296060;

    t55 = (((x1801&x1802)!=x1803)>>x1804);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x1813 = 29;
	static int64_t x1814 = INT64_MAX;
	static int8_t x1815 = 1;
	int8_t x1816 = 1;
	static int32_t t56 = 1;

    t56 = (((x1813&x1814)!=x1815)>>x1816);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x1861 = -323;
	static int64_t x1862 = -1LL;
	static uint8_t x1863 = 91U;
	uint8_t x1864 = 4U;

    t57 = (((x1861&x1862)!=x1863)>>x1864);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x1905 = 5U;
	int16_t x1906 = -1;
	int32_t t58 = -2;

    t58 = (((x1905&x1906)!=x1907)>>x1908);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x1925 = -1LL;
	volatile int8_t x1928 = 5;
	volatile int32_t t59 = -302494436;

    t59 = (((x1925&x1926)!=x1927)>>x1928);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x1937 = -100;
	int64_t x1938 = INT64_MIN;
	uint16_t x1940 = 6U;

    t60 = (((x1937&x1938)!=x1939)>>x1940);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x1945 = 1150;
	volatile int64_t x1947 = -442508768161569LL;
	static int16_t x1948 = 0;
	volatile int32_t t61 = 44857458;

    t61 = (((x1945&x1946)!=x1947)>>x1948);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x2001 = INT64_MIN;
	int32_t x2002 = 13037;
	uint64_t x2003 = 93933161026435LLU;
	int32_t t62 = -14827674;

    t62 = (((x2001&x2002)!=x2003)>>x2004);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x2029 = 25U;
	int32_t x2032 = 0;
	volatile int32_t t63 = 1956;

    t63 = (((x2029&x2030)!=x2031)>>x2032);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2044 = 30;
	volatile int32_t t64 = 1;

    t64 = (((x2041&x2042)!=x2043)>>x2044);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x2054 = -85027LL;
	static volatile int8_t x2055 = -1;
	int8_t x2056 = 6;
	int32_t t65 = -1;

    t65 = (((x2053&x2054)!=x2055)>>x2056);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x2069 = 108701206637LL;
	int64_t x2070 = -1LL;
	static volatile uint32_t x2071 = UINT32_MAX;
	int8_t x2072 = 1;
	int32_t t66 = 246;

    t66 = (((x2069&x2070)!=x2071)>>x2072);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x2122 = INT64_MIN;
	static int32_t x2123 = INT32_MAX;
	volatile int32_t t67 = 32454;

    t67 = (((x2121&x2122)!=x2123)>>x2124);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x2145 = UINT16_MAX;
	volatile int8_t x2146 = INT8_MIN;
	uint64_t x2147 = UINT64_MAX;
	volatile uint8_t x2148 = 3U;

    t68 = (((x2145&x2146)!=x2147)>>x2148);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x2154 = UINT8_MAX;
	int16_t x2155 = INT16_MIN;
	static int16_t x2156 = 2;
	int32_t t69 = -1;

    t69 = (((x2153&x2154)!=x2155)>>x2156);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x2178 = INT16_MIN;
	static uint16_t x2179 = 6U;
	int16_t x2180 = 11;
	static volatile int32_t t70 = -57;

    t70 = (((x2177&x2178)!=x2179)>>x2180);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x2189 = 5029810;
	int16_t x2190 = -1;
	int8_t x2192 = 12;
	int32_t t71 = 4;

    t71 = (((x2189&x2190)!=x2191)>>x2192);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x2213 = INT8_MIN;
	static uint32_t x2214 = 31061U;
	int16_t x2215 = INT16_MIN;
	uint16_t x2216 = 4U;
	int32_t t72 = -475328;

    t72 = (((x2213&x2214)!=x2215)>>x2216);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x2221 = INT8_MIN;
	int8_t x2222 = -62;
	int8_t x2223 = INT8_MIN;
	uint8_t x2224 = 0U;
	volatile int32_t t73 = 1498;

    t73 = (((x2221&x2222)!=x2223)>>x2224);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x2253 = INT16_MAX;
	static int64_t x2255 = INT64_MAX;
	static int8_t x2256 = 2;
	int32_t t74 = 1678;

    t74 = (((x2253&x2254)!=x2255)>>x2256);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x2269 = INT8_MAX;
	uint16_t x2270 = UINT16_MAX;
	int32_t x2271 = -406;
	volatile int8_t x2272 = 31;
	int32_t t75 = -9414167;

    t75 = (((x2269&x2270)!=x2271)>>x2272);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x2273 = 0U;
	volatile uint32_t x2274 = UINT32_MAX;
	static int8_t x2276 = 0;

    t76 = (((x2273&x2274)!=x2275)>>x2276);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x2325 = -1;
	volatile uint32_t x2326 = 2077981U;
	int8_t x2327 = -12;
	static uint16_t x2328 = 5U;
	int32_t t77 = -1;

    t77 = (((x2325&x2326)!=x2327)>>x2328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x2337 = INT32_MAX;
	volatile uint32_t x2338 = UINT32_MAX;
	static int16_t x2339 = -1;
	int8_t x2340 = 0;
	int32_t t78 = 55499;

    t78 = (((x2337&x2338)!=x2339)>>x2340);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x2510 = INT64_MIN;
	int32_t x2511 = INT32_MAX;
	uint8_t x2512 = 27U;

    t79 = (((x2509&x2510)!=x2511)>>x2512);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x2521 = 114135433;
	uint64_t x2522 = 259855LLU;
	static int16_t x2523 = -1;
	static int32_t t80 = -263217;

    t80 = (((x2521&x2522)!=x2523)>>x2524);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x2557 = 40U;
	int8_t x2558 = 1;
	int16_t x2559 = INT16_MIN;
	uint8_t x2560 = 30U;
	volatile int32_t t81 = -97;

    t81 = (((x2557&x2558)!=x2559)>>x2560);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x2570 = UINT16_MAX;
	uint16_t x2571 = 3U;
	uint8_t x2572 = 8U;
	volatile int32_t t82 = 696647;

    t82 = (((x2569&x2570)!=x2571)>>x2572);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x2621 = 8136U;
	int32_t x2622 = INT32_MIN;
	volatile uint64_t x2623 = 1LLU;
	volatile int32_t x2624 = 0;
	volatile int32_t t83 = 128697472;

    t83 = (((x2621&x2622)!=x2623)>>x2624);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x2669 = -1;
	int16_t x2670 = INT16_MAX;
	int8_t x2672 = 7;
	int32_t t84 = -118385;

    t84 = (((x2669&x2670)!=x2671)>>x2672);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x2673 = 3;
	uint8_t x2674 = 30U;
	volatile uint32_t x2675 = 8251U;
	volatile int32_t t85 = 282489396;

    t85 = (((x2673&x2674)!=x2675)>>x2676);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x2677 = INT16_MIN;
	uint16_t x2678 = 0U;
	int8_t x2679 = -1;
	volatile uint8_t x2680 = 2U;
	static int32_t t86 = 3180111;

    t86 = (((x2677&x2678)!=x2679)>>x2680);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x2714 = INT64_MAX;
	static int32_t x2715 = INT32_MIN;
	uint16_t x2716 = 0U;

    t87 = (((x2713&x2714)!=x2715)>>x2716);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x2721 = INT32_MIN;
	volatile uint8_t x2722 = 2U;
	int8_t x2723 = -48;
	volatile int8_t x2724 = 0;

    t88 = (((x2721&x2722)!=x2723)>>x2724);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x2733 = 42U;
	static int8_t x2734 = INT8_MAX;
	volatile uint16_t x2735 = UINT16_MAX;
	uint8_t x2736 = 3U;
	static volatile int32_t t89 = -5902;

    t89 = (((x2733&x2734)!=x2735)>>x2736);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x2749 = INT64_MAX;
	static volatile uint16_t x2750 = UINT16_MAX;
	uint8_t x2752 = 11U;
	volatile int32_t t90 = 23;

    t90 = (((x2749&x2750)!=x2751)>>x2752);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x2753 = UINT16_MAX;
	int8_t x2754 = INT8_MIN;
	static int16_t x2755 = INT16_MAX;
	int8_t x2756 = 0;
	int32_t t91 = -7984936;

    t91 = (((x2753&x2754)!=x2755)>>x2756);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x2757 = INT64_MIN;
	int32_t x2758 = INT32_MIN;
	volatile int8_t x2759 = INT8_MAX;
	static uint8_t x2760 = 1U;

    t92 = (((x2757&x2758)!=x2759)>>x2760);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x2761 = -1LL;
	uint32_t x2762 = 13U;
	int64_t x2763 = INT64_MIN;

    t93 = (((x2761&x2762)!=x2763)>>x2764);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x2792 = 8U;
	int32_t t94 = -1070;

    t94 = (((x2789&x2790)!=x2791)>>x2792);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x2897 = INT16_MIN;
	uint64_t x2898 = 904836867295LLU;
	uint16_t x2899 = UINT16_MAX;
	uint16_t x2900 = 0U;
	volatile int32_t t95 = 20531;

    t95 = (((x2897&x2898)!=x2899)>>x2900);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x2902 = 10;
	int8_t x2903 = INT8_MAX;
	static uint8_t x2904 = 3U;

    t96 = (((x2901&x2902)!=x2903)>>x2904);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x2911 = INT8_MAX;
	volatile int32_t t97 = -87414;

    t97 = (((x2909&x2910)!=x2911)>>x2912);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x2925 = 12234073U;
	volatile int32_t t98 = -31;

    t98 = (((x2925&x2926)!=x2927)>>x2928);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x2969 = INT32_MAX;
	uint32_t x2970 = 198U;
	static int16_t x2971 = 20;
	uint64_t x2972 = 23LLU;
	int32_t t99 = 3046;

    t99 = (((x2969&x2970)!=x2971)>>x2972);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x2986 = UINT64_MAX;
	volatile uint64_t x2987 = 26LLU;
	int32_t t100 = -556138;

    t100 = (((x2985&x2986)!=x2987)>>x2988);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x3005 = INT64_MAX;
	uint64_t x3006 = 1478115678LLU;
	static int64_t x3007 = INT64_MIN;
	int8_t x3008 = 1;

    t101 = (((x3005&x3006)!=x3007)>>x3008);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x3018 = 396U;
	volatile int8_t x3019 = 1;
	int8_t x3020 = 0;
	int32_t t102 = 909397807;

    t102 = (((x3017&x3018)!=x3019)>>x3020);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x3037 = 2U;
	int8_t x3039 = INT8_MIN;
	volatile int32_t t103 = 8502;

    t103 = (((x3037&x3038)!=x3039)>>x3040);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x3054 = 22;
	int64_t x3055 = INT64_MAX;
	uint8_t x3056 = 5U;
	int32_t t104 = -10;

    t104 = (((x3053&x3054)!=x3055)>>x3056);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3063 = INT16_MAX;
	volatile int8_t x3064 = 15;
	int32_t t105 = 2066897;

    t105 = (((x3061&x3062)!=x3063)>>x3064);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x3105 = 1U;
	volatile int64_t x3106 = INT64_MAX;
	uint32_t x3107 = 601266217U;
	static volatile int32_t t106 = 71;

    t106 = (((x3105&x3106)!=x3107)>>x3108);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x3117 = -189;
	int64_t x3118 = -9LL;
	static int8_t x3119 = -1;
	uint32_t x3120 = 9U;
	volatile int32_t t107 = -8870;

    t107 = (((x3117&x3118)!=x3119)>>x3120);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x3121 = -1;
	static int8_t x3122 = INT8_MIN;
	uint8_t x3123 = 20U;
	volatile int32_t t108 = -12453329;

    t108 = (((x3121&x3122)!=x3123)>>x3124);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x3129 = 1407265522U;
	int32_t x3130 = INT32_MAX;
	uint16_t x3131 = 7583U;
	static uint8_t x3132 = 6U;

    t109 = (((x3129&x3130)!=x3131)>>x3132);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x3142 = INT32_MIN;
	uint16_t x3143 = 910U;

    t110 = (((x3141&x3142)!=x3143)>>x3144);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x3153 = 13U;
	int16_t x3154 = -3722;
	static volatile int32_t x3155 = INT32_MIN;
	uint8_t x3156 = 0U;
	volatile int32_t t111 = -1911115;

    t111 = (((x3153&x3154)!=x3155)>>x3156);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x3157 = -1;
	static uint16_t x3158 = 1U;
	volatile uint16_t x3159 = UINT16_MAX;
	int8_t x3160 = 1;
	static volatile int32_t t112 = 48;

    t112 = (((x3157&x3158)!=x3159)>>x3160);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3173 = 21787;
	int32_t x3174 = -1;
	uint64_t x3175 = 1100LLU;
	volatile int32_t t113 = -725388;

    t113 = (((x3173&x3174)!=x3175)>>x3176);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x3201 = -1;
	uint32_t x3202 = UINT32_MAX;
	int16_t x3203 = 799;
	volatile uint16_t x3204 = 3U;

    t114 = (((x3201&x3202)!=x3203)>>x3204);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x3221 = 42U;
	uint32_t x3222 = 30137U;
	volatile int32_t x3223 = INT32_MIN;
	uint32_t x3224 = 3U;
	int32_t t115 = 75668211;

    t115 = (((x3221&x3222)!=x3223)>>x3224);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x3265 = -1;
	volatile int32_t t116 = 1;

    t116 = (((x3265&x3266)!=x3267)>>x3268);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x3269 = 10U;
	int32_t x3270 = INT32_MIN;
	static int64_t x3271 = -1380548848760216LL;

    t117 = (((x3269&x3270)!=x3271)>>x3272);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x3297 = UINT32_MAX;
	volatile uint32_t x3298 = 937200102U;
	int8_t x3300 = 1;

    t118 = (((x3297&x3298)!=x3299)>>x3300);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x3349 = -1LL;
	int16_t x3351 = -1;
	uint16_t x3352 = 6U;

    t119 = (((x3349&x3350)!=x3351)>>x3352);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x3386 = 749677U;
	volatile int32_t t120 = 6865866;

    t120 = (((x3385&x3386)!=x3387)>>x3388);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x3409 = INT16_MIN;
	int8_t x3411 = INT8_MIN;
	uint8_t x3412 = 11U;
	static int32_t t121 = 723013;

    t121 = (((x3409&x3410)!=x3411)>>x3412);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x3429 = 1U;
	int8_t x3430 = -1;
	volatile int32_t x3432 = 10;
	int32_t t122 = -10658608;

    t122 = (((x3429&x3430)!=x3431)>>x3432);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x3485 = UINT16_MAX;
	uint64_t x3486 = UINT64_MAX;
	int32_t x3487 = INT32_MIN;
	uint16_t x3488 = 9U;
	volatile int32_t t123 = 433;

    t123 = (((x3485&x3486)!=x3487)>>x3488);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x3489 = -5905966;
	uint8_t x3490 = 2U;
	volatile uint16_t x3491 = 335U;
	int8_t x3492 = 1;
	static int32_t t124 = 6840591;

    t124 = (((x3489&x3490)!=x3491)>>x3492);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x3501 = INT64_MAX;
	static int8_t x3502 = -1;
	volatile uint64_t x3503 = 204574044LLU;
	static volatile int8_t x3504 = 3;
	static int32_t t125 = 42686532;

    t125 = (((x3501&x3502)!=x3503)>>x3504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x3565 = UINT16_MAX;
	uint64_t x3566 = 557679697100796913LLU;
	static int64_t x3567 = 2671184LL;
	static int32_t t126 = 582;

    t126 = (((x3565&x3566)!=x3567)>>x3568);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x3637 = 1;
	int64_t x3638 = 6018376LL;
	int16_t x3639 = 0;
	static int8_t x3640 = 21;
	int32_t t127 = -123;

    t127 = (((x3637&x3638)!=x3639)>>x3640);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x3653 = -1;
	int16_t x3654 = 0;
	int8_t x3656 = 1;
	volatile int32_t t128 = -3769200;

    t128 = (((x3653&x3654)!=x3655)>>x3656);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x3665 = 159;
	int8_t x3666 = -1;
	int64_t x3667 = 18019LL;
	int64_t x3668 = 1LL;
	int32_t t129 = -566802701;

    t129 = (((x3665&x3666)!=x3667)>>x3668);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x3745 = 1;
	int64_t x3746 = INT64_MIN;
	uint16_t x3747 = UINT16_MAX;
	volatile uint8_t x3748 = 14U;
	volatile int32_t t130 = 17;

    t130 = (((x3745&x3746)!=x3747)>>x3748);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x3785 = -15656;
	volatile int8_t x3786 = 23;
	static uint16_t x3787 = UINT16_MAX;
	int32_t t131 = -23;

    t131 = (((x3785&x3786)!=x3787)>>x3788);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x3825 = -1;
	uint8_t x3828 = 0U;
	static int32_t t132 = 3;

    t132 = (((x3825&x3826)!=x3827)>>x3828);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x3857 = 1U;
	static uint32_t x3858 = 917881842U;
	int64_t x3859 = INT64_MIN;
	volatile int8_t x3860 = 0;
	int32_t t133 = 255071;

    t133 = (((x3857&x3858)!=x3859)>>x3860);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x3873 = INT8_MIN;
	uint16_t x3874 = 65U;
	int64_t x3875 = -38389348LL;

    t134 = (((x3873&x3874)!=x3875)>>x3876);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x3954 = INT64_MIN;
	static volatile int64_t x3955 = -3458074323279522802LL;
	int16_t x3956 = 0;
	int32_t t135 = -3453;

    t135 = (((x3953&x3954)!=x3955)>>x3956);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x3985 = UINT64_MAX;
	int8_t x3986 = INT8_MIN;
	int32_t x3987 = -2936;
	volatile int32_t t136 = -136565156;

    t136 = (((x3985&x3986)!=x3987)>>x3988);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x3998 = 1U;
	static int16_t x4000 = 1;
	volatile int32_t t137 = 499;

    t137 = (((x3997&x3998)!=x3999)>>x4000);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x4013 = INT64_MIN;
	int16_t x4014 = -7;
	uint16_t x4015 = UINT16_MAX;
	volatile uint8_t x4016 = 24U;
	int32_t t138 = -67;

    t138 = (((x4013&x4014)!=x4015)>>x4016);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x4053 = -212;
	int8_t x4054 = -3;
	int8_t x4055 = INT8_MAX;
	static uint16_t x4056 = 2U;

    t139 = (((x4053&x4054)!=x4055)>>x4056);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x4077 = 1494;
	uint64_t x4079 = UINT64_MAX;
	int32_t t140 = -3;

    t140 = (((x4077&x4078)!=x4079)>>x4080);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x4097 = -354149;
	int16_t x4099 = -14995;
	volatile int32_t t141 = -104593374;

    t141 = (((x4097&x4098)!=x4099)>>x4100);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x4117 = -1;
	static int8_t x4118 = INT8_MIN;
	int8_t x4119 = 55;
	volatile int32_t t142 = -18343836;

    t142 = (((x4117&x4118)!=x4119)>>x4120);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x4129 = 56;
	uint8_t x4130 = UINT8_MAX;
	uint32_t x4132 = 3U;

    t143 = (((x4129&x4130)!=x4131)>>x4132);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x4173 = -20;
	int16_t x4174 = INT16_MIN;
	uint32_t x4175 = UINT32_MAX;
	uint8_t x4176 = 0U;

    t144 = (((x4173&x4174)!=x4175)>>x4176);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x4193 = 1U;
	uint64_t x4194 = 79666LLU;
	static uint8_t x4196 = 1U;
	volatile int32_t t145 = 289462;

    t145 = (((x4193&x4194)!=x4195)>>x4196);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x4201 = INT64_MIN;
	int16_t x4202 = INT16_MIN;
	uint8_t x4203 = 1U;
	static int8_t x4204 = 3;
	static int32_t t146 = 454535615;

    t146 = (((x4201&x4202)!=x4203)>>x4204);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x4254 = INT32_MIN;
	uint16_t x4255 = UINT16_MAX;
	int8_t x4256 = 0;
	volatile int32_t t147 = 11726;

    t147 = (((x4253&x4254)!=x4255)>>x4256);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x4350 = 970U;
	int64_t x4351 = INT64_MIN;
	uint8_t x4352 = 18U;
	int32_t t148 = -57;

    t148 = (((x4349&x4350)!=x4351)>>x4352);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x4401 = 480U;
	static uint32_t x4402 = UINT32_MAX;
	static uint32_t x4403 = 1591408U;
	static uint8_t x4404 = 6U;
	int32_t t149 = -439;

    t149 = (((x4401&x4402)!=x4403)>>x4404);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x4425 = UINT16_MAX;
	int64_t x4426 = INT64_MIN;
	int8_t x4427 = -35;
	volatile int32_t t150 = 58;

    t150 = (((x4425&x4426)!=x4427)>>x4428);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x4429 = INT8_MIN;
	uint32_t x4430 = 555821025U;
	int8_t x4431 = -62;
	int8_t x4432 = 0;
	volatile int32_t t151 = 227838410;

    t151 = (((x4429&x4430)!=x4431)>>x4432);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x4454 = UINT32_MAX;
	static volatile uint16_t x4456 = 1U;
	static volatile int32_t t152 = -14364;

    t152 = (((x4453&x4454)!=x4455)>>x4456);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x4473 = INT32_MAX;
	uint64_t x4475 = 475589LLU;
	uint8_t x4476 = 2U;
	int32_t t153 = 3296889;

    t153 = (((x4473&x4474)!=x4475)>>x4476);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x4526 = INT8_MAX;
	static int8_t x4527 = -3;
	volatile int32_t t154 = -2;

    t154 = (((x4525&x4526)!=x4527)>>x4528);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x4529 = 451105335U;
	static int16_t x4530 = 1;
	int16_t x4531 = -1287;
	static volatile int32_t t155 = 941427;

    t155 = (((x4529&x4530)!=x4531)>>x4532);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x4553 = 26675084789378LLU;
	volatile int64_t x4554 = 1621725LL;
	uint32_t x4555 = UINT32_MAX;

    t156 = (((x4553&x4554)!=x4555)>>x4556);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x4629 = INT8_MIN;
	int32_t x4631 = -1;
	volatile uint16_t x4632 = 0U;
	static volatile int32_t t157 = 60;

    t157 = (((x4629&x4630)!=x4631)>>x4632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x4641 = INT16_MIN;
	uint16_t x4642 = 2U;
	uint8_t x4643 = UINT8_MAX;
	uint8_t x4644 = 1U;
	int32_t t158 = 0;

    t158 = (((x4641&x4642)!=x4643)>>x4644);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x4686 = INT64_MIN;
	int16_t x4688 = 10;
	int32_t t159 = 232657;

    t159 = (((x4685&x4686)!=x4687)>>x4688);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x4713 = UINT16_MAX;
	volatile int8_t x4714 = INT8_MAX;
	static uint8_t x4716 = 1U;

    t160 = (((x4713&x4714)!=x4715)>>x4716);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x4717 = 12064U;
	int16_t x4718 = INT16_MAX;
	int8_t x4719 = -1;
	static uint8_t x4720 = 5U;
	int32_t t161 = 3284704;

    t161 = (((x4717&x4718)!=x4719)>>x4720);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x4777 = -1LL;
	uint32_t x4778 = UINT32_MAX;
	volatile int8_t x4780 = 1;
	static volatile int32_t t162 = -7;

    t162 = (((x4777&x4778)!=x4779)>>x4780);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x4781 = 110U;
	uint32_t x4782 = 957U;
	uint16_t x4783 = 3024U;
	uint8_t x4784 = 12U;
	int32_t t163 = 116;

    t163 = (((x4781&x4782)!=x4783)>>x4784);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x4829 = 2;
	uint8_t x4830 = 0U;
	static uint8_t x4831 = 2U;

    t164 = (((x4829&x4830)!=x4831)>>x4832);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x4854 = INT32_MIN;
	uint16_t x4855 = 7950U;
	volatile uint16_t x4856 = 5U;
	int32_t t165 = 31930305;

    t165 = (((x4853&x4854)!=x4855)>>x4856);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x4869 = UINT32_MAX;
	int32_t x4870 = -1;
	int32_t t166 = -2665;

    t166 = (((x4869&x4870)!=x4871)>>x4872);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x4889 = UINT16_MAX;
	static volatile uint64_t x4890 = UINT64_MAX;
	int32_t t167 = 2;

    t167 = (((x4889&x4890)!=x4891)>>x4892);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x4961 = 3068234;
	int64_t x4963 = 1LL;
	int8_t x4964 = 1;
	volatile int32_t t168 = -43;

    t168 = (((x4961&x4962)!=x4963)>>x4964);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x5069 = -24745520783079LL;
	int64_t x5071 = 1085224122538716669LL;
	volatile int32_t t169 = -703;

    t169 = (((x5069&x5070)!=x5071)>>x5072);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x5213 = INT64_MIN;
	static uint32_t x5214 = 109U;
	volatile int64_t x5215 = INT64_MIN;
	uint8_t x5216 = 1U;
	int32_t t170 = 18212548;

    t170 = (((x5213&x5214)!=x5215)>>x5216);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x5225 = 1LLU;
	volatile int64_t x5226 = -30583988769259LL;
	int32_t t171 = 6;

    t171 = (((x5225&x5226)!=x5227)>>x5228);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x5314 = INT64_MIN;
	static int8_t x5316 = 0;

    t172 = (((x5313&x5314)!=x5315)>>x5316);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x5413 = UINT64_MAX;
	int16_t x5414 = INT16_MAX;
	int8_t x5415 = -15;
	uint16_t x5416 = 1U;
	int32_t t173 = -14;

    t173 = (((x5413&x5414)!=x5415)>>x5416);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x5429 = INT8_MIN;
	int64_t x5430 = -57948LL;
	uint16_t x5431 = UINT16_MAX;
	uint8_t x5432 = 9U;
	int32_t t174 = 46120;

    t174 = (((x5429&x5430)!=x5431)>>x5432);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x5470 = 153LL;
	uint8_t x5472 = 0U;
	static int32_t t175 = -10720;

    t175 = (((x5469&x5470)!=x5471)>>x5472);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x5489 = UINT32_MAX;
	int8_t x5490 = INT8_MAX;
	int64_t x5491 = -1LL;
	uint8_t x5492 = 1U;
	int32_t t176 = 44257118;

    t176 = (((x5489&x5490)!=x5491)>>x5492);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x5501 = -1;
	static volatile int64_t x5502 = INT64_MIN;
	static int8_t x5504 = 14;
	volatile int32_t t177 = 28131069;

    t177 = (((x5501&x5502)!=x5503)>>x5504);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x5514 = INT64_MAX;
	uint32_t x5515 = 254U;
	uint8_t x5516 = 0U;
	volatile int32_t t178 = 5487973;

    t178 = (((x5513&x5514)!=x5515)>>x5516);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x5565 = 31505042LLU;
	int8_t x5566 = 0;
	volatile int8_t x5568 = 1;
	volatile int32_t t179 = 29549;

    t179 = (((x5565&x5566)!=x5567)>>x5568);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x5582 = 2095524414LL;
	int8_t x5584 = 1;

    t180 = (((x5581&x5582)!=x5583)>>x5584);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x5621 = INT16_MAX;
	int32_t x5622 = 7;
	uint8_t x5623 = UINT8_MAX;
	static volatile int16_t x5624 = 9;
	volatile int32_t t181 = 287904;

    t181 = (((x5621&x5622)!=x5623)>>x5624);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x5705 = -1;
	static uint32_t x5706 = 2046368045U;
	int32_t x5707 = 3124;
	int32_t t182 = 12683276;

    t182 = (((x5705&x5706)!=x5707)>>x5708);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x5713 = 8327712;
	int32_t x5714 = -8166;
	int64_t x5715 = INT64_MIN;
	int8_t x5716 = 3;
	int32_t t183 = -1133141;

    t183 = (((x5713&x5714)!=x5715)>>x5716);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x5749 = UINT16_MAX;
	int64_t x5750 = INT64_MAX;
	uint16_t x5752 = 10U;

    t184 = (((x5749&x5750)!=x5751)>>x5752);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x5829 = 0;
	int32_t x5830 = -1;
	int32_t x5831 = INT32_MAX;
	int8_t x5832 = 0;
	volatile int32_t t185 = 5;

    t185 = (((x5829&x5830)!=x5831)>>x5832);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x5837 = -1;
	int16_t x5838 = INT16_MAX;
	int64_t x5839 = INT64_MIN;
	volatile int16_t x5840 = 0;
	static int32_t t186 = 48855550;

    t186 = (((x5837&x5838)!=x5839)>>x5840);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x5873 = INT8_MIN;
	uint32_t x5874 = UINT32_MAX;
	volatile int32_t x5876 = 0;
	volatile int32_t t187 = 0;

    t187 = (((x5873&x5874)!=x5875)>>x5876);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x5881 = 0U;
	int32_t x5883 = -790256506;
	int8_t x5884 = 1;
	static volatile int32_t t188 = 0;

    t188 = (((x5881&x5882)!=x5883)>>x5884);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x5921 = -4394970041LL;
	static int64_t x5922 = INT64_MIN;
	int64_t x5923 = 36097406LL;
	uint16_t x5924 = 10U;
	int32_t t189 = -170;

    t189 = (((x5921&x5922)!=x5923)>>x5924);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x5929 = INT32_MAX;
	int32_t x5930 = -1;
	int64_t x5931 = INT64_MIN;
	static volatile uint8_t x5932 = 13U;
	volatile int32_t t190 = -434469;

    t190 = (((x5929&x5930)!=x5931)>>x5932);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x5941 = INT64_MIN;
	int32_t x5942 = INT32_MAX;
	int8_t x5943 = -48;
	static uint8_t x5944 = 15U;
	static volatile int32_t t191 = -6644719;

    t191 = (((x5941&x5942)!=x5943)>>x5944);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x6041 = -183939LL;
	int32_t x6043 = 54929;
	int32_t t192 = 794346;

    t192 = (((x6041&x6042)!=x6043)>>x6044);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x6101 = INT16_MAX;
	int16_t x6102 = INT16_MIN;
	int64_t x6103 = INT64_MIN;
	int16_t x6104 = 1;
	volatile int32_t t193 = 664289622;

    t193 = (((x6101&x6102)!=x6103)>>x6104);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x6109 = 3943U;
	int64_t x6111 = INT64_MIN;
	uint16_t x6112 = 13U;
	int32_t t194 = 3;

    t194 = (((x6109&x6110)!=x6111)>>x6112);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x6133 = INT32_MIN;
	static volatile int64_t x6135 = INT64_MIN;
	uint8_t x6136 = 1U;
	int32_t t195 = -4045;

    t195 = (((x6133&x6134)!=x6135)>>x6136);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x6189 = 47831106882LLU;
	uint8_t x6190 = 0U;
	volatile int64_t x6192 = 0LL;

    t196 = (((x6189&x6190)!=x6191)>>x6192);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x6250 = 196346;
	uint32_t x6251 = UINT32_MAX;
	static int8_t x6252 = 0;
	static int32_t t197 = -116;

    t197 = (((x6249&x6250)!=x6251)>>x6252);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x6261 = -1;
	uint64_t x6262 = 181LLU;
	int8_t x6264 = 22;
	static int32_t t198 = 14;

    t198 = (((x6261&x6262)!=x6263)>>x6264);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x6277 = -1;
	uint64_t x6278 = UINT64_MAX;
	static uint8_t x6279 = UINT8_MAX;
	uint32_t x6280 = 11U;
	int32_t t199 = -482849;

    t199 = (((x6277&x6278)!=x6279)>>x6280);

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

