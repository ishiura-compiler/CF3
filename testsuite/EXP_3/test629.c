
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

static int64_t x2 = INT64_MAX;
static uint8_t x15 = 3U;
int32_t x17 = -22970575;
int64_t x18 = 30141153LL;
static int16_t x19 = -1;
volatile int16_t x25 = INT16_MIN;
int64_t x26 = 3LL;
uint32_t x27 = 412396255U;
static volatile int64_t t5 = -1LL;
uint64_t x31 = UINT64_MAX;
volatile uint64_t t6 = 61685LLU;
int32_t t7 = -254;
static int32_t t8 = -470958;
uint32_t x51 = UINT32_MAX;
int8_t x53 = INT8_MIN;
int32_t x55 = -303470464;
uint32_t x56 = 163837U;
int32_t x62 = -1;
int64_t x69 = 203616488339LL;
int32_t x70 = -1278;
static volatile int8_t x71 = -1;
int64_t x76 = -1LL;
volatile int32_t t16 = 1700817;
uint64_t t19 = 135880182567906LLU;
int8_t x100 = INT8_MIN;
static volatile int8_t x105 = 1;
static int64_t x106 = 398260LL;
uint8_t x121 = 26U;
uint16_t x124 = UINT16_MAX;
uint64_t x135 = 58547999LLU;
int32_t x143 = INT32_MIN;
volatile int16_t x151 = -6580;
int16_t x158 = -2839;
uint32_t x165 = UINT32_MAX;
uint32_t x184 = UINT32_MAX;
uint64_t t32 = 8355243970508854LLU;
static uint16_t x189 = UINT16_MAX;
int32_t x190 = 1;
static volatile int32_t x203 = INT32_MAX;
uint16_t x206 = 3U;
int32_t x210 = INT32_MAX;
uint64_t x211 = 26974791442545LLU;
static int8_t x213 = 13;
int64_t t38 = 323LL;
uint16_t x217 = 4370U;
static int8_t x227 = -1;
uint64_t x244 = 67224LLU;
uint32_t x249 = UINT32_MAX;
int32_t x259 = 120364337;
static uint64_t t46 = 1021730742LLU;
volatile int64_t t47 = 6003653390900074LL;
static int16_t x274 = INT16_MAX;
uint32_t x275 = 1499037U;
uint32_t x282 = 562845U;
int16_t x300 = INT16_MIN;
int8_t x301 = INT8_MIN;
static volatile uint64_t t55 = 55LLU;
static int64_t x307 = -2054748305269LL;
volatile int64_t x324 = -16810814995441285LL;
int64_t t59 = 51444LL;
int16_t x328 = -1;
static int32_t x331 = INT32_MAX;
volatile uint64_t t62 = 11325560LLU;
uint64_t t63 = 14925375045531LLU;
int8_t x348 = INT8_MIN;
int16_t x366 = -1;
int8_t x368 = INT8_MIN;
int32_t x379 = -1;
int8_t x381 = INT8_MIN;
volatile uint32_t x384 = 181533U;
int8_t x388 = 6;
int32_t x406 = -1;
volatile int8_t x407 = INT8_MAX;
int16_t x415 = -20;
int16_t x420 = INT16_MIN;
static volatile int8_t x421 = INT8_MIN;
volatile uint32_t t78 = 10970346U;
uint8_t x426 = 5U;
static int16_t x434 = -1;
uint8_t x436 = 21U;
int32_t x437 = -2404;
int32_t x440 = INT32_MIN;
static int32_t x441 = INT32_MAX;
int8_t x446 = -1;
int8_t x448 = 22;
volatile int64_t t83 = 0LL;
static int64_t t84 = -110554899505LL;
static uint8_t x458 = 73U;
volatile uint32_t t85 = 25175U;
int8_t x463 = INT8_MIN;
volatile uint64_t t86 = 4793677507959845LLU;
static volatile uint64_t x469 = 35386195838068220LLU;
int8_t x473 = INT8_MIN;
uint8_t x477 = 5U;
volatile int16_t x482 = INT16_MIN;
uint64_t x485 = UINT64_MAX;
uint64_t x493 = UINT64_MAX;
static volatile uint16_t x503 = 4U;
static uint32_t x508 = 900U;
int64_t x513 = 10067024855545LL;
uint8_t x515 = 0U;
uint32_t x522 = 110412U;
static int16_t x531 = INT16_MAX;
int16_t x532 = -6771;
int64_t t102 = 3176710418425223093LL;
int8_t x539 = -4;
int32_t x540 = -1;
volatile int16_t x541 = 1;
int64_t t104 = -163166441686LL;
int32_t x549 = -8297153;
volatile int32_t t105 = -1200;
volatile int32_t t106 = -3917;
static uint32_t x558 = 28259U;
static uint32_t t107 = 382438U;
volatile int8_t x564 = INT8_MIN;
uint8_t x568 = 4U;
volatile uint64_t x574 = 248883609809LLU;
static int32_t x575 = 0;
int32_t x576 = -26;
static uint64_t t111 = 434899LLU;
int32_t x579 = -1;
volatile int32_t t112 = 18692966;
volatile uint64_t t113 = 6460LLU;
int32_t t114 = 1464;
static int16_t x613 = INT16_MAX;
volatile int16_t x615 = INT16_MIN;
int8_t x617 = INT8_MIN;
uint64_t x618 = UINT64_MAX;
volatile uint32_t x627 = 39497U;
volatile uint64_t t119 = 376781405213LLU;
int64_t x637 = -302387LL;
uint64_t x638 = 70LLU;
uint64_t t120 = 69730LLU;
static int8_t x643 = INT8_MAX;
int8_t x651 = INT8_MIN;
volatile int16_t x654 = -5749;
uint16_t x661 = 31757U;
static int64_t t126 = 37LL;
int32_t x683 = 4;
static uint8_t x690 = 7U;
static int32_t x696 = 2;
int64_t x697 = -1LL;
int32_t x701 = INT32_MAX;
static uint32_t t134 = 9U;
static volatile int8_t x715 = -1;
static int16_t x724 = -1;
static uint8_t x730 = 5U;
int64_t x733 = 107287475591LL;
uint8_t x734 = UINT8_MAX;
int32_t t143 = 62349652;
uint64_t x748 = 3476453LLU;
static volatile uint64_t t144 = 504753512313522498LLU;
uint8_t x749 = 1U;
int32_t t145 = 819926904;
uint64_t x754 = UINT64_MAX;
int16_t x773 = -72;
uint16_t x776 = 737U;
static volatile int64_t t149 = 68020308258LL;
uint32_t x793 = UINT32_MAX;
static uint16_t x801 = 57U;
int64_t x804 = 9623221LL;
static uint16_t x813 = 2U;
uint64_t x814 = 64LLU;
static int16_t x822 = -1;
uint8_t x826 = UINT8_MAX;
int16_t x828 = INT16_MIN;
int64_t x830 = INT64_MIN;
int64_t x832 = INT64_MIN;
uint16_t x833 = 14U;
static uint32_t x834 = 33U;
uint32_t t161 = 22361707U;
uint8_t x849 = 17U;
uint64_t t164 = 2017250676290998084LLU;
int16_t x861 = INT16_MIN;
volatile uint32_t t168 = 53781439U;
uint64_t x875 = UINT64_MAX;
static uint64_t x880 = 12LLU;
uint64_t t171 = 680642601267155LLU;
static volatile int16_t x885 = INT16_MIN;
int8_t x887 = INT8_MIN;
uint16_t x889 = UINT16_MAX;
int8_t x891 = -1;
int8_t x892 = -1;
int64_t x898 = -128698LL;
static int64_t x899 = -1LL;
static volatile uint64_t x905 = 3243460389290LLU;
volatile int64_t x906 = 427418786057916703LL;
volatile uint64_t t175 = 5LLU;
volatile int32_t x910 = INT32_MAX;
uint32_t x915 = UINT32_MAX;
static uint64_t x918 = 474LLU;
int32_t x919 = -1;
static volatile int8_t x924 = -3;
volatile uint32_t t179 = UINT32_MAX;
int8_t x927 = INT8_MIN;
int32_t x928 = INT32_MIN;
uint8_t x933 = 23U;
int32_t x936 = -1;
volatile int32_t t181 = -107492;
uint32_t x941 = 896U;
volatile uint32_t t183 = 46642222U;
static volatile int8_t x956 = 16;
static int8_t x960 = -37;
uint32_t t187 = 306U;
int8_t x964 = INT8_MIN;
int16_t x977 = -1;
volatile uint64_t t192 = 2051109179434LLU;
int16_t x990 = -344;
static int16_t x994 = 108;
static int64_t x997 = -59163007LL;
int32_t x998 = INT32_MIN;
volatile uint64_t t197 = 1498855LLU;
volatile int16_t x1017 = 5;
volatile int8_t x1020 = 53;
int64_t x1023 = -35414534LL;


void f0(void) {
    	static int16_t x1 = -1;
	uint32_t x3 = 10527U;
	static uint32_t x4 = 833541U;
	int64_t t0 = -1661304197LL;

    t0 = ((x1*x2)|(x3/x4));

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	volatile int32_t x6 = 1641;
	int8_t x7 = INT8_MIN;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = -305211;

    t1 = ((x5*x6)|(x7/x8));

    if (t1 != -1641) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x13 = 59;
	volatile uint16_t x14 = 10449U;
	uint64_t x16 = UINT64_MAX;
	uint64_t t2 = 128382100372LLU;

    t2 = ((x13*x14)|(x15/x16));

    if (t2 != 616491LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x20 = 11250319;
	static volatile int64_t t3 = 141942358077909985LL;

    t3 = ((x17*x18)|(x19/x20));

    if (t3 != -692359615572975LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = 2;
	uint8_t x22 = 3U;
	volatile int8_t x23 = -1;
	static uint8_t x24 = 66U;
	int32_t t4 = 289432;

    t4 = ((x21*x22)|(x23/x24));

    if (t4 != 6) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x28 = INT8_MIN;

    t5 = ((x25*x26)|(x27/x28));

    if (t5 != -98304LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = -1;
	int32_t x30 = 1266673;
	volatile uint32_t x32 = 1577356444U;

    t6 = ((x29*x30)|(x31/x32));

    if (t6 != 18446744073708498255LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x33 = INT8_MAX;
	int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	int32_t x36 = -455;

    t7 = ((x33*x34)|(x35/x36));

    if (t7 != -4161464) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MAX;
	volatile int8_t x38 = -5;
	uint8_t x39 = 1U;
	int8_t x40 = -1;

    t8 = ((x37*x38)|(x39/x40));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x45 = -1;
	volatile int16_t x46 = INT16_MIN;
	volatile int16_t x47 = INT16_MAX;
	int16_t x48 = INT16_MAX;
	volatile int32_t t9 = -258190796;

    t9 = ((x45*x46)|(x47/x48));

    if (t9 != 32769) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = 3U;
	static uint16_t x50 = 26413U;
	volatile uint32_t x52 = UINT32_MAX;
	volatile uint32_t t10 = 12U;

    t10 = ((x49*x50)|(x51/x52));

    if (t10 != 79239U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x54 = UINT64_MAX;
	static volatile uint64_t t11 = 1112370565105LLU;

    t11 = ((x53*x54)|(x55/x56));

    if (t11 != 24490LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MIN;
	volatile int8_t x58 = 0;
	uint64_t x59 = 829745605389720904LLU;
	static int16_t x60 = INT16_MAX;
	uint64_t t12 = 189942532341LLU;

    t12 = ((x57*x58)|(x59/x60));

    if (t12 != 25322599120753LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x61 = 256486975U;
	static int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	int64_t t13 = 911650LL;

    t13 = ((x61*x62)|(x63/x64));

    if (t13 != 281479015190977LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x72 = 381U;
	int64_t t14 = 3779LL;

    t14 = ((x69*x70)|(x71/x72));

    if (t14 != -260221869213002LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x73 = 1555LLU;
	int16_t x74 = -1;
	int16_t x75 = INT16_MIN;
	volatile uint64_t t15 = 101607732596336LLU;

    t15 = ((x73*x74)|(x75/x76));

    if (t15 != 18446744073709550061LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = 7U;
	static int8_t x78 = INT8_MIN;
	static int16_t x79 = -3337;
	volatile uint16_t x80 = UINT16_MAX;

    t16 = ((x77*x78)|(x79/x80));

    if (t16 != -896) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	static int8_t x82 = -1;
	uint8_t x83 = 3U;
	int16_t x84 = 6127;
	int32_t t17 = -1;

    t17 = ((x81*x82)|(x83/x84));

    if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x89 = INT64_MAX;
	volatile int8_t x90 = -1;
	int8_t x91 = INT8_MAX;
	uint8_t x92 = 5U;
	int64_t t18 = -355562531319LL;

    t18 = ((x89*x90)|(x91/x92));

    if (t18 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x93 = 71012293U;
	int32_t x94 = INT32_MAX;
	uint64_t x95 = UINT64_MAX;
	volatile uint32_t x96 = 928399U;

    t19 = ((x93*x94)|(x95/x96));

    if (t19 != 19870663899327LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x97 = UINT8_MAX;
	volatile int32_t x98 = -28;
	int64_t x99 = INT64_MIN;
	static int64_t t20 = 123694754966LL;

    t20 = ((x97*x98)|(x99/x100));

    if (t20 != -7140LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x107 = 14U;
	int32_t x108 = 426162;
	volatile int64_t t21 = 106016734020417LL;

    t21 = ((x105*x106)|(x107/x108));

    if (t21 != 398260LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x109 = 92638157U;
	uint32_t x110 = UINT32_MAX;
	volatile int8_t x111 = 13;
	uint16_t x112 = UINT16_MAX;
	uint32_t t22 = 1106358U;

    t22 = ((x109*x110)|(x111/x112));

    if (t22 != 4202329139U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x122 = 2703;
	volatile int8_t x123 = INT8_MAX;
	int32_t t23 = -9643;

    t23 = ((x121*x122)|(x123/x124));

    if (t23 != 70278) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x125 = 197931085U;
	int8_t x126 = INT8_MIN;
	uint64_t x127 = 23859738455799518LLU;
	static uint32_t x128 = 949821752U;
	volatile uint64_t t24 = 113LLU;

    t24 = ((x125*x126)|(x127/x128));

    if (t24 != 436198883LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x133 = INT8_MAX;
	static int8_t x134 = INT8_MIN;
	static int16_t x136 = -1;
	volatile uint64_t t25 = 137305274400LLU;

    t25 = ((x133*x134)|(x135/x136));

    if (t25 != 18446744073709535360LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x141 = -1;
	int16_t x142 = 3707;
	static volatile int8_t x144 = INT8_MIN;
	volatile int32_t t26 = 169;

    t26 = ((x141*x142)|(x143/x144));

    if (t26 != -3707) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x149 = 8094;
	int16_t x150 = INT16_MAX;
	int8_t x152 = -1;
	int32_t t27 = 0;

    t27 = ((x149*x150)|(x151/x152));

    if (t27 != 265222646) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x157 = 382589051820197LL;
	int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;
	volatile int64_t t28 = -6335LL;

    t28 = ((x157*x158)|(x159/x160));

    if (t28 != -140737488358867LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x166 = UINT32_MAX;
	volatile int64_t x167 = INT64_MIN;
	uint16_t x168 = 1U;
	int64_t t29 = -11635278029LL;

    t29 = ((x165*x166)|(x167/x168));

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x173 = 365575LLU;
	int16_t x174 = -1;
	static uint32_t x175 = 4U;
	int8_t x176 = INT8_MIN;
	uint64_t t30 = 72864488425LLU;

    t30 = ((x173*x174)|(x175/x176));

    if (t30 != 18446744073709186041LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x177 = INT8_MIN;
	uint32_t x178 = 24U;
	uint64_t x179 = 34944LLU;
	static int16_t x180 = INT16_MIN;
	static uint64_t t31 = 2563575943765LLU;

    t31 = ((x177*x178)|(x179/x180));

    if (t31 != 4294964224LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x181 = 57460473786854504LLU;
	int64_t x182 = 31311794896434944LL;
	static int8_t x183 = -11;

    t32 = ((x181*x182)|(x183/x184));

    if (t32 != 10807678418346858496LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x191 = INT32_MIN;
	static int8_t x192 = 14;
	int32_t t33 = -65845747;

    t33 = ((x189*x190)|(x191/x192));

    if (t33 != -153354241) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x197 = 2831518369LLU;
	int8_t x198 = -3;
	int64_t x199 = INT64_MAX;
	int64_t x200 = -1LL;
	uint64_t t34 = 2LLU;

    t34 = ((x197*x198)|(x199/x200));

    if (t34 != 18446744065214996509LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x201 = 28U;
	int16_t x202 = INT16_MIN;
	volatile uint64_t x204 = 4095986476956209044LLU;
	volatile uint64_t t35 = 3484LLU;

    t35 = ((x201*x202)|(x203/x204));

    if (t35 != 4294049792LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x205 = 15746402194628557LLU;
	static uint16_t x207 = UINT16_MAX;
	volatile int8_t x208 = INT8_MAX;
	volatile uint64_t t36 = 3881652509505178LLU;

    t36 = ((x205*x206)|(x207/x208));

    if (t36 != 47239206583885671LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x209 = 1U;
	uint8_t x212 = 117U;
	volatile uint64_t t37 = 111447LLU;

    t37 = ((x209*x210)|(x211/x212));

    if (t37 != 231928233983LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x214 = INT16_MIN;
	volatile int8_t x215 = -1;
	static int64_t x216 = -16878632041883663LL;

    t38 = ((x213*x214)|(x215/x216));

    if (t38 != -425984LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x218 = 254431356U;
	static volatile int64_t x219 = INT64_MAX;
	int8_t x220 = INT8_MAX;
	int64_t t39 = 125902652817265LL;

    t39 = ((x217*x218)|(x219/x220));

    if (t39 != 72624980431594681LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x225 = INT8_MIN;
	static uint64_t x226 = 0LLU;
	static int8_t x228 = INT8_MIN;
	volatile uint64_t t40 = 49170049LLU;

    t40 = ((x225*x226)|(x227/x228));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	uint32_t x236 = 221756U;
	int64_t t41 = -366LL;

    t41 = ((x233*x234)|(x235/x236));

    if (t41 != -41592430900371LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x241 = 26892897693303LLU;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	uint64_t t42 = 957157033354220LLU;

    t42 = ((x241*x242)|(x243/x244));

    if (t42 != 17565720470614228661LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x250 = 1523U;
	volatile uint32_t x251 = 107U;
	static volatile uint64_t x252 = 47722968854LLU;
	static volatile uint64_t t43 = 983817610008498433LLU;

    t43 = ((x249*x250)|(x251/x252));

    if (t43 != 4294965773LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x253 = -1403;
	uint16_t x254 = 2247U;
	int32_t x255 = -1;
	int8_t x256 = 1;
	volatile int32_t t44 = 27965;

    t44 = ((x253*x254)|(x255/x256));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x257 = 92606U;
	volatile int16_t x258 = -22;
	int16_t x260 = INT16_MAX;
	uint32_t t45 = 44780U;

    t45 = ((x257*x258)|(x259/x260));

    if (t45 != 4292931581U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x261 = 0U;
	uint64_t x262 = UINT64_MAX;
	int8_t x263 = -1;
	static int32_t x264 = 346;

    t46 = ((x261*x262)|(x263/x264));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x265 = -37;
	static uint32_t x266 = 261878U;
	volatile int64_t x267 = INT64_MIN;
	static volatile int64_t x268 = -2929LL;

    t47 = ((x265*x266)|(x267/x268));

    if (t47 != 3148984112494335LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x273 = 0U;
	int8_t x276 = -1;
	uint32_t t48 = 1028244579U;

    t48 = ((x273*x274)|(x275/x276));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x277 = 3U;
	int8_t x278 = 1;
	int8_t x279 = -23;
	uint16_t x280 = 3U;
	volatile int32_t t49 = 27;

    t49 = ((x277*x278)|(x279/x280));

    if (t49 != -5) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x281 = 26U;
	static uint8_t x283 = 2U;
	static int8_t x284 = INT8_MAX;
	uint32_t t50 = 1376018450U;

    t50 = ((x281*x282)|(x283/x284));

    if (t50 != 14633970U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x285 = INT16_MAX;
	static int64_t x286 = 932965556199LL;
	volatile int32_t x287 = INT32_MIN;
	int16_t x288 = INT16_MAX;
	int64_t t51 = 10842639808774LL;

    t51 = ((x285*x286)|(x287/x288));

    if (t51 != -65537LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x289 = -2;
	volatile uint8_t x290 = 21U;
	volatile uint64_t x291 = 304266LLU;
	int8_t x292 = 3;
	static uint64_t t52 = 13382691147750154LLU;

    t52 = ((x289*x290)|(x291/x292));

    if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x293 = -1;
	volatile int16_t x294 = INT16_MAX;
	uint16_t x295 = 33U;
	uint64_t x296 = UINT64_MAX;
	static volatile uint64_t t53 = 135830793167746LLU;

    t53 = ((x293*x294)|(x295/x296));

    if (t53 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x297 = UINT64_MAX;
	int64_t x298 = -1LL;
	int16_t x299 = 4597;
	uint64_t t54 = 29199446498LLU;

    t54 = ((x297*x298)|(x299/x300));

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x302 = 3911259348391LLU;
	uint8_t x303 = 12U;
	uint8_t x304 = UINT8_MAX;

    t55 = ((x301*x302)|(x303/x304));

    if (t55 != 18446243432512957568LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x305 = -1;
	static uint16_t x306 = 1497U;
	int16_t x308 = INT16_MIN;
	volatile int64_t t56 = -64621943368479389LL;

    t56 = ((x305*x306)|(x307/x308));

    if (t56 != -1225LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x313 = -1;
	uint32_t x314 = 41900110U;
	static volatile uint16_t x315 = UINT16_MAX;
	static volatile int64_t x316 = 201751645295284LL;
	volatile int64_t t57 = -56897LL;

    t57 = ((x313*x314)|(x315/x316));

    if (t57 != 4253067186LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x317 = UINT32_MAX;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = UINT16_MAX;
	static uint32_t x320 = 859719U;
	static volatile uint32_t t58 = 3U;

    t58 = ((x317*x318)|(x319/x320));

    if (t58 != 32768U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x321 = UINT8_MAX;
	static int8_t x322 = -2;
	static int16_t x323 = -488;

    t59 = ((x321*x322)|(x323/x324));

    if (t59 != -510LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x325 = UINT8_MAX;
	static volatile int16_t x326 = 0;
	volatile uint16_t x327 = 31U;
	int32_t t60 = -334902485;

    t60 = ((x325*x326)|(x327/x328));

    if (t60 != -31) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x329 = UINT8_MAX;
	static int8_t x330 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	static int32_t t61 = 233223547;

    t61 = ((x329*x330)|(x331/x332));

    if (t61 != -32640) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x337 = -1;
	int16_t x338 = INT16_MIN;
	uint8_t x339 = 20U;
	uint64_t x340 = 100839799LLU;

    t62 = ((x337*x338)|(x339/x340));

    if (t62 != 32768LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x341 = INT16_MIN;
	static uint64_t x342 = 0LLU;
	static volatile uint32_t x343 = 90U;
	int8_t x344 = -1;

    t63 = ((x341*x342)|(x343/x344));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x345 = UINT8_MAX;
	uint16_t x346 = 4747U;
	int32_t x347 = 277684478;
	int32_t t64 = -65472;

    t64 = ((x345*x346)|(x347/x348));

    if (t64 != -2163201) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x353 = 275U;
	volatile int32_t x354 = -493154;
	static int32_t x355 = INT32_MIN;
	uint32_t x356 = 119U;
	uint32_t t65 = 117090U;

    t65 = ((x353*x354)|(x355/x356));

    if (t65 != 4160486587U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x357 = UINT8_MAX;
	int8_t x358 = -1;
	int8_t x359 = -1;
	uint16_t x360 = 3781U;
	volatile int32_t t66 = 9;

    t66 = ((x357*x358)|(x359/x360));

    if (t66 != -255) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x365 = -1;
	int16_t x367 = -1;
	static int32_t t67 = 487;

    t67 = ((x365*x366)|(x367/x368));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x369 = 5U;
	static int32_t x370 = INT32_MIN;
	volatile int64_t x371 = -1LL;
	int8_t x372 = -1;
	volatile int64_t t68 = 14196074905LL;

    t68 = ((x369*x370)|(x371/x372));

    if (t68 != 2147483649LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x377 = -1436;
	uint8_t x378 = UINT8_MAX;
	uint16_t x380 = UINT16_MAX;
	static int32_t t69 = 43;

    t69 = ((x377*x378)|(x379/x380));

    if (t69 != -366180) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x382 = INT16_MIN;
	int16_t x383 = -96;
	uint32_t t70 = 474U;

    t70 = ((x381*x382)|(x383/x384));

    if (t70 != 4217963U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x385 = INT16_MIN;
	int32_t x386 = -1;
	volatile uint8_t x387 = UINT8_MAX;
	volatile int32_t t71 = -355;

    t71 = ((x385*x386)|(x387/x388));

    if (t71 != 32810) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x393 = 2U;
	volatile int64_t x394 = -1LL;
	static uint16_t x395 = 3U;
	volatile uint16_t x396 = 12U;
	volatile int64_t t72 = -6475LL;

    t72 = ((x393*x394)|(x395/x396));

    if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x401 = 149;
	int16_t x402 = -1;
	int8_t x403 = -1;
	static int16_t x404 = 5392;
	static volatile int32_t t73 = 50;

    t73 = ((x401*x402)|(x403/x404));

    if (t73 != -149) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x405 = -1;
	uint32_t x408 = UINT32_MAX;
	uint32_t t74 = 76449U;

    t74 = ((x405*x406)|(x407/x408));

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x409 = UINT32_MAX;
	int8_t x410 = INT8_MAX;
	volatile uint8_t x411 = UINT8_MAX;
	uint16_t x412 = 9U;
	uint32_t t75 = 1724367217U;

    t75 = ((x409*x410)|(x411/x412));

    if (t75 != 4294967197U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x413 = 6U;
	static uint64_t x414 = UINT64_MAX;
	uint64_t x416 = 30201971682LLU;
	uint64_t t76 = UINT64_MAX;

    t76 = ((x413*x414)|(x415/x416));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x417 = INT64_MAX;
	uint64_t x418 = UINT64_MAX;
	volatile int64_t x419 = -1LL;
	volatile uint64_t t77 = 185790LLU;

    t77 = ((x417*x418)|(x419/x420));

    if (t77 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x422 = -1;
	uint32_t x423 = UINT32_MAX;
	int8_t x424 = INT8_MIN;

    t78 = ((x421*x422)|(x423/x424));

    if (t78 != 129U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x425 = -1;
	int64_t x427 = -1LL;
	uint64_t x428 = 224LLU;
	volatile uint64_t t79 = UINT64_MAX;

    t79 = ((x425*x426)|(x427/x428));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x433 = 18946359877230238LL;
	int32_t x435 = 23;
	volatile int64_t t80 = 35681745080958373LL;

    t80 = ((x433*x434)|(x435/x436));

    if (t80 != -18946359877230237LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x438 = UINT16_MAX;
	int64_t x439 = -1709761LL;
	static volatile int64_t t81 = -431837043659440458LL;

    t81 = ((x437*x438)|(x439/x440));

    if (t81 != -157546140LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x442 = -1;
	volatile uint64_t x443 = UINT64_MAX;
	int16_t x444 = -131;
	uint64_t t82 = 3900LLU;

    t82 = ((x441*x442)|(x443/x444));

    if (t82 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x445 = 1192;
	static int64_t x447 = 2978827694LL;

    t83 = ((x445*x446)|(x447/x448));

    if (t83 != -134LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x449 = 220U;
	int16_t x450 = -1;
	int16_t x451 = -1;
	int64_t x452 = INT64_MAX;

    t84 = ((x449*x450)|(x451/x452));

    if (t84 != 4294967076LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x457 = 0U;
	uint32_t x459 = 1U;
	uint32_t x460 = UINT32_MAX;

    t85 = ((x457*x458)|(x459/x460));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x461 = 310229;
	volatile int8_t x462 = INT8_MAX;
	uint64_t x464 = 522632193607LLU;

    t86 = ((x461*x462)|(x463/x464));

    if (t86 != 39567083LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x465 = -1;
	uint16_t x466 = UINT16_MAX;
	static int64_t x467 = -1LL;
	static int32_t x468 = 467740;
	static int64_t t87 = 21039718236195864LL;

    t87 = ((x465*x466)|(x467/x468));

    if (t87 != -65535LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x470 = 0;
	static volatile int8_t x471 = INT8_MIN;
	static uint16_t x472 = 3U;
	volatile uint64_t t88 = 63371138482803LLU;

    t88 = ((x469*x470)|(x471/x472));

    if (t88 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x474 = 2740707U;
	static volatile int16_t x475 = INT16_MIN;
	uint32_t x476 = UINT32_MAX;
	uint32_t t89 = 22U;

    t89 = ((x473*x474)|(x475/x476));

    if (t89 != 3944156800U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x478 = -302108836081LL;
	int16_t x479 = -440;
	static int32_t x480 = INT32_MAX;
	int64_t t90 = 1649757LL;

    t90 = ((x477*x478)|(x479/x480));

    if (t90 != -1510544180405LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x481 = 15;
	static volatile int8_t x483 = 3;
	int8_t x484 = INT8_MIN;
	int32_t t91 = 9;

    t91 = ((x481*x482)|(x483/x484));

    if (t91 != -491520) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x486 = 2041;
	int64_t x487 = INT64_MIN;
	int16_t x488 = INT16_MIN;
	volatile uint64_t t92 = 1326214415309779LLU;

    t92 = ((x485*x486)|(x487/x488));

    if (t92 != 18446744073709549575LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x489 = -813LL;
	uint64_t x490 = 845999464LLU;
	int16_t x491 = -1;
	uint32_t x492 = UINT32_MAX;
	static uint64_t t93 = 283499059150279210LLU;

    t93 = ((x489*x490)|(x491/x492));

    if (t93 != 18446743385911987385LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x494 = INT8_MIN;
	int32_t x495 = 3037;
	int8_t x496 = -1;
	uint64_t t94 = 1LLU;

    t94 = ((x493*x494)|(x495/x496));

    if (t94 != 18446744073709548707LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x497 = -1LL;
	uint32_t x498 = UINT32_MAX;
	static uint64_t x499 = UINT64_MAX;
	volatile int64_t x500 = INT64_MAX;
	uint64_t t95 = 1LLU;

    t95 = ((x497*x498)|(x499/x500));

    if (t95 != 18446744069414584323LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x501 = 69U;
	int8_t x502 = -1;
	volatile int16_t x504 = -1;
	int32_t t96 = 613579;

    t96 = ((x501*x502)|(x503/x504));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x505 = UINT32_MAX;
	int16_t x506 = INT16_MIN;
	uint64_t x507 = 54574LLU;
	uint64_t t97 = 276245404939259LLU;

    t97 = ((x505*x506)|(x507/x508));

    if (t97 != 32828LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x509 = UINT8_MAX;
	static int8_t x510 = INT8_MIN;
	int64_t x511 = 1815625581615140433LL;
	uint64_t x512 = 4264397663LLU;
	volatile uint64_t t98 = 9845027654066LLU;

    t98 = ((x509*x510)|(x511/x512));

    if (t98 != 18446744073709528017LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x514 = INT8_MIN;
	volatile int32_t x516 = INT32_MIN;
	int64_t t99 = 25398216LL;

    t99 = ((x513*x514)|(x515/x516));

    if (t99 != -1288579181509760LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x521 = 116U;
	static int8_t x523 = INT8_MIN;
	int64_t x524 = INT64_MAX;
	static volatile int64_t t100 = -15513657LL;

    t100 = ((x521*x522)|(x523/x524));

    if (t100 != 12807792LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x529 = INT16_MAX;
	int16_t x530 = 1483;
	int32_t t101 = 68670;

    t101 = ((x529*x530)|(x531/x532));

    if (t101 != -3) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x533 = 118U;
	volatile uint8_t x534 = 12U;
	uint16_t x535 = 48U;
	volatile int64_t x536 = INT64_MIN;

    t102 = ((x533*x534)|(x535/x536));

    if (t102 != 1416LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x537 = INT16_MAX;
	static uint8_t x538 = 1U;
	volatile int32_t t103 = -3;

    t103 = ((x537*x538)|(x539/x540));

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x542 = INT8_MAX;
	int16_t x543 = INT16_MAX;
	int64_t x544 = -429383197476602LL;

    t104 = ((x541*x542)|(x543/x544));

    if (t104 != 127LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x550 = 3;
	int32_t x551 = -1075255;
	static volatile int8_t x552 = INT8_MIN;

    t105 = ((x549*x550)|(x551/x552));

    if (t105 != -24891395) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x553 = 4216U;
	uint16_t x554 = 8U;
	int32_t x555 = -1;
	volatile int16_t x556 = INT16_MIN;

    t106 = ((x553*x554)|(x555/x556));

    if (t106 != 33728) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x557 = -86369;
	int8_t x559 = INT8_MIN;
	uint32_t x560 = 766U;

    t107 = ((x557*x558)|(x559/x560));

    if (t107 != 1859510143U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x561 = 14199063796LLU;
	int16_t x562 = -1;
	volatile int32_t x563 = INT32_MAX;
	uint64_t t108 = 69625LLU;

    t108 = ((x561*x562)|(x563/x564));

    if (t108 != 18446744073704012557LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x565 = UINT8_MAX;
	static int32_t x566 = 15;
	int64_t x567 = -1LL;
	volatile int64_t t109 = 1132453249319LL;

    t109 = ((x565*x566)|(x567/x568));

    if (t109 != 3825LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x569 = INT8_MAX;
	volatile uint8_t x570 = UINT8_MAX;
	int32_t x571 = INT32_MAX;
	uint8_t x572 = 108U;
	int32_t t110 = 0;

    t110 = ((x569*x570)|(x571/x572));

    if (t110 != 19889867) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x573 = UINT16_MAX;

    t111 = ((x573*x574)|(x575/x576));

    if (t111 != 16310587368832815LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x577 = INT16_MIN;
	int8_t x578 = INT8_MIN;
	uint8_t x580 = 21U;

    t112 = ((x577*x578)|(x579/x580));

    if (t112 != 4194304) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x581 = UINT64_MAX;
	int16_t x582 = INT16_MIN;
	static int8_t x583 = -10;
	uint32_t x584 = 5927549U;

    t113 = ((x581*x582)|(x583/x584));

    if (t113 != 33492LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x597 = 0U;
	int8_t x598 = INT8_MIN;
	int16_t x599 = -1;
	int16_t x600 = INT16_MAX;

    t114 = ((x597*x598)|(x599/x600));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x614 = 107328545503149418LLU;
	int32_t x616 = 14960;
	volatile uint64_t t115 = 0LLU;

    t115 = ((x613*x614)|(x615/x616));

    if (t115 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x619 = 10U;
	uint16_t x620 = 1382U;
	static uint64_t t116 = 4280079LLU;

    t116 = ((x617*x618)|(x619/x620));

    if (t116 != 128LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x625 = -1;
	volatile int64_t x626 = -1LL;
	int32_t x628 = INT32_MIN;
	int64_t t117 = -1LL;

    t117 = ((x625*x626)|(x627/x628));

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x629 = 9325;
	uint64_t x630 = UINT64_MAX;
	static uint32_t x631 = 9025U;
	int8_t x632 = -1;
	volatile uint64_t t118 = 3736175100263LLU;

    t118 = ((x629*x630)|(x631/x632));

    if (t118 != 18446744073709542291LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x633 = 15325117072622261LL;
	int8_t x634 = INT8_MAX;
	uint16_t x635 = UINT16_MAX;
	uint64_t x636 = UINT64_MAX;

    t119 = ((x633*x634)|(x635/x636));

    if (t119 != 1946289868223027147LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x639 = INT64_MIN;
	volatile uint32_t x640 = 5248709U;

    t120 = ((x637*x638)|(x639/x640));

    if (t120 != 18446744073692626030LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x641 = 37;
	static volatile int32_t x642 = -1;
	static volatile int16_t x644 = INT16_MIN;
	int32_t t121 = -110025860;

    t121 = ((x641*x642)|(x643/x644));

    if (t121 != -37) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x649 = 372715293994LLU;
	int64_t x650 = INT64_MIN;
	static uint64_t x652 = UINT64_MAX;
	volatile uint64_t t122 = 2130930LLU;

    t122 = ((x649*x650)|(x651/x652));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x653 = INT16_MAX;
	int32_t x655 = -1;
	uint16_t x656 = 3015U;
	int32_t t123 = -22207998;

    t123 = ((x653*x654)|(x655/x656));

    if (t123 != -188377483) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x657 = -1;
	static uint16_t x658 = 49U;
	int64_t x659 = -1LL;
	int64_t x660 = INT64_MIN;
	int64_t t124 = -3325LL;

    t124 = ((x657*x658)|(x659/x660));

    if (t124 != -49LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x662 = -1;
	int8_t x663 = INT8_MIN;
	uint32_t x664 = UINT32_MAX;
	volatile uint32_t t125 = 50100518U;

    t125 = ((x661*x662)|(x663/x664));

    if (t125 != 4294935539U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x665 = INT16_MIN;
	volatile int8_t x666 = 2;
	uint16_t x667 = 3966U;
	int64_t x668 = INT64_MAX;

    t126 = ((x665*x666)|(x667/x668));

    if (t126 != -65536LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x669 = -1;
	int8_t x670 = INT8_MAX;
	volatile int8_t x671 = 1;
	int8_t x672 = 1;
	volatile int32_t t127 = 734198384;

    t127 = ((x669*x670)|(x671/x672));

    if (t127 != -127) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x677 = 2159;
	int8_t x678 = -25;
	int8_t x679 = INT8_MAX;
	uint64_t x680 = UINT64_MAX;
	uint64_t t128 = 4276826731832LLU;

    t128 = ((x677*x678)|(x679/x680));

    if (t128 != 18446744073709497641LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x681 = -1045;
	uint16_t x682 = 26U;
	static uint32_t x684 = UINT32_MAX;
	volatile uint32_t t129 = 1834017U;

    t129 = ((x681*x682)|(x683/x684));

    if (t129 != 4294940126U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x689 = -1;
	int64_t x691 = INT64_MAX;
	int64_t x692 = INT64_MIN;
	volatile int64_t t130 = -1719LL;

    t130 = ((x689*x690)|(x691/x692));

    if (t130 != -7LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x693 = 3;
	volatile int8_t x694 = 58;
	int64_t x695 = -1LL;
	int64_t t131 = 193433LL;

    t131 = ((x693*x694)|(x695/x696));

    if (t131 != 174LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x698 = INT8_MAX;
	int16_t x699 = -1;
	volatile int8_t x700 = -1;
	volatile int64_t t132 = 5144511LL;

    t132 = ((x697*x698)|(x699/x700));

    if (t132 != -127LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x702 = 2316722559LLU;
	int8_t x703 = -7;
	int8_t x704 = INT8_MIN;
	uint64_t t133 = 25065LLU;

    t133 = ((x701*x702)|(x703/x704));

    if (t133 != 4975123810088492673LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x705 = INT16_MIN;
	static uint8_t x706 = 33U;
	uint8_t x707 = UINT8_MAX;
	uint32_t x708 = UINT32_MAX;

    t134 = ((x705*x706)|(x707/x708));

    if (t134 != 4293885952U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x709 = 1858253178U;
	volatile int64_t x710 = -5LL;
	static int16_t x711 = INT16_MAX;
	int64_t x712 = INT64_MAX;
	static volatile int64_t t135 = -417969506LL;

    t135 = ((x709*x710)|(x711/x712));

    if (t135 != -9291265890LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x713 = 2242722283846LLU;
	uint8_t x714 = 14U;
	uint8_t x716 = UINT8_MAX;
	uint64_t t136 = 11533017LLU;

    t136 = ((x713*x714)|(x715/x716));

    if (t136 != 31398111973844LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x717 = 39LLU;
	static uint64_t x718 = UINT64_MAX;
	int64_t x719 = -1LL;
	static int64_t x720 = -959121LL;
	volatile uint64_t t137 = 6602187LLU;

    t137 = ((x717*x718)|(x719/x720));

    if (t137 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x721 = -1;
	volatile uint64_t x722 = 19996363017084133LLU;
	volatile uint8_t x723 = UINT8_MAX;
	volatile uint64_t t138 = 7350968454678301963LLU;

    t138 = ((x721*x722)|(x723/x724));

    if (t138 != 18446744073709551387LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x725 = 0;
	int16_t x726 = INT16_MAX;
	uint16_t x727 = 1U;
	int8_t x728 = INT8_MAX;
	int32_t t139 = -22513139;

    t139 = ((x725*x726)|(x727/x728));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x729 = UINT64_MAX;
	volatile uint8_t x731 = UINT8_MAX;
	static int8_t x732 = -1;
	uint64_t t140 = 1607323604004574LLU;

    t140 = ((x729*x730)|(x731/x732));

    if (t140 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x735 = 148698U;
	volatile int64_t x736 = INT64_MIN;
	volatile int64_t t141 = -8062158625121LL;

    t141 = ((x733*x734)|(x735/x736));

    if (t141 != 27358306275705LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x737 = INT16_MAX;
	int16_t x738 = INT16_MAX;
	int32_t x739 = INT32_MIN;
	static int8_t x740 = INT8_MIN;
	int32_t t142 = -14266;

    t142 = ((x737*x738)|(x739/x740));

    if (t142 != 1073676289) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x741 = 442;
	volatile uint8_t x742 = 67U;
	volatile int16_t x743 = INT16_MAX;
	uint16_t x744 = 837U;

    t143 = ((x741*x742)|(x743/x744));

    if (t143 != 29615) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x745 = 0U;
	int32_t x746 = INT32_MIN;
	int16_t x747 = -5949;

    t144 = ((x745*x746)|(x747/x748));

    if (t144 != 5306196883349LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x750 = INT8_MAX;
	int32_t x751 = INT32_MAX;
	static int8_t x752 = INT8_MIN;

    t145 = ((x749*x750)|(x751/x752));

    if (t145 != -16777089) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x753 = -66210533;
	static int16_t x755 = INT16_MIN;
	volatile uint8_t x756 = UINT8_MAX;
	uint64_t t146 = 4484793340245733LLU;

    t146 = ((x753*x754)|(x755/x756));

    if (t146 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	int16_t x762 = INT16_MAX;
	uint32_t x763 = 3744U;
	static int32_t x764 = INT32_MIN;
	static volatile uint32_t t147 = 12996250U;

    t147 = ((x761*x762)|(x763/x764));

    if (t147 != 8355585U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x774 = 0U;
	volatile int64_t x775 = INT64_MIN;
	int64_t t148 = 3756860768LL;

    t148 = ((x773*x774)|(x775/x776));

    if (t148 != -12514751746071608LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x781 = 0;
	int8_t x782 = -1;
	int16_t x783 = -2;
	int64_t x784 = INT64_MIN;

    t149 = ((x781*x782)|(x783/x784));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x789 = UINT64_MAX;
	int64_t x790 = -1LL;
	volatile int32_t x791 = INT32_MAX;
	int64_t x792 = -1LL;
	uint64_t t150 = 16880612900671445LLU;

    t150 = ((x789*x790)|(x791/x792));

    if (t150 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x794 = 1915829811010LLU;
	int32_t x795 = -1;
	uint32_t x796 = UINT32_MAX;
	uint64_t t151 = 9020642483725LLU;

    t151 = ((x793*x794)|(x795/x796));

    if (t151 != 1178524199520897215LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x797 = -365796LL;
	volatile int32_t x798 = INT32_MIN;
	int64_t x799 = 14LL;
	uint64_t x800 = UINT64_MAX;
	volatile uint64_t t152 = 31995543571160LLU;

    t152 = ((x797*x798)|(x799/x800));

    if (t152 != 785540928503808LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x802 = INT16_MIN;
	static int8_t x803 = -1;
	int64_t t153 = 971432709985164LL;

    t153 = ((x801*x802)|(x803/x804));

    if (t153 != -1867776LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x805 = INT8_MIN;
	uint32_t x806 = UINT32_MAX;
	uint64_t x807 = 708269LLU;
	int16_t x808 = 2311;
	static volatile uint64_t t154 = 2822LLU;

    t154 = ((x805*x806)|(x807/x808));

    if (t154 != 434LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x809 = INT16_MIN;
	volatile int32_t x810 = 6;
	uint64_t x811 = 528197333LLU;
	volatile uint16_t x812 = UINT16_MAX;
	volatile uint64_t t155 = 64599473166LLU;

    t155 = ((x809*x810)|(x811/x812));

    if (t155 != 18446744073709363067LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x815 = 12;
	int8_t x816 = -17;
	volatile uint64_t t156 = 380292500368075LLU;

    t156 = ((x813*x814)|(x815/x816));

    if (t156 != 128LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x817 = INT8_MAX;
	volatile int32_t x818 = -1;
	static int64_t x819 = 7LL;
	int16_t x820 = 1;
	int64_t t157 = -2697410148839LL;

    t157 = ((x817*x818)|(x819/x820));

    if (t157 != -121LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x821 = 6663U;
	int16_t x823 = INT16_MAX;
	uint16_t x824 = 1791U;
	volatile int32_t t158 = -55;

    t158 = ((x821*x822)|(x823/x824));

    if (t158 != -6661) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x825 = -128;
	static int16_t x827 = INT16_MIN;
	int32_t t159 = -14516284;

    t159 = ((x825*x826)|(x827/x828));

    if (t159 != -32639) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x829 = 0U;
	static int32_t x831 = INT32_MIN;
	volatile int64_t t160 = -455918LL;

    t160 = ((x829*x830)|(x831/x832));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x835 = 3410313U;
	int16_t x836 = INT16_MIN;

    t161 = ((x833*x834)|(x835/x836));

    if (t161 != 462U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x841 = INT16_MIN;
	static volatile uint16_t x842 = 3161U;
	uint16_t x843 = 234U;
	static int32_t x844 = INT32_MIN;
	volatile int32_t t162 = -73898450;

    t162 = ((x841*x842)|(x843/x844));

    if (t162 != -103579648) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x845 = UINT8_MAX;
	static int16_t x846 = -1;
	volatile uint8_t x847 = 5U;
	volatile int32_t x848 = 4285;
	int32_t t163 = 58230305;

    t163 = ((x845*x846)|(x847/x848));

    if (t163 != -255) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x850 = 28;
	int32_t x851 = -1;
	static uint64_t x852 = 71383613769328979LLU;

    t164 = ((x849*x850)|(x851/x852));

    if (t164 != 478LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x853 = 1U;
	volatile int32_t x854 = -1;
	static uint64_t x855 = 66231311LLU;
	static int16_t x856 = INT16_MIN;
	static uint64_t t165 = UINT64_MAX;

    t165 = ((x853*x854)|(x855/x856));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x857 = INT16_MIN;
	int8_t x858 = 1;
	volatile uint8_t x859 = 54U;
	int64_t x860 = 11018081021LL;
	static int64_t t166 = -3LL;

    t166 = ((x857*x858)|(x859/x860));

    if (t166 != -32768LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x862 = 1U;
	volatile uint64_t x863 = 6161525135897852524LLU;
	int64_t x864 = INT64_MAX;
	volatile uint64_t t167 = 3523876401LLU;

    t167 = ((x861*x862)|(x863/x864));

    if (t167 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x865 = INT32_MAX;
	int8_t x866 = 1;
	uint32_t x867 = UINT32_MAX;
	uint8_t x868 = UINT8_MAX;

    t168 = ((x865*x866)|(x867/x868));

    if (t168 != 2147483647U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x869 = 59;
	int64_t x870 = -11LL;
	int32_t x871 = INT32_MIN;
	int32_t x872 = INT32_MAX;
	int64_t t169 = 67LL;

    t169 = ((x869*x870)|(x871/x872));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x873 = 27099U;
	volatile int32_t x874 = INT32_MIN;
	int16_t x876 = INT16_MIN;
	uint64_t t170 = 4283917210530LLU;

    t170 = ((x873*x874)|(x875/x876));

    if (t170 != 2147483649LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x877 = 15U;
	static int16_t x878 = INT16_MAX;
	volatile int8_t x879 = -1;

    t171 = ((x877*x878)|(x879/x880));

    if (t171 != 1537228672809271285LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x886 = -1;
	static int32_t x888 = INT32_MAX;
	int32_t t172 = 1556;

    t172 = ((x885*x886)|(x887/x888));

    if (t172 != 32768) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x890 = INT8_MIN;
	volatile int32_t t173 = 15173;

    t173 = ((x889*x890)|(x891/x892));

    if (t173 != -8388479) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x897 = 12;
	volatile int64_t x900 = -8LL;
	int64_t t174 = 92140690LL;

    t174 = ((x897*x898)|(x899/x900));

    if (t174 != -1544376LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x907 = 2U;
	static int8_t x908 = INT8_MIN;

    t175 = ((x905*x906)|(x907/x908));

    if (t175 != 13988146636979606934LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x909 = UINT64_MAX;
	uint64_t x911 = UINT64_MAX;
	static volatile int64_t x912 = -1LL;
	uint64_t t176 = 9LLU;

    t176 = ((x909*x910)|(x911/x912));

    if (t176 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x913 = -1;
	uint16_t x914 = 23417U;
	volatile int8_t x916 = 2;
	static uint32_t t177 = UINT32_MAX;

    t177 = ((x913*x914)|(x915/x916));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x917 = INT64_MIN;
	int16_t x920 = INT16_MAX;
	volatile uint64_t t178 = 10374652LLU;

    t178 = ((x917*x918)|(x919/x920));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x921 = INT16_MAX;
	uint32_t x922 = 11859U;
	volatile int16_t x923 = 42;

    t179 = ((x921*x922)|(x923/x924));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x925 = 72355715073687878LLU;
	volatile int64_t x926 = INT64_MIN;
	static volatile uint64_t t180 = 2723592LLU;

    t180 = ((x925*x926)|(x927/x928));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x934 = 0U;
	int32_t x935 = -1;

    t181 = ((x933*x934)|(x935/x936));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x937 = -23217084LL;
	uint16_t x938 = UINT16_MAX;
	static int16_t x939 = -224;
	volatile int64_t x940 = INT64_MIN;
	volatile int64_t t182 = 64297739368211LL;

    t182 = ((x937*x938)|(x939/x940));

    if (t182 != -1521531599940LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x942 = UINT32_MAX;
	uint16_t x943 = UINT16_MAX;
	int32_t x944 = -1;

    t183 = ((x941*x942)|(x943/x944));

    if (t183 != 4294966401U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x945 = INT16_MIN;
	volatile int32_t x946 = -34775;
	int8_t x947 = 25;
	int16_t x948 = INT16_MIN;
	volatile int32_t t184 = -193230;

    t184 = ((x945*x946)|(x947/x948));

    if (t184 != 1139507200) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x949 = UINT8_MAX;
	volatile int16_t x950 = INT16_MIN;
	int32_t x951 = INT32_MAX;
	int64_t x952 = -1LL;
	volatile int64_t t185 = -2166581089839331LL;

    t185 = ((x949*x950)|(x951/x952));

    if (t185 != -8355839LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x953 = -1;
	int8_t x954 = INT8_MIN;
	static uint32_t x955 = 1043534185U;
	uint32_t t186 = 4U;

    t186 = ((x953*x954)|(x955/x956));

    if (t186 != 65221014U) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x957 = 122U;
	static int16_t x958 = -1;
	int8_t x959 = -1;

    t187 = ((x957*x958)|(x959/x960));

    if (t187 != 4294967174U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x961 = INT8_MIN;
	uint64_t x962 = UINT64_MAX;
	uint64_t x963 = 218569578865003LLU;
	uint64_t t188 = 263641796LLU;

    t188 = ((x961*x962)|(x963/x964));

    if (t188 != 128LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x965 = 74U;
	volatile int16_t x966 = -1;
	static volatile int8_t x967 = -1;
	static uint16_t x968 = 28468U;
	volatile int32_t t189 = -501991557;

    t189 = ((x965*x966)|(x967/x968));

    if (t189 != -74) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x969 = 3584807LL;
	volatile int32_t x970 = INT32_MAX;
	volatile int32_t x971 = INT32_MIN;
	int16_t x972 = -3;
	volatile int64_t t190 = 8026LL;

    t190 = ((x969*x970)|(x971/x972));

    if (t190 != 7698314412420859LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x978 = -1LL;
	volatile uint8_t x979 = 20U;
	volatile uint32_t x980 = 21077U;
	static int64_t t191 = -397722234638LL;

    t191 = ((x977*x978)|(x979/x980));

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x981 = 63;
	static uint64_t x982 = 33363600805LLU;
	static uint32_t x983 = UINT32_MAX;
	uint16_t x984 = 204U;

    t192 = ((x981*x982)|(x983/x984));

    if (t192 != 2101906850779LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x985 = -8;
	int8_t x986 = 1;
	int8_t x987 = INT8_MIN;
	uint8_t x988 = 33U;
	int32_t t193 = -60369512;

    t193 = ((x985*x986)|(x987/x988));

    if (t193 != -3) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x989 = 2;
	uint32_t x991 = 3340704U;
	uint8_t x992 = 52U;
	uint32_t t194 = 12814U;

    t194 = ((x989*x990)|(x991/x992));

    if (t194 != 4294967284U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x993 = 7231596364560LL;
	int16_t x995 = 63;
	int16_t x996 = INT16_MIN;
	int64_t t195 = 52LL;

    t195 = ((x993*x994)|(x995/x996));

    if (t195 != 781012407372480LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x999 = 33678;
	int32_t x1000 = -212048;
	volatile int64_t t196 = -78817915LL;

    t196 = ((x997*x998)|(x999/x1000));

    if (t196 != 127051590099009536LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint64_t x1005 = 49319976LLU;
	volatile int32_t x1006 = INT32_MIN;
	uint64_t x1007 = 3563LLU;
	volatile int16_t x1008 = -1;

    t197 = ((x1005*x1006)|(x1007/x1008));

    if (t197 != 18340830231729799168LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1018 = -63;
	static uint16_t x1019 = 0U;
	int32_t t198 = -1083796;

    t198 = ((x1017*x1018)|(x1019/x1020));

    if (t198 != -315) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1021 = 0U;
	uint32_t x1022 = 202371750U;
	int8_t x1024 = INT8_MIN;
	volatile int64_t t199 = 701LL;

    t199 = ((x1021*x1022)|(x1023/x1024));

    if (t199 != 276676LL) { NG(); } else { ; }
	
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

