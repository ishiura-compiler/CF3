
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

uint8_t x31 = 81U;
uint8_t x32 = 0U;
int16_t x214 = -1;
int32_t x270 = INT32_MIN;
volatile uint8_t x272 = 2U;
int8_t x280 = 5;
static uint8_t x415 = 6U;
int32_t t7 = -4;
static int64_t x435 = INT64_MIN;
uint16_t x436 = 0U;
int32_t t9 = 114;
static int32_t x502 = 871;
uint16_t x503 = 14U;
static int64_t t10 = 10741193533LL;
int64_t t11 = 58034689166LL;
int64_t x641 = 12187232394033LL;
uint32_t x714 = 769516843U;
uint16_t x733 = UINT16_MAX;
int32_t x736 = 1;
uint64_t x789 = UINT64_MAX;
static int32_t x826 = -12;
int64_t t20 = 2241373431300140454LL;
int32_t x859 = INT32_MIN;
static volatile uint8_t x860 = 1U;
static int64_t t21 = 423135LL;
uint16_t x897 = 556U;
int8_t x923 = 12;
int32_t t23 = 276572362;
uint64_t x957 = UINT64_MAX;
uint32_t x999 = UINT32_MAX;
volatile uint32_t t28 = 31019U;
int64_t x1126 = 623LL;
uint16_t x1128 = 3U;
volatile int16_t x1136 = 3;
int8_t x1149 = 48;
int32_t x1189 = 1;
uint32_t x1254 = 164289322U;
uint16_t x1320 = 3U;
volatile uint32_t t38 = 8465U;
static int16_t x1495 = -1;
static uint32_t x1501 = 1844529710U;
int64_t t41 = 1LL;
volatile uint16_t x1534 = 11509U;
uint64_t x1535 = UINT64_MAX;
int8_t x1537 = 1;
int64_t t43 = 119038798496LL;
uint32_t x1586 = 26873U;
volatile uint32_t x1598 = UINT32_MAX;
uint8_t x1600 = 1U;
int8_t x1637 = INT8_MIN;
static uint64_t t50 = 10748836236602914LLU;
int64_t x1861 = INT64_MIN;
volatile uint64_t x1866 = 179272941058446375LLU;
uint64_t x1867 = 1109886126LLU;
volatile int16_t x1913 = -1;
uint16_t x1915 = 3U;
int32_t t56 = 8;
uint32_t x2006 = 11260U;
int64_t x2009 = 11315920630LL;
static volatile int16_t x2010 = -1;
static int8_t x2011 = INT8_MIN;
int16_t x2069 = -1;
int64_t t62 = -47992200945LL;
uint8_t x2233 = UINT8_MAX;
uint64_t t63 = 252LLU;
uint16_t x2248 = 0U;
uint32_t x2319 = UINT32_MAX;
static uint16_t x2507 = UINT16_MAX;
int8_t x2615 = INT8_MIN;
static uint32_t x2674 = 2U;
uint64_t t72 = 16797352704489348LLU;
int16_t x2737 = INT16_MIN;
int8_t x2738 = INT8_MIN;
volatile uint32_t x2794 = 7007956U;
volatile uint64_t x2795 = UINT64_MAX;
uint16_t x3009 = UINT16_MAX;
int16_t x3010 = INT16_MIN;
volatile uint32_t x3011 = UINT32_MAX;
static volatile uint8_t x3012 = 0U;
uint32_t x3112 = 14U;
int32_t t81 = 0;
volatile int16_t x3289 = INT16_MAX;
static uint32_t x3290 = 88452U;
static volatile uint8_t x3428 = 13U;
static uint64_t x3494 = 755188046145684374LLU;
uint32_t x3505 = 1U;
int64_t x3529 = INT64_MIN;
volatile uint64_t x3532 = 45LLU;
int16_t x3577 = INT16_MIN;
uint32_t x3699 = 3416891U;
volatile uint64_t x3711 = UINT64_MAX;
uint16_t x3763 = 5U;
uint32_t x3774 = 50U;
static int8_t x3775 = INT8_MAX;
volatile int16_t x3776 = 5;
volatile uint32_t t94 = 235U;
uint64_t x3796 = 48LLU;
volatile int64_t t95 = 2615470338561364LL;
volatile int32_t x3839 = -1;
static uint16_t x3998 = 215U;
int32_t t101 = 777536987;
static uint8_t x4004 = 13U;
static uint64_t t104 = 6439570616LLU;
volatile int16_t x4101 = INT16_MIN;
static int16_t x4242 = -144;
uint64_t x4265 = 50LLU;
uint16_t x4266 = UINT16_MAX;
static uint8_t x4277 = 1U;
static uint64_t x4306 = 15LLU;
int8_t x4469 = -1;
volatile int32_t x4470 = INT32_MAX;
int32_t t114 = 15038600;
uint8_t x4618 = UINT8_MAX;
int64_t x4625 = -1LL;
uint32_t x4671 = UINT32_MAX;
int8_t x4709 = INT8_MIN;
uint32_t x4710 = UINT32_MAX;
static uint32_t t119 = 1128248U;
uint64_t x4746 = 3650410551LLU;
uint32_t x4747 = UINT32_MAX;
static uint8_t x4788 = 3U;
int8_t x4790 = INT8_MIN;
volatile int32_t x4792 = 1;
static int32_t t122 = 2;
uint8_t x4817 = 10U;
int32_t x4818 = -4;
static uint8_t x4872 = 5U;
volatile int64_t t127 = 1527LL;
volatile uint64_t t129 = 3363LLU;
uint16_t x4949 = UINT16_MAX;
int32_t x4950 = -1;
int64_t x4973 = -1LL;
static volatile int16_t x4990 = INT16_MIN;
int32_t t133 = -237;
int16_t x5003 = INT16_MIN;
uint16_t x5004 = 13U;
static uint32_t x5217 = 94809U;
uint8_t x5218 = 1U;
static volatile uint32_t t140 = 1976463U;
static volatile uint16_t x5415 = 6U;
int64_t t142 = -4561500151885LL;
uint16_t x5452 = 23U;
int8_t x5479 = -1;
uint32_t t144 = 4524162U;
volatile int64_t t145 = 664054486841LL;
int16_t x5799 = -1;
volatile uint64_t t149 = 2675574608LLU;
int16_t x5804 = 5;
static int32_t t150 = -333329;
uint64_t x5842 = 0LLU;
static int8_t x5844 = 14;
int16_t x5896 = 1;
uint32_t x6035 = 88U;
static uint8_t x6036 = 1U;
volatile uint32_t x6072 = 4U;
int32_t t157 = -1;
int32_t x6163 = -7668;
uint32_t x6235 = 52703U;
uint8_t x6236 = 0U;
static uint32_t x6270 = UINT32_MAX;
uint16_t x6328 = 14U;
int16_t x6501 = -19;
volatile uint8_t x6504 = 0U;
int64_t x6517 = -13689448LL;
uint64_t x6579 = 6824708347LLU;
int16_t x6630 = INT16_MIN;
volatile int64_t t176 = -303164701736540564LL;
int16_t x6737 = INT16_MAX;
int16_t x6738 = INT16_MAX;
volatile uint64_t t179 = 57189087670126794LLU;
int32_t x6779 = -1;
uint8_t x6809 = UINT8_MAX;
uint32_t x6845 = UINT32_MAX;
int8_t x6847 = INT8_MIN;
volatile uint32_t t182 = 2494555U;
int32_t x6858 = INT32_MIN;
static int64_t x6941 = -1LL;
volatile int64_t t184 = -16025LL;
volatile uint8_t x6968 = 15U;
uint64_t x7238 = UINT64_MAX;
uint16_t x7273 = UINT16_MAX;
uint16_t x7274 = 3441U;
volatile uint32_t t189 = 408U;
int32_t t192 = 3520;
static int8_t x7509 = -13;
static int16_t x7510 = -1;
static uint8_t x7653 = 6U;
static volatile uint64_t x7655 = 3425070266755413LLU;
int8_t x7670 = INT8_MIN;
int32_t x7672 = 1;
uint64_t x7677 = UINT64_MAX;
static int8_t x7682 = 7;
int8_t x7697 = -43;
volatile int8_t x7698 = 40;


void f0(void) {
    	volatile int16_t x29 = -1;
	int64_t x30 = -1LL;
	volatile int64_t t0 = -436650303248LL;

    t0 = (((x29-x30)&x31)<<x32);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x137 = 49;
	static int64_t x138 = -1LL;
	static int8_t x139 = INT8_MAX;
	uint8_t x140 = 0U;
	static volatile int64_t t1 = 2258143582345648902LL;

    t1 = (((x137-x138)&x139)<<x140);

    if (t1 != 50LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x213 = 20;
	int32_t x215 = 7;
	static uint16_t x216 = 6U;
	int32_t t2 = 210;

    t2 = (((x213-x214)&x215)<<x216);

    if (t2 != 320) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x249 = 2LLU;
	volatile uint16_t x250 = 1454U;
	int32_t x251 = -672791;
	uint8_t x252 = 19U;
	volatile uint64_t t3 = 365634129111238020LLU;

    t3 = (((x249-x250)&x251)<<x252);

    if (t3 != 18446743720750481408LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x269 = UINT64_MAX;
	int64_t x271 = INT64_MIN;
	volatile uint64_t t4 = 703523838LLU;

    t4 = (((x269-x270)&x271)<<x272);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x277 = UINT8_MAX;
	uint32_t x278 = 201630U;
	volatile uint16_t x279 = 306U;
	volatile uint32_t t5 = 367298U;

    t5 = (((x277-x278)&x279)<<x280);

    if (t5 != 9216U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x361 = INT64_MIN;
	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	int8_t x364 = 6;
	volatile int64_t t6 = -1146151258789765LL;

    t6 = (((x361-x362)&x363)<<x364);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x413 = -1;
	int32_t x414 = -1;
	volatile int8_t x416 = 15;

    t7 = (((x413-x414)&x415)<<x416);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x433 = UINT16_MAX;
	volatile int8_t x434 = -1;
	int64_t t8 = -3326819528LL;

    t8 = (((x433-x434)&x435)<<x436);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x453 = INT16_MAX;
	int8_t x454 = -23;
	int8_t x455 = 44;
	volatile int64_t x456 = 8LL;

    t9 = (((x453-x454)&x455)<<x456);

    if (t9 != 1024) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x501 = 140571215264LL;
	static volatile uint16_t x504 = 2U;

    t10 = (((x501-x502)&x503)<<x504);

    if (t10 != 32LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x557 = 31U;
	int64_t x558 = INT64_MAX;
	static uint16_t x559 = 13339U;
	int16_t x560 = 0;

    t11 = (((x557-x558)&x559)<<x560);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x569 = UINT8_MAX;
	volatile int8_t x570 = INT8_MAX;
	uint64_t x571 = 203LLU;
	static int8_t x572 = 0;
	volatile uint64_t t12 = 18782LLU;

    t12 = (((x569-x570)&x571)<<x572);

    if (t12 != 128LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x577 = -1;
	int32_t x578 = -220580;
	static int16_t x579 = INT16_MIN;
	static uint8_t x580 = 0U;
	static volatile int32_t t13 = 12772699;

    t13 = (((x577-x578)&x579)<<x580);

    if (t13 != 196608) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x609 = 10080LLU;
	uint32_t x610 = UINT32_MAX;
	uint8_t x611 = 1U;
	uint16_t x612 = 5U;
	volatile uint64_t t14 = 2209915778584145155LLU;

    t14 = (((x609-x610)&x611)<<x612);

    if (t14 != 32LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x642 = 40U;
	int8_t x643 = INT8_MIN;
	volatile uint8_t x644 = 18U;
	static int64_t t15 = 79238844LL;

    t15 = (((x641-x642)&x643)<<x644);

    if (t15 != 3194809848688541696LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x713 = INT8_MAX;
	int64_t x715 = 13872350375LL;
	uint32_t x716 = 5U;
	volatile int64_t t16 = -5697317LL;

    t16 = (((x713-x714)&x715)<<x716);

    if (t16 != 9667870848LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x734 = INT8_MAX;
	int32_t x735 = INT32_MAX;
	volatile int32_t t17 = 1;

    t17 = (((x733-x734)&x735)<<x736);

    if (t17 != 130816) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x790 = UINT16_MAX;
	int32_t x791 = INT32_MIN;
	volatile uint8_t x792 = 0U;
	uint64_t t18 = 29137LLU;

    t18 = (((x789-x790)&x791)<<x792);

    if (t18 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x825 = 193078074001LL;
	static volatile int16_t x827 = INT16_MAX;
	int8_t x828 = 1;
	volatile int64_t t19 = 71182859LL;

    t19 = (((x825-x826)&x827)<<x828);

    if (t19 != 13626LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x837 = -1;
	int64_t x838 = INT64_MAX;
	volatile int8_t x839 = INT8_MAX;
	uint8_t x840 = 0U;

    t20 = (((x837-x838)&x839)<<x840);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x857 = INT8_MAX;
	int64_t x858 = -4973766984067LL;

    t21 = (((x857-x858)&x859)<<x860);

    if (t21 != 9947144257536LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x898 = 19;
	uint32_t x899 = UINT32_MAX;
	uint8_t x900 = 1U;
	volatile uint32_t t22 = 0U;

    t22 = (((x897-x898)&x899)<<x900);

    if (t22 != 1074U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x921 = -7;
	int8_t x922 = -1;
	int8_t x924 = 0;

    t23 = (((x921-x922)&x923)<<x924);

    if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint64_t x937 = 99695249714LLU;
	uint8_t x938 = UINT8_MAX;
	uint32_t x939 = 177465063U;
	int8_t x940 = 1;
	uint64_t t24 = 288158558450LLU;

    t24 = (((x937-x938)&x939)<<x940);

    if (t24 != 67207238LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x949 = 72U;
	uint64_t x950 = 1753962575220018881LLU;
	int32_t x951 = INT32_MAX;
	uint8_t x952 = 12U;
	volatile uint64_t t25 = 13LLU;

    t25 = (((x949-x950)&x951)<<x952);

    if (t25 != 2933044834304LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x958 = 8;
	int8_t x959 = -1;
	uint32_t x960 = 58U;
	volatile uint64_t t26 = 33375692LLU;

    t26 = (((x957-x958)&x959)<<x960);

    if (t26 != 15852670688344145920LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x997 = INT8_MIN;
	int64_t x998 = -109LL;
	uint16_t x1000 = 1U;
	int64_t t27 = 0LL;

    t27 = (((x997-x998)&x999)<<x1000);

    if (t27 != 8589934554LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x1005 = 8656362U;
	uint16_t x1006 = 20U;
	int16_t x1007 = INT16_MIN;
	int8_t x1008 = 1;

    t28 = (((x1005-x1006)&x1007)<<x1008);

    if (t28 != 17301504U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1077 = -2115790296869516LL;
	int8_t x1078 = 60;
	uint64_t x1079 = 317135984209001501LLU;
	volatile int64_t x1080 = 1LL;
	uint64_t t29 = 1998816LLU;

    t29 = (((x1077-x1078)&x1079)<<x1080);

    if (t29 != 630612138201327664LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x1125 = 406191242134820LL;
	volatile uint8_t x1127 = UINT8_MAX;
	int64_t t30 = 30LL;

    t30 = (((x1125-x1126)&x1127)<<x1128);

    if (t30 != 1448LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1133 = UINT16_MAX;
	volatile uint16_t x1134 = 6U;
	int8_t x1135 = -1;
	volatile int32_t t31 = 49724855;

    t31 = (((x1133-x1134)&x1135)<<x1136);

    if (t31 != 524232) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint64_t x1150 = 673LLU;
	static int8_t x1151 = -2;
	uint32_t x1152 = 7U;
	volatile uint64_t t32 = 3772893980LLU;

    t32 = (((x1149-x1150)&x1151)<<x1152);

    if (t32 != 18446744073709471488LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x1190 = UINT32_MAX;
	int32_t x1191 = 38;
	int64_t x1192 = 6LL;
	uint32_t t33 = 3521U;

    t33 = (((x1189-x1190)&x1191)<<x1192);

    if (t33 != 128U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x1193 = UINT32_MAX;
	uint8_t x1194 = 121U;
	int64_t x1195 = -1LL;
	uint16_t x1196 = 19U;
	volatile int64_t t34 = 0LL;

    t34 = (((x1193-x1194)&x1195)<<x1196);

    if (t34 != 2251799749722112LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x1209 = 8U;
	volatile uint16_t x1210 = UINT16_MAX;
	uint32_t x1211 = 8226040U;
	int8_t x1212 = 6;
	uint32_t t35 = 3870242U;

    t35 = (((x1209-x1210)&x1211)<<x1212);

    if (t35 != 524288512U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x1253 = 52301231LLU;
	static int8_t x1255 = -24;
	uint8_t x1256 = 8U;
	volatile uint64_t t36 = 4681138179769743120LLU;

    t36 = (((x1253-x1254)&x1255)<<x1256);

    if (t36 != 18446744045040599040LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x1289 = INT16_MIN;
	static int16_t x1290 = -1;
	uint8_t x1291 = 21U;
	int16_t x1292 = 11;
	int32_t t37 = 0;

    t37 = (((x1289-x1290)&x1291)<<x1292);

    if (t37 != 2048) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x1317 = INT8_MAX;
	int32_t x1318 = -1;
	volatile uint32_t x1319 = 4272395U;

    t38 = (((x1317-x1318)&x1319)<<x1320);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1345 = UINT32_MAX;
	uint16_t x1346 = 3U;
	volatile int8_t x1347 = 1;
	uint32_t x1348 = 20U;
	static volatile uint32_t t39 = 91657U;

    t39 = (((x1345-x1346)&x1347)<<x1348);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1493 = INT8_MAX;
	static int8_t x1494 = INT8_MIN;
	int16_t x1496 = 16;
	int32_t t40 = 9;

    t40 = (((x1493-x1494)&x1495)<<x1496);

    if (t40 != 16711680) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x1502 = INT32_MAX;
	int64_t x1503 = -1LL;
	uint8_t x1504 = 0U;

    t41 = (((x1501-x1502)&x1503)<<x1504);

    if (t41 != 3992013359LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x1533 = 14;
	uint64_t x1536 = 2LLU;
	static uint64_t t42 = 34814848LLU;

    t42 = (((x1533-x1534)&x1535)<<x1536);

    if (t42 != 18446744073709505636LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x1538 = -1LL;
	int16_t x1539 = INT16_MIN;
	uint16_t x1540 = 13U;

    t43 = (((x1537-x1538)&x1539)<<x1540);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x1585 = INT8_MIN;
	uint8_t x1587 = 1U;
	static uint8_t x1588 = 1U;
	uint32_t t44 = 1372888111U;

    t44 = (((x1585-x1586)&x1587)<<x1588);

    if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x1597 = INT8_MIN;
	int8_t x1599 = INT8_MIN;
	volatile uint32_t t45 = 243677U;

    t45 = (((x1597-x1598)&x1599)<<x1600);

    if (t45 != 4294967040U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1638 = INT8_MAX;
	uint16_t x1639 = 915U;
	uint16_t x1640 = 12U;
	volatile int32_t t46 = 5;

    t46 = (((x1637-x1638)&x1639)<<x1640);

    if (t46 != 3149824) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x1661 = INT8_MIN;
	uint8_t x1662 = 14U;
	static uint32_t x1663 = 13718U;
	uint16_t x1664 = 1U;
	static volatile uint32_t t47 = 3661841U;

    t47 = (((x1661-x1662)&x1663)<<x1664);

    if (t47 != 27172U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x1761 = -2386830640134LL;
	int8_t x1762 = 7;
	static int32_t x1763 = INT32_MAX;
	static int16_t x1764 = 0;
	volatile int64_t t48 = -283LL;

    t48 = (((x1761-x1762)&x1763)<<x1764);

    if (t48 != 1171176435LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1809 = 7;
	uint32_t x1810 = 51U;
	volatile int64_t x1811 = INT64_MAX;
	uint8_t x1812 = 4U;
	volatile int64_t t49 = -523563LL;

    t49 = (((x1809-x1810)&x1811)<<x1812);

    if (t49 != 68719476032LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x1833 = UINT32_MAX;
	static uint64_t x1834 = 19326LLU;
	int64_t x1835 = -1LL;
	uint8_t x1836 = 60U;

    t50 = (((x1833-x1834)&x1835)<<x1836);

    if (t50 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x1837 = 0;
	volatile int16_t x1838 = INT16_MIN;
	int8_t x1839 = -1;
	int16_t x1840 = 7;
	volatile int32_t t51 = -2102;

    t51 = (((x1837-x1838)&x1839)<<x1840);

    if (t51 != 4194304) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x1862 = UINT64_MAX;
	volatile int32_t x1863 = INT32_MAX;
	uint8_t x1864 = 26U;
	uint64_t t52 = 1597253474369LLU;

    t52 = (((x1861-x1862)&x1863)<<x1864);

    if (t52 != 67108864LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x1865 = 223261119;
	uint8_t x1868 = 15U;
	uint64_t t53 = 1563600473777LLU;

    t53 = (((x1865-x1866)&x1867)<<x1868);

    if (t53 != 36364452364288LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x1914 = 586LL;
	uint64_t x1916 = 1LLU;
	int64_t t54 = -557165321136777LL;

    t54 = (((x1913-x1914)&x1915)<<x1916);

    if (t54 != 2LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x1921 = INT8_MIN;
	volatile int8_t x1922 = 1;
	uint64_t x1923 = 2630299864402617LLU;
	int8_t x1924 = 8;
	uint64_t t55 = 21645805LLU;

    t55 = (((x1921-x1922)&x1923)<<x1924);

    if (t55 != 673356765287037184LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x1949 = -240;
	volatile int8_t x1950 = INT8_MIN;
	static uint16_t x1951 = UINT16_MAX;
	int16_t x1952 = 2;

    t56 = (((x1949-x1950)&x1951)<<x1952);

    if (t56 != 261696) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x2005 = UINT64_MAX;
	int8_t x2007 = INT8_MIN;
	volatile uint8_t x2008 = 2U;
	static uint64_t t57 = 404600034525LLU;

    t57 = (((x2005-x2006)&x2007)<<x2008);

    if (t57 != 18446744073709506560LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x2012 = 0;
	int64_t t58 = 11128894077LL;

    t58 = (((x2009-x2010)&x2011)<<x2012);

    if (t58 != 11315920512LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x2021 = -1608335919LL;
	int8_t x2022 = INT8_MIN;
	static int32_t x2023 = 696024;
	volatile uint8_t x2024 = 5U;
	int64_t t59 = -3LL;

    t59 = (((x2021-x2022)&x2023)<<x2024);

    if (t59 != 5491200LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x2037 = 12115;
	uint8_t x2038 = 3U;
	volatile int32_t x2039 = INT32_MAX;
	uint8_t x2040 = 11U;
	int32_t t60 = 678568;

    t60 = (((x2037-x2038)&x2039)<<x2040);

    if (t60 != 24805376) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x2070 = UINT64_MAX;
	static int64_t x2071 = 531459839156LL;
	uint16_t x2072 = 2U;
	static volatile uint64_t t61 = 6767464835713754158LLU;

    t61 = (((x2069-x2070)&x2071)<<x2072);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x2157 = INT64_MAX;
	int8_t x2158 = 0;
	uint32_t x2159 = UINT32_MAX;
	int16_t x2160 = 6;

    t62 = (((x2157-x2158)&x2159)<<x2160);

    if (t62 != 274877906880LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x2234 = 1;
	volatile uint64_t x2235 = UINT64_MAX;
	static volatile uint16_t x2236 = 1U;

    t63 = (((x2233-x2234)&x2235)<<x2236);

    if (t63 != 508LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x2245 = -1;
	int16_t x2246 = INT16_MIN;
	uint8_t x2247 = 17U;
	volatile int32_t t64 = -1422;

    t64 = (((x2245-x2246)&x2247)<<x2248);

    if (t64 != 17) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x2317 = 19298U;
	static int32_t x2318 = -11962;
	static int8_t x2320 = 2;
	volatile uint32_t t65 = 6926U;

    t65 = (((x2317-x2318)&x2319)<<x2320);

    if (t65 != 125040U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x2505 = -30LL;
	static uint32_t x2506 = 1194484U;
	int8_t x2508 = 18;
	int64_t t66 = -76614785LL;

    t66 = (((x2505-x2506)&x2507)<<x2508);

    if (t66 != 13282836480LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x2517 = INT8_MIN;
	int8_t x2518 = INT8_MIN;
	int64_t x2519 = INT64_MIN;
	static uint8_t x2520 = 1U;
	volatile int64_t t67 = 38775294330725LL;

    t67 = (((x2517-x2518)&x2519)<<x2520);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x2533 = UINT8_MAX;
	uint16_t x2534 = 20U;
	volatile int8_t x2535 = INT8_MIN;
	static volatile uint8_t x2536 = 3U;
	int32_t t68 = 40040;

    t68 = (((x2533-x2534)&x2535)<<x2536);

    if (t68 != 1024) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x2613 = 1340U;
	uint32_t x2614 = 162436U;
	static int16_t x2616 = 5;
	uint32_t t69 = 332U;

    t69 = (((x2613-x2614)&x2615)<<x2616);

    if (t69 != 4289810432U) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x2621 = 35;
	int8_t x2622 = INT8_MIN;
	int64_t x2623 = INT64_MAX;
	uint8_t x2624 = 24U;
	int64_t t70 = 7570792216LL;

    t70 = (((x2621-x2622)&x2623)<<x2624);

    if (t70 != 2734686208LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint16_t x2673 = 28716U;
	int32_t x2675 = INT32_MAX;
	static uint32_t x2676 = 10U;
	volatile uint32_t t71 = 157390U;

    t71 = (((x2673-x2674)&x2675)<<x2676);

    if (t71 != 29403136U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x2733 = INT8_MAX;
	int8_t x2734 = -42;
	static uint64_t x2735 = 23LLU;
	int32_t x2736 = 2;

    t72 = (((x2733-x2734)&x2735)<<x2736);

    if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x2739 = 5U;
	uint8_t x2740 = 1U;
	int32_t t73 = 105;

    t73 = (((x2737-x2738)&x2739)<<x2740);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x2753 = -1;
	static int64_t x2754 = INT64_MIN;
	int16_t x2755 = 7845;
	int16_t x2756 = 0;
	volatile int64_t t74 = 6LL;

    t74 = (((x2753-x2754)&x2755)<<x2756);

    if (t74 != 7845LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x2793 = 1U;
	uint16_t x2796 = 1U;
	volatile uint64_t t75 = 915815223699760903LLU;

    t75 = (((x2793-x2794)&x2795)<<x2796);

    if (t75 != 8575918682LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x2917 = 235U;
	static int64_t x2918 = -1LL;
	static int32_t x2919 = INT32_MIN;
	uint8_t x2920 = 2U;
	int64_t t76 = -11509399040796924LL;

    t76 = (((x2917-x2918)&x2919)<<x2920);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x2997 = 645695159607LLU;
	volatile int16_t x2998 = INT16_MIN;
	static int64_t x2999 = -3LL;
	uint8_t x3000 = 4U;
	volatile uint64_t t77 = 1182423754745LLU;

    t77 = (((x2997-x2998)&x2999)<<x3000);

    if (t77 != 10331123077968LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t t78 = 452U;

    t78 = (((x3009-x3010)&x3011)<<x3012);

    if (t78 != 98303U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x3037 = 384385409LLU;
	static int64_t x3038 = -896473313468LL;
	int64_t x3039 = INT64_MIN;
	static uint16_t x3040 = 12U;
	static volatile uint64_t t79 = 434377953493484LLU;

    t79 = (((x3037-x3038)&x3039)<<x3040);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x3109 = INT16_MIN;
	uint32_t x3110 = 43U;
	uint8_t x3111 = UINT8_MAX;
	uint32_t t80 = 208U;

    t80 = (((x3109-x3110)&x3111)<<x3112);

    if (t80 != 3489792U) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x3181 = INT16_MIN;
	uint16_t x3182 = 13258U;
	volatile uint16_t x3183 = 3656U;
	static uint8_t x3184 = 1U;

    t81 = (((x3181-x3182)&x3183)<<x3184);

    if (t81 != 6144) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint16_t x3197 = 176U;
	int8_t x3198 = -63;
	static uint64_t x3199 = 1848926339259LLU;
	uint8_t x3200 = 2U;
	static uint64_t t82 = 30475LLU;

    t82 = (((x3197-x3198)&x3199)<<x3200);

    if (t82 != 684LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x3291 = 6255617349929LLU;
	int8_t x3292 = 43;
	volatile uint64_t t83 = 3876914LLU;

    t83 = (((x3289-x3290)&x3291)<<x3292);

    if (t83 != 14411879447399497728LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x3365 = -9;
	uint32_t x3366 = 591U;
	int64_t x3367 = -7715LL;
	uint8_t x3368 = 1U;
	static volatile int64_t t84 = -5259334277LL;

    t84 = (((x3365-x3366)&x3367)<<x3368);

    if (t84 != 8589918992LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x3425 = -317126;
	int16_t x3426 = INT16_MIN;
	int64_t x3427 = 14747LL;
	volatile int64_t t85 = 3144800800993722LL;

    t85 = (((x3425-x3426)&x3427)<<x3428);

    if (t85 != 86196224LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x3493 = -56;
	int16_t x3495 = -56;
	static uint16_t x3496 = 52U;
	uint64_t t86 = 403LLU;

    t86 = (((x3493-x3494)&x3495)<<x3496);

    if (t86 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x3506 = UINT8_MAX;
	uint8_t x3507 = UINT8_MAX;
	int8_t x3508 = 1;
	uint32_t t87 = 1829U;

    t87 = (((x3505-x3506)&x3507)<<x3508);

    if (t87 != 4U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x3530 = INT64_MIN;
	int64_t x3531 = 17LL;
	int64_t t88 = -435440976LL;

    t88 = (((x3529-x3530)&x3531)<<x3532);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x3533 = 124U;
	static volatile int16_t x3534 = 10524;
	int32_t x3535 = INT32_MAX;
	static int16_t x3536 = 0;
	volatile uint32_t t89 = 3659850U;

    t89 = (((x3533-x3534)&x3535)<<x3536);

    if (t89 != 2147473248U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x3578 = INT16_MIN;
	int64_t x3579 = INT64_MIN;
	uint8_t x3580 = 38U;
	int64_t t90 = -1556128840533729LL;

    t90 = (((x3577-x3578)&x3579)<<x3580);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x3697 = -1;
	int8_t x3698 = -1;
	volatile uint8_t x3700 = 2U;
	volatile uint32_t t91 = 61483831U;

    t91 = (((x3697-x3698)&x3699)<<x3700);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x3709 = INT16_MIN;
	static int8_t x3710 = INT8_MIN;
	static int16_t x3712 = 32;
	volatile uint64_t t92 = 42073499213180486LLU;

    t92 = (((x3709-x3710)&x3711)<<x3712);

    if (t92 != 18446603885977010176LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x3761 = INT32_MIN;
	volatile int64_t x3762 = INT64_MIN;
	static int8_t x3764 = 0;
	int64_t t93 = 0LL;

    t93 = (((x3761-x3762)&x3763)<<x3764);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x3773 = -6;

    t94 = (((x3773-x3774)&x3775)<<x3776);

    if (t94 != 2304U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x3793 = UINT8_MAX;
	int32_t x3794 = -1612;
	static volatile int64_t x3795 = -1LL;

    t95 = (((x3793-x3794)&x3795)<<x3796);

    if (t95 != 525513781518794752LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x3801 = 117U;
	static volatile uint32_t x3802 = 10U;
	uint8_t x3803 = UINT8_MAX;
	uint64_t x3804 = 1LLU;
	volatile uint32_t t96 = 10U;

    t96 = (((x3801-x3802)&x3803)<<x3804);

    if (t96 != 214U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x3805 = -1;
	int16_t x3806 = -1;
	int64_t x3807 = INT64_MIN;
	uint8_t x3808 = 13U;
	int64_t t97 = -40610LL;

    t97 = (((x3805-x3806)&x3807)<<x3808);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x3825 = 834380966U;
	int8_t x3826 = -40;
	static int16_t x3827 = INT16_MAX;
	int8_t x3828 = 0;
	uint32_t t98 = 59808640U;

    t98 = (((x3825-x3826)&x3827)<<x3828);

    if (t98 != 9422U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x3837 = 1430953902678277LLU;
	int32_t x3838 = 223299547;
	uint32_t x3840 = 31U;
	uint64_t t99 = 204828900363LLU;

    t99 = (((x3837-x3838)&x3839)<<x3840);

    if (t99 != 17212736425527607296LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x3877 = INT64_MIN;
	int32_t x3878 = INT32_MIN;
	int64_t x3879 = INT64_MAX;
	int64_t x3880 = 1LL;
	int64_t t100 = 2832926100454597105LL;

    t100 = (((x3877-x3878)&x3879)<<x3880);

    if (t100 != 4294967296LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x3997 = INT16_MAX;
	volatile uint8_t x3999 = 112U;
	int8_t x4000 = 2;

    t101 = (((x3997-x3998)&x3999)<<x4000);

    if (t101 != 128) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x4001 = UINT64_MAX;
	static volatile int8_t x4002 = 0;
	static int64_t x4003 = 443552768824990832LL;
	uint64_t t102 = 11309LLU;

    t102 = (((x4001-x4002)&x4003)<<x4004);

    if (t102 != 18022443767252779008LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x4081 = UINT8_MAX;
	volatile int64_t x4082 = -67LL;
	uint8_t x4083 = 1U;
	volatile int16_t x4084 = 7;
	volatile int64_t t103 = -142926729124873852LL;

    t103 = (((x4081-x4082)&x4083)<<x4084);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x4089 = UINT64_MAX;
	static int16_t x4090 = -1;
	volatile int16_t x4091 = -2;
	volatile int8_t x4092 = 0;

    t104 = (((x4089-x4090)&x4091)<<x4092);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x4102 = INT16_MIN;
	volatile int64_t x4103 = -16380LL;
	static uint8_t x4104 = 1U;
	volatile int64_t t105 = -418987683596LL;

    t105 = (((x4101-x4102)&x4103)<<x4104);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x4129 = 43331193330LLU;
	static int32_t x4130 = -1;
	uint32_t x4131 = 2U;
	int8_t x4132 = 51;
	uint64_t t106 = 228596912LLU;

    t106 = (((x4129-x4130)&x4131)<<x4132);

    if (t106 != 4503599627370496LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x4241 = INT8_MAX;
	int64_t x4243 = INT64_MAX;
	uint16_t x4244 = 8U;
	volatile int64_t t107 = -97011767LL;

    t107 = (((x4241-x4242)&x4243)<<x4244);

    if (t107 != 69376LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x4267 = INT32_MAX;
	uint32_t x4268 = 46U;
	volatile uint64_t t108 = 971758LLU;

    t108 = (((x4265-x4266)&x4267)<<x4268);

    if (t108 != 13838646861235224576LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x4278 = 1LLU;
	volatile uint64_t x4279 = UINT64_MAX;
	volatile int8_t x4280 = 0;
	volatile uint64_t t109 = 9887940LLU;

    t109 = (((x4277-x4278)&x4279)<<x4280);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x4289 = INT64_MAX;
	static uint8_t x4290 = UINT8_MAX;
	uint16_t x4291 = 1U;
	uint64_t x4292 = 6LLU;
	volatile int64_t t110 = -176LL;

    t110 = (((x4289-x4290)&x4291)<<x4292);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x4305 = 11134U;
	int8_t x4307 = 1;
	static uint64_t x4308 = 49LLU;
	uint64_t t111 = 1991900433097LLU;

    t111 = (((x4305-x4306)&x4307)<<x4308);

    if (t111 != 562949953421312LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x4321 = 1;
	int32_t x4322 = -1;
	volatile int16_t x4323 = INT16_MAX;
	volatile int8_t x4324 = 1;
	volatile int32_t t112 = -32889745;

    t112 = (((x4321-x4322)&x4323)<<x4324);

    if (t112 != 4) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x4357 = 24920341263727LLU;
	uint8_t x4358 = 0U;
	volatile int8_t x4359 = INT8_MIN;
	uint16_t x4360 = 3U;
	static volatile uint64_t t113 = 18110489584451097LLU;

    t113 = (((x4357-x4358)&x4359)<<x4360);

    if (t113 != 199362730108928LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x4471 = INT16_MAX;
	static volatile uint32_t x4472 = 0U;

    t114 = (((x4469-x4470)&x4471)<<x4472);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x4569 = -1;
	static volatile int16_t x4570 = INT16_MIN;
	volatile int8_t x4571 = 1;
	int8_t x4572 = 0;
	volatile int32_t t115 = -23;

    t115 = (((x4569-x4570)&x4571)<<x4572);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x4617 = 20881771622LLU;
	int16_t x4619 = 895;
	uint32_t x4620 = 0U;
	volatile uint64_t t116 = 516LLU;

    t116 = (((x4617-x4618)&x4619)<<x4620);

    if (t116 != 871LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x4626 = INT8_MIN;
	volatile uint64_t x4627 = UINT64_MAX;
	volatile uint32_t x4628 = 13U;
	static volatile uint64_t t117 = 776LLU;

    t117 = (((x4625-x4626)&x4627)<<x4628);

    if (t117 != 1040384LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x4669 = 27326U;
	static uint8_t x4670 = 0U;
	static volatile uint16_t x4672 = 25U;
	uint32_t t118 = 2545U;

    t118 = (((x4669-x4670)&x4671)<<x4672);

    if (t118 != 2080374784U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x4711 = -38;
	uint16_t x4712 = 16U;

    t119 = (((x4709-x4710)&x4711)<<x4712);

    if (t119 != 4286578688U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x4745 = -1088824;
	static int8_t x4748 = 8;
	volatile uint64_t t120 = 634380LLU;

    t120 = (((x4745-x4746)&x4747)<<x4748);

    if (t120 != 164727787776LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x4785 = UINT32_MAX;
	int16_t x4786 = 4;
	int16_t x4787 = 1;
	volatile uint32_t t121 = 1U;

    t121 = (((x4785-x4786)&x4787)<<x4788);

    if (t121 != 8U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x4789 = 76481477;
	int8_t x4791 = 1;

    t122 = (((x4789-x4790)&x4791)<<x4792);

    if (t122 != 2) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x4809 = -1;
	int64_t x4810 = -54LL;
	uint64_t x4811 = UINT64_MAX;
	uint8_t x4812 = 0U;
	uint64_t t123 = 95756LLU;

    t123 = (((x4809-x4810)&x4811)<<x4812);

    if (t123 != 53LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x4819 = INT64_MIN;
	uint8_t x4820 = 31U;
	volatile int64_t t124 = -387338585458954LL;

    t124 = (((x4817-x4818)&x4819)<<x4820);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x4825 = INT32_MAX;
	uint16_t x4826 = 4U;
	int32_t x4827 = 744420;
	uint8_t x4828 = 3U;
	int32_t t125 = -5956;

    t125 = (((x4825-x4826)&x4827)<<x4828);

    if (t125 != 5955328) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x4845 = -223;
	int64_t x4846 = INT64_MIN;
	uint8_t x4847 = 87U;
	volatile int32_t x4848 = 0;
	volatile int64_t t126 = 61LL;

    t126 = (((x4845-x4846)&x4847)<<x4848);

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x4869 = UINT32_MAX;
	int64_t x4870 = -4562059018LL;
	static volatile int8_t x4871 = 22;

    t127 = (((x4869-x4870)&x4871)<<x4872);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x4921 = UINT64_MAX;
	int8_t x4922 = INT8_MIN;
	static volatile int64_t x4923 = 48368105973060429LL;
	uint8_t x4924 = 1U;
	volatile uint64_t t128 = 51548LLU;

    t128 = (((x4921-x4922)&x4923)<<x4924);

    if (t128 != 154LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x4929 = 10;
	int8_t x4930 = -3;
	static uint64_t x4931 = 678640757380619LLU;
	int8_t x4932 = 49;

    t129 = (((x4929-x4930)&x4931)<<x4932);

    if (t129 != 5066549580791808LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x4941 = INT32_MIN;
	int32_t x4942 = INT32_MIN;
	int64_t x4943 = 2056155LL;
	uint16_t x4944 = 1U;
	int64_t t130 = -1708LL;

    t130 = (((x4941-x4942)&x4943)<<x4944);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x4951 = 473022U;
	uint8_t x4952 = 0U;
	uint32_t t131 = 167U;

    t131 = (((x4949-x4950)&x4951)<<x4952);

    if (t131 != 65536U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x4974 = 94523405LLU;
	static uint32_t x4975 = 972073580U;
	volatile uint8_t x4976 = 3U;
	volatile uint64_t t132 = 1117380927621736LLU;

    t132 = (((x4973-x4974)&x4975)<<x4976);

    if (t132 != 7558484736LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x4989 = 0U;
	int16_t x4991 = -1;
	uint8_t x4992 = 6U;

    t133 = (((x4989-x4990)&x4991)<<x4992);

    if (t133 != 2097152) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x5001 = 52U;
	uint32_t x5002 = 394001U;
	uint32_t t134 = 847114366U;

    t134 = (((x5001-x5002)&x5003)<<x5004);

    if (t134 != 805306368U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x5061 = INT16_MIN;
	int32_t x5062 = INT32_MIN;
	uint8_t x5063 = 1U;
	uint8_t x5064 = 1U;
	int32_t t135 = -735175;

    t135 = (((x5061-x5062)&x5063)<<x5064);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x5065 = INT16_MAX;
	int32_t x5066 = -1;
	int64_t x5067 = 3393LL;
	uint16_t x5068 = 5U;
	volatile int64_t t136 = 289503354LL;

    t136 = (((x5065-x5066)&x5067)<<x5068);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x5093 = INT8_MIN;
	volatile int64_t x5094 = INT64_MIN;
	int16_t x5095 = 23;
	volatile uint8_t x5096 = 4U;
	int64_t t137 = 5LL;

    t137 = (((x5093-x5094)&x5095)<<x5096);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x5219 = INT16_MIN;
	uint64_t x5220 = 2LLU;
	volatile uint32_t t138 = 659256398U;

    t138 = (((x5217-x5218)&x5219)<<x5220);

    if (t138 != 262144U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x5241 = -1LL;
	uint16_t x5242 = 7846U;
	static int16_t x5243 = INT16_MAX;
	uint8_t x5244 = 15U;
	static volatile int64_t t139 = -40514243362617825LL;

    t139 = (((x5241-x5242)&x5243)<<x5244);

    if (t139 != 816611328LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x5393 = 56U;
	int8_t x5394 = -1;
	uint32_t x5395 = 6067968U;
	uint16_t x5396 = 1U;

    t140 = (((x5393-x5394)&x5395)<<x5396);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x5413 = 29U;
	int32_t x5414 = 0;
	uint8_t x5416 = 20U;
	static int32_t t141 = -12848;

    t141 = (((x5413-x5414)&x5415)<<x5416);

    if (t141 != 4194304) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x5417 = 57011161889454739LL;
	static int8_t x5418 = INT8_MAX;
	volatile int16_t x5419 = -1;
	int8_t x5420 = 7;

    t142 = (((x5417-x5418)&x5419)<<x5420);

    if (t142 != 7297428721850190336LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x5449 = INT64_MIN;
	int64_t x5450 = INT64_MIN;
	int16_t x5451 = -1;
	int64_t t143 = 295145744147047LL;

    t143 = (((x5449-x5450)&x5451)<<x5452);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x5477 = UINT16_MAX;
	uint32_t x5478 = UINT32_MAX;
	uint8_t x5480 = 2U;

    t144 = (((x5477-x5478)&x5479)<<x5480);

    if (t144 != 262144U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x5509 = 227;
	int64_t x5510 = -1LL;
	static volatile uint32_t x5511 = 8359U;
	int8_t x5512 = 7;

    t145 = (((x5509-x5510)&x5511)<<x5512);

    if (t145 != 20992LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x5661 = -1LL;
	uint64_t x5662 = 1LLU;
	int64_t x5663 = INT64_MIN;
	static int8_t x5664 = 0;
	uint64_t t146 = 104627438718355699LLU;

    t146 = (((x5661-x5662)&x5663)<<x5664);

    if (t146 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x5729 = -1678;
	int64_t x5730 = -1LL;
	int32_t x5731 = INT32_MAX;
	int16_t x5732 = 0;
	volatile int64_t t147 = -7566LL;

    t147 = (((x5729-x5730)&x5731)<<x5732);

    if (t147 != 2147481971LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x5781 = UINT8_MAX;
	static uint8_t x5782 = 22U;
	volatile int64_t x5783 = -6033218475LL;
	int16_t x5784 = 27;
	volatile int64_t t148 = 402621LL;

    t148 = (((x5781-x5782)&x5783)<<x5784);

    if (t148 != 8724152320LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x5797 = -1;
	uint64_t x5798 = UINT64_MAX;
	uint16_t x5800 = 5U;

    t149 = (((x5797-x5798)&x5799)<<x5800);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x5801 = INT32_MIN;
	int32_t x5802 = -1;
	uint16_t x5803 = UINT16_MAX;

    t150 = (((x5801-x5802)&x5803)<<x5804);

    if (t150 != 32) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x5841 = INT32_MIN;
	uint8_t x5843 = 1U;
	static volatile uint64_t t151 = 245608596556692647LLU;

    t151 = (((x5841-x5842)&x5843)<<x5844);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x5853 = 81362735866863357LLU;
	int8_t x5854 = INT8_MIN;
	int16_t x5855 = INT16_MIN;
	uint8_t x5856 = 2U;
	static volatile uint64_t t152 = 494408469918939438LLU;

    t152 = (((x5853-x5854)&x5855)<<x5856);

    if (t152 != 325450943467356160LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x5881 = 146U;
	int8_t x5882 = INT8_MAX;
	volatile int16_t x5883 = -1;
	volatile int8_t x5884 = 1;
	int32_t t153 = -141;

    t153 = (((x5881-x5882)&x5883)<<x5884);

    if (t153 != 38) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x5893 = 13515667286148201LL;
	int16_t x5894 = -1;
	uint64_t x5895 = 420696864601207730LLU;
	uint64_t t154 = 1LLU;

    t154 = (((x5893-x5894)&x5895)<<x5896);

    if (t154 != 9016008238465092LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x6033 = -93;
	uint16_t x6034 = 208U;
	static volatile uint32_t t155 = 420049044U;

    t155 = (((x6033-x6034)&x6035)<<x6036);

    if (t155 != 160U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x6069 = UINT16_MAX;
	int8_t x6070 = INT8_MAX;
	int32_t x6071 = -25492557;
	volatile int32_t t156 = 2;

    t156 = (((x6069-x6070)&x6071)<<x6072);

    if (t156 != 14336) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x6093 = 0U;
	int16_t x6094 = -1;
	int16_t x6095 = -888;
	static volatile uint8_t x6096 = 2U;

    t157 = (((x6093-x6094)&x6095)<<x6096);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x6105 = 818332821797LLU;
	volatile int32_t x6106 = INT32_MIN;
	uint16_t x6107 = UINT16_MAX;
	int8_t x6108 = 21;
	volatile uint64_t t158 = 33353431972LLU;

    t158 = (((x6105-x6106)&x6107)<<x6108);

    if (t158 != 125168517120LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x6129 = 163678103870047LL;
	static volatile int16_t x6130 = INT16_MIN;
	static int16_t x6131 = -1;
	uint32_t x6132 = 0U;
	static int64_t t159 = -741822927LL;

    t159 = (((x6129-x6130)&x6131)<<x6132);

    if (t159 != 163678103902815LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x6161 = 3U;
	uint16_t x6162 = 1U;
	uint8_t x6164 = 0U;
	volatile int32_t t160 = 255467178;

    t160 = (((x6161-x6162)&x6163)<<x6164);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x6173 = INT8_MIN;
	uint32_t x6174 = 300470U;
	int8_t x6175 = -6;
	int8_t x6176 = 1;
	volatile uint32_t t161 = 65039U;

    t161 = (((x6173-x6174)&x6175)<<x6176);

    if (t161 != 4294366100U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x6233 = -1;
	volatile uint64_t x6234 = UINT64_MAX;
	volatile uint64_t t162 = 709858LLU;

    t162 = (((x6233-x6234)&x6235)<<x6236);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x6269 = INT8_MAX;
	static uint8_t x6271 = 1U;
	uint16_t x6272 = 23U;
	uint32_t t163 = 424339286U;

    t163 = (((x6269-x6270)&x6271)<<x6272);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x6325 = INT16_MIN;
	int64_t x6326 = -658554117138140487LL;
	int32_t x6327 = 2433;
	static volatile int64_t t164 = -14405136696275354LL;

    t164 = (((x6325-x6326)&x6327)<<x6328);

    if (t164 != 37765120LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x6345 = 514746497030797LL;
	static int16_t x6346 = INT16_MIN;
	static int32_t x6347 = INT32_MIN;
	uint8_t x6348 = 6U;
	volatile int64_t t165 = -91LL;

    t165 = (((x6345-x6346)&x6347)<<x6348);

    if (t165 != 32943704830377984LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x6393 = INT64_MIN;
	int8_t x6394 = -28;
	uint32_t x6395 = UINT32_MAX;
	volatile uint8_t x6396 = 6U;
	static volatile int64_t t166 = 245606522516877754LL;

    t166 = (((x6393-x6394)&x6395)<<x6396);

    if (t166 != 1792LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x6401 = INT16_MIN;
	int16_t x6402 = INT16_MAX;
	static uint16_t x6403 = 43U;
	static uint8_t x6404 = 1U;
	volatile int32_t t167 = -3182;

    t167 = (((x6401-x6402)&x6403)<<x6404);

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x6421 = INT16_MIN;
	int16_t x6422 = INT16_MAX;
	int8_t x6423 = INT8_MAX;
	static int8_t x6424 = 1;
	static volatile int32_t t168 = 258222;

    t168 = (((x6421-x6422)&x6423)<<x6424);

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x6453 = 61U;
	int8_t x6454 = INT8_MIN;
	int8_t x6455 = INT8_MIN;
	static volatile int16_t x6456 = 1;
	int32_t t169 = 944859756;

    t169 = (((x6453-x6454)&x6455)<<x6456);

    if (t169 != 256) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x6502 = 1U;
	int16_t x6503 = -5;
	volatile uint32_t t170 = 8475973U;

    t170 = (((x6501-x6502)&x6503)<<x6504);

    if (t170 != 4294967272U) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint8_t x6518 = 25U;
	int8_t x6519 = 1;
	static uint8_t x6520 = 2U;
	volatile int64_t t171 = -3494074082455994604LL;

    t171 = (((x6517-x6518)&x6519)<<x6520);

    if (t171 != 4LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x6529 = INT32_MAX;
	int8_t x6530 = INT8_MAX;
	int64_t x6531 = 46243857LL;
	static volatile int16_t x6532 = 15;
	volatile int64_t t172 = 685849969589100LL;

    t172 = (((x6529-x6530)&x6531)<<x6532);

    if (t172 != 1515318149120LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x6573 = INT8_MAX;
	uint64_t x6574 = 1LLU;
	int8_t x6575 = -1;
	uint8_t x6576 = 1U;
	uint64_t t173 = 13830263LLU;

    t173 = (((x6573-x6574)&x6575)<<x6576);

    if (t173 != 252LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x6577 = INT64_MIN;
	volatile int16_t x6578 = -1;
	uint8_t x6580 = 3U;
	uint64_t t174 = 172352112031078LLU;

    t174 = (((x6577-x6578)&x6579)<<x6580);

    if (t174 != 8LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x6621 = INT8_MIN;
	volatile uint32_t x6622 = 4226U;
	int16_t x6623 = -1;
	int8_t x6624 = 3;
	uint32_t t175 = 3918U;

    t175 = (((x6621-x6622)&x6623)<<x6624);

    if (t175 != 4294932464U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x6629 = INT64_MIN;
	uint32_t x6631 = 990U;
	volatile int8_t x6632 = 22;

    t176 = (((x6629-x6630)&x6631)<<x6632);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x6701 = -1;
	volatile int32_t x6702 = -1;
	static int64_t x6703 = 20LL;
	static uint16_t x6704 = 0U;
	static int64_t t177 = 9147604804682622LL;

    t177 = (((x6701-x6702)&x6703)<<x6704);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x6739 = INT16_MIN;
	uint8_t x6740 = 4U;
	volatile int32_t t178 = 42054102;

    t178 = (((x6737-x6738)&x6739)<<x6740);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x6757 = INT8_MIN;
	volatile uint64_t x6758 = UINT64_MAX;
	int64_t x6759 = INT64_MIN;
	int8_t x6760 = 3;

    t179 = (((x6757-x6758)&x6759)<<x6760);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x6777 = UINT8_MAX;
	int8_t x6778 = -1;
	uint16_t x6780 = 8U;
	int32_t t180 = -193172087;

    t180 = (((x6777-x6778)&x6779)<<x6780);

    if (t180 != 65536) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x6810 = UINT16_MAX;
	int16_t x6811 = 113;
	static volatile uint8_t x6812 = 1U;
	volatile int32_t t181 = 19837216;

    t181 = (((x6809-x6810)&x6811)<<x6812);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x6846 = -20;
	int32_t x6848 = 5;

    t182 = (((x6845-x6846)&x6847)<<x6848);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x6857 = -1;
	static int8_t x6859 = INT8_MAX;
	uint16_t x6860 = 13U;
	static int32_t t183 = -42;

    t183 = (((x6857-x6858)&x6859)<<x6860);

    if (t183 != 1040384) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x6942 = INT16_MIN;
	static volatile int16_t x6943 = INT16_MIN;
	int16_t x6944 = 0;

    t184 = (((x6941-x6942)&x6943)<<x6944);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x6965 = 3831LL;
	int64_t x6966 = -1LL;
	int16_t x6967 = INT16_MAX;
	static int64_t t185 = 4630485831029249LL;

    t185 = (((x6965-x6966)&x6967)<<x6968);

    if (t185 != 125566976LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x7117 = INT16_MIN;
	static volatile uint64_t x7118 = 229146588LLU;
	int16_t x7119 = INT16_MAX;
	static volatile int16_t x7120 = 0;
	volatile uint64_t t186 = 2054LLU;

    t186 = (((x7117-x7118)&x7119)<<x7120);

    if (t186 != 36LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x7133 = 802670280187262085LLU;
	static volatile int64_t x7134 = INT64_MIN;
	uint8_t x7135 = UINT8_MAX;
	int8_t x7136 = 27;
	uint64_t t187 = 158LLU;

    t187 = (((x7133-x7134)&x7135)<<x7136);

    if (t187 != 17850957824LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x7237 = -1;
	static uint8_t x7239 = 3U;
	uint8_t x7240 = 3U;
	static uint64_t t188 = 1695319520979132080LLU;

    t188 = (((x7237-x7238)&x7239)<<x7240);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x7275 = 3U;
	static volatile int8_t x7276 = 0;

    t189 = (((x7273-x7274)&x7275)<<x7276);

    if (t189 != 2U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x7345 = 1;
	static int16_t x7346 = 33;
	uint8_t x7347 = 54U;
	volatile uint16_t x7348 = 3U;
	volatile int32_t t190 = 5653;

    t190 = (((x7345-x7346)&x7347)<<x7348);

    if (t190 != 256) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x7425 = -39949486LL;
	int16_t x7426 = -7329;
	uint8_t x7427 = UINT8_MAX;
	uint16_t x7428 = 9U;
	volatile int64_t t191 = 107716LL;

    t191 = (((x7425-x7426)&x7427)<<x7428);

    if (t191 != 124416LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x7485 = -2;
	int32_t x7486 = -5;
	static int32_t x7487 = -1;
	volatile uint8_t x7488 = 17U;

    t192 = (((x7485-x7486)&x7487)<<x7488);

    if (t192 != 393216) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x7511 = 32455435LLU;
	uint8_t x7512 = 8U;
	static uint64_t t193 = 736LLU;

    t193 = (((x7509-x7510)&x7511)<<x7512);

    if (t193 != 8308588544LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x7521 = INT32_MIN;
	int32_t x7522 = INT32_MIN;
	uint32_t x7523 = 65532U;
	uint8_t x7524 = 7U;
	static uint32_t t194 = 1925595U;

    t194 = (((x7521-x7522)&x7523)<<x7524);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x7654 = -11974;
	int16_t x7656 = 1;
	volatile uint64_t t195 = 28213615346LLU;

    t195 = (((x7653-x7654)&x7655)<<x7656);

    if (t195 != 20616LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x7669 = 7;
	int16_t x7671 = -26;
	int32_t t196 = 46490176;

    t196 = (((x7669-x7670)&x7671)<<x7672);

    if (t196 != 268) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x7678 = 14906444LLU;
	volatile int16_t x7679 = -1;
	int8_t x7680 = 0;
	uint64_t t197 = 8437626108736164332LLU;

    t197 = (((x7677-x7678)&x7679)<<x7680);

    if (t197 != 18446744073694645171LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x7681 = 44U;
	int16_t x7683 = -2347;
	uint32_t x7684 = 0U;
	volatile uint32_t t198 = 58U;

    t198 = (((x7681-x7682)&x7683)<<x7684);

    if (t198 != 5U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x7699 = 1U;
	uint16_t x7700 = 0U;
	int32_t t199 = 649721;

    t199 = (((x7697-x7698)&x7699)<<x7700);

    if (t199 != 1) { NG(); } else { ; }
	
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

