
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

int8_t x3 = -1;
static int32_t x7 = INT32_MIN;
static volatile int32_t x10 = INT32_MIN;
int64_t x12 = -1LL;
uint32_t x16 = UINT32_MAX;
int16_t x17 = INT16_MAX;
volatile int64_t x20 = 59205LL;
uint16_t x24 = 11237U;
volatile int32_t t5 = -23183346;
int32_t x25 = INT32_MIN;
static int32_t x27 = INT32_MIN;
int64_t x29 = INT64_MIN;
int64_t x38 = INT64_MIN;
int8_t x40 = INT8_MIN;
int16_t x41 = INT16_MAX;
int64_t x46 = INT64_MAX;
uint16_t x48 = 25322U;
static int16_t x49 = -1;
static int32_t t13 = 497534018;
static uint32_t t17 = 152326U;
uint16_t x74 = 19U;
uint8_t x76 = 1U;
int64_t x82 = 974295LL;
int8_t x83 = INT8_MIN;
int64_t x85 = -1LL;
volatile int16_t x88 = INT16_MAX;
int32_t x92 = INT32_MAX;
int8_t x98 = INT8_MIN;
uint32_t t24 = 1596U;
volatile int8_t x102 = INT8_MIN;
int32_t x104 = INT32_MAX;
uint64_t t25 = 1818244326LLU;
int8_t x107 = INT8_MIN;
volatile int64_t x108 = 4522367245LL;
int64_t x111 = 115391LL;
static int16_t x116 = INT16_MIN;
volatile int16_t x120 = INT16_MAX;
uint64_t x122 = 28158LLU;
int32_t t31 = 0;
int64_t x133 = INT64_MIN;
int8_t x137 = INT8_MIN;
int64_t x139 = -1LL;
int64_t x141 = -80276LL;
int32_t x144 = -25636842;
int8_t x150 = INT8_MAX;
uint32_t x154 = 12U;
static int64_t x156 = INT64_MIN;
volatile int64_t t38 = -16237906928303785LL;
int16_t x158 = -1;
int64_t x166 = INT64_MAX;
uint8_t x170 = 36U;
int32_t x173 = INT32_MIN;
static int32_t t43 = 0;
static int16_t x177 = -1;
uint16_t x179 = 120U;
int64_t x181 = -48028645085LL;
uint32_t x183 = 3545212U;
volatile uint32_t t45 = 760U;
int64_t x189 = 45015974864361198LL;
int16_t x191 = INT16_MAX;
volatile int32_t t47 = 1536171;
volatile int16_t x195 = INT16_MAX;
volatile int8_t x196 = -1;
uint64_t x201 = 261483419528154LLU;
int8_t x203 = INT8_MIN;
volatile int32_t t52 = 50469500;
uint64_t x224 = 996679380LLU;
uint64_t t55 = 4341968601997LLU;
int16_t x233 = -1;
int8_t x234 = -1;
uint16_t x235 = 28748U;
uint64_t x244 = 3313LLU;
static int32_t t61 = 262105646;
int8_t x252 = -27;
static uint32_t t62 = 3368U;
int32_t x255 = INT32_MIN;
volatile int8_t x257 = INT8_MIN;
uint64_t x260 = 14490983LLU;
volatile uint64_t t64 = 1738764623LLU;
int32_t x262 = 1;
uint16_t x263 = 185U;
uint16_t x264 = UINT16_MAX;
volatile int32_t t65 = -19;
int32_t x265 = INT32_MAX;
static int32_t x266 = -11553;
static uint16_t x267 = UINT16_MAX;
uint64_t x280 = UINT64_MAX;
int32_t x281 = INT32_MIN;
int8_t x287 = -1;
int8_t x293 = -18;
uint16_t x298 = 96U;
int8_t x300 = INT8_MAX;
uint32_t t74 = 614820U;
uint64_t t75 = 10046547772787LLU;
uint8_t x315 = 15U;
uint16_t x316 = 1056U;
int32_t t77 = -476932;
int16_t x321 = INT16_MIN;
uint16_t x331 = UINT16_MAX;
volatile int32_t t81 = -268255323;
int32_t x334 = INT32_MIN;
int16_t x337 = INT16_MAX;
volatile uint32_t t86 = 4U;
uint32_t x353 = UINT32_MAX;
static int32_t x354 = -2;
uint64_t t87 = 51226LLU;
uint32_t x368 = 81498U;
int8_t x370 = INT8_MAX;
volatile int64_t t91 = -2482744797LL;
uint16_t x375 = 3U;
uint8_t x377 = 3U;
volatile uint8_t x382 = 2U;
volatile int32_t x389 = -1;
uint16_t x394 = 6503U;
static int32_t x412 = INT32_MIN;
uint64_t x422 = 6974192003511959061LLU;
int8_t x429 = 1;
uint8_t x432 = 34U;
int8_t x437 = 24;
int8_t x438 = INT8_MIN;
uint8_t x440 = UINT8_MAX;
int8_t x442 = INT8_MAX;
int32_t x457 = 921980238;
volatile int8_t x460 = INT8_MIN;
int32_t t113 = -20560907;
volatile int32_t t114 = -384020;
static volatile int32_t x487 = INT32_MIN;
static uint32_t x494 = UINT32_MAX;
int16_t x495 = 14;
int16_t x497 = INT16_MIN;
static int16_t x504 = INT16_MIN;
int16_t x509 = -7658;
static volatile int16_t x514 = 47;
volatile uint32_t t125 = 18055267U;
uint16_t x519 = 1818U;
volatile uint32_t x524 = 1382190U;
volatile int64_t x529 = INT64_MIN;
int32_t x531 = 49010;
int32_t t129 = 927;
uint8_t x546 = UINT8_MAX;
static uint8_t x548 = 17U;
static volatile int32_t t134 = 2839;
static int32_t x554 = -1;
static uint16_t x556 = UINT16_MAX;
static int32_t x566 = -1;
int16_t x581 = INT16_MIN;
volatile int8_t x586 = INT8_MIN;
volatile uint16_t x588 = 4221U;
volatile int32_t t143 = -4669;
int16_t x589 = INT16_MIN;
int64_t x591 = -107636466229704599LL;
static int16_t x599 = INT16_MAX;
uint32_t x602 = 122326140U;
int64_t x603 = -1LL;
uint8_t x611 = 3U;
static volatile uint16_t x613 = UINT16_MAX;
uint32_t x614 = UINT32_MAX;
static volatile int16_t x620 = INT16_MIN;
int32_t x621 = INT32_MAX;
volatile int32_t x624 = -1;
static int8_t x626 = INT8_MAX;
int64_t x627 = INT64_MIN;
int64_t x629 = INT64_MIN;
int32_t x631 = INT32_MIN;
int32_t x637 = INT32_MAX;
volatile int32_t x640 = -115322;
uint16_t x644 = 0U;
int64_t x648 = INT64_MIN;
volatile int64_t x656 = INT64_MIN;
int32_t x657 = -109682;
int32_t x658 = -15092;
int8_t x661 = INT8_MAX;
static int32_t x665 = -1;
uint16_t x675 = 4355U;
int64_t x681 = 5033LL;
int16_t x686 = INT16_MIN;
static volatile int16_t x688 = -5;
int64_t x701 = INT64_MAX;
static volatile uint64_t x702 = 356538LLU;
int16_t x710 = 1;
int16_t x711 = -1;
int32_t t175 = -124;
uint64_t x727 = 2543336899LLU;
uint64_t t176 = 13LLU;
static int32_t x743 = INT32_MAX;
volatile int16_t x748 = INT16_MAX;
static int64_t x752 = -1LL;
int64_t x756 = INT64_MIN;
static uint16_t x757 = UINT16_MAX;
static int64_t x761 = -43361734135LL;
static uint32_t x762 = UINT32_MAX;
volatile int32_t t185 = -36;
static volatile int64_t x768 = 393507624LL;
int64_t x777 = -1LL;
int32_t x780 = -1;
volatile int8_t x786 = 0;
int8_t x793 = 22;
int64_t x797 = -1LL;
uint32_t x800 = 8964U;
int8_t x807 = INT8_MIN;
uint16_t x808 = UINT16_MAX;
int16_t x810 = -54;
int32_t x813 = INT32_MAX;
static uint16_t x818 = 16510U;
uint32_t x819 = 0U;


void f0(void) {
    	static int8_t x1 = 17;
	static uint32_t x2 = 125549U;
	static int64_t x4 = INT64_MAX;
	int64_t t0 = -9892222LL;

    t0 = ((x1!=x2)%(x3^x4));

    if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = UINT64_MAX;
	int64_t x6 = INT64_MIN;
	static int8_t x8 = INT8_MIN;
	int32_t t1 = -30667645;

    t1 = ((x5!=x6)%(x7^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MAX;
	uint64_t x11 = 70320883LLU;
	uint64_t t2 = 475917059355852763LLU;

    t2 = ((x9!=x10)%(x11^x12));

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x13 = -1;
	int64_t x14 = -1LL;
	int64_t x15 = INT64_MIN;
	volatile int64_t t3 = 790447509730556672LL;

    t3 = ((x13!=x14)%(x15^x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	uint64_t x19 = 45LLU;
	volatile uint64_t t4 = 11805388713LLU;

    t4 = ((x17!=x18)%(x19^x20));

    if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 5553U;
	int8_t x22 = INT8_MIN;
	volatile int8_t x23 = 5;

    t5 = ((x21!=x22)%(x23^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = INT8_MIN;
	volatile int32_t x28 = -1;
	int32_t t6 = -275559;

    t6 = ((x25!=x26)%(x27^x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = 559298494091LL;
	uint64_t x31 = 68081260342LLU;
	int32_t x32 = INT32_MAX;
	volatile uint64_t t7 = 3094390247LLU;

    t7 = ((x29!=x30)%(x31^x32));

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 99155092261450LLU;
	static volatile int32_t x34 = INT32_MIN;
	static uint8_t x35 = UINT8_MAX;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = -95310;

    t8 = ((x33!=x34)%(x35^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = INT32_MAX;
	volatile int8_t x39 = 1;
	volatile int32_t t9 = -469916;

    t9 = ((x37!=x38)%(x39^x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = -1;
	int16_t x43 = INT16_MIN;
	int64_t x44 = INT64_MIN;
	static int64_t t10 = -7594047114560LL;

    t10 = ((x41!=x42)%(x43^x44));

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x45 = 504U;
	int64_t x47 = INT64_MIN;
	volatile int64_t t11 = -258245350059918LL;

    t11 = ((x45!=x46)%(x47^x48));

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -248768985;

    t12 = ((x49!=x50)%(x51^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = INT64_MAX;
	uint16_t x54 = UINT16_MAX;
	uint16_t x55 = 584U;
	int8_t x56 = INT8_MIN;

    t13 = ((x53!=x54)%(x55^x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x57 = 5013114023LLU;
	uint16_t x58 = 760U;
	uint16_t x59 = 0U;
	volatile int16_t x60 = -1;
	volatile int32_t t14 = -156550369;

    t14 = ((x57!=x58)%(x59^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x61 = 3LLU;
	static int32_t x62 = INT32_MIN;
	int64_t x63 = -108986720732915511LL;
	int32_t x64 = INT32_MIN;
	static int64_t t15 = 465135436502LL;

    t15 = ((x61!=x62)%(x63^x64));

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 1U;
	int64_t x66 = INT64_MAX;
	static uint16_t x67 = UINT16_MAX;
	static int32_t x68 = INT32_MIN;
	int32_t t16 = -392347230;

    t16 = ((x65!=x66)%(x67^x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int64_t x70 = -63593391250593LL;
	static uint32_t x71 = 2430U;
	uint16_t x72 = 1673U;

    t17 = ((x69!=x70)%(x71^x72));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 1113122U;
	static int8_t x75 = 0;
	int32_t t18 = 4;

    t18 = ((x73!=x74)%(x75^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 1;
	int16_t x78 = 40;
	static int32_t x79 = -1;
	static volatile uint8_t x80 = 1U;
	int32_t t19 = 293429846;

    t19 = ((x77!=x78)%(x79^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	int64_t x84 = 16083962679653LL;
	int64_t t20 = 107686896902401398LL;

    t20 = ((x81!=x82)%(x83^x84));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = 181119114;
	static int64_t x87 = -3161693907661LL;
	volatile int64_t t21 = 75936918LL;

    t21 = ((x85!=x86)%(x87^x88));

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -371323147442261LL;
	int32_t x90 = INT32_MIN;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t t22 = -5;

    t22 = ((x89!=x90)%(x91^x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	static int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MAX;
	static int8_t x96 = -1;
	static int32_t t23 = 7082959;

    t23 = ((x93!=x94)%(x95^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 1;
	uint32_t x99 = UINT32_MAX;
	int16_t x100 = INT16_MAX;

    t24 = ((x97!=x98)%(x99^x100));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MAX;
	uint64_t x103 = 411554890535245807LLU;

    t25 = ((x101!=x102)%(x103^x104));

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MAX;
	int8_t x106 = INT8_MIN;
	static volatile int64_t t26 = 998503LL;

    t26 = ((x105!=x106)%(x107^x108));

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 0;
	static int32_t x110 = 7444;
	int32_t x112 = INT32_MIN;
	volatile int64_t t27 = 118440LL;

    t27 = ((x109!=x110)%(x111^x112));

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	static int64_t t28 = -1LL;

    t28 = ((x113!=x114)%(x115^x116));

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = INT64_MAX;
	volatile uint16_t x118 = 13571U;
	uint32_t x119 = UINT32_MAX;
	uint32_t t29 = 84U;

    t29 = ((x117!=x118)%(x119^x120));

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x121 = 3795U;
	int64_t x123 = INT64_MAX;
	int32_t x124 = INT32_MIN;
	static volatile int64_t t30 = 1042LL;

    t30 = ((x121!=x122)%(x123^x124));

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = INT8_MIN;
	uint16_t x126 = UINT16_MAX;
	static uint8_t x127 = 38U;
	static volatile int16_t x128 = 146;

    t31 = ((x125!=x126)%(x127^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = -224;
	int64_t x130 = INT64_MIN;
	static volatile uint32_t x131 = UINT32_MAX;
	volatile int64_t x132 = 309476542871LL;
	static volatile int64_t t32 = 5LL;

    t32 = ((x129!=x130)%(x131^x132));

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x134 = UINT64_MAX;
	int64_t x135 = -1LL;
	int64_t x136 = -167886797LL;
	volatile int64_t t33 = 1186741664818903LL;

    t33 = ((x133!=x134)%(x135^x136));

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x138 = 375840LLU;
	volatile int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -3365941629667370LL;

    t34 = ((x137!=x138)%(x139^x140));

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = 2267U;
	volatile int8_t x143 = INT8_MAX;
	int32_t t35 = -491;

    t35 = ((x141!=x142)%(x143^x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MAX;
	int8_t x147 = 1;
	int64_t x148 = -1LL;
	volatile int64_t t36 = -206943683526LL;

    t36 = ((x145!=x146)%(x147^x148));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -4;
	volatile int16_t x151 = INT16_MAX;
	uint64_t x152 = 1875581360608LLU;
	uint64_t t37 = 641LLU;

    t37 = ((x149!=x150)%(x151^x152));

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int8_t x155 = -1;

    t38 = ((x153!=x154)%(x155^x156));

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 0U;
	int16_t x159 = INT16_MIN;
	volatile uint16_t x160 = 319U;
	volatile int32_t t39 = 12018281;

    t39 = ((x157!=x158)%(x159^x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x161 = 55LLU;
	static int8_t x162 = -2;
	uint32_t x163 = 723460913U;
	int8_t x164 = -4;
	volatile uint32_t t40 = 398U;

    t40 = ((x161!=x162)%(x163^x164));

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -4;
	static uint16_t x167 = 5170U;
	static uint32_t x168 = 2822U;
	uint32_t t41 = 1511924U;

    t41 = ((x165!=x166)%(x167^x168));

    if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	volatile int8_t x171 = -1;
	volatile uint32_t x172 = 130302U;
	volatile uint32_t t42 = 4327390U;

    t42 = ((x169!=x170)%(x171^x172));

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x174 = -1LL;
	int32_t x175 = -3319;
	static uint16_t x176 = 14U;

    t43 = ((x173!=x174)%(x175^x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x178 = 58;
	int16_t x180 = -1;
	int32_t t44 = -1850;

    t44 = ((x177!=x178)%(x179^x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = INT16_MIN;
	static int32_t x184 = INT32_MIN;

    t45 = ((x181!=x182)%(x183^x184));

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 0U;
	int16_t x186 = INT16_MIN;
	static volatile int16_t x187 = 721;
	int32_t x188 = INT32_MIN;
	int32_t t46 = -19759558;

    t46 = ((x185!=x186)%(x187^x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = -1LL;
	int32_t x192 = INT32_MIN;

    t47 = ((x189!=x190)%(x191^x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x193 = UINT64_MAX;
	static volatile uint64_t x194 = 164733LLU;
	int32_t t48 = 12536347;

    t48 = ((x193!=x194)%(x195^x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x197 = 28917U;
	uint64_t x198 = UINT64_MAX;
	volatile int8_t x199 = -1;
	static uint64_t x200 = 101496499177014LLU;
	uint64_t t49 = 1640LLU;

    t49 = ((x197!=x198)%(x199^x200));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x202 = INT16_MIN;
	int8_t x204 = INT8_MAX;
	int32_t t50 = -334514;

    t50 = ((x201!=x202)%(x203^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 7;
	static uint64_t x206 = UINT64_MAX;
	static uint16_t x207 = UINT16_MAX;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = 251492558;

    t51 = ((x205!=x206)%(x207^x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	static volatile uint64_t x210 = UINT64_MAX;
	static int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MAX;

    t52 = ((x209!=x210)%(x211^x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	uint16_t x214 = 0U;
	int16_t x215 = -1;
	uint32_t x216 = 3800767U;
	static volatile uint32_t t53 = 455050163U;

    t53 = ((x213!=x214)%(x215^x216));

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 3;
	int64_t x218 = -89788391LL;
	static int32_t x219 = INT32_MIN;
	static int64_t x220 = INT64_MAX;
	static int64_t t54 = 4875118567838290LL;

    t54 = ((x217!=x218)%(x219^x220));

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 2245953107LLU;
	uint64_t x222 = UINT64_MAX;
	int8_t x223 = INT8_MIN;

    t55 = ((x221!=x222)%(x223^x224));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -887;
	uint16_t x226 = 98U;
	volatile int32_t x227 = 11755622;
	static int8_t x228 = INT8_MIN;
	int32_t t56 = 200076;

    t56 = ((x225!=x226)%(x227^x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int64_t x230 = 7266530864937LL;
	int64_t x231 = -40LL;
	int16_t x232 = INT16_MIN;
	static int64_t t57 = 203129515152489113LL;

    t57 = ((x229!=x230)%(x231^x232));

    if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x236 = 56;
	static volatile int32_t t58 = -14;

    t58 = ((x233!=x234)%(x235^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x237 = -1;
	int8_t x238 = 20;
	static uint16_t x239 = 441U;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t59 = 1252643LLU;

    t59 = ((x237!=x238)%(x239^x240));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	volatile int32_t x242 = INT32_MIN;
	int8_t x243 = -1;
	uint64_t t60 = 2835052144036575462LLU;

    t60 = ((x241!=x242)%(x243^x244));

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 23;
	static int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MAX;
	int32_t x248 = INT32_MIN;

    t61 = ((x245!=x246)%(x247^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MIN;
	static volatile uint32_t x251 = 9018730U;

    t62 = ((x249!=x250)%(x251^x252));

    if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = UINT8_MAX;
	int64_t x254 = INT64_MIN;
	int8_t x256 = -1;
	int32_t t63 = -1001081545;

    t63 = ((x253!=x254)%(x255^x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x258 = -32;
	int64_t x259 = -6085LL;

    t64 = ((x257!=x258)%(x259^x260));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 145825;

    t65 = ((x261!=x262)%(x263^x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x268 = INT32_MAX;
	volatile int32_t t66 = -1210;

    t66 = ((x265!=x266)%(x267^x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	int64_t x270 = -1LL;
	static int32_t x271 = INT32_MIN;
	uint64_t x272 = 30268LLU;
	volatile uint64_t t67 = 7402755488976LLU;

    t67 = ((x269!=x270)%(x271^x272));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -137317110474997LL;
	static volatile int8_t x274 = -1;
	static int64_t x275 = INT64_MAX;
	int32_t x276 = 1194535;
	volatile int64_t t68 = 156783LL;

    t68 = ((x273!=x274)%(x275^x276));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = UINT64_MAX;
	volatile int64_t x278 = INT64_MIN;
	static volatile int64_t x279 = INT64_MIN;
	uint64_t t69 = 102710896235LLU;

    t69 = ((x277!=x278)%(x279^x280));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x282 = 114U;
	uint16_t x283 = UINT16_MAX;
	uint8_t x284 = 74U;
	static int32_t t70 = -588898;

    t70 = ((x281!=x282)%(x283^x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	uint16_t x288 = 673U;
	static volatile int32_t t71 = 3792;

    t71 = ((x285!=x286)%(x287^x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x294 = 311;
	static uint32_t x295 = UINT32_MAX;
	int64_t x296 = 30000739646440LL;
	static volatile int64_t t72 = 1987327392721LL;

    t72 = ((x293!=x294)%(x295^x296));

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = -1LL;
	static int64_t x299 = -1LL;
	volatile int64_t t73 = -1LL;

    t73 = ((x297!=x298)%(x299^x300));

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = 264161U;
	uint32_t x302 = UINT32_MAX;
	volatile int16_t x303 = INT16_MIN;
	volatile uint32_t x304 = 409691U;

    t74 = ((x301!=x302)%(x303^x304));

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = INT64_MAX;
	int16_t x306 = 10292;
	int32_t x307 = 4;
	uint64_t x308 = 261233519LLU;

    t75 = ((x305!=x306)%(x307^x308));

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x309 = INT16_MIN;
	static int16_t x310 = 0;
	static volatile int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t76 = 1790;

    t76 = ((x309!=x310)%(x311^x312));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = INT16_MIN;
	int16_t x314 = -1;

    t77 = ((x313!=x314)%(x315^x316));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x317 = INT8_MIN;
	uint8_t x318 = 24U;
	int64_t x319 = -1LL;
	uint16_t x320 = 131U;
	static volatile int64_t t78 = 171LL;

    t78 = ((x317!=x318)%(x319^x320));

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x322 = INT64_MAX;
	static int16_t x323 = -1;
	uint16_t x324 = 0U;
	volatile int32_t t79 = 3460;

    t79 = ((x321!=x322)%(x323^x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	volatile uint8_t x327 = UINT8_MAX;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t80 = 204;

    t80 = ((x325!=x326)%(x327^x328));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = -834;
	volatile int16_t x330 = -1;
	volatile int32_t x332 = -1542910;

    t81 = ((x329!=x330)%(x331^x332));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x333 = INT64_MIN;
	uint64_t x335 = UINT64_MAX;
	uint32_t x336 = UINT32_MAX;
	uint64_t t82 = 127289019623LLU;

    t82 = ((x333!=x334)%(x335^x336));

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x338 = -1;
	static int8_t x339 = -1;
	static volatile int8_t x340 = -6;
	volatile int32_t t83 = -122128850;

    t83 = ((x337!=x338)%(x339^x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x341 = INT16_MIN;
	static uint32_t x342 = 407344U;
	static int32_t x343 = INT32_MIN;
	static volatile uint8_t x344 = 6U;
	int32_t t84 = -12012185;

    t84 = ((x341!=x342)%(x343^x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MAX;
	volatile int64_t x347 = -647LL;
	int8_t x348 = 28;
	int64_t t85 = 0LL;

    t85 = ((x345!=x346)%(x347^x348));

    if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x349 = 2080220871089LLU;
	static volatile int32_t x350 = 56009;
	volatile uint16_t x351 = 10696U;
	static uint32_t x352 = 8388U;

    t86 = ((x349!=x350)%(x351^x352));

    if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x355 = UINT64_MAX;
	volatile int32_t x356 = INT32_MIN;

    t87 = ((x353!=x354)%(x355^x356));

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x357 = INT64_MIN;
	static int64_t x358 = 7225536919441LL;
	static uint8_t x359 = 40U;
	static volatile uint32_t x360 = 476009U;
	static uint32_t t88 = 11042U;

    t88 = ((x357!=x358)%(x359^x360));

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x361 = UINT8_MAX;
	int32_t x362 = INT32_MAX;
	volatile int8_t x363 = -8;
	static uint8_t x364 = 1U;
	static int32_t t89 = -37887680;

    t89 = ((x361!=x362)%(x363^x364));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MAX;
	uint16_t x367 = 323U;
	volatile uint32_t t90 = 1895136U;

    t90 = ((x365!=x366)%(x367^x368));

    if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = INT32_MAX;
	int64_t x371 = -2297614092LL;
	uint32_t x372 = 102434629U;

    t91 = ((x369!=x370)%(x371^x372));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = INT64_MAX;
	int32_t x374 = INT32_MAX;
	int8_t x376 = INT8_MIN;
	int32_t t92 = -33175881;

    t92 = ((x373!=x374)%(x375^x376));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x378 = INT32_MIN;
	uint64_t x379 = 14085023068455875LLU;
	static int16_t x380 = INT16_MIN;
	static volatile uint64_t t93 = 1819678265312LLU;

    t93 = ((x377!=x378)%(x379^x380));

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x381 = 7744418295521LLU;
	int16_t x383 = -7155;
	int16_t x384 = 57;
	volatile int32_t t94 = -248;

    t94 = ((x381!=x382)%(x383^x384));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x385 = 4;
	static volatile int64_t x386 = INT64_MIN;
	static int64_t x387 = -1LL;
	uint32_t x388 = 53695U;
	int64_t t95 = 39451219LL;

    t95 = ((x385!=x386)%(x387^x388));

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x390 = 1236;
	uint16_t x391 = 3137U;
	static volatile uint32_t x392 = UINT32_MAX;
	static uint32_t t96 = 246452912U;

    t96 = ((x389!=x390)%(x391^x392));

    if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x393 = 7U;
	int16_t x395 = -1;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t97 = 2444026;

    t97 = ((x393!=x394)%(x395^x396));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = INT32_MIN;
	volatile uint32_t x398 = 182125U;
	int16_t x399 = -3;
	int8_t x400 = 3;
	static int32_t t98 = -6588330;

    t98 = ((x397!=x398)%(x399^x400));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x401 = INT16_MAX;
	int64_t x402 = -1LL;
	int8_t x403 = 28;
	static volatile int16_t x404 = INT16_MAX;
	int32_t t99 = 9;

    t99 = ((x401!=x402)%(x403^x404));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x409 = -7;
	int64_t x410 = -164899766100LL;
	int32_t x411 = 30875;
	volatile int32_t t100 = 43589;

    t100 = ((x409!=x410)%(x411^x412));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x413 = 3LLU;
	int16_t x414 = INT16_MIN;
	int16_t x415 = -1;
	int16_t x416 = 6;
	int32_t t101 = 1048;

    t101 = ((x413!=x414)%(x415^x416));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x417 = -1;
	volatile uint8_t x418 = 6U;
	int32_t x419 = 14228776;
	uint16_t x420 = UINT16_MAX;
	static int32_t t102 = 118;

    t102 = ((x417!=x418)%(x419^x420));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x421 = -1;
	volatile int8_t x423 = -1;
	int32_t x424 = INT32_MIN;
	volatile int32_t t103 = 1559484;

    t103 = ((x421!=x422)%(x423^x424));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x425 = 1229761U;
	static int16_t x426 = 7762;
	static int32_t x427 = INT32_MIN;
	int8_t x428 = 0;
	volatile int32_t t104 = 3370160;

    t104 = ((x425!=x426)%(x427^x428));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x430 = -110399;
	volatile uint32_t x431 = UINT32_MAX;
	static uint32_t t105 = 4090725U;

    t105 = ((x429!=x430)%(x431^x432));

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x433 = INT32_MIN;
	volatile int32_t x434 = 2120;
	int16_t x435 = INT16_MIN;
	uint8_t x436 = UINT8_MAX;
	static int32_t t106 = 2;

    t106 = ((x433!=x434)%(x435^x436));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x439 = 7377910668216426LL;
	int64_t t107 = 238LL;

    t107 = ((x437!=x438)%(x439^x440));

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x441 = INT8_MIN;
	volatile int16_t x443 = -5;
	int8_t x444 = INT8_MAX;
	volatile int32_t t108 = -177410;

    t108 = ((x441!=x442)%(x443^x444));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x445 = INT64_MAX;
	int64_t x446 = 257686LL;
	volatile uint8_t x447 = UINT8_MAX;
	uint8_t x448 = 23U;
	volatile int32_t t109 = 29763;

    t109 = ((x445!=x446)%(x447^x448));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x449 = -1873;
	uint16_t x450 = 397U;
	int64_t x451 = -16017198321033LL;
	int32_t x452 = 433139;
	int64_t t110 = 235830189257980894LL;

    t110 = ((x449!=x450)%(x451^x452));

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x453 = INT64_MIN;
	static uint16_t x454 = 198U;
	uint64_t x455 = UINT64_MAX;
	uint16_t x456 = UINT16_MAX;
	volatile uint64_t t111 = 814381LLU;

    t111 = ((x453!=x454)%(x455^x456));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x458 = INT16_MAX;
	int8_t x459 = INT8_MAX;
	static int32_t t112 = -6856336;

    t112 = ((x457!=x458)%(x459^x460));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MAX;
	int16_t x463 = INT16_MIN;
	static int32_t x464 = INT32_MIN;

    t113 = ((x461!=x462)%(x463^x464));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x469 = 0U;
	volatile uint8_t x470 = 62U;
	uint16_t x471 = 188U;
	static volatile uint8_t x472 = 7U;

    t114 = ((x469!=x470)%(x471^x472));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x473 = INT8_MAX;
	uint32_t x474 = 42059U;
	uint8_t x475 = 7U;
	int32_t x476 = 638185876;
	volatile int32_t t115 = -203769105;

    t115 = ((x473!=x474)%(x475^x476));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x477 = 8569164U;
	volatile int16_t x478 = INT16_MIN;
	volatile uint8_t x479 = 0U;
	static uint64_t x480 = UINT64_MAX;
	uint64_t t116 = 3297557LLU;

    t116 = ((x477!=x478)%(x479^x480));

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x481 = INT32_MAX;
	int8_t x482 = INT8_MIN;
	int64_t x483 = INT64_MIN;
	uint32_t x484 = UINT32_MAX;
	int64_t t117 = 25382LL;

    t117 = ((x481!=x482)%(x483^x484));

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x485 = 884825490511434994LLU;
	volatile int32_t x486 = INT32_MIN;
	static int8_t x488 = INT8_MIN;
	int32_t t118 = -623819;

    t118 = ((x485!=x486)%(x487^x488));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = 23035614;
	int32_t x490 = INT32_MIN;
	int32_t x491 = -122274173;
	uint64_t x492 = 5403431405191LLU;
	uint64_t t119 = 116LLU;

    t119 = ((x489!=x490)%(x491^x492));

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x493 = 2040U;
	int8_t x496 = INT8_MIN;
	volatile int32_t t120 = 4374416;

    t120 = ((x493!=x494)%(x495^x496));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x498 = UINT8_MAX;
	int8_t x499 = INT8_MAX;
	volatile int8_t x500 = -2;
	int32_t t121 = -10;

    t121 = ((x497!=x498)%(x499^x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = INT16_MAX;
	uint16_t x502 = 4U;
	volatile int16_t x503 = INT16_MAX;
	static int32_t t122 = -329079;

    t122 = ((x501!=x502)%(x503^x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = -1LL;
	int16_t x506 = INT16_MIN;
	int32_t x507 = 262111;
	int64_t x508 = INT64_MAX;
	int64_t t123 = -87LL;

    t123 = ((x505!=x506)%(x507^x508));

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x510 = -1;
	int32_t x511 = 18895643;
	static int16_t x512 = INT16_MAX;
	int32_t t124 = 884372421;

    t124 = ((x509!=x510)%(x511^x512));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x513 = -6;
	int16_t x515 = -944;
	static volatile uint32_t x516 = UINT32_MAX;

    t125 = ((x513!=x514)%(x515^x516));

    if (t125 != 1U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x517 = UINT64_MAX;
	int64_t x518 = INT64_MAX;
	int32_t x520 = -1;
	volatile int32_t t126 = -1293346;

    t126 = ((x517!=x518)%(x519^x520));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x521 = 15130851U;
	static int8_t x522 = -1;
	volatile int32_t x523 = INT32_MIN;
	volatile uint32_t t127 = 19291422U;

    t127 = ((x521!=x522)%(x523^x524));

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x525 = 1673168947U;
	uint64_t x526 = UINT64_MAX;
	int32_t x527 = INT32_MIN;
	int16_t x528 = 14;
	volatile int32_t t128 = -50256286;

    t128 = ((x525!=x526)%(x527^x528));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x530 = INT64_MAX;
	int32_t x532 = INT32_MIN;

    t129 = ((x529!=x530)%(x531^x532));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x533 = 1437367335U;
	uint64_t x534 = UINT64_MAX;
	uint16_t x535 = 277U;
	int16_t x536 = 1;
	int32_t t130 = -13;

    t130 = ((x533!=x534)%(x535^x536));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x537 = 1;
	volatile uint32_t x538 = 24U;
	int8_t x539 = 13;
	int64_t x540 = -322343941764009LL;
	int64_t t131 = 5LL;

    t131 = ((x537!=x538)%(x539^x540));

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x541 = 479490205937LLU;
	static volatile int16_t x542 = INT16_MIN;
	volatile int64_t x543 = 14185924397948420LL;
	int8_t x544 = INT8_MIN;
	volatile int64_t t132 = 102LL;

    t132 = ((x541!=x542)%(x543^x544));

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x545 = UINT8_MAX;
	uint8_t x547 = UINT8_MAX;
	int32_t t133 = 250914;

    t133 = ((x545!=x546)%(x547^x548));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x549 = INT8_MIN;
	volatile int8_t x550 = -1;
	static volatile uint16_t x551 = UINT16_MAX;
	int8_t x552 = -1;

    t134 = ((x549!=x550)%(x551^x552));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x553 = -1LL;
	int64_t x555 = INT64_MIN;
	static int64_t t135 = -11067900133057LL;

    t135 = ((x553!=x554)%(x555^x556));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x557 = INT32_MAX;
	int32_t x558 = INT32_MAX;
	static int8_t x559 = INT8_MIN;
	volatile uint32_t x560 = 16351U;
	static uint32_t t136 = 0U;

    t136 = ((x557!=x558)%(x559^x560));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x561 = 1107549U;
	int8_t x562 = INT8_MIN;
	uint64_t x563 = 59488102265LLU;
	int32_t x564 = INT32_MAX;
	uint64_t t137 = 0LLU;

    t137 = ((x561!=x562)%(x563^x564));

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x567 = INT8_MAX;
	volatile uint32_t x568 = UINT32_MAX;
	uint32_t t138 = 14U;

    t138 = ((x565!=x566)%(x567^x568));

    if (t138 != 1U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = INT8_MAX;
	uint8_t x570 = 50U;
	volatile int8_t x571 = 0;
	volatile int8_t x572 = INT8_MAX;
	int32_t t139 = 0;

    t139 = ((x569!=x570)%(x571^x572));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x573 = INT64_MIN;
	uint64_t x574 = 3135572824854632LLU;
	static volatile int64_t x575 = INT64_MIN;
	uint16_t x576 = 0U;
	static volatile int64_t t140 = -417351485LL;

    t140 = ((x573!=x574)%(x575^x576));

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x577 = 2U;
	int64_t x578 = -31520103218170LL;
	uint16_t x579 = 311U;
	int32_t x580 = -1;
	volatile int32_t t141 = -121147;

    t141 = ((x577!=x578)%(x579^x580));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x582 = INT16_MIN;
	int16_t x583 = -1;
	static uint64_t x584 = 118746LLU;
	uint64_t t142 = 1536917628885918LLU;

    t142 = ((x581!=x582)%(x583^x584));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x585 = 0;
	uint16_t x587 = 769U;

    t143 = ((x585!=x586)%(x587^x588));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x590 = INT16_MIN;
	uint64_t x592 = 338025482148433LLU;
	volatile uint64_t t144 = 17LLU;

    t144 = ((x589!=x590)%(x591^x592));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x597 = INT8_MIN;
	uint64_t x598 = 71344930609LLU;
	int16_t x600 = INT16_MIN;
	static volatile int32_t t145 = -62565;

    t145 = ((x597!=x598)%(x599^x600));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x601 = INT64_MAX;
	volatile int64_t x604 = INT64_MAX;
	static int64_t t146 = 1425667945LL;

    t146 = ((x601!=x602)%(x603^x604));

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x605 = 444982346718321LLU;
	uint8_t x606 = 5U;
	uint64_t x607 = 7929LLU;
	static volatile int64_t x608 = -1LL;
	static uint64_t t147 = 465011283LLU;

    t147 = ((x605!=x606)%(x607^x608));

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x609 = INT16_MIN;
	int64_t x610 = -1LL;
	volatile int32_t x612 = 5328;
	volatile int32_t t148 = 19;

    t148 = ((x609!=x610)%(x611^x612));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x615 = -3;
	uint8_t x616 = UINT8_MAX;
	static int32_t t149 = -442556;

    t149 = ((x613!=x614)%(x615^x616));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x617 = 2U;
	static volatile int32_t x618 = -1;
	uint8_t x619 = 7U;
	static int32_t t150 = -2415;

    t150 = ((x617!=x618)%(x619^x620));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x622 = -1LL;
	static volatile uint16_t x623 = 23U;
	volatile int32_t t151 = -883156;

    t151 = ((x621!=x622)%(x623^x624));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x625 = INT8_MIN;
	uint16_t x628 = UINT16_MAX;
	volatile int64_t t152 = 826415153592221743LL;

    t152 = ((x625!=x626)%(x627^x628));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x630 = -1;
	uint8_t x632 = UINT8_MAX;
	volatile int32_t t153 = -51685689;

    t153 = ((x629!=x630)%(x631^x632));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x633 = 91LLU;
	volatile int64_t x634 = -1LL;
	volatile int16_t x635 = INT16_MAX;
	static uint8_t x636 = 11U;
	volatile int32_t t154 = -24219;

    t154 = ((x633!=x634)%(x635^x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x638 = 2151085395024831735LLU;
	static volatile uint32_t x639 = UINT32_MAX;
	uint32_t t155 = 379U;

    t155 = ((x637!=x638)%(x639^x640));

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x641 = 1;
	int16_t x642 = INT16_MIN;
	int16_t x643 = INT16_MAX;
	volatile int32_t t156 = 1346;

    t156 = ((x641!=x642)%(x643^x644));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x645 = -254;
	static volatile int32_t x646 = INT32_MAX;
	uint32_t x647 = UINT32_MAX;
	int64_t t157 = -657677LL;

    t157 = ((x645!=x646)%(x647^x648));

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x649 = INT16_MAX;
	uint32_t x650 = 390577U;
	static int32_t x651 = INT32_MIN;
	volatile int8_t x652 = -1;
	int32_t t158 = 120078499;

    t158 = ((x649!=x650)%(x651^x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = -1;
	uint16_t x654 = 3U;
	volatile int32_t x655 = -1;
	static int64_t t159 = 1236634119185071434LL;

    t159 = ((x653!=x654)%(x655^x656));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x659 = 22U;
	static uint64_t x660 = UINT64_MAX;
	static uint64_t t160 = 90854284153LLU;

    t160 = ((x657!=x658)%(x659^x660));

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x662 = 2248155372634527838LL;
	uint8_t x663 = 58U;
	volatile uint16_t x664 = 146U;
	int32_t t161 = 184;

    t161 = ((x661!=x662)%(x663^x664));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x666 = -16525914LL;
	uint8_t x667 = 8U;
	int16_t x668 = 584;
	volatile int32_t t162 = 3672534;

    t162 = ((x665!=x666)%(x667^x668));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x669 = -2212063667969456LL;
	static int32_t x670 = INT32_MIN;
	int16_t x671 = 2;
	static int16_t x672 = INT16_MAX;
	int32_t t163 = 910293;

    t163 = ((x669!=x670)%(x671^x672));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x673 = INT64_MAX;
	static int32_t x674 = -5;
	int32_t x676 = INT32_MIN;
	int32_t t164 = -267;

    t164 = ((x673!=x674)%(x675^x676));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x677 = -1;
	int32_t x678 = INT32_MIN;
	static int64_t x679 = -17255099630926775LL;
	volatile int16_t x680 = 0;
	int64_t t165 = -1302LL;

    t165 = ((x677!=x678)%(x679^x680));

    if (t165 != 1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x682 = -1;
	volatile int64_t x683 = INT64_MIN;
	int8_t x684 = INT8_MAX;
	static int64_t t166 = 2742161076315235LL;

    t166 = ((x681!=x682)%(x683^x684));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x685 = INT8_MIN;
	uint16_t x687 = 15589U;
	static int32_t t167 = -127013;

    t167 = ((x685!=x686)%(x687^x688));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x693 = INT8_MAX;
	volatile int16_t x694 = -1;
	static uint64_t x695 = 795321727LLU;
	int8_t x696 = -2;
	static volatile uint64_t t168 = 13740LLU;

    t168 = ((x693!=x694)%(x695^x696));

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x697 = 12U;
	int32_t x698 = -420035;
	uint16_t x699 = 31U;
	volatile int8_t x700 = 0;
	int32_t t169 = -5985;

    t169 = ((x697!=x698)%(x699^x700));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x703 = 1;
	volatile int16_t x704 = 3236;
	int32_t t170 = -19;

    t170 = ((x701!=x702)%(x703^x704));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x705 = -1;
	volatile int64_t x706 = INT64_MAX;
	int64_t x707 = -64097310LL;
	int32_t x708 = INT32_MIN;
	int64_t t171 = -3738723940392LL;

    t171 = ((x705!=x706)%(x707^x708));

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x709 = INT64_MAX;
	int64_t x712 = -7439352118LL;
	volatile int64_t t172 = -1LL;

    t172 = ((x709!=x710)%(x711^x712));

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x713 = 480663;
	int64_t x714 = -1LL;
	int8_t x715 = -1;
	static int64_t x716 = -97953326447LL;
	volatile int64_t t173 = -33311611044346609LL;

    t173 = ((x713!=x714)%(x715^x716));

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x717 = -45;
	static uint32_t x718 = 1003266U;
	int8_t x719 = INT8_MIN;
	uint8_t x720 = 13U;
	volatile int32_t t174 = -198;

    t174 = ((x717!=x718)%(x719^x720));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x721 = 422934802;
	volatile int64_t x722 = INT64_MAX;
	int16_t x723 = -489;
	int16_t x724 = 211;

    t175 = ((x721!=x722)%(x723^x724));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x725 = 1U;
	int32_t x726 = 0;
	int16_t x728 = INT16_MIN;

    t176 = ((x725!=x726)%(x727^x728));

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x729 = INT8_MIN;
	int8_t x730 = INT8_MAX;
	uint16_t x731 = UINT16_MAX;
	int16_t x732 = -1;
	volatile int32_t t177 = -12928713;

    t177 = ((x729!=x730)%(x731^x732));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x733 = INT16_MAX;
	int64_t x734 = -1LL;
	int32_t x735 = INT32_MIN;
	int8_t x736 = 8;
	static int32_t t178 = -16544120;

    t178 = ((x733!=x734)%(x735^x736));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = 2LL;
	uint32_t x738 = UINT32_MAX;
	static int8_t x739 = -2;
	int8_t x740 = -1;
	int32_t t179 = -5;

    t179 = ((x737!=x738)%(x739^x740));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x741 = 134413523;
	int8_t x742 = INT8_MIN;
	int16_t x744 = -269;
	static int32_t t180 = 70;

    t180 = ((x741!=x742)%(x743^x744));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x745 = UINT16_MAX;
	volatile uint64_t x746 = 570448743LLU;
	volatile int8_t x747 = -1;
	volatile int32_t t181 = -407;

    t181 = ((x745!=x746)%(x747^x748));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x749 = INT32_MIN;
	int8_t x750 = -25;
	volatile uint64_t x751 = 603587LLU;
	static uint64_t t182 = 13138883347LLU;

    t182 = ((x749!=x750)%(x751^x752));

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x753 = 3857586LLU;
	static int32_t x754 = INT32_MIN;
	static uint16_t x755 = UINT16_MAX;
	int64_t t183 = -133279941132531650LL;

    t183 = ((x753!=x754)%(x755^x756));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x758 = -1;
	uint32_t x759 = 3825U;
	static int64_t x760 = INT64_MIN;
	volatile int64_t t184 = 159039210919690732LL;

    t184 = ((x757!=x758)%(x759^x760));

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x763 = INT32_MIN;
	int8_t x764 = INT8_MIN;

    t185 = ((x761!=x762)%(x763^x764));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x765 = 0;
	uint64_t x766 = UINT64_MAX;
	volatile int8_t x767 = 0;
	static int64_t t186 = -1841705852753296LL;

    t186 = ((x765!=x766)%(x767^x768));

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x769 = UINT32_MAX;
	static volatile int16_t x770 = INT16_MIN;
	volatile uint64_t x771 = 221409LLU;
	int32_t x772 = INT32_MIN;
	uint64_t t187 = 1347345LLU;

    t187 = ((x769!=x770)%(x771^x772));

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x773 = INT16_MAX;
	static uint8_t x774 = UINT8_MAX;
	static int16_t x775 = INT16_MIN;
	volatile uint16_t x776 = 4U;
	int32_t t188 = 968025;

    t188 = ((x773!=x774)%(x775^x776));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x778 = -1LL;
	uint16_t x779 = 58U;
	int32_t t189 = 1098034;

    t189 = ((x777!=x778)%(x779^x780));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x781 = INT16_MIN;
	volatile int8_t x782 = INT8_MIN;
	static int64_t x783 = INT64_MIN;
	static volatile int8_t x784 = -29;
	static volatile int64_t t190 = 23009822781098554LL;

    t190 = ((x781!=x782)%(x783^x784));

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x785 = -1;
	int8_t x787 = -1;
	int64_t x788 = INT64_MIN;
	int64_t t191 = 39683034057LL;

    t191 = ((x785!=x786)%(x787^x788));

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x789 = 66058216U;
	int16_t x790 = INT16_MAX;
	volatile int32_t x791 = -66;
	uint64_t x792 = 1866242954LLU;
	uint64_t t192 = 0LLU;

    t192 = ((x789!=x790)%(x791^x792));

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x794 = 82581U;
	volatile uint8_t x795 = UINT8_MAX;
	static volatile int16_t x796 = -1;
	int32_t t193 = 42;

    t193 = ((x793!=x794)%(x795^x796));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x798 = 77500575658524927LL;
	uint8_t x799 = 0U;
	volatile uint32_t t194 = 572536U;

    t194 = ((x797!=x798)%(x799^x800));

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x801 = 31933083169558LLU;
	volatile int32_t x802 = INT32_MIN;
	int8_t x803 = -22;
	int32_t x804 = INT32_MIN;
	volatile int32_t t195 = 0;

    t195 = ((x801!=x802)%(x803^x804));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x805 = UINT16_MAX;
	int32_t x806 = INT32_MIN;
	volatile int32_t t196 = -17;

    t196 = ((x805!=x806)%(x807^x808));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x809 = UINT16_MAX;
	volatile uint64_t x811 = 10755399LLU;
	int8_t x812 = INT8_MIN;
	uint64_t t197 = 309697644835257LLU;

    t197 = ((x809!=x810)%(x811^x812));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x814 = INT8_MIN;
	int8_t x815 = INT8_MIN;
	uint16_t x816 = UINT16_MAX;
	static volatile int32_t t198 = -215747174;

    t198 = ((x813!=x814)%(x815^x816));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x817 = 238U;
	uint64_t x820 = 6LLU;
	volatile uint64_t t199 = 225LLU;

    t199 = ((x817!=x818)%(x819^x820));

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

