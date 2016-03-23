
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

int64_t x10 = INT64_MAX;
int64_t x23 = INT64_MAX;
int64_t x25 = -1LL;
int64_t x29 = INT64_MIN;
uint8_t x32 = UINT8_MAX;
volatile int32_t x38 = INT32_MIN;
int8_t x39 = INT8_MIN;
int64_t x52 = INT64_MAX;
static volatile int32_t t11 = 2004703;
int16_t x60 = INT16_MAX;
int64_t t13 = INT64_MIN;
int16_t x71 = INT16_MAX;
static int8_t x73 = 0;
static volatile int8_t x83 = INT8_MIN;
volatile int32_t t18 = -217612;
uint64_t x87 = 4314143021939724419LLU;
int32_t x88 = -921428863;
volatile uint32_t x97 = UINT32_MAX;
uint32_t x101 = UINT32_MAX;
static volatile int64_t x103 = INT64_MIN;
volatile int8_t x104 = INT8_MAX;
static volatile int16_t x106 = 3;
int8_t x107 = 44;
static int64_t x108 = INT64_MIN;
int32_t x116 = -1;
int64_t x122 = -16LL;
uint16_t x126 = UINT16_MAX;
uint8_t x135 = 50U;
volatile int32_t x147 = INT32_MIN;
int32_t x153 = INT32_MIN;
uint16_t x155 = 2043U;
uint8_t x156 = UINT8_MAX;
volatile int32_t t36 = -12003230;
static uint16_t x159 = 3U;
int8_t x164 = INT8_MAX;
uint32_t x165 = 26449576U;
uint32_t t39 = 9002U;
static uint32_t x182 = 1605251U;
int32_t t43 = -322049;
static int16_t x187 = -1;
uint8_t x189 = UINT8_MAX;
static volatile uint64_t x193 = 3498872LLU;
volatile uint8_t x195 = 122U;
static volatile int32_t t47 = -38;
int16_t x205 = -138;
int64_t x206 = INT64_MIN;
static int32_t t49 = -49174940;
volatile uint16_t x212 = 139U;
static volatile int64_t t51 = -58406LL;
int64_t x217 = -316LL;
int64_t x218 = INT64_MAX;
int32_t x219 = -1;
int8_t x224 = 14;
uint32_t x227 = 130U;
int32_t x232 = -2150386;
static int64_t x235 = -1LL;
int8_t x239 = INT8_MAX;
static int64_t x240 = INT64_MIN;
int32_t x246 = -149;
static int64_t x253 = INT64_MIN;
int32_t x258 = INT32_MAX;
int16_t x260 = INT16_MIN;
volatile uint32_t x266 = UINT32_MAX;
volatile int32_t t65 = 21477;
static uint8_t x283 = 1U;
int16_t x284 = -26;
volatile int32_t t68 = -257122;
int64_t x286 = -1LL;
int8_t x290 = -1;
volatile int32_t t70 = -8629;
static int32_t x298 = INT32_MIN;
int8_t x306 = 37;
volatile int16_t x339 = -1;
volatile int64_t t81 = INT64_MIN;
uint64_t x342 = 15851LLU;
int32_t x362 = -1;
static volatile int32_t t87 = 51463;
static int32_t x365 = INT32_MIN;
int16_t x370 = INT16_MAX;
volatile int16_t x375 = INT16_MIN;
uint8_t x379 = 3U;
int32_t t94 = INT32_MIN;
volatile int32_t t96 = 34;
volatile int8_t x405 = 1;
int64_t x406 = INT64_MAX;
uint16_t x410 = 1073U;
int32_t t99 = INT32_MIN;
volatile uint64_t x413 = 306913330786LLU;
volatile uint64_t t100 = 501LLU;
uint16_t x423 = 13U;
int32_t t104 = 606984963;
int32_t t106 = 23;
volatile int64_t x443 = 1LL;
static int64_t x445 = -7544LL;
int8_t x455 = INT8_MIN;
int64_t x460 = INT64_MAX;
volatile int32_t t111 = -23;
int8_t x465 = INT8_MIN;
int8_t x475 = 6;
int32_t t115 = 501351633;
static volatile int32_t x482 = -1;
int8_t x484 = INT8_MAX;
int32_t t117 = -2;
volatile int64_t x489 = INT64_MIN;
static int64_t x490 = INT64_MAX;
volatile uint8_t x497 = 1U;
int8_t x500 = -40;
uint8_t x511 = UINT8_MAX;
int8_t x519 = -1;
static int32_t x520 = INT32_MIN;
int8_t x521 = -1;
static uint16_t x526 = UINT16_MAX;
int32_t t129 = -431585086;
int64_t x536 = INT64_MIN;
uint16_t x537 = UINT16_MAX;
static int64_t x544 = -1260944716175481735LL;
int16_t x553 = 0;
int16_t x557 = INT16_MAX;
uint32_t t137 = 5783U;
int64_t x571 = INT64_MAX;
int32_t t139 = 1070973106;
volatile uint64_t t140 = UINT64_MAX;
int8_t x577 = INT8_MAX;
uint64_t x580 = 21152546453555098LLU;
int64_t t142 = 57181356706965LL;
uint8_t x585 = 0U;
int32_t t143 = 1453;
uint8_t x593 = 1U;
uint32_t x597 = 6U;
static int8_t x598 = -1;
uint8_t x599 = 15U;
int8_t x601 = -1;
int16_t x609 = INT16_MIN;
static uint64_t x615 = 5706LLU;
volatile int64_t t151 = -11064337209867LL;
uint32_t x624 = 5741U;
static volatile int32_t t153 = 84;
static int8_t x644 = INT8_MIN;
volatile uint8_t x648 = 116U;
int8_t x651 = -1;
int64_t x656 = 11325770200797896LL;
uint8_t x659 = UINT8_MAX;
static int32_t x663 = INT32_MIN;
uint64_t x668 = 124LLU;
int64_t x670 = INT64_MIN;
uint16_t x672 = UINT16_MAX;
uint64_t x675 = UINT64_MAX;
int32_t t165 = 1974;
static int64_t x679 = INT64_MIN;
int64_t x683 = 20686282979LL;
volatile int64_t t168 = INT64_MIN;
int16_t x691 = INT16_MIN;
int8_t x694 = 42;
static int64_t t170 = INT64_MAX;
int64_t x698 = 559972905LL;
int8_t x705 = INT8_MIN;
volatile uint16_t x706 = 27U;
volatile int32_t t174 = 1319;
static uint8_t x719 = 62U;
int16_t x737 = INT16_MIN;
int32_t x745 = -1;
int16_t x747 = INT16_MIN;
volatile uint32_t x748 = 3437U;
volatile int32_t t183 = -14796954;
static volatile int32_t x753 = -1;
uint32_t x756 = 49602U;
volatile uint8_t x764 = 105U;
static uint64_t t186 = 16905164460365LLU;
int32_t x770 = INT32_MAX;
volatile uint16_t x771 = 138U;
int64_t t190 = -3402429672LL;
int32_t x786 = 24109;
uint32_t t192 = 17U;
volatile int64_t x789 = -441098LL;
int64_t t193 = -31101178LL;
volatile uint64_t x794 = 352503LLU;
static volatile int32_t t194 = 1634375;
uint16_t x807 = UINT16_MAX;
uint32_t x808 = 515268U;
volatile int16_t x811 = 0;
volatile int8_t x814 = INT8_MIN;
uint8_t x815 = UINT8_MAX;
static volatile int16_t x816 = INT16_MIN;


void f0(void) {
    	int8_t x5 = INT8_MAX;
	int8_t x6 = INT8_MIN;
	static int16_t x7 = INT16_MAX;
	int64_t x8 = INT64_MIN;
	volatile int32_t t0 = 1903477;

    t0 = (x5+(x6>(x7^x8)));

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x9 = UINT16_MAX;
	int8_t x11 = INT8_MAX;
	int16_t x12 = 7;
	static volatile int32_t t1 = -2456;

    t1 = (x9+(x10>(x11^x12)));

    if (t1 != 65536) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -1;
	static int32_t x14 = -53;
	int32_t x15 = 160723;
	static int64_t x16 = 2LL;
	volatile int32_t t2 = -4;

    t2 = (x13+(x14>(x15^x16)));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = INT32_MIN;
	uint16_t x18 = 486U;
	volatile int64_t x19 = INT64_MIN;
	static uint8_t x20 = 14U;
	int32_t t3 = -405035939;

    t3 = (x17+(x18>(x19^x20)));

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x21 = UINT64_MAX;
	int8_t x22 = 15;
	int8_t x24 = -6;
	uint64_t t4 = 3310590638372815696LLU;

    t4 = (x21+(x22>(x23^x24)));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x26 = INT8_MIN;
	uint64_t x27 = 225LLU;
	int8_t x28 = INT8_MIN;
	volatile int64_t t5 = -512990LL;

    t5 = (x25+(x26>(x27^x28)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x30 = 217LLU;
	uint8_t x31 = 12U;
	int64_t t6 = INT64_MIN;

    t6 = (x29+(x30>(x31^x32)));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = 44;
	static int16_t x34 = -5;
	int64_t x35 = INT64_MAX;
	int16_t x36 = -1;
	volatile int32_t t7 = 0;

    t7 = (x33+(x34>(x35^x36)));

    if (t7 != 45) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = 0;
	int32_t x40 = INT32_MIN;
	volatile int32_t t8 = 11239;

    t8 = (x37+(x38>(x39^x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x41 = INT16_MIN;
	volatile int16_t x42 = -11920;
	static uint16_t x43 = UINT16_MAX;
	int16_t x44 = 10687;
	int32_t t9 = -774496872;

    t9 = (x41+(x42>(x43^x44)));

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	static int8_t x47 = INT8_MIN;
	static int8_t x48 = INT8_MIN;
	static int64_t t10 = INT64_MIN;

    t10 = (x45+(x46>(x47^x48)));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x49 = -1;
	int16_t x50 = INT16_MIN;
	uint8_t x51 = 5U;

    t11 = (x49+(x50>(x51^x52)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = 1230892170750916243LL;
	uint32_t x58 = 1733U;
	volatile uint16_t x59 = UINT16_MAX;
	static volatile int64_t t12 = 29890217875393224LL;

    t12 = (x57+(x58>(x59^x60)));

    if (t12 != 1230892170750916243LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = INT64_MIN;
	int8_t x62 = 0;
	static uint16_t x63 = 3U;
	volatile uint64_t x64 = UINT64_MAX;

    t13 = (x61+(x62>(x63^x64)));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x65 = 1871819U;
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;
	volatile uint32_t t14 = 1181U;

    t14 = (x65+(x66>(x67^x68)));

    if (t14 != 1871819U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = -1;
	int16_t x70 = -25;
	int32_t x72 = INT32_MAX;
	volatile int32_t t15 = 8433919;

    t15 = (x69+(x70>(x71^x72)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x74 = INT64_MIN;
	uint16_t x75 = UINT16_MAX;
	int8_t x76 = -1;
	volatile int32_t t16 = -116581;

    t16 = (x73+(x74>(x75^x76)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x77 = 17;
	static int16_t x78 = -7;
	static uint64_t x79 = UINT64_MAX;
	static uint32_t x80 = UINT32_MAX;
	int32_t t17 = 254682446;

    t17 = (x77+(x78>(x79^x80)));

    if (t17 != 18) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = 45352945;
	int16_t x82 = INT16_MIN;
	uint64_t x84 = 325880210LLU;

    t18 = (x81+(x82>(x83^x84)));

    if (t18 != 45352946) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x85 = UINT64_MAX;
	uint64_t x86 = UINT64_MAX;
	uint64_t t19 = 2105542028LLU;

    t19 = (x85+(x86>(x87^x88)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = 790U;
	int32_t x90 = -50;
	volatile uint32_t x91 = UINT32_MAX;
	int8_t x92 = INT8_MIN;
	static int32_t t20 = -266025468;

    t20 = (x89+(x90>(x91^x92)));

    if (t20 != 791) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MIN;
	uint64_t x94 = 427132341152072116LLU;
	volatile int32_t x95 = 222422148;
	int64_t x96 = -1LL;
	int64_t t21 = INT64_MIN;

    t21 = (x93+(x94>(x95^x96)));

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x98 = 3079LLU;
	int64_t x99 = INT64_MIN;
	volatile int8_t x100 = -1;
	volatile uint32_t t22 = UINT32_MAX;

    t22 = (x97+(x98>(x99^x100)));

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x102 = -1LL;
	uint32_t t23 = 31994254U;

    t23 = (x101+(x102>(x103^x104)));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = INT64_MIN;
	int64_t t24 = -253LL;

    t24 = (x105+(x106>(x107^x108)));

    if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x109 = 13891U;
	static int16_t x110 = 6;
	uint32_t x111 = 990730U;
	uint64_t x112 = 124622270254LLU;
	int32_t t25 = -13859021;

    t25 = (x109+(x110>(x111^x112)));

    if (t25 != 13891) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MAX;
	int64_t x115 = -1LL;
	volatile int32_t t26 = -85929303;

    t26 = (x113+(x114>(x115^x116)));

    if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = -1;
	uint8_t x118 = UINT8_MAX;
	uint16_t x119 = UINT16_MAX;
	static int64_t x120 = 5633803630518LL;
	static int32_t t27 = 662659038;

    t27 = (x117+(x118>(x119^x120)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x121 = -1;
	int32_t x123 = 3;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int32_t t28 = 14725466;

    t28 = (x121+(x122>(x123^x124)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = INT32_MIN;
	uint16_t x127 = UINT16_MAX;
	int16_t x128 = -1;
	int32_t t29 = 16426;

    t29 = (x125+(x126>(x127^x128)));

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = -1780LL;
	static uint32_t x130 = 0U;
	uint8_t x131 = 48U;
	int32_t x132 = INT32_MAX;
	int64_t t30 = 2176004596611140455LL;

    t30 = (x129+(x130>(x131^x132)));

    if (t30 != -1780LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x133 = UINT8_MAX;
	volatile int16_t x134 = INT16_MAX;
	static uint8_t x136 = UINT8_MAX;
	int32_t t31 = -76;

    t31 = (x133+(x134>(x135^x136)));

    if (t31 != 256) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = -4191976;
	uint8_t x138 = 1U;
	uint64_t x139 = UINT64_MAX;
	static int64_t x140 = -1LL;
	int32_t t32 = -651;

    t32 = (x137+(x138>(x139^x140)));

    if (t32 != -4191975) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x141 = UINT64_MAX;
	int8_t x142 = 8;
	int8_t x143 = -1;
	int64_t x144 = INT64_MIN;
	volatile uint64_t t33 = UINT64_MAX;

    t33 = (x141+(x142>(x143^x144)));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x145 = -1161;
	volatile int64_t x146 = INT64_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t34 = -1253931;

    t34 = (x145+(x146>(x147^x148)));

    if (t34 != -1161) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = 1;
	int32_t x150 = INT32_MIN;
	uint32_t x151 = UINT32_MAX;
	uint8_t x152 = 25U;
	int32_t t35 = -14628239;

    t35 = (x149+(x150>(x151^x152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x154 = INT64_MAX;

    t36 = (x153+(x154>(x155^x156)));

    if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = 32;
	volatile int64_t x158 = -1098775279368LL;
	volatile int8_t x160 = -1;
	volatile int32_t t37 = 359933;

    t37 = (x157+(x158>(x159^x160)));

    if (t37 != 32) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = 730LLU;
	volatile uint8_t x162 = 55U;
	uint32_t x163 = 3852U;
	uint64_t t38 = 31692826718158188LLU;

    t38 = (x161+(x162>(x163^x164)));

    if (t38 != 730LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MAX;
	volatile int16_t x168 = -1;

    t39 = (x165+(x166>(x167^x168)));

    if (t39 != 26449577U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = -1;
	int16_t x170 = 196;
	int16_t x171 = INT16_MIN;
	static int32_t x172 = 1846049;
	int32_t t40 = 78590100;

    t40 = (x169+(x170>(x171^x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = INT32_MAX;
	uint16_t x174 = 2015U;
	int32_t x175 = -23;
	int16_t x176 = INT16_MIN;
	volatile int32_t t41 = INT32_MAX;

    t41 = (x173+(x174>(x175^x176)));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 4848042795158LLU;
	int16_t x178 = INT16_MAX;
	static int64_t x179 = INT64_MIN;
	static int32_t x180 = INT32_MIN;
	uint64_t t42 = 6111451280561LLU;

    t42 = (x177+(x178>(x179^x180)));

    if (t42 != 4848042795158LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x181 = 7488;
	int32_t x183 = INT32_MAX;
	int16_t x184 = INT16_MIN;

    t43 = (x181+(x182>(x183^x184)));

    if (t43 != 7488) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x185 = 72266851333LL;
	int32_t x186 = -1;
	static volatile uint8_t x188 = UINT8_MAX;
	static volatile int64_t t44 = 1181LL;

    t44 = (x185+(x186>(x187^x188)));

    if (t44 != 72266851334LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x190 = 1U;
	uint64_t x191 = 15811296LLU;
	static volatile int64_t x192 = INT64_MAX;
	int32_t t45 = -10014;

    t45 = (x189+(x190>(x191^x192)));

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x194 = INT32_MAX;
	uint32_t x196 = UINT32_MAX;
	static uint64_t t46 = 161622LLU;

    t46 = (x193+(x194>(x195^x196)));

    if (t46 != 3498872LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = -13;
	int16_t x198 = -6979;
	int8_t x199 = INT8_MIN;
	static int64_t x200 = INT64_MIN;

    t47 = (x197+(x198>(x199^x200)));

    if (t47 != -13) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = INT32_MIN;
	volatile int32_t x202 = INT32_MIN;
	volatile int64_t x203 = -34724037206867LL;
	static int64_t x204 = 5015822765LL;
	int32_t t48 = -109;

    t48 = (x201+(x202>(x203^x204)));

    if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MIN;

    t49 = (x205+(x206>(x207^x208)));

    if (t49 != -138) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = INT32_MIN;
	int64_t x210 = -1LL;
	int8_t x211 = INT8_MIN;
	int32_t t50 = 6;

    t50 = (x209+(x210>(x211^x212)));

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = -98LL;
	static uint8_t x214 = 59U;
	uint8_t x215 = 3U;
	uint16_t x216 = 0U;

    t51 = (x213+(x214>(x215^x216)));

    if (t51 != -97LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x220 = -1;
	int64_t t52 = -3862710021229137934LL;

    t52 = (x217+(x218>(x219^x220)));

    if (t52 != -315LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = INT8_MIN;
	uint16_t x222 = UINT16_MAX;
	int8_t x223 = INT8_MIN;
	volatile int32_t t53 = -201313;

    t53 = (x221+(x222>(x223^x224)));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x225 = 89331293528LLU;
	int32_t x226 = 4122568;
	static int64_t x228 = -929624972987LL;
	volatile uint64_t t54 = 147532LLU;

    t54 = (x225+(x226>(x227^x228)));

    if (t54 != 89331293529LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x229 = 5704U;
	int64_t x230 = 38724218LL;
	volatile int32_t x231 = INT32_MAX;
	int32_t t55 = 768646131;

    t55 = (x229+(x230>(x231^x232)));

    if (t55 != 5705) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = 1930;
	int16_t x234 = -1;
	int32_t x236 = -1;
	static int32_t t56 = 418005;

    t56 = (x233+(x234>(x235^x236)));

    if (t56 != 1930) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x237 = -1;
	int16_t x238 = 2025;
	int32_t t57 = 47611;

    t57 = (x237+(x238>(x239^x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = 14;
	static uint8_t x242 = 20U;
	int32_t x243 = INT32_MAX;
	int8_t x244 = 1;
	static int32_t t58 = -1;

    t58 = (x241+(x242>(x243^x244)));

    if (t58 != 14) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = -1;
	static volatile int32_t x247 = INT32_MAX;
	uint32_t x248 = 987U;
	int32_t t59 = 1;

    t59 = (x245+(x246>(x247^x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x249 = INT64_MIN;
	int32_t x250 = -1;
	int8_t x251 = 5;
	int64_t x252 = INT64_MIN;
	int64_t t60 = -3LL;

    t60 = (x249+(x250>(x251^x252)));

    if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x254 = 15;
	volatile uint16_t x255 = 9646U;
	static uint16_t x256 = 1U;
	static int64_t t61 = INT64_MIN;

    t61 = (x253+(x254>(x255^x256)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = -1;
	static int64_t x259 = -1LL;
	int32_t t62 = 46963;

    t62 = (x257+(x258>(x259^x260)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = INT8_MIN;
	int64_t x262 = -1LL;
	static int64_t x263 = INT64_MIN;
	static int16_t x264 = -6756;
	int32_t t63 = 0;

    t63 = (x261+(x262>(x263^x264)));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = -692;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = UINT32_MAX;
	static int32_t t64 = -12053;

    t64 = (x265+(x266>(x267^x268)));

    if (t64 != -691) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = INT32_MIN;
	static volatile uint8_t x270 = 1U;
	static int32_t x271 = -12379;
	int16_t x272 = 58;

    t65 = (x269+(x270>(x271^x272)));

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x273 = INT64_MAX;
	uint32_t x274 = 534U;
	static int64_t x275 = -63618527771LL;
	static int64_t x276 = -1327336844534954LL;
	volatile int64_t t66 = INT64_MAX;

    t66 = (x273+(x274>(x275^x276)));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint8_t x277 = 16U;
	uint32_t x278 = UINT32_MAX;
	static volatile int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MAX;
	int32_t t67 = 3222;

    t67 = (x277+(x278>(x279^x280)));

    if (t67 != 17) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x281 = INT16_MIN;
	static int32_t x282 = 20;

    t68 = (x281+(x282>(x283^x284)));

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x285 = 250210279865808598LLU;
	int8_t x287 = 7;
	int32_t x288 = -1;
	uint64_t t69 = 523954517601LLU;

    t69 = (x285+(x286>(x287^x288)));

    if (t69 != 250210279865808599LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = INT16_MAX;
	static int64_t x291 = 15524602051046LL;
	int64_t x292 = INT64_MIN;

    t70 = (x289+(x290>(x291^x292)));

    if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x297 = -1;
	uint8_t x299 = 3U;
	static uint32_t x300 = 355717U;
	volatile int32_t t71 = 144680896;

    t71 = (x297+(x298>(x299^x300)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x301 = -65204321;
	static int16_t x302 = 57;
	int16_t x303 = INT16_MIN;
	volatile uint16_t x304 = 24441U;
	int32_t t72 = 928;

    t72 = (x301+(x302>(x303^x304)));

    if (t72 != -65204320) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x305 = 112179U;
	static uint8_t x307 = 3U;
	int32_t x308 = INT32_MIN;
	static uint32_t t73 = 1703774U;

    t73 = (x305+(x306>(x307^x308)));

    if (t73 != 112180U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x309 = -765;
	volatile int16_t x310 = INT16_MIN;
	uint64_t x311 = 55LLU;
	int64_t x312 = INT64_MIN;
	static volatile int32_t t74 = -5587370;

    t74 = (x309+(x310>(x311^x312)));

    if (t74 != -764) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x313 = 15128U;
	int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MIN;
	int32_t t75 = -1775;

    t75 = (x313+(x314>(x315^x316)));

    if (t75 != 15128) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -5447;
	static int64_t x318 = -1LL;
	int32_t x319 = INT32_MAX;
	uint16_t x320 = 720U;
	volatile int32_t t76 = -9;

    t76 = (x317+(x318>(x319^x320)));

    if (t76 != -5447) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = UINT8_MAX;
	int32_t x322 = -1;
	int64_t x323 = -1LL;
	int8_t x324 = INT8_MIN;
	volatile int32_t t77 = -7093476;

    t77 = (x321+(x322>(x323^x324)));

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x325 = 7U;
	int8_t x326 = -1;
	int32_t x327 = INT32_MIN;
	volatile uint32_t x328 = 13U;
	volatile int32_t t78 = 209558834;

    t78 = (x325+(x326>(x327^x328)));

    if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x329 = INT8_MIN;
	volatile uint8_t x330 = UINT8_MAX;
	uint32_t x331 = 1565U;
	volatile int16_t x332 = INT16_MIN;
	int32_t t79 = -1006770416;

    t79 = (x329+(x330>(x331^x332)));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x333 = 15717U;
	int32_t x334 = INT32_MIN;
	static uint32_t x335 = 595650464U;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t80 = 11003;

    t80 = (x333+(x334>(x335^x336)));

    if (t80 != 15717) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x337 = INT64_MIN;
	int64_t x338 = -421805532000LL;
	static int16_t x340 = INT16_MIN;

    t81 = (x337+(x338>(x339^x340)));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	static int8_t x344 = INT8_MIN;
	int32_t t82 = INT32_MIN;

    t82 = (x341+(x342>(x343^x344)));

    if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = INT8_MAX;
	uint8_t x346 = UINT8_MAX;
	int32_t x347 = INT32_MIN;
	static int16_t x348 = INT16_MAX;
	int32_t t83 = 70;

    t83 = (x345+(x346>(x347^x348)));

    if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x349 = 8518482U;
	static int16_t x350 = INT16_MIN;
	static int64_t x351 = INT64_MIN;
	int16_t x352 = -8457;
	uint32_t t84 = 14020087U;

    t84 = (x349+(x350>(x351^x352)));

    if (t84 != 8518482U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x353 = UINT8_MAX;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = 11285213656280LLU;
	int8_t x356 = 0;
	int32_t t85 = -15641;

    t85 = (x353+(x354>(x355^x356)));

    if (t85 != 256) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x357 = -1;
	volatile uint16_t x358 = 4U;
	int8_t x359 = -50;
	uint32_t x360 = 187768529U;
	int32_t t86 = -487370;

    t86 = (x357+(x358>(x359^x360)));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x361 = INT32_MIN;
	static int8_t x363 = -7;
	uint16_t x364 = 2U;

    t87 = (x361+(x362>(x363^x364)));

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x366 = INT64_MAX;
	static volatile uint8_t x367 = 42U;
	static int32_t x368 = INT32_MIN;
	int32_t t88 = 10352210;

    t88 = (x365+(x366>(x367^x368)));

    if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = -1LL;
	int8_t x371 = -1;
	uint8_t x372 = UINT8_MAX;
	volatile int64_t t89 = -106550077315LL;

    t89 = (x369+(x370>(x371^x372)));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x373 = INT16_MIN;
	static uint16_t x374 = 2891U;
	volatile int8_t x376 = INT8_MIN;
	static volatile int32_t t90 = -5733900;

    t90 = (x373+(x374>(x375^x376)));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x377 = 10U;
	int64_t x378 = INT64_MIN;
	uint32_t x380 = 989669033U;
	uint32_t t91 = 77U;

    t91 = (x377+(x378>(x379^x380)));

    if (t91 != 10U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x381 = 4164266050052LLU;
	int32_t x382 = -393304;
	int32_t x383 = -26080807;
	volatile int16_t x384 = -338;
	static volatile uint64_t t92 = 970674932423322LLU;

    t92 = (x381+(x382>(x383^x384)));

    if (t92 != 4164266050052LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = -29867651005987LL;
	volatile int16_t x386 = -1290;
	int64_t x387 = -941LL;
	static int16_t x388 = INT16_MAX;
	int64_t t93 = 5356376931152440LL;

    t93 = (x385+(x386>(x387^x388)));

    if (t93 != -29867651005986LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = INT32_MIN;
	volatile int16_t x390 = 1220;
	int16_t x391 = 1487;
	volatile int16_t x392 = INT16_MAX;

    t94 = (x389+(x390>(x391^x392)));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x393 = 325;
	int16_t x394 = 7376;
	uint16_t x395 = 3285U;
	uint32_t x396 = 3U;
	int32_t t95 = -44903;

    t95 = (x393+(x394>(x395^x396)));

    if (t95 != 326) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x397 = -245357;
	int32_t x398 = -1;
	uint64_t x399 = 12199594537178LLU;
	uint64_t x400 = 13648LLU;

    t96 = (x397+(x398>(x399^x400)));

    if (t96 != -245356) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x401 = INT32_MIN;
	uint16_t x402 = 6U;
	int8_t x403 = INT8_MIN;
	int64_t x404 = -7041LL;
	static volatile int32_t t97 = INT32_MIN;

    t97 = (x401+(x402>(x403^x404)));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x407 = INT64_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t98 = -18844;

    t98 = (x405+(x406>(x407^x408)));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x409 = INT32_MIN;
	int64_t x411 = INT64_MAX;
	uint64_t x412 = 900167992LLU;

    t99 = (x409+(x410>(x411^x412)));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x414 = -13;
	uint8_t x415 = 30U;
	static int32_t x416 = 211461454;

    t100 = (x413+(x414>(x415^x416)));

    if (t100 != 306913330786LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x417 = 589U;
	uint8_t x418 = 25U;
	volatile uint32_t x419 = 1023U;
	uint16_t x420 = 2954U;
	volatile int32_t t101 = -472243737;

    t101 = (x417+(x418>(x419^x420)));

    if (t101 != 589) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x421 = -1LL;
	volatile int8_t x422 = INT8_MIN;
	volatile int16_t x424 = INT16_MIN;
	static volatile int64_t t102 = 42932609014LL;

    t102 = (x421+(x422>(x423^x424)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = 3244;
	uint8_t x426 = 65U;
	int8_t x427 = INT8_MAX;
	int8_t x428 = -1;
	int32_t t103 = -42603;

    t103 = (x425+(x426>(x427^x428)));

    if (t103 != 3245) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x429 = UINT16_MAX;
	int64_t x430 = INT64_MAX;
	int16_t x431 = -7102;
	static uint8_t x432 = 78U;

    t104 = (x429+(x430>(x431^x432)));

    if (t104 != 65536) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x433 = INT8_MIN;
	int16_t x434 = INT16_MAX;
	uint32_t x435 = 98401634U;
	int64_t x436 = INT64_MIN;
	volatile int32_t t105 = -1;

    t105 = (x433+(x434>(x435^x436)));

    if (t105 != -127) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x437 = INT16_MIN;
	volatile uint64_t x438 = 70LLU;
	static volatile int8_t x439 = INT8_MAX;
	static volatile int64_t x440 = -1LL;

    t106 = (x437+(x438>(x439^x440)));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x441 = -1056923406;
	int64_t x442 = INT64_MAX;
	int16_t x444 = INT16_MIN;
	volatile int32_t t107 = 4399027;

    t107 = (x441+(x442>(x443^x444)));

    if (t107 != -1056923405) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x446 = 4U;
	int16_t x447 = -33;
	int32_t x448 = INT32_MAX;
	int64_t t108 = 127088863280LL;

    t108 = (x445+(x446>(x447^x448)));

    if (t108 != -7543LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x449 = 1U;
	uint32_t x450 = 84109U;
	static volatile int64_t x451 = INT64_MAX;
	int8_t x452 = INT8_MAX;
	int32_t t109 = -534295;

    t109 = (x449+(x450>(x451^x452)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x453 = -5;
	volatile int32_t x454 = -6;
	static int64_t x456 = INT64_MIN;
	int32_t t110 = 41438;

    t110 = (x453+(x454>(x455^x456)));

    if (t110 != -5) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = 284;
	int32_t x458 = -784;
	int32_t x459 = -140687;

    t111 = (x457+(x458>(x459^x460)));

    if (t111 != 285) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x461 = 4187879LL;
	int16_t x462 = 9812;
	int16_t x463 = 3;
	int32_t x464 = INT32_MIN;
	static volatile int64_t t112 = -1LL;

    t112 = (x461+(x462>(x463^x464)));

    if (t112 != 4187880LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MIN;
	int16_t x468 = 149;
	volatile int32_t t113 = 4025608;

    t113 = (x465+(x466>(x467^x468)));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint64_t x469 = UINT64_MAX;
	int32_t x470 = INT32_MIN;
	static int8_t x471 = INT8_MIN;
	int8_t x472 = INT8_MAX;
	static volatile uint64_t t114 = UINT64_MAX;

    t114 = (x469+(x470>(x471^x472)));

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x473 = INT16_MIN;
	volatile int16_t x474 = INT16_MAX;
	int32_t x476 = INT32_MIN;

    t115 = (x473+(x474>(x475^x476)));

    if (t115 != -32767) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x477 = 1U;
	uint32_t x478 = UINT32_MAX;
	int64_t x479 = 1719281320563236LL;
	int64_t x480 = 32017LL;
	int32_t t116 = 0;

    t116 = (x477+(x478>(x479^x480)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x481 = INT8_MIN;
	static uint32_t x483 = 4U;

    t117 = (x481+(x482>(x483^x484)));

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = -2;
	static uint32_t x486 = UINT32_MAX;
	uint32_t x487 = 427U;
	int8_t x488 = INT8_MIN;
	volatile int32_t t118 = 510251;

    t118 = (x485+(x486>(x487^x488)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x491 = INT64_MIN;
	uint32_t x492 = 135U;
	volatile int64_t t119 = 199136072037917LL;

    t119 = (x489+(x490>(x491^x492)));

    if (t119 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x493 = -279516802961551510LL;
	uint32_t x494 = 53638510U;
	volatile int16_t x495 = -3;
	int64_t x496 = 16965LL;
	volatile int64_t t120 = 1LL;

    t120 = (x493+(x494>(x495^x496)));

    if (t120 != -279516802961551509LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x498 = INT16_MAX;
	int64_t x499 = INT64_MIN;
	int32_t t121 = 1489065;

    t121 = (x497+(x498>(x499^x500)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x501 = 0U;
	int64_t x502 = -147LL;
	volatile int16_t x503 = INT16_MIN;
	uint32_t x504 = 205U;
	volatile int32_t t122 = 844290150;

    t122 = (x501+(x502>(x503^x504)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x505 = -31;
	int16_t x506 = INT16_MAX;
	int16_t x507 = INT16_MIN;
	static int8_t x508 = 8;
	int32_t t123 = 166114079;

    t123 = (x505+(x506>(x507^x508)));

    if (t123 != -30) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x509 = -1249541;
	uint32_t x510 = UINT32_MAX;
	volatile int16_t x512 = -475;
	int32_t t124 = 277;

    t124 = (x509+(x510>(x511^x512)));

    if (t124 != -1249540) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x513 = INT16_MAX;
	static int32_t x514 = -1;
	uint64_t x515 = UINT64_MAX;
	volatile int8_t x516 = -1;
	volatile int32_t t125 = -2070742;

    t125 = (x513+(x514>(x515^x516)));

    if (t125 != 32768) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x517 = INT64_MIN;
	int16_t x518 = 8188;
	volatile int64_t t126 = INT64_MIN;

    t126 = (x517+(x518>(x519^x520)));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x522 = INT32_MAX;
	volatile int32_t x523 = -1;
	int16_t x524 = INT16_MAX;
	int32_t t127 = -358845;

    t127 = (x521+(x522>(x523^x524)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x525 = 5189;
	int8_t x527 = -2;
	static volatile int32_t x528 = INT32_MIN;
	int32_t t128 = 487;

    t128 = (x525+(x526>(x527^x528)));

    if (t128 != 5189) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x529 = -2;
	uint16_t x530 = 22U;
	int32_t x531 = INT32_MAX;
	uint8_t x532 = 0U;

    t129 = (x529+(x530>(x531^x532)));

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = 7;
	uint16_t x534 = 0U;
	static uint8_t x535 = UINT8_MAX;
	volatile int32_t t130 = 131435127;

    t130 = (x533+(x534>(x535^x536)));

    if (t130 != 8) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x538 = 63968207480689599LL;
	uint32_t x539 = UINT32_MAX;
	volatile int32_t x540 = -19;
	static volatile int32_t t131 = -8;

    t131 = (x537+(x538>(x539^x540)));

    if (t131 != 65536) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = INT64_MAX;
	int64_t x542 = 24984931414LL;
	static int8_t x543 = INT8_MIN;
	volatile int64_t t132 = INT64_MAX;

    t132 = (x541+(x542>(x543^x544)));

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x545 = INT8_MAX;
	uint16_t x546 = 20U;
	int32_t x547 = INT32_MAX;
	uint8_t x548 = 28U;
	volatile int32_t t133 = -34656521;

    t133 = (x545+(x546>(x547^x548)));

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x549 = 0;
	int16_t x550 = -1;
	int64_t x551 = INT64_MAX;
	int16_t x552 = INT16_MIN;
	volatile int32_t t134 = -69269012;

    t134 = (x549+(x550>(x551^x552)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x554 = -15115263;
	int16_t x555 = -1;
	volatile int64_t x556 = INT64_MAX;
	volatile int32_t t135 = -115;

    t135 = (x553+(x554>(x555^x556)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x558 = INT64_MIN;
	int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MAX;
	static volatile int32_t t136 = 1900609;

    t136 = (x557+(x558>(x559^x560)));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x561 = UINT32_MAX;
	int16_t x562 = -224;
	uint8_t x563 = 50U;
	static volatile int32_t x564 = INT32_MIN;

    t137 = (x561+(x562>(x563^x564)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x565 = 1630LLU;
	int64_t x566 = -1LL;
	volatile int16_t x567 = INT16_MIN;
	static int8_t x568 = 0;
	uint64_t t138 = 490827012823646LLU;

    t138 = (x565+(x566>(x567^x568)));

    if (t138 != 1631LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = INT8_MIN;
	static uint64_t x570 = 545724823498119LLU;
	int32_t x572 = -87367;

    t139 = (x569+(x570>(x571^x572)));

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x573 = UINT64_MAX;
	volatile int16_t x574 = INT16_MIN;
	uint8_t x575 = 0U;
	uint8_t x576 = 18U;

    t140 = (x573+(x574>(x575^x576)));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x578 = UINT64_MAX;
	volatile int8_t x579 = INT8_MAX;
	int32_t t141 = 32369;

    t141 = (x577+(x578>(x579^x580)));

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x581 = -1LL;
	int16_t x582 = -1;
	int32_t x583 = INT32_MIN;
	uint16_t x584 = UINT16_MAX;

    t142 = (x581+(x582>(x583^x584)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x586 = 1;
	volatile int8_t x587 = -2;
	volatile uint32_t x588 = 100U;

    t143 = (x585+(x586>(x587^x588)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x589 = 1;
	volatile uint32_t x590 = 22629104U;
	uint64_t x591 = 1511614904LLU;
	int32_t x592 = -219;
	volatile int32_t t144 = 108637104;

    t144 = (x589+(x590>(x591^x592)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint64_t x594 = 2099583386449774LLU;
	static int64_t x595 = 27645893LL;
	uint64_t x596 = 388863265948317112LLU;
	int32_t t145 = -923;

    t145 = (x593+(x594>(x595^x596)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x600 = INT16_MAX;
	volatile uint32_t t146 = 113165U;

    t146 = (x597+(x598>(x599^x600)));

    if (t146 != 6U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x602 = -1LL;
	uint8_t x603 = UINT8_MAX;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t147 = 3;

    t147 = (x601+(x602>(x603^x604)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x605 = 3039121U;
	static int16_t x606 = 0;
	uint8_t x607 = UINT8_MAX;
	volatile int32_t x608 = 92;
	uint32_t t148 = 882942U;

    t148 = (x605+(x606>(x607^x608)));

    if (t148 != 3039121U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x610 = -1;
	static volatile uint8_t x611 = UINT8_MAX;
	volatile int8_t x612 = -1;
	int32_t t149 = -9121;

    t149 = (x609+(x610>(x611^x612)));

    if (t149 != -32767) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x613 = 120557726LL;
	static volatile int32_t x614 = INT32_MIN;
	int8_t x616 = INT8_MAX;
	static int64_t t150 = 123024334086248652LL;

    t150 = (x613+(x614>(x615^x616)));

    if (t150 != 120557727LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x617 = -169771387759671058LL;
	int8_t x618 = INT8_MIN;
	int32_t x619 = INT32_MAX;
	uint16_t x620 = 1694U;

    t151 = (x617+(x618>(x619^x620)));

    if (t151 != -169771387759671058LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x621 = 619323739LLU;
	uint16_t x622 = 3U;
	uint8_t x623 = 127U;
	volatile uint64_t t152 = 1LLU;

    t152 = (x621+(x622>(x623^x624)));

    if (t152 != 619323739LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x625 = 62;
	static int64_t x626 = 4144LL;
	uint16_t x627 = 55U;
	int8_t x628 = -18;

    t153 = (x625+(x626>(x627^x628)));

    if (t153 != 63) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x629 = 3378337U;
	uint8_t x630 = UINT8_MAX;
	uint8_t x631 = UINT8_MAX;
	static int8_t x632 = -7;
	volatile uint32_t t154 = 121U;

    t154 = (x629+(x630>(x631^x632)));

    if (t154 != 3378338U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x633 = -16;
	volatile uint64_t x634 = 9121LLU;
	int16_t x635 = INT16_MIN;
	static uint32_t x636 = 10062U;
	static volatile int32_t t155 = 8107;

    t155 = (x633+(x634>(x635^x636)));

    if (t155 != -16) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x637 = INT64_MIN;
	volatile int16_t x638 = INT16_MIN;
	int64_t x639 = INT64_MAX;
	int8_t x640 = INT8_MIN;
	static int64_t t156 = -278678655LL;

    t156 = (x637+(x638>(x639^x640)));

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x641 = INT16_MAX;
	int64_t x642 = INT64_MIN;
	int16_t x643 = -1;
	int32_t t157 = 0;

    t157 = (x641+(x642>(x643^x644)));

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x645 = -119838981;
	static int64_t x646 = -142878452724826006LL;
	int64_t x647 = 16LL;
	static volatile int32_t t158 = 1;

    t158 = (x645+(x646>(x647^x648)));

    if (t158 != -119838981) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = INT32_MAX;
	int16_t x650 = 13;
	static int8_t x652 = INT8_MIN;
	static volatile int32_t t159 = INT32_MAX;

    t159 = (x649+(x650>(x651^x652)));

    if (t159 != INT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x653 = 0U;
	int32_t x654 = -119;
	volatile uint32_t x655 = UINT32_MAX;
	static int32_t t160 = 126560;

    t160 = (x653+(x654>(x655^x656)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x657 = INT8_MAX;
	static int16_t x658 = INT16_MIN;
	int8_t x660 = -1;
	int32_t t161 = 53302;

    t161 = (x657+(x658>(x659^x660)));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x661 = INT8_MAX;
	volatile int16_t x662 = INT16_MIN;
	int32_t x664 = -1;
	int32_t t162 = 297517;

    t162 = (x661+(x662>(x663^x664)));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x665 = INT64_MIN;
	uint16_t x666 = 32203U;
	static int32_t x667 = -1;
	volatile int64_t t163 = INT64_MIN;

    t163 = (x665+(x666>(x667^x668)));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x669 = -50;
	uint32_t x671 = 1U;
	volatile int32_t t164 = -943875165;

    t164 = (x669+(x670>(x671^x672)));

    if (t164 != -50) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x673 = -1;
	int8_t x674 = -26;
	int8_t x676 = INT8_MIN;

    t165 = (x673+(x674>(x675^x676)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x677 = -1;
	int8_t x678 = INT8_MIN;
	int64_t x680 = -8238054161LL;
	static volatile int32_t t166 = 0;

    t166 = (x677+(x678>(x679^x680)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x681 = INT32_MIN;
	volatile int32_t x682 = INT32_MIN;
	int16_t x684 = -1;
	int32_t t167 = -50;

    t167 = (x681+(x682>(x683^x684)));

    if (t167 != -2147483647) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x685 = INT64_MIN;
	static int64_t x686 = 2967LL;
	volatile int64_t x687 = INT64_MIN;
	int64_t x688 = -1LL;

    t168 = (x685+(x686>(x687^x688)));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x689 = 466291810U;
	uint64_t x690 = 8283960LLU;
	static uint32_t x692 = UINT32_MAX;
	static volatile uint32_t t169 = 381231052U;

    t169 = (x689+(x690>(x691^x692)));

    if (t169 != 466291811U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x693 = INT64_MAX;
	volatile int64_t x695 = 121966339839619LL;
	uint16_t x696 = UINT16_MAX;

    t170 = (x693+(x694>(x695^x696)));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x697 = INT16_MIN;
	uint8_t x699 = 0U;
	int8_t x700 = INT8_MIN;
	int32_t t171 = -132430;

    t171 = (x697+(x698>(x699^x700)));

    if (t171 != -32767) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x701 = INT8_MIN;
	volatile int16_t x702 = INT16_MIN;
	static int8_t x703 = 0;
	uint16_t x704 = UINT16_MAX;
	int32_t t172 = -135;

    t172 = (x701+(x702>(x703^x704)));

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x707 = 1;
	static int32_t x708 = INT32_MAX;
	int32_t t173 = 0;

    t173 = (x705+(x706>(x707^x708)));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x709 = INT8_MAX;
	int32_t x710 = INT32_MIN;
	int8_t x711 = 0;
	static uint32_t x712 = 500645523U;

    t174 = (x709+(x710>(x711^x712)));

    if (t174 != 128) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x713 = INT32_MIN;
	static volatile int64_t x714 = INT64_MIN;
	int8_t x715 = 1;
	uint64_t x716 = 1763111866632458LLU;
	volatile int32_t t175 = 16230;

    t175 = (x713+(x714>(x715^x716)));

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = -4;
	int64_t x718 = INT64_MIN;
	uint16_t x720 = 4541U;
	volatile int32_t t176 = 53639832;

    t176 = (x717+(x718>(x719^x720)));

    if (t176 != -4) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x721 = 22;
	int64_t x722 = 124331535LL;
	int32_t x723 = INT32_MAX;
	int64_t x724 = -68172645264631LL;
	int32_t t177 = -450;

    t177 = (x721+(x722>(x723^x724)));

    if (t177 != 23) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x725 = INT64_MAX;
	static uint16_t x726 = UINT16_MAX;
	int8_t x727 = -1;
	volatile uint32_t x728 = 17137U;
	volatile int64_t t178 = INT64_MAX;

    t178 = (x725+(x726>(x727^x728)));

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x729 = 1966693694U;
	static int16_t x730 = -1;
	uint32_t x731 = 241308716U;
	int8_t x732 = 0;
	uint32_t t179 = 31356U;

    t179 = (x729+(x730>(x731^x732)));

    if (t179 != 1966693695U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x738 = -1;
	uint32_t x739 = UINT32_MAX;
	int32_t x740 = INT32_MIN;
	volatile int32_t t180 = -152317829;

    t180 = (x737+(x738>(x739^x740)));

    if (t180 != -32767) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x741 = -1;
	int8_t x742 = INT8_MIN;
	int16_t x743 = 0;
	volatile int64_t x744 = INT64_MIN;
	static int32_t t181 = -986014;

    t181 = (x741+(x742>(x743^x744)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x746 = -560236156863LL;
	int32_t t182 = -17179197;

    t182 = (x745+(x746>(x747^x748)));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x749 = -21;
	static int32_t x750 = 896985;
	static int16_t x751 = INT16_MAX;
	int8_t x752 = INT8_MAX;

    t183 = (x749+(x750>(x751^x752)));

    if (t183 != -20) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x754 = UINT64_MAX;
	volatile int16_t x755 = -1;
	static int32_t t184 = -67262240;

    t184 = (x753+(x754>(x755^x756)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x757 = 551871162589860LL;
	int16_t x758 = -1;
	static volatile int8_t x759 = INT8_MIN;
	int32_t x760 = INT32_MIN;
	int64_t t185 = 15552219LL;

    t185 = (x757+(x758>(x759^x760)));

    if (t185 != 551871162589860LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x761 = 1970LLU;
	uint16_t x762 = 196U;
	volatile int8_t x763 = -17;

    t186 = (x761+(x762>(x763^x764)));

    if (t186 != 1971LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x765 = UINT64_MAX;
	uint16_t x766 = UINT16_MAX;
	uint8_t x767 = 18U;
	static volatile int8_t x768 = 18;
	static volatile uint64_t t187 = 148025549388201LLU;

    t187 = (x765+(x766>(x767^x768)));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x769 = 1080LLU;
	static int16_t x772 = -13;
	uint64_t t188 = 7LLU;

    t188 = (x769+(x770>(x771^x772)));

    if (t188 != 1081LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x773 = INT16_MIN;
	uint16_t x774 = 480U;
	volatile uint16_t x775 = UINT16_MAX;
	uint8_t x776 = 9U;
	static volatile int32_t t189 = 17;

    t189 = (x773+(x774>(x775^x776)));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x777 = -1LL;
	int8_t x778 = -2;
	volatile int64_t x779 = INT64_MIN;
	uint8_t x780 = UINT8_MAX;

    t190 = (x777+(x778>(x779^x780)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x781 = 11823U;
	int32_t x782 = 6;
	static uint8_t x783 = 118U;
	uint8_t x784 = 7U;
	volatile int32_t t191 = -1;

    t191 = (x781+(x782>(x783^x784)));

    if (t191 != 11823) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x785 = UINT32_MAX;
	static int8_t x787 = INT8_MAX;
	static int32_t x788 = INT32_MIN;

    t192 = (x785+(x786>(x787^x788)));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x790 = 232919166;
	static volatile uint32_t x791 = 917446U;
	volatile uint8_t x792 = 29U;

    t193 = (x789+(x790>(x791^x792)));

    if (t193 != -441097LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x793 = -1;
	static int8_t x795 = -43;
	int64_t x796 = -1LL;

    t194 = (x793+(x794>(x795^x796)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x797 = 0;
	volatile int64_t x798 = INT64_MIN;
	static uint8_t x799 = UINT8_MAX;
	int64_t x800 = INT64_MAX;
	static volatile int32_t t195 = -465;

    t195 = (x797+(x798>(x799^x800)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x801 = INT16_MAX;
	static int32_t x802 = 308;
	uint32_t x803 = 41548974U;
	uint32_t x804 = 2664U;
	static volatile int32_t t196 = 52883;

    t196 = (x801+(x802>(x803^x804)));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x805 = INT8_MIN;
	int8_t x806 = -8;
	int32_t t197 = 56064480;

    t197 = (x805+(x806>(x807^x808)));

    if (t197 != -127) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x809 = 8U;
	volatile int64_t x810 = -58929067LL;
	uint8_t x812 = 0U;
	int32_t t198 = -1246709;

    t198 = (x809+(x810>(x811^x812)));

    if (t198 != 8) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x813 = UINT64_MAX;
	volatile uint64_t t199 = 32226LLU;

    t199 = (x813+(x814>(x815^x816)));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

