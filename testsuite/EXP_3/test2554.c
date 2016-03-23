
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

static int8_t x26 = -7;
static int16_t x28 = INT16_MIN;
volatile int32_t t0 = -332;
int16_t x81 = -1;
volatile uint64_t x82 = UINT64_MAX;
uint16_t x84 = UINT16_MAX;
volatile uint64_t t1 = 373LLU;
static uint64_t x178 = 1LLU;
uint64_t t4 = 834659117748LLU;
int64_t x317 = -1LL;
static uint8_t x320 = 1U;
static uint16_t x494 = 223U;
uint64_t x536 = UINT64_MAX;
uint64_t x543 = UINT64_MAX;
int64_t t8 = INT64_MAX;
static uint8_t x667 = 1U;
static uint64_t t9 = 278059751211164146LLU;
int32_t x669 = INT32_MIN;
static uint32_t x671 = UINT32_MAX;
uint32_t x745 = 1333U;
int16_t x747 = -1;
int64_t x971 = 1LL;
int32_t x1128 = 0;
uint8_t x1339 = 0U;
volatile int64_t x1456 = INT64_MIN;
int64_t t18 = -157441503790802LL;
static int8_t x1742 = 1;
uint64_t x1841 = UINT64_MAX;
uint64_t t23 = UINT64_MAX;
static volatile int16_t x1883 = -1;
volatile uint64_t x1884 = UINT64_MAX;
uint64_t x2093 = 60755885131358LLU;
static int64_t x2094 = INT64_MIN;
uint64_t t26 = 11380426LLU;
int16_t x2149 = 1;
volatile int8_t x2151 = -1;
volatile int32_t t28 = -59;
uint32_t x2562 = UINT32_MAX;
int16_t x2564 = -1;
uint64_t x2609 = 470874114174840LLU;
static int8_t x2610 = INT8_MAX;
int64_t x2857 = -119LL;
int64_t x2858 = INT64_MAX;
int32_t x3436 = INT32_MAX;
uint64_t t37 = 1650267855LLU;
volatile uint64_t t38 = 235876LLU;
volatile int64_t x3925 = -1LL;
volatile int8_t x4114 = -21;
static int64_t x4116 = INT64_MIN;
volatile int32_t t42 = -8756;
int8_t x4140 = -1;
static uint64_t t43 = 3121300514756858411LLU;
static uint8_t x4178 = 3U;
volatile int16_t x4180 = -1;
static int32_t t44 = 35620800;
int64_t x4320 = -1LL;
volatile uint32_t t45 = 21U;
volatile int8_t x4343 = -1;
volatile uint32_t t47 = 79U;
int32_t x4949 = -1;
static uint8_t x4950 = 86U;
uint16_t x5082 = 184U;
int32_t t52 = -122784422;
static volatile uint64_t t53 = 48905LLU;
uint64_t t54 = 1737657111562937734LLU;
int64_t x5482 = INT64_MIN;
uint32_t x5484 = 205U;
int16_t x5504 = -1;
uint64_t x5802 = 4055764473908LLU;
uint64_t x5803 = UINT64_MAX;
volatile int8_t x5815 = -2;
volatile int8_t x5816 = -20;
static int32_t x5817 = 2357144;
static int8_t x5818 = -6;
int64_t x5820 = -1LL;
static uint32_t x6025 = 92762U;
int32_t x6027 = -1;
uint64_t x6889 = 540356997881848LLU;
int8_t x6992 = -6;
volatile int8_t x7230 = 5;
uint8_t x7231 = 5U;
int32_t t66 = 42;
volatile int32_t x7415 = -1;
int64_t x7416 = -1LL;
volatile uint64_t x7538 = 1045709924926901LLU;
int32_t x7730 = INT32_MIN;
volatile int32_t x7813 = -1;
int16_t x7971 = -1;
volatile int32_t t73 = 3780;
uint32_t x8131 = UINT32_MAX;
volatile uint16_t x8189 = UINT16_MAX;
static int16_t x8190 = 13283;
static int32_t t75 = 23465417;
int32_t x8222 = 208488613;
volatile uint16_t x8224 = 16U;
uint32_t x8243 = UINT32_MAX;
int32_t x8460 = INT32_MIN;
uint32_t x8521 = 81976248U;
int32_t x8661 = 101900;
volatile int32_t t81 = 49773539;
int64_t t82 = -120523896506LL;
int64_t x9321 = -1LL;
int16_t x9324 = -32;
volatile int64_t t86 = -182884335094708LL;
static uint64_t x9348 = UINT64_MAX;
uint64_t x9384 = UINT64_MAX;
uint64_t t90 = 558LLU;
int32_t x9523 = -1;
static int8_t x9524 = -6;
volatile int8_t x10319 = -1;
volatile uint64_t t96 = 581645840370281275LLU;
static int64_t x10452 = -1LL;
int16_t x10497 = INT16_MAX;
static uint32_t x10534 = UINT32_MAX;
int64_t x10606 = INT64_MAX;
uint64_t x10933 = UINT64_MAX;
uint32_t x10934 = 32367675U;
volatile int16_t x10936 = -1;
int32_t x11032 = INT32_MIN;
static uint64_t x11246 = 861581317310558LLU;
volatile uint64_t x11258 = 3528211065LLU;
static int16_t x11403 = -1;
uint16_t x11445 = UINT16_MAX;
int8_t x11448 = INT8_MIN;
int32_t t109 = -380;
uint32_t x11641 = UINT32_MAX;
uint16_t x11740 = UINT16_MAX;
int64_t x11781 = INT64_MAX;
int32_t x11782 = INT32_MIN;
volatile int16_t x11783 = -1;
int32_t x11827 = -1;
int16_t x11993 = INT16_MAX;
volatile uint64_t x11994 = 125679013694LLU;
uint16_t x12189 = 45U;
static int16_t x12191 = -1;
uint32_t x12192 = UINT32_MAX;
int64_t x12514 = INT64_MIN;
static int8_t x12518 = INT8_MAX;
static uint8_t x12520 = 22U;
int16_t x12828 = -10;
int8_t x12985 = INT8_MIN;
static int32_t x12988 = -1;
uint8_t x13213 = 5U;
int32_t x13347 = -1;
uint32_t x13539 = UINT32_MAX;
static uint16_t x13615 = 6U;
volatile uint64_t t128 = 320178LLU;
int32_t t129 = -60733;
uint32_t t130 = 10U;
int64_t x13692 = -1LL;
uint64_t x14029 = 51653083841732586LLU;
static volatile uint8_t x14032 = 13U;
volatile uint8_t x14192 = 72U;
int64_t t135 = 1062LL;
uint8_t x14310 = 97U;
volatile int8_t x14312 = -1;
int32_t t137 = -238814;
int32_t t139 = 127954;
uint8_t x14506 = UINT8_MAX;
static int32_t t140 = 1;


void f0(void) {
    	static volatile int16_t x25 = 55;
	int16_t x27 = INT16_MIN;

    t0 = ((x25+x26)<<(x27^x28));

    if (t0 != 48) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x83 = UINT16_MAX;

    t1 = ((x81+x82)<<(x83^x84));

    if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x177 = UINT64_MAX;
	uint32_t x179 = UINT32_MAX;
	volatile int16_t x180 = -1;
	static volatile uint64_t t2 = 14405011132LLU;

    t2 = ((x177+x178)<<(x179^x180));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x205 = 122;
	static int8_t x206 = 33;
	static uint16_t x207 = 0U;
	uint8_t x208 = 0U;
	int32_t t3 = -32930652;

    t3 = ((x205+x206)<<(x207^x208));

    if (t3 != 155) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x293 = 180406LLU;
	int8_t x294 = 5;
	uint8_t x295 = 57U;
	static volatile int8_t x296 = 1;

    t4 = ((x293+x294)<<(x295^x296));

    if (t4 != 13474770085092524032LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x318 = 32891027LLU;
	volatile uint8_t x319 = 51U;
	volatile uint64_t t5 = 225804204336LLU;

    t5 = ((x317+x318)<<(x319^x320));

    if (t5 != 9387753423253798912LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x493 = -1;
	int64_t x495 = -1LL;
	int8_t x496 = -1;
	volatile int32_t t6 = 26945;

    t6 = ((x493+x494)<<(x495^x496));

    if (t6 != 222) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x533 = INT8_MIN;
	uint32_t x534 = 18635U;
	volatile int16_t x535 = -1;
	uint32_t t7 = 55295U;

    t7 = ((x533+x534)<<(x535^x536));

    if (t7 != 18507U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x541 = 0U;
	static int64_t x542 = INT64_MAX;
	int16_t x544 = -1;

    t8 = ((x541+x542)<<(x543^x544));

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x665 = 833908936320LLU;
	static volatile int64_t x666 = INT64_MIN;
	int32_t x668 = 1;

    t9 = ((x665+x666)<<(x667^x668));

    if (t9 != 9223372870763712128LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x670 = UINT32_MAX;
	int32_t x672 = -1;
	uint32_t t10 = 79237U;

    t10 = ((x669+x670)<<(x671^x672));

    if (t10 != 2147483647U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x746 = INT8_MIN;
	volatile uint64_t x748 = UINT64_MAX;
	volatile uint32_t t11 = 135773U;

    t11 = ((x745+x746)<<(x747^x748));

    if (t11 != 1205U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x845 = UINT8_MAX;
	int32_t x846 = 32;
	int16_t x847 = -1;
	int64_t x848 = -1LL;
	static volatile int32_t t12 = 0;

    t12 = ((x845+x846)<<(x847^x848));

    if (t12 != 287) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x961 = INT8_MIN;
	uint32_t x962 = UINT32_MAX;
	int8_t x963 = -1;
	int8_t x964 = -2;
	uint32_t t13 = 59U;

    t13 = ((x961+x962)<<(x963^x964));

    if (t13 != 4294967038U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x969 = 1U;
	volatile uint32_t x970 = UINT32_MAX;
	volatile int64_t x972 = 10LL;
	volatile uint32_t t14 = 13U;

    t14 = ((x969+x970)<<(x971^x972));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1125 = INT8_MIN;
	static uint64_t x1126 = 94LLU;
	int32_t x1127 = 1;
	uint64_t t15 = 1896528082222471173LLU;

    t15 = ((x1125+x1126)<<(x1127^x1128));

    if (t15 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1261 = INT8_MIN;
	uint32_t x1262 = UINT32_MAX;
	volatile int64_t x1263 = INT64_MIN;
	static volatile int64_t x1264 = INT64_MIN;
	volatile uint32_t t16 = 107798U;

    t16 = ((x1261+x1262)<<(x1263^x1264));

    if (t16 != 4294967167U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1337 = UINT32_MAX;
	int32_t x1338 = INT32_MAX;
	uint8_t x1340 = 11U;
	uint32_t t17 = 88U;

    t17 = ((x1337+x1338)<<(x1339^x1340));

    if (t17 != 4294963200U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1453 = -1;
	volatile int64_t x1454 = INT64_MAX;
	volatile int64_t x1455 = INT64_MIN;

    t18 = ((x1453+x1454)<<(x1455^x1456));

    if (t18 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1521 = INT16_MIN;
	uint32_t x1522 = UINT32_MAX;
	int8_t x1523 = -1;
	int32_t x1524 = -1;
	volatile uint32_t t19 = 323470U;

    t19 = ((x1521+x1522)<<(x1523^x1524));

    if (t19 != 4294934527U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1561 = 16;
	static int8_t x1562 = -1;
	volatile int32_t x1563 = INT32_MAX;
	int32_t x1564 = INT32_MAX;
	volatile int32_t t20 = 16801159;

    t20 = ((x1561+x1562)<<(x1563^x1564));

    if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x1665 = 540LL;
	static uint64_t x1666 = UINT64_MAX;
	static int64_t x1667 = -1LL;
	volatile int8_t x1668 = -1;
	volatile uint64_t t21 = 451321888LLU;

    t21 = ((x1665+x1666)<<(x1667^x1668));

    if (t21 != 539LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1741 = -1;
	static uint16_t x1743 = UINT16_MAX;
	static uint16_t x1744 = UINT16_MAX;
	static int32_t t22 = 64;

    t22 = ((x1741+x1742)<<(x1743^x1744));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x1842 = 0;
	int64_t x1843 = INT64_MIN;
	static int64_t x1844 = INT64_MIN;

    t23 = ((x1841+x1842)<<(x1843^x1844));

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1881 = INT8_MIN;
	uint32_t x1882 = 52762U;
	volatile uint32_t t24 = 21118U;

    t24 = ((x1881+x1882)<<(x1883^x1884));

    if (t24 != 52634U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1921 = -1;
	int32_t x1922 = INT32_MAX;
	static int32_t x1923 = -1;
	volatile int16_t x1924 = -1;
	volatile int32_t t25 = -27;

    t25 = ((x1921+x1922)<<(x1923^x1924));

    if (t25 != 2147483646) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x2095 = -1;
	int32_t x2096 = -1;

    t26 = ((x2093+x2094)<<(x2095^x2096));

    if (t26 != 9223432792739907166LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x2129 = 9620U;
	static volatile uint32_t x2130 = 9118U;
	volatile int8_t x2131 = -1;
	volatile uint64_t x2132 = UINT64_MAX;
	static uint32_t t27 = 33485U;

    t27 = ((x2129+x2130)<<(x2131^x2132));

    if (t27 != 18738U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x2150 = UINT8_MAX;
	static int32_t x2152 = -1;

    t28 = ((x2149+x2150)<<(x2151^x2152));

    if (t28 != 256) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x2237 = 0U;
	uint8_t x2238 = UINT8_MAX;
	int64_t x2239 = INT64_MIN;
	int64_t x2240 = INT64_MIN;
	volatile int32_t t29 = 456;

    t29 = ((x2237+x2238)<<(x2239^x2240));

    if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x2561 = UINT16_MAX;
	static int64_t x2563 = -1LL;
	volatile uint32_t t30 = 3695368U;

    t30 = ((x2561+x2562)<<(x2563^x2564));

    if (t30 != 65534U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x2611 = -1;
	static int32_t x2612 = -1;
	volatile uint64_t t31 = 311127683LLU;

    t31 = ((x2609+x2610)<<(x2611^x2612));

    if (t31 != 470874114174967LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x2657 = 2;
	uint32_t x2658 = 123739865U;
	int32_t x2659 = INT32_MAX;
	static int32_t x2660 = INT32_MAX;
	volatile uint32_t t32 = 17U;

    t32 = ((x2657+x2658)<<(x2659^x2660));

    if (t32 != 123739867U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x2859 = INT32_MIN;
	int32_t x2860 = INT32_MIN;
	static volatile int64_t t33 = -8LL;

    t33 = ((x2857+x2858)<<(x2859^x2860));

    if (t33 != 9223372036854775688LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2921 = -612;
	uint32_t x2922 = 486U;
	volatile uint8_t x2923 = 1U;
	uint16_t x2924 = 9U;
	uint32_t t34 = 231U;

    t34 = ((x2921+x2922)<<(x2923^x2924));

    if (t34 != 4294935040U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x3133 = UINT64_MAX;
	uint64_t x3134 = 14386983435628LLU;
	static volatile uint32_t x3135 = UINT32_MAX;
	int16_t x3136 = -1;
	uint64_t t35 = 11113920726LLU;

    t35 = ((x3133+x3134)<<(x3135^x3136));

    if (t35 != 14386983435627LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x3425 = -1;
	uint64_t x3426 = 1646604068993051939LLU;
	static volatile uint8_t x3427 = 0U;
	uint32_t x3428 = 2U;
	volatile uint64_t t36 = 1772381181LLU;

    t36 = ((x3425+x3426)<<(x3427^x3428));

    if (t36 != 6586416275972207752LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x3433 = 39564250LLU;
	uint8_t x3434 = 7U;
	int32_t x3435 = INT32_MAX;

    t37 = ((x3433+x3434)<<(x3435^x3436));

    if (t37 != 39564257LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x3533 = 61481362199632LLU;
	volatile int32_t x3534 = 69561724;
	uint32_t x3535 = 1U;
	static uint16_t x3536 = 8U;

    t38 = ((x3533+x3534)<<(x3535^x3536));

    if (t38 != 31478493061814272LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x3565 = INT64_MIN;
	uint64_t x3566 = UINT64_MAX;
	int8_t x3567 = -1;
	int64_t x3568 = -1LL;
	uint64_t t39 = 5278LLU;

    t39 = ((x3565+x3566)<<(x3567^x3568));

    if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x3926 = INT8_MAX;
	int64_t x3927 = INT64_MIN;
	volatile int64_t x3928 = INT64_MIN;
	int64_t t40 = 351LL;

    t40 = ((x3925+x3926)<<(x3927^x3928));

    if (t40 != 126LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x3993 = 88177719U;
	uint8_t x3994 = 31U;
	int32_t x3995 = INT32_MIN;
	int32_t x3996 = INT32_MIN;
	static uint32_t t41 = 28777U;

    t41 = ((x3993+x3994)<<(x3995^x3996));

    if (t41 != 88177750U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x4113 = UINT16_MAX;
	volatile int64_t x4115 = INT64_MIN;

    t42 = ((x4113+x4114)<<(x4115^x4116));

    if (t42 != 65514) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x4137 = 6153LLU;
	volatile int64_t x4138 = 675672524500LL;
	int64_t x4139 = -1LL;

    t43 = ((x4137+x4138)<<(x4139^x4140));

    if (t43 != 675672530653LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x4177 = -1;
	int8_t x4179 = -1;

    t44 = ((x4177+x4178)<<(x4179^x4180));

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x4317 = 34U;
	uint32_t x4318 = 0U;
	int64_t x4319 = -1LL;

    t45 = ((x4317+x4318)<<(x4319^x4320));

    if (t45 != 34U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x4341 = INT16_MIN;
	int64_t x4342 = 55140477256LL;
	static int8_t x4344 = -1;
	static int64_t t46 = -228717581678LL;

    t46 = ((x4341+x4342)<<(x4343^x4344));

    if (t46 != 55140444488LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x4693 = UINT32_MAX;
	int16_t x4694 = -1;
	uint8_t x4695 = 7U;
	uint16_t x4696 = 3U;

    t47 = ((x4693+x4694)<<(x4695^x4696));

    if (t47 != 4294967264U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x4717 = -1;
	volatile int32_t x4718 = INT32_MAX;
	uint32_t x4719 = UINT32_MAX;
	int8_t x4720 = -1;
	int32_t t48 = 0;

    t48 = ((x4717+x4718)<<(x4719^x4720));

    if (t48 != 2147483646) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x4951 = -1;
	int64_t x4952 = -1LL;
	volatile int32_t t49 = -5;

    t49 = ((x4949+x4950)<<(x4951^x4952));

    if (t49 != 85) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x4965 = 1104335LLU;
	int32_t x4966 = -1;
	uint64_t x4967 = UINT64_MAX;
	int64_t x4968 = -1LL;
	uint64_t t50 = 366905757LLU;

    t50 = ((x4965+x4966)<<(x4967^x4968));

    if (t50 != 1104334LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x5005 = -1;
	static int16_t x5006 = 1703;
	volatile int64_t x5007 = -1LL;
	volatile int16_t x5008 = -4;
	volatile int32_t t51 = -4281285;

    t51 = ((x5005+x5006)<<(x5007^x5008));

    if (t51 != 13616) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x5081 = -1;
	volatile int8_t x5083 = -1;
	static uint64_t x5084 = UINT64_MAX;

    t52 = ((x5081+x5082)<<(x5083^x5084));

    if (t52 != 183) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x5245 = UINT64_MAX;
	static uint8_t x5246 = 4U;
	uint8_t x5247 = UINT8_MAX;
	uint16_t x5248 = 215U;

    t53 = ((x5245+x5246)<<(x5247^x5248));

    if (t53 != 3298534883328LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x5453 = 4958870644LLU;
	int64_t x5454 = 19785271027231366LL;
	int8_t x5455 = 13;
	static uint16_t x5456 = 12U;

    t54 = ((x5453+x5454)<<(x5455^x5456));

    if (t54 != 39570551972204020LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x5481 = UINT64_MAX;
	uint8_t x5483 = UINT8_MAX;
	uint64_t t55 = 142790LLU;

    t55 = ((x5481+x5482)<<(x5483^x5484));

    if (t55 != 18445618173802708992LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x5501 = 1U;
	volatile int8_t x5502 = INT8_MAX;
	int16_t x5503 = -1;
	static volatile int32_t t56 = -42462181;

    t56 = ((x5501+x5502)<<(x5503^x5504));

    if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x5801 = 215U;
	volatile uint64_t x5804 = UINT64_MAX;
	volatile uint64_t t57 = 672490LLU;

    t57 = ((x5801+x5802)<<(x5803^x5804));

    if (t57 != 4055764474123LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x5813 = 376LLU;
	volatile uint16_t x5814 = UINT16_MAX;
	uint64_t t58 = 75631622737LLU;

    t58 = ((x5813+x5814)<<(x5815^x5816));

    if (t58 != 17278173184LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x5819 = -1;
	int32_t t59 = -2196909;

    t59 = ((x5817+x5818)<<(x5819^x5820));

    if (t59 != 2357138) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x6026 = UINT64_MAX;
	int16_t x6028 = -1;
	volatile uint64_t t60 = 2LLU;

    t60 = ((x6025+x6026)<<(x6027^x6028));

    if (t60 != 92761LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x6417 = INT16_MIN;
	static uint32_t x6418 = UINT32_MAX;
	int16_t x6419 = 0;
	int8_t x6420 = 0;
	static uint32_t t61 = 1188849U;

    t61 = ((x6417+x6418)<<(x6419^x6420));

    if (t61 != 4294934527U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x6797 = 1192746U;
	static volatile uint8_t x6798 = 13U;
	volatile int16_t x6799 = -1;
	static int32_t x6800 = -1;
	uint32_t t62 = 1721504U;

    t62 = ((x6797+x6798)<<(x6799^x6800));

    if (t62 != 1192759U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x6873 = 182318838869256481LLU;
	uint16_t x6874 = UINT16_MAX;
	volatile int32_t x6875 = -1;
	static int16_t x6876 = -1;
	volatile uint64_t t63 = 124995447LLU;

    t63 = ((x6873+x6874)<<(x6875^x6876));

    if (t63 != 182318838869322016LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x6890 = 248;
	volatile int8_t x6891 = INT8_MIN;
	int8_t x6892 = INT8_MIN;
	volatile uint64_t t64 = 11LLU;

    t64 = ((x6889+x6890)<<(x6891^x6892));

    if (t64 != 540356997882096LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x6989 = INT8_MIN;
	uint16_t x6990 = 304U;
	uint32_t x6991 = UINT32_MAX;
	int32_t t65 = -34275;

    t65 = ((x6989+x6990)<<(x6991^x6992));

    if (t65 != 5632) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x7229 = INT8_MAX;
	volatile int64_t x7232 = 0LL;

    t66 = ((x7229+x7230)<<(x7231^x7232));

    if (t66 != 4224) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x7293 = -1;
	int64_t x7294 = 212622LL;
	int64_t x7295 = 1LL;
	int32_t x7296 = 0;
	volatile int64_t t67 = 746LL;

    t67 = ((x7293+x7294)<<(x7295^x7296));

    if (t67 != 425242LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x7413 = UINT8_MAX;
	uint16_t x7414 = 7U;
	int32_t t68 = 22;

    t68 = ((x7413+x7414)<<(x7415^x7416));

    if (t68 != 262) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x7537 = 13553U;
	int32_t x7539 = INT32_MIN;
	static int32_t x7540 = INT32_MIN;
	volatile uint64_t t69 = 97130948LLU;

    t69 = ((x7537+x7538)<<(x7539^x7540));

    if (t69 != 1045709924940454LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x7729 = INT64_MAX;
	static int32_t x7731 = -1;
	uint64_t x7732 = UINT64_MAX;
	volatile int64_t t70 = -1610012563340LL;

    t70 = ((x7729+x7730)<<(x7731^x7732));

    if (t70 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x7749 = UINT8_MAX;
	volatile uint16_t x7750 = 46U;
	static int32_t x7751 = -1;
	int64_t x7752 = -1LL;
	volatile int32_t t71 = 98;

    t71 = ((x7749+x7750)<<(x7751^x7752));

    if (t71 != 301) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x7814 = INT32_MAX;
	static int16_t x7815 = INT16_MIN;
	int16_t x7816 = INT16_MIN;
	volatile int32_t t72 = 13004640;

    t72 = ((x7813+x7814)<<(x7815^x7816));

    if (t72 != 2147483646) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x7969 = 20000;
	volatile uint8_t x7970 = 12U;
	volatile uint64_t x7972 = UINT64_MAX;

    t73 = ((x7969+x7970)<<(x7971^x7972));

    if (t73 != 20012) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x8129 = 9;
	uint32_t x8130 = UINT32_MAX;
	int8_t x8132 = -12;
	volatile uint32_t t74 = 12199U;

    t74 = ((x8129+x8130)<<(x8131^x8132));

    if (t74 != 16384U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x8191 = INT32_MIN;
	volatile int32_t x8192 = INT32_MIN;

    t75 = ((x8189+x8190)<<(x8191^x8192));

    if (t75 != 78818) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x8221 = 35793489LL;
	int16_t x8223 = 4;
	volatile int64_t t76 = 0LL;

    t76 = ((x8221+x8222)<<(x8223^x8224));

    if (t76 != 256148349386752LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x8241 = 132899167U;
	volatile int16_t x8242 = INT16_MAX;
	int8_t x8244 = -1;
	static uint32_t t77 = 66199633U;

    t77 = ((x8241+x8242)<<(x8243^x8244));

    if (t77 != 132931934U) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x8457 = INT16_MAX;
	int8_t x8458 = 11;
	int32_t x8459 = INT32_MIN;
	static volatile int32_t t78 = 883;

    t78 = ((x8457+x8458)<<(x8459^x8460));

    if (t78 != 32778) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x8522 = INT32_MAX;
	static int64_t x8523 = INT64_MIN;
	int64_t x8524 = INT64_MIN;
	uint32_t t79 = 360221067U;

    t79 = ((x8521+x8522)<<(x8523^x8524));

    if (t79 != 2229459895U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x8625 = 101538809156966LL;
	int64_t x8626 = 477111LL;
	volatile int8_t x8627 = -1;
	static int64_t x8628 = -1LL;
	int64_t t80 = -28581559LL;

    t80 = ((x8625+x8626)<<(x8627^x8628));

    if (t80 != 101538809634077LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x8662 = INT8_MIN;
	volatile int16_t x8663 = INT16_MIN;
	static int16_t x8664 = INT16_MIN;

    t81 = ((x8661+x8662)<<(x8663^x8664));

    if (t81 != 101772) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x8761 = INT8_MAX;
	int64_t x8762 = 12339472675941LL;
	volatile int8_t x8763 = INT8_MIN;
	int8_t x8764 = INT8_MIN;

    t82 = ((x8761+x8762)<<(x8763^x8764));

    if (t82 != 12339472676068LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x8841 = 0U;
	static volatile uint32_t x8842 = 16187311U;
	volatile int16_t x8843 = -1;
	int64_t x8844 = -1LL;
	volatile uint32_t t83 = 362U;

    t83 = ((x8841+x8842)<<(x8843^x8844));

    if (t83 != 16187311U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x8853 = 16U;
	uint16_t x8854 = 1U;
	volatile int8_t x8855 = INT8_MIN;
	static int8_t x8856 = INT8_MIN;
	uint32_t t84 = 47881U;

    t84 = ((x8853+x8854)<<(x8855^x8856));

    if (t84 != 17U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x9229 = UINT32_MAX;
	uint64_t x9230 = 910859439084171LLU;
	volatile int16_t x9231 = -1;
	uint32_t x9232 = UINT32_MAX;
	static uint64_t t85 = 77776320LLU;

    t85 = ((x9229+x9230)<<(x9231^x9232));

    if (t85 != 910863734051466LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x9322 = 143615041LL;
	static int8_t x9323 = -4;

    t86 = ((x9321+x9322)<<(x9323^x9324));

    if (t86 != 38551368750858240LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x9325 = -1;
	int8_t x9326 = INT8_MAX;
	int8_t x9327 = -15;
	int64_t x9328 = -1LL;
	int32_t t87 = -26987;

    t87 = ((x9325+x9326)<<(x9327^x9328));

    if (t87 != 2064384) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x9345 = INT64_MAX;
	static int16_t x9346 = INT16_MIN;
	static volatile int8_t x9347 = -1;
	int64_t t88 = -176131827036LL;

    t88 = ((x9345+x9346)<<(x9347^x9348));

    if (t88 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x9381 = INT32_MIN;
	static volatile uint32_t x9382 = 110U;
	static int8_t x9383 = -18;
	static volatile uint32_t t89 = 19U;

    t89 = ((x9381+x9382)<<(x9383^x9384));

    if (t89 != 14417920U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x9517 = UINT64_MAX;
	int64_t x9518 = INT64_MAX;
	int8_t x9519 = -1;
	int16_t x9520 = -1;

    t90 = ((x9517+x9518)<<(x9519^x9520));

    if (t90 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x9521 = UINT16_MAX;
	int8_t x9522 = -1;
	int32_t t91 = -302;

    t91 = ((x9521+x9522)<<(x9523^x9524));

    if (t91 != 2097088) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x9661 = INT8_MIN;
	static uint64_t x9662 = 816860LLU;
	volatile int32_t x9663 = INT32_MIN;
	static int32_t x9664 = INT32_MIN;
	volatile uint64_t t92 = 618560625737722938LLU;

    t92 = ((x9661+x9662)<<(x9663^x9664));

    if (t92 != 816732LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x9881 = 3U;
	int16_t x9882 = -1;
	int16_t x9883 = -30;
	int8_t x9884 = -1;
	volatile int32_t t93 = -1;

    t93 = ((x9881+x9882)<<(x9883^x9884));

    if (t93 != 1073741824) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x9953 = INT8_MAX;
	uint8_t x9954 = 1U;
	int32_t x9955 = INT32_MIN;
	static int32_t x9956 = INT32_MIN;
	int32_t t94 = 36;

    t94 = ((x9953+x9954)<<(x9955^x9956));

    if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x10241 = UINT8_MAX;
	uint8_t x10242 = UINT8_MAX;
	int8_t x10243 = -1;
	uint64_t x10244 = UINT64_MAX;
	volatile int32_t t95 = 21753456;

    t95 = ((x10241+x10242)<<(x10243^x10244));

    if (t95 != 510) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x10317 = 109826719LLU;
	static int16_t x10318 = INT16_MIN;
	static int64_t x10320 = -1LL;

    t96 = ((x10317+x10318)<<(x10319^x10320));

    if (t96 != 109793951LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x10437 = INT8_MAX;
	static volatile int16_t x10438 = -1;
	int8_t x10439 = INT8_MIN;
	int8_t x10440 = INT8_MIN;
	int32_t t97 = -3859212;

    t97 = ((x10437+x10438)<<(x10439^x10440));

    if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x10449 = 37;
	int64_t x10450 = 7356LL;
	int8_t x10451 = -5;
	volatile int64_t t98 = -2LL;

    t98 = ((x10449+x10450)<<(x10451^x10452));

    if (t98 != 118288LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x10498 = INT8_MAX;
	int64_t x10499 = -1LL;
	volatile int16_t x10500 = -1;
	volatile int32_t t99 = 427643542;

    t99 = ((x10497+x10498)<<(x10499^x10500));

    if (t99 != 32894) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x10533 = UINT16_MAX;
	volatile int32_t x10535 = INT32_MAX;
	volatile int32_t x10536 = INT32_MAX;
	volatile uint32_t t100 = 429U;

    t100 = ((x10533+x10534)<<(x10535^x10536));

    if (t100 != 65534U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x10545 = 18;
	volatile uint64_t x10546 = 31719475266LLU;
	uint16_t x10547 = 0U;
	static uint8_t x10548 = 31U;
	uint64_t t101 = 17507260100692LLU;

    t101 = ((x10545+x10546)<<(x10547^x10548));

    if (t101 != 12776822274401501184LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x10605 = -1;
	volatile uint8_t x10607 = 1U;
	int32_t x10608 = 1;
	int64_t t102 = -4183341137865097LL;

    t102 = ((x10605+x10606)<<(x10607^x10608));

    if (t102 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x10935 = -10;
	uint64_t t103 = 41354LLU;

    t103 = ((x10933+x10934)<<(x10935^x10936));

    if (t103 != 16572249088LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x11029 = 6U;
	int8_t x11030 = -1;
	int32_t x11031 = INT32_MIN;
	volatile int32_t t104 = -1927135;

    t104 = ((x11029+x11030)<<(x11031^x11032));

    if (t104 != 5) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x11245 = INT8_MIN;
	uint16_t x11247 = 79U;
	static uint8_t x11248 = 108U;
	volatile uint64_t t105 = 248621092751LLU;

    t105 = ((x11245+x11246)<<(x11247^x11248));

    if (t105 != 4821172601613189120LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x11257 = 464432U;
	int8_t x11259 = INT8_MAX;
	uint16_t x11260 = 74U;
	uint64_t t106 = 190LLU;

    t106 = ((x11257+x11258)<<(x11259^x11260));

    if (t106 != 1522216674051227648LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x11365 = 6U;
	static uint32_t x11366 = UINT32_MAX;
	volatile uint16_t x11367 = UINT16_MAX;
	uint16_t x11368 = UINT16_MAX;
	volatile uint32_t t107 = 12254392U;

    t107 = ((x11365+x11366)<<(x11367^x11368));

    if (t107 != 5U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x11401 = -592;
	volatile uint32_t x11402 = UINT32_MAX;
	int32_t x11404 = -1;
	volatile uint32_t t108 = 2321384U;

    t108 = ((x11401+x11402)<<(x11403^x11404));

    if (t108 != 4294966703U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x11446 = 1;
	static int8_t x11447 = INT8_MIN;

    t109 = ((x11445+x11446)<<(x11447^x11448));

    if (t109 != 65536) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x11642 = UINT32_MAX;
	int8_t x11643 = -1;
	volatile int16_t x11644 = -1;
	volatile uint32_t t110 = 0U;

    t110 = ((x11641+x11642)<<(x11643^x11644));

    if (t110 != 4294967294U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x11737 = 1U;
	uint64_t x11738 = UINT64_MAX;
	uint16_t x11739 = UINT16_MAX;
	uint64_t t111 = 18631541641625LLU;

    t111 = ((x11737+x11738)<<(x11739^x11740));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x11784 = -1LL;
	volatile int64_t t112 = -3536448228439247142LL;

    t112 = ((x11781+x11782)<<(x11783^x11784));

    if (t112 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x11797 = UINT32_MAX;
	static int32_t x11798 = INT32_MIN;
	int16_t x11799 = -1;
	volatile int64_t x11800 = -1LL;
	uint32_t t113 = 496U;

    t113 = ((x11797+x11798)<<(x11799^x11800));

    if (t113 != 2147483647U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x11825 = INT16_MAX;
	uint32_t x11826 = UINT32_MAX;
	static volatile int16_t x11828 = -1;
	volatile uint32_t t114 = 101U;

    t114 = ((x11825+x11826)<<(x11827^x11828));

    if (t114 != 32766U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x11841 = -48;
	int8_t x11842 = INT8_MAX;
	int16_t x11843 = -1;
	int32_t x11844 = -1;
	static volatile int32_t t115 = 6804082;

    t115 = ((x11841+x11842)<<(x11843^x11844));

    if (t115 != 79) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x11995 = 1U;
	uint8_t x11996 = 0U;
	uint64_t t116 = 7597LLU;

    t116 = ((x11993+x11994)<<(x11995^x11996));

    if (t116 != 251358092922LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x12190 = UINT32_MAX;
	volatile uint32_t t117 = 173955U;

    t117 = ((x12189+x12190)<<(x12191^x12192));

    if (t117 != 44U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x12513 = UINT64_MAX;
	static int16_t x12515 = 954;
	static uint32_t x12516 = 945U;
	volatile uint64_t t118 = 56LLU;

    t118 = ((x12513+x12514)<<(x12515^x12516));

    if (t118 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x12517 = -1;
	uint16_t x12519 = 0U;
	static volatile int32_t t119 = 3;

    t119 = ((x12517+x12518)<<(x12519^x12520));

    if (t119 != 528482304) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x12809 = INT8_MAX;
	static volatile uint8_t x12810 = UINT8_MAX;
	volatile int32_t x12811 = 2;
	uint64_t x12812 = 2LLU;
	static int32_t t120 = 5620;

    t120 = ((x12809+x12810)<<(x12811^x12812));

    if (t120 != 382) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x12825 = -3;
	volatile uint64_t x12826 = 66815257LLU;
	static volatile int16_t x12827 = -12;
	volatile uint64_t t121 = 43824888377LLU;

    t121 = ((x12825+x12826)<<(x12827^x12828));

    if (t121 != 267261016LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x12937 = UINT64_MAX;
	int64_t x12938 = INT64_MIN;
	uint8_t x12939 = 50U;
	static int8_t x12940 = 0;
	static uint64_t t122 = 137698322190860603LLU;

    t122 = ((x12937+x12938)<<(x12939^x12940));

    if (t122 != 18445618173802708992LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x12986 = UINT16_MAX;
	static volatile uint32_t x12987 = UINT32_MAX;
	volatile int32_t t123 = -1;

    t123 = ((x12985+x12986)<<(x12987^x12988));

    if (t123 != 65407) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x13214 = -2;
	int32_t x13215 = INT32_MAX;
	static int32_t x13216 = INT32_MAX;
	int32_t t124 = -3000183;

    t124 = ((x13213+x13214)<<(x13215^x13216));

    if (t124 != 3) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x13345 = -1LL;
	volatile uint64_t x13346 = 135681235054420822LLU;
	int16_t x13348 = -54;
	volatile uint64_t t125 = 7LLU;

    t125 = ((x13345+x13346)<<(x13347^x13348));

    if (t125 != 7683140964294066176LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x13361 = 187;
	uint8_t x13362 = UINT8_MAX;
	volatile int16_t x13363 = -1;
	int16_t x13364 = -1;
	volatile int32_t t126 = 316331;

    t126 = ((x13361+x13362)<<(x13363^x13364));

    if (t126 != 442) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x13537 = INT64_MAX;
	volatile int32_t x13538 = INT32_MIN;
	int8_t x13540 = -1;
	static volatile int64_t t127 = -4494064LL;

    t127 = ((x13537+x13538)<<(x13539^x13540));

    if (t127 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x13613 = 1513547276626765332LLU;
	int32_t x13614 = -1;
	volatile uint64_t x13616 = 40LLU;

    t128 = ((x13613+x13614)<<(x13615^x13616));

    if (t128 != 5297570167927078912LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x13641 = 974;
	static int8_t x13642 = INT8_MIN;
	int16_t x13643 = -1;
	int64_t x13644 = -1LL;

    t129 = ((x13641+x13642)<<(x13643^x13644));

    if (t129 != 846) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x13665 = INT8_MAX;
	uint32_t x13666 = UINT32_MAX;
	static volatile int16_t x13667 = -1;
	int8_t x13668 = -1;

    t130 = ((x13665+x13666)<<(x13667^x13668));

    if (t130 != 126U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x13689 = -1LL;
	uint32_t x13690 = 29U;
	int8_t x13691 = -1;
	volatile int64_t t131 = -850930201185026377LL;

    t131 = ((x13689+x13690)<<(x13691^x13692));

    if (t131 != 28LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x13905 = INT8_MIN;
	static uint8_t x13906 = UINT8_MAX;
	uint64_t x13907 = UINT64_MAX;
	static uint64_t x13908 = UINT64_MAX;
	static int32_t t132 = 876;

    t132 = ((x13905+x13906)<<(x13907^x13908));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x14030 = 2846130;
	int8_t x14031 = 2;
	volatile uint64_t t133 = 370198663LLU;

    t133 = ((x14029+x14030)<<(x14031^x14032));

    if (t133 != 13914540711586168832LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x14189 = 601;
	volatile int16_t x14190 = -1;
	volatile int32_t x14191 = 66;
	volatile int32_t t134 = -583962;

    t134 = ((x14189+x14190)<<(x14191^x14192));

    if (t134 != 614400) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x14213 = 761860U;
	int64_t x14214 = 47595740961746LL;
	volatile int32_t x14215 = -1;
	uint32_t x14216 = UINT32_MAX;

    t135 = ((x14213+x14214)<<(x14215^x14216));

    if (t135 != 47595741723606LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x14309 = 39U;
	volatile int64_t x14311 = -1LL;
	int32_t t136 = -6082036;

    t136 = ((x14309+x14310)<<(x14311^x14312));

    if (t136 != 136) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x14341 = 4855U;
	int8_t x14342 = INT8_MAX;
	int64_t x14343 = -1LL;
	int8_t x14344 = -14;

    t137 = ((x14341+x14342)<<(x14343^x14344));

    if (t137 != 40812544) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x14425 = 1U;
	uint32_t x14426 = UINT32_MAX;
	int8_t x14427 = 12;
	int8_t x14428 = 0;
	static volatile uint32_t t138 = 78374U;

    t138 = ((x14425+x14426)<<(x14427^x14428));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x14429 = INT16_MIN;
	uint16_t x14430 = UINT16_MAX;
	int8_t x14431 = INT8_MIN;
	int8_t x14432 = INT8_MIN;

    t139 = ((x14429+x14430)<<(x14431^x14432));

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x14505 = 29U;
	uint32_t x14507 = UINT32_MAX;
	int8_t x14508 = -1;

    t140 = ((x14505+x14506)<<(x14507^x14508));

    if (t140 != 284) { NG(); } else { ; }
	
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


    return 0;
}

