
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

static int8_t x3 = -29;
int8_t x8 = INT8_MIN;
static volatile int64_t t1 = 70211159986718LL;
int8_t x12 = 0;
int32_t x20 = INT32_MIN;
static volatile uint64_t t6 = 1072261133075LLU;
int32_t x30 = INT32_MIN;
uint64_t x31 = 3LLU;
int16_t x32 = 3;
volatile int32_t x38 = -1;
int8_t x40 = -7;
int32_t x49 = INT32_MAX;
int64_t t11 = 61610805592559LL;
int32_t x54 = INT32_MIN;
volatile int64_t x59 = -34313675633193LL;
volatile uint64_t t13 = 111965LLU;
static int32_t x64 = INT32_MIN;
uint16_t x65 = UINT16_MAX;
uint32_t x67 = 31664U;
uint64_t x69 = 3955368570673423LLU;
int64_t x70 = -1LL;
uint32_t x71 = 12689684U;
static int8_t x72 = INT8_MAX;
volatile int16_t x76 = -1;
volatile int16_t x83 = -663;
int32_t x86 = INT32_MAX;
int32_t x100 = INT32_MAX;
int32_t x104 = INT32_MAX;
int16_t x107 = 50;
int64_t x109 = -7789LL;
int8_t x110 = -1;
static int32_t x111 = -663430;
uint16_t x112 = 987U;
int64_t x114 = INT64_MAX;
int64_t x118 = INT64_MAX;
volatile int32_t x125 = 2525;
int32_t x143 = 74861685;
static int8_t x145 = INT8_MIN;
uint32_t x152 = 1U;
int64_t t34 = -178LL;
volatile int32_t t37 = -41321327;
uint64_t x165 = 13479134386LLU;
static volatile int64_t t39 = 138046552322213LL;
uint32_t x175 = 92509U;
static volatile uint32_t t40 = 33023969U;
volatile int64_t t41 = 217750556919829LL;
volatile int16_t x190 = 58;
uint8_t x191 = 11U;
uint32_t x208 = 15U;
int16_t x219 = 409;
int64_t x221 = INT64_MIN;
int32_t x223 = -1;
int8_t x224 = INT8_MIN;
static volatile uint16_t x230 = UINT16_MAX;
uint64_t x232 = 414616125159022840LLU;
int64_t x237 = INT64_MAX;
volatile int64_t x238 = INT64_MAX;
static uint64_t x244 = 300737291LLU;
int16_t x247 = -1;
uint32_t t60 = 70990075U;
static int64_t x260 = INT64_MAX;
uint64_t t61 = 4844LLU;
int32_t x266 = INT32_MIN;
volatile uint8_t x267 = 9U;
int64_t t65 = INT64_MIN;
static int8_t x284 = -1;
int64_t x291 = INT64_MAX;
int32_t x302 = INT32_MAX;
uint16_t x315 = UINT16_MAX;
int8_t x317 = -1;
int8_t x320 = INT8_MIN;
volatile int64_t x321 = INT64_MIN;
uint32_t t77 = 0U;
volatile uint64_t x331 = 1948577405338985LLU;
static int8_t x336 = -1;
uint16_t x346 = UINT16_MAX;
int64_t x350 = 5694076405175LL;
int16_t x355 = INT16_MAX;
int64_t t85 = -4410544250117LL;
int16_t x362 = INT16_MIN;
int32_t x364 = -40177;
volatile int32_t t86 = 124047161;
static uint8_t x367 = UINT8_MAX;
int16_t x368 = INT16_MIN;
int8_t x370 = 4;
int16_t x371 = -1;
volatile int32_t t88 = -122802;
uint16_t x378 = 5306U;
int64_t x387 = INT64_MIN;
int32_t x389 = INT32_MAX;
uint32_t x394 = 1U;
uint8_t x399 = UINT8_MAX;
static int16_t x400 = INT16_MIN;
volatile int32_t t99 = -66887;
volatile uint32_t t101 = 1990986U;
int8_t x427 = INT8_MIN;
static int64_t x436 = -1LL;
int32_t x447 = INT32_MIN;
int32_t x450 = INT32_MAX;
volatile int8_t x454 = 3;
static volatile int32_t x463 = -823787;
volatile int16_t x467 = INT16_MIN;
uint64_t t116 = UINT64_MAX;
uint16_t x487 = UINT16_MAX;
uint32_t x489 = 81901U;
static int64_t x495 = INT64_MAX;
int8_t x499 = INT8_MAX;
int8_t x500 = INT8_MAX;
volatile int64_t t120 = -913LL;
int64_t x507 = 1451185414LL;
volatile int32_t t123 = INT32_MAX;
uint8_t x514 = 62U;
volatile uint64_t x520 = UINT64_MAX;
uint64_t x521 = UINT64_MAX;
uint64_t x522 = 394535224433196369LLU;
static volatile uint64_t t126 = 88440207562LLU;
static int8_t x528 = INT8_MIN;
uint16_t x541 = 54U;
int8_t x549 = -1;
uint64_t x552 = UINT64_MAX;
uint64_t t133 = UINT64_MAX;
volatile uint64_t x558 = 1449LLU;
int64_t x563 = INT64_MIN;
volatile int64_t x564 = -1LL;
int64_t x565 = INT64_MIN;
static int16_t x574 = -616;
uint64_t x575 = UINT64_MAX;
int64_t x580 = 208084276LL;
uint16_t x581 = UINT16_MAX;
int32_t x587 = -1;
int64_t x590 = 209006287562LL;
volatile uint16_t x591 = 14683U;
volatile int64_t t143 = 265444972LL;
static volatile int16_t x593 = INT16_MAX;
int32_t x597 = -86534;
uint8_t x601 = 20U;
int64_t x602 = -65123LL;
int16_t x610 = INT16_MAX;
volatile int8_t x625 = 12;
static int16_t x627 = INT16_MIN;
int64_t x636 = INT64_MIN;
int8_t x641 = INT8_MIN;
int16_t x644 = INT16_MIN;
volatile int16_t x647 = 1;
uint64_t x649 = 357644LLU;
uint64_t t158 = UINT64_MAX;
volatile int8_t x654 = INT8_MIN;
volatile uint64_t x655 = 3LLU;
volatile uint64_t t159 = 5271977720450LLU;
int16_t x658 = INT16_MIN;
uint32_t x668 = UINT32_MAX;
int16_t x672 = INT16_MIN;
volatile uint64_t x674 = 3746068936339294573LLU;
volatile int64_t t169 = 804069LL;
int64_t x706 = INT64_MIN;
volatile int64_t t172 = 1751LL;
static int8_t x713 = INT8_MIN;
uint64_t x716 = 107LLU;
uint64_t t173 = UINT64_MAX;
int8_t x719 = -1;
int16_t x722 = INT16_MAX;
uint64_t x727 = 341407LLU;
int64_t x734 = INT64_MIN;
int8_t x741 = INT8_MIN;
int32_t x743 = 880956;
uint32_t x745 = UINT32_MAX;
static uint64_t t182 = 106782636LLU;
uint8_t x756 = 6U;
volatile uint16_t x761 = UINT16_MAX;
int8_t x774 = INT8_MIN;
static uint32_t x776 = 163855250U;
int8_t x782 = -1;
int8_t x785 = INT8_MIN;
static int64_t x796 = INT64_MAX;
static int64_t t193 = 3145565LL;
int64_t x799 = -1LL;
int32_t x801 = INT32_MIN;
static int64_t x804 = INT64_MAX;
int8_t x808 = 25;
static volatile int8_t x812 = -17;
volatile int64_t t197 = 532418132281801LL;
int16_t x815 = -1;
int16_t x817 = 2046;
static uint64_t x820 = 0LLU;


void f0(void) {
    	int64_t x1 = 1047451800971307LL;
	int16_t x2 = 1;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 2LL;

    t0 = (((x1^x2)/x3)|x4);

    if (t0 != -36119027619700LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int64_t x6 = -1LL;
	int8_t x7 = INT8_MIN;

    t1 = (((x5^x6)/x7)|x8);

    if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -132;
	uint8_t x10 = 9U;
	static volatile int8_t x11 = -1;
	volatile int32_t t2 = -1;

    t2 = (((x9^x10)/x11)|x12);

    if (t2 != 139) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x13 = 3U;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = INT32_MAX;
	uint32_t x16 = 460781U;
	uint64_t t3 = 14LLU;

    t3 = (((x13^x14)/x15)|x16);

    if (t3 != 8590395373LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 4U;
	static volatile int64_t x18 = INT64_MIN;
	static uint16_t x19 = UINT16_MAX;
	int64_t t4 = 6952643750LL;

    t4 = (((x17^x18)/x19)|x20);

    if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int64_t x22 = 26038113714878839LL;
	volatile int64_t x23 = INT64_MIN;
	volatile int32_t x24 = INT32_MAX;
	static volatile int64_t t5 = 19789516LL;

    t5 = (((x21^x22)/x23)|x24);

    if (t5 != 2147483647LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	int8_t x26 = INT8_MAX;
	int16_t x27 = 6186;
	uint64_t x28 = 8967678171934LLU;

    t6 = (((x25^x26)/x27)|x28);

    if (t6 != 8967678827326LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	volatile uint64_t t7 = 97546LLU;

    t7 = (((x29^x30)/x31)|x32);

    if (t7 != 6148914690520711167LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MAX;
	volatile int16_t x35 = 2879;
	uint16_t x36 = 23288U;
	volatile int64_t t8 = 29LL;

    t8 = (((x33^x34)/x35)|x36);

    if (t8 != -3203672121155592LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	uint32_t x39 = 11604U;
	uint32_t t9 = 1950630020U;

    t9 = (((x37^x38)/x39)|x40);

    if (t9 != 4294967291U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	int16_t x46 = -1;
	int64_t x47 = 5896749LL;
	static volatile int16_t x48 = INT16_MIN;
	static int64_t t10 = 256414987LL;

    t10 = (((x45^x46)/x47)|x48);

    if (t10 != -20539LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x50 = -1852493580LL;
	volatile int64_t x51 = 5087856677873139LL;
	int16_t x52 = INT16_MIN;

    t11 = (((x49^x50)/x51)|x52);

    if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MAX;
	int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = INT32_MIN;

    t12 = (((x53^x54)/x55)|x56);

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	uint64_t x58 = UINT64_MAX;
	volatile int8_t x60 = -4;

    t13 = (((x57^x58)/x59)|x60);

    if (t13 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x61 = INT8_MIN;
	int16_t x62 = -5;
	uint8_t x63 = UINT8_MAX;
	volatile int32_t t14 = INT32_MIN;

    t14 = (((x61^x62)/x63)|x64);

    if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x66 = 12627;
	volatile uint32_t x68 = 1U;
	volatile uint32_t t15 = 2U;

    t15 = (((x65^x66)/x67)|x68);

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t t16 = 33726267566406054LLU;

    t16 = (((x69^x70)/x71)|x72);

    if (t16 != 1453368634367LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = 1343;
	int16_t x74 = INT16_MIN;
	int64_t x75 = 18023058LL;
	static int64_t t17 = 16LL;

    t17 = (((x73^x74)/x75)|x76);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x77 = UINT16_MAX;
	uint16_t x78 = 13068U;
	uint8_t x79 = UINT8_MAX;
	uint8_t x80 = 49U;
	int32_t t18 = 3449506;

    t18 = (((x77^x78)/x79)|x80);

    if (t18 != 253) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MIN;
	uint8_t x82 = UINT8_MAX;
	int32_t x84 = INT32_MIN;
	int64_t t19 = 38542509745LL;

    t19 = (((x81^x82)/x83)|x84);

    if (t19 != -1318289359LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 15U;
	int64_t x87 = 3400LL;
	static int32_t x88 = INT32_MIN;
	int64_t t20 = 14851621714980693LL;

    t20 = (((x85^x86)/x87)|x88);

    if (t20 != -2146852036LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x89 = 33571307469542909LL;
	int16_t x90 = -1;
	int32_t x91 = -1;
	volatile int8_t x92 = -1;
	int64_t t21 = 1157785090620710236LL;

    t21 = (((x89^x90)/x91)|x92);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x97 = INT8_MIN;
	static int64_t x98 = -1LL;
	int8_t x99 = INT8_MIN;
	static volatile int64_t t22 = 57695046315144415LL;

    t22 = (((x97^x98)/x99)|x100);

    if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x101 = INT16_MAX;
	int64_t x102 = 1025LL;
	int8_t x103 = INT8_MIN;
	int64_t t23 = -922491520132LL;

    t23 = (((x101^x102)/x103)|x104);

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x105 = 264U;
	static volatile int32_t x106 = -1;
	volatile int32_t x108 = INT32_MIN;
	volatile int32_t t24 = 75;

    t24 = (((x105^x106)/x107)|x108);

    if (t24 != -5) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t t25 = 241LL;

    t25 = (((x109^x110)/x111)|x112);

    if (t25 != 987LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = 129679460;
	volatile uint64_t x115 = 34LLU;
	static uint16_t x116 = 12347U;
	static uint64_t t26 = 1135742895LLU;

    t26 = (((x113^x114)/x115)|x116);

    if (t26 != 271275648138981631LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MIN;
	volatile uint32_t x119 = 249U;
	int32_t x120 = INT32_MIN;
	volatile int64_t t27 = -4321493405357LL;

    t27 = (((x117^x118)/x119)|x120);

    if (t27 != -1371284739LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MAX;
	uint16_t x122 = 25646U;
	static volatile int64_t x123 = -1LL;
	static int32_t x124 = INT32_MIN;
	volatile int64_t t28 = 474963049792315LL;

    t28 = (((x121^x122)/x123)|x124);

    if (t28 != -2147458001LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x126 = 4U;
	int32_t x127 = INT32_MIN;
	int64_t x128 = -5640230779LL;
	volatile int64_t t29 = -4035005757411503LL;

    t29 = (((x125^x126)/x127)|x128);

    if (t29 != -5640230779LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = 6;
	volatile uint16_t x130 = 397U;
	int64_t x131 = -1LL;
	static int32_t x132 = INT32_MIN;
	int64_t t30 = -75706LL;

    t30 = (((x129^x130)/x131)|x132);

    if (t30 != -395LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	static int8_t x134 = INT8_MIN;
	int64_t x135 = -1LL;
	volatile int8_t x136 = -1;
	static int64_t t31 = 58283600LL;

    t31 = (((x133^x134)/x135)|x136);

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -22332LL;
	int64_t x142 = 368214336431LL;
	volatile uint8_t x144 = 1U;
	volatile int64_t t32 = -196242LL;

    t32 = (((x141^x142)/x143)|x144);

    if (t32 != -4917LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x146 = UINT64_MAX;
	int64_t x147 = 491888067191625365LL;
	static volatile int64_t x148 = INT64_MAX;
	uint64_t t33 = 7852787961083808486LLU;

    t33 = (((x145^x146)/x147)|x148);

    if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = -683586494930LL;
	uint8_t x150 = UINT8_MAX;
	volatile int8_t x151 = -1;

    t34 = (((x149^x150)/x151)|x152);

    if (t34 != 683586494767LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = INT64_MAX;
	volatile int8_t x154 = 63;
	int32_t x155 = -1;
	static int32_t x156 = INT32_MAX;
	volatile int64_t t35 = -59924272LL;

    t35 = (((x153^x154)/x155)|x156);

    if (t35 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x157 = 4608923285LLU;
	int8_t x158 = INT8_MIN;
	static volatile uint16_t x159 = UINT16_MAX;
	uint16_t x160 = 11906U;
	uint64_t t36 = 31744061901849LLU;

    t36 = (((x157^x158)/x159)|x160);

    if (t36 != 281479271673803LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = INT8_MIN;
	int16_t x162 = 2159;
	static int8_t x163 = 31;
	int16_t x164 = INT16_MIN;

    t37 = (((x161^x162)/x163)|x164);

    if (t37 != -66) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x166 = -1;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	static uint64_t t38 = 58398974LLU;

    t38 = (((x165^x166)/x167)|x168);

    if (t38 != 18446744071562180908LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x169 = 1U;
	int64_t x170 = 4700508697585LL;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = 3206U;

    t39 = (((x169^x170)/x171)|x172);

    if (t39 != 3206LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x173 = 1U;
	int32_t x174 = 0;
	int16_t x176 = INT16_MAX;

    t40 = (((x173^x174)/x175)|x176);

    if (t40 != 32767U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = INT16_MIN;
	int64_t x178 = 642320574LL;
	uint32_t x179 = 5U;
	volatile uint16_t x180 = 3690U;

    t41 = (((x177^x178)/x179)|x180);

    if (t41 != -128467205LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = INT16_MIN;
	volatile int64_t x182 = -7LL;
	uint64_t x183 = 6205LLU;
	volatile int8_t x184 = INT8_MIN;
	uint64_t t42 = 136348LLU;

    t42 = (((x181^x182)/x183)|x184);

    if (t42 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x185 = 0U;
	int8_t x186 = INT8_MIN;
	int32_t x187 = 823249399;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t43 = INT32_MIN;

    t43 = (((x185^x186)/x187)|x188);

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x189 = UINT32_MAX;
	int64_t x192 = -4734925281LL;
	volatile int64_t t44 = 1931728021LL;

    t44 = (((x189^x190)/x191)|x192);

    if (t44 != -4432865409LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = INT64_MAX;
	int8_t x194 = -15;
	int64_t x195 = INT64_MAX;
	static int64_t x196 = -46892928289LL;
	static volatile int64_t t45 = -5894833774544881LL;

    t45 = (((x193^x194)/x195)|x196);

    if (t45 != -46892928289LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x197 = UINT8_MAX;
	int16_t x198 = INT16_MIN;
	volatile int32_t x199 = INT32_MIN;
	int64_t x200 = -21LL;
	int64_t t46 = 363201293232LL;

    t46 = (((x197^x198)/x199)|x200);

    if (t46 != -21LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = INT64_MIN;
	int64_t x202 = -1LL;
	volatile uint32_t x203 = UINT32_MAX;
	int8_t x204 = -1;
	volatile int64_t t47 = 1075761528230554LL;

    t47 = (((x201^x202)/x203)|x204);

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x205 = 0U;
	static uint16_t x206 = 1U;
	int32_t x207 = -6818176;
	static volatile uint32_t t48 = 39159459U;

    t48 = (((x205^x206)/x207)|x208);

    if (t48 != 15U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = INT8_MIN;
	int64_t x210 = 2372512546349LL;
	static volatile int64_t x211 = -995480663LL;
	int8_t x212 = INT8_MAX;
	int64_t t49 = -17310LL;

    t49 = (((x209^x210)/x211)|x212);

    if (t49 != 2431LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = -98697989LL;
	static int32_t x214 = -28126830;
	int32_t x215 = 356554578;
	int64_t x216 = INT64_MAX;
	volatile int64_t t50 = INT64_MAX;

    t50 = (((x213^x214)/x215)|x216);

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = INT8_MIN;
	volatile int8_t x218 = -1;
	uint32_t x220 = 5345987U;
	volatile uint32_t t51 = 196268360U;

    t51 = (((x217^x218)/x219)|x220);

    if (t51 != 5345987U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x222 = 102150;
	volatile int64_t t52 = -6961923503018450LL;

    t52 = (((x221^x222)/x223)|x224);

    if (t52 != -6LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x225 = 1716U;
	int16_t x226 = 1;
	static volatile int16_t x227 = INT16_MIN;
	uint32_t x228 = 1623U;
	uint32_t t53 = 8U;

    t53 = (((x225^x226)/x227)|x228);

    if (t53 != 1623U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = 0;
	uint64_t x231 = 10154673138865500LLU;
	uint64_t t54 = 6489204541846158724LLU;

    t54 = (((x229^x230)/x231)|x232);

    if (t54 != 414616125159022840LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = INT64_MIN;
	static int32_t x234 = 24;
	int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MIN;
	int64_t t55 = 3747900607956265677LL;

    t55 = (((x233^x234)/x235)|x236);

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint16_t x239 = UINT16_MAX;
	static volatile int32_t x240 = -1661638;
	volatile int64_t t56 = 43268877594803LL;

    t56 = (((x237^x238)/x239)|x240);

    if (t56 != -1661638LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = 2629;
	static int64_t x242 = INT64_MIN;
	volatile uint16_t x243 = UINT16_MAX;
	uint64_t t57 = 405LLU;

    t57 = (((x241^x242)/x243)|x244);

    if (t57 != 18446603334073705227LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x245 = 116;
	uint64_t x246 = 92474221506696469LLU;
	uint64_t x248 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

    t58 = (((x245^x246)/x247)|x248);

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x249 = INT16_MIN;
	int64_t x250 = -1374139LL;
	int16_t x251 = -1;
	int8_t x252 = INT8_MAX;
	volatile int64_t t59 = 19876816160LL;

    t59 = (((x249^x250)/x251)|x252);

    if (t59 != -1345537LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = -1;
	uint16_t x254 = 822U;
	uint32_t x255 = 2048441U;
	volatile int32_t x256 = 936242895;

    t60 = (((x253^x254)/x255)|x256);

    if (t60 != 936242943U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	volatile uint64_t x259 = 1634198392375484826LLU;

    t61 = (((x257^x258)/x259)|x260);

    if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x261 = 12941606LLU;
	uint32_t x262 = UINT32_MAX;
	static uint32_t x263 = 3U;
	int8_t x264 = INT8_MAX;
	static uint64_t t62 = 33723733682LLU;

    t62 = (((x261^x262)/x263)|x264);

    if (t62 != 1427341951LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x265 = INT16_MIN;
	int64_t x268 = -11LL;
	int64_t t63 = 171802929556580LL;

    t63 = (((x265^x266)/x267)|x268);

    if (t63 != -11LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x269 = 42U;
	uint32_t x270 = 3U;
	int32_t x271 = 12095;
	volatile uint32_t x272 = 29504967U;
	uint32_t t64 = 364444U;

    t64 = (((x269^x270)/x271)|x272);

    if (t64 != 29504967U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = INT8_MIN;
	uint32_t x274 = UINT32_MAX;
	int64_t x275 = -3496LL;
	int64_t x276 = INT64_MIN;

    t65 = (((x273^x274)/x275)|x276);

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x281 = 466951132336LLU;
	static uint64_t x282 = UINT64_MAX;
	static int32_t x283 = INT32_MIN;
	uint64_t t66 = UINT64_MAX;

    t66 = (((x281^x282)/x283)|x284);

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = -113;
	volatile int8_t x286 = INT8_MIN;
	uint8_t x287 = UINT8_MAX;
	volatile uint8_t x288 = UINT8_MAX;
	static volatile int32_t t67 = 569338536;

    t67 = (((x285^x286)/x287)|x288);

    if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x289 = INT16_MAX;
	uint16_t x290 = UINT16_MAX;
	uint32_t x292 = 983568U;
	int64_t t68 = 7124LL;

    t68 = (((x289^x290)/x291)|x292);

    if (t68 != 983568LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x293 = -1LL;
	uint32_t x294 = 55499U;
	static int64_t x295 = INT64_MIN;
	uint32_t x296 = 753U;
	volatile int64_t t69 = 625LL;

    t69 = (((x293^x294)/x295)|x296);

    if (t69 != 753LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x297 = 0U;
	int16_t x298 = 7;
	int8_t x299 = -1;
	int64_t x300 = INT64_MIN;
	int64_t t70 = 29853125232LL;

    t70 = (((x297^x298)/x299)|x300);

    if (t70 != -7LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x301 = 41LLU;
	int8_t x303 = -1;
	volatile int16_t x304 = 1;
	uint64_t t71 = 52293694109LLU;

    t71 = (((x301^x302)/x303)|x304);

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x305 = -1;
	int16_t x306 = -2;
	volatile int64_t x307 = INT64_MAX;
	volatile uint8_t x308 = 54U;
	static volatile int64_t t72 = -903920431085904LL;

    t72 = (((x305^x306)/x307)|x308);

    if (t72 != 54LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = INT64_MIN;
	uint8_t x310 = 1U;
	volatile int16_t x311 = 310;
	static uint8_t x312 = UINT8_MAX;
	int64_t t73 = 227917136875LL;

    t73 = (((x309^x310)/x311)|x312);

    if (t73 != -29752813022112001LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = 6316835;
	int32_t x314 = -1;
	int64_t x316 = INT64_MIN;
	static int64_t t74 = 457378630743LL;

    t74 = (((x313^x314)/x315)|x316);

    if (t74 != -96LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x318 = INT64_MAX;
	volatile int64_t x319 = INT64_MIN;
	int64_t t75 = 267667LL;

    t75 = (((x317^x318)/x319)|x320);

    if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x322 = INT32_MAX;
	uint64_t x323 = 91LLU;
	int64_t x324 = -2885316648LL;
	uint64_t t76 = 36088346665619510LLU;

    t76 = (((x321^x322)/x323)|x324);

    if (t76 != 18446744071520100345LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x325 = 2U;
	int8_t x326 = -1;
	uint32_t x327 = 975U;
	int16_t x328 = INT16_MAX;

    t77 = (((x325^x326)/x327)|x328);

    if (t77 != 4423679U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x329 = 189635089;
	int16_t x330 = -1;
	volatile uint64_t x332 = UINT64_MAX;
	uint64_t t78 = UINT64_MAX;

    t78 = (((x329^x330)/x331)|x332);

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x333 = -148463;
	uint8_t x334 = 25U;
	int16_t x335 = -1;
	volatile int32_t t79 = -362;

    t79 = (((x333^x334)/x335)|x336);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x337 = -28;
	int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MAX;
	uint64_t x340 = 3LLU;
	uint64_t t80 = 885560LLU;

    t80 = (((x337^x338)/x339)|x340);

    if (t80 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = INT8_MIN;
	int32_t x342 = -1;
	int16_t x343 = 1619;
	volatile int32_t x344 = INT32_MAX;
	int32_t t81 = INT32_MAX;

    t81 = (((x341^x342)/x343)|x344);

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x345 = -1258;
	static int64_t x347 = INT64_MAX;
	static volatile uint32_t x348 = 6554087U;
	volatile int64_t t82 = -236009887202867825LL;

    t82 = (((x345^x346)/x347)|x348);

    if (t82 != 6554087LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x349 = UINT16_MAX;
	static int16_t x351 = -945;
	int16_t x352 = 34;
	int64_t t83 = -28333070317185355LL;

    t83 = (((x349^x350)/x351)|x352);

    if (t83 != -6025477637LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x353 = -1LL;
	static int64_t x354 = 16125552743049413LL;
	static int16_t x356 = -1;
	static int64_t t84 = 2822LL;

    t84 = (((x353^x354)/x355)|x356);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x357 = INT16_MAX;
	int64_t x358 = INT64_MIN;
	int32_t x359 = 13480;
	static int32_t x360 = -1;

    t85 = (((x357^x358)/x359)|x360);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x361 = -105993;
	uint8_t x363 = 17U;

    t86 = (((x361^x362)/x363)|x364);

    if (t86 != -32929) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x365 = 15989U;
	int64_t x366 = INT64_MIN;
	volatile int64_t t87 = 15020566145873536LL;

    t87 = (((x365^x366)/x367)|x368);

    if (t87 != -65LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x369 = INT32_MAX;
	int16_t x372 = 4;

    t88 = (((x369^x370)/x371)|x372);

    if (t88 != -2147483643) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x373 = 2U;
	volatile int8_t x374 = -1;
	int8_t x375 = INT8_MAX;
	int64_t x376 = -1LL;
	int64_t t89 = -49340565841599945LL;

    t89 = (((x373^x374)/x375)|x376);

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x377 = -1;
	int8_t x379 = -1;
	int32_t x380 = INT32_MIN;
	volatile int32_t t90 = 60083;

    t90 = (((x377^x378)/x379)|x380);

    if (t90 != -2147478341) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x381 = INT8_MIN;
	volatile uint8_t x382 = UINT8_MAX;
	int64_t x383 = -1325095359659442LL;
	volatile int16_t x384 = -1;
	int64_t t91 = -2069LL;

    t91 = (((x381^x382)/x383)|x384);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x385 = INT16_MIN;
	static int32_t x386 = -1;
	int64_t x388 = -1385318943494LL;
	int64_t t92 = -3271746144552500376LL;

    t92 = (((x385^x386)/x387)|x388);

    if (t92 != -1385318943494LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x390 = UINT32_MAX;
	static int32_t x391 = INT32_MIN;
	static int64_t x392 = INT64_MIN;
	static volatile int64_t t93 = -1838783376LL;

    t93 = (((x389^x390)/x391)|x392);

    if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x393 = 9;
	volatile uint64_t x395 = 1152LLU;
	static int16_t x396 = INT16_MIN;
	static volatile uint64_t t94 = 1708LLU;

    t94 = (((x393^x394)/x395)|x396);

    if (t94 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x397 = 34445LLU;
	uint64_t x398 = 15656765LLU;
	static uint64_t t95 = 969620704LLU;

    t95 = (((x397^x398)/x399)|x400);

    if (t95 != 18446744073709547345LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x401 = -8;
	int8_t x402 = -1;
	volatile int8_t x403 = -21;
	static int64_t x404 = -36716212375240029LL;
	static int64_t t96 = -405491177LL;

    t96 = (((x401^x402)/x403)|x404);

    if (t96 != -36716212375240029LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x405 = UINT32_MAX;
	int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MIN;
	static volatile int8_t x408 = 3;
	uint32_t t97 = 28222U;

    t97 = (((x405^x406)/x407)|x408);

    if (t97 != 3U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x409 = 191618U;
	static int32_t x410 = INT32_MIN;
	uint16_t x411 = 17U;
	int8_t x412 = INT8_MIN;
	volatile uint32_t t98 = 7U;

    t98 = (((x409^x410)/x411)|x412);

    if (t98 != 4294967183U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x413 = 3U;
	uint16_t x414 = 1U;
	uint8_t x415 = 14U;
	static int32_t x416 = 3115;

    t99 = (((x413^x414)/x415)|x416);

    if (t99 != 3115) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x417 = 1679U;
	volatile uint8_t x418 = 17U;
	uint32_t x419 = 28U;
	uint8_t x420 = 98U;
	uint32_t t100 = 372678U;

    t100 = (((x417^x418)/x419)|x420);

    if (t100 != 126U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x421 = UINT8_MAX;
	uint32_t x422 = UINT32_MAX;
	uint16_t x423 = 44U;
	static int32_t x424 = INT32_MIN;

    t101 = (((x421^x422)/x423)|x424);

    if (t101 != 2245096535U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x425 = INT64_MIN;
	volatile uint32_t x426 = 82U;
	uint64_t x428 = 56LLU;
	volatile uint64_t t102 = 1291LLU;

    t102 = (((x425^x426)/x427)|x428);

    if (t102 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x429 = 498;
	int64_t x430 = INT64_MAX;
	volatile int32_t x431 = INT32_MAX;
	int64_t x432 = -108740LL;
	int64_t t103 = 3590192907269LL;

    t103 = (((x429^x430)/x431)|x432);

    if (t103 != -108739LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = -14;
	int8_t x434 = INT8_MAX;
	static int16_t x435 = 91;
	volatile int64_t t104 = -3367LL;

    t104 = (((x433^x434)/x435)|x436);

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x437 = UINT8_MAX;
	uint16_t x438 = 735U;
	int16_t x439 = -7133;
	int64_t x440 = INT64_MIN;
	volatile int64_t t105 = INT64_MIN;

    t105 = (((x437^x438)/x439)|x440);

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x441 = 3U;
	uint16_t x442 = 77U;
	volatile int64_t x443 = INT64_MAX;
	int16_t x444 = -350;
	static volatile int64_t t106 = -345659881542LL;

    t106 = (((x441^x442)/x443)|x444);

    if (t106 != -350LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x445 = INT32_MIN;
	int8_t x446 = 1;
	int32_t x448 = -1;
	volatile int32_t t107 = -23733053;

    t107 = (((x445^x446)/x447)|x448);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x449 = UINT64_MAX;
	int64_t x451 = INT64_MIN;
	uint32_t x452 = UINT32_MAX;
	volatile uint64_t t108 = 140084226931631919LLU;

    t108 = (((x449^x450)/x451)|x452);

    if (t108 != 4294967295LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x453 = INT8_MIN;
	uint64_t x455 = 17369168365835LLU;
	int8_t x456 = INT8_MIN;
	static volatile uint64_t t109 = 87803331560LLU;

    t109 = (((x453^x454)/x455)|x456);

    if (t109 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x457 = INT16_MAX;
	uint32_t x458 = 0U;
	volatile int64_t x459 = 270614725454LL;
	static uint16_t x460 = 0U;
	volatile int64_t t110 = -60453183974289LL;

    t110 = (((x457^x458)/x459)|x460);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x461 = 116135LLU;
	int32_t x462 = 11176;
	static int8_t x464 = 8;
	uint64_t t111 = 2495660335LLU;

    t111 = (((x461^x462)/x463)|x464);

    if (t111 != 8LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x465 = INT64_MIN;
	static int64_t x466 = 2319449866LL;
	static int8_t x468 = INT8_MIN;
	volatile int64_t t112 = -1684854037LL;

    t112 = (((x465^x466)/x467)|x468);

    if (t112 != -128LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x469 = UINT8_MAX;
	uint8_t x470 = 0U;
	int16_t x471 = -923;
	static uint32_t x472 = UINT32_MAX;
	uint32_t t113 = UINT32_MAX;

    t113 = (((x469^x470)/x471)|x472);

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MAX;
	int64_t x475 = -1LL;
	static volatile int32_t x476 = -1298156;
	volatile int64_t t114 = 11LL;

    t114 = (((x473^x474)/x475)|x476);

    if (t114 != -1298155LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x477 = INT8_MIN;
	int64_t x478 = -4048808819022230LL;
	int64_t x479 = INT64_MIN;
	int8_t x480 = 5;
	int64_t t115 = 1272LL;

    t115 = (((x477^x478)/x479)|x480);

    if (t115 != 5LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x481 = 11568473974116788LLU;
	static volatile uint16_t x482 = UINT16_MAX;
	uint16_t x483 = UINT16_MAX;
	uint64_t x484 = UINT64_MAX;

    t116 = (((x481^x482)/x483)|x484);

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x485 = 4LLU;
	volatile int8_t x486 = INT8_MAX;
	int64_t x488 = -1LL;
	uint64_t t117 = UINT64_MAX;

    t117 = (((x485^x486)/x487)|x488);

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x490 = INT8_MIN;
	uint8_t x491 = 110U;
	int16_t x492 = INT16_MAX;
	uint32_t t118 = 9335U;

    t118 = (((x489^x490)/x491)|x492);

    if (t118 != 39059455U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x493 = -123;
	int64_t x494 = -388286LL;
	int32_t x496 = INT32_MAX;
	volatile int64_t t119 = -1551LL;

    t119 = (((x493^x494)/x495)|x496);

    if (t119 != 2147483647LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x497 = UINT16_MAX;
	volatile int64_t x498 = -1LL;

    t120 = (((x497^x498)/x499)|x500);

    if (t120 != -513LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x501 = 5520U;
	int64_t x502 = INT64_MAX;
	static uint16_t x503 = 100U;
	uint64_t x504 = UINT64_MAX;
	static volatile uint64_t t121 = UINT64_MAX;

    t121 = (((x501^x502)/x503)|x504);

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = INT8_MIN;
	int8_t x506 = 2;
	static int8_t x508 = -1;
	volatile int64_t t122 = 732738771454466LL;

    t122 = (((x505^x506)/x507)|x508);

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = INT32_MIN;
	volatile uint16_t x510 = 456U;
	int16_t x511 = -1;
	int32_t x512 = INT32_MAX;

    t123 = (((x509^x510)/x511)|x512);

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = -131;
	static volatile int64_t x515 = -1LL;
	static uint32_t x516 = UINT32_MAX;
	volatile int64_t t124 = -19004004261LL;

    t124 = (((x513^x514)/x515)|x516);

    if (t124 != 4294967295LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x517 = 27U;
	int64_t x518 = INT64_MAX;
	int16_t x519 = -29;
	static volatile uint64_t t125 = UINT64_MAX;

    t125 = (((x517^x518)/x519)|x520);

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x523 = UINT8_MAX;
	volatile int64_t x524 = INT64_MIN;

    t126 = (((x521^x522)/x523)|x524);

    if (t126 != 9294165012734290926LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x525 = INT32_MIN;
	static int8_t x526 = 7;
	int16_t x527 = 13525;
	static int32_t t127 = -2;

    t127 = (((x525^x526)/x527)|x528);

    if (t127 != -58) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x529 = INT8_MAX;
	static int16_t x530 = -27;
	static volatile int8_t x531 = INT8_MAX;
	uint8_t x532 = 26U;
	static int32_t t128 = 791886767;

    t128 = (((x529^x530)/x531)|x532);

    if (t128 != 26) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x533 = 0;
	uint8_t x534 = 34U;
	uint16_t x535 = 775U;
	volatile uint64_t x536 = 1427145319478004LLU;
	volatile uint64_t t129 = 215425758LLU;

    t129 = (((x533^x534)/x535)|x536);

    if (t129 != 1427145319478004LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x537 = INT16_MIN;
	static int16_t x538 = 498;
	int16_t x539 = -223;
	int8_t x540 = -1;
	volatile int32_t t130 = 5956896;

    t130 = (((x537^x538)/x539)|x540);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x542 = 1426U;
	uint16_t x543 = 2U;
	int16_t x544 = -1;
	volatile uint32_t t131 = UINT32_MAX;

    t131 = (((x541^x542)/x543)|x544);

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x545 = -1;
	volatile uint16_t x546 = 50U;
	volatile uint8_t x547 = UINT8_MAX;
	uint8_t x548 = UINT8_MAX;
	volatile int32_t t132 = 43;

    t132 = (((x545^x546)/x547)|x548);

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x550 = UINT64_MAX;
	int8_t x551 = -1;

    t133 = (((x549^x550)/x551)|x552);

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x553 = 24;
	int16_t x554 = -6;
	int16_t x555 = INT16_MIN;
	int16_t x556 = INT16_MIN;
	volatile int32_t t134 = 0;

    t134 = (((x553^x554)/x555)|x556);

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x557 = 49U;
	uint8_t x559 = UINT8_MAX;
	volatile int64_t x560 = INT64_MIN;
	volatile uint64_t t135 = 433493029713LLU;

    t135 = (((x557^x558)/x559)|x560);

    if (t135 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x561 = UINT8_MAX;
	static volatile int8_t x562 = INT8_MAX;
	static volatile int64_t t136 = -339779620845898034LL;

    t136 = (((x561^x562)/x563)|x564);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x566 = INT64_MIN;
	volatile int32_t x567 = 522;
	uint32_t x568 = 1746976U;
	int64_t t137 = 1921094986216LL;

    t137 = (((x565^x566)/x567)|x568);

    if (t137 != 1746976LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x569 = -121;
	uint16_t x570 = 17U;
	int8_t x571 = 1;
	static int32_t x572 = INT32_MAX;
	volatile int32_t t138 = 892854515;

    t138 = (((x569^x570)/x571)|x572);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x573 = -15;
	int64_t x576 = 112606087584LL;
	uint64_t t139 = 39020993457LLU;

    t139 = (((x573^x574)/x575)|x576);

    if (t139 != 112606087584LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x577 = UINT16_MAX;
	int32_t x578 = INT32_MIN;
	volatile uint64_t x579 = 1157247326154758LLU;
	volatile uint64_t t140 = 29LLU;

    t140 = (((x577^x578)/x579)|x580);

    if (t140 != 208093044LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x582 = 93U;
	uint16_t x583 = 1082U;
	int16_t x584 = INT16_MAX;
	volatile int32_t t141 = -57153;

    t141 = (((x581^x582)/x583)|x584);

    if (t141 != 32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x585 = -210191822;
	volatile int8_t x586 = INT8_MIN;
	uint32_t x588 = UINT32_MAX;
	uint32_t t142 = UINT32_MAX;

    t142 = (((x585^x586)/x587)|x588);

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x589 = INT32_MAX;
	static int16_t x592 = 3995;

    t143 = (((x589^x590)/x591)|x592);

    if (t143 != 14286843LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x594 = INT8_MIN;
	uint32_t x595 = 47939U;
	int8_t x596 = -3;
	uint32_t t144 = UINT32_MAX;

    t144 = (((x593^x594)/x595)|x596);

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x598 = INT32_MIN;
	int8_t x599 = INT8_MIN;
	static int32_t x600 = INT32_MAX;
	int32_t t145 = -27;

    t145 = (((x597^x598)/x599)|x600);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x603 = INT32_MAX;
	uint32_t x604 = UINT32_MAX;
	volatile int64_t t146 = -613LL;

    t146 = (((x601^x602)/x603)|x604);

    if (t146 != 4294967295LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x605 = UINT16_MAX;
	int16_t x606 = 1414;
	int16_t x607 = 1;
	int64_t x608 = INT64_MAX;
	int64_t t147 = INT64_MAX;

    t147 = (((x605^x606)/x607)|x608);

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x609 = -1;
	int32_t x611 = INT32_MIN;
	int16_t x612 = INT16_MIN;
	int32_t t148 = 77399;

    t148 = (((x609^x610)/x611)|x612);

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x613 = -15;
	volatile int8_t x614 = -57;
	static uint8_t x615 = 2U;
	volatile int32_t x616 = 1;
	volatile int32_t t149 = -510;

    t149 = (((x613^x614)/x615)|x616);

    if (t149 != 27) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x617 = INT64_MIN;
	volatile int16_t x618 = INT16_MIN;
	volatile uint8_t x619 = 3U;
	int32_t x620 = 4908;
	volatile int64_t t150 = -193219730LL;

    t150 = (((x617^x618)/x619)|x620);

    if (t150 != 3074457345618252588LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x621 = UINT32_MAX;
	static uint8_t x622 = 52U;
	int16_t x623 = INT16_MIN;
	int64_t x624 = INT64_MIN;
	volatile int64_t t151 = 46037283504805LL;

    t151 = (((x621^x622)/x623)|x624);

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x626 = UINT64_MAX;
	uint8_t x628 = UINT8_MAX;
	uint64_t t152 = 7548LLU;

    t152 = (((x625^x626)/x627)|x628);

    if (t152 != 255LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x629 = INT8_MIN;
	uint16_t x630 = UINT16_MAX;
	static uint16_t x631 = UINT16_MAX;
	int16_t x632 = 0;
	int32_t t153 = 8;

    t153 = (((x629^x630)/x631)|x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x633 = -22;
	int64_t x634 = INT64_MIN;
	volatile uint8_t x635 = 18U;
	int64_t t154 = -1591293117402LL;

    t154 = (((x633^x634)/x635)|x636);

    if (t154 != -8710962479251732709LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x637 = INT64_MIN;
	int8_t x638 = -1;
	int64_t x639 = INT64_MIN;
	volatile uint64_t x640 = 429LLU;
	uint64_t t155 = 19052366781407LLU;

    t155 = (((x637^x638)/x639)|x640);

    if (t155 != 429LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x642 = INT8_MIN;
	int64_t x643 = -1LL;
	static int64_t t156 = -62600701LL;

    t156 = (((x641^x642)/x643)|x644);

    if (t156 != -32768LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x645 = 319U;
	static int8_t x646 = INT8_MAX;
	static int16_t x648 = INT16_MAX;
	int32_t t157 = 1;

    t157 = (((x645^x646)/x647)|x648);

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x650 = INT32_MAX;
	int16_t x651 = -6242;
	uint64_t x652 = UINT64_MAX;

    t158 = (((x649^x650)/x651)|x652);

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x653 = INT64_MAX;
	static uint8_t x656 = UINT8_MAX;

    t159 = (((x653^x654)/x655)|x656);

    if (t159 != 3074457345618258687LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x657 = INT32_MIN;
	uint8_t x659 = 5U;
	static int16_t x660 = INT16_MIN;
	volatile int32_t t160 = -615737379;

    t160 = (((x657^x658)/x659)|x660);

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x661 = INT32_MIN;
	int8_t x662 = INT8_MIN;
	uint8_t x663 = 108U;
	volatile int32_t x664 = 251;
	static volatile int32_t t161 = -20830;

    t161 = (((x661^x662)/x663)|x664);

    if (t161 != 19884283) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x665 = INT8_MIN;
	uint32_t x666 = 360164U;
	int64_t x667 = INT64_MAX;
	volatile int64_t t162 = 90357052383346155LL;

    t162 = (((x665^x666)/x667)|x668);

    if (t162 != 4294967295LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x669 = 45U;
	int16_t x670 = INT16_MAX;
	static int32_t x671 = -166993;
	int32_t t163 = -53;

    t163 = (((x669^x670)/x671)|x672);

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x673 = INT8_MIN;
	uint32_t x675 = UINT32_MAX;
	int64_t x676 = INT64_MAX;
	uint64_t t164 = 1LLU;

    t164 = (((x673^x674)/x675)|x676);

    if (t164 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x677 = 6U;
	static int8_t x678 = INT8_MAX;
	volatile uint8_t x679 = 1U;
	static int32_t x680 = -131373575;
	static int32_t t165 = -45;

    t165 = (((x677^x678)/x679)|x680);

    if (t165 != -131373575) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x681 = 23;
	volatile uint64_t x682 = UINT64_MAX;
	uint32_t x683 = 4U;
	static uint16_t x684 = 1U;
	volatile uint64_t t166 = 459422LLU;

    t166 = (((x681^x682)/x683)|x684);

    if (t166 != 4611686018427387899LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x685 = -1;
	int8_t x686 = INT8_MIN;
	int8_t x687 = INT8_MAX;
	static uint32_t x688 = 169U;
	static uint32_t t167 = 75752U;

    t167 = (((x685^x686)/x687)|x688);

    if (t167 != 169U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x689 = UINT64_MAX;
	volatile uint8_t x690 = 15U;
	static int16_t x691 = -13;
	int8_t x692 = -1;
	volatile uint64_t t168 = UINT64_MAX;

    t168 = (((x689^x690)/x691)|x692);

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x693 = -1;
	volatile int16_t x694 = INT16_MIN;
	int64_t x695 = -879753LL;
	int16_t x696 = 966;

    t169 = (((x693^x694)/x695)|x696);

    if (t169 != 966LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x701 = -1;
	int8_t x702 = -4;
	int32_t x703 = -1;
	uint32_t x704 = UINT32_MAX;
	volatile uint32_t t170 = UINT32_MAX;

    t170 = (((x701^x702)/x703)|x704);

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x705 = UINT32_MAX;
	uint8_t x707 = 5U;
	uint8_t x708 = UINT8_MAX;
	volatile int64_t t171 = 258638497956LL;

    t171 = (((x705^x706)/x707)|x708);

    if (t171 != -1844674406511961601LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x709 = INT64_MIN;
	static volatile int64_t x710 = INT64_MIN;
	uint16_t x711 = 3U;
	int16_t x712 = INT16_MAX;

    t172 = (((x709^x710)/x711)|x712);

    if (t172 != 32767LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x714 = -1LL;
	int8_t x715 = -61;

    t173 = (((x713^x714)/x715)|x716);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x717 = INT16_MAX;
	int16_t x718 = -1;
	static int32_t x720 = INT32_MIN;
	volatile int32_t t174 = -4992089;

    t174 = (((x717^x718)/x719)|x720);

    if (t174 != -2147450880) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = 81;
	uint16_t x723 = 2194U;
	int16_t x724 = 58;
	static int32_t t175 = 6249743;

    t175 = (((x721^x722)/x723)|x724);

    if (t175 != 62) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x725 = INT64_MAX;
	volatile uint64_t x726 = 3781384904173790LLU;
	int64_t x728 = INT64_MIN;
	volatile uint64_t t176 = 1980888199718LLU;

    t176 = (((x725^x726)/x727)|x728);

    if (t176 != 9223399041546103023LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = INT8_MIN;
	int32_t x730 = INT32_MIN;
	int32_t x731 = INT32_MIN;
	int8_t x732 = INT8_MIN;
	volatile int32_t t177 = 108;

    t177 = (((x729^x730)/x731)|x732);

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x733 = -1943319;
	uint32_t x735 = 207740917U;
	static uint32_t x736 = UINT32_MAX;
	volatile int64_t t178 = 9980548363LL;

    t178 = (((x733^x734)/x735)|x736);

    if (t178 != 47244640255LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = INT32_MIN;
	static uint64_t x738 = 731043LLU;
	static int16_t x739 = -1;
	static int8_t x740 = INT8_MIN;
	uint64_t t179 = 1044179012LLU;

    t179 = (((x737^x738)/x739)|x740);

    if (t179 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x742 = 164927;
	uint32_t x744 = 15U;
	uint32_t t180 = 1738019U;

    t180 = (((x741^x742)/x743)|x744);

    if (t180 != 15U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x746 = -1;
	volatile int32_t x747 = 219709064;
	volatile uint16_t x748 = 3688U;
	static uint32_t t181 = 454U;

    t181 = (((x745^x746)/x747)|x748);

    if (t181 != 3688U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x749 = 521616462U;
	int32_t x750 = -3;
	uint64_t x751 = 2459822LLU;
	volatile uint8_t x752 = 87U;

    t182 = (((x749^x750)/x751)|x752);

    if (t182 != 1535LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x753 = -76554159085127LL;
	volatile int32_t x754 = -1;
	static int16_t x755 = 54;
	volatile int64_t t183 = 6LL;

    t183 = (((x753^x754)/x755)|x756);

    if (t183 != 1417669612687LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x757 = 117U;
	int16_t x758 = -1;
	int32_t x759 = 442977368;
	int8_t x760 = INT8_MIN;
	volatile int32_t t184 = 1460;

    t184 = (((x757^x758)/x759)|x760);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x762 = INT16_MIN;
	int8_t x763 = INT8_MIN;
	int32_t x764 = 15;
	int32_t t185 = 77;

    t185 = (((x761^x762)/x763)|x764);

    if (t185 != 271) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x765 = 87U;
	int64_t x766 = INT64_MIN;
	int32_t x767 = INT32_MIN;
	static volatile int16_t x768 = 3782;
	volatile int64_t t186 = 2169827801236000LL;

    t186 = (((x765^x766)/x767)|x768);

    if (t186 != 4294967295LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x769 = 40U;
	int8_t x770 = -7;
	int8_t x771 = INT8_MAX;
	volatile int32_t x772 = INT32_MIN;
	uint32_t t187 = 3U;

    t187 = (((x769^x770)/x771)|x772);

    if (t187 != 2181302287U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x773 = INT16_MIN;
	uint64_t x775 = UINT64_MAX;
	volatile uint64_t t188 = 58390LLU;

    t188 = (((x773^x774)/x775)|x776);

    if (t188 != 163855250LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x777 = -1;
	volatile uint16_t x778 = 124U;
	int16_t x779 = 1;
	int64_t x780 = INT64_MAX;
	volatile int64_t t189 = -8LL;

    t189 = (((x777^x778)/x779)|x780);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x781 = INT64_MIN;
	uint8_t x783 = 3U;
	int8_t x784 = INT8_MIN;
	static volatile int64_t t190 = -6689215664LL;

    t190 = (((x781^x782)/x783)|x784);

    if (t190 != -86LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x786 = 8164736939LLU;
	static int64_t x787 = INT64_MIN;
	int64_t x788 = -7852879061301469LL;
	volatile uint64_t t191 = 585608586020041058LLU;

    t191 = (((x785^x786)/x787)|x788);

    if (t191 != 18438891194648250147LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x789 = 0;
	static int8_t x790 = INT8_MAX;
	volatile uint64_t x791 = 13926057560532LLU;
	int32_t x792 = 387099;
	volatile uint64_t t192 = 107939173901439027LLU;

    t192 = (((x789^x790)/x791)|x792);

    if (t192 != 387099LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x793 = UINT16_MAX;
	static int16_t x794 = 1;
	int16_t x795 = INT16_MIN;

    t193 = (((x793^x794)/x795)|x796);

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	volatile int8_t x798 = 1;
	int64_t x800 = INT64_MIN;
	volatile int64_t t194 = 13LL;

    t194 = (((x797^x798)/x799)|x800);

    if (t194 != -4294967294LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x802 = -14;
	int64_t x803 = INT64_MAX;
	volatile int64_t t195 = INT64_MAX;

    t195 = (((x801^x802)/x803)|x804);

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x805 = UINT16_MAX;
	uint16_t x806 = UINT16_MAX;
	int8_t x807 = INT8_MIN;
	static volatile int32_t t196 = 86;

    t196 = (((x805^x806)/x807)|x808);

    if (t196 != 25) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x809 = 74;
	int64_t x810 = INT64_MIN;
	int8_t x811 = 1;

    t197 = (((x809^x810)/x811)|x812);

    if (t197 != -17LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x813 = 227172LLU;
	uint32_t x814 = UINT32_MAX;
	uint8_t x816 = UINT8_MAX;
	uint64_t t198 = 15LLU;

    t198 = (((x813^x814)/x815)|x816);

    if (t198 != 255LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x818 = INT32_MAX;
	uint64_t x819 = UINT64_MAX;
	volatile uint64_t t199 = 7573126LLU;

    t199 = (((x817^x818)/x819)|x820);

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

