
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

int16_t x5 = INT16_MIN;
int16_t x9 = -1;
int8_t x17 = INT8_MAX;
int32_t t5 = 71077;
static int8_t x28 = INT8_MAX;
volatile uint64_t t8 = 967608522142841LLU;
int8_t x38 = INT8_MAX;
volatile uint64_t t9 = 12735276590067LLU;
int16_t x41 = INT16_MIN;
int64_t x47 = 7152LL;
int32_t x48 = INT32_MIN;
int64_t x53 = INT64_MAX;
static int32_t x56 = INT32_MIN;
uint64_t t12 = 958050LLU;
static int64_t x59 = INT64_MIN;
static uint16_t x60 = 1U;
uint64_t x64 = UINT64_MAX;
uint32_t x77 = UINT32_MAX;
uint16_t x82 = 6562U;
static uint8_t x88 = 13U;
int8_t x89 = INT8_MIN;
int64_t x90 = -183LL;
static int16_t x93 = INT16_MIN;
int32_t x95 = INT32_MAX;
int8_t x96 = INT8_MIN;
uint16_t x107 = UINT16_MAX;
int64_t t22 = -101059754LL;
int32_t x113 = 2;
int16_t x115 = INT16_MAX;
volatile int32_t x129 = 132231;
volatile uint64_t t29 = 75LLU;
volatile uint8_t x152 = 1U;
static volatile int32_t t32 = -1;
int16_t x154 = INT16_MIN;
volatile uint32_t t33 = 26U;
int16_t x161 = INT16_MAX;
int8_t x162 = 14;
volatile int32_t x163 = INT32_MIN;
uint32_t t36 = 113353336U;
static int8_t x178 = INT8_MAX;
int64_t x192 = INT64_MIN;
volatile int64_t t41 = 6349593040305LL;
volatile int64_t t45 = -16440654900161432LL;
static int8_t x222 = 23;
int8_t x230 = -1;
uint32_t x231 = 218122168U;
int8_t x237 = INT8_MAX;
int64_t x239 = -143LL;
uint16_t x244 = UINT16_MAX;
uint32_t x247 = 0U;
volatile int64_t t56 = -5732LL;
static int8_t x254 = INT8_MIN;
uint8_t x260 = UINT8_MAX;
uint8_t x265 = 117U;
int32_t x267 = -1;
int64_t x271 = -66940366505LL;
volatile int64_t x272 = -22724923603598946LL;
uint64_t x287 = UINT64_MAX;
int8_t x297 = INT8_MIN;
volatile int8_t x298 = -1;
uint8_t x300 = 7U;
static int64_t x312 = INT64_MAX;
int64_t x328 = INT64_MAX;
static uint8_t x330 = 6U;
static uint8_t x339 = 29U;
volatile int64_t t78 = 17305973684235LL;
int32_t x348 = INT32_MIN;
static int32_t x351 = -1;
static volatile int32_t t80 = -6354;
uint8_t x353 = 1U;
int8_t x356 = INT8_MAX;
static int32_t t81 = -1;
int8_t x362 = INT8_MIN;
int64_t x368 = 11637025927595302LL;
int8_t x374 = 13;
int64_t x382 = INT64_MIN;
static volatile uint64_t t87 = 51749509208538083LLU;
static volatile int8_t x393 = -46;
uint8_t x397 = 75U;
int32_t x399 = INT32_MAX;
static uint16_t x407 = UINT16_MAX;
static uint64_t x412 = UINT64_MAX;
int32_t x415 = -1;
volatile int32_t t98 = 492;
volatile uint64_t t99 = 1729LLU;
uint16_t x437 = 2U;
static int32_t x439 = INT32_MIN;
uint32_t x446 = 6160U;
static uint64_t t103 = 2000445640169345249LLU;
int32_t x454 = INT32_MIN;
uint16_t x455 = 9U;
int32_t t105 = 113;
volatile int32_t x477 = INT32_MAX;
volatile uint8_t x481 = UINT8_MAX;
int64_t t110 = -1LL;
int64_t x495 = INT64_MAX;
int16_t x496 = INT16_MAX;
int64_t x501 = INT64_MIN;
int8_t x505 = 42;
volatile int32_t t115 = -32;
volatile int64_t x510 = INT64_MIN;
int16_t x515 = -14;
int32_t x518 = INT32_MIN;
volatile int64_t t118 = 190528809764LL;
volatile int8_t x524 = -1;
int64_t t121 = 6LL;
uint64_t x533 = 104741425LLU;
uint64_t t122 = 59152770LLU;
int16_t x539 = -1;
static int16_t x543 = 3;
static uint8_t x546 = UINT8_MAX;
int8_t x552 = -54;
int64_t t126 = -620LL;
int16_t x553 = -1;
int64_t x560 = INT64_MIN;
int8_t x561 = INT8_MIN;
int32_t t129 = 7494;
int32_t x565 = INT32_MIN;
volatile uint16_t x577 = UINT16_MAX;
uint8_t x580 = 15U;
int32_t t133 = -3;
volatile uint8_t x587 = UINT8_MAX;
static uint8_t x588 = 37U;
int64_t t135 = -1LL;
static uint32_t x596 = UINT32_MAX;
int64_t x603 = INT64_MIN;
int32_t x605 = INT32_MIN;
int8_t x609 = INT8_MIN;
volatile uint16_t x610 = 6U;
int8_t x611 = INT8_MAX;
uint8_t x612 = 0U;
uint64_t x620 = 367467LLU;
uint64_t t142 = 66359050LLU;
int32_t x624 = INT32_MIN;
int64_t t143 = -1154541528995782LL;
volatile uint32_t t144 = 7865897U;
volatile uint32_t t145 = 131070117U;
int32_t t146 = -24;
int8_t x644 = INT8_MAX;
int16_t x647 = 196;
uint64_t x653 = 63734LLU;
volatile uint8_t x657 = 30U;
volatile uint64_t t154 = 1510LLU;
int64_t x672 = -1LL;
uint16_t x675 = UINT16_MAX;
static int64_t t156 = 103LL;
uint16_t x677 = UINT16_MAX;
volatile uint32_t x681 = 3U;
int32_t x693 = -1;
static int16_t x694 = INT16_MIN;
int64_t x697 = INT64_MIN;
uint64_t x700 = UINT64_MAX;
volatile uint64_t t164 = 6862617LLU;
uint8_t x715 = 10U;
static int16_t x717 = INT16_MAX;
static uint8_t x730 = UINT8_MAX;
int16_t x731 = INT16_MAX;
int64_t x732 = INT64_MIN;
int64_t t168 = -9561214022902908LL;
int64_t x738 = INT64_MIN;
volatile int8_t x744 = -1;
int64_t x756 = -1LL;
volatile int16_t x759 = INT16_MIN;
static volatile uint64_t x761 = 2LLU;
volatile uint32_t x767 = UINT32_MAX;
int16_t x768 = INT16_MIN;
int32_t x781 = -24;
static int32_t x783 = -1;
uint32_t x791 = 78468U;
uint64_t x792 = 17684917038LLU;
volatile uint16_t x797 = 2U;
int64_t x801 = -11671831869620394LL;
int16_t x804 = -1;
int16_t x806 = INT16_MIN;
static volatile int64_t t186 = 98816146LL;
static uint32_t x814 = 1U;
volatile int64_t x819 = INT64_MIN;
static uint8_t x820 = 1U;
uint32_t t189 = 912873U;
static int16_t x832 = INT16_MAX;
static int32_t x838 = INT32_MAX;
int64_t x840 = -1LL;
uint8_t x843 = 1U;
volatile uint64_t t196 = 386986872366583446LLU;
uint32_t t199 = 14U;


void f0(void) {
    	volatile int32_t x1 = 5;
	int32_t x2 = -55070;
	int8_t x3 = INT8_MIN;
	volatile int8_t x4 = INT8_MAX;
	int32_t t0 = -119730;

    t0 = ((x1^x2)+(x3&x4));

    if (t0 != -55065) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	uint64_t x7 = 6LLU;
	int64_t x8 = INT64_MAX;
	uint64_t t1 = 2079790419090454022LLU;

    t1 = ((x5^x6)+(x7&x8));

    if (t1 != 32646LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 7U;
	int8_t x11 = INT8_MAX;
	int16_t x12 = -1;
	static int32_t t2 = 615;

    t2 = ((x9^x10)+(x11&x12));

    if (t2 != 119) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MAX;
	uint64_t x14 = 347850547978LLU;
	static volatile uint64_t x15 = UINT64_MAX;
	uint64_t x16 = 105459979LLU;
	uint64_t t3 = 0LLU;

    t3 = ((x13^x14)+(x15&x16));

    if (t3 != 347956008064LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = 56U;
	int16_t x19 = 1;
	uint64_t x20 = 245734429722320LLU;
	uint64_t t4 = 10417404015609LLU;

    t4 = ((x17^x18)+(x19&x20));

    if (t4 != 71LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -7;
	int32_t x22 = INT32_MIN;
	volatile uint16_t x23 = 3416U;
	uint8_t x24 = 0U;

    t5 = ((x21^x22)+(x23&x24));

    if (t5 != 2147483641) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x25 = -60;
	int8_t x26 = -1;
	uint32_t x27 = 7U;
	uint32_t t6 = 242690410U;

    t6 = ((x25^x26)+(x27&x28));

    if (t6 != 66U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = INT32_MAX;
	volatile int16_t x30 = INT16_MIN;
	volatile uint64_t x31 = 596441232LLU;
	static int64_t x32 = INT64_MAX;
	volatile uint64_t t7 = 4135LLU;

    t7 = ((x29^x30)+(x31&x32));

    if (t7 != 18446744072158541967LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	uint64_t x34 = UINT64_MAX;
	static uint64_t x35 = 6180130715LLU;
	int16_t x36 = 27;

    t8 = ((x33^x34)+(x35&x36));

    if (t8 != 18446744069414584347LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 292395065268551669LLU;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = 23971714553318133LL;

    t9 = ((x37^x38)+(x39&x40));

    if (t9 != 316366779821869695LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x42 = -37;
	static uint8_t x43 = 3U;
	static volatile int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 270388375;

    t10 = ((x41^x42)+(x43&x44));

    if (t10 != 32731) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x45 = INT16_MAX;
	static uint32_t x46 = 3922631U;
	int64_t t11 = 664504125874302LL;

    t11 = ((x45^x46)+(x47&x48));

    if (t11 != 3908920LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x54 = 860906180884030949LLU;
	int8_t x55 = -1;

    t12 = ((x53^x54)+(x55&x56));

    if (t12 != 8362465853823261210LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MAX;
	int8_t x58 = INT8_MIN;
	volatile int64_t t13 = 8873095LL;

    t13 = ((x57^x58)+(x59&x60));

    if (t13 != -32641LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = 29515587LLU;
	volatile int64_t x62 = INT64_MIN;
	uint8_t x63 = 110U;
	static volatile uint64_t t14 = 82955246904016404LLU;

    t14 = ((x61^x62)+(x63&x64));

    if (t14 != 9223372036884291505LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x65 = 0;
	static int16_t x66 = 0;
	uint32_t x67 = 14732U;
	uint8_t x68 = UINT8_MAX;
	volatile uint32_t t15 = 638729U;

    t15 = ((x65^x66)+(x67&x68));

    if (t15 != 140U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MAX;
	uint64_t x71 = 60905LLU;
	int16_t x72 = -459;
	uint64_t t16 = 3000634233035239536LLU;

    t16 = ((x69^x70)+(x71&x72));

    if (t16 != 9223372039002319904LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x78 = INT32_MIN;
	static uint16_t x79 = 19U;
	int8_t x80 = INT8_MIN;
	volatile uint32_t t17 = 3131006U;

    t17 = ((x77^x78)+(x79&x80));

    if (t17 != 2147483647U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = -1;
	int16_t x83 = -1;
	int32_t x84 = -899400489;
	int32_t t18 = 278744246;

    t18 = ((x81^x82)+(x83&x84));

    if (t18 != -899407052) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x85 = INT16_MIN;
	volatile int8_t x86 = -12;
	uint8_t x87 = 7U;
	volatile int32_t t19 = 186;

    t19 = ((x85^x86)+(x87&x88));

    if (t19 != 32761) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x91 = INT8_MIN;
	volatile uint16_t x92 = UINT16_MAX;
	int64_t t20 = 0LL;

    t20 = ((x89^x90)+(x91&x92));

    if (t20 != 65609LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x94 = UINT64_MAX;
	volatile uint64_t t21 = 906357LLU;

    t21 = ((x93^x94)+(x95&x96));

    if (t21 != 2147516287LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x105 = 213U;
	int8_t x106 = INT8_MAX;
	volatile int64_t x108 = INT64_MIN;

    t22 = ((x105^x106)+(x107&x108));

    if (t22 != 170LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x109 = INT8_MIN;
	int64_t x110 = 10LL;
	int64_t x111 = 956658240491688206LL;
	uint64_t x112 = UINT64_MAX;
	static uint64_t t23 = 16669967964647LLU;

    t23 = ((x109^x110)+(x111&x112));

    if (t23 != 956658240491688088LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x114 = UINT64_MAX;
	volatile uint64_t x116 = UINT64_MAX;
	volatile uint64_t t24 = 204799LLU;

    t24 = ((x113^x114)+(x115&x116));

    if (t24 != 32764LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = -1LL;
	static int64_t x118 = -1LL;
	int32_t x119 = INT32_MAX;
	int32_t x120 = INT32_MAX;
	volatile int64_t t25 = -910087LL;

    t25 = ((x117^x118)+(x119&x120));

    if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x121 = 9U;
	volatile uint64_t x122 = 4137664LLU;
	volatile int16_t x123 = 246;
	int16_t x124 = -1;
	volatile uint64_t t26 = 67054337LLU;

    t26 = ((x121^x122)+(x123&x124));

    if (t26 != 4137919LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int8_t x132 = 8;
	volatile int32_t t27 = -278931;

    t27 = ((x129^x130)+(x131&x132));

    if (t27 != -132232) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t28 = -157497957013013LL;

    t28 = ((x133^x134)+(x135&x136));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MIN;
	static int64_t x139 = INT64_MIN;
	volatile int64_t x140 = -110LL;

    t29 = ((x137^x138)+(x139&x140));

    if (t29 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x141 = 2;
	int32_t x142 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MAX;
	volatile int64_t t30 = 79840547402592903LL;

    t30 = ((x141^x142)+(x143&x144));

    if (t30 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = INT16_MAX;
	int64_t x146 = -1LL;
	static uint16_t x147 = 5627U;
	volatile int32_t x148 = -1;
	int64_t t31 = -93333LL;

    t31 = ((x145^x146)+(x147&x148));

    if (t31 != -27141LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x149 = -1;
	uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MIN;

    t32 = ((x149^x150)+(x151&x152));

    if (t32 != -65536) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x153 = 2424U;
	static volatile int32_t x155 = INT32_MIN;
	uint32_t x156 = UINT32_MAX;

    t33 = ((x153^x154)+(x155&x156));

    if (t33 != 2147453304U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x157 = INT8_MIN;
	static uint32_t x158 = 3U;
	static int16_t x159 = 1;
	int32_t x160 = 1157532;
	static uint32_t t34 = 17887182U;

    t34 = ((x157^x158)+(x159&x160));

    if (t34 != 4294967171U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x164 = -5923476375684LL;
	volatile int64_t t35 = -615236586709849126LL;

    t35 = ((x161^x162)+(x163&x164));

    if (t35 != -5924907352079LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x165 = INT32_MAX;
	volatile int8_t x166 = INT8_MIN;
	uint32_t x167 = 12383081U;
	int16_t x168 = -683;

    t36 = ((x165^x166)+(x167&x168));

    if (t36 != 2159866304U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x173 = UINT64_MAX;
	uint16_t x174 = 23U;
	uint8_t x175 = UINT8_MAX;
	int8_t x176 = -1;
	volatile uint64_t t37 = 3348058LLU;

    t37 = ((x173^x174)+(x175&x176));

    if (t37 != 231LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = -1;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = UINT8_MAX;
	static int32_t t38 = -79046;

    t38 = ((x177^x178)+(x179&x180));

    if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = INT32_MAX;
	static int16_t x182 = 7964;
	int32_t x183 = 164822;
	uint16_t x184 = 20964U;
	static int32_t t39 = 202468003;

    t39 = ((x181^x182)+(x183&x184));

    if (t39 != 2147476135) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	volatile uint16_t x187 = 6391U;
	int16_t x188 = -55;
	int32_t t40 = 17833871;

    t40 = ((x185^x186)+(x187&x188));

    if (t40 != 2147457217) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x189 = 114LL;
	static int64_t x190 = INT64_MIN;
	uint32_t x191 = 436107U;

    t41 = ((x189^x190)+(x191&x192));

    if (t41 != -9223372036854775694LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x193 = 2069075LLU;
	static volatile int16_t x194 = -1;
	uint16_t x195 = UINT16_MAX;
	volatile int8_t x196 = 1;
	uint64_t t42 = 667356LLU;

    t42 = ((x193^x194)+(x195&x196));

    if (t42 != 18446744073707482541LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x197 = 19991U;
	uint32_t x198 = UINT32_MAX;
	int64_t x199 = -1LL;
	int32_t x200 = -1;
	static int64_t t43 = -102273LL;

    t43 = ((x197^x198)+(x199&x200));

    if (t43 != 4294947303LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x201 = 16U;
	volatile uint8_t x202 = 18U;
	volatile uint64_t x203 = UINT64_MAX;
	uint64_t x204 = 336211LLU;
	uint64_t t44 = 160586LLU;

    t44 = ((x201^x202)+(x203&x204));

    if (t44 != 336213LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x205 = 67U;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = UINT16_MAX;
	int64_t x208 = -836586701LL;

    t45 = ((x205^x206)+(x207&x208));

    if (t45 != -2147437706LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x209 = -1337;
	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MAX;
	int8_t x212 = 0;
	int64_t t46 = 2856035LL;

    t46 = ((x209^x210)+(x211&x212));

    if (t46 != 9223372036854774471LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x213 = INT16_MIN;
	static uint64_t x214 = 8273912611721454LLU;
	int64_t x215 = 6315129405080LL;
	static int64_t x216 = 0LL;
	uint64_t t47 = 1204829164441976642LLU;

    t47 = ((x213^x214)+(x215&x216));

    if (t47 != 18438470161097838830LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x217 = INT8_MAX;
	volatile int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	volatile int64_t x220 = -3722LL;
	int64_t t48 = 2643943LL;

    t48 = ((x217^x218)+(x219&x220));

    if (t48 != 117LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = -1;
	volatile int8_t x223 = 15;
	int64_t x224 = INT64_MIN;
	int64_t t49 = 113167335947LL;

    t49 = ((x221^x222)+(x223&x224));

    if (t49 != -24LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x225 = -1;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = 7U;
	volatile int64_t t50 = INT64_MAX;

    t50 = ((x225^x226)+(x227&x228));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x229 = -1;
	uint8_t x232 = 0U;
	uint32_t t51 = 4U;

    t51 = ((x229^x230)+(x231&x232));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x233 = 1U;
	uint16_t x234 = 3U;
	int8_t x235 = -1;
	int8_t x236 = 1;
	int32_t t52 = 646;

    t52 = ((x233^x234)+(x235&x236));

    if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x238 = 49U;
	int8_t x240 = INT8_MIN;
	int64_t t53 = 7803802255448626LL;

    t53 = ((x237^x238)+(x239&x240));

    if (t53 != -178LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = INT16_MIN;
	uint16_t x242 = 18U;
	uint32_t x243 = 113U;
	uint32_t t54 = 47335343U;

    t54 = ((x241^x242)+(x243&x244));

    if (t54 != 4294934659U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x245 = INT64_MIN;
	uint64_t x246 = 177417934112LLU;
	volatile int8_t x248 = 1;
	uint64_t t55 = 22592LLU;

    t55 = ((x245^x246)+(x247&x248));

    if (t55 != 9223372214272709920LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x249 = UINT16_MAX;
	static int32_t x250 = -1;
	static int64_t x251 = -36582034637LL;
	int32_t x252 = 110749;

    t56 = ((x249^x250)+(x251&x252));

    if (t56 != -53231LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x253 = 2U;
	static int16_t x255 = INT16_MIN;
	volatile uint32_t x256 = 22U;
	uint32_t t57 = 203902U;

    t57 = ((x253^x254)+(x255&x256));

    if (t57 != 4294967170U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x257 = 197376374953639099LLU;
	int8_t x258 = INT8_MAX;
	static int64_t x259 = INT64_MIN;
	static uint64_t t58 = 536084492179LLU;

    t58 = ((x257^x258)+(x259&x260));

    if (t58 != 197376374953639108LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = INT32_MAX;
	volatile int32_t x262 = INT32_MAX;
	volatile uint64_t x263 = 146881925609LLU;
	uint8_t x264 = 2U;
	uint64_t t59 = 6159261121LLU;

    t59 = ((x261^x262)+(x263&x264));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x266 = INT8_MIN;
	int16_t x268 = 3;
	volatile int32_t t60 = 15;

    t60 = ((x265^x266)+(x267&x268));

    if (t60 != -8) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x269 = INT64_MAX;
	uint32_t x270 = 19480U;
	volatile int64_t t61 = -71481LL;

    t61 = ((x269^x270)+(x271&x272));

    if (t61 != 9200647057399526653LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = -1;
	static uint16_t x276 = UINT16_MAX;
	int32_t t62 = -6;

    t62 = ((x273^x274)+(x275&x276));

    if (t62 != 32766) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x277 = INT64_MIN;
	uint8_t x278 = UINT8_MAX;
	static volatile int16_t x279 = INT16_MAX;
	uint16_t x280 = UINT16_MAX;
	volatile int64_t t63 = -996895360886278LL;

    t63 = ((x277^x278)+(x279&x280));

    if (t63 != -9223372036854742786LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = 1;
	int16_t x286 = 6;
	static volatile int8_t x288 = -1;
	static volatile uint64_t t64 = 1673908104LLU;

    t64 = ((x285^x286)+(x287&x288));

    if (t64 != 6LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x289 = 862U;
	int32_t x290 = -1;
	int64_t x291 = -1LL;
	static volatile uint16_t x292 = 13U;
	int64_t t65 = 12077112LL;

    t65 = ((x289^x290)+(x291&x292));

    if (t65 != -850LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MIN;
	volatile int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t66 = 481077;

    t66 = ((x293^x294)+(x295&x296));

    if (t66 != 32640) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x299 = 15U;
	int32_t t67 = -903481430;

    t67 = ((x297^x298)+(x299&x300));

    if (t67 != 134) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x301 = INT32_MIN;
	volatile uint32_t x302 = 43136U;
	volatile uint16_t x303 = 1196U;
	volatile int32_t x304 = INT32_MAX;
	volatile uint32_t t68 = 15811280U;

    t68 = ((x301^x302)+(x303&x304));

    if (t68 != 2147527980U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x305 = -27;
	volatile uint8_t x306 = 2U;
	int8_t x307 = 3;
	uint32_t x308 = UINT32_MAX;
	static volatile uint32_t t69 = 107417794U;

    t69 = ((x305^x306)+(x307&x308));

    if (t69 != 4294967274U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x309 = UINT16_MAX;
	uint8_t x310 = 4U;
	uint64_t x311 = 1LLU;
	uint64_t t70 = 252000724LLU;

    t70 = ((x309^x310)+(x311&x312));

    if (t70 != 65532LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x313 = INT32_MAX;
	volatile int64_t x314 = INT64_MIN;
	uint64_t x315 = UINT64_MAX;
	static int16_t x316 = -2;
	volatile uint64_t t71 = 264456673LLU;

    t71 = ((x313^x314)+(x315&x316));

    if (t71 != 9223372039002259453LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x317 = 13;
	static int8_t x318 = -1;
	int64_t x319 = 2069910764LL;
	volatile int32_t x320 = 1884;
	int64_t t72 = -118559LL;

    t72 = ((x317^x318)+(x319&x320));

    if (t72 != 1086LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x321 = -1LL;
	uint32_t x322 = UINT32_MAX;
	uint32_t x323 = 156U;
	int16_t x324 = -1;
	volatile int64_t t73 = -4264036461478846LL;

    t73 = ((x321^x322)+(x323&x324));

    if (t73 != -4294967140LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x325 = 496832822U;
	uint64_t x326 = 1583199LLU;
	int8_t x327 = 6;
	uint64_t t74 = 53843145LLU;

    t74 = ((x325^x326)+(x327&x328));

    if (t74 != 495270255LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x329 = 14U;
	static uint64_t x331 = 52662611LLU;
	int16_t x332 = INT16_MIN;
	volatile uint64_t t75 = 31556758389LLU;

    t75 = ((x329^x330)+(x331&x332));

    if (t75 != 52658184LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x333 = UINT16_MAX;
	static int8_t x334 = INT8_MIN;
	static volatile int64_t x335 = INT64_MIN;
	volatile uint32_t x336 = 1337957030U;
	volatile int64_t t76 = -1350492LL;

    t76 = ((x333^x334)+(x335&x336));

    if (t76 != -65409LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x337 = INT8_MIN;
	int64_t x338 = INT64_MIN;
	int8_t x340 = INT8_MIN;
	int64_t t77 = 30394389602490563LL;

    t77 = ((x337^x338)+(x339&x340));

    if (t77 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x341 = INT64_MIN;
	volatile uint32_t x342 = 1156289U;
	volatile int32_t x343 = INT32_MIN;
	uint32_t x344 = 53U;

    t78 = ((x341^x342)+(x343&x344));

    if (t78 != -9223372036853619519LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x345 = 791841LLU;
	volatile uint32_t x346 = UINT32_MAX;
	int8_t x347 = -1;
	uint64_t t79 = 146074201251054LLU;

    t79 = ((x345^x346)+(x347&x348));

    if (t79 != 2146691806LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x349 = -8;
	volatile int8_t x350 = 16;
	volatile uint16_t x352 = UINT16_MAX;

    t80 = ((x349^x350)+(x351&x352));

    if (t80 != 65511) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x354 = 114U;
	static int16_t x355 = 7904;

    t81 = ((x353^x354)+(x355&x356));

    if (t81 != 211) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x361 = 4461734U;
	int64_t x363 = -17060546985109428LL;
	volatile int32_t x364 = 54884690;
	volatile int64_t t82 = -487LL;

    t82 = ((x361^x362)+(x363&x364));

    if (t82 != 4311827302LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x365 = INT32_MAX;
	volatile int8_t x366 = -1;
	volatile uint32_t x367 = 528132U;
	volatile int64_t t83 = -49212881687LL;

    t83 = ((x365^x366)+(x367&x368));

    if (t83 != -2146958076LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x369 = -1LL;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = 42544970434LLU;
	int16_t x372 = -1;
	static volatile uint64_t t84 = 0LLU;

    t84 = ((x369^x370)+(x371&x372));

    if (t84 != 42545003201LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x373 = 0U;
	int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MAX;
	int32_t t85 = -2872;

    t85 = ((x373^x374)+(x375&x376));

    if (t85 != 13) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MAX;
	static int32_t x379 = -1;
	int32_t x380 = -3338;
	volatile int64_t t86 = -1714759053LL;

    t86 = ((x377^x378)+(x379&x380));

    if (t86 != -9223372036854746379LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x381 = UINT64_MAX;
	static uint32_t x383 = UINT32_MAX;
	uint16_t x384 = 0U;

    t87 = ((x381^x382)+(x383&x384));

    if (t87 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x385 = -1;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 0U;
	volatile uint32_t x388 = 13U;
	uint32_t t88 = 703U;

    t88 = ((x385^x386)+(x387&x388));

    if (t88 != 127U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x389 = UINT64_MAX;
	volatile uint8_t x390 = 7U;
	int8_t x391 = -1;
	int32_t x392 = -1;
	uint64_t t89 = 14LLU;

    t89 = ((x389^x390)+(x391&x392));

    if (t89 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x394 = 6051U;
	volatile uint8_t x395 = 1U;
	int16_t x396 = INT16_MIN;
	uint32_t t90 = 121419U;

    t90 = ((x393^x394)+(x395&x396));

    if (t90 != 4294961265U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x398 = 180U;
	int32_t x400 = INT32_MIN;
	volatile uint32_t t91 = 48547271U;

    t91 = ((x397^x398)+(x399&x400));

    if (t91 != 255U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x401 = 0;
	uint32_t x402 = UINT32_MAX;
	volatile int8_t x403 = INT8_MIN;
	volatile int8_t x404 = 0;
	uint32_t t92 = UINT32_MAX;

    t92 = ((x401^x402)+(x403&x404));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x405 = INT16_MIN;
	volatile uint16_t x406 = 28U;
	int64_t x408 = INT64_MIN;
	int64_t t93 = 190667750LL;

    t93 = ((x405^x406)+(x407&x408));

    if (t93 != -32740LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x409 = 7U;
	int8_t x410 = -1;
	uint64_t x411 = 6LLU;
	uint64_t t94 = 95LLU;

    t94 = ((x409^x410)+(x411&x412));

    if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x413 = 691576;
	volatile int16_t x414 = INT16_MIN;
	static volatile int16_t x416 = -1;
	static int32_t t95 = 120574;

    t95 = ((x413^x414)+(x415&x416));

    if (t95 != -717449) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	int16_t x418 = INT16_MIN;
	uint64_t x419 = 3834627833581045281LLU;
	uint16_t x420 = 4192U;
	volatile uint64_t t96 = 4218467407591484LLU;

    t96 = ((x417^x418)+(x419&x420));

    if (t96 != 18446744073709518879LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x421 = INT16_MIN;
	uint64_t x422 = 16307897126181LLU;
	static int32_t x423 = -1;
	int8_t x424 = -1;
	uint64_t t97 = 22355056LLU;

    t97 = ((x421^x422)+(x423&x424));

    if (t97 != 18446727765812432164LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x425 = 237U;
	uint16_t x426 = 1204U;
	volatile int32_t x427 = INT32_MAX;
	uint8_t x428 = 1U;

    t98 = ((x425^x426)+(x427&x428));

    if (t98 != 1114) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x433 = INT8_MIN;
	int64_t x434 = -1LL;
	volatile uint64_t x435 = UINT64_MAX;
	int64_t x436 = 5232527947493LL;

    t99 = ((x433^x434)+(x435&x436));

    if (t99 != 5232527947620LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x438 = -1;
	uint64_t x440 = 110204474950743734LLU;
	static uint64_t t100 = 2131952469112258LLU;

    t100 = ((x437^x438)+(x439&x440));

    if (t100 != 110204473506267133LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x441 = INT64_MAX;
	int64_t x442 = -69348401409358050LL;
	int64_t x443 = INT64_MIN;
	static uint8_t x444 = 1U;
	int64_t t101 = -72724923370722LL;

    t101 = ((x441^x442)+(x443&x444));

    if (t101 != -9154023635445417759LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x445 = -353468513LL;
	int8_t x447 = -3;
	volatile int8_t x448 = INT8_MIN;
	int64_t t102 = -1889380903354LL;

    t102 = ((x445^x446)+(x447&x448));

    if (t102 != -353474801LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x449 = UINT32_MAX;
	uint8_t x450 = 3U;
	uint64_t x451 = 4587754229521487LLU;
	int16_t x452 = -370;

    t103 = ((x449^x450)+(x451&x452));

    if (t103 != 4587758524488714LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x453 = -1LL;
	uint64_t x456 = 2306178211298LLU;
	volatile uint64_t t104 = 0LLU;

    t104 = ((x453^x454)+(x455&x456));

    if (t104 != 2147483647LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x457 = 0;
	int8_t x458 = INT8_MIN;
	uint16_t x459 = UINT16_MAX;
	int32_t x460 = INT32_MIN;

    t105 = ((x457^x458)+(x459&x460));

    if (t105 != -128) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x465 = INT64_MAX;
	int16_t x466 = INT16_MIN;
	static uint64_t x467 = UINT64_MAX;
	int32_t x468 = -1;
	volatile uint64_t t106 = 3313220954143446840LLU;

    t106 = ((x465^x466)+(x467&x468));

    if (t106 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x469 = INT16_MIN;
	int8_t x470 = 3;
	int32_t x471 = INT32_MIN;
	uint64_t x472 = UINT64_MAX;
	uint64_t t107 = 1LLU;

    t107 = ((x469^x470)+(x471&x472));

    if (t107 != 18446744071562035203LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x478 = INT64_MAX;
	int8_t x479 = -52;
	static int32_t x480 = INT32_MIN;
	static volatile int64_t t108 = -4220840456928LL;

    t108 = ((x477^x478)+(x479&x480));

    if (t108 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x482 = INT16_MAX;
	int16_t x483 = INT16_MAX;
	int16_t x484 = -96;
	volatile int32_t t109 = -7907;

    t109 = ((x481^x482)+(x483&x484));

    if (t109 != 65184) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x485 = -1817429LL;
	int8_t x486 = INT8_MIN;
	uint8_t x487 = 1U;
	volatile uint8_t x488 = 27U;

    t110 = ((x485^x486)+(x487&x488));

    if (t110 != 1817388LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x489 = 12964U;
	int64_t x490 = -1LL;
	int16_t x491 = -1;
	int32_t x492 = -37;
	int64_t t111 = 3057882563875577428LL;

    t111 = ((x489^x490)+(x491&x492));

    if (t111 != -13002LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x493 = INT16_MAX;
	uint32_t x494 = UINT32_MAX;
	int64_t t112 = -135716145357LL;

    t112 = ((x493^x494)+(x495&x496));

    if (t112 != 4294967295LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x497 = 88865U;
	volatile int8_t x498 = INT8_MAX;
	int16_t x499 = INT16_MAX;
	volatile uint64_t x500 = UINT64_MAX;
	volatile uint64_t t113 = 3355186493LLU;

    t113 = ((x497^x498)+(x499&x500));

    if (t113 != 121693LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x502 = 35391689U;
	volatile int16_t x503 = INT16_MIN;
	int8_t x504 = -1;
	int64_t t114 = 0LL;

    t114 = ((x501^x502)+(x503&x504));

    if (t114 != -9223372036819416887LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x506 = 803445974;
	int16_t x507 = -726;
	static int8_t x508 = INT8_MIN;

    t115 = ((x505^x506)+(x507&x508));

    if (t115 != 803445244) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x509 = INT64_MIN;
	volatile int8_t x511 = -1;
	int32_t x512 = INT32_MIN;
	static volatile int64_t t116 = 1LL;

    t116 = ((x509^x510)+(x511&x512));

    if (t116 != -2147483648LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x513 = INT8_MIN;
	volatile uint64_t x514 = UINT64_MAX;
	static int64_t x516 = -43449701520LL;
	uint64_t t117 = 66499496LLU;

    t117 = ((x513^x514)+(x515&x516));

    if (t117 != 18446744030259850223LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x517 = INT64_MAX;
	int16_t x519 = INT16_MAX;
	int8_t x520 = -20;

    t118 = ((x517^x518)+(x519&x520));

    if (t118 != -9223372034707259413LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x521 = -2329485942731009LL;
	int16_t x522 = -1;
	uint16_t x523 = 11628U;
	int64_t t119 = -84908788LL;

    t119 = ((x521^x522)+(x523&x524));

    if (t119 != 2329485942742636LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x525 = 2159542743284905LL;
	int32_t x526 = INT32_MIN;
	int8_t x527 = -1;
	int8_t x528 = INT8_MIN;
	volatile int64_t t120 = 6947536812200903LL;

    t120 = ((x525^x526)+(x527&x528));

    if (t120 != -2159542941565911LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x529 = 7778LL;
	int16_t x530 = -1;
	static uint32_t x531 = UINT32_MAX;
	static int64_t x532 = INT64_MAX;

    t121 = ((x529^x530)+(x531&x532));

    if (t121 != 4294959516LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x534 = INT32_MIN;
	static int32_t x535 = INT32_MAX;
	volatile int32_t x536 = INT32_MIN;

    t122 = ((x533^x534)+(x535&x536));

    if (t122 != 18446744071666809393LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x537 = 2803U;
	int64_t x538 = INT64_MIN;
	volatile uint16_t x540 = 20194U;
	int64_t t123 = 1LL;

    t123 = ((x537^x538)+(x539&x540));

    if (t123 != -9223372036854752811LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x541 = 4;
	static volatile int8_t x542 = 1;
	uint16_t x544 = 725U;
	int32_t t124 = -265;

    t124 = ((x541^x542)+(x543&x544));

    if (t124 != 6) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x545 = -1;
	static uint8_t x547 = 21U;
	int16_t x548 = -1;
	int32_t t125 = 890054;

    t125 = ((x545^x546)+(x547&x548));

    if (t125 != -235) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x549 = 467U;
	int64_t x550 = -1LL;
	static int8_t x551 = -1;

    t126 = ((x549^x550)+(x551&x552));

    if (t126 != -522LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x554 = INT32_MAX;
	volatile uint64_t x555 = 51144041754525577LLU;
	volatile int16_t x556 = INT16_MIN;
	static volatile uint64_t t127 = 64987759611328580LLU;

    t127 = ((x553^x554)+(x555&x556));

    if (t127 != 51144039607009280LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x557 = INT8_MIN;
	volatile int32_t x558 = -1;
	static volatile int32_t x559 = -11;
	volatile int64_t t128 = -25LL;

    t128 = ((x557^x558)+(x559&x560));

    if (t128 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x562 = 103;
	int8_t x563 = -1;
	int8_t x564 = INT8_MAX;

    t129 = ((x561^x562)+(x563&x564));

    if (t129 != 102) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x566 = UINT8_MAX;
	int8_t x567 = INT8_MAX;
	int32_t x568 = INT32_MAX;
	volatile int32_t t130 = -2;

    t130 = ((x565^x566)+(x567&x568));

    if (t130 != -2147483266) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x569 = INT16_MAX;
	uint16_t x570 = UINT16_MAX;
	int64_t x571 = -1LL;
	volatile int8_t x572 = INT8_MAX;
	int64_t t131 = -159LL;

    t131 = ((x569^x570)+(x571&x572));

    if (t131 != 32895LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x573 = INT64_MAX;
	uint16_t x574 = UINT16_MAX;
	static volatile uint16_t x575 = UINT16_MAX;
	volatile uint16_t x576 = 31265U;
	static volatile int64_t t132 = 14LL;

    t132 = ((x573^x574)+(x575&x576));

    if (t132 != 9223372036854741537LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x578 = INT8_MAX;
	int32_t x579 = -1;

    t133 = ((x577^x578)+(x579&x580));

    if (t133 != 65423) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x581 = -1;
	static volatile int16_t x582 = 764;
	int16_t x583 = -29;
	int32_t x584 = -39216655;
	int32_t t134 = -30590;

    t134 = ((x581^x582)+(x583&x584));

    if (t134 != -39217436) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x585 = 1;
	int64_t x586 = -1LL;

    t135 = ((x585^x586)+(x587&x588));

    if (t135 != 35LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x593 = 7U;
	uint16_t x594 = 8U;
	volatile int32_t x595 = -1;
	uint32_t t136 = 64U;

    t136 = ((x593^x594)+(x595&x596));

    if (t136 != 14U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x597 = UINT32_MAX;
	int32_t x598 = INT32_MIN;
	uint64_t x599 = UINT64_MAX;
	uint8_t x600 = 92U;
	volatile uint64_t t137 = 84535120090LLU;

    t137 = ((x597^x598)+(x599&x600));

    if (t137 != 2147483739LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x601 = INT8_MAX;
	int64_t x602 = INT64_MAX;
	static int32_t x604 = -1;
	volatile int64_t t138 = -65LL;

    t138 = ((x601^x602)+(x603&x604));

    if (t138 != -128LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x606 = INT8_MAX;
	int32_t x607 = 5;
	int64_t x608 = INT64_MIN;
	volatile int64_t t139 = -206827491662851728LL;

    t139 = ((x605^x606)+(x607&x608));

    if (t139 != -2147483521LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t t140 = 36823;

    t140 = ((x609^x610)+(x611&x612));

    if (t140 != -122) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x613 = INT64_MIN;
	int16_t x614 = INT16_MIN;
	int64_t x615 = INT64_MIN;
	volatile int8_t x616 = -1;
	int64_t t141 = -377003629676632LL;

    t141 = ((x613^x614)+(x615&x616));

    if (t141 != -32768LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x617 = INT32_MIN;
	volatile int64_t x618 = 28890LL;
	static int64_t x619 = 1123LL;

    t142 = ((x617^x618)+(x619&x620));

    if (t142 != 18446744071562096957LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x621 = -1LL;
	int32_t x622 = INT32_MIN;
	volatile uint16_t x623 = 78U;

    t143 = ((x621^x622)+(x623&x624));

    if (t143 != 2147483647LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x625 = 17U;
	int16_t x626 = -1;
	volatile int32_t x627 = INT32_MAX;
	static volatile uint32_t x628 = 43249U;

    t144 = ((x625^x626)+(x627&x628));

    if (t144 != 43231U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x629 = INT16_MIN;
	static volatile int16_t x630 = 187;
	volatile uint32_t x631 = UINT32_MAX;
	uint16_t x632 = UINT16_MAX;

    t145 = ((x629^x630)+(x631&x632));

    if (t145 != 32954U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x633 = INT8_MAX;
	uint16_t x634 = 1U;
	int32_t x635 = INT32_MIN;
	uint8_t x636 = UINT8_MAX;

    t146 = ((x633^x634)+(x635&x636));

    if (t146 != 126) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x637 = 188547695297LLU;
	static volatile uint16_t x638 = 249U;
	static int64_t x639 = INT64_MAX;
	int64_t x640 = INT64_MIN;
	uint64_t t147 = 15LLU;

    t147 = ((x637^x638)+(x639&x640));

    if (t147 != 188547695160LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x641 = UINT32_MAX;
	static int64_t x642 = -131984275051377LL;
	volatile int16_t x643 = -2;
	int64_t t148 = -8451LL;

    t148 = ((x641^x642)+(x643&x644));

    if (t148 != -131980119993362LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x645 = INT8_MAX;
	volatile uint64_t x646 = 436LLU;
	int32_t x648 = -1;
	static volatile uint64_t t149 = 210652516LLU;

    t149 = ((x645^x646)+(x647&x648));

    if (t149 != 655LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x649 = INT32_MIN;
	volatile int64_t x650 = INT64_MAX;
	static int64_t x651 = INT64_MAX;
	int16_t x652 = -1;
	volatile int64_t t150 = 65547562176163027LL;

    t150 = ((x649^x650)+(x651&x652));

    if (t150 != 2147483646LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x654 = -1;
	int16_t x655 = INT16_MIN;
	int32_t x656 = INT32_MIN;
	volatile uint64_t t151 = 83LLU;

    t151 = ((x653^x654)+(x655&x656));

    if (t151 != 18446744071562004233LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x658 = INT8_MAX;
	int16_t x659 = -7679;
	uint32_t x660 = UINT32_MAX;
	static uint32_t t152 = 31U;

    t152 = ((x657^x658)+(x659&x660));

    if (t152 != 4294959714U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x661 = -1;
	int32_t x662 = -718;
	uint32_t x663 = 128630904U;
	volatile int8_t x664 = -1;
	volatile uint32_t t153 = 180354U;

    t153 = ((x661^x662)+(x663&x664));

    if (t153 != 128631621U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x665 = INT32_MAX;
	uint64_t x666 = UINT64_MAX;
	int8_t x667 = INT8_MIN;
	static int64_t x668 = INT64_MAX;

    t154 = ((x665^x666)+(x667&x668));

    if (t154 != 9223372034707292032LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x669 = -296;
	static int32_t x670 = -1;
	int32_t x671 = INT32_MIN;
	int64_t t155 = -732565164182371066LL;

    t155 = ((x669^x670)+(x671&x672));

    if (t155 != -2147483353LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x673 = INT32_MAX;
	static int64_t x674 = INT64_MIN;
	uint16_t x676 = 205U;

    t156 = ((x673^x674)+(x675&x676));

    if (t156 != -9223372034707291956LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x678 = INT64_MAX;
	int32_t x679 = -1;
	int16_t x680 = INT16_MIN;
	int64_t t157 = -41387073LL;

    t157 = ((x677^x678)+(x679&x680));

    if (t157 != 9223372036854677504LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x682 = INT8_MAX;
	static int16_t x683 = INT16_MIN;
	volatile int8_t x684 = 1;
	static volatile uint32_t t158 = 1134U;

    t158 = ((x681^x682)+(x683&x684));

    if (t158 != 124U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x685 = 77U;
	uint16_t x686 = UINT16_MAX;
	uint32_t x687 = UINT32_MAX;
	int32_t x688 = INT32_MIN;
	static uint32_t t159 = 18U;

    t159 = ((x685^x686)+(x687&x688));

    if (t159 != 2147549106U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x695 = -3;
	volatile uint64_t x696 = 24723312515LLU;
	volatile uint64_t t160 = 3822166053103849LLU;

    t160 = ((x693^x694)+(x695&x696));

    if (t160 != 24723345280LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x698 = -4951366;
	int8_t x699 = -1;
	uint64_t t161 = 10106464312860LLU;

    t161 = ((x697^x698)+(x699&x700));

    if (t161 != 9223372036849824441LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x701 = INT64_MIN;
	int64_t x702 = INT64_MIN;
	uint8_t x703 = UINT8_MAX;
	static uint64_t x704 = 947405LLU;
	static volatile uint64_t t162 = 22334309921842LLU;

    t162 = ((x701^x702)+(x703&x704));

    if (t162 != 205LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	int32_t x706 = -2782974;
	uint16_t x707 = 28U;
	volatile int8_t x708 = INT8_MAX;
	volatile uint64_t t163 = 91LLU;

    t163 = ((x705^x706)+(x707&x708));

    if (t163 != 2783001LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x709 = 13U;
	static uint64_t x710 = 466LLU;
	int16_t x711 = INT16_MAX;
	static int64_t x712 = -1LL;

    t164 = ((x709^x710)+(x711&x712));

    if (t164 != 33246LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x713 = UINT16_MAX;
	volatile int16_t x714 = -11182;
	int8_t x716 = INT8_MAX;
	int32_t t165 = 21489;

    t165 = ((x713^x714)+(x715&x716));

    if (t165 != -54345) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x718 = -30;
	int16_t x719 = INT16_MIN;
	static uint16_t x720 = 15500U;
	static volatile int32_t t166 = 1496;

    t166 = ((x717^x718)+(x719&x720));

    if (t166 != -32739) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x721 = UINT64_MAX;
	int64_t x722 = INT64_MIN;
	static int8_t x723 = INT8_MIN;
	int64_t x724 = INT64_MIN;
	volatile uint64_t t167 = UINT64_MAX;

    t167 = ((x721^x722)+(x723&x724));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x729 = -62285275555920616LL;

    t168 = ((x729^x730)+(x731&x732));

    if (t168 != -62285275555920409LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x733 = INT32_MAX;
	volatile int64_t x734 = -1LL;
	int8_t x735 = INT8_MAX;
	static int8_t x736 = -1;
	static volatile int64_t t169 = 8678955929484456LL;

    t169 = ((x733^x734)+(x735&x736));

    if (t169 != -2147483521LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x737 = 67U;
	static uint8_t x739 = UINT8_MAX;
	volatile int8_t x740 = 6;
	volatile int64_t t170 = 5760250295LL;

    t170 = ((x737^x738)+(x739&x740));

    if (t170 != -9223372036854775735LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x741 = 184629950;
	uint16_t x742 = 479U;
	volatile int16_t x743 = INT16_MAX;
	int32_t t171 = -130761;

    t171 = ((x741^x742)+(x743&x744));

    if (t171 != 184662880) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x749 = 0U;
	int8_t x750 = -11;
	int8_t x751 = INT8_MIN;
	int8_t x752 = INT8_MAX;
	uint32_t t172 = 5U;

    t172 = ((x749^x750)+(x751&x752));

    if (t172 != 4294967285U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x753 = 58U;
	int32_t x754 = INT32_MAX;
	uint16_t x755 = 1827U;
	int64_t t173 = 464955679968702713LL;

    t173 = ((x753^x754)+(x755&x756));

    if (t173 != 2147485416LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x757 = 64U;
	volatile int64_t x758 = 1816716927337431LL;
	uint64_t x760 = 9540850LLU;
	volatile uint64_t t174 = 597681LLU;

    t174 = ((x757^x758)+(x759&x760));

    if (t174 != 1816716936872855LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x762 = -15;
	int16_t x763 = -1586;
	int16_t x764 = -6;
	uint64_t t175 = 1111LLU;

    t175 = ((x761^x762)+(x763&x764));

    if (t175 != 18446744073709550013LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint64_t x765 = UINT64_MAX;
	int16_t x766 = INT16_MAX;
	volatile uint64_t t176 = 16147479LLU;

    t176 = ((x765^x766)+(x767&x768));

    if (t176 != 4294901760LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x773 = 449;
	uint16_t x774 = 5363U;
	volatile uint16_t x775 = 1U;
	volatile int8_t x776 = -1;
	volatile int32_t t177 = -14103547;

    t177 = ((x773^x774)+(x775&x776));

    if (t177 != 5427) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x777 = -1;
	uint32_t x778 = UINT32_MAX;
	int8_t x779 = INT8_MAX;
	uint16_t x780 = 30U;
	volatile uint32_t t178 = 4566U;

    t178 = ((x777^x778)+(x779&x780));

    if (t178 != 30U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x782 = UINT64_MAX;
	static int64_t x784 = INT64_MIN;
	volatile uint64_t t179 = 323351150733LLU;

    t179 = ((x781^x782)+(x783&x784));

    if (t179 != 9223372036854775831LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x785 = 39699997LLU;
	int16_t x786 = 957;
	int32_t x787 = -1;
	static int64_t x788 = INT64_MIN;
	static volatile uint64_t t180 = 871964819993833LLU;

    t180 = ((x785^x786)+(x787&x788));

    if (t180 != 9223372036894475680LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x789 = -1LL;
	int16_t x790 = 3863;
	uint64_t t181 = 913198038678743713LLU;

    t181 = ((x789^x790)+(x791&x792));

    if (t181 != 4844LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x793 = INT32_MIN;
	int64_t x794 = 40859810648749LL;
	int32_t x795 = -1;
	int32_t x796 = INT32_MAX;
	static volatile int64_t t182 = -27153LL;

    t182 = ((x793^x794)+(x795&x796));

    if (t182 != -40856237124948LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x798 = 1;
	static uint8_t x799 = UINT8_MAX;
	int32_t x800 = INT32_MAX;
	static volatile int32_t t183 = 6197;

    t183 = ((x797^x798)+(x799&x800));

    if (t183 != 258) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x802 = 685836922757LL;
	uint8_t x803 = UINT8_MAX;
	volatile int64_t t184 = 3021227114955601006LL;

    t184 = ((x801^x802)+(x803&x804));

    if (t184 != -11672310472207918LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x805 = 6U;
	int32_t x807 = -1;
	uint8_t x808 = UINT8_MAX;
	int32_t t185 = 114731;

    t185 = ((x805^x806)+(x807&x808));

    if (t185 != -32507) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x809 = INT8_MIN;
	uint16_t x810 = 2962U;
	volatile int64_t x811 = INT64_MAX;
	static uint8_t x812 = UINT8_MAX;

    t186 = ((x809^x810)+(x811&x812));

    if (t186 != -2799LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x813 = 70035151774LLU;
	static int8_t x815 = INT8_MIN;
	int64_t x816 = 14LL;
	static uint64_t t187 = 1568073715LLU;

    t187 = ((x813^x814)+(x815&x816));

    if (t187 != 70035151775LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x817 = INT32_MIN;
	int16_t x818 = INT16_MIN;
	static int64_t t188 = -5767LL;

    t188 = ((x817^x818)+(x819&x820));

    if (t188 != 2147450880LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x821 = 3U;
	uint32_t x822 = 92640801U;
	volatile int32_t x823 = -1;
	int16_t x824 = INT16_MIN;

    t189 = ((x821^x822)+(x823&x824));

    if (t189 != 92608034U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x825 = 14228U;
	uint8_t x826 = UINT8_MAX;
	int64_t x827 = -202258070LL;
	int16_t x828 = -1;
	int64_t t190 = -340160740973630LL;

    t190 = ((x825^x826)+(x827&x828));

    if (t190 != -202243883LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x829 = -1LL;
	int32_t x830 = -1;
	volatile int8_t x831 = INT8_MIN;
	int64_t t191 = 2477375977972127LL;

    t191 = ((x829^x830)+(x831&x832));

    if (t191 != 32640LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x833 = -1;
	static int32_t x834 = 1;
	int16_t x835 = INT16_MIN;
	volatile int16_t x836 = -12;
	volatile int32_t t192 = 190439303;

    t192 = ((x833^x834)+(x835&x836));

    if (t192 != -32770) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x837 = -62988685;
	int32_t x839 = -1;
	int64_t t193 = 187308LL;

    t193 = ((x837^x838)+(x839&x840));

    if (t193 != -2084494965LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x841 = INT64_MIN;
	int32_t x842 = INT32_MIN;
	int32_t x844 = -1;
	int64_t t194 = 3604293LL;

    t194 = ((x841^x842)+(x843&x844));

    if (t194 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x845 = -1;
	static int8_t x846 = -1;
	uint32_t x847 = 99U;
	uint32_t x848 = 689290479U;
	uint32_t t195 = 229U;

    t195 = ((x845^x846)+(x847&x848));

    if (t195 != 99U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x849 = 351060129204LL;
	int16_t x850 = INT16_MAX;
	uint64_t x851 = 1122696LLU;
	int8_t x852 = 0;

    t196 = ((x849^x850)+(x851&x852));

    if (t196 != 351060101707LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x853 = INT16_MAX;
	int8_t x854 = 1;
	int64_t x855 = INT64_MIN;
	int16_t x856 = 223;
	static int64_t t197 = 5LL;

    t197 = ((x853^x854)+(x855&x856));

    if (t197 != 32766LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x857 = 1155U;
	uint8_t x858 = 0U;
	int64_t x859 = INT64_MIN;
	uint8_t x860 = UINT8_MAX;
	volatile int64_t t198 = -19054308027279197LL;

    t198 = ((x857^x858)+(x859&x860));

    if (t198 != 1155LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x861 = UINT16_MAX;
	uint16_t x862 = 9U;
	static uint32_t x863 = 140U;
	int32_t x864 = INT32_MIN;

    t199 = ((x861^x862)+(x863&x864));

    if (t199 != 65526U) { NG(); } else { ; }
	
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

