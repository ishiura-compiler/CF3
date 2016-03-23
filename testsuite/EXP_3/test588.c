
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

uint8_t x3 = 18U;
int64_t x6 = INT64_MIN;
int8_t x8 = INT8_MIN;
static uint64_t x15 = UINT64_MAX;
static volatile int32_t x20 = 393;
int32_t x30 = -1;
int64_t x32 = 10769138677138457LL;
static volatile int16_t x34 = INT16_MAX;
uint16_t x36 = 5U;
int64_t x40 = -1LL;
uint8_t x43 = 3U;
uint32_t x58 = UINT32_MAX;
int64_t x63 = 121471915LL;
static int16_t x72 = -1;
uint16_t x74 = 629U;
int8_t x75 = INT8_MAX;
int8_t x83 = INT8_MIN;
uint64_t t17 = 522334LLU;
volatile int16_t x90 = INT16_MIN;
static int64_t x91 = INT64_MIN;
volatile int16_t x100 = -1;
static volatile int32_t t22 = 5597;
static int8_t x119 = INT8_MIN;
int64_t x125 = INT64_MIN;
volatile uint64_t x126 = 6880529LLU;
volatile uint64_t t25 = 1156484400503LLU;
static volatile uint16_t x129 = 113U;
static uint64_t x133 = 5LLU;
uint64_t t28 = 13684376LLU;
volatile uint32_t x145 = UINT32_MAX;
static volatile uint8_t x146 = 123U;
int32_t x160 = 1;
int32_t x161 = INT32_MIN;
static int16_t x167 = INT16_MIN;
static int16_t x170 = INT16_MIN;
uint64_t x171 = 359306240814744557LLU;
volatile uint64_t t35 = 19318477167617613LLU;
int64_t x174 = INT64_MIN;
uint8_t x175 = 2U;
int16_t x190 = INT16_MAX;
int32_t x204 = -1;
volatile int32_t x212 = INT32_MIN;
volatile int32_t x216 = -3360913;
static int64_t x222 = -1LL;
uint64_t x223 = UINT64_MAX;
volatile int64_t t44 = 6062766116LL;
int16_t x238 = INT16_MIN;
static int32_t x239 = 123;
int64_t t45 = -867669LL;
uint8_t x246 = UINT8_MAX;
int8_t x248 = INT8_MIN;
volatile int32_t t46 = 39065790;
volatile int16_t x255 = INT16_MAX;
static volatile int64_t x262 = -1LL;
uint64_t t50 = 1LLU;
int8_t x272 = INT8_MIN;
int32_t t51 = 88097126;
static int16_t x273 = -1;
uint32_t x276 = 7U;
int64_t t53 = 12480766849323LL;
static volatile int8_t x289 = INT8_MIN;
static int16_t x299 = 10;
static volatile int64_t t56 = -65986752196859663LL;
uint16_t x310 = 552U;
volatile int16_t x315 = 1;
uint8_t x316 = UINT8_MAX;
uint32_t x319 = 246082U;
int64_t x320 = -10311091LL;
static int8_t x330 = INT8_MIN;
int32_t x331 = -122;
static int16_t x340 = INT16_MIN;
int16_t x346 = -1194;
static int8_t x361 = INT8_MIN;
static uint32_t x362 = UINT32_MAX;
int64_t x363 = -3714732189204344LL;
static int8_t x387 = -1;
uint64_t t71 = 516752569089LLU;
int16_t x391 = INT16_MIN;
static int16_t x395 = INT16_MIN;
int32_t x398 = -1;
uint8_t x399 = 21U;
int64_t x401 = -1LL;
static volatile int32_t x403 = INT32_MIN;
uint8_t x404 = 0U;
volatile int64_t t75 = -22775865447490965LL;
int64_t x411 = INT64_MIN;
static uint32_t x419 = 7U;
int16_t x422 = -1;
volatile uint32_t x424 = UINT32_MAX;
static int16_t x433 = 1599;
uint64_t x436 = UINT64_MAX;
uint64_t t82 = 8LLU;
static uint64_t x457 = 6692226LLU;
int16_t x460 = INT16_MIN;
int8_t x461 = INT8_MAX;
static int64_t x462 = -1LL;
int64_t t86 = -1105LL;
volatile int64_t t88 = 375LL;
volatile uint64_t x490 = 665773144709LLU;
volatile int32_t x493 = INT32_MIN;
int32_t t91 = -21;
volatile uint32_t x507 = 24U;
uint8_t x508 = UINT8_MAX;
int16_t x515 = INT16_MAX;
uint32_t x516 = UINT32_MAX;
int8_t x517 = INT8_MIN;
volatile int16_t x523 = -1;
uint8_t x524 = UINT8_MAX;
int8_t x527 = -4;
uint64_t t97 = 2201906254276096007LLU;
static int32_t t98 = 125;
volatile uint8_t x537 = UINT8_MAX;
int8_t x541 = INT8_MAX;
static int32_t x542 = -1;
uint32_t x548 = UINT32_MAX;
int16_t x558 = INT16_MIN;
int64_t x568 = -615283054846LL;
int32_t x582 = 33076;
int8_t x586 = INT8_MAX;
static int64_t x588 = INT64_MIN;
uint64_t t108 = 238544041418441LLU;
volatile uint64_t x592 = 6967035988LLU;
int16_t x602 = INT16_MIN;
int16_t x603 = -1;
static int8_t x609 = INT8_MIN;
static int64_t x614 = INT64_MAX;
static int16_t x615 = INT16_MIN;
int32_t x631 = 817;
volatile uint64_t t118 = 195LLU;
static volatile int32_t x634 = INT32_MAX;
volatile int32_t x637 = INT32_MIN;
int16_t x639 = INT16_MIN;
static int32_t t120 = 14224235;
volatile int64_t t121 = -1959978473LL;
int8_t x655 = -1;
int64_t x658 = -1LL;
uint8_t x667 = 0U;
volatile uint32_t t126 = 87090996U;
int64_t x676 = 5779865233948223LL;
static int64_t t127 = -2LL;
uint8_t x688 = 0U;
int16_t x690 = INT16_MIN;
int64_t t131 = 1105LL;
static uint8_t x702 = UINT8_MAX;
static volatile int32_t x707 = INT32_MAX;
int32_t x709 = -776398;
volatile int32_t x725 = 1486637;
int64_t t137 = 18992250LL;
volatile uint32_t x732 = 3U;
static uint8_t x733 = 1U;
uint16_t x734 = 4204U;
volatile uint16_t x736 = UINT16_MAX;
int64_t t140 = -155036LL;
int8_t x746 = -61;
static volatile uint32_t x747 = UINT32_MAX;
uint32_t t141 = 1510121U;
int32_t x750 = INT32_MIN;
static int32_t x760 = -1;
int32_t x761 = INT32_MIN;
int64_t x768 = 15489496LL;
static int16_t x792 = 1;
static int64_t t149 = 15331105788866906LL;
uint8_t x795 = 1U;
uint64_t x799 = 10280033373931LLU;
uint64_t x810 = 20231672LLU;
int8_t x812 = -1;
int64_t x817 = INT64_MAX;
int64_t x818 = 681689544766297012LL;
int64_t t155 = -602857359491LL;
volatile int64_t x829 = -1LL;
static int8_t x833 = -1;
uint32_t t158 = 1U;
int64_t x843 = INT64_MIN;
volatile int64_t t162 = 2690868609818LL;
static volatile uint32_t t163 = UINT32_MAX;
int16_t x859 = INT16_MIN;
int64_t x860 = -1LL;
uint8_t x874 = 7U;
int64_t x882 = -1LL;
uint64_t x889 = 4249023545LLU;
volatile int64_t x894 = 24LL;
int16_t x895 = INT16_MIN;
int64_t t171 = -47251583530680173LL;
static uint16_t x897 = 61U;
int32_t x900 = -1880234;
int32_t t172 = -37;
static int16_t x901 = -1;
volatile int16_t x911 = INT16_MIN;
volatile uint32_t t177 = 311732028U;
volatile uint32_t t178 = 0U;
volatile int16_t x931 = -994;
int8_t x944 = INT8_MIN;
uint8_t x953 = UINT8_MAX;
volatile uint64_t t184 = 15LLU;
int8_t x957 = INT8_MAX;
static uint64_t x961 = 235LLU;
int64_t x968 = INT64_MIN;
volatile int64_t x972 = INT64_MAX;
volatile uint64_t t189 = 449684292276928281LLU;
static uint32_t x985 = 17824552U;
static uint64_t x997 = 48242685137766LLU;
volatile uint64_t t191 = 224462648788024LLU;
int8_t x1008 = -10;
uint64_t x1011 = UINT64_MAX;
int8_t x1021 = INT8_MIN;
int64_t x1042 = -888230LL;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	int32_t x2 = 2837800;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 246;

    t0 = ((x1^x2)^(x3*x4));

    if (t0 != -2841786) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	uint8_t x7 = 22U;
	static int64_t t1 = 135821566766LL;

    t1 = ((x5^x6)^(x7*x8));

    if (t1 != -2816LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -140098706465218LL;
	int32_t x10 = -2474531;
	int16_t x11 = 2042;
	int8_t x12 = INT8_MIN;
	int64_t t2 = 51542LL;

    t2 = ((x9^x10)^(x11*x12));

    if (t2 != -140098704760605LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 1242U;
	int64_t x14 = INT64_MAX;
	uint64_t x16 = 3LLU;
	static volatile uint64_t t3 = 625917983501463LLU;

    t3 = ((x13^x14)^(x15*x16));

    if (t3 != 9223372036854777048LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	uint32_t x18 = 137U;
	static int8_t x19 = INT8_MIN;
	volatile uint32_t t4 = 297U;

    t4 = ((x17^x18)^(x19*x20));

    if (t4 != 2147433225U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -41444LL;
	uint32_t x22 = 15U;
	volatile int16_t x23 = -3902;
	static int16_t x24 = INT16_MIN;
	int64_t t5 = -1660866LL;

    t5 = ((x21^x22)^(x23*x24));

    if (t5 != -127902189LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 59U;
	uint16_t x31 = 4U;
	int64_t t6 = 1705173LL;

    t6 = ((x29^x30)^(x31*x32));

    if (t6 != -43076554708553824LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	static int8_t x35 = INT8_MIN;
	int32_t t7 = 3;

    t7 = ((x33^x34)^(x35*x36));

    if (t7 != 32128) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	static uint8_t x38 = 3U;
	volatile int8_t x39 = INT8_MIN;
	int64_t t8 = -12559LL;

    t8 = ((x37^x38)^(x39*x40));

    if (t8 != -132LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	int64_t x42 = INT64_MIN;
	int16_t x44 = INT16_MIN;
	volatile int64_t t9 = -486LL;

    t9 = ((x41^x42)^(x43*x44));

    if (t9 != -9223372036854677505LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = -1;
	static uint64_t x54 = 5LLU;
	volatile uint64_t x55 = 1055249LLU;
	static int32_t x56 = INT32_MAX;
	static volatile uint64_t t10 = 1050146985772345LLU;

    t10 = ((x53^x54)^(x55*x56));

    if (t10 != 18444477943738538517LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x57 = 1U;
	volatile uint16_t x59 = 1505U;
	int8_t x60 = INT8_MIN;
	volatile uint32_t t11 = 56593989U;

    t11 = ((x57^x58)^(x59*x60));

    if (t11 != 192638U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MIN;
	int32_t x62 = -1;
	uint16_t x64 = 38U;
	int64_t t12 = -3894296995230598316LL;

    t12 = ((x61^x62)^(x63*x64));

    if (t12 != 6121485469LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	int8_t x67 = -1;
	volatile int16_t x68 = INT16_MAX;
	static volatile int32_t t13 = -11;

    t13 = ((x65^x66)^(x67*x68));

    if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x69 = 701U;
	uint64_t x70 = UINT64_MAX;
	int8_t x71 = -3;
	volatile uint64_t t14 = 16175911LLU;

    t14 = ((x69^x70)^(x71*x72));

    if (t14 != 18446744073709550913LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MIN;
	uint16_t x76 = 3U;
	int64_t t15 = -94423080777LL;

    t15 = ((x73^x74)^(x75*x76));

    if (t15 != -9223372036854775032LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x81 = 72409587U;
	int8_t x82 = 1;
	int64_t x84 = -1LL;
	volatile int64_t t16 = -737046LL;

    t16 = ((x81^x82)^(x83*x84));

    if (t16 != 72409458LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x85 = 1049478780LLU;
	uint16_t x86 = 2633U;
	static uint8_t x87 = UINT8_MAX;
	volatile int8_t x88 = -1;

    t17 = ((x85^x86)^(x87*x88));

    if (t17 != 18446744072660071220LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x89 = 2907707LLU;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t18 = 204367LLU;

    t18 = ((x89^x90)^(x91*x92));

    if (t18 != 9223372036851883579LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x93 = 53974U;
	volatile int64_t x94 = INT64_MIN;
	int64_t x95 = -24143668LL;
	int64_t x96 = -1LL;
	volatile int64_t t19 = -502258702547330467LL;

    t19 = ((x93^x94)^(x95*x96));

    if (t19 != -9223372036830611998LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x97 = UINT8_MAX;
	int16_t x98 = -1;
	int32_t x99 = 44;
	volatile int32_t t20 = -49129327;

    t20 = ((x97^x98)^(x99*x100));

    if (t20 != 212) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x102 = -1LL;
	int32_t x103 = -1;
	int16_t x104 = INT16_MAX;
	volatile int64_t t21 = 232268516037550LL;

    t21 = ((x101^x102)^(x103*x104));

    if (t21 != -32642LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x109 = INT8_MIN;
	int32_t x110 = -4093;
	int8_t x111 = INT8_MIN;
	static volatile int16_t x112 = INT16_MAX;

    t22 = ((x109^x110)^(x111*x112));

    if (t22 != -4190461) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x113 = 46U;
	int32_t x114 = 236023855;
	int8_t x115 = -1;
	static int64_t x116 = INT64_MAX;
	int64_t t23 = -5607418861LL;

    t23 = ((x113^x114)^(x115*x116));

    if (t23 != -9223372036618752000LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x117 = INT64_MIN;
	static uint16_t x118 = UINT16_MAX;
	uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t24 = 8049LLU;

    t24 = ((x117^x118)^(x119*x120));

    if (t24 != 9223372036854841215LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x127 = 213327;
	int16_t x128 = 114;

    t25 = ((x125^x126)^(x127*x128));

    if (t25 != 9223372036873381951LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x130 = -38;
	int32_t x131 = -1;
	int64_t x132 = -1LL;
	volatile int64_t t26 = 722LL;

    t26 = ((x129^x130)^(x131*x132));

    if (t26 != -86LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x134 = INT32_MIN;
	static volatile int64_t x135 = -1LL;
	uint8_t x136 = UINT8_MAX;
	static uint64_t t27 = 5801241584964LLU;

    t27 = ((x133^x134)^(x135*x136));

    if (t27 != 2147483396LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x137 = INT64_MIN;
	int16_t x138 = -165;
	volatile int64_t x139 = -42514LL;
	uint64_t x140 = 32533016861LLU;

    t28 = ((x137^x138)^(x139*x140));

    if (t28 != 9224755145533604525LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x141 = -1;
	static int32_t x142 = INT32_MAX;
	uint32_t x143 = UINT32_MAX;
	uint32_t x144 = 1946U;
	uint32_t t29 = 7446639U;

    t29 = ((x141^x142)^(x143*x144));

    if (t29 != 2147481702U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x147 = 28U;
	int32_t x148 = 17777004;
	volatile uint32_t t30 = 58080069U;

    t30 = ((x145^x146)^(x147*x148));

    if (t30 != 3797211220U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x153 = 54U;
	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	static uint32_t x156 = UINT32_MAX;
	volatile int64_t t31 = 910658432779923653LL;

    t31 = ((x153^x154)^(x155*x156));

    if (t31 != -9223372034707292106LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x157 = INT8_MIN;
	volatile int16_t x158 = INT16_MAX;
	uint64_t x159 = 2356LLU;
	volatile uint64_t t32 = 2485LLU;

    t32 = ((x157^x158)^(x159*x160));

    if (t32 != 18446744073709521227LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x162 = -1;
	volatile uint32_t x163 = 8827164U;
	uint16_t x164 = 15636U;
	uint32_t t33 = 393514U;

    t33 = ((x161^x162)^(x163*x164));

    if (t33 != 1564900815U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x165 = UINT64_MAX;
	int32_t x166 = INT32_MIN;
	static int8_t x168 = INT8_MAX;
	volatile uint64_t t34 = 5508689690205094630LLU;

    t34 = ((x165^x166)^(x167*x168));

    if (t34 != 18446744071566229503LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x169 = -1;
	int32_t x172 = INT32_MIN;

    t35 = ((x169^x170)^(x171*x172));

    if (t35 != 6292652421122392063LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x173 = -841390420;
	uint64_t x176 = 128LLU;
	volatile uint64_t t36 = 1065553065LLU;

    t36 = ((x173^x174)^(x175*x176));

    if (t36 != 9223372036013385644LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x189 = -168;
	volatile uint16_t x191 = UINT16_MAX;
	volatile int16_t x192 = -1;
	volatile int32_t t37 = 2394;

    t37 = ((x189^x190)^(x191*x192));

    if (t37 != 32934) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x201 = 2683U;
	static volatile int32_t x202 = 0;
	static uint32_t x203 = 1769421U;
	uint32_t t38 = 3U;

    t38 = ((x201^x202)^(x203*x204));

    if (t38 != 4293200456U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x209 = 17215665426782413LL;
	int8_t x210 = INT8_MIN;
	volatile uint16_t x211 = 1U;
	int64_t t39 = -512316009400558349LL;

    t39 = ((x209^x210)^(x211*x212));

    if (t39 != 17215663603590989LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x213 = 3;
	int32_t x214 = INT32_MIN;
	int64_t x215 = -2958293636LL;
	int64_t t40 = 3469687468808LL;

    t40 = ((x213^x214)^(x215*x216));

    if (t40 != -9942566253230905LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x217 = INT64_MIN;
	int64_t x218 = -1LL;
	static int64_t x219 = -1LL;
	int16_t x220 = -7862;
	volatile int64_t t41 = 0LL;

    t41 = ((x217^x218)^(x219*x220));

    if (t41 != 9223372036854767945LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x221 = INT16_MIN;
	uint64_t x224 = 846219461776126826LLU;
	uint64_t t42 = 17LLU;

    t42 = ((x221^x222)^(x223*x224));

    if (t42 != 17600524611933418345LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x229 = 48;
	uint8_t x230 = UINT8_MAX;
	static int32_t x231 = -119;
	int8_t x232 = -54;
	int32_t t43 = -5948;

    t43 = ((x229^x230)^(x231*x232));

    if (t43 != 6613) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x233 = 60846519;
	int32_t x234 = INT32_MAX;
	static uint32_t x235 = 12058U;
	static int64_t x236 = -8271LL;

    t44 = ((x233^x234)^(x235*x236));

    if (t44 != -2041464654LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x237 = 27431609237541229LL;
	int32_t x240 = -1;

    t45 = ((x237^x238)^(x239*x240));

    if (t45 != 27431609237565160LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x245 = INT8_MAX;
	uint8_t x247 = UINT8_MAX;

    t46 = ((x245^x246)^(x247*x248));

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MAX;
	static volatile int8_t x251 = -1;
	uint16_t x252 = UINT16_MAX;
	int32_t t47 = -41;

    t47 = ((x249^x250)^(x251*x252));

    if (t47 != 2147450878) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x253 = 1;
	static volatile int32_t x254 = -1;
	int16_t x256 = INT16_MIN;
	static volatile int32_t t48 = -6566768;

    t48 = ((x253^x254)^(x255*x256));

    if (t48 != 1073709054) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint16_t x261 = UINT16_MAX;
	volatile int32_t x263 = 230;
	uint8_t x264 = UINT8_MAX;
	int64_t t49 = -188259LL;

    t49 = ((x261^x262)^(x263*x264));

    if (t49 != -6886LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x265 = INT8_MIN;
	volatile uint64_t x266 = UINT64_MAX;
	static int32_t x267 = INT32_MIN;
	static uint64_t x268 = 722746615LLU;

    t50 = ((x265^x266)^(x267*x268));

    if (t50 != 16894657536349700223LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x269 = UINT16_MAX;
	int32_t x270 = 106056554;
	int8_t x271 = -1;

    t51 = ((x269^x270)^(x271*x272));

    if (t51 != 106083349) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x274 = UINT16_MAX;
	static uint32_t x275 = 998345257U;
	uint32_t t52 = 371474U;

    t52 = ((x273^x274)^(x275*x276));

    if (t52 != 1601554207U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x285 = INT32_MIN;
	volatile int64_t x286 = -1LL;
	uint32_t x287 = 4725258U;
	uint32_t x288 = UINT32_MAX;

    t53 = ((x285^x286)^(x287*x288));

    if (t53 != 2152208905LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x290 = 169965723U;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 0U;
	volatile uint32_t t54 = 495U;

    t54 = ((x289^x290)^(x291*x292));

    if (t54 != 4125001499U) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x293 = -1LL;
	static volatile int8_t x294 = INT8_MIN;
	static volatile int16_t x295 = INT16_MIN;
	int16_t x296 = -1;
	volatile int64_t t55 = 61210169LL;

    t55 = ((x293^x294)^(x295*x296));

    if (t55 != 32895LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x297 = INT64_MIN;
	uint16_t x298 = 27U;
	static int64_t x300 = -186LL;

    t56 = ((x297^x298)^(x299*x300));

    if (t56 != 9223372036854773927LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x301 = -257;
	static int64_t x302 = INT64_MAX;
	uint64_t x303 = UINT64_MAX;
	int64_t x304 = INT64_MIN;
	volatile uint64_t t57 = 24713123LLU;

    t57 = ((x301^x302)^(x303*x304));

    if (t57 != 256LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x309 = 0U;
	static uint16_t x311 = 0U;
	int32_t x312 = 2079;
	static volatile int32_t t58 = 98137;

    t58 = ((x309^x310)^(x311*x312));

    if (t58 != 552) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x313 = 1LL;
	int64_t x314 = INT64_MAX;
	volatile int64_t t59 = 5314LL;

    t59 = ((x313^x314)^(x315*x316));

    if (t59 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x317 = INT64_MIN;
	volatile int64_t x318 = -118805916356LL;
	static volatile int64_t t60 = 129593423969LL;

    t60 = ((x317^x318)^(x319*x320));

    if (t60 != -9223369470911225370LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x325 = 814446LLU;
	uint16_t x326 = 4209U;
	static uint8_t x327 = 33U;
	uint8_t x328 = 2U;
	uint64_t t61 = 507944723LLU;

    t61 = ((x325^x326)^(x327*x328));

    if (t61 != 818525LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x329 = -1;
	int32_t x332 = -1;
	int32_t t62 = -3233;

    t62 = ((x329^x330)^(x331*x332));

    if (t62 != 5) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x333 = -26048838069LL;
	int32_t x334 = INT32_MIN;
	static uint16_t x335 = 2684U;
	int16_t x336 = INT16_MIN;
	int64_t t63 = 3LL;

    t63 = ((x333^x334)^(x335*x336));

    if (t63 != -27554724277LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x337 = 21;
	int8_t x338 = 2;
	int16_t x339 = -1;
	volatile int32_t t64 = -332875;

    t64 = ((x337^x338)^(x339*x340));

    if (t64 != 32791) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x341 = INT32_MAX;
	static volatile int16_t x342 = INT16_MAX;
	int16_t x343 = -1;
	volatile int16_t x344 = -1;
	int32_t t65 = -128429587;

    t65 = ((x341^x342)^(x343*x344));

    if (t65 != 2147450881) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x345 = -15770;
	uint16_t x347 = 31504U;
	static volatile int64_t x348 = 54954196LL;
	int64_t t66 = 5159604LL;

    t66 = ((x345^x346)^(x347*x348));

    if (t66 != 1731276984432LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x357 = 0LLU;
	volatile uint32_t x358 = UINT32_MAX;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t67 = 109864011637181509LLU;

    t67 = ((x357^x358)^(x359*x360));

    if (t67 != 4294967167LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x364 = -200;
	static int64_t t68 = -3076LL;

    t68 = ((x361^x362)^(x363*x364));

    if (t68 != 742946437840868799LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x365 = UINT8_MAX;
	int16_t x366 = -1;
	uint16_t x367 = 382U;
	static uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t69 = 10LLU;

    t69 = ((x365^x366)^(x367*x368));

    if (t69 != 386LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x369 = -1LL;
	int16_t x370 = INT16_MIN;
	int64_t x371 = -1LL;
	int32_t x372 = -21;
	int64_t t70 = 723LL;

    t70 = ((x369^x370)^(x371*x372));

    if (t70 != 32746LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x385 = UINT64_MAX;
	int64_t x386 = INT64_MAX;
	int8_t x388 = -1;

    t71 = ((x385^x386)^(x387*x388));

    if (t71 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x389 = INT8_MIN;
	uint8_t x390 = 0U;
	uint8_t x392 = 2U;
	volatile int32_t t72 = 459764853;

    t72 = ((x389^x390)^(x391*x392));

    if (t72 != 65408) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x393 = -1LL;
	uint32_t x394 = 146003U;
	int8_t x396 = INT8_MAX;
	volatile int64_t t73 = 26212822560LL;

    t73 = ((x393^x394)^(x395*x396));

    if (t73 != 4015532LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x397 = INT16_MIN;
	int8_t x400 = 22;
	int32_t t74 = 26;

    t74 = ((x397^x398)^(x399*x400));

    if (t74 != 32305) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x402 = INT16_MIN;

    t75 = ((x401^x402)^(x403*x404));

    if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x409 = INT32_MAX;
	static uint16_t x410 = 75U;
	uint8_t x412 = 0U;
	volatile int64_t t76 = -753183367LL;

    t76 = ((x409^x410)^(x411*x412));

    if (t76 != 2147483572LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x413 = INT32_MIN;
	int8_t x414 = 1;
	static volatile int64_t x415 = -1LL;
	static volatile uint64_t x416 = 20817646605LLU;
	uint64_t t77 = 18966771018303LLU;

    t77 = ((x413^x414)^(x415*x416));

    if (t77 != 19984542706LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x417 = 42218;
	int16_t x418 = -1;
	static uint16_t x420 = 29264U;
	volatile uint32_t t78 = 0U;

    t78 = ((x417^x418)^(x419*x420));

    if (t78 != 4294736677U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	int16_t x423 = INT16_MAX;
	static uint32_t t79 = 57911802U;

    t79 = ((x421^x422)^(x423*x424));

    if (t79 != 32513U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x425 = INT32_MIN;
	uint64_t x426 = 383069190628LLU;
	uint32_t x427 = 215U;
	volatile int8_t x428 = INT8_MIN;
	volatile uint64_t t80 = 278838934LLU;

    t80 = ((x425^x426)^(x427*x428));

    if (t80 != 18446743688492903780LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x429 = INT64_MIN;
	static uint16_t x430 = UINT16_MAX;
	static int8_t x431 = INT8_MIN;
	uint16_t x432 = UINT16_MAX;
	volatile int64_t t81 = 62286509593205LL;

    t81 = ((x429^x430)^(x431*x432));

    if (t81 != 9223372036846452607LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x434 = 69680978;
	int32_t x435 = -1;

    t82 = ((x433^x434)^(x435*x436));

    if (t82 != 69679468LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x445 = 325470314301LL;
	int32_t x446 = INT32_MIN;
	uint64_t x447 = 335312614610975LLU;
	int8_t x448 = INT8_MIN;
	volatile uint64_t t83 = 1669891539055LLU;

    t83 = ((x445^x446)^(x447*x448));

    if (t83 != 42920317334138813LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x453 = 3961511652191662LLU;
	int16_t x454 = -1;
	int16_t x455 = INT16_MIN;
	int8_t x456 = -22;
	volatile uint64_t t84 = 458986LLU;

    t84 = ((x453^x454)^(x455*x456));

    if (t84 != 18442782562057818705LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x458 = INT32_MIN;
	uint64_t x459 = 63LLU;
	volatile uint64_t t85 = 12846070603LLU;

    t85 = ((x457^x458)^(x459*x460));

    if (t85 != 2139528578LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x463 = 9U;
	static int8_t x464 = INT8_MIN;

    t86 = ((x461^x462)^(x463*x464));

    if (t86 != 1024LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x469 = 3746752LLU;
	uint64_t x470 = 14980505620LLU;
	int64_t x471 = -1LL;
	int16_t x472 = INT16_MIN;
	volatile uint64_t t87 = 63494LLU;

    t87 = ((x469^x470)^(x471*x472));

    if (t87 != 14979025876LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x481 = INT64_MIN;
	uint32_t x482 = 83U;
	static int32_t x483 = 1058366;
	uint8_t x484 = 18U;

    t88 = ((x481^x482)^(x483*x484));

    if (t88 != -9223372036835725297LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x489 = -12;
	int16_t x491 = INT16_MIN;
	int64_t x492 = -1LL;
	uint64_t t89 = 35LLU;

    t89 = ((x489^x490)^(x491*x492));

    if (t89 != 18446743407936439665LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x494 = INT16_MAX;
	static uint32_t x495 = UINT32_MAX;
	int32_t x496 = -4920;
	volatile uint32_t t90 = 0U;

    t90 = ((x493^x494)^(x495*x496));

    if (t90 != 2147511495U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x501 = 65U;
	int16_t x502 = INT16_MIN;
	uint16_t x503 = 17U;
	int16_t x504 = -1;

    t91 = ((x501^x502)^(x503*x504));

    if (t91 != 32686) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x505 = INT16_MIN;
	volatile uint64_t x506 = UINT64_MAX;
	static uint64_t t92 = 3519134922473LLU;

    t92 = ((x505^x506)^(x507*x508));

    if (t92 != 26647LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x509 = UINT64_MAX;
	static int64_t x510 = INT64_MIN;
	volatile int8_t x511 = 21;
	int16_t x512 = -1;
	volatile uint64_t t93 = 3707480384284453978LLU;

    t93 = ((x509^x510)^(x511*x512));

    if (t93 != 9223372036854775828LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x513 = 12923U;
	int32_t x514 = INT32_MIN;
	uint32_t t94 = 425U;

    t94 = ((x513^x514)^(x515*x516));

    if (t94 != 2147463802U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x518 = 11056U;
	int16_t x519 = INT16_MAX;
	uint8_t x520 = 36U;
	int32_t t95 = -2407;

    t95 = ((x517^x518)^(x519*x520));

    if (t95 != -1168532) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x521 = 10646U;
	static int32_t x522 = INT32_MAX;
	int32_t t96 = -1022;

    t96 = ((x521^x522)^(x523*x524));

    if (t96 != -2147473048) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x525 = INT8_MIN;
	static int8_t x526 = INT8_MAX;
	uint64_t x528 = 21578690761032LLU;

    t97 = ((x525^x526)^(x527*x528));

    if (t97 != 86314763044127LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x533 = UINT8_MAX;
	int16_t x534 = INT16_MAX;
	uint16_t x535 = UINT16_MAX;
	static volatile int8_t x536 = -1;

    t98 = ((x533^x534)^(x535*x536));

    if (t98 != -33023) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x538 = -4083;
	int32_t x539 = -645054;
	int16_t x540 = -1;
	int32_t t99 = 13251006;

    t99 = ((x537^x538)^(x539*x540));

    if (t99 != -645300) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x543 = UINT32_MAX;
	int16_t x544 = INT16_MAX;
	uint32_t t100 = 136869U;

    t100 = ((x541^x542)^(x543*x544));

    if (t100 != 32641U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x545 = INT16_MIN;
	int32_t x546 = -11660;
	int32_t x547 = 439759;
	uint32_t t101 = 88234153U;

    t101 = ((x545^x546)^(x547*x548));

    if (t101 != 4294514757U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x549 = 92;
	int32_t x550 = INT32_MAX;
	int8_t x551 = -1;
	volatile uint16_t x552 = 0U;
	int32_t t102 = 83808471;

    t102 = ((x549^x550)^(x551*x552));

    if (t102 != 2147483555) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x553 = INT16_MAX;
	uint16_t x554 = 512U;
	int64_t x555 = -6LL;
	int64_t x556 = 40345996553LL;
	int64_t t103 = 0LL;

    t103 = ((x553^x554)^(x555*x556));

    if (t103 != -242075972555LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x557 = INT8_MIN;
	int16_t x559 = -1;
	static int8_t x560 = -6;
	volatile int32_t t104 = 379181417;

    t104 = ((x557^x558)^(x559*x560));

    if (t104 != 32646) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x565 = 0;
	int32_t x566 = -1;
	uint64_t x567 = UINT64_MAX;
	volatile uint64_t t105 = 29797818718803793LLU;

    t105 = ((x565^x566)^(x567*x568));

    if (t105 != 18446743458426496769LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x569 = INT32_MIN;
	static uint8_t x570 = UINT8_MAX;
	volatile int16_t x571 = 1;
	int16_t x572 = INT16_MIN;
	static volatile int32_t t106 = 153949;

    t106 = ((x569^x570)^(x571*x572));

    if (t106 != 2147451135) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x581 = INT32_MAX;
	int8_t x583 = -1;
	uint16_t x584 = 7416U;
	static volatile int32_t t107 = 15;

    t107 = ((x581^x582)^(x583*x584));

    if (t107 != -2147443261) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x585 = 64;
	uint64_t x587 = 738213LLU;

    t108 = ((x585^x586)^(x587*x588));

    if (t108 != 9223372036854775871LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x589 = 1913857317092LLU;
	uint16_t x590 = 36U;
	int64_t x591 = -26711515468866914LL;
	volatile uint64_t t109 = 16598414217081LLU;

    t109 = ((x589^x590)^(x591*x592));

    if (t109 != 17149214272533476120LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x593 = UINT8_MAX;
	int8_t x594 = INT8_MIN;
	int8_t x595 = 12;
	uint32_t x596 = 86529U;
	uint32_t t110 = 175715127U;

    t110 = ((x593^x594)^(x595*x596));

    if (t110 != 4293928819U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x597 = INT16_MAX;
	int64_t x598 = INT64_MIN;
	volatile int8_t x599 = -1;
	int16_t x600 = INT16_MIN;
	volatile int64_t t111 = -266418854438LL;

    t111 = ((x597^x598)^(x599*x600));

    if (t111 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x601 = INT64_MIN;
	static int32_t x604 = -1262;
	int64_t t112 = 280327054996852LL;

    t112 = ((x601^x602)^(x603*x604));

    if (t112 != 9223372036854744302LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x605 = INT64_MAX;
	uint64_t x606 = UINT64_MAX;
	int16_t x607 = 11;
	int16_t x608 = 76;
	volatile uint64_t t113 = 1675572046881501225LLU;

    t113 = ((x605^x606)^(x607*x608));

    if (t113 != 9223372036854776644LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x610 = 7851137595872425LLU;
	int16_t x611 = -19;
	volatile int16_t x612 = -2;
	volatile uint64_t t114 = 30203769LLU;

    t114 = ((x609^x610)^(x611*x612));

    if (t114 != 18438892936113679119LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x613 = 21;
	int8_t x616 = 0;
	volatile int64_t t115 = -32841567424LL;

    t115 = ((x613^x614)^(x615*x616));

    if (t115 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x621 = INT32_MIN;
	int8_t x622 = INT8_MIN;
	volatile int16_t x623 = 0;
	uint16_t x624 = 7970U;
	volatile int32_t t116 = 47;

    t116 = ((x621^x622)^(x623*x624));

    if (t116 != 2147483520) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x625 = UINT8_MAX;
	static volatile uint32_t x626 = 6403002U;
	int16_t x627 = -9;
	uint32_t x628 = UINT32_MAX;
	static volatile uint32_t t117 = 367U;

    t117 = ((x625^x626)^(x627*x628));

    if (t117 != 6402892U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x629 = UINT64_MAX;
	volatile int32_t x630 = 184;
	int16_t x632 = -2246;

    t118 = ((x629^x630)^(x631*x632));

    if (t118 != 1834845LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x633 = INT32_MIN;
	static uint64_t x635 = 487358628669LLU;
	static int32_t x636 = -184450;
	volatile uint64_t t119 = 937724LLU;

    t119 = ((x633^x634)^(x635*x636));

    if (t119 != 89893299057997049LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x638 = 1;
	uint8_t x640 = UINT8_MAX;

    t120 = ((x637^x638)^(x639*x640));

    if (t120 != 2139127809) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x641 = UINT16_MAX;
	static int32_t x642 = -1;
	volatile int64_t x643 = -32702452LL;
	uint16_t x644 = 502U;

    t121 = ((x641^x642)^(x643*x644));

    if (t121 != 16416577416LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x645 = 10281;
	static volatile uint16_t x646 = 49U;
	int16_t x647 = 4018;
	volatile uint16_t x648 = UINT16_MAX;
	volatile int32_t t122 = -9866;

    t122 = ((x645^x646)^(x647*x648));

    if (t122 != 263313494) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x653 = INT16_MIN;
	volatile int16_t x654 = -3509;
	uint8_t x656 = UINT8_MAX;
	int32_t t123 = -1;

    t123 = ((x653^x654)^(x655*x656));

    if (t123 != -29366) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x657 = INT16_MIN;
	uint32_t x659 = 33135U;
	uint16_t x660 = 244U;
	volatile int64_t t124 = -2309671582004494LL;

    t124 = ((x657^x658)^(x659*x660));

    if (t124 != 8069683LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x665 = INT16_MAX;
	int16_t x666 = -1;
	int64_t x668 = INT64_MIN;
	int64_t t125 = -907763303849664589LL;

    t125 = ((x665^x666)^(x667*x668));

    if (t125 != -32768LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x669 = INT8_MIN;
	uint32_t x670 = 119390860U;
	int32_t x671 = -716212969;
	uint32_t x672 = 3U;

    t126 = ((x669^x670)^(x671*x672));

    if (t126 != 2265735753U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x673 = -1;
	static int8_t x674 = INT8_MAX;
	int8_t x675 = INT8_MIN;

    t127 = ((x673^x674)^(x675*x676));

    if (t127 != 739822749945372416LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x685 = -1LL;
	volatile uint8_t x686 = 0U;
	volatile uint8_t x687 = UINT8_MAX;
	volatile int64_t t128 = -2850LL;

    t128 = ((x685^x686)^(x687*x688));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x691 = -1LL;
	uint64_t x692 = UINT64_MAX;
	volatile uint64_t t129 = 7997296590142250LLU;

    t129 = ((x689^x690)^(x691*x692));

    if (t129 != 2147450881LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x693 = INT8_MAX;
	int64_t x694 = -1LL;
	volatile uint64_t x695 = UINT64_MAX;
	int64_t x696 = -1LL;
	static uint64_t t130 = 6281471247696583521LLU;

    t130 = ((x693^x694)^(x695*x696));

    if (t130 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x697 = INT64_MIN;
	int32_t x698 = -1;
	int32_t x699 = -1;
	int32_t x700 = -5617;

    t131 = ((x697^x698)^(x699*x700));

    if (t131 != 9223372036854770190LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x701 = -1;
	static int16_t x703 = -121;
	uint8_t x704 = UINT8_MAX;
	static volatile int32_t t132 = 585;

    t132 = ((x701^x702)^(x703*x704));

    if (t132 != 30841) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x705 = 5620001212LL;
	volatile int32_t x706 = -1;
	int16_t x708 = -1;
	volatile int64_t t133 = 528846957274144LL;

    t133 = ((x705^x706)^(x707*x708));

    if (t133 != 5117417026LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x710 = INT64_MIN;
	int8_t x711 = INT8_MIN;
	int8_t x712 = INT8_MIN;
	static int64_t t134 = 419705970942LL;

    t134 = ((x709^x710)^(x711*x712));

    if (t134 != 9223372036854015794LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x713 = -1;
	uint32_t x714 = UINT32_MAX;
	static uint64_t x715 = 489LLU;
	int64_t x716 = -973LL;
	uint64_t t135 = 130278507LLU;

    t135 = ((x713^x714)^(x715*x716));

    if (t135 != 18446744073709075819LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x721 = UINT8_MAX;
	static int16_t x722 = -1479;
	volatile uint32_t x723 = 14732U;
	static volatile int8_t x724 = 60;
	uint32_t t136 = 2U;

    t136 = ((x721^x722)^(x723*x724));

    if (t136 != 4294084118U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x726 = INT64_MIN;
	int8_t x727 = -1;
	uint32_t x728 = 260U;

    t137 = ((x725^x726)^(x727*x728));

    if (t137 != -9223372032561294895LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x729 = INT8_MIN;
	int16_t x730 = -106;
	uint8_t x731 = 115U;
	uint32_t t138 = 13358900U;

    t138 = ((x729^x730)^(x731*x732));

    if (t138 != 335U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x735 = 9450LLU;
	uint64_t t139 = 65643490LLU;

    t139 = ((x733^x734)^(x735*x736));

    if (t139 != 619301755LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x741 = -114922LL;
	int16_t x742 = INT16_MIN;
	uint32_t x743 = UINT32_MAX;
	int32_t x744 = -99089383;

    t140 = ((x741^x742)^(x743*x744));

    if (t140 != 98977009LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x745 = -38;
	int16_t x748 = -2;

    t141 = ((x745^x746)^(x747*x748));

    if (t141 != 27U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x749 = UINT32_MAX;
	int32_t x751 = 2;
	int8_t x752 = INT8_MIN;
	static volatile uint32_t t142 = 21399U;

    t142 = ((x749^x750)^(x751*x752));

    if (t142 != 2147483903U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x757 = UINT32_MAX;
	int8_t x758 = INT8_MIN;
	int8_t x759 = INT8_MIN;
	volatile uint32_t t143 = 3661U;

    t143 = ((x757^x758)^(x759*x760));

    if (t143 != 255U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x762 = INT16_MAX;
	int8_t x763 = INT8_MIN;
	uint32_t x764 = UINT32_MAX;
	volatile uint32_t t144 = 7783U;

    t144 = ((x761^x762)^(x763*x764));

    if (t144 != 2147516287U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x765 = INT32_MAX;
	int64_t x766 = INT64_MAX;
	uint32_t x767 = UINT32_MAX;
	volatile int64_t t145 = -8083041684694113LL;

    t145 = ((x765^x766)^(x767*x768));

    if (t145 != 9156845160235247144LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x769 = INT16_MIN;
	volatile uint8_t x770 = UINT8_MAX;
	int16_t x771 = INT16_MAX;
	int16_t x772 = INT16_MAX;
	static volatile int32_t t146 = 6744;

    t146 = ((x769^x770)^(x771*x772));

    if (t146 != -1073708802) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x773 = 35030152176LLU;
	uint16_t x774 = UINT16_MAX;
	static int16_t x775 = INT16_MIN;
	int16_t x776 = -1;
	volatile uint64_t t147 = 188420132237135LLU;

    t147 = ((x773^x774)^(x775*x776));

    if (t147 != 35030158351LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x781 = UINT32_MAX;
	int8_t x782 = 0;
	volatile uint16_t x783 = 0U;
	uint32_t x784 = UINT32_MAX;
	uint32_t t148 = UINT32_MAX;

    t148 = ((x781^x782)^(x783*x784));

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x789 = INT64_MAX;
	int8_t x790 = 2;
	uint8_t x791 = 11U;

    t149 = ((x789^x790)^(x791*x792));

    if (t149 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x793 = INT64_MIN;
	int64_t x794 = -1LL;
	volatile int8_t x796 = -1;
	volatile int64_t t150 = INT64_MIN;

    t150 = ((x793^x794)^(x795*x796));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x797 = UINT16_MAX;
	int32_t x798 = INT32_MAX;
	int32_t x800 = INT32_MAX;
	static volatile uint64_t t151 = 1684931LLU;

    t151 = ((x797^x798)^(x799*x800));

    if (t151 != 13897648972345651477LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x801 = -1LL;
	uint16_t x802 = 4139U;
	int64_t x803 = -198293LL;
	uint16_t x804 = UINT16_MAX;
	volatile int64_t t152 = 326708521099LL;

    t152 = ((x801^x802)^(x803*x804));

    if (t152 != 12995127617LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x809 = 1;
	int8_t x811 = INT8_MIN;
	uint64_t t153 = 13846LLU;

    t153 = ((x809^x810)^(x811*x812));

    if (t153 != 20231545LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x819 = 1U;
	static int32_t x820 = 1;
	int64_t t154 = -48919399085LL;

    t154 = ((x817^x818)^(x819*x820));

    if (t154 != 8541682492088478794LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x821 = INT64_MIN;
	static int16_t x822 = -1;
	volatile int32_t x823 = 398;
	uint8_t x824 = UINT8_MAX;

    t155 = ((x821^x822)^(x823*x824));

    if (t155 != 9223372036854674317LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x825 = INT32_MIN;
	static int32_t x826 = -1;
	volatile uint64_t x827 = 452LLU;
	int32_t x828 = INT32_MIN;
	uint64_t t156 = 2875868547948184LLU;

    t156 = ((x825^x826)^(x827*x828));

    if (t156 != 18446743105194426367LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x830 = -1;
	static uint8_t x831 = 4U;
	int8_t x832 = -7;
	volatile int64_t t157 = 1847LL;

    t157 = ((x829^x830)^(x831*x832));

    if (t157 != -28LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x834 = 816U;
	uint16_t x835 = UINT16_MAX;
	uint32_t x836 = 4390U;

    t158 = ((x833^x834)^(x835*x836));

    if (t158 != 4007268885U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x837 = INT8_MIN;
	int8_t x838 = -1;
	int64_t x839 = 30LL;
	uint8_t x840 = 45U;
	int64_t t159 = 0LL;

    t159 = ((x837^x838)^(x839*x840));

    if (t159 != 1337LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x841 = -1;
	int8_t x842 = INT8_MIN;
	static volatile int16_t x844 = 1;
	int64_t t160 = 2165185060LL;

    t160 = ((x841^x842)^(x843*x844));

    if (t160 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x845 = UINT32_MAX;
	static int8_t x846 = -1;
	static uint16_t x847 = 597U;
	int8_t x848 = INT8_MIN;
	uint32_t t161 = 21425467U;

    t161 = ((x845^x846)^(x847*x848));

    if (t161 != 4294890880U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x849 = 0U;
	int64_t x850 = INT64_MIN;
	uint16_t x851 = 1949U;
	static volatile uint32_t x852 = 50400U;

    t162 = ((x849^x850)^(x851*x852));

    if (t162 != -9223372036756546208LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x853 = 0;
	uint32_t x854 = UINT32_MAX;
	int8_t x855 = 0;
	static int8_t x856 = INT8_MIN;

    t163 = ((x853^x854)^(x855*x856));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x857 = 658624LLU;
	uint8_t x858 = 0U;
	volatile uint64_t t164 = 7477284750LLU;

    t164 = ((x857^x858)^(x859*x860));

    if (t164 != 691392LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x865 = -1;
	uint16_t x866 = 9504U;
	int16_t x867 = INT16_MIN;
	uint32_t x868 = 93149052U;
	volatile uint32_t t165 = 14677U;

    t165 = ((x865^x866)^(x867*x868));

    if (t165 != 2881346271U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x873 = UINT8_MAX;
	int16_t x875 = 221;
	int16_t x876 = INT16_MIN;
	volatile int32_t t166 = 137;

    t166 = ((x873^x874)^(x875*x876));

    if (t166 != -7241480) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x877 = 63U;
	uint32_t x878 = UINT32_MAX;
	int32_t x879 = -1;
	static volatile int64_t x880 = -1LL;
	static int64_t t167 = 122484223284619LL;

    t167 = ((x877^x878)^(x879*x880));

    if (t167 != 4294967233LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x881 = 1195U;
	int64_t x883 = INT64_MAX;
	static uint64_t x884 = 9476566957112776LLU;
	volatile uint64_t t168 = 65878698498664719LLU;

    t168 = ((x881^x882)^(x883*x884));

    if (t168 != 9476566957111660LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x885 = INT8_MIN;
	int64_t x886 = -1LL;
	uint16_t x887 = 4U;
	int16_t x888 = INT16_MAX;
	int64_t t169 = -372802353525LL;

    t169 = ((x885^x886)^(x887*x888));

    if (t169 != 130947LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x890 = UINT32_MAX;
	int16_t x891 = INT16_MAX;
	int8_t x892 = 27;
	uint64_t t170 = 419205703721LLU;

    t170 = ((x889^x890)^(x891*x892));

    if (t170 != 45118499LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x893 = -1;
	uint8_t x896 = UINT8_MAX;

    t171 = ((x893^x894)^(x895*x896));

    if (t171 != 8355815LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x898 = INT16_MIN;
	uint8_t x899 = UINT8_MAX;

    t172 = ((x897^x898)^(x899*x900));

    if (t172 != 479430295) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x902 = 12420;
	int64_t x903 = -157008599LL;
	static uint16_t x904 = 22U;
	int64_t t173 = 11080199LL;

    t173 = ((x901^x902)^(x903*x904));

    if (t173 != 3454177021LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x905 = -1LL;
	static int32_t x906 = INT32_MAX;
	volatile uint64_t x907 = 262941262974LLU;
	int8_t x908 = INT8_MAX;
	volatile uint64_t t174 = 2723847891LLU;

    t174 = ((x905^x906)^(x907*x908));

    if (t174 != 18446710678361012866LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x909 = 3292;
	int32_t x910 = INT32_MIN;
	int32_t x912 = -1;
	int32_t t175 = 247;

    t175 = ((x909^x910)^(x911*x912));

    if (t175 != -2147447588) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x913 = 15;
	static int8_t x914 = -17;
	static int16_t x915 = INT16_MIN;
	int16_t x916 = INT16_MIN;
	int32_t t176 = 517203653;

    t176 = ((x913^x914)^(x915*x916));

    if (t176 != -1073741856) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x917 = 0;
	int32_t x918 = INT32_MAX;
	volatile uint32_t x919 = UINT32_MAX;
	static volatile uint16_t x920 = UINT16_MAX;

    t177 = ((x917^x918)^(x919*x920));

    if (t177 != 2147549182U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x921 = 1152960465U;
	int16_t x922 = INT16_MAX;
	static uint32_t x923 = UINT32_MAX;
	static int16_t x924 = INT16_MIN;

    t178 = ((x921^x922)^(x923*x924));

    if (t178 != 1152923694U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x925 = 16247LLU;
	int8_t x926 = INT8_MIN;
	uint32_t x927 = UINT32_MAX;
	static uint64_t x928 = 1420136LLU;
	uint64_t t179 = 3991966LLU;

    t179 = ((x925^x926)^(x927*x928));

    if (t179 != 18440644636035093615LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x929 = 14U;
	int64_t x930 = INT64_MIN;
	int32_t x932 = 3;
	int64_t t180 = 48427427259657953LL;

    t180 = ((x929^x930)^(x931*x932));

    if (t180 != 9223372036854772820LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x933 = INT8_MIN;
	static int16_t x934 = -155;
	uint16_t x935 = UINT16_MAX;
	uint8_t x936 = UINT8_MAX;
	int32_t t181 = -610;

    t181 = ((x933^x934)^(x935*x936));

    if (t181 != 16711652) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x941 = -16;
	int8_t x942 = -1;
	int16_t x943 = INT16_MIN;
	int32_t t182 = 5;

    t182 = ((x941^x942)^(x943*x944));

    if (t182 != 4194319) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x949 = INT8_MAX;
	int16_t x950 = 430;
	static int64_t x951 = -1LL;
	int16_t x952 = INT16_MIN;
	volatile int64_t t183 = 127LL;

    t183 = ((x949^x950)^(x951*x952));

    if (t183 != 33233LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x954 = 2LLU;
	int64_t x955 = -258317LL;
	int8_t x956 = INT8_MIN;

    t184 = ((x953^x954)^(x955*x956));

    if (t184 != 33064573LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x958 = -405999762;
	static uint64_t x959 = 84968383070LLU;
	uint32_t x960 = 869335613U;
	static volatile uint64_t t185 = 99LLU;

    t185 = ((x957^x958)^(x959*x960));

    if (t185 != 18367678986905944951LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x962 = -13;
	int8_t x963 = -1;
	int32_t x964 = -1;
	volatile uint64_t t186 = 48209831736617LLU;

    t186 = ((x961^x962)^(x963*x964));

    if (t186 != 18446744073709551385LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x965 = -1;
	uint64_t x966 = UINT64_MAX;
	int64_t x967 = 1LL;
	uint64_t t187 = 8647LLU;

    t187 = ((x965^x966)^(x967*x968));

    if (t187 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x969 = -1;
	int64_t x970 = -13388123603LL;
	int16_t x971 = -1;
	int64_t t188 = 1LL;

    t188 = ((x969^x970)^(x971*x972));

    if (t188 != -9223372023466652205LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x973 = 27;
	uint64_t x974 = 599321714807LLU;
	int64_t x975 = 170106770422458LL;
	uint64_t x976 = UINT64_MAX;

    t189 = ((x973^x974)^(x975*x976));

    if (t189 != 18446574484312532266LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x986 = INT32_MIN;
	int32_t x987 = -1;
	int32_t x988 = -1;
	volatile uint32_t t190 = 224857610U;

    t190 = ((x985^x986)^(x987*x988));

    if (t190 != 2165308201U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x998 = 6U;
	int8_t x999 = INT8_MIN;
	uint16_t x1000 = 158U;

    t191 = ((x997^x998)^(x999*x1000));

    if (t191 != 18446695831024427616LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1005 = UINT8_MAX;
	int8_t x1006 = INT8_MIN;
	int64_t x1007 = -212244524586553LL;
	volatile int64_t t192 = -10667802LL;

    t192 = ((x1005^x1006)^(x1007*x1008));

    if (t192 != -2122445245865659LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1009 = INT8_MAX;
	volatile int8_t x1010 = -1;
	uint8_t x1012 = UINT8_MAX;
	uint64_t t193 = 4260565LLU;

    t193 = ((x1009^x1010)^(x1011*x1012));

    if (t193 != 129LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1017 = -1LL;
	int8_t x1018 = -1;
	volatile int8_t x1019 = INT8_MAX;
	static int16_t x1020 = INT16_MAX;
	static volatile int64_t t194 = -981836301LL;

    t194 = ((x1017^x1018)^(x1019*x1020));

    if (t194 != 4161409LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1022 = INT64_MIN;
	int8_t x1023 = -1;
	uint8_t x1024 = 35U;
	volatile int64_t t195 = -12924817LL;

    t195 = ((x1021^x1022)^(x1023*x1024));

    if (t195 != -9223372036854775715LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1025 = 120U;
	int8_t x1026 = INT8_MIN;
	uint8_t x1027 = 1U;
	static int64_t x1028 = INT64_MAX;
	static int64_t t196 = -2805554047LL;

    t196 = ((x1025^x1026)^(x1027*x1028));

    if (t196 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1029 = INT64_MAX;
	static int64_t x1030 = INT64_MIN;
	uint64_t x1031 = 160210305366907LLU;
	int64_t x1032 = -1LL;
	static uint64_t t197 = 3236782948255282114LLU;

    t197 = ((x1029^x1030)^(x1031*x1032));

    if (t197 != 160210305366906LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x1033 = 1U;
	int32_t x1034 = INT32_MIN;
	uint32_t x1035 = 1166433U;
	static uint8_t x1036 = 2U;
	static volatile uint32_t t198 = 216675708U;

    t198 = ((x1033^x1034)^(x1035*x1036));

    if (t198 != 2149816515U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1041 = UINT64_MAX;
	uint8_t x1043 = 0U;
	int8_t x1044 = -1;
	uint64_t t199 = 170349836650804333LLU;

    t199 = ((x1041^x1042)^(x1043*x1044));

    if (t199 != 888229LLU) { NG(); } else { ; }
	
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

