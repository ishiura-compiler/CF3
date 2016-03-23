
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

int64_t x5 = -22121LL;
uint32_t x6 = 347252661U;
uint16_t x15 = 4U;
int32_t x16 = 3;
volatile uint64_t x21 = UINT64_MAX;
int8_t x27 = INT8_MIN;
int32_t t4 = -54;
int64_t x34 = INT64_MIN;
int64_t t6 = -1LL;
uint32_t x42 = 4047894U;
int8_t x48 = -1;
volatile uint32_t t8 = 474U;
int32_t t9 = 25021609;
uint64_t t10 = 45129LLU;
static int64_t x60 = INT64_MAX;
static int64_t t11 = 0LL;
int8_t x61 = INT8_MIN;
volatile uint64_t t13 = 125179LLU;
static int8_t x85 = -1;
volatile uint32_t x87 = 130287U;
static uint32_t t17 = 2846320U;
volatile int64_t x91 = 11388606871743LL;
volatile uint64_t t19 = 16470735LLU;
int32_t x106 = INT32_MAX;
volatile uint8_t x107 = 0U;
volatile uint32_t x109 = 105U;
int16_t x112 = -1;
int8_t x121 = INT8_MIN;
uint64_t x123 = 14348761264LLU;
volatile uint64_t t23 = 512LLU;
static int16_t x126 = INT16_MAX;
static int16_t x128 = INT16_MIN;
static int16_t x130 = -1;
static uint32_t x132 = UINT32_MAX;
static int16_t x135 = 2;
int64_t x140 = 65521519LL;
static uint64_t x141 = 1342387026436030LLU;
int16_t x145 = -1;
static int32_t t30 = -820922;
volatile uint32_t t31 = 1386008U;
int32_t x172 = -1;
int32_t x181 = -7;
int64_t x182 = INT64_MIN;
int64_t x183 = -1088952973615492002LL;
static volatile uint16_t x186 = 23U;
static volatile int64_t t36 = -5LL;
static uint32_t x205 = UINT32_MAX;
volatile uint64_t t41 = 0LLU;
int8_t x219 = INT8_MAX;
int8_t x224 = 1;
uint16_t x228 = 313U;
static int8_t x230 = -1;
static uint64_t t48 = 898488419276LLU;
int8_t x248 = -1;
int8_t x249 = INT8_MAX;
int64_t x252 = 71343630LL;
uint8_t x254 = 7U;
int8_t x258 = INT8_MIN;
int16_t x259 = 2322;
uint64_t t53 = 14758792LLU;
int8_t x273 = INT8_MIN;
volatile uint64_t x277 = UINT64_MAX;
volatile int8_t x282 = -16;
uint16_t x283 = 64U;
int16_t x284 = 1;
int32_t t58 = -115144994;
int64_t x293 = 403399391687938LL;
uint8_t x306 = UINT8_MAX;
int64_t t63 = -1392170077372292LL;
static int8_t x314 = -7;
int64_t x315 = -1LL;
static int64_t t65 = -9043988334247828LL;
int32_t x338 = INT32_MAX;
int32_t x340 = INT32_MIN;
static int8_t x347 = -1;
int32_t t71 = -249265;
volatile int32_t x372 = INT32_MIN;
uint64_t x376 = UINT64_MAX;
uint64_t t77 = 432711037778257LLU;
volatile uint64_t x390 = 13768661LLU;
int64_t x391 = -1LL;
volatile uint64_t t80 = 2190597788LLU;
uint64_t x399 = UINT64_MAX;
static int32_t x404 = INT32_MIN;
int8_t x405 = 0;
int64_t x414 = INT64_MAX;
uint8_t x415 = 1U;
static int8_t x426 = -30;
int64_t x427 = -1LL;
volatile int8_t x440 = INT8_MAX;
uint64_t x449 = 230152LLU;
int8_t x453 = INT8_MIN;
int64_t t94 = 3918924310LL;
static volatile uint64_t x457 = 1796169652117052LLU;
uint64_t t96 = 11151LLU;
uint16_t x465 = 17U;
int16_t x469 = -1;
static int8_t x472 = INT8_MAX;
int16_t x477 = INT16_MIN;
volatile uint64_t t100 = 14357541632LLU;
uint32_t t102 = 111305461U;
volatile int8_t x491 = 20;
volatile int64_t t103 = -1716125224977194422LL;
int32_t x496 = -1;
uint32_t x497 = UINT32_MAX;
int8_t x500 = -1;
static int64_t x506 = -1LL;
static int8_t x516 = INT8_MIN;
volatile int32_t t107 = -53579;
volatile int32_t x520 = INT32_MAX;
static uint64_t t108 = 17753LLU;
volatile int64_t x543 = INT64_MIN;
uint64_t t113 = 7241610942256753LLU;
static int8_t x556 = INT8_MIN;
static int64_t x564 = -14599595763LL;
volatile int8_t x568 = INT8_MAX;
static int8_t x572 = INT8_MIN;
uint16_t x573 = 29U;
uint16_t x589 = 177U;
uint16_t x591 = UINT16_MAX;
int32_t x595 = INT32_MAX;
int64_t x600 = -1449679043LL;
static int8_t x601 = INT8_MIN;
static uint64_t t127 = 13620898036933LLU;
int16_t x609 = INT16_MIN;
volatile int8_t x613 = -1;
static int32_t x615 = -1;
int8_t x619 = 54;
uint8_t x622 = 36U;
static int32_t x624 = 1;
static int8_t x646 = -1;
static volatile int64_t t138 = -15655562LL;
volatile int64_t t140 = 255871221760LL;
volatile uint8_t x661 = UINT8_MAX;
volatile uint64_t x665 = 1558825334319431LLU;
int64_t x666 = INT64_MAX;
int8_t x673 = INT8_MAX;
int64_t x682 = -1LL;
static uint8_t x693 = 20U;
static int8_t x716 = 1;
uint32_t x718 = 4024U;
int8_t x721 = INT8_MIN;
static uint32_t x722 = 7344U;
volatile uint8_t x728 = 98U;
static int64_t x772 = INT64_MIN;
volatile int64_t t163 = 10862941813LL;
static int8_t x774 = -23;
int16_t x780 = INT16_MAX;
volatile int32_t x790 = INT32_MAX;
int64_t x793 = -534038340347LL;
volatile uint8_t x794 = 56U;
int8_t x802 = INT8_MIN;
int8_t x804 = INT8_MIN;
volatile int32_t t170 = -5;
int64_t x805 = -1LL;
uint8_t x821 = 1U;
int64_t x822 = 300654649467115LL;
int16_t x831 = INT16_MIN;
int64_t x839 = -40482352262614LL;
uint64_t t175 = 23816482875283793LLU;
uint64_t x841 = 201009667LLU;
uint64_t x842 = 13451623425LLU;
int32_t x844 = INT32_MIN;
volatile uint64_t t176 = 1829918LLU;
int32_t x856 = INT32_MIN;
volatile int64_t t179 = 12452811LL;
int8_t x858 = INT8_MAX;
uint64_t x863 = 772530089544035LLU;
int32_t x866 = INT32_MAX;
int64_t x878 = 125LL;
volatile int8_t x882 = INT8_MIN;
int32_t x887 = -1885578;
static volatile int32_t x888 = 61296379;
volatile int64_t t186 = 155883LL;
volatile int32_t x895 = INT32_MAX;
int32_t x896 = INT32_MAX;
volatile uint16_t x898 = 27159U;
static volatile uint32_t t189 = 4U;
volatile uint64_t t190 = 11LLU;
uint16_t x910 = 25U;
static uint64_t t192 = 4453591382944120LLU;
uint32_t x919 = UINT32_MAX;
static int64_t x923 = INT64_MAX;
static int64_t t194 = -374654170504LL;
int8_t x928 = INT8_MAX;
int64_t x929 = -352LL;
int32_t x943 = INT32_MIN;
static int8_t x944 = INT8_MAX;


void f0(void) {
    	static int16_t x7 = -1;
	int32_t x8 = INT32_MIN;
	static volatile int64_t t0 = 447321994LL;

    t0 = ((x5-x6)&(x7%x8));

    if (t0 != -347274782LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x13 = 20821670012714469LLU;
	static int16_t x14 = INT16_MAX;
	uint64_t t1 = 3845621LLU;

    t1 = ((x13-x14)&(x15%x16));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x17 = 515U;
	int16_t x18 = 4;
	int16_t x19 = -1;
	int16_t x20 = -1;
	int32_t t2 = -1734924;

    t2 = ((x17-x18)&(x19%x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x22 = 51993130LLU;
	static int64_t x23 = -1LL;
	int16_t x24 = INT16_MIN;
	uint64_t t3 = 6841879LLU;

    t3 = ((x21-x22)&(x23%x24));

    if (t3 != 18446744073657558485LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MIN;
	static int16_t x26 = -1;
	volatile int8_t x28 = -1;

    t4 = ((x25-x26)&(x27%x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x29 = 4337382LLU;
	static int16_t x30 = -1;
	int8_t x31 = -1;
	int8_t x32 = 2;
	uint64_t t5 = 27910742784824LLU;

    t5 = ((x29-x30)&(x31%x32));

    if (t5 != 4337383LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = INT64_MIN;
	static volatile int16_t x35 = INT16_MIN;
	int8_t x36 = 6;

    t6 = ((x33-x34)&(x35%x36));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x41 = UINT16_MAX;
	static int64_t x43 = 65254589570175818LL;
	static int16_t x44 = -1;
	volatile int64_t t7 = 11588592LL;

    t7 = ((x41-x42)&(x43%x44));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x45 = UINT8_MAX;
	static uint32_t x46 = 1071990006U;
	uint8_t x47 = 101U;

    t8 = ((x45-x46)&(x47%x48));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x49 = 0U;
	int16_t x50 = -16;
	uint16_t x51 = 8157U;
	int32_t x52 = -1;

    t9 = ((x49-x50)&(x51%x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = -1;
	uint64_t x54 = 1727LLU;
	volatile uint32_t x55 = UINT32_MAX;
	int8_t x56 = INT8_MIN;

    t10 = ((x53-x54)&(x55%x56));

    if (t10 != 64LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint16_t x57 = UINT16_MAX;
	static volatile int64_t x58 = 1415LL;
	static volatile int8_t x59 = INT8_MIN;

    t11 = ((x57-x58)&(x59%x60));

    if (t11 != 64000LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x62 = INT8_MAX;
	uint8_t x63 = 0U;
	volatile int64_t x64 = 2208871845LL;
	static int64_t t12 = 42LL;

    t12 = ((x61-x62)&(x63%x64));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x65 = UINT8_MAX;
	volatile uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	int64_t x68 = -437LL;

    t13 = ((x65-x66)&(x67%x68));

    if (t13 != 256LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x73 = 22U;
	uint32_t x74 = 83458850U;
	uint8_t x75 = 2U;
	static int16_t x76 = -1;
	uint32_t t14 = 0U;

    t14 = ((x73-x74)&(x75%x76));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x77 = INT8_MIN;
	volatile uint8_t x78 = 63U;
	int64_t x79 = INT64_MAX;
	int16_t x80 = 14122;
	volatile int64_t t15 = 106LL;

    t15 = ((x77-x78)&(x79%x80));

    if (t15 != 7425LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x81 = 0U;
	static int8_t x82 = INT8_MAX;
	int64_t x83 = 4185968064443LL;
	int16_t x84 = INT16_MAX;
	static volatile int64_t t16 = 37359LL;

    t16 = ((x81-x82)&(x83%x84));

    if (t16 != 1281LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x86 = -1;
	int16_t x88 = -13348;

    t17 = ((x85-x86)&(x87%x88));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 911614204U;
	int8_t x92 = 5;
	volatile uint64_t t18 = 6761LLU;

    t18 = ((x89-x90)&(x91%x92));

    if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x97 = -8038567030842LL;
	uint8_t x98 = UINT8_MAX;
	volatile uint64_t x99 = 51783668862225159LLU;
	int16_t x100 = -2;

    t19 = ((x97-x98)&(x99%x100));

    if (t19 != 51783357147712007LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x105 = 0;
	uint32_t x108 = UINT32_MAX;
	static volatile uint32_t t20 = 1002378U;

    t20 = ((x105-x106)&(x107%x108));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x110 = UINT8_MAX;
	uint64_t x111 = 3405845031104LLU;
	static volatile uint64_t t21 = 134241843980860LLU;

    t21 = ((x109-x110)&(x111%x112));

    if (t21 != 4230932544LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x117 = -1;
	static int64_t x118 = 826321841LL;
	volatile int64_t x119 = -2035433212813557LL;
	uint64_t x120 = 99442778070350LLU;
	uint64_t t22 = 40222973LLU;

    t22 = ((x117-x118)&(x119%x120));

    if (t22 != 62163454530570LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x122 = INT32_MIN;
	int32_t x124 = INT32_MAX;

    t23 = ((x121-x122)&(x123%x124));

    if (t23 != 1463859328LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x125 = 0;
	uint64_t x127 = UINT64_MAX;
	static uint64_t t24 = 39879575096LLU;

    t24 = ((x125-x126)&(x127%x128));

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x129 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	volatile int64_t t25 = -31425724407335LL;

    t25 = ((x129-x130)&(x131%x132));

    if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x133 = 0U;
	static volatile uint64_t x134 = UINT64_MAX;
	int64_t x136 = INT64_MIN;
	volatile uint64_t t26 = 2080856985424LLU;

    t26 = ((x133-x134)&(x135%x136));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	volatile int64_t t27 = -110814272LL;

    t27 = ((x137-x138)&(x139%x140));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x142 = INT8_MIN;
	int16_t x143 = 18;
	uint64_t x144 = 4LLU;
	uint64_t t28 = 46992541190743464LLU;

    t28 = ((x141-x142)&(x143%x144));

    if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x146 = -1;
	int16_t x147 = 19;
	int64_t x148 = INT64_MIN;
	volatile int64_t t29 = 33834103LL;

    t29 = ((x145-x146)&(x147%x148));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x157 = 111U;
	int32_t x158 = 1;
	uint8_t x159 = UINT8_MAX;
	int16_t x160 = -1;

    t30 = ((x157-x158)&(x159%x160));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x161 = 5452U;
	int8_t x162 = 1;
	static int8_t x163 = INT8_MAX;
	int16_t x164 = -1;

    t31 = ((x161-x162)&(x163%x164));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x169 = UINT16_MAX;
	static uint8_t x170 = UINT8_MAX;
	static int8_t x171 = -14;
	volatile int32_t t32 = 0;

    t32 = ((x169-x170)&(x171%x172));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x177 = INT16_MIN;
	uint8_t x178 = 0U;
	volatile uint16_t x179 = 15U;
	int8_t x180 = -25;
	volatile int32_t t33 = -3;

    t33 = ((x177-x178)&(x179%x180));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x184 = INT16_MIN;
	int64_t t34 = -2453815447LL;

    t34 = ((x181-x182)&(x183%x184));

    if (t34 != 9223372036854748248LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x185 = 3435;
	int32_t x187 = -715;
	static uint64_t x188 = UINT64_MAX;
	uint64_t t35 = 916LLU;

    t35 = ((x185-x186)&(x187%x188));

    if (t35 != 3348LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x189 = 7469431376092LL;
	uint8_t x190 = 16U;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 164U;

    t36 = ((x189-x190)&(x191%x192));

    if (t36 != 7469431376000LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x193 = INT8_MIN;
	int8_t x194 = -1;
	int16_t x195 = 1;
	volatile int64_t x196 = INT64_MAX;
	volatile int64_t t37 = -2220LL;

    t37 = ((x193-x194)&(x195%x196));

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x201 = 80371496;
	static int8_t x202 = INT8_MAX;
	int8_t x203 = -1;
	uint64_t x204 = UINT64_MAX;
	uint64_t t38 = 181979LLU;

    t38 = ((x201-x202)&(x203%x204));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x206 = INT32_MIN;
	int32_t x207 = -4808;
	uint8_t x208 = UINT8_MAX;
	volatile uint32_t t39 = 17535U;

    t39 = ((x205-x206)&(x207%x208));

    if (t39 != 2147483430U) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint16_t x209 = 6603U;
	static int64_t x210 = -36052796257LL;
	uint16_t x211 = UINT16_MAX;
	uint16_t x212 = 2U;
	int64_t t40 = 43768638217LL;

    t40 = ((x209-x210)&(x211%x212));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x213 = INT8_MIN;
	uint32_t x214 = 87U;
	uint16_t x215 = 0U;
	static uint64_t x216 = 1125899459662503973LLU;

    t41 = ((x213-x214)&(x215%x216));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x217 = UINT8_MAX;
	uint8_t x218 = UINT8_MAX;
	int32_t x220 = 4517;
	int32_t t42 = -2615;

    t42 = ((x217-x218)&(x219%x220));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x221 = 7053U;
	static int16_t x222 = -1;
	int32_t x223 = 1;
	volatile int32_t t43 = -28542265;

    t43 = ((x221-x222)&(x223%x224));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x225 = 1;
	static int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MIN;
	int64_t t44 = -32LL;

    t44 = ((x225-x226)&(x227%x228));

    if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x229 = INT8_MIN;
	static volatile int64_t x231 = -2499LL;
	int64_t x232 = -236492365LL;
	int64_t t45 = 0LL;

    t45 = ((x229-x230)&(x231%x232));

    if (t45 != -2559LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x233 = UINT64_MAX;
	uint16_t x234 = 2U;
	int8_t x235 = -1;
	volatile int16_t x236 = -818;
	static volatile uint64_t t46 = 102046443671994840LLU;

    t46 = ((x233-x234)&(x235%x236));

    if (t46 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x237 = UINT64_MAX;
	volatile int64_t x238 = -132029562LL;
	uint16_t x239 = 9111U;
	int16_t x240 = -1;
	volatile uint64_t t47 = 90918311234636LLU;

    t47 = ((x237-x238)&(x239%x240));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x241 = -1;
	volatile uint64_t x242 = UINT64_MAX;
	int32_t x243 = INT32_MAX;
	uint16_t x244 = 15315U;

    t48 = ((x241-x242)&(x243%x244));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x245 = -1;
	int64_t x246 = 569727884805504LL;
	volatile int8_t x247 = INT8_MAX;
	int64_t t49 = 3237799540051LL;

    t49 = ((x245-x246)&(x247%x248));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x250 = 0;
	uint8_t x251 = 31U;
	volatile int64_t t50 = 15999887025080961LL;

    t50 = ((x249-x250)&(x251%x252));

    if (t50 != 31LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x253 = -1;
	static int32_t x255 = 703794609;
	int64_t x256 = -1LL;
	volatile int64_t t51 = 2449LL;

    t51 = ((x253-x254)&(x255%x256));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x257 = 22;
	volatile uint16_t x260 = 9156U;
	int32_t t52 = -1;

    t52 = ((x257-x258)&(x259%x260));

    if (t52 != 18) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MIN;
	int32_t x263 = INT32_MAX;
	int32_t x264 = INT32_MAX;

    t53 = ((x261-x262)&(x263%x264));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x265 = 891254154729LLU;
	uint8_t x266 = UINT8_MAX;
	static int8_t x267 = INT8_MIN;
	static int8_t x268 = INT8_MIN;
	uint64_t t54 = 36351888696LLU;

    t54 = ((x265-x266)&(x267%x268));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x274 = -870;
	uint64_t x275 = UINT64_MAX;
	uint32_t x276 = 642160084U;
	uint64_t t55 = 781869938267021789LLU;

    t55 = ((x273-x274)&(x275%x276));

    if (t55 != 610LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x278 = INT8_MAX;
	volatile int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MIN;
	uint64_t t56 = 43148LLU;

    t56 = ((x277-x278)&(x279%x280));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x281 = 0U;
	static volatile int32_t t57 = 595348;

    t57 = ((x281-x282)&(x283%x284));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x285 = 39U;
	uint16_t x286 = 1163U;
	int16_t x287 = 6;
	volatile uint8_t x288 = UINT8_MAX;

    t58 = ((x285-x286)&(x287%x288));

    if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x289 = 412622409961628LLU;
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = INT32_MIN;
	volatile uint32_t x292 = UINT32_MAX;
	volatile uint64_t t59 = 191LLU;

    t59 = ((x289-x290)&(x291%x292));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x294 = INT32_MIN;
	uint16_t x295 = 51U;
	int8_t x296 = -1;
	volatile int64_t t60 = 1021466461683LL;

    t60 = ((x293-x294)&(x295%x296));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x297 = 9U;
	volatile int16_t x298 = INT16_MIN;
	static uint32_t x299 = UINT32_MAX;
	int32_t x300 = INT32_MAX;
	static uint32_t t61 = 113U;

    t61 = ((x297-x298)&(x299%x300));

    if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x301 = INT8_MAX;
	static int16_t x302 = INT16_MAX;
	int64_t x303 = INT64_MIN;
	static int8_t x304 = INT8_MIN;
	volatile int64_t t62 = 105897793415LL;

    t62 = ((x301-x302)&(x303%x304));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint32_t x305 = 21472503U;
	int32_t x307 = -15785598;
	int64_t x308 = INT64_MIN;

    t63 = ((x305-x306)&(x307%x308));

    if (t63 != 17244544LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x309 = -1;
	volatile int8_t x310 = -1;
	int8_t x311 = INT8_MIN;
	volatile int64_t x312 = -1LL;
	volatile int64_t t64 = -8354LL;

    t64 = ((x309-x310)&(x311%x312));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x313 = 1;
	volatile int64_t x316 = INT64_MIN;

    t65 = ((x313-x314)&(x315%x316));

    if (t65 != 8LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x317 = INT64_MIN;
	static volatile int16_t x318 = -39;
	uint8_t x319 = UINT8_MAX;
	static volatile int64_t x320 = INT64_MIN;
	static int64_t t66 = -3862629456542646902LL;

    t66 = ((x317-x318)&(x319%x320));

    if (t66 != 39LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x325 = 62U;
	int8_t x326 = INT8_MIN;
	static int64_t x327 = 60643LL;
	static int32_t x328 = 483;
	int64_t t67 = -359123LL;

    t67 = ((x325-x326)&(x327%x328));

    if (t67 != 12LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x329 = INT8_MAX;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = UINT16_MAX;
	int8_t x332 = 1;
	int32_t t68 = -15897;

    t68 = ((x329-x330)&(x331%x332));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x337 = INT64_MAX;
	uint16_t x339 = UINT16_MAX;
	int64_t t69 = 54507457954342811LL;

    t69 = ((x337-x338)&(x339%x340));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x341 = 112U;
	static volatile int8_t x342 = 3;
	int32_t x343 = INT32_MIN;
	uint16_t x344 = 28069U;
	static int32_t t70 = -429;

    t70 = ((x341-x342)&(x343%x344));

    if (t70 != 37) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x345 = INT16_MIN;
	volatile int32_t x346 = 181;
	int8_t x348 = 7;

    t71 = ((x345-x346)&(x347%x348));

    if (t71 != -32949) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x349 = 3U;
	int32_t x350 = -1707;
	uint64_t x351 = UINT64_MAX;
	static uint32_t x352 = UINT32_MAX;
	volatile uint64_t t72 = 15186103795210LLU;

    t72 = ((x349-x350)&(x351%x352));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x353 = 4U;
	int64_t x354 = -144822163LL;
	int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MIN;
	volatile int64_t t73 = 41341410041465LL;

    t73 = ((x353-x354)&(x355%x356));

    if (t73 != 20375LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = -61;
	volatile int64_t x359 = INT64_MIN;
	int16_t x360 = -1;
	volatile int64_t t74 = -9225LL;

    t74 = ((x357-x358)&(x359%x360));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x365 = 4016726U;
	volatile int8_t x366 = 11;
	int8_t x367 = 10;
	int32_t x368 = INT32_MAX;
	volatile uint32_t t75 = 165247698U;

    t75 = ((x365-x366)&(x367%x368));

    if (t75 != 10U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x369 = INT16_MIN;
	static int64_t x370 = 24332LL;
	static volatile int64_t x371 = INT64_MIN;
	static volatile int64_t t76 = -1834918610876213LL;

    t76 = ((x369-x370)&(x371%x372));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MIN;

    t77 = ((x373-x374)&(x375%x376));

    if (t77 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x377 = 0U;
	volatile int8_t x378 = 61;
	static int64_t x379 = 2282657488252715291LL;
	int32_t x380 = -2906;
	int64_t t78 = 3287694LL;

    t78 = ((x377-x378)&(x379%x380));

    if (t78 != 387LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x385 = -5954;
	int8_t x386 = INT8_MIN;
	static uint32_t x387 = 14306021U;
	static int16_t x388 = -1;
	uint32_t t79 = 7318712U;

    t79 = ((x385-x386)&(x387%x388));

    if (t79 != 14305316U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x389 = 2;
	int16_t x392 = 5;

    t80 = ((x389-x390)&(x391%x392));

    if (t80 != 18446744073695782957LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x393 = 958491328;
	int32_t x394 = INT32_MAX;
	uint32_t x395 = 285U;
	uint8_t x396 = 51U;
	volatile uint32_t t81 = 1587609U;

    t81 = ((x393-x394)&(x395%x396));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x397 = 54;
	int8_t x398 = -3;
	uint16_t x400 = 784U;
	static volatile uint64_t t82 = 1620352194LLU;

    t82 = ((x397-x398)&(x399%x400));

    if (t82 != 41LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x401 = INT32_MAX;
	int64_t x402 = INT64_MAX;
	int16_t x403 = -58;
	volatile int64_t t83 = 6LL;

    t83 = ((x401-x402)&(x403%x404));

    if (t83 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x406 = 1U;
	volatile int16_t x407 = 4;
	uint8_t x408 = 57U;
	int32_t t84 = -1304;

    t84 = ((x405-x406)&(x407%x408));

    if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x409 = -3886;
	uint32_t x410 = 189U;
	uint8_t x411 = 25U;
	int16_t x412 = 493;
	volatile uint32_t t85 = 5938U;

    t85 = ((x409-x410)&(x411%x412));

    if (t85 != 17U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x413 = -1;
	volatile uint64_t x416 = 2114179LLU;
	uint64_t t86 = 46537568060LLU;

    t86 = ((x413-x414)&(x415%x416));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x417 = -78;
	static int8_t x418 = INT8_MAX;
	int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	int32_t t87 = -457320;

    t87 = ((x417-x418)&(x419%x420));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x421 = INT8_MIN;
	static int32_t x422 = INT32_MIN;
	volatile int8_t x423 = -1;
	static int32_t x424 = INT32_MAX;
	int32_t t88 = -53805;

    t88 = ((x421-x422)&(x423%x424));

    if (t88 != 2147483520) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x425 = INT8_MAX;
	int16_t x428 = 2544;
	static volatile int64_t t89 = 19973LL;

    t89 = ((x425-x426)&(x427%x428));

    if (t89 != 157LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x437 = 80U;
	int64_t x438 = 166LL;
	volatile int16_t x439 = 216;
	volatile int64_t t90 = -24796LL;

    t90 = ((x437-x438)&(x439%x440));

    if (t90 != 8LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x441 = UINT64_MAX;
	volatile int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MAX;
	static int8_t x444 = -1;
	volatile uint64_t t91 = 21348257785LLU;

    t91 = ((x441-x442)&(x443%x444));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x445 = -1;
	static int32_t x446 = INT32_MIN;
	int64_t x447 = INT64_MIN;
	static int64_t x448 = 170LL;
	volatile int64_t t92 = 108015395230699LL;

    t92 = ((x445-x446)&(x447%x448));

    if (t92 != 2147483520LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x450 = -5;
	static volatile int32_t x451 = -23467;
	volatile uint64_t x452 = 4886LLU;
	uint64_t t93 = 75033LLU;

    t93 = ((x449-x450)&(x451%x452));

    if (t93 != 521LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x454 = 21638;
	int8_t x455 = 1;
	static int64_t x456 = -1LL;

    t94 = ((x453-x454)&(x455%x456));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x458 = INT16_MIN;
	int16_t x459 = 12;
	uint64_t x460 = 12705710432LLU;
	static uint64_t t95 = 91000789LLU;

    t95 = ((x457-x458)&(x459%x460));

    if (t95 != 12LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x461 = 2U;
	int64_t x462 = INT64_MAX;
	uint64_t x463 = 2217210211596LLU;
	uint32_t x464 = 685644322U;

    t96 = ((x461-x462)&(x463%x464));

    if (t96 != 2LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x466 = -1;
	uint16_t x467 = 36U;
	uint64_t x468 = 76737053LLU;
	static uint64_t t97 = 1409LLU;

    t97 = ((x465-x466)&(x467%x468));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x470 = 416U;
	uint16_t x471 = 1U;
	volatile uint32_t t98 = 1499U;

    t98 = ((x469-x470)&(x471%x472));

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x473 = -1LL;
	int16_t x474 = INT16_MIN;
	uint32_t x475 = 1071089507U;
	volatile uint64_t x476 = 188081338429597LLU;
	uint64_t t99 = 4896LLU;

    t99 = ((x473-x474)&(x475%x476));

    if (t99 != 1891LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x478 = -1;
	static uint64_t x479 = 1852LLU;
	uint8_t x480 = UINT8_MAX;

    t100 = ((x477-x478)&(x479%x480));

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x481 = -1;
	int32_t x482 = -1;
	int16_t x483 = INT16_MIN;
	static int8_t x484 = INT8_MIN;
	static int32_t t101 = -24038976;

    t101 = ((x481-x482)&(x483%x484));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x485 = UINT32_MAX;
	int8_t x486 = INT8_MIN;
	uint16_t x487 = 14467U;
	volatile int8_t x488 = -1;

    t102 = ((x485-x486)&(x487%x488));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x489 = INT16_MIN;
	int16_t x490 = -19;
	int64_t x492 = INT64_MAX;

    t103 = ((x489-x490)&(x491%x492));

    if (t103 != 16LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x493 = 16U;
	static uint64_t x494 = UINT64_MAX;
	static uint32_t x495 = UINT32_MAX;
	static uint64_t t104 = 120241575191432835LLU;

    t104 = ((x493-x494)&(x495%x496));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x498 = 61U;
	int32_t x499 = INT32_MIN;
	volatile uint32_t t105 = 3736479U;

    t105 = ((x497-x498)&(x499%x500));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x505 = INT8_MAX;
	static uint8_t x507 = UINT8_MAX;
	int64_t x508 = INT64_MIN;
	int64_t t106 = 74082703016083LL;

    t106 = ((x505-x506)&(x507%x508));

    if (t106 != 128LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x513 = INT16_MAX;
	static int32_t x514 = -3638439;
	volatile int16_t x515 = INT16_MAX;

    t107 = ((x513-x514)&(x515%x516));

    if (t107 != 38) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x517 = INT32_MAX;
	int8_t x518 = 7;
	static uint64_t x519 = 8625615LLU;

    t108 = ((x517-x518)&(x519%x520));

    if (t108 != 8625608LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x521 = 433LLU;
	int64_t x522 = INT64_MIN;
	volatile uint32_t x523 = UINT32_MAX;
	int16_t x524 = INT16_MIN;
	volatile uint64_t t109 = 4318168873758LLU;

    t109 = ((x521-x522)&(x523%x524));

    if (t109 != 433LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x525 = INT16_MIN;
	uint32_t x526 = UINT32_MAX;
	uint8_t x527 = 37U;
	volatile uint32_t x528 = 2057449U;
	uint32_t t110 = 4857202U;

    t110 = ((x525-x526)&(x527%x528));

    if (t110 != 1U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x529 = 37LL;
	static int64_t x530 = -1LL;
	int16_t x531 = -1;
	static uint8_t x532 = 2U;
	static volatile int64_t t111 = 3501146LL;

    t111 = ((x529-x530)&(x531%x532));

    if (t111 != 38LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x533 = -1LL;
	uint32_t x534 = UINT32_MAX;
	int8_t x535 = INT8_MAX;
	uint16_t x536 = UINT16_MAX;
	int64_t t112 = 412684127LL;

    t112 = ((x533-x534)&(x535%x536));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x541 = UINT16_MAX;
	int32_t x542 = -1;
	uint64_t x544 = UINT64_MAX;

    t113 = ((x541-x542)&(x543%x544));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x545 = 42;
	uint8_t x546 = 1U;
	static uint64_t x547 = UINT64_MAX;
	int8_t x548 = INT8_MIN;
	uint64_t t114 = 194437047260775LLU;

    t114 = ((x545-x546)&(x547%x548));

    if (t114 != 41LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x549 = INT8_MIN;
	int32_t x550 = 158371884;
	uint64_t x551 = 11847617LLU;
	uint32_t x552 = 1U;
	volatile uint64_t t115 = 2041903524545583LLU;

    t115 = ((x549-x550)&(x551%x552));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x553 = INT8_MIN;
	int32_t x554 = -1;
	uint8_t x555 = 1U;
	volatile int32_t t116 = 3658004;

    t116 = ((x553-x554)&(x555%x556));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x557 = -1;
	uint32_t x558 = 1U;
	uint16_t x559 = UINT16_MAX;
	int8_t x560 = INT8_MIN;
	uint32_t t117 = 667425085U;

    t117 = ((x557-x558)&(x559%x560));

    if (t117 != 126U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x561 = 301665205U;
	volatile int16_t x562 = -1;
	uint64_t x563 = 2802319418281813080LLU;
	volatile uint64_t t118 = 108651148555572LLU;

    t118 = ((x561-x562)&(x563%x564));

    if (t118 != 30998544LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x565 = INT8_MIN;
	int8_t x566 = INT8_MIN;
	int8_t x567 = -13;
	volatile int32_t t119 = -7667339;

    t119 = ((x565-x566)&(x567%x568));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x569 = -5780;
	int16_t x570 = -1;
	int16_t x571 = 150;
	int32_t t120 = -20108;

    t120 = ((x569-x570)&(x571%x572));

    if (t120 != 4) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x574 = INT32_MAX;
	int32_t x575 = 97405609;
	static volatile int32_t x576 = -1;
	int32_t t121 = -171;

    t121 = ((x573-x574)&(x575%x576));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x577 = 44U;
	static int32_t x578 = 587721;
	uint16_t x579 = 94U;
	int64_t x580 = INT64_MAX;
	int64_t t122 = 8659813321615LL;

    t122 = ((x577-x578)&(x579%x580));

    if (t122 != 66LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x585 = -1;
	volatile int8_t x586 = INT8_MAX;
	int32_t x587 = -29705052;
	volatile uint32_t x588 = 12863U;
	volatile uint32_t t123 = 12669U;

    t123 = ((x585-x586)&(x587%x588));

    if (t123 != 7168U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x590 = -1427857954LL;
	volatile int32_t x592 = 3;
	int64_t t124 = -131265373970435LL;

    t124 = ((x589-x590)&(x591%x592));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x593 = -1;
	uint32_t x594 = UINT32_MAX;
	int32_t x596 = -651373795;
	uint32_t t125 = 34161351U;

    t125 = ((x593-x594)&(x595%x596));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x597 = INT64_MIN;
	int64_t x598 = INT64_MIN;
	int8_t x599 = -1;
	volatile int64_t t126 = -86113436684360LL;

    t126 = ((x597-x598)&(x599%x600));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint64_t x602 = 186988528251849LLU;
	int64_t x603 = INT64_MIN;
	uint8_t x604 = 80U;

    t127 = ((x601-x602)&(x603%x604));

    if (t127 != 18446557085181299600LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x605 = INT32_MAX;
	volatile int64_t x606 = -30857LL;
	int8_t x607 = INT8_MIN;
	uint16_t x608 = UINT16_MAX;
	volatile int64_t t128 = -501870323LL;

    t128 = ((x605-x606)&(x607%x608));

    if (t128 != 2147514496LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x610 = INT8_MAX;
	int64_t x611 = -232805278452811LL;
	int64_t x612 = -1LL;
	int64_t t129 = -48LL;

    t129 = ((x609-x610)&(x611%x612));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x614 = INT16_MIN;
	int16_t x616 = -1;
	int32_t t130 = 44;

    t130 = ((x613-x614)&(x615%x616));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x617 = 0U;
	int32_t x618 = -1;
	int64_t x620 = INT64_MIN;
	int64_t t131 = -1225674389459LL;

    t131 = ((x617-x618)&(x619%x620));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x621 = 1501U;
	static uint16_t x623 = UINT16_MAX;
	volatile int32_t t132 = 0;

    t132 = ((x621-x622)&(x623%x624));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x625 = INT8_MIN;
	uint64_t x626 = 127994738059188991LLU;
	volatile int32_t x627 = -1;
	volatile uint8_t x628 = UINT8_MAX;
	uint64_t t133 = 66979820451LLU;

    t133 = ((x625-x626)&(x627%x628));

    if (t133 != 18318749335650362497LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x629 = -1;
	int32_t x630 = 8;
	uint64_t x631 = 30237706687LLU;
	volatile int64_t x632 = 10LL;
	uint64_t t134 = 16389333459221LLU;

    t134 = ((x629-x630)&(x631%x632));

    if (t134 != 7LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x633 = 41;
	int8_t x634 = INT8_MAX;
	volatile int8_t x635 = -29;
	int32_t x636 = INT32_MIN;
	static int32_t t135 = -355407096;

    t135 = ((x633-x634)&(x635%x636));

    if (t135 != -94) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x637 = INT8_MAX;
	static int8_t x638 = INT8_MIN;
	int16_t x639 = INT16_MAX;
	uint32_t x640 = 1394024251U;
	uint32_t t136 = 15309U;

    t136 = ((x637-x638)&(x639%x640));

    if (t136 != 255U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x645 = 127U;
	int64_t x647 = INT64_MIN;
	int32_t x648 = 709;
	volatile int64_t t137 = 1122613346947LL;

    t137 = ((x645-x646)&(x647%x648));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x649 = INT64_MAX;
	static int64_t x650 = INT64_MAX;
	int32_t x651 = INT32_MAX;
	static int64_t x652 = INT64_MAX;

    t138 = ((x649-x650)&(x651%x652));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x653 = -1;
	int64_t x654 = -1LL;
	int8_t x655 = INT8_MIN;
	static uint8_t x656 = 1U;
	static int64_t t139 = 24107LL;

    t139 = ((x653-x654)&(x655%x656));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x657 = INT32_MAX;
	volatile uint8_t x658 = 51U;
	static int64_t x659 = INT64_MIN;
	static int8_t x660 = 4;

    t140 = ((x657-x658)&(x659%x660));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x662 = 10;
	int32_t x663 = -1;
	volatile int32_t x664 = -31;
	volatile int32_t t141 = -7;

    t141 = ((x661-x662)&(x663%x664));

    if (t141 != 245) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x667 = 5377139948187775LLU;
	int32_t x668 = -1;
	volatile uint64_t t142 = 408898851098060LLU;

    t142 = ((x665-x666)&(x667%x668));

    if (t142 != 290521318727752LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x669 = UINT32_MAX;
	static int16_t x670 = -247;
	int32_t x671 = -1;
	volatile int16_t x672 = -4;
	uint32_t t143 = 3U;

    t143 = ((x669-x670)&(x671%x672));

    if (t143 != 246U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x674 = 326038678495LLU;
	volatile int64_t x675 = -232737LL;
	int64_t x676 = -556289349012350LL;
	uint64_t t144 = 85581683562733294LLU;

    t144 = ((x673-x674)&(x675%x676));

    if (t144 != 18446743747670839424LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x677 = -1LL;
	int8_t x678 = INT8_MAX;
	int32_t x679 = INT32_MIN;
	int8_t x680 = INT8_MIN;
	int64_t t145 = 1LL;

    t145 = ((x677-x678)&(x679%x680));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x681 = INT8_MAX;
	static uint32_t x683 = UINT32_MAX;
	uint64_t x684 = 4281543000336168LLU;
	volatile uint64_t t146 = 218069732260LLU;

    t146 = ((x681-x682)&(x683%x684));

    if (t146 != 128LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x685 = -1;
	volatile uint16_t x686 = UINT16_MAX;
	static int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MIN;
	int64_t t147 = -1515LL;

    t147 = ((x685-x686)&(x687%x688));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x689 = -1;
	int64_t x690 = 6168979LL;
	int8_t x691 = 0;
	volatile int16_t x692 = -50;
	int64_t t148 = 229LL;

    t148 = ((x689-x690)&(x691%x692));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x694 = -1249436LL;
	volatile uint64_t x695 = 416233734287858LLU;
	uint16_t x696 = UINT16_MAX;
	volatile uint64_t t149 = 2998827LLU;

    t149 = ((x693-x694)&(x695%x696));

    if (t149 != 32LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x697 = UINT8_MAX;
	int8_t x698 = 1;
	int32_t x699 = 122616685;
	static volatile int64_t x700 = INT64_MAX;
	int64_t t150 = 804861848LL;

    t150 = ((x697-x698)&(x699%x700));

    if (t150 != 108LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x701 = 13620U;
	int32_t x702 = 13780;
	volatile uint16_t x703 = 16U;
	uint8_t x704 = 6U;
	static uint32_t t151 = 123U;

    t151 = ((x701-x702)&(x703%x704));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x709 = UINT8_MAX;
	int16_t x710 = INT16_MAX;
	uint16_t x711 = UINT16_MAX;
	int64_t x712 = -1LL;
	int64_t t152 = 1240783088177LL;

    t152 = ((x709-x710)&(x711%x712));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x713 = INT8_MIN;
	int8_t x714 = INT8_MIN;
	volatile uint64_t x715 = UINT64_MAX;
	static uint64_t t153 = 2932LLU;

    t153 = ((x713-x714)&(x715%x716));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x717 = -8388;
	volatile uint64_t x719 = 14LLU;
	int16_t x720 = INT16_MIN;
	uint64_t t154 = 900LLU;

    t154 = ((x717-x718)&(x719%x720));

    if (t154 != 4LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x723 = -1;
	int64_t x724 = INT64_MIN;
	volatile int64_t t155 = 1326786LL;

    t155 = ((x721-x722)&(x723%x724));

    if (t155 != 4294959824LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x725 = 4U;
	uint16_t x726 = 1335U;
	int32_t x727 = -14;
	volatile int32_t t156 = -2841493;

    t156 = ((x725-x726)&(x727%x728));

    if (t156 != -1344) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x737 = 94U;
	int64_t x738 = -184262143607LL;
	int32_t x739 = -3;
	int64_t x740 = INT64_MIN;
	volatile int64_t t157 = 681823835500579669LL;

    t157 = ((x737-x738)&(x739%x740));

    if (t157 != 184262143701LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x741 = INT8_MIN;
	uint8_t x742 = 13U;
	int16_t x743 = INT16_MIN;
	uint16_t x744 = UINT16_MAX;
	int32_t t158 = 2804088;

    t158 = ((x741-x742)&(x743%x744));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x745 = INT32_MAX;
	volatile int32_t x746 = INT32_MAX;
	volatile int8_t x747 = -1;
	static volatile int16_t x748 = -1;
	int32_t t159 = -380466363;

    t159 = ((x745-x746)&(x747%x748));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x749 = 981559769107LL;
	uint8_t x750 = 3U;
	uint32_t x751 = 29U;
	static int16_t x752 = INT16_MIN;
	volatile int64_t t160 = -1926903986820LL;

    t160 = ((x749-x750)&(x751%x752));

    if (t160 != 16LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x757 = INT16_MIN;
	uint64_t x758 = UINT64_MAX;
	static int32_t x759 = INT32_MIN;
	volatile uint32_t x760 = 3U;
	uint64_t t161 = 156774038720396772LLU;

    t161 = ((x757-x758)&(x759%x760));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x761 = 3U;
	static int32_t x762 = 8;
	int64_t x763 = -11LL;
	static int16_t x764 = -3;
	static int64_t t162 = -566LL;

    t162 = ((x761-x762)&(x763%x764));

    if (t162 != -6LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x769 = UINT16_MAX;
	int16_t x770 = 31;
	static uint32_t x771 = 17517665U;

    t163 = ((x769-x770)&(x771%x772));

    if (t163 != 19552LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x773 = 112U;
	volatile int16_t x775 = 4;
	static int64_t x776 = -13884749487LL;
	static int64_t t164 = 501LL;

    t164 = ((x773-x774)&(x775%x776));

    if (t164 != 4LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x777 = -12;
	static int32_t x778 = -1841;
	volatile int8_t x779 = INT8_MAX;
	int32_t t165 = -39606;

    t165 = ((x777-x778)&(x779%x780));

    if (t165 != 37) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x785 = -97;
	static volatile int32_t x786 = INT32_MIN;
	volatile int32_t x787 = -572202;
	static uint32_t x788 = UINT32_MAX;
	uint32_t t166 = 25U;

    t166 = ((x785-x786)&(x787%x788));

    if (t166 != 2146911382U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x789 = -4034895176LL;
	volatile int16_t x791 = -18;
	int16_t x792 = INT16_MAX;
	int64_t t167 = 71135967300440273LL;

    t167 = ((x789-x790)&(x791%x792));

    if (t167 != -6182378840LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x795 = 38541U;
	uint32_t x796 = 249191205U;
	int64_t t168 = -2058615LL;

    t168 = ((x793-x794)&(x795%x796));

    if (t168 != 38029LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x797 = -2;
	int8_t x798 = -1;
	int64_t x799 = INT64_MIN;
	int16_t x800 = INT16_MIN;
	volatile int64_t t169 = -1113247856195091LL;

    t169 = ((x797-x798)&(x799%x800));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x801 = INT32_MIN;
	uint8_t x803 = 1U;

    t170 = ((x801-x802)&(x803%x804));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x806 = INT8_MIN;
	int32_t x807 = -1;
	volatile int32_t x808 = 299;
	int64_t t171 = 2056760821347627787LL;

    t171 = ((x805-x806)&(x807%x808));

    if (t171 != 127LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x823 = INT8_MIN;
	int8_t x824 = -1;
	int64_t t172 = 763615LL;

    t172 = ((x821-x822)&(x823%x824));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x825 = INT32_MAX;
	int64_t x826 = 3LL;
	uint64_t x827 = 6473206666437LLU;
	static int32_t x828 = INT32_MAX;
	uint64_t t173 = 1147966LLU;

    t173 = ((x825-x826)&(x827%x828));

    if (t173 != 690954376LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x829 = INT16_MAX;
	int16_t x830 = 435;
	int32_t x832 = -1;
	volatile int32_t t174 = 19512540;

    t174 = ((x829-x830)&(x831%x832));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x837 = 3U;
	static int64_t x838 = 3157505907972266LL;
	uint64_t x840 = 1539087353510376LLU;

    t175 = ((x837-x838)&(x839%x840));

    if (t175 != 140742070764352LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x843 = -61213;

    t176 = ((x841-x842)&(x843%x844));

    if (t176 != 18446744060458893314LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x845 = -1;
	int8_t x846 = INT8_MIN;
	volatile uint16_t x847 = UINT16_MAX;
	volatile uint16_t x848 = UINT16_MAX;
	int32_t t177 = 51398;

    t177 = ((x845-x846)&(x847%x848));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x849 = INT16_MIN;
	uint32_t x850 = 67U;
	uint32_t x851 = 16603847U;
	int32_t x852 = -1;
	uint32_t t178 = 14640U;

    t178 = ((x849-x850)&(x851%x852));

    if (t178 != 16603781U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x853 = -217350654LL;
	uint16_t x854 = UINT16_MAX;
	int32_t x855 = 657205;

    t179 = ((x853-x854)&(x855%x856));

    if (t179 != 656897LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x857 = UINT32_MAX;
	static int64_t x859 = INT64_MIN;
	int16_t x860 = 11;
	int64_t t180 = 17819380LL;

    t180 = ((x857-x858)&(x859%x860));

    if (t180 != 4294967168LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x861 = INT32_MAX;
	static int16_t x862 = 3218;
	int32_t x864 = INT32_MAX;
	volatile uint64_t t181 = 21408484LLU;

    t181 = ((x861-x862)&(x863%x864));

    if (t181 != 764822028LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x865 = 29U;
	static int32_t x867 = -918882;
	int8_t x868 = INT8_MIN;
	uint32_t t182 = 38787U;

    t182 = ((x865-x866)&(x867%x868));

    if (t182 != 2147483678U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x869 = INT8_MAX;
	uint64_t x870 = UINT64_MAX;
	volatile uint32_t x871 = UINT32_MAX;
	int8_t x872 = -21;
	uint64_t t183 = 13995258973613LLU;

    t183 = ((x869-x870)&(x871%x872));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x877 = 39787527142LLU;
	volatile uint8_t x879 = UINT8_MAX;
	volatile uint8_t x880 = UINT8_MAX;
	volatile uint64_t t184 = 4446826LLU;

    t184 = ((x877-x878)&(x879%x880));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x881 = 36209U;
	static int64_t x883 = INT64_MAX;
	uint16_t x884 = UINT16_MAX;
	static int64_t t185 = -7115450579LL;

    t185 = ((x881-x882)&(x883%x884));

    if (t185 != 3569LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x885 = -1LL;
	static uint32_t x886 = UINT32_MAX;

    t186 = ((x885-x886)&(x887%x888));

    if (t186 != -4294967296LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x889 = INT8_MAX;
	uint16_t x890 = 14U;
	int16_t x891 = INT16_MIN;
	int64_t x892 = INT64_MAX;
	static int64_t t187 = 126168015904392LL;

    t187 = ((x889-x890)&(x891%x892));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x893 = INT16_MIN;
	int32_t x894 = 564164523;
	int32_t t188 = 226784;

    t188 = ((x893-x894)&(x895%x896));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x897 = 1444358705U;
	int16_t x899 = 0;
	uint8_t x900 = 33U;

    t189 = ((x897-x898)&(x899%x900));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x901 = 3612061903654LLU;
	int16_t x902 = INT16_MIN;
	static int64_t x903 = -1LL;
	int32_t x904 = INT32_MAX;

    t190 = ((x901-x902)&(x903%x904));

    if (t190 != 3612061936422LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x909 = 198286471686096338LLU;
	int64_t x911 = INT64_MAX;
	volatile uint16_t x912 = UINT16_MAX;
	static uint64_t t191 = 6LLU;

    t191 = ((x909-x910)&(x911%x912));

    if (t191 != 1465LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x913 = INT8_MIN;
	static int16_t x914 = -146;
	int64_t x915 = -499LL;
	uint64_t x916 = 256459LLU;

    t192 = ((x913-x914)&(x915%x916));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x917 = UINT16_MAX;
	uint32_t x918 = 104U;
	int8_t x920 = INT8_MAX;
	volatile uint32_t t193 = 262265U;

    t193 = ((x917-x918)&(x919%x920));

    if (t193 != 7U) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x921 = INT64_MIN;
	volatile int8_t x922 = -26;
	int64_t x924 = INT64_MIN;

    t194 = ((x921-x922)&(x923%x924));

    if (t194 != 26LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x925 = INT16_MAX;
	static volatile int32_t x926 = INT32_MAX;
	static uint64_t x927 = 23242733618377LLU;
	uint64_t t195 = 12597741LLU;

    t195 = ((x925-x926)&(x927%x928));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x930 = -28964281;
	int64_t x931 = 3168847213791747763LL;
	static volatile uint32_t x932 = UINT32_MAX;
	int64_t t196 = 416028LL;

    t196 = ((x929-x930)&(x931%x932));

    if (t196 != 25239633LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x933 = INT8_MAX;
	static uint32_t x934 = 119U;
	uint64_t x935 = 1249828621LLU;
	int8_t x936 = -1;
	uint64_t t197 = 237667289086LLU;

    t197 = ((x933-x934)&(x935%x936));

    if (t197 != 8LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x937 = 0U;
	int16_t x938 = 0;
	static volatile int8_t x939 = INT8_MIN;
	int64_t x940 = INT64_MIN;
	volatile int64_t t198 = 543371LL;

    t198 = ((x937-x938)&(x939%x940));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x941 = -3;
	uint64_t x942 = 3424872940531794LLU;
	static uint64_t t199 = 526417467010073089LLU;

    t199 = ((x941-x942)&(x943%x944));

    if (t199 != 18443319200769019816LLU) { NG(); } else { ; }
	
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

