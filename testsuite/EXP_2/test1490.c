
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

static int16_t x5 = 13781;
int8_t x8 = 5;
static volatile int8_t x12 = 13;
volatile int16_t x149 = -1728;
volatile uint32_t x154 = 237165618U;
volatile int32_t t5 = 84;
static int32_t x215 = 1593547;
int32_t t7 = -1369;
volatile int8_t x310 = -1;
int64_t x339 = INT64_MAX;
uint16_t x352 = 1U;
volatile int32_t x413 = INT32_MAX;
static uint8_t x416 = 1U;
int32_t t13 = 17864108;
uint8_t x460 = 15U;
volatile int32_t t14 = -12;
int64_t x486 = -71079292140666945LL;
uint32_t x511 = UINT32_MAX;
int32_t x542 = INT32_MIN;
volatile uint64_t x581 = UINT64_MAX;
volatile int8_t x601 = -1;
volatile int16_t x602 = INT16_MIN;
uint16_t x774 = 3U;
uint64_t x808 = 12LLU;
volatile uint8_t x815 = 10U;
int32_t t28 = 1938891;
uint16_t x877 = 0U;
volatile int32_t t29 = 63;
int8_t x961 = INT8_MIN;
int32_t x964 = 5;
uint64_t x994 = UINT64_MAX;
int8_t x1041 = -3;
static int64_t x1042 = INT64_MIN;
uint64_t x1058 = UINT64_MAX;
volatile uint16_t x1090 = 1U;
volatile int32_t t38 = -13897892;
int32_t x1125 = 5613966;
int8_t x1189 = 2;
static uint32_t x1190 = UINT32_MAX;
int8_t x1194 = INT8_MIN;
static uint8_t x1197 = UINT8_MAX;
int16_t x1249 = INT16_MIN;
int64_t x1254 = -1LL;
int32_t x1273 = INT32_MIN;
volatile int32_t t48 = -10938441;
static uint32_t x1338 = 3517U;
int32_t t50 = 18;
volatile uint16_t x1362 = 0U;
int8_t x1371 = INT8_MIN;
int32_t t53 = -1;
static int16_t x1374 = -1;
int16_t x1376 = 1;
uint64_t x1539 = UINT64_MAX;
static uint16_t x1540 = 10U;
static int64_t x1545 = INT64_MIN;
volatile int16_t x1649 = INT16_MIN;
uint64_t x1650 = 18654128183605LLU;
int16_t x1667 = 773;
volatile int8_t x1668 = 3;
static int8_t x1740 = 3;
static int32_t x1862 = INT32_MIN;
volatile int16_t x1864 = 0;
static volatile int32_t t67 = -969;
int8_t x1894 = INT8_MIN;
int16_t x1895 = INT16_MIN;
static uint8_t x1896 = 0U;
volatile int64_t x1947 = INT64_MAX;
uint16_t x1973 = UINT16_MAX;
int8_t x2013 = -7;
int16_t x2029 = -3;
uint8_t x2032 = 15U;
volatile int32_t t74 = 0;
volatile int64_t x2169 = INT64_MIN;
uint64_t x2170 = 363565084928823LLU;
static int64_t x2171 = -1LL;
uint16_t x2329 = 9750U;
uint8_t x2332 = 3U;
uint64_t x2447 = 33993416639630LLU;
int32_t t80 = 1601;
volatile int8_t x2456 = 1;
int32_t t81 = -41917;
int16_t x2522 = -88;
int64_t x2534 = -1LL;
static uint16_t x2586 = UINT16_MAX;
static int64_t x2673 = 204601075110LL;
int8_t x2779 = INT8_MIN;
uint64_t x2812 = 18LLU;
uint16_t x2819 = 16U;
static uint16_t x2917 = 5652U;
int16_t x2920 = 25;
int32_t x2973 = -1;
static uint32_t x3000 = 3U;
volatile uint64_t x3053 = 350LLU;
int64_t x3081 = -1LL;
static volatile int32_t t102 = 309038;
uint32_t x3177 = 603694411U;
int32_t t104 = 343974;
volatile int32_t t105 = 616941160;
uint32_t x3283 = 683379U;
static int16_t x3284 = 6;
volatile int8_t x3344 = 2;
uint8_t x3379 = 6U;
int8_t x3380 = 17;
int16_t x3389 = 878;
uint8_t x3393 = 6U;
int32_t t110 = 4889856;
volatile uint8_t x3424 = 9U;
int16_t x3443 = 38;
int8_t x3501 = -1;
int8_t x3534 = INT8_MAX;
volatile int32_t t115 = -489439;
volatile int64_t x3573 = 609249883LL;
uint8_t x3576 = 3U;
volatile int32_t t116 = 517575641;
volatile int8_t x3589 = 2;
volatile uint8_t x3591 = 61U;
int16_t x3623 = -1;
static volatile int32_t t119 = -97408190;
int32_t x3687 = 59232;
uint16_t x3691 = UINT16_MAX;
static int64_t x3766 = INT64_MAX;
volatile uint8_t x3768 = 1U;
uint8_t x3770 = UINT8_MAX;
int8_t x3836 = 11;
int64_t x3890 = 33252374LL;
int32_t t128 = 26;
int64_t x3930 = INT64_MAX;
int16_t x3931 = -1;
int32_t x3932 = 1;
int64_t x3941 = INT64_MIN;
volatile int32_t t130 = 1711647;
int64_t x3951 = INT64_MIN;
int32_t x3952 = 1;
uint64_t x3962 = 3290127LLU;
int64_t x4109 = INT64_MIN;
static int64_t x4158 = INT64_MIN;
volatile int32_t t137 = -122180;
static uint16_t x4308 = 18U;
volatile int32_t t140 = 180079879;
static uint32_t x4362 = UINT32_MAX;
static int8_t x4363 = INT8_MIN;
int32_t x4375 = INT32_MAX;
int32_t x4423 = INT32_MIN;
volatile int32_t t144 = 8222;
int16_t x4586 = -1;
volatile int8_t x4595 = -2;
volatile int16_t x4598 = -106;
volatile int8_t x4600 = 11;
uint32_t x4656 = 2U;
static int32_t t148 = 80961136;
static int32_t x4820 = 0;
int64_t x4838 = INT64_MIN;
int8_t x4895 = -1;
static uint32_t x4905 = 409U;
uint64_t x4907 = 462101344020717LLU;
volatile uint16_t x4982 = 14U;
int32_t x4986 = INT32_MAX;
int8_t x5095 = -1;
uint64_t x5096 = 2LLU;
static volatile int32_t t161 = 156384162;
volatile int32_t t162 = 4493612;
static int64_t x5265 = INT64_MIN;
volatile int64_t x5267 = -1LL;
int8_t x5268 = 2;
volatile int32_t t165 = -19;
volatile int64_t x5343 = -1LL;
int32_t x5393 = -1;
static volatile uint64_t x5394 = UINT64_MAX;
int64_t x5395 = -5956299664416LL;
volatile int16_t x5452 = 1;
static volatile int32_t t170 = 821;
int16_t x5453 = INT16_MAX;
static int64_t x5455 = INT64_MIN;
static int64_t x5456 = 25LL;
volatile int32_t t171 = 26176817;
static int32_t x5506 = INT32_MAX;
int32_t t173 = 3;
int8_t x5531 = -1;
static volatile int64_t x5657 = -1LL;
uint32_t x5658 = UINT32_MAX;
volatile int8_t x5659 = INT8_MIN;
static int64_t x5678 = INT64_MIN;
volatile uint64_t x5689 = UINT64_MAX;
int32_t x5707 = INT32_MIN;
uint32_t x5717 = UINT32_MAX;
uint8_t x5718 = 9U;
static uint16_t x5720 = 0U;
int8_t x5743 = INT8_MIN;
volatile int64_t x5753 = INT64_MAX;
uint16_t x5756 = 0U;
static volatile uint16_t x5769 = UINT16_MAX;
int32_t t184 = -62;
int8_t x5829 = 2;
int8_t x5909 = INT8_MIN;
int32_t x5910 = INT32_MIN;
volatile int32_t t188 = 94723741;
int16_t x5918 = 8;
volatile int8_t x5919 = 1;
volatile uint8_t x5920 = 2U;
int64_t x5994 = -4069111467359241050LL;
uint8_t x5998 = 23U;
volatile int16_t x6036 = 21;
static volatile uint8_t x6062 = 0U;
uint32_t x6069 = 409480U;
static int32_t x6101 = INT32_MAX;
static int16_t x6102 = 11;
int8_t x6104 = 5;
uint64_t x6214 = 138023946156727858LLU;
int32_t t198 = 1010337047;
int8_t x6252 = 1;


void f0(void) {
    	volatile int64_t x6 = INT64_MIN;
	int8_t x7 = -44;
	int32_t t0 = -53;

    t0 = ((x5>(x6==x7))<<x8);

    if (t0 != 32) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = 189313LL;
	uint32_t x10 = 435U;
	uint32_t x11 = 5328U;
	volatile int32_t t1 = -5;

    t1 = ((x9>(x10==x11))<<x12);

    if (t1 != 8192) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x37 = 4055;
	static uint64_t x38 = 18396734211170LLU;
	uint16_t x39 = UINT16_MAX;
	volatile int8_t x40 = 1;
	volatile int32_t t2 = -17;

    t2 = ((x37>(x38==x39))<<x40);

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x117 = -1;
	int16_t x118 = -1;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = 1LLU;
	int32_t t3 = 15;

    t3 = ((x117>(x118==x119))<<x120);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x150 = INT8_MIN;
	volatile int32_t x151 = INT32_MAX;
	volatile uint8_t x152 = 0U;
	volatile int32_t t4 = -40204398;

    t4 = ((x149>(x150==x151))<<x152);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x153 = -1;
	int64_t x155 = 110073489997LL;
	volatile int32_t x156 = 0;

    t5 = ((x153>(x154==x155))<<x156);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x213 = 68773037530LLU;
	static int32_t x214 = 1;
	uint8_t x216 = 20U;
	static int32_t t6 = -24625;

    t6 = ((x213>(x214==x215))<<x216);

    if (t6 != 1048576) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x249 = INT8_MIN;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = -1LL;
	uint16_t x252 = 6U;

    t7 = ((x249>(x250==x251))<<x252);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x309 = INT32_MAX;
	uint16_t x311 = 14879U;
	volatile uint16_t x312 = 7U;
	int32_t t8 = 479122;

    t8 = ((x309>(x310==x311))<<x312);

    if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = 20U;
	static int8_t x340 = 16;
	int32_t t9 = 19486;

    t9 = ((x337>(x338==x339))<<x340);

    if (t9 != 65536) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x349 = 79U;
	volatile int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MIN;
	int32_t t10 = 89;

    t10 = ((x349>(x350==x351))<<x352);

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x389 = UINT16_MAX;
	static int64_t x390 = -317851833453537685LL;
	int64_t x391 = INT64_MAX;
	int8_t x392 = 6;
	volatile int32_t t11 = 57768;

    t11 = ((x389>(x390==x391))<<x392);

    if (t11 != 64) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x414 = 2;
	uint16_t x415 = 2U;
	int32_t t12 = -80039;

    t12 = ((x413>(x414==x415))<<x416);

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x453 = UINT64_MAX;
	static int64_t x454 = -1LL;
	int8_t x455 = INT8_MIN;
	int8_t x456 = 1;

    t13 = ((x453>(x454==x455))<<x456);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x457 = INT8_MIN;
	uint32_t x458 = 46922U;
	static uint8_t x459 = UINT8_MAX;

    t14 = ((x457>(x458==x459))<<x460);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x461 = INT64_MIN;
	uint16_t x462 = UINT16_MAX;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = 20U;
	volatile int32_t t15 = 882254;

    t15 = ((x461>(x462==x463))<<x464);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x465 = -29;
	int8_t x466 = INT8_MAX;
	uint16_t x467 = UINT16_MAX;
	uint8_t x468 = 1U;
	volatile int32_t t16 = 169;

    t16 = ((x465>(x466==x467))<<x468);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x485 = INT32_MAX;
	int16_t x487 = INT16_MIN;
	volatile uint64_t x488 = 1LLU;
	volatile int32_t t17 = 1375;

    t17 = ((x485>(x486==x487))<<x488);

    if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x509 = INT8_MAX;
	int16_t x510 = INT16_MIN;
	static int8_t x512 = 1;
	static int32_t t18 = -976619735;

    t18 = ((x509>(x510==x511))<<x512);

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x541 = 705478979561527LLU;
	int32_t x543 = INT32_MIN;
	uint16_t x544 = 13U;
	int32_t t19 = 56038;

    t19 = ((x541>(x542==x543))<<x544);

    if (t19 != 8192) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x573 = -3;
	int32_t x574 = INT32_MIN;
	int32_t x575 = -1;
	volatile uint8_t x576 = 4U;
	volatile int32_t t20 = -7976372;

    t20 = ((x573>(x574==x575))<<x576);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x582 = INT32_MIN;
	int16_t x583 = INT16_MIN;
	static int8_t x584 = 23;
	volatile int32_t t21 = -16008;

    t21 = ((x581>(x582==x583))<<x584);

    if (t21 != 8388608) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x603 = UINT8_MAX;
	uint8_t x604 = 3U;
	volatile int32_t t22 = -217295;

    t22 = ((x601>(x602==x603))<<x604);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x773 = INT8_MAX;
	volatile uint8_t x775 = UINT8_MAX;
	volatile uint16_t x776 = 1U;
	static int32_t t23 = 52813;

    t23 = ((x773>(x774==x775))<<x776);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x797 = -63;
	volatile int8_t x798 = -2;
	int16_t x799 = 423;
	static int16_t x800 = 1;
	volatile int32_t t24 = 1801826;

    t24 = ((x797>(x798==x799))<<x800);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x805 = INT64_MAX;
	int32_t x806 = INT32_MIN;
	volatile uint64_t x807 = 9990229249564858LLU;
	static volatile int32_t t25 = -3207;

    t25 = ((x805>(x806==x807))<<x808);

    if (t25 != 4096) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x813 = INT32_MIN;
	int16_t x814 = INT16_MIN;
	volatile int8_t x816 = 0;
	static volatile int32_t t26 = 10;

    t26 = ((x813>(x814==x815))<<x816);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x817 = INT16_MIN;
	int8_t x818 = INT8_MAX;
	int64_t x819 = -1LL;
	int8_t x820 = 0;
	int32_t t27 = 31;

    t27 = ((x817>(x818==x819))<<x820);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x865 = INT16_MIN;
	int16_t x866 = -1;
	static int16_t x867 = INT16_MIN;
	uint16_t x868 = 11U;

    t28 = ((x865>(x866==x867))<<x868);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x878 = -1LL;
	int32_t x879 = 2537;
	uint8_t x880 = 0U;

    t29 = ((x877>(x878==x879))<<x880);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x921 = INT8_MIN;
	static uint8_t x922 = UINT8_MAX;
	int8_t x923 = -31;
	uint8_t x924 = 1U;
	static int32_t t30 = -429248;

    t30 = ((x921>(x922==x923))<<x924);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x962 = 96U;
	int16_t x963 = -96;
	static volatile int32_t t31 = -15;

    t31 = ((x961>(x962==x963))<<x964);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x965 = INT64_MIN;
	volatile int16_t x966 = INT16_MAX;
	uint64_t x967 = UINT64_MAX;
	uint32_t x968 = 11U;
	volatile int32_t t32 = 189972164;

    t32 = ((x965>(x966==x967))<<x968);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x993 = UINT32_MAX;
	static uint8_t x995 = 7U;
	static int8_t x996 = 0;
	volatile int32_t t33 = 5662007;

    t33 = ((x993>(x994==x995))<<x996);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1043 = INT32_MIN;
	volatile int16_t x1044 = 19;
	static volatile int32_t t34 = 1480;

    t34 = ((x1041>(x1042==x1043))<<x1044);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1057 = -1;
	int16_t x1059 = INT16_MIN;
	int8_t x1060 = 20;
	volatile int32_t t35 = 1678077;

    t35 = ((x1057>(x1058==x1059))<<x1060);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x1077 = 53932261325947166LL;
	int16_t x1078 = INT16_MIN;
	uint8_t x1079 = UINT8_MAX;
	uint16_t x1080 = 10U;
	int32_t t36 = 820;

    t36 = ((x1077>(x1078==x1079))<<x1080);

    if (t36 != 1024) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x1081 = INT64_MIN;
	uint8_t x1082 = 7U;
	int8_t x1083 = INT8_MIN;
	int8_t x1084 = 10;
	int32_t t37 = -1;

    t37 = ((x1081>(x1082==x1083))<<x1084);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x1089 = -2359;
	static volatile int32_t x1091 = -1;
	int64_t x1092 = 10LL;

    t38 = ((x1089>(x1090==x1091))<<x1092);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x1126 = INT8_MIN;
	int32_t x1127 = INT32_MAX;
	int16_t x1128 = 0;
	volatile int32_t t39 = -15728539;

    t39 = ((x1125>(x1126==x1127))<<x1128);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x1137 = INT32_MIN;
	static int32_t x1138 = -1752;
	int16_t x1139 = INT16_MIN;
	int16_t x1140 = 1;
	int32_t t40 = -788;

    t40 = ((x1137>(x1138==x1139))<<x1140);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x1191 = INT64_MIN;
	int8_t x1192 = 11;
	int32_t t41 = 425594916;

    t41 = ((x1189>(x1190==x1191))<<x1192);

    if (t41 != 2048) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x1193 = -1;
	static int32_t x1195 = -1;
	int8_t x1196 = 0;
	static int32_t t42 = -649;

    t42 = ((x1193>(x1194==x1195))<<x1196);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x1198 = 10U;
	static int32_t x1199 = INT32_MAX;
	uint8_t x1200 = 24U;
	static volatile int32_t t43 = 6397412;

    t43 = ((x1197>(x1198==x1199))<<x1200);

    if (t43 != 16777216) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x1241 = 228418013U;
	int32_t x1242 = -27;
	static int8_t x1243 = 3;
	static uint8_t x1244 = 1U;
	static volatile int32_t t44 = 367137757;

    t44 = ((x1241>(x1242==x1243))<<x1244);

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x1245 = 127U;
	int16_t x1246 = -1;
	int16_t x1247 = INT16_MIN;
	int16_t x1248 = 3;
	volatile int32_t t45 = -57260;

    t45 = ((x1245>(x1246==x1247))<<x1248);

    if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1250 = -1;
	volatile int8_t x1251 = INT8_MIN;
	uint32_t x1252 = 11U;
	int32_t t46 = 22609;

    t46 = ((x1249>(x1250==x1251))<<x1252);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x1253 = INT16_MIN;
	uint32_t x1255 = 50660U;
	int32_t x1256 = 0;
	volatile int32_t t47 = 4330;

    t47 = ((x1253>(x1254==x1255))<<x1256);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x1274 = 15650U;
	int32_t x1275 = INT32_MIN;
	uint8_t x1276 = 0U;

    t48 = ((x1273>(x1274==x1275))<<x1276);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1321 = -1LL;
	int32_t x1322 = -1;
	static uint64_t x1323 = 376040444021425606LLU;
	volatile uint8_t x1324 = 0U;
	volatile int32_t t49 = 672926996;

    t49 = ((x1321>(x1322==x1323))<<x1324);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x1337 = 53U;
	int16_t x1339 = 120;
	volatile uint32_t x1340 = 15U;

    t50 = ((x1337>(x1338==x1339))<<x1340);

    if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x1353 = UINT16_MAX;
	static uint16_t x1354 = UINT16_MAX;
	int32_t x1355 = 360482;
	uint8_t x1356 = 0U;
	int32_t t51 = 12;

    t51 = ((x1353>(x1354==x1355))<<x1356);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x1361 = 44300737U;
	static uint64_t x1363 = 23853LLU;
	uint16_t x1364 = 4U;
	int32_t t52 = -1;

    t52 = ((x1361>(x1362==x1363))<<x1364);

    if (t52 != 16) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x1369 = INT64_MIN;
	static int32_t x1370 = -1;
	int64_t x1372 = 1LL;

    t53 = ((x1369>(x1370==x1371))<<x1372);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x1373 = 12453455LL;
	volatile uint16_t x1375 = UINT16_MAX;
	volatile int32_t t54 = -680297;

    t54 = ((x1373>(x1374==x1375))<<x1376);

    if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x1377 = -1;
	static volatile int64_t x1378 = INT64_MAX;
	volatile int8_t x1379 = 2;
	static volatile int64_t x1380 = 0LL;
	int32_t t55 = -15;

    t55 = ((x1377>(x1378==x1379))<<x1380);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x1537 = 129427LLU;
	int16_t x1538 = INT16_MIN;
	volatile int32_t t56 = 367366140;

    t56 = ((x1537>(x1538==x1539))<<x1540);

    if (t56 != 1024) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x1541 = INT16_MAX;
	int32_t x1542 = -748659042;
	volatile int16_t x1543 = INT16_MAX;
	volatile uint8_t x1544 = 25U;
	int32_t t57 = 411750953;

    t57 = ((x1541>(x1542==x1543))<<x1544);

    if (t57 != 33554432) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x1546 = 339250LL;
	int32_t x1547 = INT32_MAX;
	int8_t x1548 = 23;
	volatile int32_t t58 = -3064;

    t58 = ((x1545>(x1546==x1547))<<x1548);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x1569 = -1;
	static uint32_t x1570 = 30435513U;
	int16_t x1571 = INT16_MAX;
	static volatile uint8_t x1572 = 12U;
	volatile int32_t t59 = -95;

    t59 = ((x1569>(x1570==x1571))<<x1572);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x1651 = 0;
	uint16_t x1652 = 0U;
	int32_t t60 = -5682658;

    t60 = ((x1649>(x1650==x1651))<<x1652);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x1665 = INT64_MAX;
	static int16_t x1666 = INT16_MAX;
	volatile int32_t t61 = -32305;

    t61 = ((x1665>(x1666==x1667))<<x1668);

    if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x1737 = INT32_MIN;
	int16_t x1738 = -1;
	static int32_t x1739 = 127570;
	int32_t t62 = -1384900;

    t62 = ((x1737>(x1738==x1739))<<x1740);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x1753 = -1;
	int8_t x1754 = INT8_MAX;
	int32_t x1755 = INT32_MAX;
	volatile int32_t x1756 = 3;
	int32_t t63 = 1152;

    t63 = ((x1753>(x1754==x1755))<<x1756);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x1765 = INT8_MAX;
	int32_t x1766 = INT32_MIN;
	int64_t x1767 = INT64_MAX;
	int8_t x1768 = 0;
	volatile int32_t t64 = -17957;

    t64 = ((x1765>(x1766==x1767))<<x1768);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x1825 = -1;
	uint64_t x1826 = 3LLU;
	uint64_t x1827 = 854364LLU;
	static volatile int8_t x1828 = 0;
	volatile int32_t t65 = 18;

    t65 = ((x1825>(x1826==x1827))<<x1828);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x1849 = UINT8_MAX;
	volatile int64_t x1850 = -186683404LL;
	uint16_t x1851 = 3628U;
	uint8_t x1852 = 2U;
	int32_t t66 = 0;

    t66 = ((x1849>(x1850==x1851))<<x1852);

    if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x1861 = UINT64_MAX;
	int64_t x1863 = INT64_MIN;

    t67 = ((x1861>(x1862==x1863))<<x1864);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x1873 = UINT16_MAX;
	int32_t x1874 = INT32_MIN;
	int8_t x1875 = 0;
	uint16_t x1876 = 13U;
	volatile int32_t t68 = -10311;

    t68 = ((x1873>(x1874==x1875))<<x1876);

    if (t68 != 8192) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x1893 = -1;
	int32_t t69 = -1;

    t69 = ((x1893>(x1894==x1895))<<x1896);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x1945 = INT8_MIN;
	volatile int64_t x1946 = INT64_MAX;
	uint8_t x1948 = 1U;
	volatile int32_t t70 = 42;

    t70 = ((x1945>(x1946==x1947))<<x1948);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x1974 = 0U;
	int8_t x1975 = -1;
	uint8_t x1976 = 25U;
	volatile int32_t t71 = -260102;

    t71 = ((x1973>(x1974==x1975))<<x1976);

    if (t71 != 33554432) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x2014 = INT32_MAX;
	static int16_t x2015 = -5816;
	int8_t x2016 = 7;
	volatile int32_t t72 = 902;

    t72 = ((x2013>(x2014==x2015))<<x2016);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x2030 = -1693;
	int64_t x2031 = -1LL;
	volatile int32_t t73 = 3659;

    t73 = ((x2029>(x2030==x2031))<<x2032);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x2061 = INT8_MIN;
	int32_t x2062 = 2;
	int8_t x2063 = -1;
	static int16_t x2064 = 4;

    t74 = ((x2061>(x2062==x2063))<<x2064);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x2085 = -1LL;
	static int16_t x2086 = -1;
	int8_t x2087 = INT8_MIN;
	static uint8_t x2088 = 16U;
	static volatile int32_t t75 = -1;

    t75 = ((x2085>(x2086==x2087))<<x2088);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x2172 = 20;
	volatile int32_t t76 = -14298;

    t76 = ((x2169>(x2170==x2171))<<x2172);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x2197 = 1;
	static int16_t x2198 = INT16_MIN;
	int16_t x2199 = INT16_MIN;
	static int32_t x2200 = 11;
	static int32_t t77 = 46;

    t77 = ((x2197>(x2198==x2199))<<x2200);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x2257 = -1;
	volatile int16_t x2258 = -10905;
	int8_t x2259 = -1;
	static int8_t x2260 = 1;
	int32_t t78 = 3319;

    t78 = ((x2257>(x2258==x2259))<<x2260);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x2330 = UINT8_MAX;
	static uint32_t x2331 = 1104474996U;
	int32_t t79 = -293784913;

    t79 = ((x2329>(x2330==x2331))<<x2332);

    if (t79 != 8) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x2445 = 147618LLU;
	uint8_t x2446 = 99U;
	uint16_t x2448 = 11U;

    t80 = ((x2445>(x2446==x2447))<<x2448);

    if (t80 != 2048) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x2453 = INT64_MAX;
	uint8_t x2454 = 0U;
	static int64_t x2455 = -4LL;

    t81 = ((x2453>(x2454==x2455))<<x2456);

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x2505 = UINT32_MAX;
	int32_t x2506 = 259;
	static volatile int8_t x2507 = INT8_MIN;
	uint8_t x2508 = 5U;
	volatile int32_t t82 = -17705902;

    t82 = ((x2505>(x2506==x2507))<<x2508);

    if (t82 != 32) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x2521 = INT64_MAX;
	static uint32_t x2523 = 0U;
	int8_t x2524 = 6;
	static int32_t t83 = -7;

    t83 = ((x2521>(x2522==x2523))<<x2524);

    if (t83 != 64) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x2533 = -1;
	static int8_t x2535 = -37;
	volatile int8_t x2536 = 2;
	volatile int32_t t84 = 217633;

    t84 = ((x2533>(x2534==x2535))<<x2536);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x2541 = INT64_MAX;
	static volatile int64_t x2542 = INT64_MIN;
	uint16_t x2543 = 11U;
	int8_t x2544 = 5;
	int32_t t85 = 2085384;

    t85 = ((x2541>(x2542==x2543))<<x2544);

    if (t85 != 32) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int64_t x2585 = -1861424LL;
	int64_t x2587 = INT64_MIN;
	uint8_t x2588 = 24U;
	static volatile int32_t t86 = 1;

    t86 = ((x2585>(x2586==x2587))<<x2588);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x2653 = INT32_MIN;
	uint8_t x2654 = 45U;
	volatile int16_t x2655 = -7;
	uint8_t x2656 = 18U;
	int32_t t87 = 5;

    t87 = ((x2653>(x2654==x2655))<<x2656);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x2674 = 24U;
	uint16_t x2675 = 588U;
	uint8_t x2676 = 1U;
	volatile int32_t t88 = -213;

    t88 = ((x2673>(x2674==x2675))<<x2676);

    if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint16_t x2713 = 3281U;
	int64_t x2714 = -445034201810880LL;
	int32_t x2715 = INT32_MIN;
	static uint16_t x2716 = 8U;
	volatile int32_t t89 = 2609;

    t89 = ((x2713>(x2714==x2715))<<x2716);

    if (t89 != 256) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x2777 = UINT16_MAX;
	static int8_t x2778 = 4;
	uint8_t x2780 = 13U;
	int32_t t90 = 23;

    t90 = ((x2777>(x2778==x2779))<<x2780);

    if (t90 != 8192) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x2809 = UINT32_MAX;
	uint16_t x2810 = 53U;
	int32_t x2811 = INT32_MIN;
	int32_t t91 = -243982;

    t91 = ((x2809>(x2810==x2811))<<x2812);

    if (t91 != 262144) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x2817 = INT8_MIN;
	uint16_t x2818 = 1725U;
	static uint32_t x2820 = 3U;
	int32_t t92 = 3475096;

    t92 = ((x2817>(x2818==x2819))<<x2820);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x2893 = 2U;
	uint64_t x2894 = 1987764809197844679LLU;
	int16_t x2895 = 1;
	uint32_t x2896 = 1U;
	int32_t t93 = -1096860;

    t93 = ((x2893>(x2894==x2895))<<x2896);

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x2897 = INT8_MIN;
	static int16_t x2898 = INT16_MIN;
	int64_t x2899 = INT64_MAX;
	static uint16_t x2900 = 12U;
	static volatile int32_t t94 = -204;

    t94 = ((x2897>(x2898==x2899))<<x2900);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x2918 = 2U;
	uint64_t x2919 = UINT64_MAX;
	int32_t t95 = 731533292;

    t95 = ((x2917>(x2918==x2919))<<x2920);

    if (t95 != 33554432) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x2974 = 318424;
	volatile uint16_t x2975 = 40U;
	volatile uint64_t x2976 = 1LLU;
	volatile int32_t t96 = -99639;

    t96 = ((x2973>(x2974==x2975))<<x2976);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x2985 = 0LL;
	uint64_t x2986 = 1603265012LLU;
	int32_t x2987 = 14449;
	static volatile int32_t x2988 = 1;
	int32_t t97 = 53234;

    t97 = ((x2985>(x2986==x2987))<<x2988);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x2997 = INT64_MIN;
	static volatile uint32_t x2998 = 980U;
	int64_t x2999 = INT64_MIN;
	int32_t t98 = 637;

    t98 = ((x2997>(x2998==x2999))<<x3000);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x3049 = INT64_MIN;
	int64_t x3050 = INT64_MAX;
	int64_t x3051 = INT64_MIN;
	int8_t x3052 = 15;
	int32_t t99 = 25878;

    t99 = ((x3049>(x3050==x3051))<<x3052);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x3054 = INT8_MIN;
	static volatile int8_t x3055 = -2;
	uint16_t x3056 = 28U;
	static int32_t t100 = -253057;

    t100 = ((x3053>(x3054==x3055))<<x3056);

    if (t100 != 268435456) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x3065 = -64635;
	static uint64_t x3066 = 4559852LLU;
	int64_t x3067 = 106080295181LL;
	static volatile uint16_t x3068 = 6U;
	volatile int32_t t101 = 170287742;

    t101 = ((x3065>(x3066==x3067))<<x3068);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x3082 = INT16_MIN;
	int64_t x3083 = -2983998888LL;
	uint64_t x3084 = 2LLU;

    t102 = ((x3081>(x3082==x3083))<<x3084);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x3169 = 1;
	int32_t x3170 = INT32_MAX;
	volatile int32_t x3171 = 19928178;
	volatile uint16_t x3172 = 4U;
	static volatile int32_t t103 = 900989;

    t103 = ((x3169>(x3170==x3171))<<x3172);

    if (t103 != 16) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x3178 = INT32_MAX;
	uint16_t x3179 = 8078U;
	static int8_t x3180 = 0;

    t104 = ((x3177>(x3178==x3179))<<x3180);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x3225 = 11719344U;
	uint8_t x3226 = 8U;
	int16_t x3227 = INT16_MAX;
	volatile uint16_t x3228 = 3U;

    t105 = ((x3225>(x3226==x3227))<<x3228);

    if (t105 != 8) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x3281 = -1LL;
	static uint32_t x3282 = UINT32_MAX;
	static volatile int32_t t106 = -12;

    t106 = ((x3281>(x3282==x3283))<<x3284);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x3341 = INT64_MAX;
	int16_t x3342 = INT16_MIN;
	int8_t x3343 = INT8_MIN;
	int32_t t107 = 75;

    t107 = ((x3341>(x3342==x3343))<<x3344);

    if (t107 != 4) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x3377 = UINT8_MAX;
	int16_t x3378 = 0;
	static int32_t t108 = 0;

    t108 = ((x3377>(x3378==x3379))<<x3380);

    if (t108 != 131072) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x3390 = -1;
	int64_t x3391 = -254551LL;
	static uint32_t x3392 = 7U;
	int32_t t109 = -459;

    t109 = ((x3389>(x3390==x3391))<<x3392);

    if (t109 != 128) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x3394 = INT8_MAX;
	static uint64_t x3395 = 9060069590LLU;
	uint64_t x3396 = 1LLU;

    t110 = ((x3393>(x3394==x3395))<<x3396);

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x3421 = -1;
	static volatile uint32_t x3422 = 62909U;
	static int8_t x3423 = -3;
	volatile int32_t t111 = -3678133;

    t111 = ((x3421>(x3422==x3423))<<x3424);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x3441 = -1LL;
	int8_t x3442 = 1;
	volatile uint8_t x3444 = 13U;
	static volatile int32_t t112 = -6;

    t112 = ((x3441>(x3442==x3443))<<x3444);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3502 = INT32_MIN;
	static int64_t x3503 = 470338422703279132LL;
	volatile uint8_t x3504 = 19U;
	volatile int32_t t113 = -55470;

    t113 = ((x3501>(x3502==x3503))<<x3504);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x3533 = 12351U;
	static uint32_t x3535 = 158349U;
	int16_t x3536 = 7;
	static int32_t t114 = -938924;

    t114 = ((x3533>(x3534==x3535))<<x3536);

    if (t114 != 128) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x3557 = -1;
	uint32_t x3558 = UINT32_MAX;
	int32_t x3559 = -1;
	int32_t x3560 = 15;

    t115 = ((x3557>(x3558==x3559))<<x3560);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x3574 = 100U;
	uint32_t x3575 = 15742U;

    t116 = ((x3573>(x3574==x3575))<<x3576);

    if (t116 != 8) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x3590 = -1;
	static int8_t x3592 = 16;
	int32_t t117 = 63;

    t117 = ((x3589>(x3590==x3591))<<x3592);

    if (t117 != 65536) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x3621 = UINT32_MAX;
	int64_t x3622 = INT64_MAX;
	uint16_t x3624 = 21U;
	volatile int32_t t118 = 2118828;

    t118 = ((x3621>(x3622==x3623))<<x3624);

    if (t118 != 2097152) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x3649 = INT64_MIN;
	int8_t x3650 = 3;
	int16_t x3651 = INT16_MIN;
	uint16_t x3652 = 3U;

    t119 = ((x3649>(x3650==x3651))<<x3652);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x3661 = INT64_MIN;
	uint32_t x3662 = UINT32_MAX;
	int64_t x3663 = INT64_MIN;
	int64_t x3664 = 11LL;
	volatile int32_t t120 = 46;

    t120 = ((x3661>(x3662==x3663))<<x3664);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x3685 = INT64_MIN;
	int16_t x3686 = -1;
	int8_t x3688 = 12;
	volatile int32_t t121 = 995942;

    t121 = ((x3685>(x3686==x3687))<<x3688);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x3689 = UINT8_MAX;
	int16_t x3690 = INT16_MIN;
	uint64_t x3692 = 16LLU;
	int32_t t122 = -40166310;

    t122 = ((x3689>(x3690==x3691))<<x3692);

    if (t122 != 65536) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x3765 = 11785U;
	volatile int64_t x3767 = -1LL;
	int32_t t123 = 21;

    t123 = ((x3765>(x3766==x3767))<<x3768);

    if (t123 != 2) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x3769 = -517;
	int8_t x3771 = -21;
	static int8_t x3772 = 1;
	volatile int32_t t124 = -3;

    t124 = ((x3769>(x3770==x3771))<<x3772);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x3797 = INT16_MIN;
	int32_t x3798 = -442292;
	volatile int16_t x3799 = 26;
	uint16_t x3800 = 3U;
	volatile int32_t t125 = -1;

    t125 = ((x3797>(x3798==x3799))<<x3800);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x3833 = -1;
	uint32_t x3834 = 36002U;
	int32_t x3835 = INT32_MAX;
	volatile int32_t t126 = -3515505;

    t126 = ((x3833>(x3834==x3835))<<x3836);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x3889 = 4306213501059138304LL;
	uint8_t x3891 = 2U;
	static int16_t x3892 = 1;
	volatile int32_t t127 = -6051;

    t127 = ((x3889>(x3890==x3891))<<x3892);

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x3921 = 49U;
	int16_t x3922 = INT16_MIN;
	int8_t x3923 = -2;
	int8_t x3924 = 11;

    t128 = ((x3921>(x3922==x3923))<<x3924);

    if (t128 != 2048) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x3929 = 9U;
	volatile int32_t t129 = 336082;

    t129 = ((x3929>(x3930==x3931))<<x3932);

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x3942 = -3;
	uint32_t x3943 = 401438U;
	uint8_t x3944 = 6U;

    t130 = ((x3941>(x3942==x3943))<<x3944);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x3949 = UINT8_MAX;
	int16_t x3950 = 0;
	static volatile int32_t t131 = -31;

    t131 = ((x3949>(x3950==x3951))<<x3952);

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x3961 = 87U;
	uint8_t x3963 = 0U;
	volatile int64_t x3964 = 3LL;
	int32_t t132 = 1097;

    t132 = ((x3961>(x3962==x3963))<<x3964);

    if (t132 != 8) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x3965 = 177244921857487299LLU;
	static int64_t x3966 = 2321337950LL;
	volatile uint32_t x3967 = UINT32_MAX;
	static volatile uint8_t x3968 = 7U;
	volatile int32_t t133 = -105073;

    t133 = ((x3965>(x3966==x3967))<<x3968);

    if (t133 != 128) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x4101 = INT32_MAX;
	int64_t x4102 = -1LL;
	volatile uint16_t x4103 = UINT16_MAX;
	static uint8_t x4104 = 4U;
	int32_t t134 = -1322665;

    t134 = ((x4101>(x4102==x4103))<<x4104);

    if (t134 != 16) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x4110 = INT64_MIN;
	static uint64_t x4111 = 44737569820496707LLU;
	static volatile uint8_t x4112 = 2U;
	static volatile int32_t t135 = -543069;

    t135 = ((x4109>(x4110==x4111))<<x4112);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x4157 = UINT16_MAX;
	static volatile uint16_t x4159 = 10U;
	static int8_t x4160 = 1;
	static int32_t t136 = 1;

    t136 = ((x4157>(x4158==x4159))<<x4160);

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x4221 = 1U;
	uint64_t x4222 = UINT64_MAX;
	volatile uint8_t x4223 = UINT8_MAX;
	static uint8_t x4224 = 0U;

    t137 = ((x4221>(x4222==x4223))<<x4224);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x4237 = INT8_MAX;
	uint32_t x4238 = 444201U;
	static uint8_t x4239 = UINT8_MAX;
	int16_t x4240 = 2;
	int32_t t138 = 1;

    t138 = ((x4237>(x4238==x4239))<<x4240);

    if (t138 != 4) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x4305 = 30448U;
	int32_t x4306 = INT32_MIN;
	int16_t x4307 = 3;
	int32_t t139 = -1502158;

    t139 = ((x4305>(x4306==x4307))<<x4308);

    if (t139 != 262144) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x4349 = 17396877680154181LLU;
	int32_t x4350 = INT32_MIN;
	int16_t x4351 = -1;
	int16_t x4352 = 8;

    t140 = ((x4349>(x4350==x4351))<<x4352);

    if (t140 != 256) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x4361 = INT64_MIN;
	int8_t x4364 = 1;
	volatile int32_t t141 = 27179622;

    t141 = ((x4361>(x4362==x4363))<<x4364);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x4373 = -1613LL;
	static uint64_t x4374 = 6158605578211976593LLU;
	int8_t x4376 = 7;
	volatile int32_t t142 = 0;

    t142 = ((x4373>(x4374==x4375))<<x4376);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x4421 = 16U;
	static int8_t x4422 = 0;
	uint16_t x4424 = 15U;
	volatile int32_t t143 = -135;

    t143 = ((x4421>(x4422==x4423))<<x4424);

    if (t143 != 32768) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x4433 = INT32_MIN;
	static int32_t x4434 = -28;
	int16_t x4435 = INT16_MIN;
	int16_t x4436 = 1;

    t144 = ((x4433>(x4434==x4435))<<x4436);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x4585 = INT32_MIN;
	int8_t x4587 = INT8_MIN;
	int8_t x4588 = 15;
	static volatile int32_t t145 = 1050894837;

    t145 = ((x4585>(x4586==x4587))<<x4588);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x4593 = 119U;
	int64_t x4594 = 570737656543750806LL;
	volatile uint8_t x4596 = 3U;
	int32_t t146 = 5;

    t146 = ((x4593>(x4594==x4595))<<x4596);

    if (t146 != 8) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x4597 = 8998690368123256LLU;
	volatile int16_t x4599 = INT16_MIN;
	volatile int32_t t147 = -6379;

    t147 = ((x4597>(x4598==x4599))<<x4600);

    if (t147 != 2048) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x4653 = -247;
	static volatile int16_t x4654 = -9339;
	uint16_t x4655 = 1918U;

    t148 = ((x4653>(x4654==x4655))<<x4656);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x4713 = 0;
	uint16_t x4714 = UINT16_MAX;
	static uint8_t x4715 = UINT8_MAX;
	int16_t x4716 = 1;
	static volatile int32_t t149 = 38469009;

    t149 = ((x4713>(x4714==x4715))<<x4716);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x4797 = INT64_MIN;
	int8_t x4798 = -1;
	volatile int32_t x4799 = -5529;
	uint16_t x4800 = 3U;
	volatile int32_t t150 = -393886972;

    t150 = ((x4797>(x4798==x4799))<<x4800);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x4817 = 109;
	int8_t x4818 = INT8_MAX;
	static volatile int32_t x4819 = -1;
	int32_t t151 = 94905537;

    t151 = ((x4817>(x4818==x4819))<<x4820);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x4837 = 560U;
	int32_t x4839 = INT32_MIN;
	uint64_t x4840 = 4LLU;
	volatile int32_t t152 = -1;

    t152 = ((x4837>(x4838==x4839))<<x4840);

    if (t152 != 16) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x4893 = INT8_MIN;
	int16_t x4894 = INT16_MAX;
	int32_t x4896 = 0;
	int32_t t153 = 141;

    t153 = ((x4893>(x4894==x4895))<<x4896);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x4906 = -1;
	uint16_t x4908 = 1U;
	volatile int32_t t154 = 9936910;

    t154 = ((x4905>(x4906==x4907))<<x4908);

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x4925 = 15633U;
	int64_t x4926 = 143LL;
	uint8_t x4927 = UINT8_MAX;
	static uint8_t x4928 = 2U;
	int32_t t155 = 40791;

    t155 = ((x4925>(x4926==x4927))<<x4928);

    if (t155 != 4) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x4981 = INT8_MAX;
	int8_t x4983 = INT8_MIN;
	uint8_t x4984 = 2U;
	volatile int32_t t156 = 3983937;

    t156 = ((x4981>(x4982==x4983))<<x4984);

    if (t156 != 4) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x4985 = INT32_MAX;
	static int64_t x4987 = -4656780752128801LL;
	static uint32_t x4988 = 0U;
	static volatile int32_t t157 = -409;

    t157 = ((x4985>(x4986==x4987))<<x4988);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x5081 = 21;
	int64_t x5082 = INT64_MAX;
	int8_t x5083 = INT8_MIN;
	static uint8_t x5084 = 0U;
	int32_t t158 = 96426;

    t158 = ((x5081>(x5082==x5083))<<x5084);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x5093 = 1;
	uint8_t x5094 = 23U;
	static volatile int32_t t159 = 8;

    t159 = ((x5093>(x5094==x5095))<<x5096);

    if (t159 != 4) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x5121 = INT32_MAX;
	volatile uint16_t x5122 = UINT16_MAX;
	static int64_t x5123 = 44813LL;
	static int64_t x5124 = 1LL;
	int32_t t160 = -4946;

    t160 = ((x5121>(x5122==x5123))<<x5124);

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x5157 = 1680981LLU;
	int32_t x5158 = -1;
	static int16_t x5159 = INT16_MAX;
	uint8_t x5160 = 0U;

    t161 = ((x5157>(x5158==x5159))<<x5160);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x5261 = 4;
	static int8_t x5262 = 29;
	uint32_t x5263 = UINT32_MAX;
	uint32_t x5264 = 3U;

    t162 = ((x5261>(x5262==x5263))<<x5264);

    if (t162 != 8) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x5266 = UINT16_MAX;
	int32_t t163 = -36;

    t163 = ((x5265>(x5266==x5267))<<x5268);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x5285 = 14547LLU;
	uint64_t x5286 = 1LLU;
	volatile int64_t x5287 = -7460871237785119LL;
	static int16_t x5288 = 3;
	int32_t t164 = -9034;

    t164 = ((x5285>(x5286==x5287))<<x5288);

    if (t164 != 8) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x5305 = 1243145;
	int8_t x5306 = INT8_MIN;
	int8_t x5307 = INT8_MAX;
	uint16_t x5308 = 8U;

    t165 = ((x5305>(x5306==x5307))<<x5308);

    if (t165 != 256) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x5313 = -7191;
	uint8_t x5314 = UINT8_MAX;
	uint8_t x5315 = 1U;
	uint8_t x5316 = 0U;
	int32_t t166 = 773899460;

    t166 = ((x5313>(x5314==x5315))<<x5316);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x5341 = -1;
	int32_t x5342 = INT32_MIN;
	uint8_t x5344 = 20U;
	volatile int32_t t167 = 1;

    t167 = ((x5341>(x5342==x5343))<<x5344);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x5377 = 83466045520318LLU;
	uint64_t x5378 = 3293860LLU;
	int8_t x5379 = 1;
	int64_t x5380 = 1LL;
	int32_t t168 = -26224;

    t168 = ((x5377>(x5378==x5379))<<x5380);

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x5396 = 7U;
	volatile int32_t t169 = -217470410;

    t169 = ((x5393>(x5394==x5395))<<x5396);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x5449 = -5931928LL;
	volatile int16_t x5450 = -1;
	volatile int8_t x5451 = INT8_MAX;

    t170 = ((x5449>(x5450==x5451))<<x5452);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x5454 = INT16_MIN;

    t171 = ((x5453>(x5454==x5455))<<x5456);

    if (t171 != 33554432) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x5505 = UINT8_MAX;
	int8_t x5507 = INT8_MIN;
	static uint8_t x5508 = 0U;
	volatile int32_t t172 = 9;

    t172 = ((x5505>(x5506==x5507))<<x5508);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x5513 = 25485U;
	static uint32_t x5514 = UINT32_MAX;
	static volatile int16_t x5515 = -1738;
	uint32_t x5516 = 2U;

    t173 = ((x5513>(x5514==x5515))<<x5516);

    if (t173 != 4) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x5529 = INT16_MIN;
	int8_t x5530 = 0;
	volatile uint8_t x5532 = 18U;
	static int32_t t174 = 776128;

    t174 = ((x5529>(x5530==x5531))<<x5532);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x5625 = 1022U;
	volatile int64_t x5626 = INT64_MIN;
	volatile int16_t x5627 = INT16_MIN;
	int8_t x5628 = 7;
	int32_t t175 = 488018;

    t175 = ((x5625>(x5626==x5627))<<x5628);

    if (t175 != 128) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x5660 = 14;
	int32_t t176 = -736932;

    t176 = ((x5657>(x5658==x5659))<<x5660);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x5677 = INT16_MIN;
	int8_t x5679 = INT8_MIN;
	volatile uint8_t x5680 = 0U;
	int32_t t177 = -8686;

    t177 = ((x5677>(x5678==x5679))<<x5680);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x5690 = 21136787853535394LLU;
	volatile uint16_t x5691 = 1U;
	volatile uint32_t x5692 = 23U;
	int32_t t178 = -2047;

    t178 = ((x5689>(x5690==x5691))<<x5692);

    if (t178 != 8388608) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x5705 = -13;
	int8_t x5706 = INT8_MIN;
	int8_t x5708 = 1;
	static int32_t t179 = -15;

    t179 = ((x5705>(x5706==x5707))<<x5708);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x5719 = 0;
	int32_t t180 = 21755796;

    t180 = ((x5717>(x5718==x5719))<<x5720);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x5729 = INT16_MAX;
	int64_t x5730 = -7165326388385062LL;
	uint16_t x5731 = UINT16_MAX;
	uint16_t x5732 = 30U;
	volatile int32_t t181 = -688898;

    t181 = ((x5729>(x5730==x5731))<<x5732);

    if (t181 != 1073741824) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x5741 = INT8_MIN;
	uint32_t x5742 = 579035U;
	volatile uint16_t x5744 = 27U;
	volatile int32_t t182 = 73963;

    t182 = ((x5741>(x5742==x5743))<<x5744);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x5754 = INT16_MIN;
	int32_t x5755 = INT32_MIN;
	volatile int32_t t183 = -127174232;

    t183 = ((x5753>(x5754==x5755))<<x5756);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x5770 = UINT32_MAX;
	int32_t x5771 = INT32_MIN;
	uint8_t x5772 = 3U;

    t184 = ((x5769>(x5770==x5771))<<x5772);

    if (t184 != 8) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x5797 = INT16_MIN;
	uint32_t x5798 = 14585340U;
	static uint32_t x5799 = 29U;
	uint8_t x5800 = 0U;
	int32_t t185 = -21;

    t185 = ((x5797>(x5798==x5799))<<x5800);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x5830 = INT8_MIN;
	uint64_t x5831 = 1861LLU;
	volatile uint8_t x5832 = 3U;
	volatile int32_t t186 = -2;

    t186 = ((x5829>(x5830==x5831))<<x5832);

    if (t186 != 8) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x5881 = INT8_MIN;
	static int16_t x5882 = 0;
	uint64_t x5883 = 3720685887LLU;
	int8_t x5884 = 0;
	int32_t t187 = 1;

    t187 = ((x5881>(x5882==x5883))<<x5884);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x5911 = 4;
	static uint8_t x5912 = 12U;

    t188 = ((x5909>(x5910==x5911))<<x5912);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x5913 = INT8_MAX;
	static int16_t x5914 = 6;
	volatile uint16_t x5915 = 922U;
	uint16_t x5916 = 23U;
	volatile int32_t t189 = -41;

    t189 = ((x5913>(x5914==x5915))<<x5916);

    if (t189 != 8388608) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x5917 = UINT32_MAX;
	volatile int32_t t190 = 1;

    t190 = ((x5917>(x5918==x5919))<<x5920);

    if (t190 != 4) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x5993 = UINT64_MAX;
	int16_t x5995 = INT16_MIN;
	uint16_t x5996 = 26U;
	volatile int32_t t191 = 8461;

    t191 = ((x5993>(x5994==x5995))<<x5996);

    if (t191 != 67108864) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x5997 = 98U;
	static int64_t x5999 = -1LL;
	uint32_t x6000 = 1U;
	int32_t t192 = 319865;

    t192 = ((x5997>(x5998==x5999))<<x6000);

    if (t192 != 2) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x6001 = -7LL;
	int16_t x6002 = INT16_MAX;
	int64_t x6003 = -6625358536597824LL;
	uint16_t x6004 = 12U;
	int32_t t193 = 4;

    t193 = ((x6001>(x6002==x6003))<<x6004);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x6033 = 134325840LL;
	int64_t x6034 = INT64_MIN;
	static int64_t x6035 = 65752142LL;
	int32_t t194 = -89919030;

    t194 = ((x6033>(x6034==x6035))<<x6036);

    if (t194 != 2097152) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x6061 = INT64_MIN;
	int8_t x6063 = INT8_MAX;
	uint8_t x6064 = 7U;
	volatile int32_t t195 = -7406837;

    t195 = ((x6061>(x6062==x6063))<<x6064);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x6070 = UINT32_MAX;
	uint64_t x6071 = 8850956422175592LLU;
	static int8_t x6072 = 4;
	int32_t t196 = -2836;

    t196 = ((x6069>(x6070==x6071))<<x6072);

    if (t196 != 16) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x6103 = 13U;
	int32_t t197 = -1;

    t197 = ((x6101>(x6102==x6103))<<x6104);

    if (t197 != 32) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x6213 = UINT16_MAX;
	uint8_t x6215 = 118U;
	uint16_t x6216 = 3U;

    t198 = ((x6213>(x6214==x6215))<<x6216);

    if (t198 != 8) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x6249 = -52;
	uint32_t x6250 = 66U;
	int64_t x6251 = INT64_MIN;
	int32_t t199 = -53;

    t199 = ((x6249>(x6250==x6251))<<x6252);

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

