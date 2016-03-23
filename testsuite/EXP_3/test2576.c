
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

int16_t x4 = INT16_MIN;
static uint64_t x7 = UINT64_MAX;
uint8_t x11 = UINT8_MAX;
uint16_t x14 = 15U;
static int8_t x17 = INT8_MAX;
uint64_t x20 = 78384344497629590LLU;
int32_t x23 = INT32_MAX;
int64_t x24 = INT64_MAX;
uint8_t x29 = UINT8_MAX;
static int16_t x32 = INT16_MIN;
volatile int32_t t8 = -42;
uint8_t x57 = UINT8_MAX;
static uint32_t x63 = UINT32_MAX;
int64_t x65 = -292285364234391LL;
static int16_t x69 = -1;
uint16_t x70 = 3U;
volatile uint16_t x76 = UINT16_MAX;
int32_t x77 = -841408;
static int8_t x79 = INT8_MAX;
int64_t x91 = -1LL;
static uint16_t x97 = UINT16_MAX;
int64_t x98 = 816197420535625562LL;
static int16_t x99 = INT16_MAX;
uint32_t x113 = UINT32_MAX;
int32_t x121 = -502;
uint32_t t29 = 32U;
int16_t x125 = INT16_MAX;
static int16_t x129 = INT16_MAX;
volatile uint64_t x138 = 588969088713LLU;
uint8_t x146 = 1U;
int32_t x151 = INT32_MAX;
uint16_t x154 = UINT16_MAX;
int64_t x157 = INT64_MIN;
uint16_t x159 = 1U;
int8_t x161 = INT8_MAX;
int8_t x166 = -14;
volatile int64_t t40 = -34253LL;
int64_t x171 = -1584328LL;
volatile uint64_t x174 = UINT64_MAX;
int64_t t43 = 1396471721962840921LL;
static uint64_t t45 = 351399785299017489LLU;
static volatile uint8_t x189 = 89U;
int8_t x192 = 1;
volatile int64_t x193 = -1LL;
uint64_t t47 = 6LLU;
int8_t x206 = INT8_MIN;
int32_t t49 = 13603122;
static int64_t x211 = INT64_MAX;
int64_t x214 = INT64_MIN;
int8_t x223 = -1;
static int64_t x229 = -1LL;
uint8_t x233 = UINT8_MAX;
uint64_t x236 = 646346971LLU;
uint8_t x246 = 36U;
static int8_t x251 = INT8_MIN;
volatile uint32_t t59 = 48566U;
uint16_t x268 = 44U;
static uint64_t x270 = 7585999LLU;
volatile uint32_t x277 = 4509U;
int64_t x280 = -1LL;
int16_t x289 = 3618;
volatile uint32_t x292 = 8U;
int8_t x294 = 16;
int32_t x295 = 0;
static int32_t t67 = 507;
static volatile int8_t x301 = INT8_MIN;
uint64_t x303 = UINT64_MAX;
uint64_t x309 = 803829LLU;
static uint16_t x311 = UINT16_MAX;
int8_t x319 = 0;
static volatile int32_t t73 = -724;
int8_t x322 = -1;
int64_t x325 = 1934224024750LL;
static int16_t x345 = 0;
static int64_t t78 = 47491010LL;
volatile uint64_t x350 = UINT64_MAX;
int16_t x355 = -1;
static int16_t x359 = INT16_MIN;
uint64_t t82 = 8364470957001238669LLU;
int16_t x368 = INT16_MIN;
uint32_t x378 = 102134682U;
int16_t x379 = INT16_MIN;
int64_t x394 = INT64_MIN;
int32_t x400 = INT32_MIN;
uint32_t x407 = 0U;
uint32_t x409 = UINT32_MAX;
int32_t x414 = -1;
static volatile int8_t x419 = INT8_MIN;
static volatile int32_t t95 = -477758;
uint8_t x421 = 0U;
uint64_t x428 = 122953317500LLU;
static int32_t t98 = -53310;
int8_t x435 = 0;
int8_t x436 = 1;
int64_t t99 = 25769439207LL;
int64_t t100 = 1260706LL;
uint64_t x441 = 780286671LLU;
int16_t x443 = INT16_MAX;
uint64_t t102 = 547566LLU;
static volatile int64_t x456 = INT64_MIN;
uint8_t x458 = UINT8_MAX;
int32_t t105 = -173496;
uint16_t x461 = 27U;
static uint64_t x463 = 12894LLU;
uint64_t t106 = 5069683466445851049LLU;
static volatile uint64_t t107 = 104534435305198LLU;
int16_t x469 = INT16_MIN;
uint64_t x478 = 4121748934151240LLU;
volatile int16_t x480 = INT16_MIN;
volatile int64_t t111 = 258526607690419LL;
int64_t x485 = -1LL;
static int64_t t112 = -1487496252065LL;
int32_t x492 = 1516811;
int64_t t113 = -126379168987609LL;
static int64_t x494 = -1LL;
uint16_t x496 = 31U;
int16_t x509 = INT16_MIN;
uint16_t x512 = 5699U;
uint8_t x516 = 45U;
uint8_t x517 = UINT8_MAX;
static int8_t x518 = 12;
int32_t t119 = -10;
uint32_t x527 = 75379U;
int8_t x530 = INT8_MIN;
uint8_t x534 = 12U;
int64_t x549 = INT64_MIN;
uint64_t t125 = 28848926LLU;
uint64_t x554 = 137LLU;
static uint64_t t126 = 605347751LLU;
int32_t x559 = 141;
uint8_t x564 = 126U;
static volatile int8_t x566 = 0;
int8_t x568 = -15;
static volatile int32_t t130 = 1;
volatile uint32_t x585 = UINT32_MAX;
uint64_t x593 = 10109808204LLU;
int8_t x596 = 12;
volatile uint8_t x599 = 23U;
int16_t x602 = -1;
int64_t x611 = INT64_MAX;
int8_t x612 = -56;
int32_t t140 = 30033711;
uint64_t x627 = 300255586879094LLU;
uint64_t t143 = 38646505213381LLU;
uint64_t x638 = 20193239679340998LLU;
static int16_t x642 = INT16_MIN;
volatile int16_t x644 = INT16_MAX;
uint16_t x652 = 244U;
int32_t x656 = INT32_MIN;
int64_t x657 = INT64_MIN;
int8_t x658 = INT8_MIN;
int16_t x659 = INT16_MIN;
static uint32_t x663 = UINT32_MAX;
int8_t x665 = INT8_MIN;
int64_t x667 = -1LL;
static volatile int64_t t150 = -136286787925LL;
static int64_t x672 = 672266135690LL;
uint64_t t151 = 5907659451190LLU;
int32_t x680 = 825;
int8_t x689 = INT8_MIN;
volatile int32_t x691 = INT32_MIN;
volatile int8_t x692 = INT8_MIN;
int64_t x693 = -6226831LL;
int64_t x695 = INT64_MIN;
static volatile uint64_t t158 = 44LLU;
uint8_t x705 = 77U;
int32_t x707 = -1;
int16_t x710 = -6;
uint32_t x714 = 1U;
int64_t x717 = 33574905LL;
uint16_t x719 = 1274U;
volatile int16_t x728 = 14931;
int8_t x732 = INT8_MIN;
static int64_t x738 = 17760249911037LL;
int64_t x742 = INT64_MIN;
volatile uint64_t x749 = UINT64_MAX;
volatile uint64_t t169 = 317636809979015LLU;
static int8_t x765 = 7;
static uint64_t x767 = 677LLU;
int16_t x769 = -1;
int64_t x774 = 19LL;
volatile uint16_t x780 = UINT16_MAX;
volatile int64_t t174 = 494205216822401LL;
static int16_t x787 = -1;
static int8_t x811 = -1;
int16_t x812 = INT16_MIN;
int64_t x822 = -12498LL;
int8_t x826 = INT8_MIN;
static int16_t x831 = -43;
int8_t x845 = INT8_MIN;
uint8_t x853 = 28U;
static int64_t x856 = 1092995539914LL;
int64_t x858 = INT64_MIN;
uint64_t x860 = 3384995792063LLU;
uint64_t x862 = 304483681121LLU;
static uint32_t x863 = 989661526U;
static int32_t x864 = -33492839;
uint16_t x865 = 762U;
int32_t x866 = INT32_MAX;
int32_t t190 = 1300;
uint32_t x869 = UINT32_MAX;
int32_t x879 = -152;
volatile int8_t x893 = -3;
int64_t x895 = 235204377748LL;
volatile int64_t t196 = -39034041LL;
volatile int16_t x900 = INT16_MIN;
uint64_t t197 = 2LLU;
int32_t x904 = INT32_MIN;
int32_t x907 = 173;
uint32_t x908 = UINT32_MAX;


void f0(void) {
    	int8_t x1 = 7;
	int16_t x2 = -1;
	volatile uint32_t x3 = UINT32_MAX;
	volatile uint32_t t0 = 3251317U;

    t0 = ((x1-x2)^(x3^x4));

    if (t0 != 32759U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int64_t x6 = 11159123027273306LL;
	int16_t x8 = INT16_MAX;
	static uint64_t t1 = 99LLU;

    t1 = ((x5-x6)^(x7^x8));

    if (t1 != 11159123027286437LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 950057887U;
	volatile int16_t x10 = -1;
	int64_t x12 = -9490530LL;
	static volatile int64_t t2 = -91215LL;

    t2 = ((x9-x10)^(x11^x12));

    if (t2 != -942697279LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	uint32_t x15 = 8908U;
	int8_t x16 = 59;
	uint32_t t3 = 378395U;

    t3 = ((x13-x14)^(x15^x16));

    if (t3 != 4294958470U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -1LL;
	static int32_t x19 = -1;
	static volatile uint64_t t4 = 1550LLU;

    t4 = ((x17-x18)^(x19^x20));

    if (t4 != 18368359729211922153LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 427994U;
	volatile uint8_t x22 = 43U;
	volatile int64_t t5 = -1137LL;

    t5 = ((x21-x22)^(x23^x24));

    if (t5 != 9223372034707720111LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int64_t x26 = -1LL;
	int64_t x27 = -1LL;
	int8_t x28 = -1;
	int64_t t6 = 0LL;

    t6 = ((x25-x26)^(x27^x28));

    if (t6 != 32768LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x30 = -1;
	int16_t x31 = INT16_MIN;
	int32_t t7 = -35336;

    t7 = ((x29-x30)^(x31^x32));

    if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = -1;
	uint16_t x34 = 3567U;
	static volatile int32_t x35 = INT32_MIN;
	int32_t x36 = -221;

    t8 = ((x33-x34)^(x35^x36));

    if (t8 != -2147480269) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = -1LL;
	uint8_t x38 = UINT8_MAX;
	volatile uint32_t x39 = UINT32_MAX;
	static int32_t x40 = INT32_MIN;
	int64_t t9 = 1LL;

    t9 = ((x37-x38)^(x39^x40));

    if (t9 != -2147483393LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static volatile int8_t x42 = INT8_MIN;
	static int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 3919;

    t10 = ((x41-x42)^(x43^x44));

    if (t10 != -32641) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = 11433814;
	int64_t x46 = INT64_MAX;
	uint64_t x47 = 177647LLU;
	uint64_t x48 = 8687525907029728538LLU;
	volatile uint64_t t11 = 17605LLU;

    t11 = ((x45-x46)^(x47^x48));

    if (t11 != 17910897943878983586LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 90LLU;
	int8_t x50 = 14;
	static uint32_t x51 = UINT32_MAX;
	static volatile int8_t x52 = INT8_MIN;
	uint64_t t12 = 15960922177056LLU;

    t12 = ((x49-x50)^(x51^x52));

    if (t12 != 51LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = 4020;
	static int8_t x54 = 48;
	int16_t x55 = INT16_MIN;
	volatile int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 85;

    t13 = ((x53-x54)^(x55^x56));

    if (t13 != 28676) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x58 = -87;
	volatile int16_t x59 = 4;
	volatile int64_t x60 = -1LL;
	int64_t t14 = 2858805LL;

    t14 = ((x57-x58)^(x59^x60));

    if (t14 != -339LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 3;
	uint64_t x62 = UINT64_MAX;
	static int16_t x64 = -176;
	volatile uint64_t t15 = 52952119190065428LLU;

    t15 = ((x61-x62)^(x63^x64));

    if (t15 != 171LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	uint64_t x67 = 84471841LLU;
	int64_t x68 = -164919239974385043LL;
	static uint64_t t16 = 9341807056LLU;

    t16 = ((x65-x66)^(x67^x68));

    if (t16 != 164628743011888549LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x71 = -1;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 14668562545804200LLU;

    t17 = ((x69-x70)^(x71^x72));

    if (t17 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 52183804562LLU;
	int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MAX;
	static uint64_t t18 = 244004030LLU;

    t18 = ((x73-x74)^(x75^x76));

    if (t18 != 9223372089038558482LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x78 = UINT8_MAX;
	volatile uint32_t x80 = 10U;
	static uint32_t t19 = 5568U;

    t19 = ((x77-x78)^(x79^x80));

    if (t19 != 4294125620U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 19643;
	int32_t x82 = 6;
	static int8_t x83 = INT8_MAX;
	int8_t x84 = INT8_MAX;
	static int32_t t20 = 11;

    t20 = ((x81-x82)^(x83^x84));

    if (t20 != 19637) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 8122U;
	int16_t x86 = INT16_MAX;
	volatile int16_t x87 = INT16_MIN;
	uint32_t x88 = 124668714U;
	volatile uint32_t t21 = 5628461U;

    t21 = ((x85-x86)^(x87^x88));

    if (t21 != 124671121U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x89 = 28949884786LLU;
	int64_t x90 = -345LL;
	int16_t x92 = INT16_MIN;
	static volatile uint64_t t22 = 7357068556LLU;

    t22 = ((x89-x90)^(x91^x92));

    if (t22 != 28949892916LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = -1;
	int16_t x94 = INT16_MIN;
	volatile uint16_t x95 = 11634U;
	int32_t x96 = -600;
	int32_t t23 = -1;

    t23 = ((x93-x94)^(x95^x96));

    if (t23 != -20699) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x100 = -336601635658LL;
	int64_t t24 = 33730078LL;

    t24 = ((x97-x98)^(x99^x100));

    if (t24 != 816197668922037228LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = 10269468;
	uint8_t x102 = 107U;
	int64_t x103 = INT64_MIN;
	volatile uint8_t x104 = UINT8_MAX;
	static int64_t t25 = 147700799243571571LL;

    t25 = ((x101-x102)^(x103^x104));

    if (t25 != -9223372036844506546LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	volatile uint64_t x107 = UINT64_MAX;
	int16_t x108 = INT16_MIN;
	volatile uint64_t t26 = 1056750475LLU;

    t26 = ((x105-x106)^(x107^x108));

    if (t26 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int8_t x110 = INT8_MIN;
	int16_t x111 = 0;
	int64_t x112 = 178768479129661586LL;
	volatile int64_t t27 = 1419LL;

    t27 = ((x109-x110)^(x111^x112));

    if (t27 != 178768479129661586LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x114 = 79U;
	int32_t x115 = INT32_MIN;
	static int16_t x116 = -1;
	uint32_t t28 = 1U;

    t28 = ((x113-x114)^(x115^x116));

    if (t28 != 2147483727U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x122 = 0;
	uint32_t x123 = 186079U;
	uint16_t x124 = 31U;

    t29 = ((x121-x122)^(x123^x124));

    if (t29 != 4294781130U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x126 = 25535923;
	uint8_t x127 = 2U;
	uint8_t x128 = 1U;
	int32_t t30 = 37;

    t30 = ((x125-x126)^(x127^x128));

    if (t30 != -25503153) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x130 = 1;
	static int16_t x131 = -1;
	uint16_t x132 = UINT16_MAX;
	int32_t t31 = -3461;

    t31 = ((x129-x130)^(x131^x132));

    if (t31 != -32770) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x133 = 26U;
	int8_t x134 = INT8_MAX;
	volatile int16_t x135 = -1;
	int32_t x136 = -1;
	volatile int32_t t32 = -1302;

    t32 = ((x133-x134)^(x135^x136));

    if (t32 != -101) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x137 = -1;
	int16_t x139 = -1793;
	uint16_t x140 = 7098U;
	volatile uint64_t t33 = 47864LLU;

    t33 = ((x137-x138)^(x139^x140));

    if (t33 != 588969085555LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	int32_t x142 = -1;
	static int32_t x143 = INT32_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t34 = 5LLU;

    t34 = ((x141-x142)^(x143^x144));

    if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x145 = -24;
	int64_t x147 = -31098LL;
	static int8_t x148 = INT8_MIN;
	volatile int64_t t35 = -371195444415917LL;

    t35 = ((x145-x146)^(x147^x148));

    if (t35 != -31007LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = 35;
	uint8_t x150 = UINT8_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t36 = 155651618;

    t36 = ((x149-x150)^(x151^x152));

    if (t36 != 219) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	volatile int32_t x155 = INT32_MIN;
	uint16_t x156 = UINT16_MAX;
	int32_t t37 = INT32_MAX;

    t37 = ((x153-x154)^(x155^x156));

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x158 = INT16_MIN;
	static int64_t x160 = INT64_MIN;
	int64_t t38 = 9707398LL;

    t38 = ((x157-x158)^(x159^x160));

    if (t38 != 32769LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x162 = UINT64_MAX;
	volatile uint64_t x163 = 2LLU;
	uint32_t x164 = 30685433U;
	volatile uint64_t t39 = 333392563121LLU;

    t39 = ((x161-x162)^(x163^x164));

    if (t39 != 30685307LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x165 = 4U;
	volatile int64_t x167 = 787642614280490LL;
	int64_t x168 = 3LL;

    t40 = ((x165-x166)^(x167^x168));

    if (t40 != 787642614280507LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x169 = UINT8_MAX;
	static int32_t x170 = -1952582;
	int64_t x172 = INT64_MAX;
	int64_t t41 = -6LL;

    t41 = ((x169-x170)^(x171^x172));

    if (t41 != -9223372036854390654LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x173 = 1U;
	int32_t x175 = INT32_MIN;
	volatile uint32_t x176 = UINT32_MAX;
	uint64_t t42 = 1046898356960LLU;

    t42 = ((x173-x174)^(x175^x176));

    if (t42 != 2147483645LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = 73849487LL;
	int32_t x178 = INT32_MIN;
	static int32_t x179 = INT32_MIN;
	static int32_t x180 = INT32_MIN;

    t43 = ((x177-x178)^(x179^x180));

    if (t43 != 2221333135LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = INT8_MIN;
	volatile int8_t x182 = 3;
	uint32_t x183 = 22614340U;
	volatile uint64_t x184 = 7904997LLU;
	static uint64_t t44 = 118176942933LLU;

    t44 = ((x181-x182)^(x183^x184));

    if (t44 != 18446744073690575068LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x185 = 56796786U;
	int8_t x186 = INT8_MIN;
	static int64_t x187 = INT64_MIN;
	uint64_t x188 = UINT64_MAX;

    t45 = ((x185-x186)^(x187^x188));

    if (t45 != 9223372036797978893LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x190 = 379221863295819850LL;
	static int32_t x191 = INT32_MIN;
	int64_t t46 = 2LL;

    t46 = ((x189-x190)^(x191^x192));

    if (t46 != 379221865281937422LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x194 = 115082LLU;
	int8_t x195 = INT8_MIN;
	int8_t x196 = 0;

    t47 = ((x193-x194)^(x195^x196));

    if (t47 != 115189LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x201 = 28U;
	uint32_t x202 = UINT32_MAX;
	static uint16_t x203 = 5U;
	uint8_t x204 = 4U;
	volatile uint32_t t48 = 5788181U;

    t48 = ((x201-x202)^(x203^x204));

    if (t48 != 28U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MIN;
	static int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;

    t49 = ((x205-x206)^(x207^x208));

    if (t49 != 2147450880) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x209 = 372776847341908LLU;
	static int16_t x210 = INT16_MIN;
	volatile int32_t x212 = INT32_MIN;
	volatile uint64_t t50 = 697126LLU;

    t50 = ((x209-x210)^(x211^x212));

    if (t50 != 9223744812642895531LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = -1LL;
	int8_t x215 = 1;
	uint64_t x216 = 45237698194240893LLU;
	volatile uint64_t t51 = 3265905152LLU;

    t51 = ((x213-x214)^(x215^x216));

    if (t51 != 9178134338660534915LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MAX;
	int8_t x224 = INT8_MAX;
	static volatile uint32_t t52 = 434151U;

    t52 = ((x221-x222)^(x223^x224));

    if (t52 != 32640U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x225 = INT32_MIN;
	int64_t x226 = 5670493921LL;
	static int16_t x227 = -1;
	int16_t x228 = INT16_MAX;
	volatile int64_t t53 = 2556LL;

    t53 = ((x225-x226)^(x227^x228));

    if (t53 != 7817961759LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x230 = 13;
	int32_t x231 = INT32_MAX;
	uint32_t x232 = 6U;
	static int64_t t54 = 30526164LL;

    t54 = ((x229-x230)^(x231^x232));

    if (t54 != -2147483637LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x234 = -34;
	int8_t x235 = INT8_MAX;
	uint64_t t55 = 6155003787971LLU;

    t55 = ((x233-x234)^(x235^x236));

    if (t55 != 646347141LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x237 = INT16_MIN;
	uint64_t x238 = 477983868062615LLU;
	static volatile int64_t x239 = INT64_MIN;
	int16_t x240 = -1;
	uint64_t t56 = 45164641181LLU;

    t56 = ((x237-x238)^(x239^x240));

    if (t56 != 9223850020722871190LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x241 = 1;
	int32_t x242 = 10;
	int16_t x243 = 6971;
	int64_t x244 = INT64_MIN;
	int64_t t57 = 17956093709LL;

    t57 = ((x241-x242)^(x243^x244));

    if (t57 != 9223372036854768844LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x245 = -841153720;
	static uint16_t x247 = UINT16_MAX;
	int16_t x248 = INT16_MAX;
	int32_t t58 = -115137520;

    t58 = ((x245-x246)^(x247^x248));

    if (t58 != -841120988) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x249 = 365U;
	uint16_t x250 = 129U;
	uint8_t x252 = UINT8_MAX;

    t59 = ((x249-x250)^(x251^x252));

    if (t59 != 4294967187U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x257 = 28U;
	int32_t x258 = -147;
	uint16_t x259 = 5603U;
	static int32_t x260 = 1;
	int32_t t60 = -2018791;

    t60 = ((x257-x258)^(x259^x260));

    if (t60 != 5453) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x265 = 1650U;
	int8_t x266 = 1;
	int64_t x267 = INT64_MIN;
	volatile int64_t t61 = 199512801338313538LL;

    t61 = ((x265-x266)^(x267^x268));

    if (t61 != -9223372036854774179LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x269 = 171894362414021LLU;
	static int8_t x271 = INT8_MIN;
	int32_t x272 = 4763;
	volatile uint64_t t62 = 13342642LLU;

    t62 = ((x269-x270)^(x271^x272));

    if (t62 != 18446572179354728429LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x278 = 3U;
	int8_t x279 = INT8_MAX;
	int64_t t63 = 1535011750299LL;

    t63 = ((x277-x278)^(x279^x280));

    if (t63 != -4582LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x281 = UINT8_MAX;
	int8_t x282 = -1;
	static int32_t x283 = INT32_MIN;
	uint64_t x284 = 1LLU;
	static uint64_t t64 = 6753079586537LLU;

    t64 = ((x281-x282)^(x283^x284));

    if (t64 != 18446744071562068225LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	int64_t x287 = INT64_MIN;
	static uint16_t x288 = 212U;
	volatile int64_t t65 = 9112679966LL;

    t65 = ((x285-x286)^(x287^x288));

    if (t65 != 9223372036854775764LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x290 = INT8_MIN;
	volatile int16_t x291 = INT16_MAX;
	volatile uint32_t t66 = 728U;

    t66 = ((x289-x290)^(x291^x292));

    if (t66 != 29013U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x293 = -1;
	volatile int32_t x296 = INT32_MIN;

    t67 = ((x293-x294)^(x295^x296));

    if (t67 != 2147483631) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x297 = INT8_MIN;
	static uint8_t x298 = 2U;
	volatile int16_t x299 = INT16_MIN;
	uint8_t x300 = 2U;
	int32_t t68 = 9;

    t68 = ((x297-x298)^(x299^x300));

    if (t68 != 32636) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x302 = UINT32_MAX;
	int16_t x304 = 26;
	uint64_t t69 = 115622332224732019LLU;

    t69 = ((x301-x302)^(x303^x304));

    if (t69 != 18446744069414584420LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x305 = INT32_MIN;
	static volatile uint32_t x306 = 16U;
	volatile uint16_t x307 = UINT16_MAX;
	static uint16_t x308 = 0U;
	uint32_t t70 = 7312779U;

    t70 = ((x305-x306)^(x307^x308));

    if (t70 != 2147418127U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x310 = INT16_MIN;
	uint32_t x312 = UINT32_MAX;
	uint64_t t71 = 24826502205LLU;

    t71 = ((x309-x310)^(x311^x312));

    if (t71 != 4294165493LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x313 = INT16_MIN;
	int16_t x314 = -26;
	static int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MAX;
	static volatile int32_t t72 = 126395;

    t72 = ((x313-x314)^(x315^x316));

    if (t72 != 32741) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x317 = INT8_MIN;
	int16_t x318 = 103;
	static int16_t x320 = 0;

    t73 = ((x317-x318)^(x319^x320));

    if (t73 != -231) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x321 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	int64_t x324 = -1LL;
	int64_t t74 = 8LL;

    t74 = ((x321-x322)^(x323^x324));

    if (t74 != -2147450882LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x326 = 48U;
	static uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MAX;
	static volatile int64_t t75 = 179629675877LL;

    t75 = ((x325-x326)^(x327^x328));

    if (t75 != 9223370102630737022LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 6389U;
	int32_t x339 = -1;
	int16_t x340 = -1;
	volatile uint64_t t76 = 281155629518LLU;

    t76 = ((x337-x338)^(x339^x340));

    if (t76 != 18446744073709545226LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x341 = INT8_MIN;
	volatile int32_t x342 = -1;
	static uint64_t x343 = UINT64_MAX;
	uint64_t x344 = 13681LLU;
	static uint64_t t77 = 1342066747719418LLU;

    t77 = ((x341-x342)^(x343^x344));

    if (t77 != 13583LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x346 = -6;
	int8_t x347 = INT8_MAX;
	static int64_t x348 = INT64_MAX;

    t78 = ((x345-x346)^(x347^x348));

    if (t78 != 9223372036854775686LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x349 = -1;
	static uint64_t x351 = UINT64_MAX;
	int64_t x352 = INT64_MIN;
	volatile uint64_t t79 = 890596130690469867LLU;

    t79 = ((x349-x350)^(x351^x352));

    if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x353 = 464U;
	volatile int16_t x354 = INT16_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t80 = 2044;

    t80 = ((x353-x354)^(x355^x356));

    if (t80 != -2147451346) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x357 = 358U;
	int32_t x358 = -1;
	static volatile int32_t x360 = 28;
	int32_t t81 = -92368;

    t81 = ((x357-x358)^(x359^x360));

    if (t81 != -32389) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint64_t x361 = 30480698183926LLU;
	int32_t x362 = -174105;
	int64_t x363 = INT64_MIN;
	static int8_t x364 = -1;

    t82 = ((x361-x362)^(x363^x364));

    if (t82 != 9223341556156417776LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x365 = UINT64_MAX;
	static int16_t x366 = INT16_MIN;
	int64_t x367 = -1LL;
	volatile uint64_t t83 = 45675LLU;

    t83 = ((x365-x366)^(x367^x368));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x373 = INT32_MAX;
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	volatile int32_t t84 = 10949461;

    t84 = ((x373-x374)^(x375^x376));

    if (t84 != 32512) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x377 = -1;
	int32_t x380 = -10;
	volatile uint32_t t85 = 44756U;

    t85 = ((x377-x378)^(x379^x380));

    if (t85 != 4192859027U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x381 = -12915426580863LL;
	int16_t x382 = 5;
	int8_t x383 = INT8_MIN;
	int8_t x384 = 1;
	volatile int64_t t86 = -9868173907LL;

    t86 = ((x381-x382)^(x383^x384));

    if (t86 != 12915426580989LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x385 = 1;
	volatile int16_t x386 = INT16_MIN;
	static int16_t x387 = -306;
	static int8_t x388 = 23;
	volatile int32_t t87 = -19838970;

    t87 = ((x385-x386)^(x387^x388));

    if (t87 != -33064) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x389 = -1LL;
	static uint16_t x390 = UINT16_MAX;
	volatile int32_t x391 = INT32_MIN;
	int16_t x392 = 392;
	int64_t t88 = -270840LL;

    t88 = ((x389-x390)^(x391^x392));

    if (t88 != 2147418504LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x393 = INT64_MIN;
	static int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	int64_t t89 = 638301072LL;

    t89 = ((x393-x394)^(x395^x396));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x397 = 2U;
	uint8_t x398 = UINT8_MAX;
	int64_t x399 = -6LL;
	volatile int64_t t90 = -308769871199066010LL;

    t90 = ((x397-x398)^(x399^x400));

    if (t90 != -2147483399LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x401 = UINT32_MAX;
	volatile uint16_t x402 = 0U;
	volatile uint16_t x403 = 33U;
	int16_t x404 = -1;
	static volatile uint32_t t91 = 275U;

    t91 = ((x401-x402)^(x403^x404));

    if (t91 != 33U) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x405 = 10177U;
	uint32_t x406 = 836U;
	int32_t x408 = 3733;
	static volatile uint32_t t92 = 1995538U;

    t92 = ((x405-x406)^(x407^x408));

    if (t92 != 10984U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x410 = INT8_MAX;
	static int8_t x411 = 1;
	int32_t x412 = INT32_MAX;
	uint32_t t93 = 124U;

    t93 = ((x409-x410)^(x411^x412));

    if (t93 != 2147483774U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x413 = INT16_MIN;
	uint16_t x415 = 21124U;
	uint32_t x416 = 0U;
	uint32_t t94 = 136218U;

    t94 = ((x413-x414)^(x415^x416));

    if (t94 != 4294955653U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x417 = INT16_MIN;
	static uint16_t x418 = UINT16_MAX;
	uint16_t x420 = 957U;

    t95 = ((x417-x418)^(x419^x420));

    if (t95 != 97340) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x422 = 3035U;
	volatile int8_t x423 = -1;
	int16_t x424 = INT16_MAX;
	int32_t t96 = -31;

    t96 = ((x421-x422)^(x423^x424));

    if (t96 != 29733) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x425 = INT8_MIN;
	int32_t x426 = -103033;
	static uint16_t x427 = 21U;
	volatile uint64_t t97 = 152LLU;

    t97 = ((x425-x426)^(x427^x428));

    if (t97 != 122953346448LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x429 = -24;
	int8_t x430 = -1;
	int8_t x431 = INT8_MAX;
	int32_t x432 = 1494378;

    t98 = ((x429-x430)^(x431^x432));

    if (t98 != -1494276) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x433 = UINT32_MAX;
	static int64_t x434 = 1422664949815007341LL;

    t99 = ((x433-x434)^(x435^x436));

    if (t99 != -1422664945520040045LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x437 = INT8_MAX;
	int64_t x438 = 2006415683027LL;
	int8_t x439 = -28;
	static volatile uint32_t x440 = 145261182U;

    t100 = ((x437-x438)^(x439^x440));

    if (t100 != -2009254514890LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x442 = 16LLU;
	uint8_t x444 = 50U;
	static volatile uint64_t t101 = 1459174150069962858LLU;

    t101 = ((x441-x442)^(x443^x444));

    if (t101 != 780289394LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x445 = INT64_MAX;
	uint8_t x446 = 0U;
	uint64_t x447 = UINT64_MAX;
	int16_t x448 = -1955;

    t102 = ((x445-x446)^(x447^x448));

    if (t102 != 9223372036854773853LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x449 = 0U;
	int32_t x450 = 465670;
	int32_t x451 = INT32_MIN;
	int16_t x452 = INT16_MIN;
	int32_t t103 = -61181731;

    t103 = ((x449-x450)^(x451^x452));

    if (t103 != -2146999046) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x453 = 3475U;
	volatile int64_t x454 = 74065685LL;
	uint64_t x455 = UINT64_MAX;
	volatile uint64_t t104 = 4114823746719076LLU;

    t104 = ((x453-x454)^(x455^x456));

    if (t104 != 9223372036928838017LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x457 = -63;
	int32_t x459 = -182525553;
	static int8_t x460 = 1;

    t105 = ((x457-x458)^(x459^x460));

    if (t105 != 182525772) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x462 = 1082078073287LLU;
	int64_t x464 = 621LL;

    t106 = ((x461-x462)^(x463^x464));

    if (t106 != 18446742991631474279LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x465 = 346913113341302846LLU;
	static uint64_t x466 = UINT64_MAX;
	volatile int8_t x467 = 14;
	int32_t x468 = -51;

    t107 = ((x465-x466)^(x467^x468));

    if (t107 != 18099830960368248828LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x470 = INT16_MAX;
	int8_t x471 = INT8_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t108 = -672;

    t108 = ((x469-x470)^(x471^x472));

    if (t108 != -2147418239) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x473 = 185685523U;
	static int8_t x474 = INT8_MIN;
	static int32_t x475 = -1085078;
	volatile uint32_t x476 = 6796U;
	static volatile uint32_t t109 = 1554660149U;

    t109 = ((x473-x474)^(x475^x476));

    if (t109 != 4110302581U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x477 = -6025;
	int8_t x479 = INT8_MIN;
	uint64_t t110 = 199023LLU;

    t110 = ((x477-x478)^(x479^x480));

    if (t110 != 18442622324775412655LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x481 = INT8_MIN;
	uint8_t x482 = 8U;
	int64_t x483 = INT64_MIN;
	uint32_t x484 = 16322U;

    t111 = ((x481-x482)^(x483^x484));

    if (t111 != 9223372036854759610LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x486 = INT16_MIN;
	volatile int64_t x487 = 3552648151972893LL;
	int64_t x488 = INT64_MIN;

    t112 = ((x485-x486)^(x487^x488));

    if (t112 != -9219819388702800926LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x489 = 320771;
	volatile int64_t x490 = INT64_MAX;
	volatile int64_t x491 = INT64_MIN;

    t113 = ((x489-x490)^(x491^x492));

    if (t113 != 1294351LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x493 = INT32_MIN;
	int16_t x495 = 0;
	int64_t t114 = 65787351022483LL;

    t114 = ((x493-x494)^(x495^x496));

    if (t114 != -2147483618LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x497 = -3576378;
	int32_t x498 = 7539440;
	int32_t x499 = -1;
	int16_t x500 = INT16_MIN;
	int32_t t115 = 2036;

    t115 = ((x497-x498)^(x499^x500));

    if (t115 != -11133655) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x505 = INT8_MIN;
	static uint16_t x506 = 3337U;
	int16_t x507 = 7;
	volatile uint16_t x508 = 15U;
	static volatile int32_t t116 = -40776;

    t116 = ((x505-x506)^(x507^x508));

    if (t116 != -3457) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x510 = 5;
	uint8_t x511 = UINT8_MAX;
	int32_t t117 = -2834;

    t117 = ((x509-x510)^(x511^x512));

    if (t117 != -38585) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x513 = UINT64_MAX;
	int32_t x514 = 254322;
	uint8_t x515 = UINT8_MAX;
	volatile uint64_t t118 = 7296480LLU;

    t118 = ((x513-x514)^(x515^x516));

    if (t118 != 18446744073709297247LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x519 = 1U;
	int16_t x520 = INT16_MIN;

    t119 = ((x517-x518)^(x519^x520));

    if (t119 != -32526) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x525 = 4U;
	int32_t x526 = -17;
	volatile int16_t x528 = 9081;
	uint32_t t120 = 5971U;

    t120 = ((x525-x526)^(x527^x528));

    if (t120 != 66847U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x529 = -353236;
	volatile int8_t x531 = -1;
	uint64_t x532 = 2128526712LLU;
	static volatile uint64_t t121 = 42701860969LLU;

    t121 = ((x529-x530)^(x531^x532));

    if (t121 != 2128338475LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x533 = 15U;
	int64_t x535 = -1LL;
	volatile uint64_t x536 = 0LLU;
	uint64_t t122 = 12804912121423627LLU;

    t122 = ((x533-x534)^(x535^x536));

    if (t122 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x537 = 48441U;
	volatile uint64_t x538 = UINT64_MAX;
	uint32_t x539 = 1167410U;
	int64_t x540 = -3115943351580161LL;
	uint64_t t123 = 4979245688452LLU;

    t123 = ((x537-x538)^(x539^x540));

    if (t123 != 18443628130358977783LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x541 = UINT64_MAX;
	int16_t x542 = -1;
	int8_t x543 = INT8_MIN;
	static int32_t x544 = INT32_MIN;
	static uint64_t t124 = 82740131018LLU;

    t124 = ((x541-x542)^(x543^x544));

    if (t124 != 2147483520LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x550 = -1;
	uint64_t x551 = 31184293LLU;
	uint32_t x552 = 1915U;

    t125 = ((x549-x550)^(x551^x552));

    if (t125 != 9223372036885959391LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x553 = 87320LLU;
	volatile int32_t x555 = -5;
	volatile int16_t x556 = INT16_MIN;

    t126 = ((x553-x554)^(x555^x556));

    if (t126 != 76660LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x557 = 4190U;
	volatile uint16_t x558 = UINT16_MAX;
	uint32_t x560 = 281391U;
	volatile uint32_t t127 = 178U;

    t127 = ((x557-x558)^(x559^x560));

    if (t127 != 4294663165U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x561 = -850;
	int64_t x562 = -105LL;
	int8_t x563 = INT8_MAX;
	volatile int64_t t128 = -5260187511030LL;

    t128 = ((x561-x562)^(x563^x564));

    if (t128 != -746LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x565 = UINT16_MAX;
	int8_t x567 = INT8_MAX;
	static int32_t t129 = 51;

    t129 = ((x565-x566)^(x567^x568));

    if (t129 != -65423) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x569 = 53;
	uint16_t x570 = 29U;
	int16_t x571 = INT16_MIN;
	static int8_t x572 = INT8_MIN;

    t130 = ((x569-x570)^(x571^x572));

    if (t130 != 32664) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x581 = 89;
	int16_t x582 = -1;
	int64_t x583 = -1LL;
	static int8_t x584 = -1;
	static int64_t t131 = -1LL;

    t131 = ((x581-x582)^(x583^x584));

    if (t131 != 90LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x586 = -1;
	uint32_t x587 = UINT32_MAX;
	volatile int8_t x588 = INT8_MIN;
	volatile uint32_t t132 = 20U;

    t132 = ((x585-x586)^(x587^x588));

    if (t132 != 127U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x589 = 73;
	static volatile int64_t x590 = 62383430373116226LL;
	volatile uint16_t x591 = 785U;
	static int64_t x592 = INT64_MIN;
	volatile int64_t t133 = -15821079493136639LL;

    t133 = ((x589-x590)^(x591^x592));

    if (t133 != 9160988606481658902LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x594 = -1;
	uint16_t x595 = UINT16_MAX;
	uint64_t t134 = 15927859514LLU;

    t134 = ((x593-x594)^(x595^x596));

    if (t134 != 10109817278LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x597 = -1LL;
	uint64_t x598 = UINT64_MAX;
	uint16_t x600 = UINT16_MAX;
	volatile uint64_t t135 = 133650951692862LLU;

    t135 = ((x597-x598)^(x599^x600));

    if (t135 != 65512LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x601 = 267822746127637LLU;
	int16_t x603 = INT16_MIN;
	int64_t x604 = INT64_MAX;
	static uint64_t t136 = 294809LLU;

    t136 = ((x601-x602)^(x603^x604));

    if (t136 != 9223639859600896745LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x609 = UINT64_MAX;
	int32_t x610 = -1;
	static volatile uint64_t t137 = 1877449226041637LLU;

    t137 = ((x609-x610)^(x611^x612));

    if (t137 != 9223372036854775863LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x613 = 693192563948653700LLU;
	static volatile int32_t x614 = INT32_MIN;
	static int16_t x615 = INT16_MIN;
	static uint16_t x616 = 1854U;
	uint64_t t138 = 21673LLU;

    t138 = ((x613-x614)^(x615^x616));

    if (t138 != 17753551507613387706LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x617 = INT16_MAX;
	volatile int64_t x618 = -1LL;
	int32_t x619 = INT32_MIN;
	static volatile int8_t x620 = 0;
	int64_t t139 = -10533271046911LL;

    t139 = ((x617-x618)^(x619^x620));

    if (t139 != -2147450880LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x621 = INT16_MIN;
	volatile uint8_t x622 = UINT8_MAX;
	uint8_t x623 = 10U;
	int32_t x624 = INT32_MIN;

    t140 = ((x621-x622)^(x623^x624));

    if (t140 != 2147450635) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x625 = 9LL;
	static int16_t x626 = -468;
	int32_t x628 = INT32_MIN;
	uint64_t t141 = 344LLU;

    t141 = ((x625-x626)^(x627^x628));

    if (t141 != 18446443817706522539LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x629 = -1;
	int64_t x630 = INT64_MIN;
	int32_t x631 = INT32_MIN;
	uint8_t x632 = 122U;
	int64_t t142 = -294834LL;

    t142 = ((x629-x630)^(x631^x632));

    if (t142 != -9223372034707292283LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x633 = INT8_MIN;
	int16_t x634 = INT16_MIN;
	uint64_t x635 = 5894740324591LLU;
	int64_t x636 = INT64_MIN;

    t143 = ((x633-x634)^(x635^x636));

    if (t143 != 9223377931595108207LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x637 = INT32_MIN;
	static int8_t x639 = -1;
	int8_t x640 = INT8_MIN;
	uint64_t t144 = 998315LLU;

    t144 = ((x637-x638)^(x639^x640));

    if (t144 != 18426550831882726981LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x641 = -4;
	int16_t x643 = 0;
	volatile int32_t t145 = 1449174;

    t145 = ((x641-x642)^(x643^x644));

    if (t145 != 3) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x649 = UINT64_MAX;
	uint8_t x650 = 1U;
	static int8_t x651 = 2;
	volatile uint64_t t146 = 1135635LLU;

    t146 = ((x649-x650)^(x651^x652));

    if (t146 != 18446744073709551368LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x653 = -1LL;
	static volatile uint8_t x654 = 0U;
	static int16_t x655 = INT16_MIN;
	volatile int64_t t147 = 492LL;

    t147 = ((x653-x654)^(x655^x656));

    if (t147 != -2147450881LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x660 = -46;
	volatile int64_t t148 = 49513LL;

    t148 = ((x657-x658)^(x659^x660));

    if (t148 != -9223372036854743214LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x661 = UINT32_MAX;
	uint32_t x662 = 256710U;
	int64_t x664 = INT64_MAX;
	static int64_t t149 = -961777539123135235LL;

    t149 = ((x661-x662)^(x663^x664));

    if (t149 != 9223372036854519097LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x666 = -220LL;
	int16_t x668 = INT16_MIN;

    t150 = ((x665-x666)^(x667^x668));

    if (t150 != 32675LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x669 = 25383723LLU;
	int32_t x670 = INT32_MIN;
	uint8_t x671 = 115U;

    t151 = ((x669-x670)^(x671^x672));

    if (t151 != 670143642578LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x677 = 10U;
	volatile uint64_t x678 = UINT64_MAX;
	volatile uint32_t x679 = UINT32_MAX;
	static volatile uint64_t t152 = 41465941674373LLU;

    t152 = ((x677-x678)^(x679^x680));

    if (t152 != 4294966477LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x681 = -663;
	static int32_t x682 = INT32_MIN;
	static volatile int32_t x683 = INT32_MIN;
	uint64_t x684 = UINT64_MAX;
	uint64_t t153 = 5594786690219887LLU;

    t153 = ((x681-x682)^(x683^x684));

    if (t153 != 662LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x685 = INT16_MAX;
	int64_t x686 = INT64_MAX;
	uint32_t x687 = 4U;
	volatile int16_t x688 = 469;
	int64_t t154 = -2LL;

    t154 = ((x685-x686)^(x687^x688));

    if (t154 != -9223372036854742575LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x690 = INT16_MAX;
	int32_t t155 = 43340065;

    t155 = ((x689-x690)^(x691^x692));

    if (t155 != -2147450879) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x694 = -5469LL;
	int64_t x696 = INT64_MIN;
	static volatile int64_t t156 = 30696LL;

    t156 = ((x693-x694)^(x695^x696));

    if (t156 != -6221362LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x697 = -1;
	uint64_t x698 = UINT64_MAX;
	volatile int32_t x699 = -1;
	static int64_t x700 = -1LL;
	uint64_t t157 = 2129LLU;

    t157 = ((x697-x698)^(x699^x700));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x701 = -1;
	static uint64_t x702 = UINT64_MAX;
	static volatile int64_t x703 = INT64_MIN;
	int64_t x704 = INT64_MIN;

    t158 = ((x701-x702)^(x703^x704));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x706 = 1652026749LLU;
	volatile uint8_t x708 = 9U;
	uint64_t t159 = 168289LLU;

    t159 = ((x705-x706)^(x707^x708));

    if (t159 != 1652026662LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x709 = 3U;
	uint16_t x711 = 2U;
	int32_t x712 = 891322;
	static volatile int32_t t160 = 349;

    t160 = ((x709-x710)^(x711^x712));

    if (t160 != 891313) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x713 = 1768U;
	int8_t x715 = INT8_MIN;
	volatile int8_t x716 = INT8_MAX;
	uint32_t t161 = 645295U;

    t161 = ((x713-x714)^(x715^x716));

    if (t161 != 4294965528U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x718 = INT16_MIN;
	uint8_t x720 = UINT8_MAX;
	volatile int64_t t162 = 17047202LL;

    t162 = ((x717-x718)^(x719^x720));

    if (t162 != 33606652LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x721 = 30139272765541LL;
	volatile uint16_t x722 = UINT16_MAX;
	int16_t x723 = INT16_MIN;
	volatile uint32_t x724 = UINT32_MAX;
	int64_t t163 = 9713LL;

    t163 = ((x721-x722)^(x723^x724));

    if (t163 != 30139272716185LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x725 = -1;
	int64_t x726 = INT64_MAX;
	int16_t x727 = INT16_MIN;
	static volatile int64_t t164 = 59243428747LL;

    t164 = ((x725-x726)^(x727^x728));

    if (t164 != 9223372036854757971LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x729 = 1U;
	int8_t x730 = INT8_MIN;
	int8_t x731 = 8;
	int32_t t165 = -1876447;

    t165 = ((x729-x730)^(x731^x732));

    if (t165 != -247) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x737 = UINT32_MAX;
	int32_t x739 = -1;
	uint32_t x740 = 4589163U;
	int64_t t166 = 4761LL;

    t166 = ((x737-x738)^(x739^x740));

    if (t166 != -17759133691754LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x743 = -5;
	uint32_t x744 = 1240U;
	volatile int64_t t167 = -29121580052229LL;

    t167 = ((x741-x742)^(x743^x744));

    if (t167 != 9223372032559840035LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x745 = INT32_MIN;
	int32_t x746 = INT32_MIN;
	static int8_t x747 = INT8_MIN;
	volatile int8_t x748 = 10;
	int32_t t168 = 2;

    t168 = ((x745-x746)^(x747^x748));

    if (t168 != -118) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x750 = INT8_MIN;
	int8_t x751 = 5;
	static int16_t x752 = -7306;

    t169 = ((x749-x750)^(x751^x752));

    if (t169 != 18446744073709544204LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x761 = INT64_MIN;
	static volatile int64_t x762 = INT64_MIN;
	int8_t x763 = -6;
	int16_t x764 = INT16_MIN;
	int64_t t170 = -25761915LL;

    t170 = ((x761-x762)^(x763^x764));

    if (t170 != 32762LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x766 = 2189U;
	static int16_t x768 = -1;
	uint64_t t171 = 66691655648LLU;

    t171 = ((x765-x766)^(x767^x768));

    if (t171 != 2592LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x770 = 91U;
	int64_t x771 = INT64_MAX;
	static int8_t x772 = -34;
	volatile int64_t t172 = 64054543352744117LL;

    t172 = ((x769-x770)^(x771^x772));

    if (t172 != 9223372036854775685LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x773 = -87048LL;
	static int16_t x775 = INT16_MAX;
	uint32_t x776 = 41588922U;
	static volatile int64_t t173 = -8LL;

    t173 = ((x773-x774)^(x775^x776));

    if (t173 != -41661280LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x777 = INT64_MIN;
	int64_t x778 = INT64_MIN;
	int16_t x779 = -1;

    t174 = ((x777-x778)^(x779^x780));

    if (t174 != -65536LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x781 = 98U;
	static int16_t x782 = -4;
	int8_t x783 = -1;
	int32_t x784 = INT32_MIN;
	uint32_t t175 = 425U;

    t175 = ((x781-x782)^(x783^x784));

    if (t175 != 2147483545U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x785 = 264;
	uint8_t x786 = 1U;
	int8_t x788 = INT8_MIN;
	volatile int32_t t176 = -5514994;

    t176 = ((x785-x786)^(x787^x788));

    if (t176 != 376) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x797 = -68LL;
	volatile int64_t x798 = INT64_MIN;
	int32_t x799 = 12;
	int32_t x800 = INT32_MIN;
	volatile int64_t t177 = -4976664532086839LL;

    t177 = ((x797-x798)^(x799^x800));

    if (t177 != -9223372034707292240LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x805 = UINT64_MAX;
	uint8_t x806 = UINT8_MAX;
	int64_t x807 = -1LL;
	uint16_t x808 = UINT16_MAX;
	volatile uint64_t t178 = 15959045662612962LLU;

    t178 = ((x805-x806)^(x807^x808));

    if (t178 != 65280LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x809 = 228439373U;
	volatile uint16_t x810 = 23U;
	static uint32_t t179 = 496367U;

    t179 = ((x809-x810)^(x811^x812));

    if (t179 != 228444873U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x813 = INT8_MIN;
	volatile uint16_t x814 = UINT16_MAX;
	int64_t x815 = -1LL;
	static int16_t x816 = INT16_MIN;
	volatile int64_t t180 = 370396578223132073LL;

    t180 = ((x813-x814)^(x815^x816));

    if (t180 != -98178LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x821 = 163984955LLU;
	uint8_t x823 = 1U;
	int64_t x824 = INT64_MIN;
	static volatile uint64_t t181 = 7554392080141097683LLU;

    t181 = ((x821-x822)^(x823^x824));

    if (t181 != 9223372037018773260LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x825 = -1;
	static uint16_t x827 = UINT16_MAX;
	uint32_t x828 = 384832U;
	uint32_t t182 = 2265U;

    t182 = ((x825-x826)^(x827^x828));

    if (t182 != 336064U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x829 = INT32_MIN;
	volatile int32_t x830 = -1;
	int32_t x832 = INT32_MIN;
	static int32_t t183 = 22681018;

    t183 = ((x829-x830)^(x831^x832));

    if (t183 != -44) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x837 = -450;
	int16_t x838 = -5373;
	volatile int32_t x839 = INT32_MIN;
	int64_t x840 = INT64_MIN;
	static volatile int64_t t184 = -632702LL;

    t184 = ((x837-x838)^(x839^x840));

    if (t184 != 9223372034707297083LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x846 = 90U;
	volatile int32_t x847 = INT32_MIN;
	volatile uint32_t x848 = 0U;
	volatile uint32_t t185 = 1048040636U;

    t185 = ((x845-x846)^(x847^x848));

    if (t185 != 2147483430U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x849 = INT8_MIN;
	int32_t x850 = INT32_MIN;
	int16_t x851 = -1;
	int8_t x852 = INT8_MIN;
	int32_t t186 = INT32_MAX;

    t186 = ((x849-x850)^(x851^x852));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x854 = 86417LLU;
	volatile uint64_t x855 = UINT64_MAX;
	uint64_t t187 = 141368545LLU;

    t187 = ((x853-x854)^(x855^x856));

    if (t187 != 1092995592894LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x857 = -144086539;
	volatile uint16_t x859 = 12U;
	volatile uint64_t t188 = 3008LLU;

    t188 = ((x857-x858)^(x859^x860));

    if (t188 != 9223368651717061958LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x861 = 57;
	volatile uint64_t t189 = 4002445960019144086LLU;

    t189 = ((x861-x862)^(x863^x864));

    if (t189 != 18446743772519089431LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x867 = UINT16_MAX;
	uint8_t x868 = 18U;

    t190 = ((x865-x866)^(x867^x868));

    if (t190 != -2147418858) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x870 = INT16_MIN;
	int32_t x871 = INT32_MIN;
	int32_t x872 = -508549668;
	static volatile uint32_t t191 = 58578U;

    t191 = ((x869-x870)^(x871^x872));

    if (t191 != 1638947363U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x873 = 2U;
	volatile uint16_t x874 = 1U;
	int8_t x875 = INT8_MAX;
	int16_t x876 = -2;
	int32_t t192 = 2;

    t192 = ((x873-x874)^(x875^x876));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x877 = INT32_MIN;
	int32_t x878 = -255;
	int32_t x880 = -1;
	int32_t t193 = 227343031;

    t193 = ((x877-x878)^(x879^x880));

    if (t193 != -2147483544) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x881 = 18141647LL;
	volatile int64_t x882 = INT64_MAX;
	int32_t x883 = -1;
	static volatile int32_t x884 = INT32_MIN;
	int64_t t194 = -661286LL;

    t194 = ((x881-x882)^(x883^x884));

    if (t194 != -9223372034725433809LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x885 = UINT8_MAX;
	static uint32_t x886 = 38852U;
	uint32_t x887 = 28183U;
	static volatile int8_t x888 = INT8_MAX;
	static volatile uint32_t t195 = 11U;

    t195 = ((x885-x886)^(x887^x888));

    if (t195 != 4294903635U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x894 = INT64_MIN;
	int16_t x896 = -1;

    t196 = ((x893-x894)^(x895^x896));

    if (t196 != -9223371801650398058LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x897 = INT32_MIN;
	volatile uint64_t x898 = UINT64_MAX;
	static int16_t x899 = INT16_MAX;

    t197 = ((x897-x898)^(x899^x900));

    if (t197 != 2147483646LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x901 = UINT8_MAX;
	static int8_t x902 = INT8_MIN;
	static volatile int16_t x903 = INT16_MIN;
	int32_t t198 = 35847;

    t198 = ((x901-x902)^(x903^x904));

    if (t198 != 2147451263) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x905 = -1LL;
	volatile int32_t x906 = INT32_MAX;
	static int64_t t199 = 58380177589229LL;

    t199 = ((x905-x906)^(x907^x908));

    if (t199 != -2147483822LL) { NG(); } else { ; }
	
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

