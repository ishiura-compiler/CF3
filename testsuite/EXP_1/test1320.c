
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

static int16_t x142 = INT16_MAX;
static volatile int32_t x162 = -1;
static int64_t x186 = INT64_MIN;
int32_t x242 = -20;
static int64_t x269 = 141850255556577LL;
static int16_t x271 = 0;
static int32_t x272 = -1;
int8_t x347 = 7;
int32_t t9 = 0;
int8_t x451 = 23;
static int32_t t10 = -4591147;
uint16_t x530 = 37U;
uint16_t x584 = 58U;
uint16_t x601 = 21U;
int8_t x603 = 4;
volatile int8_t x604 = INT8_MIN;
static volatile int32_t t13 = 0;
volatile uint16_t x605 = 92U;
int64_t x622 = 7468905491865020LL;
volatile uint16_t x645 = 341U;
static int8_t x648 = 4;
static int32_t t16 = 290303;
static volatile uint16_t x671 = 8U;
static int8_t x706 = INT8_MIN;
uint8_t x774 = UINT8_MAX;
int64_t x793 = 2472816998146057LL;
int8_t x795 = 22;
uint16_t x863 = 2U;
int16_t x864 = INT16_MIN;
static volatile int64_t x908 = 6007060684LL;
uint8_t x961 = UINT8_MAX;
int8_t x1014 = -53;
volatile uint16_t x1094 = UINT16_MAX;
uint32_t x1095 = 3U;
int32_t x1101 = INT32_MIN;
volatile int32_t t31 = 395356;
static int8_t x1109 = INT8_MIN;
volatile int8_t x1112 = INT8_MIN;
volatile uint64_t x1152 = UINT64_MAX;
volatile uint8_t x1249 = 1U;
int8_t x1333 = 0;
int32_t x1336 = -1;
static int8_t x1421 = INT8_MIN;
int16_t x1437 = INT16_MIN;
int8_t x1446 = INT8_MAX;
int64_t x1470 = -7003043517LL;
int8_t x1472 = -1;
volatile int32_t t45 = 68029310;
uint8_t x1507 = 19U;
uint64_t x1508 = 491559281892432280LLU;
uint64_t x1523 = 6LLU;
int8_t x1553 = INT8_MIN;
uint8_t x1554 = UINT8_MAX;
int16_t x1577 = INT16_MAX;
static uint16_t x1578 = 1223U;
static int8_t x1671 = 10;
int64_t x1672 = INT64_MIN;
volatile int64_t t50 = 643LL;
uint64_t x1709 = 456LLU;
volatile int8_t x1711 = 23;
volatile int32_t t52 = -282205;
volatile uint8_t x1714 = 126U;
volatile int32_t t53 = -2848745;
uint64_t x1721 = UINT64_MAX;
int64_t x1727 = 15LL;
static int64_t x1728 = INT64_MIN;
uint64_t x1751 = 2LLU;
static int32_t x1752 = INT32_MAX;
uint32_t x1773 = 47142U;
static uint32_t t60 = 10U;
static int64_t x1821 = -1LL;
int8_t x1902 = INT8_MIN;
uint16_t x1929 = 5U;
volatile int32_t t68 = 29428;
uint8_t x1981 = 1U;
int64_t x1984 = 454311026LL;
int64_t t70 = -445930628774922LL;
int8_t x2026 = INT8_MIN;
uint16_t x2070 = 2094U;
volatile int32_t t72 = 120;
int8_t x2128 = INT8_MIN;
int32_t x2133 = 3093;
int64_t x2134 = -1LL;
static int8_t x2135 = 0;
uint32_t x2173 = UINT32_MAX;
uint32_t x2176 = UINT32_MAX;
int16_t x2208 = -1;
volatile int32_t t76 = -30;
int32_t x2248 = 9750887;
uint8_t x2269 = 0U;
int8_t x2271 = 15;
volatile uint64_t t80 = 13073LLU;
static int16_t x2299 = 23;
static uint8_t x2300 = 60U;
static int32_t x2382 = -1007233306;
int8_t x2383 = 0;
volatile int16_t x2457 = -6;
uint32_t x2458 = UINT32_MAX;
volatile int32_t x2473 = -1;
int64_t x2537 = INT64_MIN;
static uint16_t x2607 = 1U;
static volatile int32_t t93 = 887723;
uint64_t x2670 = 13353LLU;
int8_t x2737 = INT8_MIN;
uint16_t x2738 = 1U;
volatile uint8_t x2739 = 2U;
int8_t x2776 = 1;
int32_t t97 = 310108461;
static uint8_t x2796 = 95U;
static volatile int32_t t98 = -39755;
int16_t x2805 = -889;
int32_t x2932 = -1;
volatile int32_t x2978 = INT32_MAX;
volatile int16_t x2980 = -1;
static volatile int32_t t104 = 131;
int64_t x3016 = INT64_MIN;
int64_t x3273 = INT64_MAX;
uint32_t t109 = 7317439U;
uint16_t x3329 = UINT16_MAX;
uint8_t x3479 = 14U;
int16_t x3642 = INT16_MAX;
static int8_t x3710 = 1;
static volatile int32_t t117 = -12;
int32_t x3720 = -1;
static uint32_t x3729 = UINT32_MAX;
static volatile int32_t x3732 = INT32_MAX;
volatile int32_t t119 = 364176;
int64_t x3760 = INT64_MIN;
uint64_t x3797 = 768796421LLU;
static volatile int64_t t122 = -17541036535189107LL;
volatile int32_t x3801 = -15532;
uint32_t x3802 = 2011U;
static int32_t x3819 = 0;
int64_t x3838 = -1LL;
uint16_t x3839 = 1U;
static uint16_t x3883 = 17U;
volatile uint16_t x3905 = UINT16_MAX;
static uint32_t x3906 = 25U;
static int32_t x3907 = 6;
int16_t x3977 = -1;
volatile int8_t x3980 = INT8_MIN;
int16_t x4100 = 844;
uint32_t x4190 = 28318038U;
volatile int32_t x4242 = INT32_MIN;
int8_t x4270 = INT8_MAX;
int16_t x4272 = INT16_MIN;
uint16_t x4279 = 15U;
uint8_t x4291 = 1U;
uint64_t x4317 = 56248236558024LLU;
uint64_t x4353 = 176376411173342771LLU;
int8_t x4394 = INT8_MAX;
uint64_t t142 = 7LLU;
static uint8_t x4543 = 18U;
int64_t x4550 = -26LL;
static volatile int32_t t146 = -563;
static int8_t x4587 = 6;
volatile int32_t t147 = 199;
static int8_t x4595 = 22;
int8_t x4626 = INT8_MIN;
int16_t x4646 = INT16_MIN;
int8_t x4647 = 1;
volatile int32_t t151 = 1988;
volatile uint64_t x4678 = UINT64_MAX;
static uint8_t x4679 = 2U;
int64_t t153 = -11581194129LL;
uint32_t x4738 = UINT32_MAX;
int32_t t154 = 15214521;
volatile int16_t x4805 = -1;
uint32_t x4808 = UINT32_MAX;
int64_t x4852 = -1LL;
volatile int16_t x4893 = INT16_MAX;
static int64_t x5028 = -1LL;
int32_t t165 = 0;
int32_t x5058 = 5;
static volatile int32_t t166 = 1602;
static uint16_t x5169 = 2U;
volatile int8_t x5171 = 27;
static volatile uint64_t t169 = 5384864686662465262LLU;
int64_t x5176 = 3360536046LL;
int16_t x5262 = -1;
static int32_t t176 = 6;
volatile uint8_t x5387 = 1U;
uint8_t x5388 = 1U;
uint8_t x5457 = 25U;
int32_t t180 = 60705239;
int16_t x5601 = INT16_MIN;
uint32_t x5662 = 250614529U;
static volatile uint64_t x5686 = 0LLU;
int32_t t187 = 871459784;
static int64_t x5729 = INT64_MIN;
uint8_t x5761 = 1U;
int32_t t190 = -1;
volatile uint16_t x5845 = UINT16_MAX;
static uint8_t x5846 = UINT8_MAX;
static int8_t x5847 = 26;
volatile int64_t t191 = 1LL;
int8_t x5877 = -1;
int8_t x5939 = 14;
int16_t x5970 = INT16_MAX;
uint16_t x5971 = 16U;
uint32_t t196 = 0U;
static volatile int32_t t197 = 18759;
volatile int8_t x6008 = -1;
int32_t t199 = 319877623;


void f0(void) {
    	volatile int64_t x141 = INT64_MIN;
	uint16_t x143 = 1U;
	static int8_t x144 = -3;
	int32_t t0 = -3;

    t0 = (((x141!=x142)>>x143)/x144);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x161 = -638193563;
	volatile int16_t x163 = 4;
	int16_t x164 = -7832;
	int32_t t1 = -23817;

    t1 = (((x161!=x162)>>x163)/x164);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x185 = -1715;
	uint16_t x187 = 12U;
	volatile int64_t x188 = INT64_MIN;
	volatile int64_t t2 = 1997LL;

    t2 = (((x185!=x186)>>x187)/x188);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x189 = 817U;
	int16_t x190 = INT16_MIN;
	static int16_t x191 = 6;
	int64_t x192 = -1LL;
	volatile int64_t t3 = -26075LL;

    t3 = (((x189!=x190)>>x191)/x192);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MAX;
	volatile uint16_t x215 = 1U;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t4 = 27767U;

    t4 = (((x213!=x214)>>x215)/x216);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x241 = 272392204761375LL;
	volatile int8_t x243 = 1;
	volatile uint16_t x244 = 7390U;
	int32_t t5 = -1;

    t5 = (((x241!=x242)>>x243)/x244);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x270 = -6264418;
	volatile int32_t t6 = -18173;

    t6 = (((x269!=x270)>>x271)/x272);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MAX;
	static uint64_t x348 = 6743455982LLU;
	static volatile uint64_t t7 = 5LLU;

    t7 = (((x345!=x346)>>x347)/x348);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x361 = INT64_MIN;
	uint64_t x362 = 152649927348387196LLU;
	uint8_t x363 = 11U;
	int64_t x364 = -1LL;
	volatile int64_t t8 = 95509489846327LL;

    t8 = (((x361!=x362)>>x363)/x364);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x389 = INT64_MIN;
	static int32_t x390 = INT32_MIN;
	uint16_t x391 = 3U;
	int16_t x392 = INT16_MAX;

    t9 = (((x389!=x390)>>x391)/x392);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x449 = 23052333U;
	volatile int16_t x450 = INT16_MAX;
	volatile int8_t x452 = INT8_MAX;

    t10 = (((x449!=x450)>>x451)/x452);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x529 = 52U;
	uint16_t x531 = 4U;
	volatile int64_t x532 = 1914042250627187616LL;
	volatile int64_t t11 = 1LL;

    t11 = (((x529!=x530)>>x531)/x532);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x581 = UINT8_MAX;
	int16_t x582 = INT16_MIN;
	uint8_t x583 = 13U;
	static volatile int32_t t12 = 836708112;

    t12 = (((x581!=x582)>>x583)/x584);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x602 = INT8_MIN;

    t13 = (((x601!=x602)>>x603)/x604);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x606 = -631666684522393LL;
	int8_t x607 = 6;
	uint8_t x608 = UINT8_MAX;
	int32_t t14 = 13514;

    t14 = (((x605!=x606)>>x607)/x608);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x621 = 57;
	uint8_t x623 = 3U;
	int64_t x624 = 18373918034389LL;
	static int64_t t15 = 1015427069792113271LL;

    t15 = (((x621!=x622)>>x623)/x624);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x646 = 632;
	static volatile uint8_t x647 = 10U;

    t16 = (((x645!=x646)>>x647)/x648);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x669 = INT32_MAX;
	uint64_t x670 = 461136829680LLU;
	uint64_t x672 = UINT64_MAX;
	static volatile uint64_t t17 = 602541428LLU;

    t17 = (((x669!=x670)>>x671)/x672);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x677 = 2722891045158LL;
	int32_t x678 = 0;
	uint8_t x679 = 14U;
	volatile uint8_t x680 = 1U;
	static volatile int32_t t18 = -14082878;

    t18 = (((x677!=x678)>>x679)/x680);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x705 = UINT16_MAX;
	uint16_t x707 = 0U;
	int8_t x708 = 1;
	int32_t t19 = 13902207;

    t19 = (((x705!=x706)>>x707)/x708);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x713 = UINT16_MAX;
	int8_t x714 = INT8_MIN;
	uint8_t x715 = 26U;
	int32_t x716 = -2051327;
	static volatile int32_t t20 = -82576125;

    t20 = (((x713!=x714)>>x715)/x716);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x717 = -59;
	int16_t x718 = -1;
	int16_t x719 = 15;
	uint8_t x720 = 3U;
	int32_t t21 = -450352;

    t21 = (((x717!=x718)>>x719)/x720);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x773 = INT8_MIN;
	int16_t x775 = 0;
	uint16_t x776 = UINT16_MAX;
	int32_t t22 = 1006746;

    t22 = (((x773!=x774)>>x775)/x776);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x794 = INT16_MIN;
	int64_t x796 = 5218913751186LL;
	int64_t t23 = 88968805LL;

    t23 = (((x793!=x794)>>x795)/x796);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x861 = 14863381236937002LL;
	int8_t x862 = 35;
	int32_t t24 = 10153;

    t24 = (((x861!=x862)>>x863)/x864);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x905 = -1LL;
	static int8_t x906 = -5;
	static int16_t x907 = 22;
	int64_t t25 = 0LL;

    t25 = (((x905!=x906)>>x907)/x908);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x962 = -1;
	uint8_t x963 = 1U;
	int16_t x964 = -7;
	volatile int32_t t26 = 2174;

    t26 = (((x961!=x962)>>x963)/x964);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x969 = -1;
	volatile int32_t x970 = -2383589;
	static uint32_t x971 = 0U;
	int32_t x972 = -1;
	int32_t t27 = -2;

    t27 = (((x969!=x970)>>x971)/x972);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x1013 = -15894;
	static uint8_t x1015 = 1U;
	int64_t x1016 = -1LL;
	static int64_t t28 = 772LL;

    t28 = (((x1013!=x1014)>>x1015)/x1016);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x1021 = 3972U;
	int8_t x1022 = INT8_MIN;
	uint8_t x1023 = 1U;
	uint8_t x1024 = UINT8_MAX;
	volatile int32_t t29 = 19265182;

    t29 = (((x1021!=x1022)>>x1023)/x1024);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x1093 = 47399721U;
	int64_t x1096 = 6656541522680LL;
	volatile int64_t t30 = 97713118LL;

    t30 = (((x1093!=x1094)>>x1095)/x1096);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x1102 = INT16_MIN;
	uint8_t x1103 = 20U;
	volatile uint16_t x1104 = 8U;

    t31 = (((x1101!=x1102)>>x1103)/x1104);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x1110 = UINT8_MAX;
	uint64_t x1111 = 0LLU;
	int32_t t32 = -505677104;

    t32 = (((x1109!=x1110)>>x1111)/x1112);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x1145 = UINT32_MAX;
	static int8_t x1146 = INT8_MIN;
	uint8_t x1147 = 1U;
	int64_t x1148 = INT64_MIN;
	static int64_t t33 = -48845104010490LL;

    t33 = (((x1145!=x1146)>>x1147)/x1148);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1149 = 18186667392LLU;
	int8_t x1150 = -57;
	uint32_t x1151 = 5U;
	volatile uint64_t t34 = 157414930070LLU;

    t34 = (((x1149!=x1150)>>x1151)/x1152);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x1250 = 17U;
	uint8_t x1251 = 4U;
	int64_t x1252 = 39038905218637175LL;
	int64_t t35 = -95976897523816876LL;

    t35 = (((x1249!=x1250)>>x1251)/x1252);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x1253 = INT32_MAX;
	int32_t x1254 = INT32_MAX;
	static int8_t x1255 = 14;
	static int16_t x1256 = -140;
	volatile int32_t t36 = -5926;

    t36 = (((x1253!=x1254)>>x1255)/x1256);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x1273 = 27641;
	int64_t x1274 = INT64_MIN;
	uint8_t x1275 = 21U;
	static int16_t x1276 = INT16_MAX;
	int32_t t37 = 38603260;

    t37 = (((x1273!=x1274)>>x1275)/x1276);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1297 = -1;
	volatile int32_t x1298 = INT32_MAX;
	uint32_t x1299 = 24U;
	int64_t x1300 = INT64_MIN;
	int64_t t38 = -45LL;

    t38 = (((x1297!=x1298)>>x1299)/x1300);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1313 = INT16_MAX;
	int8_t x1314 = -10;
	uint16_t x1315 = 11U;
	int64_t x1316 = -1888879590187158067LL;
	volatile int64_t t39 = 4198153364269LL;

    t39 = (((x1313!=x1314)>>x1315)/x1316);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x1334 = UINT8_MAX;
	int8_t x1335 = 0;
	int32_t t40 = -7428267;

    t40 = (((x1333!=x1334)>>x1335)/x1336);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x1401 = 539681136431509LLU;
	volatile int8_t x1402 = -1;
	uint16_t x1403 = 1U;
	int64_t x1404 = INT64_MIN;
	int64_t t41 = -2140668LL;

    t41 = (((x1401!=x1402)>>x1403)/x1404);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x1422 = 378U;
	volatile int8_t x1423 = 26;
	uint32_t x1424 = UINT32_MAX;
	static volatile uint32_t t42 = 356293943U;

    t42 = (((x1421!=x1422)>>x1423)/x1424);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x1438 = 5022027662312124LLU;
	int16_t x1439 = 14;
	uint64_t x1440 = 923252885394LLU;
	volatile uint64_t t43 = 20LLU;

    t43 = (((x1437!=x1438)>>x1439)/x1440);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x1445 = INT32_MIN;
	static int8_t x1447 = 0;
	volatile int8_t x1448 = -10;
	volatile int32_t t44 = -22167671;

    t44 = (((x1445!=x1446)>>x1447)/x1448);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1469 = -58;
	uint8_t x1471 = 1U;

    t45 = (((x1469!=x1470)>>x1471)/x1472);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x1505 = INT32_MIN;
	int8_t x1506 = -1;
	volatile uint64_t t46 = 15910996087563LLU;

    t46 = (((x1505!=x1506)>>x1507)/x1508);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1521 = -1LL;
	int32_t x1522 = INT32_MIN;
	uint64_t x1524 = 313737LLU;
	uint64_t t47 = 884728191LLU;

    t47 = (((x1521!=x1522)>>x1523)/x1524);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x1555 = 31U;
	uint16_t x1556 = 10793U;
	volatile int32_t t48 = 51;

    t48 = (((x1553!=x1554)>>x1555)/x1556);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1579 = 1;
	volatile int16_t x1580 = -1;
	volatile int32_t t49 = 74;

    t49 = (((x1577!=x1578)>>x1579)/x1580);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x1669 = -1;
	int64_t x1670 = INT64_MAX;

    t50 = (((x1669!=x1670)>>x1671)/x1672);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x1681 = -7;
	uint8_t x1682 = 0U;
	uint16_t x1683 = 15U;
	int32_t x1684 = INT32_MIN;
	static int32_t t51 = 1;

    t51 = (((x1681!=x1682)>>x1683)/x1684);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x1710 = UINT8_MAX;
	static int16_t x1712 = -1;

    t52 = (((x1709!=x1710)>>x1711)/x1712);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x1713 = -1;
	uint16_t x1715 = 0U;
	static volatile int8_t x1716 = INT8_MIN;

    t53 = (((x1713!=x1714)>>x1715)/x1716);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x1722 = INT64_MIN;
	volatile uint8_t x1723 = 1U;
	static int16_t x1724 = INT16_MIN;
	static volatile int32_t t54 = -238718614;

    t54 = (((x1721!=x1722)>>x1723)/x1724);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x1725 = 77U;
	int8_t x1726 = -1;
	volatile int64_t t55 = 18718766049816934LL;

    t55 = (((x1725!=x1726)>>x1727)/x1728);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x1737 = UINT32_MAX;
	int16_t x1738 = 1;
	volatile int8_t x1739 = 0;
	volatile int32_t x1740 = INT32_MIN;
	volatile int32_t t56 = -23;

    t56 = (((x1737!=x1738)>>x1739)/x1740);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x1745 = INT8_MAX;
	int16_t x1746 = INT16_MAX;
	int8_t x1747 = 5;
	uint16_t x1748 = 20U;
	int32_t t57 = 9434143;

    t57 = (((x1745!=x1746)>>x1747)/x1748);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x1749 = 10U;
	uint32_t x1750 = 24523U;
	volatile int32_t t58 = -326475;

    t58 = (((x1749!=x1750)>>x1751)/x1752);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x1774 = INT32_MIN;
	static volatile uint16_t x1775 = 1U;
	volatile uint32_t x1776 = 9U;
	uint32_t t59 = 17533795U;

    t59 = (((x1773!=x1774)>>x1775)/x1776);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x1789 = 23484424LL;
	volatile uint16_t x1790 = UINT16_MAX;
	static int8_t x1791 = 5;
	uint32_t x1792 = 16U;

    t60 = (((x1789!=x1790)>>x1791)/x1792);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x1822 = -1;
	volatile int8_t x1823 = 9;
	volatile uint8_t x1824 = 41U;
	int32_t t61 = 16997016;

    t61 = (((x1821!=x1822)>>x1823)/x1824);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x1841 = -1519344;
	volatile uint64_t x1842 = 180523LLU;
	uint8_t x1843 = 2U;
	int64_t x1844 = INT64_MAX;
	volatile int64_t t62 = 39871580419LL;

    t62 = (((x1841!=x1842)>>x1843)/x1844);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x1889 = INT8_MAX;
	static volatile int16_t x1890 = -1;
	uint8_t x1891 = 29U;
	uint8_t x1892 = 10U;
	int32_t t63 = -4575472;

    t63 = (((x1889!=x1890)>>x1891)/x1892);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x1901 = INT32_MIN;
	int64_t x1903 = 5LL;
	uint32_t x1904 = 2614912U;
	volatile uint32_t t64 = 53U;

    t64 = (((x1901!=x1902)>>x1903)/x1904);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x1905 = INT32_MIN;
	int8_t x1906 = INT8_MAX;
	int16_t x1907 = 15;
	static int64_t x1908 = -1LL;
	volatile int64_t t65 = 116508591LL;

    t65 = (((x1905!=x1906)>>x1907)/x1908);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x1909 = -62;
	int16_t x1910 = -26;
	uint16_t x1911 = 1U;
	int8_t x1912 = INT8_MAX;
	int32_t t66 = -9;

    t66 = (((x1909!=x1910)>>x1911)/x1912);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x1930 = 21;
	uint8_t x1931 = 4U;
	int64_t x1932 = INT64_MIN;
	int64_t t67 = 1602975850708683886LL;

    t67 = (((x1929!=x1930)>>x1931)/x1932);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x1953 = UINT16_MAX;
	int64_t x1954 = -2206LL;
	int16_t x1955 = 4;
	volatile int16_t x1956 = -1;

    t68 = (((x1953!=x1954)>>x1955)/x1956);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x1961 = INT8_MIN;
	int32_t x1962 = INT32_MIN;
	uint8_t x1963 = 1U;
	int32_t x1964 = -39;
	volatile int32_t t69 = 139271635;

    t69 = (((x1961!=x1962)>>x1963)/x1964);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x1982 = 851722959674650927LLU;
	int8_t x1983 = 0;

    t70 = (((x1981!=x1982)>>x1983)/x1984);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x2025 = INT64_MIN;
	volatile uint8_t x2027 = 10U;
	int32_t x2028 = INT32_MIN;
	int32_t t71 = -21784;

    t71 = (((x2025!=x2026)>>x2027)/x2028);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x2069 = INT64_MAX;
	uint8_t x2071 = 0U;
	static uint16_t x2072 = UINT16_MAX;

    t72 = (((x2069!=x2070)>>x2071)/x2072);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x2125 = 190838033;
	uint16_t x2126 = UINT16_MAX;
	uint8_t x2127 = 2U;
	volatile int32_t t73 = 469032;

    t73 = (((x2125!=x2126)>>x2127)/x2128);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x2136 = -1;
	int32_t t74 = 0;

    t74 = (((x2133!=x2134)>>x2135)/x2136);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x2174 = 11;
	static int32_t x2175 = 14;
	uint32_t t75 = 25170135U;

    t75 = (((x2173!=x2174)>>x2175)/x2176);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x2205 = 3U;
	static volatile int32_t x2206 = -1829;
	uint64_t x2207 = 21LLU;

    t76 = (((x2205!=x2206)>>x2207)/x2208);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x2221 = 191;
	uint8_t x2222 = UINT8_MAX;
	uint8_t x2223 = 2U;
	uint32_t x2224 = 127205492U;
	volatile uint32_t t77 = 67U;

    t77 = (((x2221!=x2222)>>x2223)/x2224);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x2245 = UINT32_MAX;
	int16_t x2246 = INT16_MAX;
	volatile uint8_t x2247 = 12U;
	volatile int32_t t78 = 8;

    t78 = (((x2245!=x2246)>>x2247)/x2248);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x2253 = 121U;
	volatile uint8_t x2254 = 15U;
	static volatile uint16_t x2255 = 19U;
	int8_t x2256 = 9;
	volatile int32_t t79 = -20537773;

    t79 = (((x2253!=x2254)>>x2255)/x2256);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x2270 = 419671697;
	uint64_t x2272 = 5058953LLU;

    t80 = (((x2269!=x2270)>>x2271)/x2272);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x2297 = 115U;
	int64_t x2298 = 44894296936838LL;
	int32_t t81 = -1;

    t81 = (((x2297!=x2298)>>x2299)/x2300);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x2313 = INT64_MIN;
	uint8_t x2314 = 0U;
	uint8_t x2315 = 3U;
	uint8_t x2316 = UINT8_MAX;
	static volatile int32_t t82 = 10;

    t82 = (((x2313!=x2314)>>x2315)/x2316);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x2381 = UINT8_MAX;
	int8_t x2384 = -1;
	int32_t t83 = -886028642;

    t83 = (((x2381!=x2382)>>x2383)/x2384);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x2385 = 331177607176166900LL;
	uint16_t x2386 = 502U;
	int16_t x2387 = 25;
	uint8_t x2388 = UINT8_MAX;
	static int32_t t84 = 134185877;

    t84 = (((x2385!=x2386)>>x2387)/x2388);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x2459 = 0U;
	int64_t x2460 = -105360677LL;
	volatile int64_t t85 = 99582280359LL;

    t85 = (((x2457!=x2458)>>x2459)/x2460);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x2474 = INT8_MIN;
	volatile int8_t x2475 = 2;
	int8_t x2476 = 6;
	static volatile int32_t t86 = 62;

    t86 = (((x2473!=x2474)>>x2475)/x2476);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x2513 = INT64_MAX;
	int16_t x2514 = INT16_MAX;
	uint8_t x2515 = 0U;
	uint16_t x2516 = 593U;
	int32_t t87 = -413;

    t87 = (((x2513!=x2514)>>x2515)/x2516);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x2533 = 2528202584788709LL;
	uint32_t x2534 = 0U;
	uint8_t x2535 = 2U;
	volatile uint32_t x2536 = 9U;
	static uint32_t t88 = 5464811U;

    t88 = (((x2533!=x2534)>>x2535)/x2536);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x2538 = 2U;
	volatile int16_t x2539 = 1;
	uint64_t x2540 = 3LLU;
	uint64_t t89 = 32LLU;

    t89 = (((x2537!=x2538)>>x2539)/x2540);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x2557 = UINT8_MAX;
	uint64_t x2558 = UINT64_MAX;
	uint8_t x2559 = 23U;
	static uint8_t x2560 = 11U;
	int32_t t90 = 8098;

    t90 = (((x2557!=x2558)>>x2559)/x2560);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x2605 = 436929617LLU;
	static volatile int8_t x2606 = INT8_MIN;
	uint16_t x2608 = 95U;
	int32_t t91 = 59910;

    t91 = (((x2605!=x2606)>>x2607)/x2608);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x2629 = -3311;
	int8_t x2630 = INT8_MIN;
	uint16_t x2631 = 0U;
	int32_t x2632 = -317;
	volatile int32_t t92 = 1609;

    t92 = (((x2629!=x2630)>>x2631)/x2632);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x2665 = -1;
	volatile int16_t x2666 = INT16_MIN;
	uint8_t x2667 = 23U;
	uint16_t x2668 = 57U;

    t93 = (((x2665!=x2666)>>x2667)/x2668);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x2669 = UINT64_MAX;
	volatile int8_t x2671 = 1;
	uint64_t x2672 = 8LLU;
	volatile uint64_t t94 = 338814431LLU;

    t94 = (((x2669!=x2670)>>x2671)/x2672);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x2697 = INT64_MIN;
	int16_t x2698 = INT16_MIN;
	uint8_t x2699 = 7U;
	int32_t x2700 = INT32_MIN;
	int32_t t95 = -4091463;

    t95 = (((x2697!=x2698)>>x2699)/x2700);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x2740 = INT32_MIN;
	int32_t t96 = 1;

    t96 = (((x2737!=x2738)>>x2739)/x2740);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x2773 = INT8_MIN;
	int16_t x2774 = INT16_MIN;
	volatile uint16_t x2775 = 17U;

    t97 = (((x2773!=x2774)>>x2775)/x2776);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x2793 = -1028494345;
	volatile int64_t x2794 = -1LL;
	static volatile uint8_t x2795 = 12U;

    t98 = (((x2793!=x2794)>>x2795)/x2796);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x2806 = INT32_MIN;
	static uint8_t x2807 = 26U;
	uint64_t x2808 = UINT64_MAX;
	volatile uint64_t t99 = 3882LLU;

    t99 = (((x2805!=x2806)>>x2807)/x2808);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x2845 = -1;
	volatile uint64_t x2846 = 1LLU;
	uint32_t x2847 = 1U;
	int8_t x2848 = -1;
	int32_t t100 = -1554891;

    t100 = (((x2845!=x2846)>>x2847)/x2848);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x2869 = INT64_MIN;
	uint8_t x2870 = 0U;
	static volatile int8_t x2871 = 0;
	volatile int32_t x2872 = -12;
	int32_t t101 = 179494;

    t101 = (((x2869!=x2870)>>x2871)/x2872);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x2885 = INT8_MAX;
	static uint64_t x2886 = 50357738LLU;
	volatile int32_t x2887 = 1;
	static uint8_t x2888 = UINT8_MAX;
	int32_t t102 = 264147467;

    t102 = (((x2885!=x2886)>>x2887)/x2888);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x2929 = 318;
	uint32_t x2930 = UINT32_MAX;
	uint8_t x2931 = 1U;
	static volatile int32_t t103 = -63170388;

    t103 = (((x2929!=x2930)>>x2931)/x2932);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x2977 = 27LL;
	int8_t x2979 = 2;

    t104 = (((x2977!=x2978)>>x2979)/x2980);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x3013 = UINT8_MAX;
	int8_t x3014 = INT8_MIN;
	volatile int16_t x3015 = 11;
	volatile int64_t t105 = 68935658LL;

    t105 = (((x3013!=x3014)>>x3015)/x3016);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x3081 = -1LL;
	uint64_t x3082 = UINT64_MAX;
	int8_t x3083 = 6;
	uint16_t x3084 = UINT16_MAX;
	static volatile int32_t t106 = 500;

    t106 = (((x3081!=x3082)>>x3083)/x3084);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x3261 = 57U;
	int16_t x3262 = 162;
	static int8_t x3263 = 3;
	static int32_t x3264 = INT32_MIN;
	static volatile int32_t t107 = 14068400;

    t107 = (((x3261!=x3262)>>x3263)/x3264);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x3274 = INT16_MAX;
	uint8_t x3275 = 17U;
	int32_t x3276 = -1;
	static int32_t t108 = 9;

    t108 = (((x3273!=x3274)>>x3275)/x3276);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x3309 = 492508877670283LLU;
	volatile uint32_t x3310 = UINT32_MAX;
	uint64_t x3311 = 29LLU;
	uint32_t x3312 = 12332U;

    t109 = (((x3309!=x3310)>>x3311)/x3312);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x3321 = 0;
	static uint8_t x3322 = 20U;
	static volatile uint8_t x3323 = 1U;
	static uint64_t x3324 = UINT64_MAX;
	volatile uint64_t t110 = 10857375343LLU;

    t110 = (((x3321!=x3322)>>x3323)/x3324);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x3330 = 178789910459LLU;
	uint16_t x3331 = 5U;
	uint64_t x3332 = 562249979608964LLU;
	volatile uint64_t t111 = 29846028503950671LLU;

    t111 = (((x3329!=x3330)>>x3331)/x3332);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x3477 = 130267488762604477LLU;
	volatile int32_t x3478 = 445386;
	int8_t x3480 = INT8_MAX;
	int32_t t112 = -685;

    t112 = (((x3477!=x3478)>>x3479)/x3480);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x3569 = UINT32_MAX;
	int8_t x3570 = INT8_MAX;
	volatile int8_t x3571 = 31;
	static int32_t x3572 = 488103974;
	int32_t t113 = 749577497;

    t113 = (((x3569!=x3570)>>x3571)/x3572);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x3617 = -1;
	uint64_t x3618 = UINT64_MAX;
	int8_t x3619 = 7;
	int64_t x3620 = INT64_MIN;
	static int64_t t114 = 610343639400341081LL;

    t114 = (((x3617!=x3618)>>x3619)/x3620);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x3641 = INT8_MIN;
	int32_t x3643 = 5;
	static volatile int64_t x3644 = INT64_MAX;
	static volatile int64_t t115 = 33927971562441LL;

    t115 = (((x3641!=x3642)>>x3643)/x3644);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x3645 = -1;
	int8_t x3646 = INT8_MIN;
	int8_t x3647 = 0;
	volatile uint32_t x3648 = UINT32_MAX;
	volatile uint32_t t116 = 454225789U;

    t116 = (((x3645!=x3646)>>x3647)/x3648);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x3709 = INT16_MIN;
	volatile uint16_t x3711 = 14U;
	int8_t x3712 = -1;

    t117 = (((x3709!=x3710)>>x3711)/x3712);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x3717 = -1;
	uint16_t x3718 = 0U;
	int32_t x3719 = 3;
	int32_t t118 = -2;

    t118 = (((x3717!=x3718)>>x3719)/x3720);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x3730 = UINT64_MAX;
	int8_t x3731 = 6;

    t119 = (((x3729!=x3730)>>x3731)/x3732);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x3757 = 5888LLU;
	static volatile int8_t x3758 = INT8_MAX;
	int8_t x3759 = 1;
	volatile int64_t t120 = -33037533LL;

    t120 = (((x3757!=x3758)>>x3759)/x3760);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x3773 = 116418405017LL;
	int64_t x3774 = INT64_MIN;
	static volatile uint8_t x3775 = 6U;
	uint8_t x3776 = UINT8_MAX;
	int32_t t121 = 66733588;

    t121 = (((x3773!=x3774)>>x3775)/x3776);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x3798 = 3LL;
	static uint8_t x3799 = 9U;
	volatile int64_t x3800 = 16436LL;

    t122 = (((x3797!=x3798)>>x3799)/x3800);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x3803 = 0U;
	int16_t x3804 = INT16_MIN;
	static volatile int32_t t123 = 796250;

    t123 = (((x3801!=x3802)>>x3803)/x3804);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x3817 = INT16_MIN;
	static uint32_t x3818 = UINT32_MAX;
	int16_t x3820 = INT16_MAX;
	volatile int32_t t124 = 214153;

    t124 = (((x3817!=x3818)>>x3819)/x3820);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x3837 = 124U;
	int64_t x3840 = INT64_MAX;
	static int64_t t125 = 88LL;

    t125 = (((x3837!=x3838)>>x3839)/x3840);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x3865 = -4;
	int8_t x3866 = INT8_MIN;
	uint8_t x3867 = 23U;
	int16_t x3868 = INT16_MIN;
	volatile int32_t t126 = 74857536;

    t126 = (((x3865!=x3866)>>x3867)/x3868);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x3881 = INT64_MIN;
	int16_t x3882 = INT16_MAX;
	volatile int32_t x3884 = INT32_MAX;
	int32_t t127 = -25;

    t127 = (((x3881!=x3882)>>x3883)/x3884);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x3908 = INT32_MAX;
	static int32_t t128 = -833314;

    t128 = (((x3905!=x3906)>>x3907)/x3908);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x3937 = -1LL;
	static int32_t x3938 = INT32_MAX;
	static int64_t x3939 = 1LL;
	int64_t x3940 = INT64_MAX;
	static volatile int64_t t129 = 11LL;

    t129 = (((x3937!=x3938)>>x3939)/x3940);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x3978 = 0U;
	int8_t x3979 = 0;
	int32_t t130 = -2082;

    t130 = (((x3977!=x3978)>>x3979)/x3980);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x4017 = INT32_MAX;
	static uint32_t x4018 = 111293912U;
	uint8_t x4019 = 0U;
	int64_t x4020 = INT64_MIN;
	int64_t t131 = 7942LL;

    t131 = (((x4017!=x4018)>>x4019)/x4020);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x4097 = UINT32_MAX;
	uint32_t x4098 = 25132595U;
	uint32_t x4099 = 0U;
	int32_t t132 = -13899753;

    t132 = (((x4097!=x4098)>>x4099)/x4100);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x4189 = 49U;
	static int8_t x4191 = 1;
	int32_t x4192 = -250;
	volatile int32_t t133 = 184179;

    t133 = (((x4189!=x4190)>>x4191)/x4192);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x4205 = INT32_MIN;
	volatile int32_t x4206 = -109;
	int8_t x4207 = 3;
	uint32_t x4208 = 138605192U;
	uint32_t t134 = 38U;

    t134 = (((x4205!=x4206)>>x4207)/x4208);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x4241 = 10300U;
	uint32_t x4243 = 2U;
	uint64_t x4244 = 7272964967745951LLU;
	uint64_t t135 = 5268429186959228006LLU;

    t135 = (((x4241!=x4242)>>x4243)/x4244);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x4269 = -1LL;
	uint8_t x4271 = 5U;
	volatile int32_t t136 = 424316;

    t136 = (((x4269!=x4270)>>x4271)/x4272);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x4277 = 10274989LL;
	int8_t x4278 = INT8_MAX;
	uint32_t x4280 = 11006U;
	volatile uint32_t t137 = 12265U;

    t137 = (((x4277!=x4278)>>x4279)/x4280);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x4289 = -1;
	uint32_t x4290 = UINT32_MAX;
	uint64_t x4292 = 906065201254208699LLU;
	static uint64_t t138 = 8070214LLU;

    t138 = (((x4289!=x4290)>>x4291)/x4292);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x4318 = INT64_MIN;
	int8_t x4319 = 2;
	uint8_t x4320 = 65U;
	volatile int32_t t139 = 4900;

    t139 = (((x4317!=x4318)>>x4319)/x4320);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x4354 = INT8_MIN;
	static uint8_t x4355 = 1U;
	int16_t x4356 = INT16_MAX;
	int32_t t140 = -17684;

    t140 = (((x4353!=x4354)>>x4355)/x4356);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x4357 = -1252;
	int32_t x4358 = INT32_MAX;
	int8_t x4359 = 13;
	volatile uint64_t x4360 = 5361861LLU;
	static volatile uint64_t t141 = 30563555331915864LLU;

    t141 = (((x4357!=x4358)>>x4359)/x4360);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x4393 = INT64_MIN;
	uint8_t x4395 = 3U;
	uint64_t x4396 = 9115506948663106148LLU;

    t142 = (((x4393!=x4394)>>x4395)/x4396);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x4541 = INT8_MIN;
	int64_t x4542 = 11LL;
	int32_t x4544 = INT32_MAX;
	int32_t t143 = -1;

    t143 = (((x4541!=x4542)>>x4543)/x4544);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x4545 = 297;
	int32_t x4546 = INT32_MAX;
	volatile uint32_t x4547 = 11U;
	static int64_t x4548 = 74008731647LL;
	volatile int64_t t144 = 194554789579456LL;

    t144 = (((x4545!=x4546)>>x4547)/x4548);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x4549 = INT8_MIN;
	static int32_t x4551 = 21;
	int32_t x4552 = -42099114;
	volatile int32_t t145 = 7146;

    t145 = (((x4549!=x4550)>>x4551)/x4552);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x4569 = 506011571U;
	int16_t x4570 = -255;
	volatile uint32_t x4571 = 2U;
	int8_t x4572 = INT8_MIN;

    t146 = (((x4569!=x4570)>>x4571)/x4572);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x4585 = -1;
	int16_t x4586 = -1;
	int32_t x4588 = -818495193;

    t147 = (((x4585!=x4586)>>x4587)/x4588);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x4593 = 42U;
	uint8_t x4594 = 15U;
	int16_t x4596 = -1;
	int32_t t148 = 231282;

    t148 = (((x4593!=x4594)>>x4595)/x4596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x4605 = INT32_MIN;
	int64_t x4606 = INT64_MIN;
	int8_t x4607 = 1;
	static int16_t x4608 = INT16_MAX;
	volatile int32_t t149 = 6421150;

    t149 = (((x4605!=x4606)>>x4607)/x4608);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x4625 = INT64_MIN;
	static int16_t x4627 = 3;
	volatile int64_t x4628 = -1LL;
	volatile int64_t t150 = 1LL;

    t150 = (((x4625!=x4626)>>x4627)/x4628);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x4645 = INT32_MIN;
	static int16_t x4648 = 1;

    t151 = (((x4645!=x4646)>>x4647)/x4648);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x4677 = -19244437438214402LL;
	uint64_t x4680 = 129825748LLU;
	volatile uint64_t t152 = 4783227581324543LLU;

    t152 = (((x4677!=x4678)>>x4679)/x4680);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x4701 = UINT32_MAX;
	uint16_t x4702 = 0U;
	static volatile uint32_t x4703 = 1U;
	int64_t x4704 = -1LL;

    t153 = (((x4701!=x4702)>>x4703)/x4704);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x4737 = INT16_MIN;
	static int16_t x4739 = 21;
	int8_t x4740 = -57;

    t154 = (((x4737!=x4738)>>x4739)/x4740);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x4769 = -1851;
	uint32_t x4770 = 1206795584U;
	static uint8_t x4771 = 13U;
	int8_t x4772 = INT8_MAX;
	volatile int32_t t155 = 42187;

    t155 = (((x4769!=x4770)>>x4771)/x4772);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x4806 = INT8_MIN;
	static uint16_t x4807 = 6U;
	uint32_t t156 = 14U;

    t156 = (((x4805!=x4806)>>x4807)/x4808);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x4849 = 2099421100868LLU;
	uint8_t x4850 = 1U;
	uint16_t x4851 = 3U;
	volatile int64_t t157 = 1495691395230701LL;

    t157 = (((x4849!=x4850)>>x4851)/x4852);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x4865 = UINT16_MAX;
	volatile int16_t x4866 = 972;
	uint16_t x4867 = 3U;
	volatile int8_t x4868 = INT8_MIN;
	volatile int32_t t158 = -287831;

    t158 = (((x4865!=x4866)>>x4867)/x4868);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x4894 = -1LL;
	uint8_t x4895 = 7U;
	volatile int8_t x4896 = INT8_MIN;
	int32_t t159 = -270984;

    t159 = (((x4893!=x4894)>>x4895)/x4896);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x4969 = 1172666U;
	uint8_t x4970 = 41U;
	uint64_t x4971 = 0LLU;
	int16_t x4972 = -547;
	static volatile int32_t t160 = -31134;

    t160 = (((x4969!=x4970)>>x4971)/x4972);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x4981 = 49LLU;
	static uint32_t x4982 = 144924082U;
	int16_t x4983 = 1;
	uint16_t x4984 = UINT16_MAX;
	volatile int32_t t161 = -1;

    t161 = (((x4981!=x4982)>>x4983)/x4984);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x5001 = 0U;
	volatile int8_t x5002 = INT8_MIN;
	int16_t x5003 = 30;
	static uint16_t x5004 = UINT16_MAX;
	volatile int32_t t162 = 76218;

    t162 = (((x5001!=x5002)>>x5003)/x5004);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x5005 = INT32_MIN;
	int8_t x5006 = 1;
	uint8_t x5007 = 3U;
	static int16_t x5008 = INT16_MAX;
	volatile int32_t t163 = 407059;

    t163 = (((x5005!=x5006)>>x5007)/x5008);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x5025 = UINT64_MAX;
	volatile int16_t x5026 = 6;
	int16_t x5027 = 2;
	static volatile int64_t t164 = 6669141785735LL;

    t164 = (((x5025!=x5026)>>x5027)/x5028);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x5033 = -1;
	volatile int32_t x5034 = INT32_MIN;
	int16_t x5035 = 14;
	uint8_t x5036 = 95U;

    t165 = (((x5033!=x5034)>>x5035)/x5036);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x5057 = INT32_MIN;
	volatile int8_t x5059 = 0;
	int16_t x5060 = INT16_MAX;

    t166 = (((x5057!=x5058)>>x5059)/x5060);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x5065 = -11685194;
	uint16_t x5066 = 1U;
	volatile uint8_t x5067 = 0U;
	volatile int16_t x5068 = INT16_MIN;
	static int32_t t167 = 47395;

    t167 = (((x5065!=x5066)>>x5067)/x5068);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x5145 = INT8_MIN;
	int16_t x5146 = -50;
	static int8_t x5147 = 1;
	volatile uint32_t x5148 = 1443U;
	static volatile uint32_t t168 = 22858429U;

    t168 = (((x5145!=x5146)>>x5147)/x5148);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x5170 = INT8_MIN;
	uint64_t x5172 = 3281248LLU;

    t169 = (((x5169!=x5170)>>x5171)/x5172);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x5173 = UINT8_MAX;
	static uint16_t x5174 = 9U;
	uint8_t x5175 = 5U;
	volatile int64_t t170 = -60LL;

    t170 = (((x5173!=x5174)>>x5175)/x5176);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x5213 = INT32_MIN;
	int64_t x5214 = -1LL;
	static uint32_t x5215 = 16U;
	uint8_t x5216 = 122U;
	volatile int32_t t171 = -4880723;

    t171 = (((x5213!=x5214)>>x5215)/x5216);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x5217 = INT64_MIN;
	int16_t x5218 = INT16_MIN;
	uint8_t x5219 = 31U;
	static uint64_t x5220 = UINT64_MAX;
	volatile uint64_t t172 = 99558434LLU;

    t172 = (((x5217!=x5218)>>x5219)/x5220);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x5261 = 4U;
	uint8_t x5263 = 12U;
	int64_t x5264 = INT64_MIN;
	int64_t t173 = -418311233488512LL;

    t173 = (((x5261!=x5262)>>x5263)/x5264);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x5277 = UINT8_MAX;
	static int32_t x5278 = -1;
	static int8_t x5279 = 1;
	volatile int64_t x5280 = INT64_MAX;
	int64_t t174 = -501LL;

    t174 = (((x5277!=x5278)>>x5279)/x5280);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x5305 = 32487U;
	int32_t x5306 = -343326;
	uint16_t x5307 = 6U;
	uint16_t x5308 = 127U;
	volatile int32_t t175 = 119617741;

    t175 = (((x5305!=x5306)>>x5307)/x5308);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x5329 = UINT8_MAX;
	uint32_t x5330 = 277U;
	volatile int32_t x5331 = 31;
	static uint16_t x5332 = 2U;

    t176 = (((x5329!=x5330)>>x5331)/x5332);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x5385 = -1;
	volatile uint32_t x5386 = 382058U;
	static int32_t t177 = 2;

    t177 = (((x5385!=x5386)>>x5387)/x5388);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x5445 = 3U;
	uint64_t x5446 = 1LLU;
	static uint64_t x5447 = 0LLU;
	uint32_t x5448 = UINT32_MAX;
	static volatile uint32_t t178 = 47U;

    t178 = (((x5445!=x5446)>>x5447)/x5448);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x5458 = INT16_MIN;
	uint32_t x5459 = 13U;
	static volatile uint32_t x5460 = 849201015U;
	static volatile uint32_t t179 = 10U;

    t179 = (((x5457!=x5458)>>x5459)/x5460);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x5485 = 25994405032LLU;
	uint64_t x5486 = 4LLU;
	uint8_t x5487 = 30U;
	int8_t x5488 = -1;

    t180 = (((x5485!=x5486)>>x5487)/x5488);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x5549 = 142U;
	volatile uint16_t x5550 = 21133U;
	uint8_t x5551 = 6U;
	uint16_t x5552 = 1226U;
	volatile int32_t t181 = 2301353;

    t181 = (((x5549!=x5550)>>x5551)/x5552);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x5602 = 414LLU;
	uint8_t x5603 = 10U;
	int32_t x5604 = -215193294;
	static volatile int32_t t182 = 388;

    t182 = (((x5601!=x5602)>>x5603)/x5604);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x5641 = INT32_MIN;
	int16_t x5642 = INT16_MIN;
	uint64_t x5643 = 21LLU;
	int32_t x5644 = -1;
	int32_t t183 = 3;

    t183 = (((x5641!=x5642)>>x5643)/x5644);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x5661 = INT32_MAX;
	volatile uint8_t x5663 = 8U;
	uint64_t x5664 = UINT64_MAX;
	uint64_t t184 = 96332985042LLU;

    t184 = (((x5661!=x5662)>>x5663)/x5664);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x5681 = 672345;
	static int32_t x5682 = INT32_MIN;
	uint8_t x5683 = 2U;
	static int16_t x5684 = INT16_MIN;
	volatile int32_t t185 = 80;

    t185 = (((x5681!=x5682)>>x5683)/x5684);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x5685 = UINT16_MAX;
	int8_t x5687 = 6;
	uint16_t x5688 = UINT16_MAX;
	int32_t t186 = 51;

    t186 = (((x5685!=x5686)>>x5687)/x5688);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x5709 = 566;
	int16_t x5710 = INT16_MIN;
	uint8_t x5711 = 9U;
	int8_t x5712 = INT8_MIN;

    t187 = (((x5709!=x5710)>>x5711)/x5712);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x5730 = INT64_MIN;
	volatile uint16_t x5731 = 27U;
	static uint16_t x5732 = UINT16_MAX;
	volatile int32_t t188 = -1;

    t188 = (((x5729!=x5730)>>x5731)/x5732);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x5762 = UINT8_MAX;
	static uint16_t x5763 = 0U;
	int32_t x5764 = 2569;
	volatile int32_t t189 = 29123782;

    t189 = (((x5761!=x5762)>>x5763)/x5764);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x5809 = -7277337;
	volatile int8_t x5810 = -1;
	volatile int8_t x5811 = 2;
	volatile int32_t x5812 = INT32_MIN;

    t190 = (((x5809!=x5810)>>x5811)/x5812);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x5848 = INT64_MAX;

    t191 = (((x5845!=x5846)>>x5847)/x5848);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x5878 = 2049U;
	static int16_t x5879 = 1;
	uint32_t x5880 = UINT32_MAX;
	uint32_t t192 = 142854555U;

    t192 = (((x5877!=x5878)>>x5879)/x5880);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x5905 = -1;
	int32_t x5906 = 172;
	int16_t x5907 = 9;
	int16_t x5908 = INT16_MIN;
	static int32_t t193 = -63604614;

    t193 = (((x5905!=x5906)>>x5907)/x5908);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x5929 = 41U;
	int64_t x5930 = INT64_MIN;
	int8_t x5931 = 1;
	int8_t x5932 = 38;
	int32_t t194 = -1123627;

    t194 = (((x5929!=x5930)>>x5931)/x5932);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x5937 = -1;
	uint64_t x5938 = 3007182586440LLU;
	static volatile uint8_t x5940 = UINT8_MAX;
	static volatile int32_t t195 = 44592131;

    t195 = (((x5937!=x5938)>>x5939)/x5940);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x5969 = 3;
	volatile uint32_t x5972 = 5658858U;

    t196 = (((x5969!=x5970)>>x5971)/x5972);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x5981 = -1;
	int32_t x5982 = 1001;
	int32_t x5983 = 0;
	volatile int16_t x5984 = -62;

    t197 = (((x5981!=x5982)>>x5983)/x5984);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x6005 = INT16_MIN;
	int16_t x6006 = 5034;
	uint64_t x6007 = 3LLU;
	volatile int32_t t198 = 1;

    t198 = (((x6005!=x6006)>>x6007)/x6008);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x6017 = 14U;
	volatile uint16_t x6018 = UINT16_MAX;
	static int64_t x6019 = 1LL;
	int8_t x6020 = 1;

    t199 = (((x6017!=x6018)>>x6019)/x6020);

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

