
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

volatile int32_t x1 = INT32_MAX;
uint8_t x4 = UINT8_MAX;
static int32_t x17 = INT32_MIN;
volatile int32_t t3 = 434977;
static uint32_t x37 = 29003862U;
static volatile int64_t t9 = 66162107485927391LL;
int64_t x59 = INT64_MIN;
int16_t x62 = 3392;
volatile int64_t t16 = 51718502587686LL;
volatile uint32_t x81 = 38756U;
uint32_t x83 = 1813032U;
uint8_t x87 = 0U;
int8_t x91 = INT8_MIN;
volatile uint64_t t21 = 947778LLU;
volatile int16_t x95 = -393;
int32_t x96 = -1;
volatile uint16_t x97 = UINT16_MAX;
volatile int64_t t23 = 3306287758605LL;
int64_t x106 = INT64_MAX;
volatile int16_t x111 = -1;
int32_t x113 = INT32_MIN;
volatile uint64_t x114 = UINT64_MAX;
volatile int32_t t29 = 7234604;
static volatile int8_t x127 = INT8_MIN;
static int8_t x129 = -1;
volatile uint64_t t31 = 629673730353LLU;
int32_t x135 = INT32_MIN;
int8_t x136 = INT8_MAX;
int8_t x138 = -1;
static int16_t x140 = -90;
int8_t x141 = 40;
static uint8_t x153 = 74U;
int16_t x156 = INT16_MIN;
int8_t x178 = -1;
int32_t x179 = 641;
int32_t t42 = 7;
int8_t x189 = INT8_MIN;
volatile uint8_t x198 = UINT8_MAX;
volatile int16_t x199 = INT16_MAX;
int64_t x201 = INT64_MIN;
uint16_t x205 = UINT16_MAX;
uint8_t x206 = UINT8_MAX;
volatile uint8_t x207 = UINT8_MAX;
int32_t x208 = -1;
int8_t x212 = -1;
uint16_t x223 = 4627U;
int64_t t52 = -453029985261LL;
volatile int8_t x234 = -42;
volatile uint32_t t56 = 127259405U;
volatile int64_t t57 = -67927251085LL;
uint8_t x245 = UINT8_MAX;
static uint8_t x246 = 1U;
uint16_t x248 = UINT16_MAX;
uint8_t x253 = UINT8_MAX;
volatile int16_t x256 = INT16_MIN;
volatile uint64_t t61 = 14529267895038527LLU;
int16_t x261 = -1;
volatile int64_t x267 = 29LL;
static int32_t x268 = INT32_MIN;
static int32_t x270 = INT32_MIN;
static uint64_t x292 = 57LLU;
static int16_t x294 = 143;
uint32_t x297 = 0U;
int16_t x304 = INT16_MIN;
uint16_t x310 = 23U;
uint32_t x319 = 6U;
static uint8_t x321 = 24U;
static int32_t x323 = INT32_MIN;
static uint64_t x325 = 33148019LLU;
uint64_t x329 = 2LLU;
volatile int32_t x339 = INT32_MIN;
volatile int8_t x342 = 6;
int16_t x343 = -1;
int8_t x350 = 1;
int16_t x351 = INT16_MIN;
uint32_t x358 = 932788336U;
static volatile int64_t t85 = 1712127152405752LL;
volatile int8_t x370 = INT8_MAX;
int16_t x385 = -4421;
static int64_t t92 = -206286114266LL;
static uint16_t x393 = 127U;
uint64_t t94 = 175141686795957821LLU;
int32_t t96 = 818;
int64_t x405 = -168152815676LL;
uint8_t x411 = 6U;
int16_t x412 = INT16_MIN;
int64_t x413 = -1LL;
volatile int64_t x414 = INT64_MAX;
uint16_t x422 = UINT16_MAX;
int64_t x430 = -51LL;
int8_t x441 = -1;
static int32_t x442 = INT32_MIN;
int64_t t105 = 1885981764LL;
volatile int64_t x450 = 946LL;
static volatile uint16_t x452 = UINT16_MAX;
static volatile int64_t t107 = 1026577LL;
int8_t x456 = INT8_MIN;
int64_t x460 = INT64_MAX;
int32_t t113 = 58931;
int64_t x486 = 14LL;
volatile int32_t x491 = -1;
int64_t x492 = INT64_MAX;
int8_t x495 = -9;
static volatile int32_t t117 = 113204441;
static uint16_t x497 = 539U;
volatile uint64_t t118 = 6695414240770439895LLU;
uint8_t x502 = UINT8_MAX;
static uint16_t x505 = 0U;
int64_t x507 = INT64_MIN;
static uint32_t x509 = UINT32_MAX;
int64_t x515 = INT64_MIN;
uint32_t x516 = UINT32_MAX;
uint64_t x519 = UINT64_MAX;
int8_t x520 = INT8_MAX;
int8_t x523 = INT8_MIN;
uint32_t x524 = UINT32_MAX;
static volatile uint16_t x526 = 5U;
uint8_t x527 = UINT8_MAX;
volatile int32_t t125 = 2;
static int32_t x530 = 10966;
int64_t x532 = INT64_MIN;
int64_t t126 = -157301473965LL;
int16_t x536 = -1;
volatile uint64_t x538 = 52482298LLU;
static uint16_t x542 = UINT16_MAX;
int16_t x543 = INT16_MAX;
uint32_t x548 = UINT32_MAX;
int32_t x551 = INT32_MIN;
volatile uint32_t t135 = 3U;
static int64_t x574 = INT64_MIN;
int8_t x575 = 0;
int32_t x585 = 161543390;
static int16_t x586 = INT16_MIN;
int32_t x591 = INT32_MAX;
volatile int16_t x597 = -530;
int16_t x599 = 1;
uint32_t x600 = 210177U;
uint16_t x607 = UINT16_MAX;
int64_t x617 = INT64_MAX;
int8_t x618 = INT8_MAX;
int16_t x624 = -1;
int32_t x634 = -1;
int8_t x640 = INT8_MIN;
static int16_t x655 = -8538;
int16_t x659 = -37;
int8_t x672 = INT8_MIN;
int16_t x676 = -1;
uint64_t x681 = 135129188151636117LLU;
uint64_t t162 = 17531488221589LLU;
int8_t x689 = INT8_MAX;
volatile uint32_t t164 = 36U;
int32_t x695 = -1;
int16_t x698 = 1319;
int8_t x700 = -4;
static volatile int16_t x702 = INT16_MIN;
int32_t x703 = INT32_MIN;
uint32_t x708 = 1189247U;
uint16_t x713 = UINT16_MAX;
static int8_t x715 = 15;
static int8_t x717 = 7;
uint32_t x719 = UINT32_MAX;
int64_t x720 = INT64_MAX;
int64_t x729 = INT64_MIN;
volatile int64_t x734 = -22LL;
static int8_t x736 = INT8_MAX;
int64_t x737 = INT64_MIN;
uint32_t x739 = 148U;
uint32_t x752 = 26203U;
static int32_t x755 = -1;
uint32_t x761 = 1029004525U;
int16_t x771 = INT16_MIN;
int8_t x772 = INT8_MIN;
uint8_t x785 = UINT8_MAX;
int8_t x787 = 1;
volatile int16_t x800 = -28;
volatile uint16_t x803 = UINT16_MAX;
static int16_t x805 = -1;
static uint32_t x806 = UINT32_MAX;
int32_t x811 = -5;
int8_t x813 = INT8_MAX;
int64_t x827 = INT64_MIN;
int64_t t197 = -42735780471198LL;
volatile int64_t x834 = -60LL;
int64_t x837 = -1LL;


void f0(void) {
    	static int8_t x2 = INT8_MAX;
	volatile uint64_t x3 = 397602444779568908LLU;
	volatile uint64_t t0 = 867817716LLU;

    t0 = ((x1^x2)-(x3%x4));

    if (t0 != 2147483452LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x9 = 14447U;
	static int8_t x10 = 1;
	int32_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t1 = 364489994U;

    t1 = ((x9^x10)-(x11%x12));

    if (t1 != 14446U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = UINT16_MAX;
	uint32_t x14 = 281767U;
	volatile int32_t x15 = INT32_MAX;
	uint64_t x16 = 15505923478LLU;
	volatile uint64_t t2 = 1LLU;

    t2 = ((x13^x14)-(x15%x16));

    if (t2 != 18446744071562376025LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x18 = -63808;
	volatile int32_t x19 = 24738600;
	static int8_t x20 = 6;

    t3 = ((x17^x18)-(x19%x20));

    if (t3 != 2147419840) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MAX;
	uint64_t x22 = 2LLU;
	int16_t x23 = 2337;
	uint16_t x24 = UINT16_MAX;
	static uint64_t t4 = 24333LLU;

    t4 = ((x21^x22)-(x23%x24));

    if (t4 != 2147481308LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x25 = 29652082753191LLU;
	uint8_t x26 = UINT8_MAX;
	static uint16_t x27 = UINT16_MAX;
	int8_t x28 = 7;
	volatile uint64_t t5 = 1082277699863668LLU;

    t5 = ((x25^x26)-(x27%x28));

    if (t5 != 29652082753111LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = 0;
	uint32_t x30 = 10561U;
	volatile int16_t x31 = INT16_MAX;
	int8_t x32 = 30;
	uint32_t t6 = 1381926136U;

    t6 = ((x29^x30)-(x31%x32));

    if (t6 != 10554U) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x33 = 11460LLU;
	int32_t x34 = 475;
	int32_t x35 = INT32_MAX;
	static uint16_t x36 = 6631U;
	volatile uint64_t t7 = 29184136961LLU;

    t7 = ((x33^x34)-(x35%x36));

    if (t7 != 10409LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = -1;
	static int32_t x39 = INT32_MIN;
	volatile uint16_t x40 = 120U;
	uint32_t t8 = 19041U;

    t8 = ((x37^x38)-(x39%x40));

    if (t8 != 4265963441U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -38975LL;
	int16_t x42 = -542;
	int32_t x43 = -1;
	int8_t x44 = -15;

    t9 = ((x41^x42)-(x43%x44));

    if (t9 != 39460LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 8839U;
	static int64_t x46 = INT64_MAX;
	static int64_t x47 = INT64_MIN;
	int32_t x48 = -1;
	int64_t t10 = 171558LL;

    t10 = ((x45^x46)-(x47%x48));

    if (t10 != 9223372036854766968LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = UINT16_MAX;
	int32_t x50 = 299643561;
	volatile uint16_t x51 = UINT16_MAX;
	int16_t x52 = INT16_MAX;
	volatile int32_t t11 = 4230860;

    t11 = ((x49^x50)-(x51%x52));

    if (t11 != 299683157) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 2575884634473172LLU;
	static uint16_t x54 = 27U;
	int64_t x55 = 284946656LL;
	volatile int32_t x56 = INT32_MIN;
	uint64_t t12 = 379675633364047713LLU;

    t12 = ((x53^x54)-(x55%x56));

    if (t12 != 2575884349526511LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x57 = INT16_MIN;
	int8_t x58 = 3;
	static volatile int64_t x60 = INT64_MIN;
	int64_t t13 = -83410500LL;

    t13 = ((x57^x58)-(x59%x60));

    if (t13 != -32765LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x61 = 40175957LL;
	static uint64_t x63 = 317485697LLU;
	static uint32_t x64 = UINT32_MAX;
	uint64_t t14 = 65461816852LLU;

    t14 = ((x61^x62)-(x63%x64));

    if (t14 != 18446744073432240532LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x65 = -1LL;
	int64_t x66 = 3705191LL;
	static uint8_t x67 = 1U;
	int16_t x68 = INT16_MIN;
	int64_t t15 = -45632LL;

    t15 = ((x65^x66)-(x67%x68));

    if (t15 != -3705193LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MAX;
	volatile int32_t x70 = INT32_MAX;
	uint8_t x71 = UINT8_MAX;
	volatile uint16_t x72 = UINT16_MAX;

    t16 = ((x69^x70)-(x71%x72));

    if (t16 != 9223372034707291905LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	static int64_t x75 = INT64_MIN;
	static volatile int8_t x76 = -1;
	int64_t t17 = -740404097620187598LL;

    t17 = ((x73^x74)-(x75%x76));

    if (t17 != -256LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MAX;
	volatile int64_t x78 = INT64_MIN;
	int8_t x79 = -1;
	int16_t x80 = -1;
	int64_t t18 = -229956094LL;

    t18 = ((x77^x78)-(x79%x80));

    if (t18 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x82 = INT64_MIN;
	uint32_t x84 = 307U;
	volatile int64_t t19 = 445LL;

    t19 = ((x81^x82)-(x83%x84));

    if (t19 != -9223372036854737249LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MAX;
	static int16_t x86 = INT16_MIN;
	uint32_t x88 = 409901306U;
	uint32_t t20 = 201676717U;

    t20 = ((x85^x86)-(x87%x88));

    if (t20 != 4294934655U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -1;
	volatile uint64_t x90 = 395358704183105880LLU;
	int8_t x92 = -1;

    t21 = ((x89^x90)-(x91%x92));

    if (t21 != 18051385369526445735LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MAX;
	int32_t t22 = 1449;

    t22 = ((x93^x94)-(x95%x96));

    if (t22 != -32641) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x98 = -1;
	int64_t x99 = -472131404277778LL;
	volatile int64_t x100 = -1LL;

    t23 = ((x97^x98)-(x99%x100));

    if (t23 != -65536LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 3U;
	static uint16_t x102 = 20391U;
	int8_t x103 = -1;
	int8_t x104 = INT8_MAX;
	volatile int32_t t24 = -3814;

    t24 = ((x101^x102)-(x103%x104));

    if (t24 != 20389) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MAX;
	volatile uint8_t x107 = UINT8_MAX;
	uint32_t x108 = 251008097U;
	int64_t t25 = 195990590LL;

    t25 = ((x105^x106)-(x107%x108));

    if (t25 != 9223372034707291905LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MIN;
	int32_t x112 = INT32_MAX;
	int64_t t26 = -440600262640719LL;

    t26 = ((x109^x110)-(x111%x112));

    if (t26 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x115 = 117023947U;
	int64_t x116 = -1LL;
	uint64_t t27 = 4235LLU;

    t27 = ((x113^x114)-(x115%x116));

    if (t27 != 2147483647LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = 51367;
	int32_t x118 = -27857;
	static uint8_t x119 = 4U;
	uint32_t x120 = 47U;
	static uint32_t t28 = 1418716743U;

    t28 = ((x117^x118)-(x119%x120));

    if (t28 != 4294925188U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MIN;
	volatile int32_t x122 = -1;
	uint8_t x123 = UINT8_MAX;
	static int8_t x124 = INT8_MIN;

    t29 = ((x121^x122)-(x123%x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = 302845536460204146LL;
	volatile int16_t x126 = INT16_MAX;
	volatile int16_t x128 = -1051;
	volatile int64_t t30 = -394978813LL;

    t30 = ((x125^x126)-(x127%x128));

    if (t30 != 302845536460183565LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x130 = 351895718LLU;
	int16_t x131 = INT16_MIN;
	int64_t x132 = INT64_MIN;

    t31 = ((x129^x130)-(x131%x132));

    if (t31 != 18446744073357688665LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = 409239459954182531LLU;
	static int16_t x134 = INT16_MIN;
	volatile uint64_t t32 = 12886010140LLU;

    t32 = ((x133^x134)-(x135%x136));

    if (t32 != 18037504613755373963LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 5U;
	uint64_t x139 = UINT64_MAX;
	static volatile uint64_t t33 = 805652763LLU;

    t33 = ((x137^x138)-(x139%x140));

    if (t33 != 4294967201LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x142 = INT32_MIN;
	int8_t x143 = -1;
	static uint64_t x144 = 53565769370217504LLU;
	volatile uint64_t t34 = 1275035984LLU;

    t34 = ((x141^x142)-(x143%x144));

    if (t34 != 18426624661207337769LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MAX;
	volatile int8_t x151 = -1;
	volatile int8_t x152 = -1;
	volatile int32_t t35 = 351452;

    t35 = ((x149^x150)-(x151%x152));

    if (t35 != -32641) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x154 = 22U;
	static int8_t x155 = -29;
	int32_t t36 = -588;

    t36 = ((x153^x154)-(x155%x156));

    if (t36 != 121) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x157 = UINT16_MAX;
	static volatile int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	int16_t x160 = -1;
	volatile int64_t t37 = 12LL;

    t37 = ((x157^x158)-(x159%x160));

    if (t37 != -65409LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x161 = -1;
	volatile uint16_t x162 = 1543U;
	volatile int64_t x163 = INT64_MAX;
	int8_t x164 = -1;
	volatile int64_t t38 = 1301431686LL;

    t38 = ((x161^x162)-(x163%x164));

    if (t38 != -1544LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MIN;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = -19;
	int32_t t39 = -1463256;

    t39 = ((x165^x166)-(x167%x168));

    if (t39 != 2147450876) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x169 = 38211978;
	int64_t x170 = INT64_MAX;
	static int16_t x171 = 14003;
	int64_t x172 = -1LL;
	int64_t t40 = -44933LL;

    t40 = ((x169^x170)-(x171%x172));

    if (t40 != 9223372036816563829LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = INT16_MAX;
	int8_t x174 = INT8_MIN;
	volatile uint64_t x175 = 8382758862LLU;
	int32_t x176 = INT32_MAX;
	volatile uint64_t t41 = 55517831811536LLU;

    t41 = ((x173^x174)-(x175%x176));

    if (t41 != 18446744071769211054LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = -22;
	static uint16_t x180 = 433U;

    t42 = ((x177^x178)-(x179%x180));

    if (t42 != -187) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x181 = -19;
	int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MAX;
	volatile int16_t x184 = INT16_MAX;
	volatile int32_t t43 = 9;

    t43 = ((x181^x182)-(x183%x184));

    if (t43 != 2147483629) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x185 = UINT32_MAX;
	int8_t x186 = INT8_MAX;
	int16_t x187 = INT16_MIN;
	uint64_t x188 = 11983LLU;
	volatile uint64_t t44 = 147619471546LLU;

    t44 = ((x185^x186)-(x187%x188));

    if (t44 != 4294965407LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x190 = -1;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = 408635877573LLU;
	volatile uint64_t t45 = 3125180079980833LLU;

    t45 = ((x189^x190)-(x191%x192));

    if (t45 != 18446743763788998171LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x193 = 1472747601403LLU;
	static volatile int16_t x194 = INT16_MIN;
	static int16_t x195 = 1;
	static int8_t x196 = INT8_MIN;
	volatile uint64_t t46 = 911489761930178066LLU;

    t46 = ((x193^x194)-(x195%x196));

    if (t46 != 18446742600961981946LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x197 = 513U;
	int32_t x200 = INT32_MAX;
	volatile int32_t t47 = -410;

    t47 = ((x197^x198)-(x199%x200));

    if (t47 != -32001) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x202 = INT64_MIN;
	static uint64_t x203 = 2408074605LLU;
	volatile uint16_t x204 = 5430U;
	volatile uint64_t t48 = 236592225563222LLU;

    t48 = ((x201^x202)-(x203%x204));

    if (t48 != 18446744073709546261LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t t49 = 0;

    t49 = ((x205^x206)-(x207%x208));

    if (t49 != 65280) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = INT8_MIN;
	uint8_t x210 = UINT8_MAX;
	uint64_t x211 = 511LLU;
	volatile uint64_t t50 = 64723092893511LLU;

    t50 = ((x209^x210)-(x211%x212));

    if (t50 != 18446744073709550976LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x217 = 4LLU;
	int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MIN;
	uint8_t x220 = 6U;
	uint64_t t51 = 10343LLU;

    t51 = ((x217^x218)-(x219%x220));

    if (t51 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x221 = -1;
	static int64_t x222 = 8LL;
	static int8_t x224 = 1;

    t52 = ((x221^x222)-(x223%x224));

    if (t52 != -9LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x225 = 285U;
	static uint16_t x226 = 363U;
	int32_t x227 = -1;
	uint32_t x228 = UINT32_MAX;
	static volatile uint32_t t53 = 144764U;

    t53 = ((x225^x226)-(x227%x228));

    if (t53 != 118U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x229 = 6U;
	int16_t x230 = INT16_MIN;
	int64_t x231 = 3109792LL;
	static int64_t x232 = INT64_MIN;
	volatile int64_t t54 = -89678976075667LL;

    t54 = ((x229^x230)-(x231%x232));

    if (t54 != 4291824742LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = -4480462893320097233LL;
	int16_t x235 = -97;
	volatile int8_t x236 = -4;
	volatile int64_t t55 = -2032LL;

    t55 = ((x233^x234)-(x235%x236));

    if (t55 != 4480462893320097274LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x237 = 2U;
	int8_t x238 = INT8_MIN;
	static volatile int8_t x239 = INT8_MAX;
	int16_t x240 = -1;

    t56 = ((x237^x238)-(x239%x240));

    if (t56 != 4294967170U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x241 = 7477;
	int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MIN;

    t57 = ((x241^x242)-(x243%x244));

    if (t57 != -2147508938LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x247 = INT64_MIN;
	static volatile int64_t t58 = 12288121LL;

    t58 = ((x245^x246)-(x247%x248));

    if (t58 != 33022LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x249 = 100276642LL;
	volatile int32_t x250 = -1;
	static int8_t x251 = -1;
	int16_t x252 = INT16_MIN;
	volatile int64_t t59 = 377653969120866LL;

    t59 = ((x249^x250)-(x251%x252));

    if (t59 != -100276642LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x254 = 12U;
	int16_t x255 = -1873;
	static int32_t t60 = -19064;

    t60 = ((x253^x254)-(x255%x256));

    if (t60 != 2116) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MAX;
	int32_t x259 = INT32_MAX;
	uint64_t x260 = UINT64_MAX;

    t61 = ((x257^x258)-(x259%x260));

    if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x262 = 774476315U;
	int8_t x263 = -35;
	int32_t x264 = INT32_MAX;
	uint32_t t62 = 469776U;

    t62 = ((x261^x262)-(x263%x264));

    if (t62 != 3520491015U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x265 = -1;
	volatile int8_t x266 = 21;
	volatile int64_t t63 = -476597LL;

    t63 = ((x265^x266)-(x267%x268));

    if (t63 != -51LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x269 = INT64_MIN;
	static volatile uint8_t x271 = 1U;
	static uint8_t x272 = 63U;
	volatile int64_t t64 = 1617552LL;

    t64 = ((x269^x270)-(x271%x272));

    if (t64 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x273 = INT8_MAX;
	int64_t x274 = INT64_MIN;
	volatile int16_t x275 = -1;
	int32_t x276 = INT32_MAX;
	volatile int64_t t65 = 774141661171874LL;

    t65 = ((x273^x274)-(x275%x276));

    if (t65 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = -1LL;
	int8_t x278 = 1;
	uint32_t x279 = 7431803U;
	volatile uint8_t x280 = UINT8_MAX;
	int64_t t66 = -284932629516994043LL;

    t66 = ((x277^x278)-(x279%x280));

    if (t66 != -85LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x285 = 0;
	int64_t x286 = -885147724318LL;
	static int16_t x287 = INT16_MAX;
	static volatile int64_t x288 = -3062001LL;
	int64_t t67 = 82LL;

    t67 = ((x285^x286)-(x287%x288));

    if (t67 != -885147757085LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x289 = UINT8_MAX;
	int32_t x290 = INT32_MAX;
	int64_t x291 = INT64_MIN;
	uint64_t t68 = 484LLU;

    t68 = ((x289^x290)-(x291%x292));

    if (t68 != 2147483336LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x293 = -1;
	uint32_t x295 = UINT32_MAX;
	uint32_t x296 = UINT32_MAX;
	uint32_t t69 = 777U;

    t69 = ((x293^x294)-(x295%x296));

    if (t69 != 4294967152U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x298 = -1LL;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MIN;
	volatile int64_t t70 = -31LL;

    t70 = ((x297^x298)-(x299%x300));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x301 = -7673493850LL;
	int8_t x302 = 23;
	uint8_t x303 = 50U;
	volatile int64_t t71 = 5824LL;

    t71 = ((x301^x302)-(x303%x304));

    if (t71 != -7673493889LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x305 = 2U;
	int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MAX;
	int8_t x308 = INT8_MIN;
	uint32_t t72 = 50U;

    t72 = ((x305^x306)-(x307%x308));

    if (t72 != 4294967043U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x309 = INT16_MIN;
	uint16_t x311 = UINT16_MAX;
	static uint8_t x312 = 7U;
	static int32_t t73 = -183532;

    t73 = ((x309^x310)-(x311%x312));

    if (t73 != -32746) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x313 = INT16_MIN;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	uint8_t x316 = 4U;
	int32_t t74 = 3552;

    t74 = ((x313^x314)-(x315%x316));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	static int16_t x320 = 1849;
	uint32_t t75 = 244101U;

    t75 = ((x317^x318)-(x319%x320));

    if (t75 != 4294967290U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x322 = 14;
	volatile int16_t x324 = 134;
	static int32_t t76 = 30704388;

    t76 = ((x321^x322)-(x323%x324));

    if (t76 != 72) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x326 = -1LL;
	volatile int64_t x327 = INT64_MIN;
	static uint64_t x328 = 7194LLU;
	uint64_t t77 = 525494292696040LLU;

    t77 = ((x325^x326)-(x327%x328));

    if (t77 != 18446744073676398440LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x330 = 15129;
	int8_t x331 = INT8_MIN;
	static volatile uint8_t x332 = UINT8_MAX;
	static volatile uint64_t t78 = 3541106LLU;

    t78 = ((x329^x330)-(x331%x332));

    if (t78 != 15259LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x333 = UINT16_MAX;
	uint32_t x334 = 2624U;
	int64_t x335 = 7LL;
	static int16_t x336 = -1;
	int64_t t79 = 704374045269697LL;

    t79 = ((x333^x334)-(x335%x336));

    if (t79 != 62911LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x337 = -359629527087833LL;
	static uint8_t x338 = 1U;
	static int64_t x340 = INT64_MIN;
	volatile int64_t t80 = -1812LL;

    t80 = ((x337^x338)-(x339%x340));

    if (t80 != -359627379604186LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x341 = 15433U;
	int16_t x344 = 5278;
	volatile int32_t t81 = 64509;

    t81 = ((x341^x342)-(x343%x344));

    if (t81 != 15440) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x345 = 19LLU;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MIN;
	int64_t x348 = -1LL;
	uint64_t t82 = 121657743051239LLU;

    t82 = ((x345^x346)-(x347%x348));

    if (t82 != 18446744071562067987LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x349 = 9;
	volatile uint16_t x352 = 14062U;
	int32_t t83 = -45;

    t83 = ((x349^x350)-(x351%x352));

    if (t83 != 4652) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x353 = 183U;
	int16_t x354 = -1;
	uint16_t x355 = UINT16_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t84 = 5LLU;

    t84 = ((x353^x354)-(x355%x356));

    if (t84 != 18446744073709485897LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x357 = -30355054665LL;
	static uint16_t x359 = UINT16_MAX;
	int32_t x360 = -1;

    t85 = ((x357^x358)-(x359%x360));

    if (t85 != -30716221497LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x361 = -1;
	volatile uint64_t x362 = 753020244742781LLU;
	int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MIN;
	uint64_t t86 = 216418502LLU;

    t86 = ((x361^x362)-(x363%x364));

    if (t86 != 18445991053464808834LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x365 = 151U;
	static int16_t x366 = -1;
	volatile uint32_t x367 = 21U;
	int32_t x368 = INT32_MAX;
	volatile uint32_t t87 = 229U;

    t87 = ((x365^x366)-(x367%x368));

    if (t87 != 4294967123U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x371 = -16;
	int8_t x372 = INT8_MIN;
	volatile int32_t t88 = -198870729;

    t88 = ((x369^x370)-(x371%x372));

    if (t88 != -32625) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x373 = INT64_MAX;
	volatile int64_t x374 = -671443136393113015LL;
	static int64_t x375 = -82LL;
	int8_t x376 = -1;
	volatile int64_t t89 = -83203737LL;

    t89 = ((x373^x374)-(x375%x376));

    if (t89 != -8551928900461662794LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x377 = INT8_MAX;
	uint8_t x378 = 79U;
	int64_t x379 = INT64_MIN;
	volatile int64_t x380 = -1LL;
	volatile int64_t t90 = 62876029243214586LL;

    t90 = ((x377^x378)-(x379%x380));

    if (t90 != 48LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x381 = 203586902U;
	uint16_t x382 = 3303U;
	uint8_t x383 = UINT8_MAX;
	static uint64_t x384 = 15401587LLU;
	volatile uint64_t t91 = 681161LLU;

    t91 = ((x381^x382)-(x383%x384));

    if (t91 != 203583666LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x386 = -1;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;

    t92 = ((x385^x386)-(x387%x388));

    if (t92 != 4420LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x389 = -1;
	static int64_t x390 = -1LL;
	uint16_t x391 = 160U;
	int32_t x392 = INT32_MIN;
	volatile int64_t t93 = -2840LL;

    t93 = ((x389^x390)-(x391%x392));

    if (t93 != -160LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x394 = 87666062790LLU;
	uint8_t x395 = 18U;
	static volatile int16_t x396 = INT16_MAX;

    t94 = ((x393^x394)-(x395%x396));

    if (t94 != 87666062759LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x397 = UINT64_MAX;
	volatile int32_t x398 = -1;
	volatile int16_t x399 = 1336;
	uint16_t x400 = UINT16_MAX;
	volatile uint64_t t95 = 511895881579LLU;

    t95 = ((x397^x398)-(x399%x400));

    if (t95 != 18446744073709550280LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x401 = 1U;
	static int8_t x402 = 11;
	int8_t x403 = INT8_MIN;
	volatile uint8_t x404 = UINT8_MAX;

    t96 = ((x401^x402)-(x403%x404));

    if (t96 != 138) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x406 = 4236929097LLU;
	uint8_t x407 = 100U;
	volatile uint8_t x408 = 102U;
	static uint64_t t97 = 12375781LLU;

    t97 = ((x405^x406)-(x407%x408));

    if (t97 != 18446743902544580393LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x409 = INT8_MIN;
	int64_t x410 = -1LL;
	int64_t t98 = 175681290017LL;

    t98 = ((x409^x410)-(x411%x412));

    if (t98 != 121LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x415 = INT64_MIN;
	static uint8_t x416 = 32U;
	volatile int64_t t99 = INT64_MIN;

    t99 = ((x413^x414)-(x415%x416));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x417 = INT64_MIN;
	volatile uint64_t x418 = 3738LLU;
	int64_t x419 = -33346993134LL;
	volatile int32_t x420 = INT32_MIN;
	volatile uint64_t t100 = 218929605532LLU;

    t100 = ((x417^x418)-(x419%x420));

    if (t100 != 9223372037989517960LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x421 = -1;
	static uint64_t x423 = 21014965LLU;
	uint8_t x424 = UINT8_MAX;
	static uint64_t t101 = 41039062242LLU;

    t101 = ((x421^x422)-(x423%x424));

    if (t101 != 18446744073709485920LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x429 = UINT64_MAX;
	static uint16_t x431 = 4170U;
	int64_t x432 = INT64_MIN;
	static volatile uint64_t t102 = 3651464903429LLU;

    t102 = ((x429^x430)-(x431%x432));

    if (t102 != 18446744073709547496LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x433 = 10368U;
	int8_t x434 = -1;
	static volatile int8_t x435 = -31;
	int8_t x436 = INT8_MIN;
	int32_t t103 = 3;

    t103 = ((x433^x434)-(x435%x436));

    if (t103 != -10338) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x437 = INT8_MAX;
	int64_t x438 = INT64_MAX;
	static volatile int8_t x439 = 3;
	int64_t x440 = INT64_MIN;
	static volatile int64_t t104 = -38809LL;

    t104 = ((x437^x438)-(x439%x440));

    if (t104 != 9223372036854775677LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x443 = 13U;
	volatile int64_t x444 = -1LL;

    t105 = ((x441^x442)-(x443%x444));

    if (t105 != 2147483647LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x445 = 8U;
	int8_t x446 = 35;
	volatile int8_t x447 = -1;
	static int8_t x448 = INT8_MIN;
	volatile int32_t t106 = -7;

    t106 = ((x445^x446)-(x447%x448));

    if (t106 != 44) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x449 = 154465U;
	volatile int8_t x451 = INT8_MAX;

    t107 = ((x449^x450)-(x451%x452));

    if (t107 != 153684LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x453 = INT16_MAX;
	static volatile int8_t x454 = -1;
	int64_t x455 = 3421LL;
	volatile int64_t t108 = -733559076LL;

    t108 = ((x453^x454)-(x455%x456));

    if (t108 != -32861LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x457 = INT8_MAX;
	static int64_t x458 = 44381783526LL;
	int64_t x459 = INT64_MAX;
	volatile int64_t t109 = 15314136010469327LL;

    t109 = ((x457^x458)-(x459%x460));

    if (t109 != 44381783449LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x461 = 2377U;
	int32_t x462 = INT32_MIN;
	int32_t x463 = INT32_MIN;
	static int16_t x464 = -7822;
	static volatile int32_t t110 = 913596;

    t110 = ((x461^x462)-(x463%x464));

    if (t110 != -2147480791) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x465 = 0U;
	uint64_t x466 = UINT64_MAX;
	int8_t x467 = -32;
	int8_t x468 = -15;
	uint64_t t111 = 137321LLU;

    t111 = ((x465^x466)-(x467%x468));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x473 = -1LL;
	static uint64_t x474 = 8029LLU;
	int8_t x475 = INT8_MAX;
	int32_t x476 = INT32_MAX;
	volatile uint64_t t112 = 43088679LLU;

    t112 = ((x473^x474)-(x475%x476));

    if (t112 != 18446744073709543459LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x477 = INT16_MIN;
	volatile int8_t x478 = INT8_MIN;
	int32_t x479 = -1;
	int8_t x480 = 8;

    t113 = ((x477^x478)-(x479%x480));

    if (t113 != 32641) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x481 = 3613U;
	int32_t x482 = -1;
	volatile int64_t x483 = -216690615327355LL;
	volatile uint64_t x484 = 2054709216402653LLU;
	uint64_t t114 = 1511520137322997361LLU;

    t114 = ((x481^x482)-(x483%x484));

    if (t114 != 18445341326261939722LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x485 = -1;
	static int32_t x487 = 4;
	uint16_t x488 = UINT16_MAX;
	volatile int64_t t115 = -1074781920738135184LL;

    t115 = ((x485^x486)-(x487%x488));

    if (t115 != -19LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x489 = 1U;
	volatile uint16_t x490 = 1850U;
	volatile int64_t t116 = 83315147LL;

    t116 = ((x489^x490)-(x491%x492));

    if (t116 != 1852LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x493 = INT16_MIN;
	static int32_t x494 = INT32_MIN;
	int32_t x496 = INT32_MIN;

    t117 = ((x493^x494)-(x495%x496));

    if (t117 != 2147450889) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x498 = -1;
	volatile uint64_t x499 = 38LLU;
	int32_t x500 = INT32_MIN;

    t118 = ((x497^x498)-(x499%x500));

    if (t118 != 18446744073709551038LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x501 = 14414U;
	int16_t x503 = INT16_MAX;
	static int8_t x504 = 41;
	int32_t t119 = 303283301;

    t119 = ((x501^x502)-(x503%x504));

    if (t119 != 14505) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x506 = 203331LLU;
	int16_t x508 = INT16_MIN;
	static uint64_t t120 = 1651096567074LLU;

    t120 = ((x505^x506)-(x507%x508));

    if (t120 != 203331LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x510 = INT16_MAX;
	static int32_t x511 = -1;
	static int8_t x512 = INT8_MIN;
	uint32_t t121 = 15164706U;

    t121 = ((x509^x510)-(x511%x512));

    if (t121 != 4294934529U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x513 = UINT16_MAX;
	static uint64_t x514 = 7524084157828LLU;
	uint64_t t122 = 134666LLU;

    t122 = ((x513^x514)-(x515%x516));

    if (t122 != 7526231700091LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x517 = 38;
	static int16_t x518 = INT16_MIN;
	uint64_t t123 = 9337LLU;

    t123 = ((x517^x518)-(x519%x520));

    if (t123 != 18446744073709518885LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x521 = 15U;
	static volatile int64_t x522 = -1LL;
	int64_t t124 = 48016900532625694LL;

    t124 = ((x521^x522)-(x523%x524));

    if (t124 != -4294967184LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x525 = 12U;
	static uint8_t x528 = UINT8_MAX;

    t125 = ((x525^x526)-(x527%x528));

    if (t125 != 9) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x529 = UINT8_MAX;
	static int32_t x531 = -1;

    t126 = ((x529^x530)-(x531%x532));

    if (t126 != 10794LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x533 = INT16_MAX;
	int32_t x534 = -16263869;
	static volatile uint8_t x535 = 55U;
	volatile int32_t t127 = 2;

    t127 = ((x533^x534)-(x535%x536));

    if (t127 != -16274756) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x537 = -11660;
	volatile uint8_t x539 = 3U;
	static uint32_t x540 = 467390459U;
	uint64_t t128 = 19401001037409990LLU;

    t128 = ((x537^x538)-(x539%x540));

    if (t128 != 18446744073657057931LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x541 = 24628429502082LLU;
	int16_t x544 = -1;
	uint64_t t129 = 9LLU;

    t129 = ((x541^x542)-(x543%x544));

    if (t129 != 24628429474173LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x545 = 1;
	int8_t x546 = INT8_MIN;
	static volatile uint16_t x547 = 67U;
	volatile uint32_t t130 = 56244104U;

    t130 = ((x545^x546)-(x547%x548));

    if (t130 != 4294967102U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x549 = INT8_MIN;
	int32_t x550 = -10600;
	int64_t x552 = INT64_MAX;
	volatile int64_t t131 = 647888302LL;

    t131 = ((x549^x550)-(x551%x552));

    if (t131 != 2147494168LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x553 = 698;
	int64_t x554 = -248416353927LL;
	static int8_t x555 = 0;
	static int32_t x556 = INT32_MIN;
	volatile int64_t t132 = 1982LL;

    t132 = ((x553^x554)-(x555%x556));

    if (t132 != -248416353341LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x557 = -114309939441LL;
	int8_t x558 = INT8_MAX;
	uint64_t x559 = 1137LLU;
	uint8_t x560 = 23U;
	static volatile uint64_t t133 = 10582868LLU;

    t133 = ((x557^x558)-(x559%x560));

    if (t133 != 18446743959399612262LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x561 = -1;
	int64_t x562 = INT64_MIN;
	uint16_t x563 = 60U;
	int64_t x564 = INT64_MIN;
	volatile int64_t t134 = 3437LL;

    t134 = ((x561^x562)-(x563%x564));

    if (t134 != 9223372036854775747LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x565 = -1;
	volatile int16_t x566 = INT16_MAX;
	int8_t x567 = INT8_MIN;
	static uint32_t x568 = 4U;

    t135 = ((x565^x566)-(x567%x568));

    if (t135 != 4294934528U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x569 = INT8_MAX;
	int8_t x570 = -1;
	uint8_t x571 = UINT8_MAX;
	int32_t x572 = INT32_MAX;
	int32_t t136 = 1287;

    t136 = ((x569^x570)-(x571%x572));

    if (t136 != -383) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x573 = UINT8_MAX;
	int8_t x576 = INT8_MIN;
	volatile int64_t t137 = -3813639801896577383LL;

    t137 = ((x573^x574)-(x575%x576));

    if (t137 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x577 = -1;
	volatile int64_t x578 = INT64_MAX;
	uint64_t x579 = 71947270990523272LLU;
	uint16_t x580 = 26U;
	static uint64_t t138 = 3205LLU;

    t138 = ((x577^x578)-(x579%x580));

    if (t138 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x587 = 969;
	volatile int16_t x588 = -1;
	int32_t t139 = -109339;

    t139 = ((x585^x586)-(x587%x588));

    if (t139 != -161516322) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x589 = 964474138U;
	static int32_t x590 = 77685400;
	uint32_t x592 = 2147617U;
	uint32_t t140 = 60599653U;

    t140 = ((x589^x590)-(x591%x592));

    if (t140 != 1035934538U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x593 = INT8_MAX;
	int32_t x594 = INT32_MIN;
	uint64_t x595 = 4176825145204269LLU;
	uint64_t x596 = UINT64_MAX;
	volatile uint64_t t141 = 3651LLU;

    t141 = ((x593^x594)-(x595%x596));

    if (t141 != 18442567246416863826LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x598 = -1;
	volatile uint32_t t142 = 1622197U;

    t142 = ((x597^x598)-(x599%x600));

    if (t142 != 528U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x602 = INT64_MIN;
	int32_t x603 = INT32_MAX;
	uint64_t x604 = 9827494824LLU;
	volatile uint64_t t143 = 9386LLU;

    t143 = ((x601^x602)-(x603%x604));

    if (t143 != 9223372034707259393LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x605 = INT8_MAX;
	volatile int32_t x606 = INT32_MIN;
	static uint8_t x608 = 30U;
	static int32_t t144 = -31157159;

    t144 = ((x605^x606)-(x607%x608));

    if (t144 != -2147483536) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x609 = 20400396717426044LL;
	int16_t x610 = INT16_MAX;
	static int32_t x611 = INT32_MIN;
	uint64_t x612 = UINT64_MAX;
	volatile uint64_t t145 = 180642553LLU;

    t145 = ((x609^x610)-(x611%x612));

    if (t145 != 20400398864939651LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x613 = -6;
	int64_t x614 = INT64_MIN;
	int16_t x615 = 350;
	volatile int32_t x616 = INT32_MAX;
	volatile int64_t t146 = -2760LL;

    t146 = ((x613^x614)-(x615%x616));

    if (t146 != 9223372036854775452LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x619 = 1;
	volatile uint32_t x620 = UINT32_MAX;
	volatile int64_t t147 = -7150107698LL;

    t147 = ((x617^x618)-(x619%x620));

    if (t147 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x621 = -14512150;
	uint8_t x622 = 6U;
	static int32_t x623 = INT32_MAX;
	int32_t t148 = -292;

    t148 = ((x621^x622)-(x623%x624));

    if (t148 != -14512148) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x629 = UINT64_MAX;
	uint32_t x630 = UINT32_MAX;
	int16_t x631 = INT16_MAX;
	uint8_t x632 = 1U;
	static uint64_t t149 = 122LLU;

    t149 = ((x629^x630)-(x631%x632));

    if (t149 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x633 = 17120657969168LL;
	int32_t x635 = INT32_MAX;
	int16_t x636 = -71;
	volatile int64_t t150 = 1603222101135LL;

    t150 = ((x633^x634)-(x635%x636));

    if (t150 != -17120657969208LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x637 = INT32_MIN;
	int64_t x638 = -1LL;
	uint8_t x639 = UINT8_MAX;
	static int64_t t151 = -15865089475LL;

    t151 = ((x637^x638)-(x639%x640));

    if (t151 != 2147483520LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x641 = -1LL;
	static int32_t x642 = INT32_MIN;
	volatile int16_t x643 = INT16_MIN;
	int64_t x644 = -1LL;
	volatile int64_t t152 = -13879013617661LL;

    t152 = ((x641^x642)-(x643%x644));

    if (t152 != 2147483647LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x645 = INT8_MIN;
	int32_t x646 = 18740;
	int64_t x647 = INT64_MIN;
	uint8_t x648 = 71U;
	int64_t t153 = 125007LL;

    t153 = ((x645^x646)-(x647%x648));

    if (t153 != -18759LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x649 = 2049418245U;
	static int8_t x650 = INT8_MIN;
	static volatile uint64_t x651 = 1371298141LLU;
	static int64_t x652 = INT64_MIN;
	volatile uint64_t t154 = 354472985356434223LLU;

    t154 = ((x649^x650)-(x651%x652));

    if (t154 != 874250792LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x653 = INT32_MAX;
	int8_t x654 = INT8_MIN;
	uint16_t x656 = 25133U;
	volatile int32_t t155 = 0;

    t155 = ((x653^x654)-(x655%x656));

    if (t155 != -2147474983) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x657 = 15671;
	int16_t x658 = 9193;
	static volatile int64_t x660 = -3061LL;
	int64_t t156 = 4573497828941LL;

    t156 = ((x657^x658)-(x659%x660));

    if (t156 != 7939LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x661 = INT16_MAX;
	static uint8_t x662 = UINT8_MAX;
	int64_t x663 = -1LL;
	int32_t x664 = INT32_MIN;
	static volatile int64_t t157 = 2LL;

    t157 = ((x661^x662)-(x663%x664));

    if (t157 != 32513LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x665 = INT8_MAX;
	int32_t x666 = -1626;
	static uint16_t x667 = 1U;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t158 = -591736;

    t158 = ((x665^x666)-(x667%x668));

    if (t158 != -1576) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x669 = UINT32_MAX;
	volatile uint64_t x670 = UINT64_MAX;
	int16_t x671 = -4;
	volatile uint64_t t159 = 126603LLU;

    t159 = ((x669^x670)-(x671%x672));

    if (t159 != 18446744069414584324LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x673 = 3812876176633811546LL;
	uint32_t x674 = 1236330U;
	static int64_t x675 = 13922817529423LL;
	int64_t t160 = -1320729302473LL;

    t160 = ((x673^x674)-(x675%x676));

    if (t160 != 3812876176634679088LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x677 = INT32_MIN;
	volatile uint64_t x678 = 31480482LLU;
	int16_t x679 = INT16_MAX;
	static volatile int64_t x680 = -37473512563LL;
	volatile uint64_t t161 = 180260609784094LLU;

    t161 = ((x677^x678)-(x679%x680));

    if (t161 != 18446744071593515683LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x682 = UINT32_MAX;
	int32_t x683 = INT32_MIN;
	uint8_t x684 = 29U;

    t162 = ((x681^x682)-(x683%x684));

    if (t162 != 135129185112772466LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x685 = INT8_MAX;
	volatile int16_t x686 = INT16_MIN;
	int8_t x687 = 4;
	int16_t x688 = 13;
	static volatile int32_t t163 = 13455;

    t163 = ((x685^x686)-(x687%x688));

    if (t163 != -32645) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x690 = 11U;
	volatile uint32_t x691 = UINT32_MAX;
	uint16_t x692 = 11338U;

    t164 = ((x689^x690)-(x691%x692));

    if (t164 != 4294959235U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x693 = INT64_MIN;
	int64_t x694 = -2033949601241153649LL;
	static uint16_t x696 = 11U;
	volatile int64_t t165 = -574254084601867146LL;

    t165 = ((x693^x694)-(x695%x696));

    if (t165 != 7189422435613622160LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x697 = 105U;
	int64_t x699 = -1LL;
	static int64_t t166 = -205159LL;

    t166 = ((x697^x698)-(x699%x700));

    if (t166 != 1359LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x701 = 85U;
	volatile uint16_t x704 = 5U;
	volatile int32_t t167 = 7;

    t167 = ((x701^x702)-(x703%x704));

    if (t167 != -32680) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x705 = -1;
	static volatile int16_t x706 = INT16_MIN;
	int8_t x707 = INT8_MIN;
	uint32_t t168 = 1116U;

    t168 = ((x705^x706)-(x707%x708));

    if (t168 != 4294403812U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x709 = INT64_MIN;
	int64_t x710 = INT64_MIN;
	int32_t x711 = -1;
	static volatile uint8_t x712 = 9U;
	int64_t t169 = -63970809594LL;

    t169 = ((x709^x710)-(x711%x712));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x714 = INT8_MIN;
	int64_t x716 = -1LL;
	volatile int64_t t170 = 213906328LL;

    t170 = ((x713^x714)-(x715%x716));

    if (t170 != -65409LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x718 = INT32_MAX;
	static volatile int64_t t171 = -448292564031895331LL;

    t171 = ((x717^x718)-(x719%x720));

    if (t171 != -2147483655LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x721 = -1;
	uint16_t x722 = 21049U;
	int16_t x723 = INT16_MIN;
	int8_t x724 = INT8_MIN;
	volatile int32_t t172 = -4579;

    t172 = ((x721^x722)-(x723%x724));

    if (t172 != -21050) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x725 = INT16_MIN;
	volatile uint32_t x726 = UINT32_MAX;
	int8_t x727 = -42;
	int8_t x728 = -15;
	volatile uint32_t t173 = 1214564U;

    t173 = ((x725^x726)-(x727%x728));

    if (t173 != 32779U) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x730 = INT32_MAX;
	uint16_t x731 = UINT16_MAX;
	static int32_t x732 = INT32_MAX;
	int64_t t174 = 248359410067690806LL;

    t174 = ((x729^x730)-(x731%x732));

    if (t174 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x733 = INT64_MIN;
	int64_t x735 = INT64_MIN;
	int64_t t175 = 250869LL;

    t175 = ((x733^x734)-(x735%x736));

    if (t175 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x738 = -18;
	uint32_t x740 = UINT32_MAX;
	int64_t t176 = 190063282114539832LL;

    t176 = ((x737^x738)-(x739%x740));

    if (t176 != 9223372036854775642LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x741 = 186U;
	uint64_t x742 = 2573LLU;
	uint32_t x743 = 2021296U;
	volatile uint16_t x744 = UINT16_MAX;
	static volatile uint64_t t177 = 117LLU;

    t177 = ((x741^x742)-(x743%x744));

    if (t177 != 18446744073709499113LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x745 = INT8_MIN;
	int32_t x746 = INT32_MAX;
	volatile int16_t x747 = -1;
	int64_t x748 = -1LL;
	volatile int64_t t178 = 4049777548486644757LL;

    t178 = ((x745^x746)-(x747%x748));

    if (t178 != -2147483521LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x749 = 522787;
	int16_t x750 = INT16_MAX;
	static uint32_t x751 = 11178091U;
	static uint32_t t179 = 34309U;

    t179 = ((x749^x750)-(x751%x752));

    if (t179 != 477407U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x753 = -17901505004769790LL;
	static volatile uint8_t x754 = 89U;
	volatile int8_t x756 = INT8_MIN;
	volatile int64_t t180 = 507455082498616325LL;

    t180 = ((x753^x754)-(x755%x756));

    if (t180 != -17901505004769700LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x757 = INT64_MIN;
	int32_t x758 = INT32_MIN;
	int64_t x759 = INT64_MIN;
	static int8_t x760 = -1;
	volatile int64_t t181 = -51151120LL;

    t181 = ((x757^x758)-(x759%x760));

    if (t181 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x762 = 7393295090LL;
	uint16_t x763 = 48U;
	uint64_t x764 = 222258535195722416LLU;
	volatile uint64_t t182 = 625551LLU;

    t182 = ((x761^x762)-(x763%x764));

    if (t182 != 6542714351LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x765 = -1;
	volatile uint32_t x766 = 12329U;
	volatile uint64_t x767 = 1921051493765LLU;
	static int8_t x768 = INT8_MIN;
	uint64_t t183 = 818702LLU;

    t183 = ((x765^x766)-(x767%x768));

    if (t183 != 18446742156953012817LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x769 = INT32_MIN;
	static uint8_t x770 = 3U;
	int32_t t184 = -2;

    t184 = ((x769^x770)-(x771%x772));

    if (t184 != -2147483645) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x773 = -1LL;
	int16_t x774 = INT16_MIN;
	uint32_t x775 = 82927676U;
	int32_t x776 = 842;
	int64_t t185 = 154704036841672149LL;

    t185 = ((x773^x774)-(x775%x776));

    if (t185 != 31987LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x777 = UINT32_MAX;
	int32_t x778 = INT32_MIN;
	static volatile int16_t x779 = -946;
	volatile int64_t x780 = INT64_MAX;
	volatile int64_t t186 = 499981398248114LL;

    t186 = ((x777^x778)-(x779%x780));

    if (t186 != 2147484593LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x781 = -1;
	uint8_t x782 = 14U;
	volatile int16_t x783 = -1;
	uint8_t x784 = 1U;
	static volatile int32_t t187 = -30393437;

    t187 = ((x781^x782)-(x783%x784));

    if (t187 != -15) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x786 = INT8_MAX;
	int16_t x788 = 2739;
	volatile int32_t t188 = 850456401;

    t188 = ((x785^x786)-(x787%x788));

    if (t188 != 127) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x789 = 663000318136LLU;
	volatile uint32_t x790 = 14174858U;
	uint16_t x791 = 10U;
	static int16_t x792 = INT16_MAX;
	static volatile uint64_t t189 = 66959828LLU;

    t189 = ((x789^x790)-(x791%x792));

    if (t189 != 662989326888LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x797 = 1132329;
	static volatile int16_t x798 = INT16_MAX;
	uint32_t x799 = UINT32_MAX;
	volatile uint32_t t190 = 97221083U;

    t190 = ((x797^x798)-(x799%x800));

    if (t190 != 1128635U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x801 = -11;
	uint16_t x802 = UINT16_MAX;
	volatile int16_t x804 = INT16_MIN;
	int32_t t191 = 653880426;

    t191 = ((x801^x802)-(x803%x804));

    if (t191 != -98293) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x807 = INT8_MIN;
	int8_t x808 = INT8_MIN;
	volatile uint32_t t192 = 10U;

    t192 = ((x805^x806)-(x807%x808));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x809 = UINT64_MAX;
	uint8_t x810 = 7U;
	int32_t x812 = -366580693;
	volatile uint64_t t193 = 6728LLU;

    t193 = ((x809^x810)-(x811%x812));

    if (t193 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x814 = 73U;
	volatile int16_t x815 = INT16_MIN;
	static volatile int32_t x816 = INT32_MIN;
	static int32_t t194 = -64917578;

    t194 = ((x813^x814)-(x815%x816));

    if (t194 != 32822) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x817 = 299395;
	uint8_t x818 = 15U;
	volatile uint16_t x819 = UINT16_MAX;
	int64_t x820 = INT64_MIN;
	int64_t t195 = 503538LL;

    t195 = ((x817^x818)-(x819%x820));

    if (t195 != 233869LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x821 = INT8_MAX;
	static int32_t x822 = INT32_MIN;
	int16_t x823 = -1;
	volatile int8_t x824 = INT8_MIN;
	static volatile int32_t t196 = 15312920;

    t196 = ((x821^x822)-(x823%x824));

    if (t196 != -2147483520) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x825 = INT64_MIN;
	volatile uint32_t x826 = 234729718U;
	int32_t x828 = INT32_MIN;

    t197 = ((x825^x826)-(x827%x828));

    if (t197 != -9223372036620046090LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x833 = 851766LLU;
	int64_t x835 = INT64_MIN;
	int32_t x836 = INT32_MAX;
	static volatile uint64_t t198 = 145626742854LLU;

    t198 = ((x833^x834)-(x835%x836));

    if (t198 != 18446744073708699892LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x838 = -1LL;
	static uint64_t x839 = 88646590900782370LLU;
	volatile int32_t x840 = INT32_MIN;
	uint64_t t199 = 1018636788532962LLU;

    t199 = ((x837^x838)-(x839%x840));

    if (t199 != 18358097482808769246LLU) { NG(); } else { ; }
	
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

