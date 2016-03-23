
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

volatile int16_t x2 = INT16_MAX;
volatile int32_t t1 = 1;
volatile int32_t x21 = -4987;
volatile uint8_t x25 = UINT8_MAX;
uint8_t x26 = 3U;
volatile uint8_t x27 = 6U;
static int64_t x33 = -1217LL;
static int32_t x35 = -1;
static int32_t x41 = INT32_MIN;
int16_t x46 = -511;
static uint64_t x48 = 11334LLU;
static int64_t x54 = INT64_MIN;
static int16_t x55 = INT16_MIN;
volatile int32_t x58 = -108814;
static volatile int32_t t12 = 0;
int16_t x65 = INT16_MIN;
static int8_t x78 = INT8_MIN;
uint64_t x79 = UINT64_MAX;
static int16_t x84 = 0;
volatile int32_t t17 = 0;
int32_t x89 = -557;
int8_t x94 = INT8_MIN;
int32_t x97 = 1165;
volatile int8_t x107 = 23;
uint16_t x109 = UINT16_MAX;
uint16_t x111 = UINT16_MAX;
int8_t x112 = -1;
int64_t x115 = 13620053275834LL;
uint64_t x119 = 519570232LLU;
int8_t x124 = INT8_MIN;
uint32_t x127 = UINT32_MAX;
uint64_t x141 = 2LLU;
int64_t x149 = INT64_MIN;
static int64_t x157 = -101036LL;
int16_t x161 = INT16_MAX;
int8_t x162 = -1;
uint32_t x169 = UINT32_MAX;
uint64_t x170 = 61369LLU;
int8_t x174 = INT8_MIN;
int16_t x184 = -1;
int16_t x187 = -1;
int8_t x197 = INT8_MIN;
int32_t x207 = INT32_MAX;
static int16_t x208 = INT16_MIN;
static int8_t x211 = INT8_MAX;
uint8_t x217 = 1U;
volatile int8_t x218 = INT8_MIN;
volatile int32_t t45 = 314442;
uint16_t x226 = 0U;
static volatile uint16_t x227 = 3U;
volatile int32_t t47 = 6683;
uint32_t x235 = 3400512U;
uint64_t x236 = UINT64_MAX;
int16_t x241 = 1605;
static int64_t t49 = 41086LL;
uint32_t x249 = 15447U;
uint8_t x270 = 22U;
static uint32_t x271 = UINT32_MAX;
int8_t x279 = INT8_MAX;
int16_t x280 = INT16_MAX;
int32_t t57 = -14372282;
static volatile int32_t t60 = 60;
int64_t x307 = INT64_MIN;
uint64_t x308 = 450657193087352083LLU;
uint8_t x312 = 4U;
volatile int32_t t63 = -3792;
uint64_t x315 = 230426151685405629LLU;
int64_t x318 = -114684LL;
int8_t x339 = -1;
static int32_t t70 = 751985922;
volatile int64_t x345 = INT64_MAX;
int32_t t72 = -33;
volatile int64_t x358 = -2412LL;
int8_t x375 = INT8_MIN;
volatile int32_t t78 = -20;
uint64_t x381 = UINT64_MAX;
int8_t x384 = -1;
int32_t t79 = -3942750;
int16_t x385 = INT16_MIN;
int16_t x391 = INT16_MIN;
int64_t x394 = -415LL;
uint64_t x395 = 5LLU;
volatile int64_t x396 = -1LL;
uint16_t x397 = 1477U;
volatile uint8_t x401 = 12U;
int32_t x413 = INT32_MIN;
int64_t x415 = 12LL;
int16_t x437 = INT16_MIN;
volatile int64_t x443 = 1792LL;
int64_t x445 = INT64_MAX;
uint32_t x452 = UINT32_MAX;
int64_t x453 = INT64_MAX;
static volatile int32_t t95 = 2;
volatile int32_t t98 = 898790;
uint64_t t100 = 13834555767LLU;
int16_t x487 = -1;
static uint32_t x501 = 20U;
volatile uint32_t x506 = 870408U;
volatile int64_t x507 = -1LL;
uint16_t x510 = 16132U;
int16_t x526 = -1;
int16_t x530 = INT16_MIN;
int32_t t110 = 2;
int16_t x541 = 118;
static int8_t x542 = 26;
uint32_t x546 = UINT32_MAX;
uint8_t x553 = 6U;
int8_t x555 = INT8_MIN;
volatile int32_t t117 = -1264;
int8_t x573 = INT8_MIN;
static int32_t t118 = 351266;
volatile int32_t x580 = INT32_MAX;
int64_t x586 = INT64_MIN;
int8_t x587 = INT8_MIN;
static uint64_t t121 = 133733093340LLU;
static uint8_t x591 = 3U;
volatile int16_t x593 = 1899;
int32_t x598 = -166382;
volatile int32_t x599 = 2661;
int32_t t124 = -226249945;
volatile uint32_t x601 = 254753U;
int64_t x603 = INT64_MIN;
int32_t x610 = INT32_MIN;
static int64_t t126 = 1884568591LL;
int32_t x617 = INT32_MIN;
volatile int64_t t128 = 1LL;
static int8_t x627 = -2;
uint32_t x632 = 76718346U;
int16_t x635 = 363;
uint8_t x636 = 47U;
static int32_t t132 = 330218239;
int64_t x637 = INT64_MIN;
int16_t x638 = -1;
static int16_t x644 = INT16_MAX;
int8_t x654 = -1;
uint64_t t137 = 330LLU;
int64_t x667 = -1LL;
static volatile int8_t x670 = -6;
int8_t x671 = 0;
int32_t x672 = INT32_MAX;
int8_t x683 = INT8_MAX;
int16_t x684 = -1;
uint32_t x685 = 1052386431U;
uint64_t t142 = 4928LLU;
static int8_t x691 = -9;
volatile int32_t t144 = -3003;
static uint64_t x708 = 31263726113LLU;
volatile int64_t x711 = 4869LL;
uint16_t x712 = UINT16_MAX;
int32_t t148 = -971831525;
static int8_t x716 = -1;
volatile int32_t t149 = 6221632;
uint8_t x718 = 7U;
volatile int16_t x721 = INT16_MAX;
int8_t x725 = INT8_MIN;
static uint8_t x726 = 29U;
static int64_t x732 = -13370314775644205LL;
int16_t x740 = -11185;
int32_t x742 = INT32_MIN;
int64_t x743 = INT64_MIN;
int64_t t155 = -110883594915LL;
int8_t x751 = 59;
uint8_t x752 = 3U;
int32_t x754 = INT32_MIN;
int8_t x761 = -26;
int32_t t158 = -90750442;
int16_t x768 = INT16_MIN;
static uint64_t x777 = UINT64_MAX;
volatile int64_t x783 = -7894LL;
static volatile int64_t x792 = -482063417211LL;
int32_t x795 = -1;
volatile int64_t t165 = 4189067LL;
volatile int16_t x801 = INT16_MAX;
int16_t x804 = -1199;
int32_t t166 = 60;
uint64_t x821 = UINT64_MAX;
uint8_t x822 = UINT8_MAX;
uint16_t x824 = UINT16_MAX;
uint16_t x838 = 191U;
int16_t x839 = -471;
int8_t x840 = 0;
volatile int8_t x842 = INT8_MIN;
int16_t x844 = INT16_MIN;
volatile int32_t t172 = -4;
volatile int16_t x848 = -1;
int8_t x855 = -1;
uint64_t x856 = 131948382887930LLU;
static uint32_t x860 = UINT32_MAX;
int64_t x862 = -3LL;
static int8_t x863 = INT8_MIN;
volatile int8_t x864 = -1;
int32_t t177 = 1;
int32_t x879 = INT32_MAX;
int32_t x882 = -4113927;
static volatile uint8_t x892 = UINT8_MAX;
volatile int32_t t183 = 337591;
static int8_t x912 = -1;
int64_t x913 = 1436846LL;
static uint64_t x917 = UINT64_MAX;
int32_t x931 = INT32_MIN;
static volatile int32_t t188 = 7577;
static uint32_t x936 = 1377632U;
uint16_t x948 = 46U;
static int64_t x954 = -1LL;
int16_t x957 = INT16_MIN;
static int32_t x961 = INT32_MIN;
uint32_t x962 = 20382U;
volatile int32_t t196 = 21;
int32_t t197 = 131;
uint64_t x986 = 13486242LLU;
int32_t x988 = INT32_MAX;


void f0(void) {
    	static int64_t x1 = -9LL;
	volatile int32_t x3 = -1;
	volatile int16_t x4 = INT16_MIN;
	int32_t t0 = -108240299;

    t0 = ((x1>(x2-x3))-x4);

    if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	static uint8_t x6 = 58U;
	int16_t x7 = INT16_MIN;
	uint8_t x8 = UINT8_MAX;

    t1 = ((x5>(x6-x7))-x8);

    if (t1 != -254) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = 1;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int64_t x12 = 3940358653LL;
	static volatile int64_t t2 = 1LL;

    t2 = ((x9>(x10-x11))-x12);

    if (t2 != -3940358652LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static int32_t x14 = INT32_MAX;
	uint16_t x15 = UINT16_MAX;
	static int8_t x16 = 0;
	static int32_t t3 = -63255;

    t3 = ((x13>(x14-x15))-x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = -1;
	static uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MIN;
	static int32_t t4 = -98481;

    t4 = ((x21>(x22-x23))-x24);

    if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t5 = 105173190928904LLU;

    t5 = ((x25>(x26-x27))-x28);

    if (t5 != 2LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x29 = UINT32_MAX;
	uint8_t x30 = 48U;
	static uint8_t x31 = UINT8_MAX;
	uint32_t x32 = 12706U;
	uint32_t t6 = 25215368U;

    t6 = ((x29>(x30-x31))-x32);

    if (t6 != 4294954591U) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x34 = 1U;
	int64_t x36 = -1111LL;
	volatile int64_t t7 = 0LL;

    t7 = ((x33>(x34-x35))-x36);

    if (t7 != 1111LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x37 = INT16_MIN;
	static uint8_t x38 = 3U;
	uint64_t x39 = 5710LLU;
	int16_t x40 = INT16_MIN;
	volatile int32_t t8 = -7;

    t8 = ((x37>(x38-x39))-x40);

    if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x42 = UINT32_MAX;
	uint32_t x43 = 20037867U;
	int32_t x44 = 175013443;
	int32_t t9 = -142367;

    t9 = ((x41>(x42-x43))-x44);

    if (t9 != -175013443) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = 1022LLU;
	volatile int32_t x47 = 4087369;
	volatile uint64_t t10 = 132676968734515770LLU;

    t10 = ((x45>(x46-x47))-x48);

    if (t10 != 18446744073709540282LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = -1;
	uint8_t x56 = 2U;
	int32_t t11 = -62828493;

    t11 = ((x53>(x54-x55))-x56);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = -1;
	int64_t x59 = INT64_MIN;
	uint16_t x60 = 1U;

    t12 = ((x57>(x58-x59))-x60);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MIN;
	static uint32_t x63 = UINT32_MAX;
	int8_t x64 = -1;
	int32_t t13 = -1;

    t13 = ((x61>(x62-x63))-x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x66 = 547U;
	static uint64_t x67 = UINT64_MAX;
	static int8_t x68 = 1;
	volatile int32_t t14 = -396918;

    t14 = ((x65>(x66-x67))-x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x73 = UINT64_MAX;
	static int8_t x74 = -1;
	volatile int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MAX;
	int64_t t15 = -4LL;

    t15 = ((x73>(x74-x75))-x76);

    if (t15 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x77 = 2060811;
	volatile uint16_t x80 = 30781U;
	volatile int32_t t16 = -119583;

    t16 = ((x77>(x78-x79))-x80);

    if (t16 != -30781) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = INT32_MIN;
	int8_t x82 = -1;
	volatile int16_t x83 = -1;

    t17 = ((x81>(x82-x83))-x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x90 = INT8_MIN;
	uint32_t x91 = 139558U;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t18 = -5416;

    t18 = ((x89>(x90-x91))-x92);

    if (t18 != -65534) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x93 = 1U;
	static int32_t x95 = -3533;
	int16_t x96 = INT16_MAX;
	int32_t t19 = 1;

    t19 = ((x93>(x94-x95))-x96);

    if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x98 = -66713148;
	volatile int64_t x99 = INT64_MIN;
	uint8_t x100 = 0U;
	int32_t t20 = -1;

    t20 = ((x97>(x98-x99))-x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x105 = INT64_MIN;
	volatile int64_t x106 = -62LL;
	uint16_t x108 = 8U;
	volatile int32_t t21 = -2;

    t21 = ((x105>(x106-x107))-x108);

    if (t21 != -8) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x110 = UINT32_MAX;
	int32_t t22 = 55;

    t22 = ((x109>(x110-x111))-x112);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = -1;
	uint16_t x114 = 1712U;
	static uint32_t x116 = UINT32_MAX;
	uint32_t t23 = 828112U;

    t23 = ((x113>(x114-x115))-x116);

    if (t23 != 2U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x117 = UINT32_MAX;
	int64_t x118 = -1LL;
	static uint32_t x120 = 2U;
	uint32_t t24 = 2281U;

    t24 = ((x117>(x118-x119))-x120);

    if (t24 != 4294967294U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x121 = 50584283U;
	int64_t x122 = 6LL;
	int8_t x123 = INT8_MIN;
	static volatile int32_t t25 = 314439;

    t25 = ((x121>(x122-x123))-x124);

    if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x125 = 10;
	int64_t x126 = -3335LL;
	static volatile uint16_t x128 = 655U;
	int32_t t26 = -1;

    t26 = ((x125>(x126-x127))-x128);

    if (t26 != -654) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x129 = 12513U;
	volatile int64_t x130 = 293856524015508965LL;
	uint16_t x131 = UINT16_MAX;
	uint32_t x132 = 229784401U;
	uint32_t t27 = 4234U;

    t27 = ((x129>(x130-x131))-x132);

    if (t27 != 4065182895U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x133 = -1;
	uint8_t x134 = 8U;
	int8_t x135 = 47;
	int8_t x136 = INT8_MAX;
	int32_t t28 = 423197830;

    t28 = ((x133>(x134-x135))-x136);

    if (t28 != -126) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x137 = -160478869954889832LL;
	int16_t x138 = INT16_MIN;
	uint16_t x139 = UINT16_MAX;
	volatile int8_t x140 = INT8_MAX;
	int32_t t29 = 62545;

    t29 = ((x137>(x138-x139))-x140);

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x142 = INT8_MAX;
	uint32_t x143 = 13154657U;
	uint16_t x144 = 8U;
	static volatile int32_t t30 = -4;

    t30 = ((x141>(x142-x143))-x144);

    if (t30 != -8) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = UINT64_MAX;
	int8_t x152 = -1;
	volatile int32_t t31 = -10765542;

    t31 = ((x149>(x150-x151))-x152);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x158 = UINT64_MAX;
	volatile int64_t x159 = INT64_MAX;
	int64_t x160 = -215807266207LL;
	int64_t t32 = 3546LL;

    t32 = ((x157>(x158-x159))-x160);

    if (t32 != 215807266208LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x163 = INT8_MIN;
	int64_t x164 = 1872873852381LL;
	int64_t t33 = -7185768471LL;

    t33 = ((x161>(x162-x163))-x164);

    if (t33 != -1872873852380LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x165 = 7U;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = -1;
	uint16_t x168 = UINT16_MAX;
	int32_t t34 = -211889849;

    t34 = ((x165>(x166-x167))-x168);

    if (t34 != -65535) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x171 = INT8_MIN;
	uint8_t x172 = 3U;
	volatile int32_t t35 = -335;

    t35 = ((x169>(x170-x171))-x172);

    if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x173 = UINT8_MAX;
	uint64_t x175 = UINT64_MAX;
	volatile int8_t x176 = INT8_MIN;
	int32_t t36 = -1;

    t36 = ((x173>(x174-x175))-x176);

    if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x181 = 18U;
	volatile uint64_t x182 = 284780616LLU;
	int8_t x183 = INT8_MIN;
	int32_t t37 = -2039;

    t37 = ((x181>(x182-x183))-x184);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x185 = -1;
	uint8_t x186 = UINT8_MAX;
	uint32_t x188 = UINT32_MAX;
	uint32_t t38 = 706U;

    t38 = ((x185>(x186-x187))-x188);

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x189 = UINT16_MAX;
	uint16_t x190 = UINT16_MAX;
	uint64_t x191 = 730147094056630822LLU;
	int8_t x192 = -1;
	volatile int32_t t39 = 1;

    t39 = ((x189>(x190-x191))-x192);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x198 = -13;
	volatile uint32_t x199 = 10U;
	uint32_t x200 = 44530U;
	volatile uint32_t t40 = 147U;

    t40 = ((x197>(x198-x199))-x200);

    if (t40 != 4294922766U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x205 = 123U;
	int32_t x206 = -1;
	volatile int32_t t41 = 43847;

    t41 = ((x205>(x206-x207))-x208);

    if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x209 = -29420885;
	int32_t x210 = -182792675;
	int64_t x212 = 70295430993LL;
	volatile int64_t t42 = -8664191663085399LL;

    t42 = ((x209>(x210-x211))-x212);

    if (t42 != -70295430992LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x213 = INT8_MIN;
	static volatile int64_t x214 = -1LL;
	volatile uint64_t x215 = 3117306400LLU;
	int64_t x216 = -1LL;
	static int64_t t43 = -20927877LL;

    t43 = ((x213>(x214-x215))-x216);

    if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x219 = -1LL;
	int16_t x220 = -215;
	static volatile int32_t t44 = 66224903;

    t44 = ((x217>(x218-x219))-x220);

    if (t44 != 216) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x221 = -1;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = -1;
	int16_t x224 = -1;

    t45 = ((x221>(x222-x223))-x224);

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x225 = INT32_MIN;
	static volatile uint64_t x228 = 0LLU;
	uint64_t t46 = 157095LLU;

    t46 = ((x225>(x226-x227))-x228);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x229 = INT8_MIN;
	static volatile int8_t x230 = INT8_MIN;
	uint8_t x231 = UINT8_MAX;
	uint16_t x232 = UINT16_MAX;

    t47 = ((x229>(x230-x231))-x232);

    if (t47 != -65534) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x233 = 4817U;
	int16_t x234 = INT16_MIN;
	uint64_t t48 = 4222265LLU;

    t48 = ((x233>(x234-x235))-x236);

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x242 = 81U;
	int8_t x243 = INT8_MAX;
	int64_t x244 = -1LL;

    t49 = ((x241>(x242-x243))-x244);

    if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x250 = -1;
	static int32_t x251 = 60517065;
	static uint64_t x252 = 2022145842LLU;
	uint64_t t50 = 29282736797LLU;

    t50 = ((x249>(x250-x251))-x252);

    if (t50 != 18446744071687405774LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x253 = 519349698;
	uint32_t x254 = 46345617U;
	volatile int8_t x255 = -1;
	static int64_t x256 = INT64_MAX;
	int64_t t51 = 705LL;

    t51 = ((x253>(x254-x255))-x256);

    if (t51 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x257 = 345U;
	int16_t x258 = INT16_MIN;
	uint16_t x259 = 0U;
	static uint32_t x260 = 78739047U;
	uint32_t t52 = 1896657U;

    t52 = ((x257>(x258-x259))-x260);

    if (t52 != 4216228250U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x261 = -7406591;
	int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	static int32_t x264 = INT32_MAX;
	int32_t t53 = 9012131;

    t53 = ((x261>(x262-x263))-x264);

    if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x265 = INT8_MAX;
	uint16_t x266 = 434U;
	uint64_t x267 = 2775156454177612740LLU;
	volatile uint64_t x268 = 139LLU;
	uint64_t t54 = 14615LLU;

    t54 = ((x265>(x266-x267))-x268);

    if (t54 != 18446744073709551477LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x269 = INT8_MIN;
	static int64_t x272 = -34043LL;
	int64_t t55 = 490942348LL;

    t55 = ((x269>(x270-x271))-x272);

    if (t55 != 34044LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x273 = -1;
	static int16_t x274 = INT16_MIN;
	int16_t x275 = 25;
	int8_t x276 = 7;
	static volatile int32_t t56 = -1;

    t56 = ((x273>(x274-x275))-x276);

    if (t56 != -6) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;

    t57 = ((x277>(x278-x279))-x280);

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x285 = -82;
	int8_t x286 = INT8_MAX;
	uint64_t x287 = UINT64_MAX;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t58 = -11534423;

    t58 = ((x285>(x286-x287))-x288);

    if (t58 != 129) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x293 = UINT32_MAX;
	int32_t x294 = INT32_MIN;
	static volatile uint64_t x295 = UINT64_MAX;
	int64_t x296 = 1LL;
	int64_t t59 = 119703431889148LL;

    t59 = ((x293>(x294-x295))-x296);

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x297 = 28047287U;
	static volatile int8_t x298 = -1;
	int32_t x299 = 906;
	int32_t x300 = -5685403;

    t60 = ((x297>(x298-x299))-x300);

    if (t60 != 5685403) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x301 = INT8_MAX;
	int8_t x302 = INT8_MIN;
	volatile int16_t x303 = -1;
	int16_t x304 = -150;
	static int32_t t61 = -15145;

    t61 = ((x301>(x302-x303))-x304);

    if (t61 != 151) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x305 = 6U;
	int8_t x306 = -1;
	volatile uint64_t t62 = 110871085715316LLU;

    t62 = ((x305>(x306-x307))-x308);

    if (t62 != 17996086880622199533LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x309 = 8240969213LLU;
	static int32_t x310 = -1;
	static volatile int32_t x311 = INT32_MIN;

    t63 = ((x309>(x310-x311))-x312);

    if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x313 = 3;
	static int8_t x314 = INT8_MIN;
	uint32_t x316 = 7832U;
	uint32_t t64 = 345U;

    t64 = ((x313>(x314-x315))-x316);

    if (t64 != 4294959464U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x317 = 1U;
	int8_t x319 = 11;
	uint32_t x320 = 1487685U;
	static uint32_t t65 = 988U;

    t65 = ((x317>(x318-x319))-x320);

    if (t65 != 4293479612U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x325 = UINT8_MAX;
	volatile uint64_t x326 = 938421201719LLU;
	volatile int8_t x327 = -1;
	static uint16_t x328 = 9U;
	int32_t t66 = 530;

    t66 = ((x325>(x326-x327))-x328);

    if (t66 != -9) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x329 = INT32_MAX;
	uint8_t x330 = 2U;
	int16_t x331 = -1;
	static int32_t x332 = 316;
	volatile int32_t t67 = -1404660;

    t67 = ((x329>(x330-x331))-x332);

    if (t67 != -315) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x333 = UINT16_MAX;
	static uint32_t x334 = 249590284U;
	int8_t x335 = INT8_MIN;
	static int32_t x336 = INT32_MAX;
	volatile int32_t t68 = -1371;

    t68 = ((x333>(x334-x335))-x336);

    if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x337 = -1;
	static uint16_t x338 = 6U;
	int8_t x340 = 3;
	volatile int32_t t69 = 180;

    t69 = ((x337>(x338-x339))-x340);

    if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MAX;
	uint64_t x343 = 14124LLU;
	volatile int32_t x344 = -1;

    t70 = ((x341>(x342-x343))-x344);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x346 = UINT64_MAX;
	static int8_t x347 = -1;
	int16_t x348 = INT16_MAX;
	int32_t t71 = -205791;

    t71 = ((x345>(x346-x347))-x348);

    if (t71 != -32766) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x349 = -1LL;
	uint16_t x350 = 31U;
	static uint8_t x351 = 2U;
	int32_t x352 = -539;

    t72 = ((x349>(x350-x351))-x352);

    if (t72 != 539) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x353 = 6862U;
	volatile int16_t x354 = INT16_MIN;
	volatile uint64_t x355 = UINT64_MAX;
	int8_t x356 = -1;
	volatile int32_t t73 = 34;

    t73 = ((x353>(x354-x355))-x356);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x357 = 4000LLU;
	int16_t x359 = 2545;
	volatile int8_t x360 = INT8_MIN;
	int32_t t74 = 18;

    t74 = ((x357>(x358-x359))-x360);

    if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x361 = INT32_MIN;
	int8_t x362 = -1;
	int32_t x363 = INT32_MIN;
	int8_t x364 = 0;
	int32_t t75 = -1;

    t75 = ((x361>(x362-x363))-x364);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x365 = UINT64_MAX;
	uint64_t x366 = 377028130395187LLU;
	int16_t x367 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t76 = 500;

    t76 = ((x365>(x366-x367))-x368);

    if (t76 != -254) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x369 = UINT16_MAX;
	volatile uint32_t x370 = UINT32_MAX;
	int16_t x371 = -160;
	int64_t x372 = 3854LL;
	static volatile int64_t t77 = -38315801LL;

    t77 = ((x369>(x370-x371))-x372);

    if (t77 != -3853LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x373 = UINT32_MAX;
	int16_t x374 = -1;
	int32_t x376 = -106434919;

    t78 = ((x373>(x374-x375))-x376);

    if (t78 != 106434920) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x382 = 1;
	volatile int8_t x383 = INT8_MIN;

    t79 = ((x381>(x382-x383))-x384);

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x386 = -1;
	int32_t x387 = -1394212;
	volatile int32_t x388 = -7332;
	static int32_t t80 = -10;

    t80 = ((x385>(x386-x387))-x388);

    if (t80 != 7332) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	uint64_t x392 = 57139864330517LLU;
	volatile uint64_t t81 = 1164LLU;

    t81 = ((x389>(x390-x391))-x392);

    if (t81 != 18446686933845221100LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x393 = -1;
	static int64_t t82 = -1657603731088LL;

    t82 = ((x393>(x394-x395))-x396);

    if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x398 = 170882030U;
	int16_t x399 = INT16_MAX;
	int8_t x400 = INT8_MIN;
	int32_t t83 = 324;

    t83 = ((x397>(x398-x399))-x400);

    if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x402 = -1;
	int8_t x403 = INT8_MIN;
	int16_t x404 = INT16_MIN;
	int32_t t84 = 0;

    t84 = ((x401>(x402-x403))-x404);

    if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x409 = 12U;
	volatile uint8_t x410 = UINT8_MAX;
	int8_t x411 = INT8_MAX;
	uint8_t x412 = UINT8_MAX;
	static volatile int32_t t85 = -7;

    t85 = ((x409>(x410-x411))-x412);

    if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x414 = INT8_MAX;
	uint8_t x416 = 27U;
	int32_t t86 = 17;

    t86 = ((x413>(x414-x415))-x416);

    if (t86 != -27) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x417 = INT16_MIN;
	static int16_t x418 = INT16_MIN;
	int16_t x419 = -74;
	uint32_t x420 = 70U;
	uint32_t t87 = 1460853U;

    t87 = ((x417>(x418-x419))-x420);

    if (t87 != 4294967226U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x421 = 3;
	int32_t x422 = -61977162;
	uint8_t x423 = UINT8_MAX;
	uint64_t x424 = 119374510LLU;
	static uint64_t t88 = 1034182061LLU;

    t88 = ((x421>(x422-x423))-x424);

    if (t88 != 18446744073590177107LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x429 = INT16_MAX;
	uint32_t x430 = 6U;
	volatile int16_t x431 = INT16_MIN;
	volatile uint16_t x432 = 142U;
	volatile int32_t t89 = 433;

    t89 = ((x429>(x430-x431))-x432);

    if (t89 != -142) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x433 = INT32_MIN;
	int16_t x434 = -1;
	static uint32_t x435 = 14U;
	uint32_t x436 = 886647593U;
	static volatile uint32_t t90 = 281087U;

    t90 = ((x433>(x434-x435))-x436);

    if (t90 != 3408319703U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x438 = 7152U;
	static int32_t x439 = -1;
	uint16_t x440 = UINT16_MAX;
	int32_t t91 = 1969;

    t91 = ((x437>(x438-x439))-x440);

    if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x441 = 1120422439U;
	volatile int32_t x442 = INT32_MIN;
	uint32_t x444 = 7U;
	uint32_t t92 = 1582047U;

    t92 = ((x441>(x442-x443))-x444);

    if (t92 != 4294967290U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x446 = INT64_MIN;
	uint64_t x447 = UINT64_MAX;
	static uint32_t x448 = 8977U;
	volatile uint32_t t93 = 2U;

    t93 = ((x445>(x446-x447))-x448);

    if (t93 != 4294958319U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x449 = 37272455007893957LLU;
	volatile int16_t x450 = -1;
	static int8_t x451 = -1;
	static volatile uint32_t t94 = 400U;

    t94 = ((x449>(x450-x451))-x452);

    if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x454 = -1729;
	uint8_t x455 = 29U;
	uint8_t x456 = 1U;

    t95 = ((x453>(x454-x455))-x456);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x457 = -1;
	uint64_t x458 = 112143440584821LLU;
	static int16_t x459 = -1426;
	uint16_t x460 = UINT16_MAX;
	int32_t t96 = -1916849;

    t96 = ((x457>(x458-x459))-x460);

    if (t96 != -65534) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x461 = INT16_MIN;
	uint8_t x462 = UINT8_MAX;
	uint16_t x463 = 52U;
	volatile int8_t x464 = INT8_MIN;
	int32_t t97 = -40302247;

    t97 = ((x461>(x462-x463))-x464);

    if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x473 = UINT8_MAX;
	static uint64_t x474 = 1677612272366LLU;
	int32_t x475 = INT32_MIN;
	int8_t x476 = INT8_MIN;

    t98 = ((x473>(x474-x475))-x476);

    if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x477 = 31U;
	uint32_t x478 = UINT32_MAX;
	static int8_t x479 = INT8_MIN;
	uint64_t x480 = 283015282767152124LLU;
	uint64_t t99 = 6173LLU;

    t99 = ((x477>(x478-x479))-x480);

    if (t99 != 18163728790942399492LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x481 = INT64_MAX;
	int32_t x482 = INT32_MIN;
	int8_t x483 = -62;
	uint64_t x484 = 450244211LLU;

    t100 = ((x481>(x482-x483))-x484);

    if (t100 != 18446744073259307406LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x485 = INT16_MAX;
	volatile int32_t x486 = -1;
	static int8_t x488 = -1;
	static volatile int32_t t101 = -133618925;

    t101 = ((x485>(x486-x487))-x488);

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x489 = INT8_MIN;
	static int32_t x490 = INT32_MIN;
	int64_t x491 = -1LL;
	uint32_t x492 = 1900187U;
	uint32_t t102 = 1442U;

    t102 = ((x489>(x490-x491))-x492);

    if (t102 != 4293067110U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x497 = -22;
	volatile int32_t x498 = 10036;
	static int64_t x499 = 107707670734LL;
	int16_t x500 = INT16_MIN;
	volatile int32_t t103 = 9477139;

    t103 = ((x497>(x498-x499))-x500);

    if (t103 != 32769) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x502 = UINT32_MAX;
	uint64_t x503 = 396005155069211LLU;
	int16_t x504 = -1;
	volatile int32_t t104 = 2991;

    t104 = ((x501>(x502-x503))-x504);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x505 = 13U;
	int8_t x508 = INT8_MIN;
	static volatile int32_t t105 = 3757;

    t105 = ((x505>(x506-x507))-x508);

    if (t105 != 128) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x509 = UINT32_MAX;
	uint32_t x511 = 818255U;
	uint8_t x512 = 0U;
	volatile int32_t t106 = 1167206;

    t106 = ((x509>(x510-x511))-x512);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x517 = -108;
	int16_t x518 = INT16_MIN;
	volatile int64_t x519 = -1LL;
	int16_t x520 = INT16_MAX;
	int32_t t107 = 3;

    t107 = ((x517>(x518-x519))-x520);

    if (t107 != -32766) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x521 = 1U;
	int64_t x522 = 1500026818925651LL;
	volatile uint8_t x523 = 0U;
	int8_t x524 = INT8_MIN;
	int32_t t108 = 65364;

    t108 = ((x521>(x522-x523))-x524);

    if (t108 != 128) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x525 = -1;
	int64_t x527 = INT64_MAX;
	int8_t x528 = INT8_MIN;
	static volatile int32_t t109 = -118993143;

    t109 = ((x525>(x526-x527))-x528);

    if (t109 != 129) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x529 = UINT16_MAX;
	uint16_t x531 = UINT16_MAX;
	uint16_t x532 = 0U;

    t110 = ((x529>(x530-x531))-x532);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x533 = INT8_MIN;
	volatile uint32_t x534 = 1048755350U;
	uint16_t x535 = 3770U;
	static int8_t x536 = -7;
	int32_t t111 = 95;

    t111 = ((x533>(x534-x535))-x536);

    if (t111 != 8) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x537 = -18637LL;
	uint64_t x538 = 2LLU;
	static int32_t x539 = INT32_MAX;
	volatile uint64_t x540 = UINT64_MAX;
	static uint64_t t112 = 23LLU;

    t112 = ((x537>(x538-x539))-x540);

    if (t112 != 2LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x543 = INT32_MAX;
	int32_t x544 = 33949;
	static int32_t t113 = -136716;

    t113 = ((x541>(x542-x543))-x544);

    if (t113 != -33948) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x545 = 1U;
	uint64_t x547 = 8232621862LLU;
	volatile int16_t x548 = 298;
	int32_t t114 = -22862834;

    t114 = ((x545>(x546-x547))-x548);

    if (t114 != -298) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x554 = INT8_MAX;
	int16_t x556 = 1;
	static int32_t t115 = -8381;

    t115 = ((x553>(x554-x555))-x556);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x561 = -4828;
	uint32_t x562 = 19U;
	int8_t x563 = 15;
	uint16_t x564 = 229U;
	static volatile int32_t t116 = -28;

    t116 = ((x561>(x562-x563))-x564);

    if (t116 != -228) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint32_t x565 = 4194U;
	static int8_t x566 = 16;
	int16_t x567 = INT16_MIN;
	int16_t x568 = INT16_MIN;

    t117 = ((x565>(x566-x567))-x568);

    if (t117 != 32768) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x574 = -57;
	uint8_t x575 = 49U;
	uint16_t x576 = UINT16_MAX;

    t118 = ((x573>(x574-x575))-x576);

    if (t118 != -65535) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x577 = 255U;
	uint64_t x578 = 1220327829142688LLU;
	int16_t x579 = INT16_MIN;
	int32_t t119 = 4;

    t119 = ((x577>(x578-x579))-x580);

    if (t119 != -2147483647) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x581 = -106;
	volatile int16_t x582 = 9;
	int8_t x583 = -1;
	volatile int64_t x584 = 1LL;
	volatile int64_t t120 = -1212LL;

    t120 = ((x581>(x582-x583))-x584);

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	uint64_t x588 = 2228016LLU;

    t121 = ((x585>(x586-x587))-x588);

    if (t121 != 18446744073707323601LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x589 = INT16_MIN;
	uint16_t x590 = 1265U;
	int16_t x592 = 5371;
	int32_t t122 = -831616627;

    t122 = ((x589>(x590-x591))-x592);

    if (t122 != -5371) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x594 = INT16_MAX;
	volatile int64_t x595 = INT64_MAX;
	volatile int8_t x596 = INT8_MAX;
	volatile int32_t t123 = -21046037;

    t123 = ((x593>(x594-x595))-x596);

    if (t123 != -126) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x597 = 994324636190510915LLU;
	int32_t x600 = -1;

    t124 = ((x597>(x598-x599))-x600);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x602 = INT64_MIN;
	static volatile uint16_t x604 = 70U;
	volatile int32_t t125 = -891757572;

    t125 = ((x601>(x602-x603))-x604);

    if (t125 != -69) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x609 = INT8_MIN;
	int32_t x611 = INT32_MIN;
	volatile int64_t x612 = -8615301601371LL;

    t126 = ((x609>(x610-x611))-x612);

    if (t126 != 8615301601371LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x613 = UINT8_MAX;
	volatile int16_t x614 = 31;
	static int32_t x615 = -1;
	int8_t x616 = 27;
	volatile int32_t t127 = 234284;

    t127 = ((x613>(x614-x615))-x616);

    if (t127 != -26) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x618 = 229305;
	uint8_t x619 = 124U;
	int64_t x620 = 763LL;

    t128 = ((x617>(x618-x619))-x620);

    if (t128 != -763LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x621 = -18;
	volatile int16_t x622 = INT16_MIN;
	int64_t x623 = -61910319LL;
	int16_t x624 = -1;
	int32_t t129 = -50968;

    t129 = ((x621>(x622-x623))-x624);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x625 = 87024993104558214LL;
	int16_t x626 = INT16_MAX;
	volatile uint16_t x628 = UINT16_MAX;
	int32_t t130 = 11947;

    t130 = ((x625>(x626-x627))-x628);

    if (t130 != -65534) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x629 = INT8_MAX;
	int16_t x630 = INT16_MIN;
	static int64_t x631 = INT64_MIN;
	uint32_t t131 = 1U;

    t131 = ((x629>(x630-x631))-x632);

    if (t131 != 4218248950U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x633 = -1LL;
	volatile int32_t x634 = 79343;

    t132 = ((x633>(x634-x635))-x636);

    if (t132 != -47) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x639 = -1;
	uint16_t x640 = 971U;
	volatile int32_t t133 = -407475;

    t133 = ((x637>(x638-x639))-x640);

    if (t133 != -971) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x641 = -1;
	uint16_t x642 = UINT16_MAX;
	int16_t x643 = INT16_MIN;
	volatile int32_t t134 = -126600459;

    t134 = ((x641>(x642-x643))-x644);

    if (t134 != -32767) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x645 = INT16_MIN;
	volatile int32_t x646 = INT32_MAX;
	volatile int8_t x647 = 14;
	uint8_t x648 = UINT8_MAX;
	static int32_t t135 = -124128;

    t135 = ((x645>(x646-x647))-x648);

    if (t135 != -255) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x653 = 127LLU;
	int32_t x655 = -1;
	uint16_t x656 = 2U;
	int32_t t136 = -3705;

    t136 = ((x653>(x654-x655))-x656);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x658 = -12;
	int64_t x659 = 0LL;
	static uint64_t x660 = 0LLU;

    t137 = ((x657>(x658-x659))-x660);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x665 = INT16_MAX;
	uint16_t x666 = UINT16_MAX;
	uint64_t x668 = 34277014264LLU;
	volatile uint64_t t138 = 24666936699LLU;

    t138 = ((x665>(x666-x667))-x668);

    if (t138 != 18446744039432537352LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x669 = UINT32_MAX;
	volatile int32_t t139 = 37;

    t139 = ((x669>(x670-x671))-x672);

    if (t139 != -2147483646) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x677 = 0;
	static uint64_t x678 = 25757430601786510LLU;
	int8_t x679 = 23;
	int8_t x680 = INT8_MIN;
	volatile int32_t t140 = -36;

    t140 = ((x677>(x678-x679))-x680);

    if (t140 != 128) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x681 = 11U;
	volatile uint8_t x682 = UINT8_MAX;
	static int32_t t141 = 1680052;

    t141 = ((x681>(x682-x683))-x684);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x686 = INT16_MIN;
	volatile int32_t x687 = -1;
	uint64_t x688 = UINT64_MAX;

    t142 = ((x685>(x686-x687))-x688);

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x689 = UINT32_MAX;
	volatile uint64_t x690 = 7531360993919LLU;
	static int64_t x692 = -104247500347254175LL;
	static int64_t t143 = -3074092LL;

    t143 = ((x689>(x690-x691))-x692);

    if (t143 != 104247500347254175LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x693 = -1;
	static int64_t x694 = -1LL;
	static int16_t x695 = INT16_MIN;
	volatile int8_t x696 = INT8_MIN;

    t144 = ((x693>(x694-x695))-x696);

    if (t144 != 128) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x697 = 12801107803350042LLU;
	volatile int16_t x698 = -1;
	uint16_t x699 = UINT16_MAX;
	static uint8_t x700 = UINT8_MAX;
	static volatile int32_t t145 = 213726;

    t145 = ((x697>(x698-x699))-x700);

    if (t145 != -255) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x701 = UINT32_MAX;
	uint16_t x702 = UINT16_MAX;
	int16_t x703 = -7180;
	int16_t x704 = -1;
	int32_t t146 = 135669;

    t146 = ((x701>(x702-x703))-x704);

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x705 = INT32_MIN;
	static uint64_t x706 = 436311LLU;
	uint32_t x707 = UINT32_MAX;
	uint64_t t147 = 12LLU;

    t147 = ((x705>(x706-x707))-x708);

    if (t147 != 18446744042445825504LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x709 = UINT64_MAX;
	int16_t x710 = INT16_MIN;

    t148 = ((x709>(x710-x711))-x712);

    if (t148 != -65534) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x713 = -2;
	int8_t x714 = INT8_MIN;
	static int16_t x715 = INT16_MIN;

    t149 = ((x713>(x714-x715))-x716);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x717 = 22U;
	int8_t x719 = -1;
	int16_t x720 = 12542;
	static volatile int32_t t150 = 5344754;

    t150 = ((x717>(x718-x719))-x720);

    if (t150 != -12541) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x722 = INT16_MAX;
	int32_t x723 = INT32_MAX;
	uint16_t x724 = UINT16_MAX;
	static int32_t t151 = 63651121;

    t151 = ((x721>(x722-x723))-x724);

    if (t151 != -65534) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x727 = INT16_MIN;
	int8_t x728 = -2;
	static int32_t t152 = 24;

    t152 = ((x725>(x726-x727))-x728);

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x729 = UINT16_MAX;
	volatile uint32_t x730 = 390U;
	volatile int32_t x731 = 436188585;
	volatile int64_t t153 = -23633558963749LL;

    t153 = ((x729>(x730-x731))-x732);

    if (t153 != 13370314775644205LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x737 = INT16_MIN;
	int32_t x738 = -1;
	uint8_t x739 = UINT8_MAX;
	volatile int32_t t154 = -63;

    t154 = ((x737>(x738-x739))-x740);

    if (t154 != 11185) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x741 = 93U;
	int64_t x744 = -1LL;

    t155 = ((x741>(x742-x743))-x744);

    if (t155 != 1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x749 = INT32_MIN;
	int64_t x750 = INT64_MAX;
	static int32_t t156 = -22868;

    t156 = ((x749>(x750-x751))-x752);

    if (t156 != -3) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x753 = -2;
	static int8_t x755 = -1;
	int8_t x756 = INT8_MAX;
	volatile int32_t t157 = -13454146;

    t157 = ((x753>(x754-x755))-x756);

    if (t157 != -126) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x762 = INT32_MIN;
	int16_t x763 = -1;
	int32_t x764 = -25433716;

    t158 = ((x761>(x762-x763))-x764);

    if (t158 != 25433717) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x765 = 8049U;
	static volatile int32_t x766 = INT32_MIN;
	int32_t x767 = -1;
	static int32_t t159 = 112;

    t159 = ((x765>(x766-x767))-x768);

    if (t159 != 32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x778 = -1;
	uint8_t x779 = 1U;
	static int16_t x780 = INT16_MIN;
	static int32_t t160 = -1597909;

    t160 = ((x777>(x778-x779))-x780);

    if (t160 != 32769) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x781 = -4518LL;
	static int16_t x782 = -1;
	volatile int16_t x784 = -1;
	volatile int32_t t161 = 1;

    t161 = ((x781>(x782-x783))-x784);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x785 = INT64_MAX;
	uint16_t x786 = UINT16_MAX;
	uint8_t x787 = 37U;
	int8_t x788 = 3;
	static int32_t t162 = -5962;

    t162 = ((x785>(x786-x787))-x788);

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x789 = -1;
	static uint32_t x790 = UINT32_MAX;
	volatile int32_t x791 = 891856;
	static int64_t t163 = -621409LL;

    t163 = ((x789>(x790-x791))-x792);

    if (t163 != 482063417212LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x793 = 141215U;
	int64_t x794 = -1LL;
	static int64_t x796 = -1LL;
	volatile int64_t t164 = 425LL;

    t164 = ((x793>(x794-x795))-x796);

    if (t164 != 2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x797 = -1;
	int32_t x798 = 5;
	int8_t x799 = -1;
	volatile int64_t x800 = -25352113787658024LL;

    t165 = ((x797>(x798-x799))-x800);

    if (t165 != 25352113787658024LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x802 = 1U;
	static volatile uint64_t x803 = 53189LLU;

    t166 = ((x801>(x802-x803))-x804);

    if (t166 != 1199) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x805 = -1;
	uint64_t x806 = 131822320240LLU;
	static uint32_t x807 = UINT32_MAX;
	uint16_t x808 = 21U;
	volatile int32_t t167 = 20163274;

    t167 = ((x805>(x806-x807))-x808);

    if (t167 != -20) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x817 = 645735;
	static int64_t x818 = INT64_MIN;
	static int16_t x819 = INT16_MIN;
	uint16_t x820 = 4826U;
	static int32_t t168 = 151;

    t168 = ((x817>(x818-x819))-x820);

    if (t168 != -4825) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x823 = INT8_MAX;
	volatile int32_t t169 = 195;

    t169 = ((x821>(x822-x823))-x824);

    if (t169 != -65534) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x833 = INT32_MIN;
	uint64_t x834 = 4LLU;
	int16_t x835 = -4;
	int16_t x836 = INT16_MAX;
	int32_t t170 = 10;

    t170 = ((x833>(x834-x835))-x836);

    if (t170 != -32766) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x837 = INT32_MIN;
	volatile int32_t t171 = -34946;

    t171 = ((x837>(x838-x839))-x840);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x841 = INT32_MIN;
	static volatile int16_t x843 = -374;

    t172 = ((x841>(x842-x843))-x844);

    if (t172 != 32768) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x845 = INT8_MIN;
	static uint64_t x846 = 2398LLU;
	int64_t x847 = -25LL;
	volatile int32_t t173 = 64;

    t173 = ((x845>(x846-x847))-x848);

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x853 = UINT8_MAX;
	int32_t x854 = -1038196198;
	uint64_t t174 = 5243836947LLU;

    t174 = ((x853>(x854-x855))-x856);

    if (t174 != 18446612125326663687LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x857 = INT32_MIN;
	uint64_t x858 = 1819626359674LLU;
	int32_t x859 = INT32_MIN;
	static uint32_t t175 = 23189317U;

    t175 = ((x857>(x858-x859))-x860);

    if (t175 != 2U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x861 = 12U;
	static int32_t t176 = -1985;

    t176 = ((x861>(x862-x863))-x864);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x869 = INT64_MIN;
	uint64_t x870 = UINT64_MAX;
	int16_t x871 = INT16_MAX;
	volatile uint8_t x872 = UINT8_MAX;

    t177 = ((x869>(x870-x871))-x872);

    if (t177 != -255) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x877 = INT16_MAX;
	int32_t x878 = -1;
	int32_t x880 = 230388;
	int32_t t178 = -1;

    t178 = ((x877>(x878-x879))-x880);

    if (t178 != -230387) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x881 = UINT8_MAX;
	static volatile int16_t x883 = INT16_MIN;
	volatile uint64_t x884 = UINT64_MAX;
	uint64_t t179 = 30981LLU;

    t179 = ((x881>(x882-x883))-x884);

    if (t179 != 2LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x885 = UINT32_MAX;
	int8_t x886 = -1;
	uint32_t x887 = 10070U;
	volatile uint32_t x888 = 4U;
	static uint32_t t180 = 126469U;

    t180 = ((x885>(x886-x887))-x888);

    if (t180 != 4294967293U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x889 = 360669842739LLU;
	int64_t x890 = -1LL;
	uint64_t x891 = 478039233114LLU;
	volatile int32_t t181 = -54779;

    t181 = ((x889>(x890-x891))-x892);

    if (t181 != -255) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x893 = -1244204282LL;
	volatile uint16_t x894 = 3U;
	uint16_t x895 = 81U;
	int64_t x896 = -288503027550667LL;
	static volatile int64_t t182 = -145783259034160LL;

    t182 = ((x893>(x894-x895))-x896);

    if (t182 != 288503027550667LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x901 = 8070897U;
	int8_t x902 = -1;
	int32_t x903 = -580;
	volatile int8_t x904 = INT8_MIN;

    t183 = ((x901>(x902-x903))-x904);

    if (t183 != 129) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x905 = 2116985736U;
	volatile int8_t x906 = -1;
	int32_t x907 = -297;
	int16_t x908 = 93;
	int32_t t184 = 22554561;

    t184 = ((x905>(x906-x907))-x908);

    if (t184 != -92) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x909 = 8U;
	uint8_t x910 = 90U;
	int16_t x911 = INT16_MIN;
	int32_t t185 = -4;

    t185 = ((x909>(x910-x911))-x912);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x914 = INT16_MAX;
	volatile uint32_t x915 = 23916329U;
	int8_t x916 = -1;
	static int32_t t186 = 61;

    t186 = ((x913>(x914-x915))-x916);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x918 = 270686822813LLU;
	uint32_t x919 = UINT32_MAX;
	int16_t x920 = -4;
	int32_t t187 = -259;

    t187 = ((x917>(x918-x919))-x920);

    if (t187 != 5) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x929 = INT16_MIN;
	uint64_t x930 = 127975757438844820LLU;
	uint16_t x932 = 2U;

    t188 = ((x929>(x930-x931))-x932);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x933 = UINT16_MAX;
	uint16_t x934 = UINT16_MAX;
	int64_t x935 = INT64_MAX;
	volatile uint32_t t189 = 62U;

    t189 = ((x933>(x934-x935))-x936);

    if (t189 != 4293589665U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x941 = 19U;
	int64_t x942 = -1LL;
	int8_t x943 = -1;
	static uint64_t x944 = 10LLU;
	volatile uint64_t t190 = 667276136664LLU;

    t190 = ((x941>(x942-x943))-x944);

    if (t190 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x945 = 1;
	uint8_t x946 = 95U;
	static uint8_t x947 = 1U;
	static volatile int32_t t191 = 128984213;

    t191 = ((x945>(x946-x947))-x948);

    if (t191 != -46) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x949 = -1LL;
	int32_t x950 = 1;
	static int16_t x951 = INT16_MIN;
	int32_t x952 = 2309210;
	static volatile int32_t t192 = 889133217;

    t192 = ((x949>(x950-x951))-x952);

    if (t192 != -2309210) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x953 = 2U;
	static int16_t x955 = 137;
	volatile uint64_t x956 = 241566LLU;
	uint64_t t193 = 11144721LLU;

    t193 = ((x953>(x954-x955))-x956);

    if (t193 != 18446744073709310051LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x958 = INT16_MAX;
	uint16_t x959 = 2U;
	uint64_t x960 = 5949245481026337810LLU;
	static uint64_t t194 = 209LLU;

    t194 = ((x957>(x958-x959))-x960);

    if (t194 != 12497498592683213806LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x963 = INT8_MIN;
	static volatile int16_t x964 = -3;
	volatile int32_t t195 = -1716543;

    t195 = ((x961>(x962-x963))-x964);

    if (t195 != 4) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x973 = -1;
	volatile uint8_t x974 = 16U;
	uint32_t x975 = 27734465U;
	volatile uint8_t x976 = UINT8_MAX;

    t196 = ((x973>(x974-x975))-x976);

    if (t196 != -254) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x981 = 41U;
	int8_t x982 = INT8_MIN;
	uint32_t x983 = 189573U;
	int32_t x984 = -1;

    t197 = ((x981>(x982-x983))-x984);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x985 = 27U;
	int16_t x987 = INT16_MIN;
	int32_t t198 = -23960;

    t198 = ((x985>(x986-x987))-x988);

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x989 = 850898488911661LLU;
	volatile int8_t x990 = -1;
	uint32_t x991 = UINT32_MAX;
	uint32_t x992 = UINT32_MAX;
	volatile uint32_t t199 = 10568854U;

    t199 = ((x989>(x990-x991))-x992);

    if (t199 != 2U) { NG(); } else { ; }
	
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

