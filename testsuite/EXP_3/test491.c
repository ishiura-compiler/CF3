
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

int32_t x10 = INT32_MIN;
uint16_t x11 = 930U;
int16_t x24 = INT16_MAX;
int8_t x40 = 0;
int32_t x41 = INT32_MAX;
uint32_t x50 = 2U;
volatile uint64_t x58 = UINT64_MAX;
uint32_t x62 = 50U;
uint32_t x66 = 31U;
static int16_t x72 = -35;
int64_t x73 = -9468546LL;
int64_t x76 = -52LL;
int16_t x78 = -6917;
static int32_t x79 = INT32_MIN;
volatile uint64_t x94 = UINT64_MAX;
static volatile int32_t t18 = 26809;
uint8_t x98 = 65U;
static int64_t x100 = -105498030LL;
static int16_t x101 = INT16_MIN;
int8_t x104 = -4;
volatile int8_t x115 = 10;
uint32_t x123 = 55466U;
uint32_t t24 = 164323579U;
int32_t x129 = 6541;
volatile uint32_t x132 = 11304U;
static uint8_t x138 = UINT8_MAX;
static volatile int16_t x161 = INT16_MIN;
static volatile uint64_t t30 = 12804411552744380LLU;
volatile uint64_t t31 = 23852LLU;
volatile int32_t t32 = -842;
static int8_t x184 = INT8_MIN;
uint8_t x188 = UINT8_MAX;
int16_t x196 = INT16_MAX;
int32_t t35 = -793868;
int32_t x202 = INT32_MAX;
static uint8_t x209 = UINT8_MAX;
uint32_t t37 = 190U;
int8_t x213 = -1;
static int32_t x214 = INT32_MAX;
int32_t t39 = 996497414;
uint16_t x227 = 2U;
uint64_t x228 = UINT64_MAX;
int8_t x237 = INT8_MIN;
volatile int8_t x242 = INT8_MAX;
int8_t x249 = INT8_MIN;
int16_t x257 = INT16_MAX;
uint64_t x263 = UINT64_MAX;
static uint64_t t49 = 947496612951LLU;
static int16_t x268 = -2;
uint16_t x277 = 0U;
int8_t x307 = 4;
int16_t x328 = INT16_MIN;
static uint64_t x329 = 154225875LLU;
int16_t x332 = INT16_MAX;
int32_t x333 = INT32_MIN;
uint8_t x343 = 6U;
volatile uint32_t x344 = 66074247U;
uint16_t x348 = 62U;
static volatile uint8_t x351 = 8U;
static int32_t t64 = -181342354;
volatile int16_t x373 = INT16_MAX;
uint64_t x377 = UINT64_MAX;
int16_t x380 = -6;
int32_t x381 = INT32_MIN;
int64_t x389 = INT64_MAX;
int64_t x393 = INT64_MIN;
uint32_t x406 = 273294661U;
int16_t x414 = INT16_MAX;
uint64_t t74 = 403853LLU;
int64_t x418 = INT64_MIN;
static int16_t x424 = -7160;
int32_t x441 = 3;
int16_t x443 = -62;
int64_t x466 = -1LL;
int32_t x477 = 260521;
int16_t x479 = INT16_MIN;
volatile int32_t t86 = 27;
uint64_t x489 = 1227240706LLU;
int8_t x501 = INT8_MIN;
int16_t x502 = -1;
volatile int16_t x506 = -1;
volatile int32_t t93 = 2;
int16_t x515 = INT16_MAX;
static uint64_t t95 = 40631268LLU;
int64_t x525 = INT64_MIN;
int16_t x534 = INT16_MIN;
uint32_t x549 = 8278134U;
int8_t x551 = INT8_MIN;
volatile uint8_t x567 = UINT8_MAX;
static int32_t x582 = INT32_MAX;
static volatile int32_t x584 = 339;
int8_t x587 = INT8_MIN;
static int64_t x593 = INT64_MAX;
int16_t x594 = 240;
uint8_t x600 = UINT8_MAX;
static uint64_t x601 = 48970971988605451LLU;
int8_t x602 = -1;
volatile int32_t t112 = 1;
uint16_t x624 = 401U;
uint8_t x628 = 16U;
static int16_t x632 = INT16_MAX;
static uint8_t x635 = UINT8_MAX;
static int64_t x637 = -1LL;
uint16_t x648 = 14U;
volatile uint8_t x651 = 2U;
int64_t t120 = 374561626529245LL;
int8_t x667 = INT8_MAX;
int64_t x668 = 213346LL;
volatile int32_t x671 = 1391088;
volatile int32_t x672 = -11;
uint8_t x697 = 1U;
volatile uint64_t t130 = 3912234973LLU;
static int16_t x702 = -1;
uint32_t t131 = 330488647U;
uint32_t x710 = 306U;
static int16_t x714 = -1;
volatile uint32_t t133 = 772681289U;
static int16_t x725 = 8;
uint16_t x732 = 1260U;
static volatile uint32_t x749 = 516U;
int32_t x751 = 47;
int32_t t139 = -4313;
static int8_t x757 = INT8_MIN;
int8_t x761 = -1;
volatile uint16_t x765 = 43U;
volatile int32_t t144 = -1570225;
volatile uint64_t x776 = 6480285422008987LLU;
static uint64_t t145 = 16790909821LLU;
int32_t t146 = -25351;
volatile int64_t x781 = -1LL;
static int8_t x783 = INT8_MIN;
static uint8_t x784 = 61U;
int32_t t148 = 1711;
volatile int16_t x804 = INT16_MIN;
int64_t x813 = INT64_MIN;
int16_t x829 = INT16_MIN;
int64_t x833 = -261LL;
int16_t x836 = -10;
volatile uint64_t t155 = 9047537555235LLU;
int16_t x848 = INT16_MIN;
static volatile int32_t t156 = -1;
int8_t x852 = INT8_MIN;
volatile uint8_t x853 = UINT8_MAX;
int8_t x867 = -1;
uint32_t x870 = 1285U;
int32_t x872 = -1;
int64_t x879 = -1LL;
int64_t t163 = 0LL;
int64_t x887 = -1LL;
volatile int32_t t165 = -2810;
volatile uint8_t x898 = UINT8_MAX;
int8_t x901 = INT8_MIN;
volatile int64_t x902 = INT64_MIN;
int8_t x905 = INT8_MIN;
uint64_t x908 = 27243960178396LLU;
int64_t x909 = INT64_MAX;
static uint32_t x911 = 3509U;
int8_t x917 = -3;
uint16_t x918 = UINT16_MAX;
volatile uint64_t t172 = 20988LLU;
uint32_t x930 = 416328504U;
static uint16_t x932 = 27U;
static volatile int32_t t174 = -3185600;
static int8_t x944 = 0;
volatile int32_t t176 = 54;
uint8_t x948 = UINT8_MAX;
uint64_t t177 = 250LLU;
int16_t x949 = -4;
int32_t x951 = -267012;
int16_t x961 = INT16_MAX;
int64_t t182 = 0LL;
int8_t x978 = -1;
uint64_t x983 = 3358969388LLU;
volatile int32_t t185 = -11;
static volatile uint64_t t187 = 195079LLU;
static volatile int64_t t188 = 20783LL;
uint8_t x1010 = UINT8_MAX;
int8_t x1011 = INT8_MIN;
static volatile int8_t x1012 = INT8_MIN;
int32_t x1015 = -1;
uint32_t t191 = 700362346U;
static uint16_t x1028 = 7U;
volatile int64_t x1029 = -1LL;
static int64_t x1030 = INT64_MAX;
int16_t x1031 = INT16_MAX;
int16_t x1048 = INT16_MIN;
int32_t x1050 = INT32_MIN;
uint8_t x1051 = 55U;
static int32_t t196 = 31;
int8_t x1056 = INT8_MAX;
int8_t x1057 = INT8_MIN;
int8_t x1059 = -9;


void f0(void) {
    	uint32_t x9 = 76753378U;
	int8_t x12 = INT8_MIN;
	int32_t t0 = -6;

    t0 = ((x9==x10)+(x11*x12));

    if (t0 != -119040) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x13 = 3U;
	int64_t x14 = -1LL;
	int16_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t1 = 44673;

    t1 = ((x13==x14)+(x15*x16));

    if (t1 != -65535) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x17 = INT64_MIN;
	static int16_t x18 = INT16_MAX;
	int8_t x19 = -1;
	volatile int16_t x20 = INT16_MAX;
	volatile int32_t t2 = 657294;

    t2 = ((x17==x18)+(x19*x20));

    if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x21 = 5U;
	static int32_t x22 = 37196;
	static volatile int8_t x23 = 20;
	volatile int32_t t3 = 103598148;

    t3 = ((x21==x22)+(x23*x24));

    if (t3 != 655340) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = 20;
	int16_t x27 = -1135;
	uint8_t x28 = 82U;
	volatile int32_t t4 = -69064;

    t4 = ((x25==x26)+(x27*x28));

    if (t4 != -93070) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = 943028131;
	volatile uint64_t x30 = 667LLU;
	static uint32_t x31 = UINT32_MAX;
	static int8_t x32 = -1;
	volatile uint32_t t5 = 48381336U;

    t5 = ((x29==x30)+(x31*x32));

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x33 = -1;
	static int16_t x34 = 3;
	volatile int16_t x35 = INT16_MAX;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t6 = 248712853403225040LLU;

    t6 = ((x33==x34)+(x35*x36));

    if (t6 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x37 = -1;
	int16_t x38 = -1;
	int64_t x39 = -850889425494614354LL;
	volatile int64_t t7 = 298366874213057699LL;

    t7 = ((x37==x38)+(x39*x40));

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x42 = INT64_MIN;
	int32_t x43 = 7;
	static int32_t x44 = 50;
	static volatile int32_t t8 = -574595;

    t8 = ((x41==x42)+(x43*x44));

    if (t8 != 350) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x49 = 2U;
	int16_t x51 = 0;
	int64_t x52 = INT64_MIN;
	int64_t t9 = -2568322LL;

    t9 = ((x49==x50)+(x51*x52));

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x57 = -1LL;
	int64_t x59 = -1LL;
	int32_t x60 = 8788;
	volatile int64_t t10 = 12475LL;

    t10 = ((x57==x58)+(x59*x60));

    if (t10 != -8787LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x61 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 6U;
	volatile int32_t t11 = -780975;

    t11 = ((x61==x62)+(x63*x64));

    if (t11 != -196608) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x65 = INT16_MIN;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = 620886LL;
	uint64_t t12 = 2LLU;

    t12 = ((x65==x66)+(x67*x68));

    if (t12 != 18446744073708930730LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x69 = INT8_MIN;
	static uint8_t x70 = 110U;
	int64_t x71 = -1LL;
	static volatile int64_t t13 = -68959552874580LL;

    t13 = ((x69==x70)+(x71*x72));

    if (t13 != 35LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x74 = UINT32_MAX;
	volatile int8_t x75 = 0;
	volatile int64_t t14 = 1816942919LL;

    t14 = ((x73==x74)+(x75*x76));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x77 = -1LL;
	int16_t x80 = 1;
	int32_t t15 = INT32_MIN;

    t15 = ((x77==x78)+(x79*x80));

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x81 = 5U;
	uint16_t x82 = 9808U;
	uint64_t x83 = 5845617LLU;
	int32_t x84 = INT32_MIN;
	static uint64_t t16 = 247379659149315213LLU;

    t16 = ((x81==x82)+(x83*x84));

    if (t16 != 18434190706789580800LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x89 = UINT32_MAX;
	int8_t x90 = 0;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = 996173789U;
	static uint32_t t17 = 447U;

    t17 = ((x89==x90)+(x91*x92));

    if (t17 != 3423698944U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x93 = INT64_MAX;
	int16_t x95 = -1;
	int16_t x96 = INT16_MIN;

    t18 = ((x93==x94)+(x95*x96));

    if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x97 = 1;
	uint32_t x99 = UINT32_MAX;
	volatile int64_t t19 = 1998083188LL;

    t19 = ((x97==x98)+(x99*x100));

    if (t19 != -453110588536928850LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x102 = 1;
	uint8_t x103 = 0U;
	int32_t t20 = -122;

    t20 = ((x101==x102)+(x103*x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = 6;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t21 = 1102048;

    t21 = ((x109==x110)+(x111*x112));

    if (t21 != -768) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = -1;
	int32_t x114 = INT32_MIN;
	static uint64_t x116 = 2088791085478058775LLU;
	uint64_t t22 = 7LLU;

    t22 = ((x113==x114)+(x115*x116));

    if (t22 != 2441166781071036134LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x117 = 386708U;
	int8_t x118 = 1;
	uint64_t x119 = 6610693604LLU;
	static int16_t x120 = 39;
	volatile uint64_t t23 = 19LLU;

    t23 = ((x117==x118)+(x119*x120));

    if (t23 != 257817050556LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x121 = INT8_MAX;
	uint32_t x122 = 5U;
	int32_t x124 = -4836;

    t24 = ((x121==x122)+(x123*x124));

    if (t24 != 4026733720U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x130 = 25U;
	int16_t x131 = INT16_MIN;
	static uint32_t t25 = 1766880U;

    t25 = ((x129==x130)+(x131*x132));

    if (t25 != 3924557824U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x133 = 712U;
	uint8_t x134 = 88U;
	int8_t x135 = -1;
	uint16_t x136 = 414U;
	volatile int32_t t26 = 1;

    t26 = ((x133==x134)+(x135*x136));

    if (t26 != -414) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = -1;
	static int8_t x139 = INT8_MIN;
	uint16_t x140 = UINT16_MAX;
	int32_t t27 = 278559409;

    t27 = ((x137==x138)+(x139*x140));

    if (t27 != -8388480) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MIN;
	static uint8_t x144 = 10U;
	volatile int32_t t28 = 0;

    t28 = ((x141==x142)+(x143*x144));

    if (t28 != -327680) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = INT8_MAX;
	int64_t x146 = -40473546247135850LL;
	volatile int16_t x147 = INT16_MIN;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t29 = -214;

    t29 = ((x145==x146)+(x147*x148));

    if (t29 != -8355840) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x162 = -1;
	int16_t x163 = INT16_MIN;
	volatile uint64_t x164 = 244744635347880LLU;

    t30 = ((x161==x162)+(x163*x164));

    if (t30 != 10426951862630219776LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x169 = 0U;
	static volatile int64_t x170 = INT64_MIN;
	int64_t x171 = -375219012083LL;
	uint64_t x172 = UINT64_MAX;

    t31 = ((x169==x170)+(x171*x172));

    if (t31 != 375219012083LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x177 = 14836719;
	static int64_t x178 = -1LL;
	int16_t x179 = 13;
	volatile int8_t x180 = INT8_MIN;

    t32 = ((x177==x178)+(x179*x180));

    if (t32 != -1664) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x181 = INT64_MIN;
	volatile int32_t x182 = -3437462;
	int32_t x183 = -1;
	volatile int32_t t33 = 26982363;

    t33 = ((x181==x182)+(x183*x184));

    if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x185 = INT64_MIN;
	volatile int16_t x186 = INT16_MAX;
	uint16_t x187 = 0U;
	static int32_t t34 = 40466263;

    t34 = ((x185==x186)+(x187*x188));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x193 = -1;
	static int8_t x194 = INT8_MAX;
	uint8_t x195 = 0U;

    t35 = ((x193==x194)+(x195*x196));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x201 = 0;
	uint64_t x203 = 119717643307LLU;
	volatile uint32_t x204 = 675907U;
	volatile uint64_t t36 = 260769LLU;

    t36 = ((x201==x202)+(x203*x204));

    if (t36 != 80917993134704449LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x210 = UINT8_MAX;
	int32_t x211 = INT32_MAX;
	uint32_t x212 = 269596U;

    t37 = ((x209==x210)+(x211*x212));

    if (t37 != 4294697701U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x215 = 7U;
	volatile int32_t x216 = -392078268;
	uint32_t t38 = 82890941U;

    t38 = ((x213==x214)+(x215*x216));

    if (t38 != 1550419420U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x217 = 120980002586497LLU;
	int16_t x218 = INT16_MAX;
	static int8_t x219 = INT8_MIN;
	static volatile int16_t x220 = -1;

    t39 = ((x217==x218)+(x219*x220));

    if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x221 = INT64_MAX;
	uint32_t x222 = UINT32_MAX;
	volatile uint16_t x223 = 0U;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t40 = -7261;

    t40 = ((x221==x222)+(x223*x224));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x225 = 51179U;
	uint32_t x226 = 141346962U;
	volatile uint64_t t41 = 446191465557551909LLU;

    t41 = ((x225==x226)+(x227*x228));

    if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MAX;
	uint64_t x232 = 35389302777LLU;
	volatile uint64_t t42 = 4686807079LLU;

    t42 = ((x229==x230)+(x231*x232));

    if (t42 != 9223372001465473032LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x233 = 568346832U;
	uint16_t x234 = 5U;
	int8_t x235 = INT8_MAX;
	int32_t x236 = -243393;
	static volatile int32_t t43 = -6;

    t43 = ((x233==x234)+(x235*x236));

    if (t43 != -30910911) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x238 = -1745;
	int64_t x239 = -26358174872756LL;
	int16_t x240 = -291;
	volatile int64_t t44 = 3LL;

    t44 = ((x237==x238)+(x239*x240));

    if (t44 != 7670228887971996LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x241 = -1;
	int64_t x243 = 4605861978454268448LL;
	uint8_t x244 = 1U;
	volatile int64_t t45 = 546173585270LL;

    t45 = ((x241==x242)+(x243*x244));

    if (t45 != 4605861978454268448LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x245 = UINT64_MAX;
	volatile int16_t x246 = INT16_MIN;
	volatile int16_t x247 = -3466;
	volatile uint64_t x248 = UINT64_MAX;
	uint64_t t46 = 3910214534304699LLU;

    t46 = ((x245==x246)+(x247*x248));

    if (t46 != 3466LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x250 = 6745U;
	uint16_t x251 = 15U;
	int8_t x252 = INT8_MAX;
	int32_t t47 = 117;

    t47 = ((x249==x250)+(x251*x252));

    if (t47 != 1905) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x258 = 7948;
	int32_t x259 = INT32_MIN;
	int64_t x260 = 7154497LL;
	volatile int64_t t48 = 4188952065658990216LL;

    t48 = ((x257==x258)+(x259*x260));

    if (t48 != -15364165317165056LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x261 = -1LL;
	int16_t x262 = -3;
	int64_t x264 = INT64_MIN;

    t49 = ((x261==x262)+(x263*x264));

    if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x265 = -93350685676451LL;
	static int64_t x266 = -1LL;
	int64_t x267 = -1LL;
	volatile int64_t t50 = 177107964390LL;

    t50 = ((x265==x266)+(x267*x268));

    if (t50 != 2LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x269 = 16759986LL;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int16_t x272 = 1;
	volatile int32_t t51 = -5232305;

    t51 = ((x269==x270)+(x271*x272));

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x273 = 436546399U;
	static int16_t x274 = 3;
	static uint64_t x275 = UINT64_MAX;
	int64_t x276 = 292908LL;
	volatile uint64_t t52 = 176LLU;

    t52 = ((x273==x274)+(x275*x276));

    if (t52 != 18446744073709258708LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x278 = INT16_MIN;
	uint32_t x279 = 48U;
	int16_t x280 = INT16_MIN;
	volatile uint32_t t53 = 9136U;

    t53 = ((x277==x278)+(x279*x280));

    if (t53 != 4293394432U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x285 = -36240;
	uint32_t x286 = 57U;
	static volatile int32_t x287 = -14176054;
	int16_t x288 = -1;
	static volatile int32_t t54 = 368176;

    t54 = ((x285==x286)+(x287*x288));

    if (t54 != 14176054) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x293 = 25U;
	uint32_t x294 = 17436U;
	int8_t x295 = 1;
	int32_t x296 = -185897;
	static int32_t t55 = -2021091;

    t55 = ((x293==x294)+(x295*x296));

    if (t55 != -185897) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x305 = 11807U;
	uint64_t x306 = 1038902238LLU;
	volatile int16_t x308 = -1;
	int32_t t56 = 205;

    t56 = ((x305==x306)+(x307*x308));

    if (t56 != -4) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x313 = -1;
	static volatile int64_t x314 = INT64_MAX;
	uint64_t x315 = 1091002941625658LLU;
	int8_t x316 = INT8_MAX;
	uint64_t t57 = 2539LLU;

    t57 = ((x313==x314)+(x315*x316));

    if (t57 != 138557373586458566LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x321 = UINT64_MAX;
	int64_t x322 = INT64_MIN;
	static volatile uint16_t x323 = 2U;
	static int32_t x324 = -1;
	int32_t t58 = 1172776;

    t58 = ((x321==x322)+(x323*x324));

    if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x326 = -1;
	static uint16_t x327 = 838U;
	int32_t t59 = -22860;

    t59 = ((x325==x326)+(x327*x328));

    if (t59 != -27459584) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x330 = 2350131405435LL;
	uint16_t x331 = 26U;
	int32_t t60 = 1;

    t60 = ((x329==x330)+(x331*x332));

    if (t60 != 851942) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x334 = 17U;
	uint16_t x335 = 13U;
	volatile int32_t x336 = 4494469;
	volatile int32_t t61 = 5110804;

    t61 = ((x333==x334)+(x335*x336));

    if (t61 != 58428097) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x341 = 1484U;
	int8_t x342 = INT8_MIN;
	volatile uint32_t t62 = 36229044U;

    t62 = ((x341==x342)+(x343*x344));

    if (t62 != 396445482U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x345 = -1;
	volatile uint16_t x346 = 4587U;
	int16_t x347 = -221;
	static volatile int32_t t63 = -15;

    t63 = ((x345==x346)+(x347*x348));

    if (t63 != -13702) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x349 = -28628955LL;
	uint64_t x350 = UINT64_MAX;
	uint8_t x352 = 1U;

    t64 = ((x349==x350)+(x351*x352));

    if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x353 = 55536067547399LLU;
	static int64_t x354 = INT64_MAX;
	static int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MAX;
	volatile int32_t t65 = -23848;

    t65 = ((x353==x354)+(x355*x356));

    if (t65 != -4161536) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x369 = 5670LL;
	int64_t x370 = INT64_MIN;
	volatile int64_t x371 = -1LL;
	int64_t x372 = -1LL;
	int64_t t66 = 3573331868750358564LL;

    t66 = ((x369==x370)+(x371*x372));

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x374 = -1;
	static int32_t x375 = INT32_MIN;
	int64_t x376 = 21152LL;
	volatile int64_t t67 = -30185727338LL;

    t67 = ((x373==x374)+(x375*x376));

    if (t67 != -45423574122496LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x378 = -142;
	int32_t x379 = -1;
	volatile int32_t t68 = 1;

    t68 = ((x377==x378)+(x379*x380));

    if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MIN;
	uint16_t x384 = 13189U;
	volatile int32_t t69 = 1948485;

    t69 = ((x381==x382)+(x383*x384));

    if (t69 != -1688192) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x390 = -1LL;
	int8_t x391 = INT8_MAX;
	uint8_t x392 = 56U;
	volatile int32_t t70 = -261075;

    t70 = ((x389==x390)+(x391*x392));

    if (t70 != 7112) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x394 = 2007290054U;
	uint64_t x395 = 1LLU;
	uint32_t x396 = UINT32_MAX;
	uint64_t t71 = 3507929181895114692LLU;

    t71 = ((x393==x394)+(x395*x396));

    if (t71 != 4294967295LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x401 = INT64_MIN;
	int64_t x402 = -97095LL;
	static int8_t x403 = 0;
	volatile int8_t x404 = -1;
	volatile int32_t t72 = -30703;

    t72 = ((x401==x402)+(x403*x404));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x405 = UINT64_MAX;
	uint64_t x407 = 11666894LLU;
	volatile int16_t x408 = 5160;
	uint64_t t73 = 514243082812023LLU;

    t73 = ((x405==x406)+(x407*x408));

    if (t73 != 60201173040LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x413 = INT16_MIN;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = INT16_MIN;

    t74 = ((x413==x414)+(x415*x416));

    if (t74 != 32768LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x417 = 50052LL;
	uint16_t x419 = 221U;
	int32_t x420 = -206;
	volatile int32_t t75 = 84134070;

    t75 = ((x417==x418)+(x419*x420));

    if (t75 != -45526) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x421 = INT16_MIN;
	uint16_t x422 = 11U;
	uint16_t x423 = 241U;
	int32_t t76 = -1229;

    t76 = ((x421==x422)+(x423*x424));

    if (t76 != -1725560) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x429 = 158LLU;
	int32_t x430 = INT32_MIN;
	static uint64_t x431 = 1172LLU;
	int32_t x432 = INT32_MIN;
	static volatile uint64_t t77 = 8793111669115LLU;

    t77 = ((x429==x430)+(x431*x432));

    if (t77 != 18446741556858716160LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x442 = 2544004LLU;
	static int8_t x444 = INT8_MIN;
	static volatile int32_t t78 = -25039386;

    t78 = ((x441==x442)+(x443*x444));

    if (t78 != 7936) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x445 = INT8_MAX;
	int8_t x446 = INT8_MIN;
	uint8_t x447 = 0U;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t79 = -1;

    t79 = ((x445==x446)+(x447*x448));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x449 = 14U;
	uint16_t x450 = UINT16_MAX;
	static uint64_t x451 = UINT64_MAX;
	static int32_t x452 = -1;
	volatile uint64_t t80 = 97486188LLU;

    t80 = ((x449==x450)+(x451*x452));

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x453 = -6;
	int16_t x454 = INT16_MAX;
	int8_t x455 = 27;
	int8_t x456 = -1;
	int32_t t81 = 1315;

    t81 = ((x453==x454)+(x455*x456));

    if (t81 != -27) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x461 = INT64_MIN;
	int64_t x462 = -1LL;
	static volatile int8_t x463 = -51;
	uint16_t x464 = UINT16_MAX;
	int32_t t82 = -4;

    t82 = ((x461==x462)+(x463*x464));

    if (t82 != -3342285) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x465 = UINT64_MAX;
	uint32_t x467 = 306U;
	static int32_t x468 = 1605980;
	uint32_t t83 = 425094U;

    t83 = ((x465==x466)+(x467*x468));

    if (t83 != 491429881U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x469 = INT32_MAX;
	int8_t x470 = INT8_MIN;
	int64_t x471 = 19909LL;
	int32_t x472 = 155;
	volatile int64_t t84 = 61851995201LL;

    t84 = ((x469==x470)+(x471*x472));

    if (t84 != 3085895LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x473 = 1U;
	int64_t x474 = -95768LL;
	volatile int64_t x475 = -154381474661021LL;
	static volatile int8_t x476 = -1;
	volatile int64_t t85 = 460082970399LL;

    t85 = ((x473==x474)+(x475*x476));

    if (t85 != 154381474661021LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x478 = 394289U;
	volatile int8_t x480 = -9;

    t86 = ((x477==x478)+(x479*x480));

    if (t86 != 294912) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x481 = -1LL;
	int64_t x482 = INT64_MIN;
	uint64_t x483 = UINT64_MAX;
	static uint16_t x484 = 4835U;
	uint64_t t87 = 10820833617LLU;

    t87 = ((x481==x482)+(x483*x484));

    if (t87 != 18446744073709546781LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x490 = 50U;
	int64_t x491 = INT64_MAX;
	volatile uint64_t x492 = 277305221827LLU;
	uint64_t t88 = 86978775488922LLU;

    t88 = ((x489==x490)+(x491*x492));

    if (t88 != 9223371759549553981LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x494 = INT64_MIN;
	static int8_t x495 = INT8_MIN;
	volatile uint8_t x496 = UINT8_MAX;
	volatile int32_t t89 = -103;

    t89 = ((x493==x494)+(x495*x496));

    if (t89 != -32640) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x497 = 1;
	static uint16_t x498 = UINT16_MAX;
	static int16_t x499 = INT16_MIN;
	static int32_t x500 = -14370;
	volatile int32_t t90 = 1;

    t90 = ((x497==x498)+(x499*x500));

    if (t90 != 470876160) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x503 = 1528U;
	int16_t x504 = INT16_MAX;
	volatile int32_t t91 = -7142;

    t91 = ((x501==x502)+(x503*x504));

    if (t91 != 50067976) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x505 = -1;
	volatile int16_t x507 = INT16_MIN;
	int8_t x508 = -1;
	static int32_t t92 = 0;

    t92 = ((x505==x506)+(x507*x508));

    if (t92 != 32769) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x509 = 5U;
	volatile int32_t x510 = 3;
	static int8_t x511 = 0;
	uint16_t x512 = 181U;

    t93 = ((x509==x510)+(x511*x512));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x513 = UINT64_MAX;
	uint8_t x514 = 1U;
	int8_t x516 = INT8_MIN;
	static volatile int32_t t94 = 64115;

    t94 = ((x513==x514)+(x515*x516));

    if (t94 != -4194176) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x517 = UINT64_MAX;
	uint32_t x518 = UINT32_MAX;
	static uint64_t x519 = 14842834592008805LLU;
	int64_t x520 = INT64_MIN;

    t95 = ((x517==x518)+(x519*x520));

    if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x521 = -141358084511575LL;
	uint8_t x522 = 13U;
	volatile int8_t x523 = INT8_MIN;
	int32_t x524 = -1;
	static int32_t t96 = 0;

    t96 = ((x521==x522)+(x523*x524));

    if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x526 = -1;
	int16_t x527 = INT16_MIN;
	int8_t x528 = INT8_MAX;
	volatile int32_t t97 = 128802930;

    t97 = ((x525==x526)+(x527*x528));

    if (t97 != -4161536) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x533 = 6;
	static int16_t x535 = 40;
	int16_t x536 = 30;
	int32_t t98 = -3028055;

    t98 = ((x533==x534)+(x535*x536));

    if (t98 != 1200) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x537 = 10457596LL;
	uint16_t x538 = 0U;
	volatile int16_t x539 = INT16_MAX;
	uint32_t x540 = UINT32_MAX;
	volatile uint32_t t99 = 4U;

    t99 = ((x537==x538)+(x539*x540));

    if (t99 != 4294934529U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x541 = INT8_MAX;
	uint32_t x542 = 43096U;
	int32_t x543 = -1;
	static uint64_t x544 = 3027175190151895186LLU;
	volatile uint64_t t100 = 199120282472177702LLU;

    t100 = ((x541==x542)+(x543*x544));

    if (t100 != 15419568883557656430LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x545 = -310854;
	static uint64_t x546 = 60280619982LLU;
	int8_t x547 = -1;
	int8_t x548 = 15;
	volatile int32_t t101 = 301;

    t101 = ((x545==x546)+(x547*x548));

    if (t101 != -15) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x550 = UINT8_MAX;
	volatile uint8_t x552 = 7U;
	static int32_t t102 = 4;

    t102 = ((x549==x550)+(x551*x552));

    if (t102 != -896) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x553 = 0U;
	int8_t x554 = INT8_MIN;
	uint32_t x555 = UINT32_MAX;
	int64_t x556 = 1LL;
	int64_t t103 = -223031057LL;

    t103 = ((x553==x554)+(x555*x556));

    if (t103 != 4294967295LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x557 = -1LL;
	static int64_t x558 = INT64_MIN;
	int16_t x559 = INT16_MIN;
	int32_t x560 = 204;
	int32_t t104 = 700;

    t104 = ((x557==x558)+(x559*x560));

    if (t104 != -6684672) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x565 = 277894466300432LLU;
	static uint32_t x566 = UINT32_MAX;
	uint16_t x568 = 6U;
	int32_t t105 = 228244;

    t105 = ((x565==x566)+(x567*x568));

    if (t105 != 1530) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x577 = 495883;
	static uint8_t x578 = UINT8_MAX;
	uint64_t x579 = 133LLU;
	uint8_t x580 = UINT8_MAX;
	static uint64_t t106 = 4341168018820LLU;

    t106 = ((x577==x578)+(x579*x580));

    if (t106 != 33915LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x581 = -8796742470097491LL;
	static volatile uint64_t x583 = 35932330917879106LLU;
	uint64_t t107 = 54LLU;

    t107 = ((x581==x582)+(x583*x584));

    if (t107 != 12181060181161016934LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x585 = 1;
	int64_t x586 = INT64_MIN;
	int8_t x588 = -1;
	int32_t t108 = -29836;

    t108 = ((x585==x586)+(x587*x588));

    if (t108 != 128) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x589 = -1LL;
	uint64_t x590 = UINT64_MAX;
	uint8_t x591 = UINT8_MAX;
	uint8_t x592 = UINT8_MAX;
	int32_t t109 = 324193;

    t109 = ((x589==x590)+(x591*x592));

    if (t109 != 65026) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x595 = 695978161940LL;
	int32_t x596 = 30544;
	volatile int64_t t110 = -712107934LL;

    t110 = ((x593==x594)+(x595*x596));

    if (t110 != 21257956978295360LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x597 = 799224873217721LLU;
	int8_t x598 = INT8_MIN;
	int8_t x599 = 1;
	static volatile int32_t t111 = 14692;

    t111 = ((x597==x598)+(x599*x600));

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x603 = 6U;
	int16_t x604 = -455;

    t112 = ((x601==x602)+(x603*x604));

    if (t112 != -2730) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x622 = -12966LL;
	uint16_t x623 = 15U;
	volatile int32_t t113 = 201;

    t113 = ((x621==x622)+(x623*x624));

    if (t113 != 6015) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x625 = -29042025075LL;
	int32_t x626 = -1;
	static int32_t x627 = -73357;
	int32_t t114 = 2;

    t114 = ((x625==x626)+(x627*x628));

    if (t114 != -1173712) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x629 = INT16_MIN;
	int32_t x630 = INT32_MAX;
	volatile int8_t x631 = INT8_MIN;
	int32_t t115 = 255218396;

    t115 = ((x629==x630)+(x631*x632));

    if (t115 != -4194176) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x633 = INT8_MIN;
	int8_t x634 = -3;
	uint16_t x636 = 528U;
	volatile int32_t t116 = 1;

    t116 = ((x633==x634)+(x635*x636));

    if (t116 != 134640) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x638 = UINT16_MAX;
	int32_t x639 = -1;
	int8_t x640 = -1;
	volatile int32_t t117 = 2448;

    t117 = ((x637==x638)+(x639*x640));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x641 = 866323358U;
	int8_t x642 = 4;
	int16_t x643 = -290;
	static int8_t x644 = 3;
	int32_t t118 = 26;

    t118 = ((x641==x642)+(x643*x644));

    if (t118 != -870) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x645 = INT8_MIN;
	int16_t x646 = INT16_MIN;
	uint16_t x647 = 4U;
	int32_t t119 = 55248;

    t119 = ((x645==x646)+(x647*x648));

    if (t119 != 56) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x649 = INT16_MIN;
	uint64_t x650 = UINT64_MAX;
	int64_t x652 = -216050657962586634LL;

    t120 = ((x649==x650)+(x651*x652));

    if (t120 != -432101315925173268LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x653 = 254885189241305LL;
	static int8_t x654 = INT8_MAX;
	int16_t x655 = INT16_MIN;
	static int64_t x656 = 30776429LL;
	int64_t t121 = -5LL;

    t121 = ((x653==x654)+(x655*x656));

    if (t121 != -1008482025472LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x657 = -1;
	volatile uint16_t x658 = 23317U;
	int16_t x659 = -1;
	volatile int64_t x660 = 1689750779LL;
	volatile int64_t t122 = -13651356871LL;

    t122 = ((x657==x658)+(x659*x660));

    if (t122 != -1689750779LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x661 = 36862658129488LLU;
	uint8_t x662 = UINT8_MAX;
	volatile int16_t x663 = INT16_MIN;
	uint32_t x664 = UINT32_MAX;
	static uint32_t t123 = 3155491U;

    t123 = ((x661==x662)+(x663*x664));

    if (t123 != 32768U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x665 = -9;
	int64_t x666 = -1LL;
	volatile int64_t t124 = 119196LL;

    t124 = ((x665==x666)+(x667*x668));

    if (t124 != 27094942LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x669 = 665808784603LLU;
	volatile int32_t x670 = -1;
	volatile int32_t t125 = 129653;

    t125 = ((x669==x670)+(x671*x672));

    if (t125 != -15301968) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x677 = INT64_MAX;
	int8_t x678 = 15;
	uint8_t x679 = UINT8_MAX;
	uint64_t x680 = 118490LLU;
	static volatile uint64_t t126 = 4813015777799LLU;

    t126 = ((x677==x678)+(x679*x680));

    if (t126 != 30214950LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x681 = 42;
	int64_t x682 = INT64_MIN;
	volatile int8_t x683 = INT8_MAX;
	static int8_t x684 = INT8_MAX;
	int32_t t127 = 247934583;

    t127 = ((x681==x682)+(x683*x684));

    if (t127 != 16129) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x685 = INT64_MAX;
	volatile uint32_t x686 = 638945230U;
	uint16_t x687 = 9U;
	uint16_t x688 = 2600U;
	int32_t t128 = 8055000;

    t128 = ((x685==x686)+(x687*x688));

    if (t128 != 23400) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x689 = 109529722;
	static int64_t x690 = -40LL;
	int32_t x691 = -1;
	int8_t x692 = INT8_MIN;
	volatile int32_t t129 = 63;

    t129 = ((x689==x690)+(x691*x692));

    if (t129 != 128) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x698 = INT16_MIN;
	int16_t x699 = INT16_MIN;
	static uint64_t x700 = 934032580LLU;

    t130 = ((x697==x698)+(x699*x700));

    if (t130 != 18446713467329970176LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x701 = -1;
	int32_t x703 = 0;
	uint32_t x704 = UINT32_MAX;

    t131 = ((x701==x702)+(x703*x704));

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x709 = UINT64_MAX;
	int64_t x711 = -1LL;
	volatile int8_t x712 = INT8_MIN;
	volatile int64_t t132 = 69675189437811722LL;

    t132 = ((x709==x710)+(x711*x712));

    if (t132 != 128LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x713 = 170;
	uint32_t x715 = 138725U;
	int32_t x716 = INT32_MAX;

    t133 = ((x713==x714)+(x715*x716));

    if (t133 != 2147344923U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x721 = INT8_MIN;
	int64_t x722 = -32285627400426545LL;
	uint32_t x723 = 215411347U;
	static uint32_t x724 = 86U;
	static uint32_t t134 = 3U;

    t134 = ((x721==x722)+(x723*x724));

    if (t134 != 1345506658U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x726 = 3;
	int8_t x727 = INT8_MAX;
	static volatile uint16_t x728 = 123U;
	int32_t t135 = -8931432;

    t135 = ((x725==x726)+(x727*x728));

    if (t135 != 15621) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x729 = 427765100LL;
	uint8_t x730 = UINT8_MAX;
	uint16_t x731 = UINT16_MAX;
	volatile int32_t t136 = -75622757;

    t136 = ((x729==x730)+(x731*x732));

    if (t136 != 82574100) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x737 = INT32_MIN;
	volatile int32_t x738 = INT32_MAX;
	int8_t x739 = INT8_MAX;
	int32_t x740 = -4278;
	int32_t t137 = 525399;

    t137 = ((x737==x738)+(x739*x740));

    if (t137 != -543306) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x741 = UINT8_MAX;
	static uint64_t x742 = UINT64_MAX;
	uint8_t x743 = 6U;
	uint32_t x744 = 22720690U;
	uint32_t t138 = 1482486U;

    t138 = ((x741==x742)+(x743*x744));

    if (t138 != 136324140U) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x750 = INT16_MIN;
	int16_t x752 = -1;

    t139 = ((x749==x750)+(x751*x752));

    if (t139 != -47) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x753 = 2008;
	volatile int8_t x754 = INT8_MAX;
	int8_t x755 = INT8_MIN;
	int8_t x756 = 40;
	int32_t t140 = -20;

    t140 = ((x753==x754)+(x755*x756));

    if (t140 != -5120) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x758 = INT16_MIN;
	int16_t x759 = INT16_MIN;
	static uint16_t x760 = 1U;
	int32_t t141 = 5223614;

    t141 = ((x757==x758)+(x759*x760));

    if (t141 != -32768) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x762 = INT16_MAX;
	static int16_t x763 = INT16_MAX;
	volatile int8_t x764 = INT8_MIN;
	volatile int32_t t142 = 62871111;

    t142 = ((x761==x762)+(x763*x764));

    if (t142 != -4194176) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x766 = 10507U;
	uint32_t x767 = 2982890U;
	static volatile int16_t x768 = -4947;
	volatile uint32_t t143 = 20U;

    t143 = ((x765==x766)+(x767*x768));

    if (t143 != 2423512354U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x769 = INT32_MIN;
	volatile int8_t x770 = INT8_MIN;
	uint16_t x771 = 2529U;
	volatile uint16_t x772 = UINT16_MAX;

    t144 = ((x769==x770)+(x771*x772));

    if (t144 != 165738015) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x773 = INT16_MAX;
	static int64_t x774 = -1LL;
	uint32_t x775 = UINT32_MAX;

    t145 = ((x773==x774)+(x775*x776));

    if (t145 != 470684237496894821LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x777 = -1LL;
	int16_t x778 = INT16_MAX;
	volatile int8_t x779 = -8;
	int32_t x780 = -7;

    t146 = ((x777==x778)+(x779*x780));

    if (t146 != 56) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x782 = INT64_MIN;
	int32_t t147 = -13260210;

    t147 = ((x781==x782)+(x783*x784));

    if (t147 != -7808) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x789 = 4LL;
	uint32_t x790 = 24U;
	int8_t x791 = INT8_MAX;
	uint16_t x792 = 80U;

    t148 = ((x789==x790)+(x791*x792));

    if (t148 != 10160) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x801 = 3U;
	uint8_t x802 = 1U;
	volatile int16_t x803 = -1;
	int32_t t149 = 7;

    t149 = ((x801==x802)+(x803*x804));

    if (t149 != 32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x814 = INT32_MAX;
	uint64_t x815 = UINT64_MAX;
	uint8_t x816 = 117U;
	uint64_t t150 = 53737687559375LLU;

    t150 = ((x813==x814)+(x815*x816));

    if (t150 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x817 = 2047351728469733062LLU;
	static int16_t x818 = INT16_MIN;
	static int64_t x819 = -1LL;
	int8_t x820 = INT8_MAX;
	volatile int64_t t151 = 68191629193LL;

    t151 = ((x817==x818)+(x819*x820));

    if (t151 != -127LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x821 = UINT64_MAX;
	static uint8_t x822 = 15U;
	uint32_t x823 = UINT32_MAX;
	int32_t x824 = 8;
	uint32_t t152 = 13818960U;

    t152 = ((x821==x822)+(x823*x824));

    if (t152 != 4294967288U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x830 = -1;
	int16_t x831 = INT16_MIN;
	int16_t x832 = 5135;
	volatile int32_t t153 = 99279;

    t153 = ((x829==x830)+(x831*x832));

    if (t153 != -168263680) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x834 = 1172864480890064LLU;
	int8_t x835 = INT8_MIN;
	int32_t t154 = 4866;

    t154 = ((x833==x834)+(x835*x836));

    if (t154 != 1280) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x837 = -1;
	int32_t x838 = INT32_MIN;
	volatile uint16_t x839 = 141U;
	uint64_t x840 = 744822107837301772LLU;

    t155 = ((x837==x838)+(x839*x840));

    if (t155 != 12786196836511791772LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x845 = INT16_MIN;
	uint8_t x846 = 0U;
	int16_t x847 = INT16_MIN;

    t156 = ((x845==x846)+(x847*x848));

    if (t156 != 1073741824) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x849 = 1;
	int16_t x850 = INT16_MIN;
	static volatile int8_t x851 = -1;
	static volatile int32_t t157 = -9364;

    t157 = ((x849==x850)+(x851*x852));

    if (t157 != 128) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x854 = 12U;
	int64_t x855 = INT64_MAX;
	static uint64_t x856 = 193149280132LLU;
	uint64_t t158 = 2700718609764519962LLU;

    t158 = ((x853==x854)+(x855*x856));

    if (t158 != 18446743880560271484LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x865 = -1;
	uint16_t x866 = UINT16_MAX;
	uint64_t x868 = 24355699994441LLU;
	volatile uint64_t t159 = 234013633LLU;

    t159 = ((x865==x866)+(x867*x868));

    if (t159 != 18446719718009557175LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x869 = 7147745136324191LLU;
	volatile int16_t x871 = INT16_MIN;
	volatile int32_t t160 = -710;

    t160 = ((x869==x870)+(x871*x872));

    if (t160 != 32768) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x873 = -7;
	static int8_t x874 = INT8_MAX;
	int32_t x875 = -67;
	static int16_t x876 = INT16_MAX;
	static volatile int32_t t161 = 1;

    t161 = ((x873==x874)+(x875*x876));

    if (t161 != -2195389) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint32_t x877 = 23150127U;
	uint64_t x878 = 0LLU;
	uint16_t x880 = 695U;
	static volatile int64_t t162 = -566012998499354484LL;

    t162 = ((x877==x878)+(x879*x880));

    if (t162 != -695LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint32_t x881 = 267077U;
	int16_t x882 = INT16_MIN;
	static volatile uint32_t x883 = UINT32_MAX;
	int64_t x884 = -1LL;

    t163 = ((x881==x882)+(x883*x884));

    if (t163 != -4294967295LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x885 = INT64_MAX;
	static uint16_t x886 = UINT16_MAX;
	volatile uint8_t x888 = UINT8_MAX;
	volatile int64_t t164 = 1132287854151151205LL;

    t164 = ((x885==x886)+(x887*x888));

    if (t164 != -255LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x889 = 77569773082LL;
	uint32_t x890 = UINT32_MAX;
	int8_t x891 = -9;
	int32_t x892 = -1;

    t165 = ((x889==x890)+(x891*x892));

    if (t165 != 9) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x893 = -1;
	static int64_t x894 = 35488463133LL;
	int8_t x895 = -1;
	static int32_t x896 = -1;
	int32_t t166 = 2322661;

    t166 = ((x893==x894)+(x895*x896));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x897 = INT8_MIN;
	int16_t x899 = 0;
	volatile int64_t x900 = INT64_MAX;
	int64_t t167 = -200063727000623LL;

    t167 = ((x897==x898)+(x899*x900));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x903 = INT16_MAX;
	static volatile int8_t x904 = INT8_MIN;
	volatile int32_t t168 = -4976;

    t168 = ((x901==x902)+(x903*x904));

    if (t168 != -4194176) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x906 = -1;
	int8_t x907 = INT8_MAX;
	volatile uint64_t t169 = 2235916686LLU;

    t169 = ((x905==x906)+(x907*x908));

    if (t169 != 3459982942656292LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x910 = UINT32_MAX;
	int16_t x912 = INT16_MIN;
	uint32_t t170 = 1U;

    t170 = ((x909==x910)+(x911*x912));

    if (t170 != 4179984384U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x919 = UINT8_MAX;
	static uint16_t x920 = UINT16_MAX;
	int32_t t171 = 241;

    t171 = ((x917==x918)+(x919*x920));

    if (t171 != 16711425) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x921 = INT64_MIN;
	volatile int64_t x922 = -1LL;
	int8_t x923 = 0;
	static uint64_t x924 = 647644843480794210LLU;

    t172 = ((x921==x922)+(x923*x924));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x925 = -3;
	uint64_t x926 = 442371361LLU;
	static int64_t x927 = INT64_MAX;
	volatile int8_t x928 = -1;
	volatile int64_t t173 = 16LL;

    t173 = ((x925==x926)+(x927*x928));

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x929 = 370086201U;
	static int8_t x931 = INT8_MIN;

    t174 = ((x929==x930)+(x931*x932));

    if (t174 != -3456) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x933 = -82;
	int16_t x934 = -20;
	uint16_t x935 = 1U;
	int64_t x936 = -8109439968621163LL;
	int64_t t175 = 15881306229684LL;

    t175 = ((x933==x934)+(x935*x936));

    if (t175 != -8109439968621163LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x941 = 81U;
	int32_t x942 = INT32_MIN;
	int32_t x943 = -1;

    t176 = ((x941==x942)+(x943*x944));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x945 = INT16_MAX;
	uint32_t x946 = UINT32_MAX;
	static volatile uint64_t x947 = 1661786LLU;

    t177 = ((x945==x946)+(x947*x948));

    if (t177 != 423755430LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x950 = 0;
	uint64_t x952 = 14594862LLU;
	static uint64_t t178 = 123927201742LLU;

    t178 = ((x949==x950)+(x951*x952));

    if (t178 != 18446740176706259272LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x953 = INT32_MIN;
	int32_t x954 = 50482;
	int32_t x955 = INT32_MIN;
	volatile uint64_t x956 = 66821035493593LLU;
	volatile uint64_t t179 = 3LLU;

    t179 = ((x953==x954)+(x955*x956));

    if (t179 != 141084468025753600LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x957 = -1;
	int64_t x958 = -1LL;
	static uint8_t x959 = 1U;
	static volatile int16_t x960 = -1;
	volatile int32_t t180 = 113;

    t180 = ((x957==x958)+(x959*x960));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x962 = 2673145813772939144LL;
	static volatile int32_t x963 = 27676;
	volatile uint32_t x964 = UINT32_MAX;
	uint32_t t181 = 467834U;

    t181 = ((x961==x962)+(x963*x964));

    if (t181 != 4294939620U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x973 = 34;
	int32_t x974 = 4;
	static int16_t x975 = INT16_MAX;
	static int64_t x976 = -1LL;

    t182 = ((x973==x974)+(x975*x976));

    if (t182 != -32767LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x977 = 8198426684LLU;
	int16_t x979 = INT16_MIN;
	volatile int16_t x980 = -21;
	static volatile int32_t t183 = 0;

    t183 = ((x977==x978)+(x979*x980));

    if (t183 != 688128) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x981 = 7894869;
	volatile uint64_t x982 = 0LLU;
	uint8_t x984 = UINT8_MAX;
	volatile uint64_t t184 = 21904LLU;

    t184 = ((x981==x982)+(x983*x984));

    if (t184 != 856537193940LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x985 = INT32_MAX;
	uint64_t x986 = 444051709324LLU;
	int16_t x987 = INT16_MIN;
	int16_t x988 = INT16_MIN;

    t185 = ((x985==x986)+(x987*x988));

    if (t185 != 1073741824) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x993 = INT32_MIN;
	int16_t x994 = INT16_MIN;
	static volatile int8_t x995 = 0;
	uint64_t x996 = UINT64_MAX;
	volatile uint64_t t186 = 2437207994383LLU;

    t186 = ((x993==x994)+(x995*x996));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1001 = INT16_MIN;
	int64_t x1002 = -475861609829LL;
	uint64_t x1003 = UINT64_MAX;
	int16_t x1004 = INT16_MIN;

    t187 = ((x1001==x1002)+(x1003*x1004));

    if (t187 != 32768LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x1005 = 0U;
	uint16_t x1006 = 100U;
	static uint8_t x1007 = UINT8_MAX;
	int64_t x1008 = 2858604123536286LL;

    t188 = ((x1005==x1006)+(x1007*x1008));

    if (t188 != 728944051501752930LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x1009 = 26;
	volatile int32_t t189 = 8877;

    t189 = ((x1009==x1010)+(x1011*x1012));

    if (t189 != 16384) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1013 = INT32_MIN;
	int8_t x1014 = 1;
	int32_t x1016 = INT32_MAX;
	static volatile int32_t t190 = 482382;

    t190 = ((x1013==x1014)+(x1015*x1016));

    if (t190 != -2147483647) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1017 = INT32_MAX;
	int16_t x1018 = INT16_MIN;
	uint32_t x1019 = UINT32_MAX;
	uint16_t x1020 = 59U;

    t191 = ((x1017==x1018)+(x1019*x1020));

    if (t191 != 4294967237U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1025 = -1;
	int16_t x1026 = INT16_MIN;
	int16_t x1027 = 26;
	int32_t t192 = 569;

    t192 = ((x1025==x1026)+(x1027*x1028));

    if (t192 != 182) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1032 = INT16_MAX;
	static int32_t t193 = 313;

    t193 = ((x1029==x1030)+(x1031*x1032));

    if (t193 != 1073676289) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1033 = -320847LL;
	uint8_t x1034 = UINT8_MAX;
	volatile uint32_t x1035 = 961U;
	static int32_t x1036 = INT32_MIN;
	uint32_t t194 = 2969784U;

    t194 = ((x1033==x1034)+(x1035*x1036));

    if (t194 != 2147483648U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x1045 = INT32_MAX;
	static int32_t x1046 = INT32_MAX;
	static uint16_t x1047 = 8U;
	int32_t t195 = 286336;

    t195 = ((x1045==x1046)+(x1047*x1048));

    if (t195 != -262143) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1049 = 58U;
	uint16_t x1052 = 0U;

    t196 = ((x1049==x1050)+(x1051*x1052));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x1053 = 25U;
	int32_t x1054 = INT32_MIN;
	static int16_t x1055 = INT16_MAX;
	volatile int32_t t197 = -26477126;

    t197 = ((x1053==x1054)+(x1055*x1056));

    if (t197 != 4161409) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1058 = INT32_MAX;
	volatile uint32_t x1060 = UINT32_MAX;
	uint32_t t198 = 7525199U;

    t198 = ((x1057==x1058)+(x1059*x1060));

    if (t198 != 9U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1061 = UINT32_MAX;
	uint64_t x1062 = 7LLU;
	uint64_t x1063 = 135825059052838029LLU;
	volatile uint16_t x1064 = 1826U;
	uint64_t t199 = 4007661LLU;

    t199 = ((x1061==x1062)+(x1063*x1064));

    if (t199 != 8208884872258069946LLU) { NG(); } else { ; }
	
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

