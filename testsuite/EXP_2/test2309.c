
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

int64_t x43 = INT64_MIN;
int64_t x44 = INT64_MIN;
uint8_t x69 = 3U;
int32_t t1 = 320111680;
uint16_t x85 = 11U;
uint32_t x88 = UINT32_MAX;
static uint32_t t2 = UINT32_MAX;
int8_t x106 = 1;
static int64_t x114 = -179181305046960293LL;
volatile int8_t x128 = -1;
uint16_t x148 = 50U;
int16_t x231 = -1;
static volatile int16_t x234 = 1;
uint32_t x235 = 208523U;
int64_t x358 = INT64_MIN;
uint8_t x359 = 1U;
volatile int32_t t14 = -6871;
uint8_t x410 = 118U;
uint8_t x421 = UINT8_MAX;
int32_t x453 = 5;
volatile int32_t t18 = 152375209;
static int32_t x463 = INT32_MAX;
uint64_t x506 = 10LLU;
volatile int32_t x509 = 8010;
int32_t t22 = -1072835;
volatile int64_t x516 = -1LL;
int32_t x536 = 304871;
uint16_t x543 = 3U;
int32_t t26 = -542536;
volatile int64_t t28 = 174895820679LL;
static volatile int8_t x594 = INT8_MIN;
volatile int64_t t30 = INT64_MAX;
int8_t x624 = INT8_MAX;
uint16_t x694 = 15662U;
uint64_t t34 = 52LLU;
static int64_t t35 = -17043733910227LL;
uint8_t x737 = 13U;
int8_t x764 = INT8_MIN;
int32_t t37 = 1;
static uint8_t x810 = 5U;
uint32_t x811 = 1U;
int64_t t39 = INT64_MAX;
volatile uint16_t x839 = UINT16_MAX;
uint8_t x840 = 14U;
volatile int32_t x844 = INT32_MAX;
volatile int32_t x892 = -1;
int32_t x957 = 23916609;
int8_t x958 = 1;
static uint8_t x969 = 5U;
uint64_t t48 = 8248877LLU;
int8_t x1038 = 11;
int8_t x1094 = 5;
volatile uint8_t x1121 = 2U;
int8_t x1123 = INT8_MIN;
int32_t x1158 = INT32_MIN;
uint16_t x1160 = 194U;
static volatile int32_t x1176 = INT32_MIN;
uint64_t x1223 = 1706LLU;
uint16_t x1287 = UINT16_MAX;
volatile int32_t t60 = 4185;
volatile int32_t x1317 = 3465;
uint16_t x1341 = 678U;
int8_t x1348 = 0;
uint32_t t65 = 20U;
uint16_t x1357 = 3665U;
int32_t x1378 = INT32_MIN;
int64_t t68 = 38685137202171869LL;
uint64_t x1405 = 2786LLU;
static int32_t x1408 = -1;
volatile uint64_t t69 = UINT64_MAX;
volatile uint16_t x1415 = 16U;
int32_t t72 = 856052707;
uint8_t x1463 = 0U;
uint64_t x1464 = UINT64_MAX;
volatile uint32_t t77 = 63984631U;
static uint8_t x1509 = UINT8_MAX;
int64_t x1511 = INT64_MIN;
uint32_t x1512 = 63927U;
volatile uint32_t t78 = 14022056U;
static uint32_t x1518 = 6186315U;
uint8_t x1519 = 0U;
int8_t x1533 = 2;
volatile int32_t t81 = -222283068;
static int64_t x1548 = 16592550LL;
static volatile int8_t x1588 = -20;
static volatile int32_t t84 = -1125;
uint16_t x1605 = 5121U;
int32_t t86 = 188;
int32_t x1771 = INT32_MIN;
int32_t x1772 = -76;
int32_t t87 = 6;
uint16_t x1806 = 5U;
uint8_t x1821 = UINT8_MAX;
static volatile uint32_t x1824 = 23914U;
int8_t x1832 = -1;
uint8_t x1881 = 2U;
uint64_t t95 = 17615949764339450LLU;
int64_t x2006 = INT64_MIN;
volatile int16_t x2007 = INT16_MAX;
uint64_t x2052 = 80LLU;
volatile uint64_t x2077 = UINT64_MAX;
volatile int16_t x2078 = INT16_MIN;
static int8_t x2079 = 1;
volatile int8_t x2080 = INT8_MIN;
int32_t x2088 = INT32_MAX;
int32_t t100 = INT32_MAX;
int16_t x2090 = 5;
volatile int8_t x2091 = INT8_MIN;
int8_t x2122 = INT8_MAX;
uint32_t x2151 = 8417501U;
int8_t x2152 = -1;
uint64_t t106 = UINT64_MAX;
volatile int8_t x2155 = INT8_MAX;
int32_t x2169 = 228920;
int32_t x2171 = INT32_MIN;
int32_t t109 = 1015;
uint8_t x2174 = 11U;
static int64_t x2188 = -1LL;
uint64_t x2196 = UINT64_MAX;
static uint64_t t113 = UINT64_MAX;
int32_t x2214 = 5958;
static volatile uint32_t x2247 = 30U;
volatile uint32_t x2250 = 44U;
volatile uint64_t t118 = UINT64_MAX;
static uint32_t x2349 = 31375U;
int8_t x2351 = INT8_MIN;
uint8_t x2357 = 4U;
int8_t x2359 = INT8_MAX;
uint32_t t120 = UINT32_MAX;
volatile int32_t x2366 = 481879731;
volatile int32_t t121 = INT32_MAX;
volatile uint64_t t122 = 52569250LLU;
int8_t x2414 = -51;
uint8_t x2455 = 65U;
static volatile int32_t t127 = -79467;
volatile uint64_t t128 = UINT64_MAX;
uint64_t x2485 = UINT64_MAX;
static volatile int64_t t131 = 1871685795LL;
volatile int32_t x2581 = 201765620;
volatile int64_t x2583 = 4LL;
int16_t x2605 = INT16_MAX;
volatile int64_t t133 = 62LL;
volatile uint16_t x2625 = 2080U;
volatile uint8_t x2627 = 7U;
uint32_t x2628 = 728855U;
uint16_t x2678 = 109U;
uint32_t x2680 = 52170U;
static int64_t x2819 = 9236420LL;
uint32_t x2836 = 7U;
int64_t t140 = -23398LL;
static int64_t x2918 = 6083409243LL;
int16_t x2920 = -1;
volatile uint64_t x2933 = 79413692279022LLU;
int32_t t144 = -279510877;
int8_t x2951 = -1;
volatile uint32_t t145 = UINT32_MAX;
static volatile int16_t x2969 = INT16_MAX;
uint16_t x2971 = 0U;
int16_t x2972 = 2;
uint64_t x2987 = 72LLU;
uint64_t x2999 = UINT64_MAX;
static uint8_t x3001 = UINT8_MAX;
static uint8_t x3034 = 0U;
int64_t x3036 = -1LL;
volatile int64_t x3108 = -1LL;
volatile uint8_t x3121 = 52U;
uint64_t x3122 = 0LLU;
static uint8_t x3123 = 2U;
uint64_t x3124 = 550603796134LLU;
volatile uint64_t t156 = 615548371LLU;
volatile int64_t x3164 = INT64_MIN;
int64_t t157 = -753340273LL;
int64_t x3212 = INT64_MAX;
uint32_t x3221 = 58U;
int8_t x3223 = INT8_MAX;
volatile uint32_t t160 = 470774U;
uint8_t x3227 = 1U;
int64_t x3238 = INT64_MIN;
uint32_t x3240 = 14797042U;
uint16_t x3242 = 2886U;
int16_t x3243 = 0;
int16_t x3244 = -1;
volatile int64_t t163 = -178506LL;
uint8_t x3250 = 1U;
int8_t x3251 = -1;
int64_t x3254 = INT64_MIN;
volatile int32_t t165 = -126827;
int64_t x3260 = -13735LL;
uint16_t x3271 = 17U;
int8_t x3272 = -1;
static uint32_t t167 = UINT32_MAX;
uint16_t x3285 = 1156U;
volatile uint64_t x3355 = UINT64_MAX;
static int16_t x3356 = -33;
uint64_t x3433 = 12459LLU;
int64_t x3503 = -1LL;
static int8_t x3550 = INT8_MAX;
int8_t x3552 = -2;
uint64_t x3556 = UINT64_MAX;
static uint16_t x3557 = 139U;
int64_t x3562 = INT64_MIN;
volatile int16_t x3579 = 30;
int64_t x3595 = 1236684LL;
static volatile uint32_t t180 = 792797U;
uint32_t x3599 = 206U;
uint32_t x3645 = 221743U;
uint16_t x3658 = 10U;
int32_t x3670 = 24;
uint32_t t185 = 175725U;
volatile int64_t t186 = 280277962871826LL;
uint16_t x3702 = 341U;
static volatile int32_t t187 = INT32_MAX;
int16_t x3753 = INT16_MAX;
int32_t x3754 = 10;
static int32_t t190 = 26;
uint16_t x3917 = 5635U;
uint64_t t196 = 1840303463589LLU;
uint64_t x3936 = 13LLU;
uint64_t t198 = 8743316LLU;
int64_t t199 = 947572714LL;


void f0(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	volatile int16_t x42 = 1;
	volatile int64_t t0 = -871LL;

    t0 = ((x41>>(x42&x43))|x44);

    if (t0 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x70 = -26;
	int16_t x71 = 1;
	static uint16_t x72 = UINT16_MAX;

    t1 = ((x69>>(x70&x71))|x72);

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x86 = INT8_MAX;
	volatile int16_t x87 = INT16_MIN;

    t2 = ((x85>>(x86&x87))|x88);

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x93 = INT64_MAX;
	int16_t x94 = 50;
	static uint64_t x95 = 14258918145LLU;
	volatile int16_t x96 = INT16_MIN;
	volatile int64_t t3 = 97157483481749LL;

    t3 = ((x93>>(x94&x95))|x96);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x105 = UINT64_MAX;
	volatile int16_t x107 = -1;
	int64_t x108 = -1LL;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = ((x105>>(x106&x107))|x108);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x113 = 6398668460LLU;
	int8_t x115 = 1;
	volatile int16_t x116 = -1;
	volatile uint64_t t5 = UINT64_MAX;

    t5 = ((x113>>(x114&x115))|x116);

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x125 = 2;
	int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MIN;
	int32_t t6 = -1;

    t6 = ((x125>>(x126&x127))|x128);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x145 = 382718369U;
	static volatile int8_t x146 = 23;
	static volatile int64_t x147 = 2757843328666LL;
	uint32_t t7 = 665U;

    t7 = ((x145>>(x146&x147))|x148);

    if (t7 != 1459U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x157 = 0U;
	int64_t x158 = INT64_MIN;
	volatile int64_t x159 = INT64_MAX;
	int8_t x160 = INT8_MIN;
	volatile int32_t t8 = 5865;

    t8 = ((x157>>(x158&x159))|x160);

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x229 = UINT64_MAX;
	uint8_t x230 = 2U;
	static uint32_t x232 = 197634U;
	uint64_t t9 = 5616572009849863302LLU;

    t9 = ((x229>>(x230&x231))|x232);

    if (t9 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x233 = 2U;
	volatile uint32_t x236 = 0U;
	volatile uint32_t t10 = 40733266U;

    t10 = ((x233>>(x234&x235))|x236);

    if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x273 = 63U;
	uint8_t x274 = 23U;
	static uint64_t x275 = UINT64_MAX;
	static int64_t x276 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

    t11 = ((x273>>(x274&x275))|x276);

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x341 = 1517635U;
	uint8_t x342 = 35U;
	volatile int16_t x343 = INT16_MIN;
	volatile int8_t x344 = INT8_MIN;
	static volatile uint32_t t12 = 1271798441U;

    t12 = ((x341>>(x342&x343))|x344);

    if (t12 != 4294967235U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x345 = 29;
	uint64_t x346 = 133820661490619653LLU;
	volatile uint8_t x347 = UINT8_MAX;
	static uint64_t x348 = UINT64_MAX;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = ((x345>>(x346&x347))|x348);

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x357 = INT8_MAX;
	int8_t x360 = 1;

    t14 = ((x357>>(x358&x359))|x360);

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x377 = 1;
	volatile int64_t x378 = INT64_MIN;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = INT8_MIN;
	volatile int32_t t15 = -341837;

    t15 = ((x377>>(x378&x379))|x380);

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x409 = 49U;
	int16_t x411 = INT16_MIN;
	static uint32_t x412 = UINT32_MAX;
	uint32_t t16 = UINT32_MAX;

    t16 = ((x409>>(x410&x411))|x412);

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x422 = INT64_MIN;
	uint64_t x423 = 417696031LLU;
	uint16_t x424 = 2310U;
	int32_t t17 = 386956;

    t17 = ((x421>>(x422&x423))|x424);

    if (t17 != 2559) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x454 = UINT8_MAX;
	int8_t x455 = 23;
	int32_t x456 = 0;

    t18 = ((x453>>(x454&x455))|x456);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x461 = INT64_MAX;
	int32_t x462 = INT32_MIN;
	int16_t x464 = -1;
	int64_t t19 = 64324304797968LL;

    t19 = ((x461>>(x462&x463))|x464);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x493 = INT64_MAX;
	int64_t x494 = INT64_MIN;
	uint8_t x495 = 2U;
	volatile uint16_t x496 = 1U;
	int64_t t20 = INT64_MAX;

    t20 = ((x493>>(x494&x495))|x496);

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x505 = 2214459404234LLU;
	uint32_t x507 = 14267U;
	int64_t x508 = INT64_MIN;
	volatile uint64_t t21 = 1005984641195796LLU;

    t21 = ((x505>>(x506&x507))|x508);

    if (t21 != 9223372039017333819LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x510 = 5;
	int8_t x511 = INT8_MAX;
	int32_t x512 = -20676;

    t22 = ((x509>>(x510&x511))|x512);

    if (t22 != -20482) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x513 = INT64_MAX;
	static int64_t x514 = INT64_MIN;
	volatile int64_t x515 = INT64_MAX;
	volatile int64_t t23 = 919LL;

    t23 = ((x513>>(x514&x515))|x516);

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x521 = 13605148393058LL;
	int32_t x522 = INT32_MIN;
	int16_t x523 = 1;
	uint16_t x524 = UINT16_MAX;
	int64_t t24 = 123658206698886LL;

    t24 = ((x521>>(x522&x523))|x524);

    if (t24 != 13605148426239LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x533 = 657918190599LLU;
	volatile int16_t x534 = INT16_MIN;
	volatile uint16_t x535 = 96U;
	uint64_t t25 = 17977558914003LLU;

    t25 = ((x533>>(x534&x535))|x536);

    if (t25 != 657918453479LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x541 = 16U;
	uint16_t x542 = 133U;
	int8_t x544 = -1;

    t26 = ((x541>>(x542&x543))|x544);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x577 = 0;
	static uint16_t x578 = 5U;
	int32_t x579 = -20;
	volatile uint32_t x580 = 4U;
	volatile uint32_t t27 = 391U;

    t27 = ((x577>>(x578&x579))|x580);

    if (t27 != 4U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x589 = INT64_MAX;
	int8_t x590 = INT8_MAX;
	static int8_t x591 = 1;
	volatile int32_t x592 = INT32_MAX;

    t28 = ((x589>>(x590&x591))|x592);

    if (t28 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x593 = 22766424U;
	int8_t x595 = INT8_MAX;
	uint32_t x596 = UINT32_MAX;
	uint32_t t29 = UINT32_MAX;

    t29 = ((x593>>(x594&x595))|x596);

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x609 = INT64_MAX;
	int64_t x610 = INT64_MAX;
	int16_t x611 = 0;
	int64_t x612 = INT64_MAX;

    t30 = ((x609>>(x610&x611))|x612);

    if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x621 = INT64_MAX;
	int32_t x622 = 0;
	static uint16_t x623 = 2149U;
	int64_t t31 = INT64_MAX;

    t31 = ((x621>>(x622&x623))|x624);

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x693 = INT64_MAX;
	volatile int64_t x695 = INT64_MIN;
	static int16_t x696 = -1;
	volatile int64_t t32 = -945947LL;

    t32 = ((x693>>(x694&x695))|x696);

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x717 = INT64_MAX;
	uint32_t x718 = 22U;
	int64_t x719 = INT64_MIN;
	uint64_t x720 = UINT64_MAX;
	volatile uint64_t t33 = UINT64_MAX;

    t33 = ((x717>>(x718&x719))|x720);

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x721 = 566832056064509784LLU;
	int8_t x722 = 15;
	int16_t x723 = -133;
	int32_t x724 = INT32_MIN;

    t34 = ((x721>>(x722&x723))|x724);

    if (t34 != 18446744073039421680LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x725 = 16902204;
	int8_t x726 = INT8_MIN;
	static uint8_t x727 = 0U;
	volatile int64_t x728 = -1LL;

    t35 = ((x725>>(x726&x727))|x728);

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x738 = INT64_MIN;
	uint16_t x739 = 167U;
	uint64_t x740 = UINT64_MAX;
	static volatile uint64_t t36 = UINT64_MAX;

    t36 = ((x737>>(x738&x739))|x740);

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x761 = UINT8_MAX;
	static uint16_t x762 = 13U;
	int32_t x763 = INT32_MIN;

    t37 = ((x761>>(x762&x763))|x764);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x773 = 1702U;
	int64_t x774 = INT64_MIN;
	int32_t x775 = INT32_MAX;
	volatile int8_t x776 = INT8_MIN;
	volatile int32_t t38 = -739419431;

    t38 = ((x773>>(x774&x775))|x776);

    if (t38 != -90) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x809 = 13U;
	int64_t x812 = INT64_MAX;

    t39 = ((x809>>(x810&x811))|x812);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x837 = 333719527;
	int8_t x838 = 15;
	volatile int32_t t40 = -37;

    t40 = ((x837>>(x838&x839))|x840);

    if (t40 != 10190) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x841 = 7020LL;
	int64_t x842 = INT64_MIN;
	uint8_t x843 = 104U;
	int64_t t41 = 2113030746289168LL;

    t41 = ((x841>>(x842&x843))|x844);

    if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x845 = 346LL;
	int16_t x846 = 8405;
	uint64_t x847 = 180136106760LLU;
	static volatile uint8_t x848 = 51U;
	int64_t t42 = 70661414085455LL;

    t42 = ((x845>>(x846&x847))|x848);

    if (t42 != 379LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x881 = 28245033LLU;
	uint64_t x882 = 3LLU;
	uint16_t x883 = 20U;
	static int32_t x884 = -40;
	volatile uint64_t t43 = 1LLU;

    t43 = ((x881>>(x882&x883))|x884);

    if (t43 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x889 = INT8_MAX;
	int64_t x890 = INT64_MAX;
	uint8_t x891 = 11U;
	volatile int32_t t44 = -3704;

    t44 = ((x889>>(x890&x891))|x892);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x959 = 26570875U;
	int16_t x960 = 168;
	int32_t t45 = -36;

    t45 = ((x957>>(x958&x959))|x960);

    if (t45 != 11958440) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x970 = -1;
	int8_t x971 = 0;
	volatile int8_t x972 = INT8_MIN;
	int32_t t46 = -2016614;

    t46 = ((x969>>(x970&x971))|x972);

    if (t46 != -123) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x973 = INT16_MAX;
	int8_t x974 = INT8_MAX;
	uint8_t x975 = 0U;
	int16_t x976 = INT16_MIN;
	int32_t t47 = 26061013;

    t47 = ((x973>>(x974&x975))|x976);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x997 = 2127946630386054LLU;
	int32_t x998 = 0;
	uint64_t x999 = 58147430426097LLU;
	int32_t x1000 = INT32_MIN;

    t48 = ((x997>>(x998&x999))|x1000);

    if (t48 != 18446744072350683526LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x1037 = 509717U;
	uint8_t x1039 = 60U;
	volatile int64_t x1040 = -29715022728LL;
	static int64_t t49 = 5LL;

    t49 = ((x1037>>(x1038&x1039))|x1040);

    if (t49 != -29715021825LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x1057 = UINT8_MAX;
	volatile int16_t x1058 = -204;
	volatile uint32_t x1059 = 5U;
	int32_t x1060 = INT32_MIN;
	volatile int32_t t50 = -1;

    t50 = ((x1057>>(x1058&x1059))|x1060);

    if (t50 != -2147483633) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x1093 = 7;
	volatile int16_t x1095 = INT16_MAX;
	volatile int64_t x1096 = -1LL;
	int64_t t51 = -1415885349LL;

    t51 = ((x1093>>(x1094&x1095))|x1096);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x1113 = 4016;
	int64_t x1114 = 16070295LL;
	static int8_t x1115 = 7;
	uint16_t x1116 = 12112U;
	volatile int32_t t52 = -295577950;

    t52 = ((x1113>>(x1114&x1115))|x1116);

    if (t52 != 12127) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x1122 = 29U;
	static uint8_t x1124 = UINT8_MAX;
	static int32_t t53 = 0;

    t53 = ((x1121>>(x1122&x1123))|x1124);

    if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x1125 = 15242740461778LLU;
	int32_t x1126 = INT32_MIN;
	uint32_t x1127 = 3551169U;
	int64_t x1128 = INT64_MIN;
	uint64_t t54 = 10367LLU;

    t54 = ((x1125>>(x1126&x1127))|x1128);

    if (t54 != 9223387279595237586LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x1157 = INT16_MAX;
	int16_t x1159 = INT16_MAX;
	static int32_t t55 = 51;

    t55 = ((x1157>>(x1158&x1159))|x1160);

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x1173 = 12660127;
	int16_t x1174 = 0;
	int32_t x1175 = INT32_MIN;
	volatile int32_t t56 = -255162;

    t56 = ((x1173>>(x1174&x1175))|x1176);

    if (t56 != -2134823521) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x1205 = 5U;
	int64_t x1206 = INT64_MIN;
	static volatile int32_t x1207 = 23778177;
	int16_t x1208 = INT16_MAX;
	volatile int32_t t57 = 108736;

    t57 = ((x1205>>(x1206&x1207))|x1208);

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x1209 = 27565U;
	int64_t x1210 = INT64_MIN;
	uint8_t x1211 = UINT8_MAX;
	int8_t x1212 = INT8_MAX;
	static volatile int32_t t58 = -208121402;

    t58 = ((x1209>>(x1210&x1211))|x1212);

    if (t58 != 27647) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x1221 = 2282605959866680LLU;
	uint32_t x1222 = 321629U;
	volatile int8_t x1224 = -1;
	uint64_t t59 = UINT64_MAX;

    t59 = ((x1221>>(x1222&x1223))|x1224);

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x1285 = 19U;
	int32_t x1286 = 6;
	int32_t x1288 = -6322;

    t60 = ((x1285>>(x1286&x1287))|x1288);

    if (t60 != -6322) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x1301 = 3372U;
	static int32_t x1302 = INT32_MAX;
	int64_t x1303 = INT64_MIN;
	uint16_t x1304 = 655U;
	volatile uint32_t t61 = 1859224U;

    t61 = ((x1301>>(x1302&x1303))|x1304);

    if (t61 != 4015U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x1305 = 1120U;
	uint8_t x1306 = 4U;
	uint64_t x1307 = UINT64_MAX;
	volatile int64_t x1308 = INT64_MIN;
	static volatile int64_t t62 = 1806876172LL;

    t62 = ((x1305>>(x1306&x1307))|x1308);

    if (t62 != -9223372036854775738LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x1318 = INT8_MAX;
	int8_t x1319 = INT8_MIN;
	int64_t x1320 = 686772703588LL;
	static int64_t t63 = 8151827814133329LL;

    t63 = ((x1317>>(x1318&x1319))|x1320);

    if (t63 != 686772706797LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x1342 = INT8_MAX;
	int32_t x1343 = INT32_MIN;
	static int32_t x1344 = 111;
	static volatile int32_t t64 = -63457155;

    t64 = ((x1341>>(x1342&x1343))|x1344);

    if (t64 != 751) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x1345 = UINT32_MAX;
	static int16_t x1346 = -1;
	volatile uint16_t x1347 = 5U;

    t65 = ((x1345>>(x1346&x1347))|x1348);

    if (t65 != 134217727U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x1358 = 15LLU;
	int32_t x1359 = INT32_MIN;
	int16_t x1360 = 2078;
	int32_t t66 = 97436;

    t66 = ((x1357>>(x1358&x1359))|x1360);

    if (t66 != 3679) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x1377 = INT64_MAX;
	int16_t x1379 = INT16_MAX;
	volatile uint32_t x1380 = 168670857U;
	int64_t t67 = INT64_MAX;

    t67 = ((x1377>>(x1378&x1379))|x1380);

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x1389 = 3701U;
	int64_t x1390 = INT64_MIN;
	int16_t x1391 = 30;
	int64_t x1392 = 29073124346LL;

    t68 = ((x1389>>(x1390&x1391))|x1392);

    if (t68 != 29073125375LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x1406 = 162U;
	volatile int16_t x1407 = INT16_MIN;

    t69 = ((x1405>>(x1406&x1407))|x1408);

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x1409 = INT8_MAX;
	uint16_t x1410 = UINT16_MAX;
	int16_t x1411 = 15;
	volatile int32_t x1412 = INT32_MAX;
	static int32_t t70 = INT32_MAX;

    t70 = ((x1409>>(x1410&x1411))|x1412);

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x1413 = 0;
	int8_t x1414 = INT8_MAX;
	uint64_t x1416 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

    t71 = ((x1413>>(x1414&x1415))|x1416);

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x1425 = 4U;
	int32_t x1426 = INT32_MIN;
	static int16_t x1427 = INT16_MAX;
	uint8_t x1428 = UINT8_MAX;

    t72 = ((x1425>>(x1426&x1427))|x1428);

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x1441 = 82;
	int8_t x1442 = INT8_MAX;
	int16_t x1443 = INT16_MIN;
	uint64_t x1444 = 1328919LLU;
	static volatile uint64_t t73 = 155712422722LLU;

    t73 = ((x1441>>(x1442&x1443))|x1444);

    if (t73 != 1328983LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x1453 = 129LL;
	int64_t x1454 = -1LL;
	uint16_t x1455 = 1U;
	uint8_t x1456 = 1U;
	volatile int64_t t74 = -123LL;

    t74 = ((x1453>>(x1454&x1455))|x1456);

    if (t74 != 65LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x1457 = 147155U;
	int8_t x1458 = 21;
	int64_t x1459 = -1LL;
	int32_t x1460 = 1;
	volatile uint32_t t75 = 2471482U;

    t75 = ((x1457>>(x1458&x1459))|x1460);

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x1461 = 42U;
	volatile uint8_t x1462 = UINT8_MAX;
	volatile uint64_t t76 = UINT64_MAX;

    t76 = ((x1461>>(x1462&x1463))|x1464);

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint32_t x1473 = 80U;
	uint8_t x1474 = 5U;
	int8_t x1475 = 2;
	int32_t x1476 = INT32_MIN;

    t77 = ((x1473>>(x1474&x1475))|x1476);

    if (t77 != 2147483728U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x1510 = 265190220U;

    t78 = ((x1509>>(x1510&x1511))|x1512);

    if (t78 != 63999U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x1513 = 20387U;
	int16_t x1514 = 1;
	static uint16_t x1515 = 646U;
	int32_t x1516 = -34581;
	int32_t t79 = -18;

    t79 = ((x1513>>(x1514&x1515))|x1516);

    if (t79 != -32789) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x1517 = UINT64_MAX;
	static int64_t x1520 = -1LL;
	uint64_t t80 = UINT64_MAX;

    t80 = ((x1517>>(x1518&x1519))|x1520);

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x1534 = 23;
	static int8_t x1535 = -3;
	static int32_t x1536 = -241510517;

    t81 = ((x1533>>(x1534&x1535))|x1536);

    if (t81 != -241510517) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x1545 = 4U;
	volatile int8_t x1546 = -1;
	int8_t x1547 = 0;
	int64_t t82 = 3003341168LL;

    t82 = ((x1545>>(x1546&x1547))|x1548);

    if (t82 != 16592550LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x1561 = 279995849656272975LLU;
	int8_t x1562 = 1;
	static volatile int32_t x1563 = 162742705;
	int16_t x1564 = 9444;
	uint64_t t83 = 1954LLU;

    t83 = ((x1561>>(x1562&x1563))|x1564);

    if (t83 != 139997924828144871LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x1585 = UINT16_MAX;
	int8_t x1586 = -1;
	uint64_t x1587 = 28LLU;

    t84 = ((x1585>>(x1586&x1587))|x1588);

    if (t84 != -20) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x1606 = 12U;
	int64_t x1607 = -7323904974LL;
	uint8_t x1608 = 14U;
	int32_t t85 = 3215908;

    t85 = ((x1605>>(x1606&x1607))|x1608);

    if (t85 != 5135) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x1653 = 102U;
	volatile int32_t x1654 = 4;
	static uint8_t x1655 = 15U;
	static int8_t x1656 = INT8_MAX;

    t86 = ((x1653>>(x1654&x1655))|x1656);

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x1769 = 0U;
	volatile uint32_t x1770 = 921076614U;

    t87 = ((x1769>>(x1770&x1771))|x1772);

    if (t87 != -76) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x1785 = INT64_MAX;
	static volatile int64_t x1786 = INT64_MIN;
	uint8_t x1787 = 72U;
	int64_t x1788 = -1LL;
	volatile int64_t t88 = -7LL;

    t88 = ((x1785>>(x1786&x1787))|x1788);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x1805 = INT16_MAX;
	int64_t x1807 = 171257499131925LL;
	int16_t x1808 = INT16_MAX;
	volatile int32_t t89 = 3863;

    t89 = ((x1805>>(x1806&x1807))|x1808);

    if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x1822 = 3U;
	int16_t x1823 = INT16_MAX;
	uint32_t t90 = 1833969U;

    t90 = ((x1821>>(x1822&x1823))|x1824);

    if (t90 != 23935U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x1829 = 341240483248051320LL;
	int16_t x1830 = -1;
	static uint16_t x1831 = 0U;
	int64_t t91 = 110083LL;

    t91 = ((x1829>>(x1830&x1831))|x1832);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x1845 = 2U;
	static uint16_t x1846 = 37U;
	uint16_t x1847 = 6U;
	static uint8_t x1848 = 106U;
	volatile int32_t t92 = 58;

    t92 = ((x1845>>(x1846&x1847))|x1848);

    if (t92 != 106) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x1873 = INT64_MAX;
	volatile int16_t x1874 = 1;
	uint16_t x1875 = 55U;
	volatile int32_t x1876 = INT32_MAX;
	static int64_t t93 = 3515LL;

    t93 = ((x1873>>(x1874&x1875))|x1876);

    if (t93 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x1882 = INT64_MIN;
	static uint32_t x1883 = UINT32_MAX;
	int16_t x1884 = INT16_MIN;
	int32_t t94 = 29794246;

    t94 = ((x1881>>(x1882&x1883))|x1884);

    if (t94 != -32766) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x1897 = 523323288711352736LLU;
	int64_t x1898 = INT64_MIN;
	uint8_t x1899 = 0U;
	uint64_t x1900 = 5098856948357LLU;

    t95 = ((x1897>>(x1898&x1899))|x1900);

    if (t95 != 523323430605353893LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x2005 = INT16_MAX;
	int8_t x2008 = 0;
	int32_t t96 = -30930212;

    t96 = ((x2005>>(x2006&x2007))|x2008);

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x2049 = INT16_MAX;
	volatile int32_t x2050 = 106;
	int32_t x2051 = INT32_MIN;
	uint64_t t97 = 98LLU;

    t97 = ((x2049>>(x2050&x2051))|x2052);

    if (t97 != 32767LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t t98 = UINT64_MAX;

    t98 = ((x2077>>(x2078&x2079))|x2080);

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x2081 = UINT16_MAX;
	volatile int8_t x2082 = INT8_MIN;
	volatile int32_t x2083 = 54;
	static int32_t x2084 = 0;
	volatile int32_t t99 = 16839462;

    t99 = ((x2081>>(x2082&x2083))|x2084);

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x2085 = INT32_MAX;
	volatile int8_t x2086 = -1;
	uint16_t x2087 = 3U;

    t100 = ((x2085>>(x2086&x2087))|x2088);

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x2089 = UINT64_MAX;
	uint8_t x2092 = 1U;
	volatile uint64_t t101 = UINT64_MAX;

    t101 = ((x2089>>(x2090&x2091))|x2092);

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x2113 = UINT32_MAX;
	volatile uint8_t x2114 = 0U;
	uint8_t x2115 = UINT8_MAX;
	int32_t x2116 = INT32_MAX;
	volatile uint32_t t102 = UINT32_MAX;

    t102 = ((x2113>>(x2114&x2115))|x2116);

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x2117 = 1693;
	int64_t x2118 = INT64_MAX;
	volatile int64_t x2119 = INT64_MIN;
	int8_t x2120 = INT8_MIN;
	static int32_t t103 = -1962;

    t103 = ((x2117>>(x2118&x2119))|x2120);

    if (t103 != -99) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x2121 = 159U;
	int64_t x2123 = INT64_MIN;
	int64_t x2124 = INT64_MIN;
	int64_t t104 = 63324666892529271LL;

    t104 = ((x2121>>(x2122&x2123))|x2124);

    if (t104 != -9223372036854775649LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x2137 = 0U;
	int32_t x2138 = INT32_MIN;
	static int8_t x2139 = 18;
	int8_t x2140 = -1;
	int32_t t105 = -1384390;

    t105 = ((x2137>>(x2138&x2139))|x2140);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x2149 = 4305290388623LLU;
	volatile int16_t x2150 = 47;

    t106 = ((x2149>>(x2150&x2151))|x2152);

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x2153 = UINT64_MAX;
	static int32_t x2154 = INT32_MIN;
	uint16_t x2156 = 223U;
	uint64_t t107 = UINT64_MAX;

    t107 = ((x2153>>(x2154&x2155))|x2156);

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x2165 = INT16_MAX;
	static uint16_t x2166 = 29661U;
	static int32_t x2167 = INT32_MIN;
	uint8_t x2168 = 3U;
	int32_t t108 = 5765;

    t108 = ((x2165>>(x2166&x2167))|x2168);

    if (t108 != 32767) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x2170 = 460U;
	int8_t x2172 = INT8_MAX;

    t109 = ((x2169>>(x2170&x2171))|x2172);

    if (t109 != 228991) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x2173 = 2U;
	int16_t x2175 = INT16_MIN;
	int64_t x2176 = INT64_MIN;
	volatile int64_t t110 = 544014529281LL;

    t110 = ((x2173>>(x2174&x2175))|x2176);

    if (t110 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x2177 = UINT16_MAX;
	volatile uint8_t x2178 = 7U;
	volatile int64_t x2179 = INT64_MIN;
	volatile int32_t x2180 = INT32_MIN;
	int32_t t111 = 0;

    t111 = ((x2177>>(x2178&x2179))|x2180);

    if (t111 != -2147418113) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x2185 = INT32_MAX;
	int64_t x2186 = INT64_MAX;
	volatile int8_t x2187 = 5;
	int64_t t112 = 28518431087793LL;

    t112 = ((x2185>>(x2186&x2187))|x2188);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x2193 = 751U;
	int16_t x2194 = INT16_MIN;
	uint8_t x2195 = UINT8_MAX;

    t113 = ((x2193>>(x2194&x2195))|x2196);

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x2213 = 1392;
	uint16_t x2215 = 13U;
	int16_t x2216 = INT16_MAX;
	static volatile int32_t t114 = 22707;

    t114 = ((x2213>>(x2214&x2215))|x2216);

    if (t114 != 32767) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x2245 = 97U;
	uint32_t x2246 = 15U;
	static volatile uint64_t x2248 = 22582269783LLU;
	volatile uint64_t t115 = 189LLU;

    t115 = ((x2245>>(x2246&x2247))|x2248);

    if (t115 != 22582269783LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x2249 = INT64_MAX;
	volatile int8_t x2251 = INT8_MIN;
	int32_t x2252 = -451;
	static int64_t t116 = -112251LL;

    t116 = ((x2249>>(x2250&x2251))|x2252);

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x2321 = 6065;
	volatile uint32_t x2322 = 3U;
	int8_t x2323 = -3;
	int16_t x2324 = 4246;
	volatile int32_t t117 = 1;

    t117 = ((x2321>>(x2322&x2323))|x2324);

    if (t117 != 7134) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x2329 = 57U;
	uint16_t x2330 = 19U;
	volatile int32_t x2331 = -101389;
	uint64_t x2332 = UINT64_MAX;

    t118 = ((x2329>>(x2330&x2331))|x2332);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x2350 = 6U;
	int64_t x2352 = 22961997310LL;
	int64_t t119 = 6639063LL;

    t119 = ((x2349>>(x2350&x2351))|x2352);

    if (t119 != 22962012159LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x2358 = INT16_MIN;
	uint32_t x2360 = UINT32_MAX;

    t120 = ((x2357>>(x2358&x2359))|x2360);

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x2365 = INT32_MAX;
	int32_t x2367 = INT32_MIN;
	uint8_t x2368 = 64U;

    t121 = ((x2365>>(x2366&x2367))|x2368);

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x2377 = UINT16_MAX;
	int64_t x2378 = -119686734360655826LL;
	static uint16_t x2379 = 3U;
	uint64_t x2380 = 10LLU;

    t122 = ((x2377>>(x2378&x2379))|x2380);

    if (t122 != 16383LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x2381 = 13688138029917490LLU;
	int32_t x2382 = INT32_MAX;
	int64_t x2383 = INT64_MIN;
	int32_t x2384 = INT32_MIN;
	uint64_t t123 = 143856557LLU;

    t123 = ((x2381>>(x2382&x2383))|x2384);

    if (t123 != 18446744073657705778LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x2385 = INT32_MAX;
	volatile uint8_t x2386 = 0U;
	int32_t x2387 = 3034188;
	static volatile int32_t x2388 = -43087418;
	int32_t t124 = 3471;

    t124 = ((x2385>>(x2386&x2387))|x2388);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x2405 = UINT64_MAX;
	int8_t x2406 = INT8_MIN;
	uint8_t x2407 = 9U;
	int8_t x2408 = INT8_MAX;
	volatile uint64_t t125 = UINT64_MAX;

    t125 = ((x2405>>(x2406&x2407))|x2408);

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x2413 = UINT8_MAX;
	int16_t x2415 = 59;
	int64_t x2416 = -111631956LL;
	int64_t t126 = -475091739502886LL;

    t126 = ((x2413>>(x2414&x2415))|x2416);

    if (t126 != -111631956LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x2453 = 16754U;
	static int8_t x2454 = 6;
	static int16_t x2456 = INT16_MIN;

    t127 = ((x2453>>(x2454&x2455))|x2456);

    if (t127 != -16014) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x2473 = 72354235747125721LLU;
	int8_t x2474 = INT8_MIN;
	int8_t x2475 = INT8_MAX;
	int16_t x2476 = -1;

    t128 = ((x2473>>(x2474&x2475))|x2476);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x2486 = INT8_MIN;
	volatile uint8_t x2487 = 2U;
	volatile int32_t x2488 = 274;
	volatile uint64_t t129 = UINT64_MAX;

    t129 = ((x2485>>(x2486&x2487))|x2488);

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x2493 = 0U;
	volatile uint16_t x2494 = 48U;
	static int16_t x2495 = 3;
	int32_t x2496 = -76444;
	volatile int32_t t130 = 0;

    t130 = ((x2493>>(x2494&x2495))|x2496);

    if (t130 != -76444) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x2553 = 511009852273029LL;
	static uint8_t x2554 = 46U;
	uint16_t x2555 = 61U;
	static volatile int8_t x2556 = INT8_MIN;

    t131 = ((x2553>>(x2554&x2555))|x2556);

    if (t131 != -99LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x2582 = INT16_MAX;
	volatile uint32_t x2584 = UINT32_MAX;
	volatile uint32_t t132 = UINT32_MAX;

    t132 = ((x2581>>(x2582&x2583))|x2584);

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x2606 = INT16_MAX;
	uint8_t x2607 = 1U;
	int64_t x2608 = INT64_MIN;

    t133 = ((x2605>>(x2606&x2607))|x2608);

    if (t133 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x2626 = INT64_MAX;
	volatile uint32_t t134 = 49U;

    t134 = ((x2625>>(x2626&x2627))|x2628);

    if (t134 != 728855U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x2673 = INT8_MAX;
	int16_t x2674 = 3;
	int32_t x2675 = -1;
	int8_t x2676 = INT8_MIN;
	int32_t t135 = -4052;

    t135 = ((x2673>>(x2674&x2675))|x2676);

    if (t135 != -113) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x2677 = 45U;
	volatile uint32_t x2679 = 30357U;
	static volatile uint32_t t136 = 415U;

    t136 = ((x2677>>(x2678&x2679))|x2680);

    if (t136 != 52171U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x2729 = INT64_MAX;
	uint32_t x2730 = 15U;
	int16_t x2731 = INT16_MAX;
	uint8_t x2732 = 69U;
	volatile int64_t t137 = 260046582LL;

    t137 = ((x2729>>(x2730&x2731))|x2732);

    if (t137 != 281474976710655LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x2761 = INT8_MAX;
	int8_t x2762 = INT8_MAX;
	int32_t x2763 = INT32_MIN;
	uint8_t x2764 = 63U;
	volatile int32_t t138 = 805;

    t138 = ((x2761>>(x2762&x2763))|x2764);

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x2817 = 37164LL;
	static uint16_t x2818 = 1U;
	uint8_t x2820 = UINT8_MAX;
	volatile int64_t t139 = 66021236LL;

    t139 = ((x2817>>(x2818&x2819))|x2820);

    if (t139 != 37375LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x2833 = 12623858486832LL;
	int32_t x2834 = INT32_MIN;
	int32_t x2835 = INT32_MAX;

    t140 = ((x2833>>(x2834&x2835))|x2836);

    if (t140 != 12623858486839LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x2857 = 20LLU;
	static uint8_t x2858 = 10U;
	int32_t x2859 = -938321;
	volatile int64_t x2860 = -8LL;
	uint64_t t141 = 7416250217061962LLU;

    t141 = ((x2857>>(x2858&x2859))|x2860);

    if (t141 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x2917 = 87U;
	int8_t x2919 = 1;
	static int32_t t142 = 134792;

    t142 = ((x2917>>(x2918&x2919))|x2920);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x2934 = INT64_MIN;
	uint8_t x2935 = 28U;
	static int16_t x2936 = -1;
	uint64_t t143 = UINT64_MAX;

    t143 = ((x2933>>(x2934&x2935))|x2936);

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x2937 = 16679;
	volatile uint64_t x2938 = 9LLU;
	int64_t x2939 = 4958578197934659LL;
	int8_t x2940 = -1;

    t144 = ((x2937>>(x2938&x2939))|x2940);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x2949 = UINT32_MAX;
	volatile uint8_t x2950 = 14U;
	int8_t x2952 = -1;

    t145 = ((x2949>>(x2950&x2951))|x2952);

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x2970 = UINT8_MAX;
	static volatile int32_t t146 = -89626;

    t146 = ((x2969>>(x2970&x2971))|x2972);

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x2981 = 80857482LLU;
	uint16_t x2982 = 1U;
	volatile int32_t x2983 = 261544236;
	int64_t x2984 = INT64_MIN;
	uint64_t t147 = 7470817312244968LLU;

    t147 = ((x2981>>(x2982&x2983))|x2984);

    if (t147 != 9223372036935633290LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x2985 = UINT64_MAX;
	volatile uint32_t x2986 = 39072U;
	volatile uint64_t x2988 = 42486LLU;
	uint64_t t148 = UINT64_MAX;

    t148 = ((x2985>>(x2986&x2987))|x2988);

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x2997 = 524798917LLU;
	int64_t x2998 = 0LL;
	volatile int8_t x3000 = -1;
	volatile uint64_t t149 = UINT64_MAX;

    t149 = ((x2997>>(x2998&x2999))|x3000);

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x3002 = INT32_MIN;
	uint8_t x3003 = UINT8_MAX;
	int64_t x3004 = INT64_MAX;
	volatile int64_t t150 = INT64_MAX;

    t150 = ((x3001>>(x3002&x3003))|x3004);

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x3033 = INT8_MAX;
	uint16_t x3035 = 4057U;
	volatile int64_t t151 = 1LL;

    t151 = ((x3033>>(x3034&x3035))|x3036);

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x3061 = 7827202U;
	int32_t x3062 = INT32_MIN;
	volatile uint16_t x3063 = UINT16_MAX;
	volatile int8_t x3064 = INT8_MIN;
	volatile uint32_t t152 = 12324498U;

    t152 = ((x3061>>(x3062&x3063))|x3064);

    if (t152 != 4294967170U) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x3077 = 1;
	volatile int8_t x3078 = INT8_MAX;
	static int16_t x3079 = INT16_MIN;
	static int64_t x3080 = INT64_MAX;
	static int64_t t153 = INT64_MAX;

    t153 = ((x3077>>(x3078&x3079))|x3080);

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x3101 = 0;
	int32_t x3102 = 7;
	static int64_t x3103 = 252LL;
	volatile int16_t x3104 = -3;
	volatile int32_t t154 = 3;

    t154 = ((x3101>>(x3102&x3103))|x3104);

    if (t154 != -3) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x3105 = 1;
	int8_t x3106 = 0;
	static uint8_t x3107 = 127U;
	static volatile int64_t t155 = 18LL;

    t155 = ((x3105>>(x3106&x3107))|x3108);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    

    t156 = ((x3121>>(x3122&x3123))|x3124);

    if (t156 != 550603796150LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x3161 = 4U;
	volatile uint32_t x3162 = 683236U;
	int32_t x3163 = INT32_MIN;

    t157 = ((x3161>>(x3162&x3163))|x3164);

    if (t157 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x3197 = 93114210719LLU;
	uint32_t x3198 = 5U;
	volatile int16_t x3199 = INT16_MIN;
	int16_t x3200 = INT16_MAX;
	volatile uint64_t t158 = 292747LLU;

    t158 = ((x3197>>(x3198&x3199))|x3200);

    if (t158 != 93114236927LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x3209 = 107385U;
	uint8_t x3210 = 27U;
	int32_t x3211 = -20329;
	int64_t t159 = INT64_MAX;

    t159 = ((x3209>>(x3210&x3211))|x3212);

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x3222 = 11U;
	uint32_t x3224 = 2U;

    t160 = ((x3221>>(x3222&x3223))|x3224);

    if (t160 != 2U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x3225 = UINT64_MAX;
	int16_t x3226 = -11;
	uint8_t x3228 = 1U;
	uint64_t t161 = 29LLU;

    t161 = ((x3225>>(x3226&x3227))|x3228);

    if (t161 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x3237 = 7724U;
	static uint64_t x3239 = 1LLU;
	volatile uint32_t t162 = 96570U;

    t162 = ((x3237>>(x3238&x3239))|x3240);

    if (t162 != 14802686U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x3241 = 397715481621956814LL;

    t163 = ((x3241>>(x3242&x3243))|x3244);

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x3249 = 220;
	uint64_t x3252 = UINT64_MAX;
	volatile uint64_t t164 = UINT64_MAX;

    t164 = ((x3249>>(x3250&x3251))|x3252);

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x3253 = 43;
	int16_t x3255 = 20;
	int16_t x3256 = -1731;

    t165 = ((x3253>>(x3254&x3255))|x3256);

    if (t165 != -1729) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x3257 = 764;
	int8_t x3258 = -1;
	uint16_t x3259 = 29U;
	volatile int64_t t166 = 15LL;

    t166 = ((x3257>>(x3258&x3259))|x3260);

    if (t166 != -13735LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x3269 = UINT32_MAX;
	uint8_t x3270 = 92U;

    t167 = ((x3269>>(x3270&x3271))|x3272);

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x3286 = 27321LL;
	int32_t x3287 = INT32_MIN;
	int64_t x3288 = INT64_MIN;
	volatile int64_t t168 = 24LL;

    t168 = ((x3285>>(x3286&x3287))|x3288);

    if (t168 != -9223372036854774652LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x3353 = 613633199159449242LLU;
	uint8_t x3354 = 40U;
	uint64_t t169 = 29LLU;

    t169 = ((x3353>>(x3354&x3355))|x3356);

    if (t169 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x3405 = INT32_MAX;
	volatile uint16_t x3406 = 363U;
	int32_t x3407 = INT32_MIN;
	int16_t x3408 = -1;
	volatile int32_t t170 = 464242;

    t170 = ((x3405>>(x3406&x3407))|x3408);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x3434 = 3U;
	uint64_t x3435 = 746LLU;
	int8_t x3436 = -1;
	volatile uint64_t t171 = UINT64_MAX;

    t171 = ((x3433>>(x3434&x3435))|x3436);

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x3461 = 933930;
	int16_t x3462 = -503;
	uint8_t x3463 = 95U;
	int8_t x3464 = INT8_MIN;
	volatile int32_t t172 = -19;

    t172 = ((x3461>>(x3462&x3463))|x3464);

    if (t172 != -96) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x3501 = INT32_MAX;
	uint64_t x3502 = 14LLU;
	static uint16_t x3504 = UINT16_MAX;
	volatile int32_t t173 = -192834;

    t173 = ((x3501>>(x3502&x3503))|x3504);

    if (t173 != 131071) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x3533 = 18130U;
	uint8_t x3534 = 1U;
	static int64_t x3535 = INT64_MIN;
	volatile uint64_t x3536 = 515224918LLU;
	uint64_t t174 = 7LLU;

    t174 = ((x3533>>(x3534&x3535))|x3536);

    if (t174 != 515241942LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x3549 = 85U;
	volatile int8_t x3551 = INT8_MIN;
	int32_t t175 = 7874;

    t175 = ((x3549>>(x3550&x3551))|x3552);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x3553 = 2;
	static uint8_t x3554 = UINT8_MAX;
	int16_t x3555 = INT16_MIN;
	uint64_t t176 = UINT64_MAX;

    t176 = ((x3553>>(x3554&x3555))|x3556);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x3558 = 13U;
	int32_t x3559 = -1762;
	int16_t x3560 = -2702;
	volatile int32_t t177 = 25964;

    t177 = ((x3557>>(x3558&x3559))|x3560);

    if (t177 != -2702) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x3561 = 20011;
	int16_t x3563 = INT16_MAX;
	volatile int16_t x3564 = INT16_MIN;
	volatile int32_t t178 = 61745;

    t178 = ((x3561>>(x3562&x3563))|x3564);

    if (t178 != -12757) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x3577 = 1650U;
	volatile int8_t x3578 = 5;
	static int32_t x3580 = INT32_MIN;
	int32_t t179 = 2165819;

    t179 = ((x3577>>(x3578&x3579))|x3580);

    if (t179 != -2147483545) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x3593 = 9462;
	uint8_t x3594 = 14U;
	uint32_t x3596 = 311U;

    t180 = ((x3593>>(x3594&x3595))|x3596);

    if (t180 != 311U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x3597 = 15338321086075LLU;
	uint8_t x3598 = 33U;
	int32_t x3600 = INT32_MIN;
	volatile uint64_t t181 = 16243388LLU;

    t181 = ((x3597>>(x3598&x3599))|x3600);

    if (t181 != 18446744072554940027LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x3646 = 0;
	static uint64_t x3647 = 762348324043204LLU;
	static volatile int8_t x3648 = -1;
	volatile uint32_t t182 = UINT32_MAX;

    t182 = ((x3645>>(x3646&x3647))|x3648);

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x3657 = 1622U;
	static int16_t x3659 = -6690;
	uint32_t x3660 = UINT32_MAX;
	volatile uint32_t t183 = UINT32_MAX;

    t183 = ((x3657>>(x3658&x3659))|x3660);

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x3669 = UINT16_MAX;
	volatile int64_t x3671 = -3LL;
	uint64_t x3672 = 3608642720LLU;
	volatile uint64_t t184 = 17634965LLU;

    t184 = ((x3669>>(x3670&x3671))|x3672);

    if (t184 != 3608642720LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x3677 = 275264U;
	volatile int32_t x3678 = -1;
	uint8_t x3679 = 7U;
	volatile uint8_t x3680 = 5U;

    t185 = ((x3677>>(x3678&x3679))|x3680);

    if (t185 != 2151U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x3693 = 432LL;
	uint64_t x3694 = UINT64_MAX;
	uint8_t x3695 = 7U;
	int64_t x3696 = -1LL;

    t186 = ((x3693>>(x3694&x3695))|x3696);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x3701 = 10989077;
	uint16_t x3703 = 4U;
	int32_t x3704 = INT32_MAX;

    t187 = ((x3701>>(x3702&x3703))|x3704);

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x3705 = 1;
	int16_t x3706 = INT16_MAX;
	int64_t x3707 = INT64_MIN;
	volatile int32_t x3708 = INT32_MIN;
	volatile int32_t t188 = -39541;

    t188 = ((x3705>>(x3706&x3707))|x3708);

    if (t188 != -2147483647) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x3709 = INT64_MAX;
	int32_t x3710 = 0;
	int64_t x3711 = INT64_MAX;
	static uint64_t x3712 = UINT64_MAX;
	volatile uint64_t t189 = UINT64_MAX;

    t189 = ((x3709>>(x3710&x3711))|x3712);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x3755 = -5540531;
	int32_t x3756 = INT32_MIN;

    t190 = ((x3753>>(x3754&x3755))|x3756);

    if (t190 != -2147483521) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x3761 = INT32_MAX;
	int8_t x3762 = 2;
	uint16_t x3763 = 431U;
	uint16_t x3764 = 29U;
	int32_t t191 = 1;

    t191 = ((x3761>>(x3762&x3763))|x3764);

    if (t191 != 536870911) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x3793 = 2429LL;
	int16_t x3794 = 14;
	int32_t x3795 = -1;
	static int64_t x3796 = -1LL;
	int64_t t192 = -1LL;

    t192 = ((x3793>>(x3794&x3795))|x3796);

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x3837 = INT32_MAX;
	volatile uint8_t x3838 = 77U;
	static int64_t x3839 = INT64_MIN;
	static uint16_t x3840 = 253U;
	volatile int32_t t193 = INT32_MAX;

    t193 = ((x3837>>(x3838&x3839))|x3840);

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x3885 = UINT16_MAX;
	static uint8_t x3886 = 6U;
	static int64_t x3887 = -1LL;
	static int64_t x3888 = -168LL;
	static int64_t t194 = 29191103207685297LL;

    t194 = ((x3885>>(x3886&x3887))|x3888);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x3905 = 35364278580175562LL;
	int32_t x3906 = 0;
	static uint16_t x3907 = 23U;
	int64_t x3908 = INT64_MAX;
	volatile int64_t t195 = INT64_MAX;

    t195 = ((x3905>>(x3906&x3907))|x3908);

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x3918 = 2;
	static volatile uint32_t x3919 = 10U;
	static uint64_t x3920 = 185316917798735LLU;

    t196 = ((x3917>>(x3918&x3919))|x3920);

    if (t196 != 185316917798863LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x3921 = INT8_MAX;
	int16_t x3922 = INT16_MIN;
	uint8_t x3923 = UINT8_MAX;
	uint32_t x3924 = 2065U;
	volatile uint32_t t197 = 50U;

    t197 = ((x3921>>(x3922&x3923))|x3924);

    if (t197 != 2175U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x3933 = 93720;
	volatile int64_t x3934 = INT64_MAX;
	int8_t x3935 = 0;

    t198 = ((x3933>>(x3934&x3935))|x3936);

    if (t198 != 93725LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x3973 = 2964330852579471998LL;
	int64_t x3974 = INT64_MIN;
	int32_t x3975 = 105784827;
	int64_t x3976 = 22522777254000LL;

    t199 = ((x3973>>(x3974&x3975))|x3976);

    if (t199 != 2964353167451224702LL) { NG(); } else { ; }
	
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

