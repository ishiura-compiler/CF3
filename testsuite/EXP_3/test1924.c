
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

int8_t x6 = 0;
uint32_t x9 = UINT32_MAX;
int64_t x11 = -1LL;
static int16_t x12 = -1;
volatile uint32_t t2 = 511670U;
static int16_t x20 = -4;
uint32_t t4 = 1525318U;
int16_t x21 = -2;
int32_t t5 = -13359;
int8_t x30 = INT8_MAX;
int64_t x36 = -710946280725821417LL;
uint32_t x41 = 2082U;
int32_t x43 = -1;
int64_t x53 = -1LL;
static int8_t x54 = INT8_MAX;
volatile int64_t t12 = -52036168624008LL;
int16_t x57 = -1;
static int32_t x61 = INT32_MIN;
int64_t t15 = -26284576111096LL;
int32_t x72 = INT32_MIN;
int16_t x73 = -718;
int8_t x74 = INT8_MAX;
int64_t x78 = -682578046LL;
int32_t x82 = -1;
volatile int64_t x85 = 1385313001929308701LL;
uint8_t x115 = UINT8_MAX;
uint64_t x130 = 16112601666LLU;
int32_t x132 = -486109;
int64_t x133 = INT64_MAX;
volatile int32_t x139 = -1308;
static int32_t t30 = -601406;
int64_t x145 = 2LL;
volatile int64_t t32 = 14765LL;
static volatile int32_t x152 = -1;
int8_t x157 = 11;
static uint64_t x180 = UINT64_MAX;
int64_t x182 = INT64_MAX;
int64_t t42 = 11957482958LL;
volatile uint64_t x198 = UINT64_MAX;
int32_t x203 = INT32_MAX;
volatile int64_t x204 = -1LL;
int32_t t45 = 226521669;
static uint64_t t46 = 781LLU;
volatile int64_t x219 = 11515LL;
volatile int32_t t48 = INT32_MAX;
volatile int8_t x221 = 6;
int64_t x223 = INT64_MIN;
volatile uint8_t x224 = 63U;
uint32_t x229 = 11277299U;
static uint32_t x233 = UINT32_MAX;
static uint64_t x240 = 109744116402753661LLU;
volatile int32_t x250 = 41367;
static uint32_t t59 = 25086U;
static int16_t x269 = INT16_MIN;
static volatile int32_t t63 = -595;
static int64_t x284 = INT64_MIN;
int16_t x287 = -24;
static uint64_t t66 = 94945LLU;
static int8_t x304 = -1;
int32_t t68 = -512484189;
uint64_t x307 = 3364058442LLU;
int8_t x313 = 1;
uint64_t t72 = 5810245525691LLU;
int8_t x330 = -16;
static int64_t x332 = INT64_MIN;
static int8_t x335 = INT8_MAX;
int8_t x337 = 1;
int64_t x339 = INT64_MAX;
static volatile uint64_t t76 = 900495621220LLU;
volatile uint16_t x357 = UINT16_MAX;
int8_t x363 = INT8_MIN;
uint64_t x365 = 13LLU;
int16_t x373 = INT16_MIN;
volatile uint16_t x374 = 5U;
volatile int32_t t84 = -455400;
int8_t x384 = INT8_MIN;
uint8_t x386 = 3U;
int64_t x388 = INT64_MAX;
static uint64_t x389 = 933343968325LLU;
int8_t x392 = INT8_MAX;
uint8_t x396 = 3U;
volatile int8_t x398 = INT8_MIN;
static volatile uint16_t x404 = 1U;
uint32_t x414 = 1413237U;
static volatile uint32_t t91 = 58U;
uint64_t x426 = 9844546781LLU;
volatile uint32_t t95 = 6644156U;
static uint32_t x438 = UINT32_MAX;
int64_t x452 = 2263381587636903065LL;
int32_t t97 = -1438730;
int64_t x455 = -503030LL;
int32_t x469 = INT32_MIN;
static int32_t t101 = 28598981;
static uint32_t x491 = 202073126U;
int8_t x492 = INT8_MAX;
volatile int64_t x494 = -1LL;
int64_t x496 = -1914919347LL;
uint8_t x499 = UINT8_MAX;
uint64_t x501 = UINT64_MAX;
int8_t x503 = INT8_MIN;
volatile uint64_t t108 = 7524393LLU;
static volatile int16_t x508 = 14;
static int16_t x511 = -1;
int64_t t110 = 151968714336454251LL;
static uint64_t t111 = 56984LLU;
static uint8_t x523 = UINT8_MAX;
static volatile int64_t x546 = 6523430232127583LL;
volatile int64_t x553 = INT64_MAX;
int16_t x556 = INT16_MIN;
volatile int16_t x559 = -1;
uint64_t t120 = 195100931234LLU;
static uint8_t x573 = UINT8_MAX;
int8_t x576 = 10;
volatile uint32_t t123 = 902120162U;
volatile uint64_t x579 = 1LLU;
uint64_t t124 = 7899840879387756LLU;
volatile uint8_t x584 = 23U;
volatile uint32_t t126 = 8678U;
uint16_t x591 = 2742U;
volatile int64_t x609 = INT64_MAX;
uint16_t x613 = UINT16_MAX;
int8_t x614 = INT8_MIN;
uint8_t x615 = 106U;
volatile uint32_t t135 = 44984U;
int32_t x643 = 21163;
volatile int16_t x649 = INT16_MAX;
volatile int32_t t137 = -6653681;
int16_t x654 = INT16_MAX;
int32_t t138 = -721835;
volatile int16_t x659 = INT16_MIN;
uint32_t x660 = 4110U;
int64_t t139 = 275813425782099LL;
int32_t t140 = -7280456;
uint32_t x666 = UINT32_MAX;
volatile uint8_t x667 = UINT8_MAX;
static uint16_t x669 = 1U;
static int64_t x675 = -1LL;
int8_t x679 = INT8_MAX;
static volatile int16_t x683 = -1;
static int8_t x686 = INT8_MIN;
uint8_t x687 = 32U;
int16_t x704 = INT16_MAX;
static int64_t x719 = INT64_MAX;
uint32_t t152 = 169U;
volatile uint32_t x728 = 1U;
static volatile int64_t t153 = 425389266LL;
static int32_t x731 = -9748;
int8_t x741 = -10;
static int16_t x743 = -1;
uint64_t x753 = 44640490LLU;
int64_t x755 = -134246607LL;
static uint32_t x756 = UINT32_MAX;
int16_t x763 = -1;
static int64_t x765 = 83809522225413194LL;
int64_t x772 = INT64_MIN;
int64_t t163 = 2084339396LL;
int16_t x777 = INT16_MAX;
static int32_t x784 = INT32_MIN;
uint64_t t165 = 887348748LLU;
int16_t x790 = -92;
int32_t x793 = -1;
int64_t x798 = -122271873170924357LL;
int16_t x809 = 1;
int16_t x811 = -1;
int8_t x814 = -38;
static int64_t t174 = 17121989801360LL;
uint8_t x824 = 107U;
static volatile uint16_t x832 = 671U;
static uint32_t x837 = 188843U;
static volatile int64_t x840 = INT64_MIN;
static int8_t x849 = -1;
uint64_t x851 = UINT64_MAX;
int64_t x853 = INT64_MIN;
int32_t x855 = INT32_MAX;
int16_t x856 = INT16_MIN;
uint32_t t184 = 2586793U;
volatile uint32_t t185 = 1612598U;
uint32_t x886 = UINT32_MAX;
uint32_t x888 = 259436632U;
uint64_t x889 = UINT64_MAX;
static int8_t x890 = INT8_MIN;
uint64_t x894 = 207490128600LLU;
int16_t x896 = -81;
volatile int16_t x899 = INT16_MIN;
volatile int32_t x908 = INT32_MAX;
int8_t x911 = -16;
volatile int8_t x923 = -1;
static int32_t t195 = 188978924;
uint64_t x931 = 27037493798718LLU;
int32_t t196 = -266192;
uint16_t x938 = 810U;
int64_t x939 = -461LL;
volatile int32_t t197 = -163055884;
volatile int32_t x949 = 22;
int8_t x951 = 36;


void f0(void) {
    	int32_t x1 = -352;
	volatile int16_t x2 = INT16_MAX;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = -1;
	int32_t t0 = -2;

    t0 = ((x1&x2)<<(x3<=x4));

    if (t0 != 64832) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 15535228LL;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 435U;
	volatile int64_t t1 = 122LL;

    t1 = ((x5&x6)<<(x7<=x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x10 = INT32_MAX;

    t2 = ((x9&x10)<<(x11<=x12));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 0U;
	volatile uint8_t x14 = 0U;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 726329;

    t3 = ((x13&x14)<<(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 0U;
	volatile uint32_t x18 = 0U;
	int32_t x19 = INT32_MAX;

    t4 = ((x17&x18)<<(x19<=x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x22 = INT8_MAX;
	uint32_t x23 = 13610348U;
	volatile uint32_t x24 = 953U;

    t5 = ((x21&x22)<<(x23<=x24));

    if (t5 != 126) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int64_t x26 = INT64_MAX;
	int32_t x27 = -11;
	int16_t x28 = INT16_MIN;
	int64_t t6 = INT64_MAX;

    t6 = ((x25&x26)<<(x27<=x28));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint16_t x29 = 2U;
	static int8_t x31 = INT8_MAX;
	volatile uint64_t x32 = 883LLU;
	volatile int32_t t7 = -19925;

    t7 = ((x29&x30)<<(x31<=x32));

    if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 315301686513507LL;
	int16_t x34 = INT16_MAX;
	uint16_t x35 = 61U;
	volatile int64_t t8 = -1LL;

    t8 = ((x33&x34)<<(x35<=x36));

    if (t8 != 3939LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 2631605U;
	uint8_t x38 = UINT8_MAX;
	static int8_t x39 = -1;
	volatile int32_t x40 = INT32_MAX;
	volatile uint32_t t9 = 4789U;

    t9 = ((x37&x38)<<(x39<=x40));

    if (t9 != 362U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x42 = 61U;
	static int64_t x44 = 13901LL;
	volatile uint32_t t10 = 0U;

    t10 = ((x41&x42)<<(x43<=x44));

    if (t10 != 64U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 18U;
	volatile int16_t x46 = -1;
	volatile uint8_t x47 = 9U;
	int8_t x48 = INT8_MIN;
	static int32_t t11 = 10025841;

    t11 = ((x45&x46)<<(x47<=x48));

    if (t11 != 18) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x55 = INT64_MAX;
	static uint8_t x56 = 44U;

    t12 = ((x53&x54)<<(x55<=x56));

    if (t12 != 127LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x58 = 24;
	int64_t x59 = INT64_MAX;
	uint16_t x60 = 5373U;
	int32_t t13 = -1;

    t13 = ((x57&x58)<<(x59<=x60));

    if (t13 != 24) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x62 = 2U;
	volatile int8_t x63 = INT8_MIN;
	volatile int32_t x64 = INT32_MIN;
	int32_t t14 = 1;

    t14 = ((x61&x62)<<(x63<=x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 4U;
	int64_t x66 = -1LL;
	volatile uint8_t x67 = 3U;
	uint32_t x68 = 4U;

    t15 = ((x65&x66)<<(x67<=x68));

    if (t15 != 8LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x69 = UINT16_MAX;
	static uint8_t x70 = 0U;
	int16_t x71 = -1;
	volatile int32_t t16 = -61959207;

    t16 = ((x69&x70)<<(x71<=x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x75 = UINT8_MAX;
	volatile uint16_t x76 = 118U;
	volatile int32_t t17 = -6412;

    t17 = ((x73&x74)<<(x75<=x76));

    if (t17 != 50) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile uint64_t x79 = UINT64_MAX;
	int64_t x80 = INT64_MIN;
	int64_t t18 = 623075283657LL;

    t18 = ((x77&x78)<<(x79<=x80));

    if (t18 != 130LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x81 = UINT16_MAX;
	int16_t x83 = INT16_MIN;
	uint8_t x84 = 1U;
	static volatile int32_t t19 = -8344648;

    t19 = ((x81&x82)<<(x83<=x84));

    if (t19 != 131070) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x86 = INT8_MIN;
	int8_t x87 = 0;
	int8_t x88 = INT8_MAX;
	volatile int64_t t20 = -9LL;

    t20 = ((x85&x86)<<(x87<=x88));

    if (t20 != 2770626003858617344LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = 838616471702674204LL;
	int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	int64_t x96 = INT64_MAX;
	int64_t t21 = -14434902110639400LL;

    t21 = ((x93&x94)<<(x95<=x96));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MAX;
	int64_t x99 = -1LL;
	volatile uint16_t x100 = 3746U;
	static volatile int32_t t22 = -334199306;

    t22 = ((x97&x98)<<(x99<=x100));

    if (t22 != 65534) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = 6LL;
	static int32_t x102 = 86;
	int32_t x103 = INT32_MAX;
	static uint8_t x104 = UINT8_MAX;
	volatile int64_t t23 = 12385304LL;

    t23 = ((x101&x102)<<(x103<=x104));

    if (t23 != 6LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = 1227955815797803LL;
	static volatile uint64_t x114 = 1180593LLU;
	uint8_t x116 = 0U;
	volatile uint64_t t24 = 186464751LLU;

    t24 = ((x113&x114)<<(x115<=x116));

    if (t24 != 1179681LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x117 = 23U;
	int64_t x118 = INT64_MAX;
	volatile uint32_t x119 = 65732450U;
	uint32_t x120 = 1198347U;
	volatile int64_t t25 = -56047204406462LL;

    t25 = ((x117&x118)<<(x119<=x120));

    if (t25 != 23LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x121 = 507;
	volatile int64_t x122 = INT64_MIN;
	int16_t x123 = 3;
	volatile int16_t x124 = 4352;
	int64_t t26 = -466855148571LL;

    t26 = ((x121&x122)<<(x123<=x124));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = INT8_MIN;
	uint64_t x126 = 704539742366737003LLU;
	int64_t x127 = INT64_MIN;
	static int16_t x128 = 7350;
	volatile uint64_t t27 = 3187235156705LLU;

    t27 = ((x125&x126)<<(x127<=x128));

    if (t27 != 1409079484733473792LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x129 = -1;
	uint64_t x131 = 13603676792007780LLU;
	volatile uint64_t t28 = 335889451427024724LLU;

    t28 = ((x129&x130)<<(x131<=x132));

    if (t28 != 32225203332LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x134 = INT8_MIN;
	uint8_t x135 = 9U;
	int16_t x136 = -47;
	static int64_t t29 = 333972736360LL;

    t29 = ((x133&x134)<<(x135<=x136));

    if (t29 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x137 = UINT16_MAX;
	static int16_t x138 = 0;
	int16_t x140 = INT16_MAX;

    t30 = ((x137&x138)<<(x139<=x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = 92U;
	int64_t x142 = -1LL;
	volatile uint8_t x143 = UINT8_MAX;
	uint8_t x144 = 6U;
	volatile int64_t t31 = 63LL;

    t31 = ((x141&x142)<<(x143<=x144));

    if (t31 != 92LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x146 = INT64_MIN;
	static int8_t x147 = INT8_MIN;
	static uint16_t x148 = 1364U;

    t32 = ((x145&x146)<<(x147<=x148));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x149 = INT32_MIN;
	volatile uint8_t x150 = UINT8_MAX;
	uint64_t x151 = 126173091028LLU;
	static int32_t t33 = 133845034;

    t33 = ((x149&x150)<<(x151<=x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x153 = 19124754;
	static volatile uint64_t x154 = 12LLU;
	volatile int64_t x155 = 220820913637282LL;
	int16_t x156 = INT16_MIN;
	volatile uint64_t t34 = 7412308LLU;

    t34 = ((x153&x154)<<(x155<=x156));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x158 = -41;
	uint16_t x159 = 26211U;
	int64_t x160 = -1LL;
	int32_t t35 = 757;

    t35 = ((x157&x158)<<(x159<=x160));

    if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x161 = 15373U;
	int64_t x162 = INT64_MIN;
	int8_t x163 = -1;
	static int8_t x164 = -17;
	volatile int64_t t36 = -1LL;

    t36 = ((x161&x162)<<(x163<=x164));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x169 = 1698;
	int64_t x170 = -1LL;
	int16_t x171 = INT16_MIN;
	int8_t x172 = -1;
	int64_t t37 = -81006919011LL;

    t37 = ((x169&x170)<<(x171<=x172));

    if (t37 != 3396LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = 4577;
	static int8_t x178 = 1;
	int64_t x179 = INT64_MIN;
	volatile int32_t t38 = -27340428;

    t38 = ((x177&x178)<<(x179<=x180));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x181 = UINT16_MAX;
	uint16_t x183 = 38U;
	int64_t x184 = INT64_MIN;
	static int64_t t39 = -1678486876LL;

    t39 = ((x181&x182)<<(x183<=x184));

    if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x185 = 1494;
	int32_t x186 = INT32_MIN;
	uint8_t x187 = 2U;
	uint32_t x188 = 188316818U;
	int32_t t40 = 0;

    t40 = ((x185&x186)<<(x187<=x188));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x189 = INT16_MIN;
	int32_t x190 = 1797;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 30326U;
	int32_t t41 = 0;

    t41 = ((x189&x190)<<(x191<=x192));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = INT64_MIN;
	uint32_t x194 = UINT32_MAX;
	static uint64_t x195 = 1020LLU;
	static uint16_t x196 = UINT16_MAX;

    t42 = ((x193&x194)<<(x195<=x196));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x197 = -26;
	uint8_t x199 = UINT8_MAX;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t43 = 172973877LLU;

    t43 = ((x197&x198)<<(x199<=x200));

    if (t43 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x201 = -39;
	volatile uint16_t x202 = 4U;
	volatile int32_t t44 = -53761971;

    t44 = ((x201&x202)<<(x203<=x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = INT16_MAX;
	uint16_t x206 = 1040U;
	volatile uint16_t x207 = 16412U;
	static int8_t x208 = INT8_MAX;

    t45 = ((x205&x206)<<(x207<=x208));

    if (t45 != 1040) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x209 = UINT64_MAX;
	static volatile uint8_t x210 = 2U;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = INT32_MIN;

    t46 = ((x209&x210)<<(x211<=x212));

    if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	int32_t x215 = 1796;
	static uint8_t x216 = 55U;
	static volatile int32_t t47 = -50173885;

    t47 = ((x213&x214)<<(x215<=x216));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x217 = INT32_MAX;
	int16_t x218 = -1;
	int8_t x220 = -1;

    t48 = ((x217&x218)<<(x219<=x220));

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x222 = 14;
	int32_t t49 = 719273348;

    t49 = ((x221&x222)<<(x223<=x224));

    if (t49 != 12) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x225 = INT8_MAX;
	static int8_t x226 = INT8_MAX;
	static int64_t x227 = INT64_MAX;
	int8_t x228 = 7;
	volatile int32_t t50 = 19172;

    t50 = ((x225&x226)<<(x227<=x228));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x230 = INT8_MIN;
	int32_t x231 = -1;
	uint64_t x232 = UINT64_MAX;
	uint32_t t51 = 324U;

    t51 = ((x229&x230)<<(x231<=x232));

    if (t51 != 22554368U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x234 = UINT32_MAX;
	int8_t x235 = -1;
	int64_t x236 = 446643375858LL;
	volatile uint32_t t52 = 119U;

    t52 = ((x233&x234)<<(x235<=x236));

    if (t52 != 4294967294U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x237 = INT64_MIN;
	int64_t x238 = 3956122082644834774LL;
	static uint64_t x239 = 15295901LLU;
	volatile int64_t t53 = 228476LL;

    t53 = ((x237&x238)<<(x239<=x240));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x241 = UINT32_MAX;
	int32_t x242 = INT32_MIN;
	int64_t x243 = -1LL;
	uint64_t x244 = UINT64_MAX;
	uint32_t t54 = 596U;

    t54 = ((x241&x242)<<(x243<=x244));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x245 = INT16_MAX;
	volatile int16_t x246 = 17;
	int32_t x247 = -31;
	static volatile int8_t x248 = INT8_MAX;
	int32_t t55 = 3074014;

    t55 = ((x245&x246)<<(x247<=x248));

    if (t55 != 34) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x249 = -259944285LL;
	uint8_t x251 = 29U;
	volatile int64_t x252 = INT64_MAX;
	volatile int64_t t56 = 33610LL;

    t56 = ((x249&x250)<<(x251<=x252));

    if (t56 != 65798LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x253 = 65U;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -1;
	volatile uint32_t x256 = UINT32_MAX;
	static volatile int32_t t57 = 1;

    t57 = ((x253&x254)<<(x255<=x256));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x257 = INT8_MAX;
	int8_t x258 = INT8_MAX;
	static int32_t x259 = -1;
	static int16_t x260 = -1;
	volatile int32_t t58 = -101;

    t58 = ((x257&x258)<<(x259<=x260));

    if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x261 = UINT32_MAX;
	uint16_t x262 = 11U;
	volatile int16_t x263 = INT16_MAX;
	uint64_t x264 = 980773LLU;

    t59 = ((x261&x262)<<(x263<=x264));

    if (t59 != 22U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x265 = 1921474;
	static volatile uint16_t x266 = UINT16_MAX;
	volatile uint64_t x267 = UINT64_MAX;
	int16_t x268 = INT16_MIN;
	volatile int32_t t60 = 642595;

    t60 = ((x265&x266)<<(x267<=x268));

    if (t60 != 20930) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x270 = 1;
	int64_t x271 = INT64_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t61 = 370405;

    t61 = ((x269&x270)<<(x271<=x272));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x273 = 524194900695LL;
	static uint16_t x274 = 2826U;
	int8_t x275 = -1;
	uint8_t x276 = 113U;
	static volatile int64_t t62 = 49371423LL;

    t62 = ((x273&x274)<<(x275<=x276));

    if (t62 != 5124LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x277 = -1;
	uint8_t x278 = 4U;
	static uint64_t x279 = UINT64_MAX;
	uint16_t x280 = 20758U;

    t63 = ((x277&x278)<<(x279<=x280));

    if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x281 = UINT64_MAX;
	volatile int64_t x282 = 352709LL;
	uint64_t x283 = 303818938LLU;
	volatile uint64_t t64 = 66LLU;

    t64 = ((x281&x282)<<(x283<=x284));

    if (t64 != 705418LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x285 = -1;
	uint32_t x286 = 65U;
	int16_t x288 = INT16_MAX;
	static uint32_t t65 = 142271U;

    t65 = ((x285&x286)<<(x287<=x288));

    if (t65 != 130U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x293 = 24732LLU;
	uint8_t x294 = 56U;
	volatile uint8_t x295 = 0U;
	static int8_t x296 = -1;

    t66 = ((x293&x294)<<(x295<=x296));

    if (t66 != 24LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = INT64_MAX;
	uint16_t x298 = 13240U;
	int16_t x299 = INT16_MIN;
	volatile uint64_t x300 = UINT64_MAX;
	int64_t t67 = -38362357LL;

    t67 = ((x297&x298)<<(x299<=x300));

    if (t67 != 26480LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x301 = -486267441;
	volatile int16_t x302 = 2;
	int8_t x303 = INT8_MAX;

    t68 = ((x301&x302)<<(x303<=x304));

    if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x305 = 4246152050307LLU;
	uint8_t x306 = 3U;
	volatile int32_t x308 = INT32_MIN;
	volatile uint64_t t69 = 10224496000779LLU;

    t69 = ((x305&x306)<<(x307<=x308));

    if (t69 != 6LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x309 = 0U;
	int32_t x310 = INT32_MAX;
	uint16_t x311 = 159U;
	int16_t x312 = -1;
	volatile int32_t t70 = -49315;

    t70 = ((x309&x310)<<(x311<=x312));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x314 = INT32_MAX;
	volatile uint16_t x315 = UINT16_MAX;
	volatile uint16_t x316 = 1U;
	static int32_t t71 = 0;

    t71 = ((x313&x314)<<(x315<=x316));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x325 = 4038881492962700119LLU;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = -45;
	int8_t x328 = -38;

    t72 = ((x325&x326)<<(x327<=x328));

    if (t72 != 174LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x329 = 34293174898242881LL;
	int32_t x331 = INT32_MAX;
	int64_t t73 = -1267583875LL;

    t73 = ((x329&x330)<<(x331<=x332));

    if (t73 != 34293174898242880LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x333 = 188U;
	uint8_t x334 = 8U;
	int16_t x336 = INT16_MIN;
	int32_t t74 = 28000;

    t74 = ((x333&x334)<<(x335<=x336));

    if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x338 = INT16_MIN;
	int16_t x340 = -175;
	static volatile int32_t t75 = 998059;

    t75 = ((x337&x338)<<(x339<=x340));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x341 = 638110332332LLU;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	int32_t x344 = 9;

    t76 = ((x341&x342)<<(x343<=x344));

    if (t76 != 1276220604416LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x349 = 22709249LL;
	volatile uint8_t x350 = UINT8_MAX;
	uint64_t x351 = UINT64_MAX;
	volatile uint16_t x352 = 0U;
	volatile int64_t t77 = -527428970LL;

    t77 = ((x349&x350)<<(x351<=x352));

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x353 = 891;
	uint8_t x354 = UINT8_MAX;
	int64_t x355 = 7880630245LL;
	int64_t x356 = 255251863LL;
	volatile int32_t t78 = 14240728;

    t78 = ((x353&x354)<<(x355<=x356));

    if (t78 != 123) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x358 = 46221876U;
	static volatile uint64_t x359 = 855032381953LLU;
	uint64_t x360 = 241331LLU;
	volatile uint32_t t79 = 582559602U;

    t79 = ((x357&x358)<<(x359<=x360));

    if (t79 != 18996U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x361 = 65199U;
	int8_t x362 = -8;
	uint8_t x364 = UINT8_MAX;
	volatile uint32_t t80 = 120719U;

    t80 = ((x361&x362)<<(x363<=x364));

    if (t80 != 130384U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x366 = 5971U;
	volatile uint16_t x367 = 0U;
	int32_t x368 = -106;
	volatile uint64_t t81 = 3826LLU;

    t81 = ((x365&x366)<<(x367<=x368));

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x369 = 336LLU;
	int64_t x370 = INT64_MAX;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MIN;
	static volatile uint64_t t82 = 9168LLU;

    t82 = ((x369&x370)<<(x371<=x372));

    if (t82 != 672LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x375 = INT16_MAX;
	int32_t x376 = -1;
	static int32_t t83 = -54361;

    t83 = ((x373&x374)<<(x375<=x376));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x377 = 58;
	uint8_t x378 = 3U;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = INT64_MIN;

    t84 = ((x377&x378)<<(x379<=x380));

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x381 = INT64_MAX;
	int8_t x382 = 2;
	int64_t x383 = INT64_MIN;
	int64_t t85 = 8644LL;

    t85 = ((x381&x382)<<(x383<=x384));

    if (t85 != 4LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x385 = 2103077314U;
	int64_t x387 = 32121876960096169LL;
	uint32_t t86 = 998653U;

    t86 = ((x385&x386)<<(x387<=x388));

    if (t86 != 4U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x390 = 632U;
	uint8_t x391 = 33U;
	static uint64_t t87 = 293140215LLU;

    t87 = ((x389&x390)<<(x391<=x392));

    if (t87 != 128LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x393 = UINT8_MAX;
	volatile uint8_t x394 = UINT8_MAX;
	int16_t x395 = 346;
	volatile int32_t t88 = 637937807;

    t88 = ((x393&x394)<<(x395<=x396));

    if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x397 = UINT8_MAX;
	int32_t x399 = INT32_MIN;
	static uint16_t x400 = 520U;
	static int32_t t89 = 6628;

    t89 = ((x397&x398)<<(x399<=x400));

    if (t89 != 256) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x401 = 2U;
	volatile uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MAX;
	volatile uint32_t t90 = 11715359U;

    t90 = ((x401&x402)<<(x403<=x404));

    if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x413 = 8U;
	static int8_t x415 = INT8_MIN;
	uint16_t x416 = 27U;

    t91 = ((x413&x414)<<(x415<=x416));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x421 = INT32_MIN;
	static volatile int32_t x422 = 13118;
	int32_t x423 = INT32_MAX;
	uint64_t x424 = 4239332835694LLU;
	static volatile int32_t t92 = -35899952;

    t92 = ((x421&x422)<<(x423<=x424));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x425 = 327868LLU;
	int32_t x427 = INT32_MIN;
	int64_t x428 = INT64_MAX;
	uint64_t t93 = 452LLU;

    t93 = ((x425&x426)<<(x427<=x428));

    if (t93 != 655672LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x429 = INT32_MIN;
	uint8_t x430 = UINT8_MAX;
	int16_t x431 = INT16_MAX;
	int32_t x432 = INT32_MIN;
	int32_t t94 = 101;

    t94 = ((x429&x430)<<(x431<=x432));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x433 = -37;
	uint32_t x434 = 1580U;
	static int64_t x435 = INT64_MAX;
	uint16_t x436 = 1143U;

    t95 = ((x433&x434)<<(x435<=x436));

    if (t95 != 1544U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x439 = -61;
	volatile int64_t x440 = -28957574517134425LL;
	volatile uint32_t t96 = 270U;

    t96 = ((x437&x438)<<(x439<=x440));

    if (t96 != 4294934528U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x449 = 0;
	static int16_t x450 = INT16_MIN;
	int16_t x451 = 3651;

    t97 = ((x449&x450)<<(x451<=x452));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x453 = 76U;
	uint8_t x454 = 93U;
	volatile int32_t x456 = 39589;
	static int32_t t98 = -84869;

    t98 = ((x453&x454)<<(x455<=x456));

    if (t98 != 152) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x461 = INT16_MAX;
	int64_t x462 = 3093672LL;
	int16_t x463 = INT16_MIN;
	int8_t x464 = -1;
	volatile int64_t t99 = 1LL;

    t99 = ((x461&x462)<<(x463<=x464));

    if (t99 != 26960LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x465 = INT64_MIN;
	int8_t x466 = INT8_MAX;
	uint16_t x467 = 11U;
	int32_t x468 = -1;
	volatile int64_t t100 = 1313118LL;

    t100 = ((x465&x466)<<(x467<=x468));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x470 = 4U;
	volatile int64_t x471 = INT64_MIN;
	uint16_t x472 = UINT16_MAX;

    t101 = ((x469&x470)<<(x471<=x472));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x473 = INT32_MAX;
	static int64_t x474 = -116719211473465LL;
	int32_t x475 = -1;
	static uint64_t x476 = UINT64_MAX;
	volatile int64_t t102 = 864681120016819950LL;

    t102 = ((x473&x474)<<(x475<=x476));

    if (t102 != 1639525262LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	uint32_t x478 = 9961565U;
	int16_t x479 = INT16_MAX;
	static int8_t x480 = INT8_MIN;
	uint64_t t103 = 7488725297186728LLU;

    t103 = ((x477&x478)<<(x479<=x480));

    if (t103 != 9961565LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x485 = 33;
	volatile int32_t x486 = INT32_MIN;
	int64_t x487 = INT64_MIN;
	uint64_t x488 = 1843419878986782011LLU;
	int32_t t104 = 42777680;

    t104 = ((x485&x486)<<(x487<=x488));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x489 = 5121U;
	volatile int16_t x490 = -4535;
	volatile int32_t t105 = 692826935;

    t105 = ((x489&x490)<<(x491<=x492));

    if (t105 != 1025) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x493 = 365841U;
	uint64_t x495 = 4022536573596735241LLU;
	volatile int64_t t106 = 11LL;

    t106 = ((x493&x494)<<(x495<=x496));

    if (t106 != 731682LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x497 = UINT32_MAX;
	uint64_t x498 = UINT64_MAX;
	int64_t x500 = -1LL;
	volatile uint64_t t107 = 6980027LLU;

    t107 = ((x497&x498)<<(x499<=x500));

    if (t107 != 4294967295LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x502 = INT32_MIN;
	uint8_t x504 = 3U;

    t108 = ((x501&x502)<<(x503<=x504));

    if (t108 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x505 = INT64_MIN;
	static int32_t x506 = 44892440;
	uint64_t x507 = UINT64_MAX;
	static int64_t t109 = 240LL;

    t109 = ((x505&x506)<<(x507<=x508));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x509 = INT32_MAX;
	int64_t x510 = INT64_MIN;
	static uint16_t x512 = UINT16_MAX;

    t110 = ((x509&x510)<<(x511<=x512));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x513 = UINT64_MAX;
	static volatile int8_t x514 = INT8_MIN;
	volatile int16_t x515 = -981;
	int16_t x516 = 0;

    t111 = ((x513&x514)<<(x515<=x516));

    if (t111 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x517 = INT16_MIN;
	int8_t x518 = INT8_MAX;
	volatile int16_t x519 = INT16_MIN;
	int8_t x520 = 2;
	int32_t t112 = 1053801;

    t112 = ((x517&x518)<<(x519<=x520));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x521 = 908U;
	int64_t x522 = 1626372101943LL;
	int16_t x524 = INT16_MIN;
	volatile int64_t t113 = 1481LL;

    t113 = ((x521&x522)<<(x523<=x524));

    if (t113 != 772LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x529 = 3LL;
	int64_t x530 = -486338LL;
	int16_t x531 = INT16_MIN;
	uint64_t x532 = 297966809LLU;
	int64_t t114 = -6442LL;

    t114 = ((x529&x530)<<(x531<=x532));

    if (t114 != 2LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x533 = 86;
	int16_t x534 = INT16_MIN;
	static int16_t x535 = INT16_MIN;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t115 = 17411;

    t115 = ((x533&x534)<<(x535<=x536));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x541 = -1;
	uint16_t x542 = 14966U;
	volatile uint64_t x543 = UINT64_MAX;
	uint64_t x544 = 1057050639665697350LLU;
	volatile int32_t t116 = 1840;

    t116 = ((x541&x542)<<(x543<=x544));

    if (t116 != 14966) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x545 = 0U;
	int64_t x547 = INT64_MAX;
	uint32_t x548 = 2001U;
	int64_t t117 = -432506132520384904LL;

    t117 = ((x545&x546)<<(x547<=x548));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x549 = -1LL;
	uint64_t x550 = 0LLU;
	int16_t x551 = INT16_MAX;
	int16_t x552 = -1;
	volatile uint64_t t118 = 14324LLU;

    t118 = ((x549&x550)<<(x551<=x552));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x554 = -1;
	int8_t x555 = -1;
	int64_t t119 = INT64_MAX;

    t119 = ((x553&x554)<<(x555<=x556));

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x557 = 238311640767LLU;
	int32_t x558 = INT32_MAX;
	uint64_t x560 = 3912373LLU;

    t120 = ((x557&x558)<<(x559<=x560));

    if (t120 != 2088439487LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x565 = INT16_MIN;
	int32_t x566 = 19;
	int16_t x567 = -8180;
	int8_t x568 = 1;
	volatile int32_t t121 = 3613;

    t121 = ((x565&x566)<<(x567<=x568));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x569 = -1;
	uint16_t x570 = 30U;
	volatile uint64_t x571 = UINT64_MAX;
	uint32_t x572 = UINT32_MAX;
	int32_t t122 = -5024490;

    t122 = ((x569&x570)<<(x571<=x572));

    if (t122 != 30) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x574 = 5U;
	uint64_t x575 = UINT64_MAX;

    t123 = ((x573&x574)<<(x575<=x576));

    if (t123 != 5U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x577 = 499882855LLU;
	static int8_t x578 = 23;
	int8_t x580 = INT8_MAX;

    t124 = ((x577&x578)<<(x579<=x580));

    if (t124 != 14LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x581 = 0U;
	static int8_t x582 = INT8_MIN;
	volatile int16_t x583 = INT16_MIN;
	int32_t t125 = 25;

    t125 = ((x581&x582)<<(x583<=x584));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x585 = -1;
	uint32_t x586 = 9755355U;
	int64_t x587 = INT64_MIN;
	int32_t x588 = INT32_MIN;

    t126 = ((x585&x586)<<(x587<=x588));

    if (t126 != 19510710U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x589 = -1LL;
	static uint16_t x590 = 8487U;
	int64_t x592 = -14705116758LL;
	volatile int64_t t127 = 844113035955LL;

    t127 = ((x589&x590)<<(x591<=x592));

    if (t127 != 8487LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x597 = 62U;
	uint64_t x598 = UINT64_MAX;
	volatile int32_t x599 = 18611158;
	uint8_t x600 = UINT8_MAX;
	uint64_t t128 = 5206473101839661289LLU;

    t128 = ((x597&x598)<<(x599<=x600));

    if (t128 != 62LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x610 = 14972986569193279LL;
	int8_t x611 = 1;
	static uint16_t x612 = UINT16_MAX;
	int64_t t129 = -228364033095936LL;

    t129 = ((x609&x610)<<(x611<=x612));

    if (t129 != 29945973138386558LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x616 = 30798U;
	int32_t t130 = 1;

    t130 = ((x613&x614)<<(x615<=x616));

    if (t130 != 130816) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x617 = 2389;
	uint32_t x618 = 29137563U;
	int16_t x619 = INT16_MIN;
	int64_t x620 = -1LL;
	uint32_t t131 = 51U;

    t131 = ((x617&x618)<<(x619<=x620));

    if (t131 != 4130U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x621 = 0;
	int16_t x622 = INT16_MAX;
	int64_t x623 = 54563LL;
	int64_t x624 = INT64_MIN;
	volatile int32_t t132 = -302434;

    t132 = ((x621&x622)<<(x623<=x624));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x625 = INT16_MAX;
	int8_t x626 = -1;
	volatile uint8_t x627 = 0U;
	int64_t x628 = -1LL;
	int32_t t133 = 1065744540;

    t133 = ((x625&x626)<<(x627<=x628));

    if (t133 != 32767) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x629 = 1;
	uint16_t x630 = UINT16_MAX;
	int32_t x631 = -1;
	static volatile uint16_t x632 = 141U;
	static volatile int32_t t134 = 11222;

    t134 = ((x629&x630)<<(x631<=x632));

    if (t134 != 2) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x637 = 16173U;
	volatile uint32_t x638 = UINT32_MAX;
	static int64_t x639 = INT64_MIN;
	int64_t x640 = -12161797162067013LL;

    t135 = ((x637&x638)<<(x639<=x640));

    if (t135 != 32346U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x641 = 932;
	static volatile int8_t x642 = 1;
	int16_t x644 = 4;
	int32_t t136 = -423935948;

    t136 = ((x641&x642)<<(x643<=x644));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x650 = INT8_MAX;
	static int32_t x651 = -1;
	int8_t x652 = -1;

    t137 = ((x649&x650)<<(x651<=x652));

    if (t137 != 254) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x653 = 18U;
	int16_t x655 = INT16_MAX;
	static volatile uint16_t x656 = 10U;

    t138 = ((x653&x654)<<(x655<=x656));

    if (t138 != 18) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x657 = 1546457U;
	int64_t x658 = 9557268446LL;

    t139 = ((x657&x658)<<(x659<=x660));

    if (t139 != 4312LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x661 = INT32_MAX;
	int16_t x662 = INT16_MIN;
	static volatile int32_t x663 = 183039;
	int8_t x664 = INT8_MIN;

    t140 = ((x661&x662)<<(x663<=x664));

    if (t140 != 2147450880) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x665 = INT32_MIN;
	volatile int64_t x668 = INT64_MAX;
	uint32_t t141 = 936666180U;

    t141 = ((x665&x666)<<(x667<=x668));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x670 = 0;
	int8_t x671 = 1;
	int8_t x672 = -1;
	int32_t t142 = -158805;

    t142 = ((x669&x670)<<(x671<=x672));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x673 = 725618U;
	int16_t x674 = INT16_MIN;
	static volatile uint64_t x676 = 1018LLU;
	uint32_t t143 = 8195218U;

    t143 = ((x673&x674)<<(x675<=x676));

    if (t143 != 720896U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x677 = 16153;
	uint32_t x678 = 101098U;
	int16_t x680 = 146;
	uint32_t t144 = 542956U;

    t144 = ((x677&x678)<<(x679<=x680));

    if (t144 != 5136U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x681 = -1;
	volatile uint32_t x682 = 15571U;
	int64_t x684 = INT64_MIN;
	uint32_t t145 = 29U;

    t145 = ((x681&x682)<<(x683<=x684));

    if (t145 != 15571U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	int32_t x688 = INT32_MIN;
	volatile int32_t t146 = -8864;

    t146 = ((x685&x686)<<(x687<=x688));

    if (t146 != 128) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x697 = -6471400343134592LL;
	int32_t x698 = INT32_MAX;
	static uint64_t x699 = 1LLU;
	int8_t x700 = INT8_MIN;
	static int64_t t147 = -3506414083LL;

    t147 = ((x697&x698)<<(x699<=x700));

    if (t147 != 1655848192LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x701 = 805LL;
	int32_t x702 = INT32_MIN;
	uint8_t x703 = 6U;
	volatile int64_t t148 = -60387726188290LL;

    t148 = ((x701&x702)<<(x703<=x704));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x705 = 295U;
	volatile uint32_t x706 = 6969U;
	static volatile uint32_t x707 = 103316473U;
	int32_t x708 = INT32_MIN;
	static volatile uint32_t t149 = 3817967U;

    t149 = ((x705&x706)<<(x707<=x708));

    if (t149 != 578U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x710 = INT16_MAX;
	uint16_t x711 = 1361U;
	uint64_t x712 = 619897508074LLU;
	int32_t t150 = -235;

    t150 = ((x709&x710)<<(x711<=x712));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x713 = -160;
	int16_t x714 = 5524;
	static uint16_t x715 = UINT16_MAX;
	volatile int64_t x716 = -9953LL;
	static int32_t t151 = -3283928;

    t151 = ((x713&x714)<<(x715<=x716));

    if (t151 != 5376) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x717 = INT8_MAX;
	static uint32_t x718 = UINT32_MAX;
	static uint8_t x720 = 3U;

    t152 = ((x717&x718)<<(x719<=x720));

    if (t152 != 127U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x725 = UINT16_MAX;
	int64_t x726 = INT64_MIN;
	volatile uint16_t x727 = UINT16_MAX;

    t153 = ((x725&x726)<<(x727<=x728));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x729 = 2758818047LLU;
	int32_t x730 = 2861;
	int32_t x732 = -3;
	volatile uint64_t t154 = 122156461LLU;

    t154 = ((x729&x730)<<(x731<=x732));

    if (t154 != 4186LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x737 = 0;
	volatile int32_t x738 = -201437859;
	int16_t x739 = INT16_MIN;
	volatile int32_t x740 = -1;
	volatile int32_t t155 = 5;

    t155 = ((x737&x738)<<(x739<=x740));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x742 = UINT64_MAX;
	uint64_t x744 = UINT64_MAX;
	uint64_t t156 = 130133325652880305LLU;

    t156 = ((x741&x742)<<(x743<=x744));

    if (t156 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x749 = INT32_MIN;
	uint8_t x750 = 1U;
	volatile uint16_t x751 = 9745U;
	uint32_t x752 = UINT32_MAX;
	volatile int32_t t157 = -563839;

    t157 = ((x749&x750)<<(x751<=x752));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x754 = 9;
	uint64_t t158 = 23610694994137LLU;

    t158 = ((x753&x754)<<(x755<=x756));

    if (t158 != 16LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x757 = INT16_MAX;
	uint64_t x758 = 3938447024LLU;
	static int32_t x759 = -13456475;
	static volatile int8_t x760 = INT8_MIN;
	uint64_t t159 = 25LLU;

    t159 = ((x757&x758)<<(x759<=x760));

    if (t159 != 56672LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x761 = INT32_MIN;
	static volatile int8_t x762 = 1;
	int32_t x764 = -1;
	static volatile int32_t t160 = 30466453;

    t160 = ((x761&x762)<<(x763<=x764));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x766 = INT8_MAX;
	static uint64_t x767 = UINT64_MAX;
	int64_t x768 = INT64_MAX;
	int64_t t161 = 549341380520LL;

    t161 = ((x765&x766)<<(x767<=x768));

    if (t161 != 74LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x769 = UINT8_MAX;
	uint32_t x770 = UINT32_MAX;
	static int32_t x771 = INT32_MAX;
	volatile uint32_t t162 = 11961460U;

    t162 = ((x769&x770)<<(x771<=x772));

    if (t162 != 255U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x773 = INT8_MAX;
	volatile int64_t x774 = 399010144672917LL;
	uint64_t x775 = 8587010367LLU;
	int8_t x776 = -1;

    t163 = ((x773&x774)<<(x775<=x776));

    if (t163 != 42LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x778 = 2U;
	static volatile int8_t x779 = INT8_MIN;
	int64_t x780 = INT64_MIN;
	int32_t t164 = -215792854;

    t164 = ((x777&x778)<<(x779<=x780));

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x781 = 73U;
	uint64_t x782 = 8750892066021464LLU;
	static uint16_t x783 = UINT16_MAX;

    t165 = ((x781&x782)<<(x783<=x784));

    if (t165 != 72LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x785 = INT16_MAX;
	uint64_t x786 = UINT64_MAX;
	int16_t x787 = INT16_MIN;
	int8_t x788 = -1;
	volatile uint64_t t166 = 20LLU;

    t166 = ((x785&x786)<<(x787<=x788));

    if (t166 != 65534LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x789 = UINT32_MAX;
	volatile uint16_t x791 = 10690U;
	int16_t x792 = -1;
	static uint32_t t167 = 4937U;

    t167 = ((x789&x790)<<(x791<=x792));

    if (t167 != 4294967204U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x794 = UINT32_MAX;
	static int32_t x795 = INT32_MIN;
	int64_t x796 = -13328710130106LL;
	uint32_t t168 = UINT32_MAX;

    t168 = ((x793&x794)<<(x795<=x796));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x797 = 0;
	volatile int8_t x799 = INT8_MAX;
	int32_t x800 = INT32_MAX;
	static int64_t t169 = -98185202600823LL;

    t169 = ((x797&x798)<<(x799<=x800));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x801 = 1U;
	int8_t x802 = INT8_MAX;
	volatile int8_t x803 = -42;
	static int64_t x804 = 40447534360825LL;
	int32_t t170 = -181;

    t170 = ((x801&x802)<<(x803<=x804));

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x805 = UINT64_MAX;
	volatile int16_t x806 = INT16_MIN;
	uint32_t x807 = 1678222U;
	int64_t x808 = INT64_MAX;
	volatile uint64_t t171 = 3285149LLU;

    t171 = ((x805&x806)<<(x807<=x808));

    if (t171 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x810 = -1LL;
	volatile uint32_t x812 = UINT32_MAX;
	int64_t t172 = -18749797LL;

    t172 = ((x809&x810)<<(x811<=x812));

    if (t172 != 2LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x813 = 38825764494322LLU;
	int8_t x815 = INT8_MAX;
	volatile int16_t x816 = 116;
	uint64_t t173 = 214LLU;

    t173 = ((x813&x814)<<(x815<=x816));

    if (t173 != 38825764494290LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x817 = INT64_MIN;
	int8_t x818 = 0;
	static int32_t x819 = -189092274;
	static uint64_t x820 = 254469797LLU;

    t174 = ((x817&x818)<<(x819<=x820));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x821 = UINT64_MAX;
	volatile int16_t x822 = INT16_MIN;
	int16_t x823 = -336;
	volatile uint64_t t175 = 1637LLU;

    t175 = ((x821&x822)<<(x823<=x824));

    if (t175 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x829 = INT8_MAX;
	uint8_t x830 = 40U;
	uint64_t x831 = 6977061940LLU;
	volatile int32_t t176 = 199;

    t176 = ((x829&x830)<<(x831<=x832));

    if (t176 != 40) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x833 = INT64_MAX;
	uint8_t x834 = 7U;
	int32_t x835 = INT32_MIN;
	int32_t x836 = INT32_MAX;
	int64_t t177 = -120LL;

    t177 = ((x833&x834)<<(x835<=x836));

    if (t177 != 14LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x838 = UINT16_MAX;
	static uint16_t x839 = 1996U;
	static volatile uint32_t t178 = 7517U;

    t178 = ((x837&x838)<<(x839<=x840));

    if (t178 != 57771U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x841 = INT16_MAX;
	volatile uint8_t x842 = 71U;
	static int16_t x843 = 77;
	int8_t x844 = INT8_MIN;
	int32_t t179 = 1;

    t179 = ((x841&x842)<<(x843<=x844));

    if (t179 != 71) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x845 = INT64_MAX;
	static int32_t x846 = INT32_MAX;
	uint32_t x847 = UINT32_MAX;
	uint8_t x848 = UINT8_MAX;
	volatile int64_t t180 = 904742480457644LL;

    t180 = ((x845&x846)<<(x847<=x848));

    if (t180 != 2147483647LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x850 = 2074740965804LLU;
	int32_t x852 = 55122;
	volatile uint64_t t181 = 365867693102758LLU;

    t181 = ((x849&x850)<<(x851<=x852));

    if (t181 != 2074740965804LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x854 = INT8_MAX;
	volatile int64_t t182 = 145932LL;

    t182 = ((x853&x854)<<(x855<=x856));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x857 = UINT8_MAX;
	int8_t x858 = 0;
	int16_t x859 = INT16_MIN;
	int32_t x860 = INT32_MIN;
	int32_t t183 = -2910;

    t183 = ((x857&x858)<<(x859<=x860));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x861 = -1665;
	uint32_t x862 = 187865U;
	uint32_t x863 = 319U;
	volatile int32_t x864 = -45928;

    t184 = ((x861&x862)<<(x863<=x864));

    if (t184 != 373426U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x869 = 2022061112U;
	int8_t x870 = INT8_MIN;
	volatile uint64_t x871 = 86779527307649LLU;
	uint8_t x872 = 16U;

    t185 = ((x869&x870)<<(x871<=x872));

    if (t185 != 2022061056U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x877 = -1;
	volatile uint64_t x878 = 7531205936940980LLU;
	int8_t x879 = 3;
	int16_t x880 = -1;
	volatile uint64_t t186 = 0LLU;

    t186 = ((x877&x878)<<(x879<=x880));

    if (t186 != 7531205936940980LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x885 = INT64_MAX;
	int8_t x887 = INT8_MIN;
	int64_t t187 = 6224LL;

    t187 = ((x885&x886)<<(x887<=x888));

    if (t187 != 4294967295LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x891 = -14120;
	uint32_t x892 = UINT32_MAX;
	volatile uint64_t t188 = 263254794773533LLU;

    t188 = ((x889&x890)<<(x891<=x892));

    if (t188 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x893 = -1;
	static uint16_t x895 = 176U;
	volatile uint64_t t189 = 67965603953LLU;

    t189 = ((x893&x894)<<(x895<=x896));

    if (t189 != 207490128600LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x897 = 15979016U;
	int8_t x898 = 26;
	int16_t x900 = INT16_MIN;
	uint32_t t190 = 2U;

    t190 = ((x897&x898)<<(x899<=x900));

    if (t190 != 16U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x901 = INT16_MIN;
	static int16_t x902 = 16052;
	int8_t x903 = -1;
	int32_t x904 = 516;
	static volatile int32_t t191 = 0;

    t191 = ((x901&x902)<<(x903<=x904));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x905 = -1;
	uint16_t x906 = 4121U;
	static volatile int32_t x907 = INT32_MIN;
	static int32_t t192 = 18441228;

    t192 = ((x905&x906)<<(x907<=x908));

    if (t192 != 8242) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x909 = 1U;
	uint16_t x910 = UINT16_MAX;
	int64_t x912 = 189503629422547075LL;
	uint32_t t193 = 29871695U;

    t193 = ((x909&x910)<<(x911<=x912));

    if (t193 != 2U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x917 = 5006U;
	int16_t x918 = INT16_MIN;
	int32_t x919 = -1;
	int16_t x920 = INT16_MIN;
	static int32_t t194 = -49;

    t194 = ((x917&x918)<<(x919<=x920));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x921 = 27U;
	int8_t x922 = 1;
	uint16_t x924 = 6624U;

    t195 = ((x921&x922)<<(x923<=x924));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x929 = 2U;
	int8_t x930 = 4;
	int32_t x932 = 193366;

    t196 = ((x929&x930)<<(x931<=x932));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x937 = 3166U;
	static volatile int8_t x940 = 0;

    t197 = ((x937&x938)<<(x939<=x940));

    if (t197 != 20) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x945 = 1U;
	int8_t x946 = 1;
	static volatile int8_t x947 = INT8_MAX;
	int64_t x948 = INT64_MIN;
	volatile int32_t t198 = 1;

    t198 = ((x945&x946)<<(x947<=x948));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x950 = INT8_MIN;
	int8_t x952 = INT8_MAX;
	int32_t t199 = 13481;

    t199 = ((x949&x950)<<(x951<=x952));

    if (t199 != 0) { NG(); } else { ; }
	
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

