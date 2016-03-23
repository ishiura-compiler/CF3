
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

int16_t x11 = INT16_MIN;
uint32_t x14 = UINT32_MAX;
uint16_t x16 = 16695U;
static volatile uint16_t x22 = 514U;
int32_t t4 = 0;
int16_t x25 = 47;
uint32_t x29 = UINT32_MAX;
uint8_t x32 = UINT8_MAX;
int64_t t7 = -926638547LL;
int8_t x39 = -1;
int32_t x45 = -1;
volatile int32_t x50 = INT32_MAX;
static int64_t x53 = INT64_MIN;
static uint64_t x54 = UINT64_MAX;
volatile uint64_t x56 = 1607606264LLU;
int8_t x58 = -1;
uint16_t x64 = UINT16_MAX;
int16_t x77 = 7;
static uint8_t x81 = UINT8_MAX;
volatile int32_t t19 = -394792093;
uint64_t x89 = 14536LLU;
int32_t x91 = -1;
volatile int64_t x94 = -1LL;
volatile uint32_t t22 = 1043891641U;
static uint16_t x105 = UINT16_MAX;
uint64_t x107 = 1041606985814173846LLU;
uint64_t t27 = 560LLU;
int64_t x121 = INT64_MIN;
static volatile int8_t x138 = -46;
int16_t x139 = INT16_MIN;
uint8_t x144 = 6U;
int16_t x148 = -3;
static uint64_t x160 = UINT64_MAX;
static uint32_t x161 = 1417159603U;
uint32_t x164 = 100996U;
int64_t x165 = INT64_MIN;
int8_t x166 = INT8_MAX;
int16_t x171 = INT16_MIN;
volatile uint32_t t40 = 351310U;
static uint8_t x173 = 11U;
uint16_t x176 = 12U;
int32_t x183 = INT32_MIN;
volatile int32_t t43 = 744084857;
volatile uint8_t x185 = 3U;
int64_t x192 = -1LL;
int16_t x194 = INT16_MAX;
int32_t x199 = -1;
static volatile int8_t x202 = -1;
volatile uint32_t x208 = 56453261U;
volatile uint32_t x215 = 12795U;
int16_t x232 = -363;
uint64_t t56 = 15336034052813440LLU;
uint32_t x242 = 63004U;
int8_t x243 = INT8_MIN;
int16_t x245 = INT16_MIN;
int64_t t58 = -90LL;
volatile uint32_t x256 = UINT32_MAX;
uint64_t x259 = 4103821967136918129LLU;
volatile uint32_t x262 = 176956892U;
uint32_t x266 = UINT32_MAX;
uint8_t x276 = 90U;
uint64_t t66 = 2382159719LLU;
static int64_t x283 = INT64_MIN;
uint8_t x291 = 117U;
uint8_t x293 = 27U;
volatile uint8_t x298 = UINT8_MAX;
int64_t x309 = INT64_MIN;
static int8_t x311 = 49;
volatile uint16_t x312 = UINT16_MAX;
volatile int64_t x314 = INT64_MIN;
volatile int64_t t75 = 3282LL;
int32_t x320 = 15284;
int32_t x325 = INT32_MIN;
int8_t x326 = INT8_MIN;
int32_t t82 = -610976827;
int64_t x346 = INT64_MAX;
int16_t x348 = INT16_MIN;
int32_t t83 = -116;
int16_t x350 = INT16_MIN;
int16_t x353 = -1;
uint32_t x354 = 757050U;
int32_t x360 = 1129;
volatile int32_t x362 = INT32_MIN;
int8_t x364 = -1;
static uint8_t x369 = UINT8_MAX;
volatile int64_t t89 = -38431LL;
volatile int8_t x373 = INT8_MAX;
int16_t x380 = -1;
volatile int8_t x381 = 1;
static uint32_t t92 = 12820U;
volatile uint32_t x385 = 490973143U;
uint8_t x389 = 12U;
uint64_t x391 = 7347233058678781610LLU;
uint32_t x396 = 19154465U;
volatile uint16_t x397 = 14381U;
uint32_t t96 = 68U;
uint8_t x401 = 10U;
int16_t x414 = 11;
static volatile uint8_t x415 = 28U;
int32_t x421 = INT32_MIN;
int64_t t102 = -2774489172253372LL;
int64_t x435 = -1LL;
int16_t x442 = 0;
static int32_t x452 = 0;
static volatile int32_t t107 = 17820262;
int64_t x457 = INT64_MIN;
int64_t x458 = -1LL;
volatile uint8_t x459 = 72U;
int64_t x475 = 77695905962LL;
volatile int8_t x481 = -1;
uint8_t x482 = 1U;
uint32_t x483 = 1U;
volatile uint64_t x493 = 2249455264273482LLU;
volatile uint64_t t117 = 2636450581225LLU;
static uint16_t x497 = UINT16_MAX;
static int8_t x498 = INT8_MAX;
uint8_t x504 = 6U;
volatile uint16_t x507 = 5966U;
int32_t x511 = -3879523;
volatile uint64_t t121 = 1803036171059184LLU;
static volatile uint16_t x513 = 8206U;
uint64_t x515 = 204725261LLU;
int32_t x516 = 56;
uint8_t x518 = UINT8_MAX;
int32_t x523 = INT32_MIN;
int32_t x524 = -1;
volatile int32_t x526 = INT32_MAX;
uint64_t x532 = 9176558LLU;
int32_t x542 = INT32_MAX;
volatile int64_t x543 = INT64_MAX;
volatile int8_t x545 = INT8_MAX;
uint8_t x547 = 50U;
int16_t x548 = INT16_MIN;
static uint64_t x549 = 284637LLU;
int16_t x567 = -28;
volatile uint8_t x568 = UINT8_MAX;
int32_t x576 = -3828;
int32_t t136 = -5167;
int8_t x579 = INT8_MAX;
volatile int32_t t137 = 110;
int16_t x582 = -7;
volatile int32_t x584 = INT32_MIN;
uint16_t x587 = UINT16_MAX;
int32_t x592 = INT32_MIN;
int8_t x598 = -5;
int8_t x602 = -1;
volatile uint16_t x612 = 2915U;
int16_t x615 = INT16_MIN;
volatile int64_t x616 = INT64_MAX;
int8_t x619 = INT8_MIN;
static int64_t x621 = 439495462LL;
volatile int32_t x623 = -95930525;
uint32_t t149 = 620U;
int32_t t150 = -908006155;
uint64_t x634 = 169LLU;
int16_t x638 = -2;
int32_t x640 = INT32_MAX;
int64_t x644 = -847086139433043599LL;
volatile int64_t t153 = -4359443017166LL;
int64_t x646 = -1LL;
int8_t x651 = INT8_MIN;
int64_t t155 = -117LL;
volatile uint32_t t156 = 123270402U;
int64_t x660 = INT64_MIN;
static uint8_t x664 = 0U;
uint64_t x671 = 12LLU;
volatile uint64_t t159 = 13013LLU;
uint32_t x677 = 389899224U;
int16_t x683 = INT16_MIN;
uint32_t t163 = 9U;
static uint8_t x698 = 8U;
volatile int32_t t166 = 126196;
int8_t x710 = INT8_MAX;
int32_t x713 = -1;
volatile uint32_t x727 = 894474U;
static uint64_t x731 = UINT64_MAX;
volatile int32_t x732 = INT32_MIN;
volatile uint64_t x737 = 9298LLU;
int64_t x738 = INT64_MIN;
volatile uint64_t t175 = 250414LLU;
static int16_t x741 = -451;
int64_t x744 = INT64_MAX;
volatile int64_t t176 = 483559616265705899LL;
uint64_t x752 = 3747LLU;
static volatile uint64_t t178 = 177045341943LLU;
uint16_t x759 = UINT16_MAX;
int8_t x762 = 12;
int8_t x768 = 18;
int64_t x773 = INT64_MAX;
volatile uint16_t x777 = 1697U;
volatile int32_t t185 = -1348059;
volatile uint32_t x794 = UINT32_MAX;
int8_t x798 = 0;
int8_t x800 = INT8_MAX;
uint32_t x809 = 1U;
static volatile uint64_t x812 = 96223068LLU;
int8_t x817 = INT8_MAX;
int32_t x821 = INT32_MIN;
uint64_t x822 = 7663939170LLU;
static uint64_t x827 = UINT64_MAX;
volatile int16_t x828 = INT16_MIN;
int16_t x829 = 1;
static volatile uint8_t x834 = 0U;
volatile uint32_t t199 = 1942441U;


void f0(void) {
    	int16_t x1 = -1;
	int64_t x2 = 35150LL;
	int16_t x3 = INT16_MIN;
	volatile int32_t x4 = 783734;
	volatile int32_t t0 = 3;

    t0 = ((x1!=x2)/(x3^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = 517143834848LL;
	int64_t x6 = -1LL;
	int64_t x7 = INT64_MAX;
	uint8_t x8 = UINT8_MAX;
	int64_t t1 = -3139320991966143LL;

    t1 = ((x5!=x6)/(x7^x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 1475902210216078LLU;
	uint8_t x10 = UINT8_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 1;

    t2 = ((x9!=x10)/(x11^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	int16_t x15 = -1;
	static int32_t t3 = 627219;

    t3 = ((x13!=x14)/(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	volatile int32_t x23 = INT32_MAX;
	int8_t x24 = 1;

    t4 = ((x21!=x22)/(x23^x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x26 = INT64_MIN;
	int32_t x27 = -245534;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 724;

    t5 = ((x25!=x26)/(x27^x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x30 = INT32_MAX;
	static int16_t x31 = INT16_MIN;
	volatile int32_t t6 = 23802;

    t6 = ((x29!=x30)/(x31^x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x33 = -1;
	uint16_t x34 = 177U;
	static int64_t x35 = -1LL;
	uint8_t x36 = 38U;

    t7 = ((x33!=x34)/(x35^x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MIN;
	int64_t x38 = -363650465LL;
	int64_t x40 = -503208904423433911LL;
	int64_t t8 = -7079015LL;

    t8 = ((x37!=x38)/(x39^x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 544179421571207LLU;
	int64_t x42 = -1LL;
	int64_t x43 = -57797586LL;
	uint8_t x44 = 124U;
	int64_t t9 = 22533113855791112LL;

    t9 = ((x41!=x42)/(x43^x44));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x46 = 167;
	volatile uint8_t x47 = 25U;
	int64_t x48 = INT64_MIN;
	volatile int64_t t10 = -555098LL;

    t10 = ((x45!=x46)/(x47^x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 1897791U;
	uint8_t x51 = 6U;
	uint8_t x52 = UINT8_MAX;
	int32_t t11 = -53027103;

    t11 = ((x49!=x50)/(x51^x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x55 = 1;
	volatile uint64_t t12 = 835975LLU;

    t12 = ((x53!=x54)/(x55^x56));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 1680U;
	int64_t x59 = INT64_MAX;
	uint64_t x60 = 124619LLU;
	static volatile uint64_t t13 = 2179331970690555LLU;

    t13 = ((x57!=x58)/(x59^x60));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = -2087876340649361LL;
	static int8_t x62 = 4;
	int8_t x63 = 1;
	int32_t t14 = -32578;

    t14 = ((x61!=x62)/(x63^x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = UINT16_MAX;
	uint64_t x66 = 8891056LLU;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;
	int32_t t15 = -18289;

    t15 = ((x65!=x66)/(x67^x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	static volatile int16_t x71 = -1;
	volatile uint8_t x72 = 7U;
	static int32_t t16 = 88;

    t16 = ((x69!=x70)/(x71^x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x73 = 870598U;
	int16_t x74 = 0;
	volatile int32_t x75 = INT32_MIN;
	uint16_t x76 = 1U;
	int32_t t17 = -181989958;

    t17 = ((x73!=x74)/(x75^x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x78 = UINT64_MAX;
	int16_t x79 = INT16_MIN;
	int32_t x80 = 504;
	int32_t t18 = 18;

    t18 = ((x77!=x78)/(x79^x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x82 = 407917669U;
	int32_t x83 = -1295290;
	static int8_t x84 = INT8_MAX;

    t19 = ((x81!=x82)/(x83^x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = 68937U;
	volatile int16_t x86 = 359;
	int64_t x87 = 103920084825559313LL;
	volatile uint8_t x88 = 13U;
	static volatile int64_t t20 = -196325742095252381LL;

    t20 = ((x85!=x86)/(x87^x88));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x90 = 1;
	volatile int32_t x92 = -1071379790;
	int32_t t21 = -24309;

    t21 = ((x89!=x90)/(x91^x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	volatile int16_t x95 = 1;
	uint32_t x96 = UINT32_MAX;

    t22 = ((x93!=x94)/(x95^x96));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MIN;
	static uint32_t x98 = UINT32_MAX;
	int64_t x99 = 37760875LL;
	int32_t x100 = 99523686;
	static int64_t t23 = 728LL;

    t23 = ((x97!=x98)/(x99^x100));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x106 = 40;
	int8_t x108 = -1;
	static volatile uint64_t t24 = 213854934557LLU;

    t24 = ((x105!=x106)/(x107^x108));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x109 = -145366343369LL;
	static int8_t x110 = INT8_MAX;
	uint32_t x111 = UINT32_MAX;
	uint16_t x112 = UINT16_MAX;
	uint32_t t25 = 195733529U;

    t25 = ((x109!=x110)/(x111^x112));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x113 = -1;
	int32_t x114 = -1;
	static int32_t x115 = -169;
	volatile uint8_t x116 = UINT8_MAX;
	int32_t t26 = -404583;

    t26 = ((x113!=x114)/(x115^x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = INT16_MIN;
	int64_t x118 = INT64_MAX;
	static int8_t x119 = -26;
	static uint64_t x120 = UINT64_MAX;

    t27 = ((x117!=x118)/(x119^x120));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x122 = UINT8_MAX;
	uint8_t x123 = UINT8_MAX;
	static uint64_t x124 = 27813905874646LLU;
	uint64_t t28 = 319307890580870794LLU;

    t28 = ((x121!=x122)/(x123^x124));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = 2;
	static int8_t x126 = -1;
	int8_t x127 = INT8_MAX;
	static volatile uint8_t x128 = UINT8_MAX;
	volatile int32_t t29 = 46205218;

    t29 = ((x125!=x126)/(x127^x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = INT8_MIN;
	int16_t x130 = -1;
	static uint8_t x131 = UINT8_MAX;
	volatile int16_t x132 = -6689;
	volatile int32_t t30 = -1218;

    t30 = ((x129!=x130)/(x131^x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x133 = -1LL;
	volatile int32_t x134 = -1;
	int8_t x135 = INT8_MAX;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t31 = -11;

    t31 = ((x133!=x134)/(x135^x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x137 = UINT8_MAX;
	int8_t x140 = INT8_MIN;
	static int32_t t32 = 7875745;

    t32 = ((x137!=x138)/(x139^x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x141 = INT16_MIN;
	int8_t x142 = -6;
	static int8_t x143 = INT8_MIN;
	int32_t t33 = -1;

    t33 = ((x141!=x142)/(x143^x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x145 = UINT8_MAX;
	static uint16_t x146 = UINT16_MAX;
	volatile uint16_t x147 = 1307U;
	volatile int32_t t34 = -17;

    t34 = ((x145!=x146)/(x147^x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MIN;
	int32_t x150 = 2;
	int16_t x151 = -1;
	int16_t x152 = INT16_MAX;
	volatile int32_t t35 = 63734293;

    t35 = ((x149!=x150)/(x151^x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MIN;
	volatile int64_t x154 = INT64_MIN;
	int8_t x155 = 5;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t36 = -28;

    t36 = ((x153!=x154)/(x155^x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MIN;
	static int16_t x158 = -1;
	volatile int8_t x159 = INT8_MIN;
	volatile uint64_t t37 = 763342964LLU;

    t37 = ((x157!=x158)/(x159^x160));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x162 = 58U;
	int8_t x163 = 3;
	volatile uint32_t t38 = 1U;

    t38 = ((x161!=x162)/(x163^x164));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x167 = -5;
	uint64_t x168 = 48030239LLU;
	volatile uint64_t t39 = 474183428828LLU;

    t39 = ((x165!=x166)/(x167^x168));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = INT32_MIN;
	volatile int64_t x170 = -6577939343LL;
	static uint32_t x172 = 340U;

    t40 = ((x169!=x170)/(x171^x172));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x174 = UINT64_MAX;
	static int64_t x175 = INT64_MIN;
	volatile int64_t t41 = -272765198579LL;

    t41 = ((x173!=x174)/(x175^x176));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 27LLU;
	int16_t x178 = -15;
	volatile uint64_t x179 = UINT64_MAX;
	uint16_t x180 = 2700U;
	static uint64_t t42 = 6LLU;

    t42 = ((x177!=x178)/(x179^x180));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint32_t x181 = 94U;
	uint8_t x182 = 0U;
	int16_t x184 = INT16_MIN;

    t43 = ((x181!=x182)/(x183^x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x186 = INT64_MAX;
	uint16_t x187 = UINT16_MAX;
	int32_t x188 = 411;
	volatile int32_t t44 = -401544;

    t44 = ((x185!=x186)/(x187^x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x189 = INT8_MIN;
	uint16_t x190 = UINT16_MAX;
	uint64_t x191 = 237530047445941LLU;
	volatile uint64_t t45 = 8352466108LLU;

    t45 = ((x189!=x190)/(x191^x192));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x193 = INT64_MIN;
	static uint64_t x195 = UINT64_MAX;
	uint32_t x196 = 31U;
	volatile uint64_t t46 = 21876378LLU;

    t46 = ((x193!=x194)/(x195^x196));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MAX;
	int16_t x200 = 0;
	int32_t t47 = 198;

    t47 = ((x197!=x198)/(x199^x200));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x201 = INT32_MIN;
	uint16_t x203 = 381U;
	static int32_t x204 = -1;
	static volatile int32_t t48 = 36326;

    t48 = ((x201!=x202)/(x203^x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = -1785LL;
	static int64_t t49 = 17020190323032080LL;

    t49 = ((x205!=x206)/(x207^x208));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = INT8_MAX;
	int64_t x210 = INT64_MAX;
	uint32_t x211 = 420531U;
	uint16_t x212 = 8U;
	volatile uint32_t t50 = 19U;

    t50 = ((x209!=x210)/(x211^x212));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x213 = -10;
	int16_t x214 = INT16_MIN;
	int8_t x216 = -1;
	uint32_t t51 = 366495323U;

    t51 = ((x213!=x214)/(x215^x216));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x217 = -60;
	volatile int16_t x218 = 11008;
	static uint32_t x219 = UINT32_MAX;
	volatile int8_t x220 = 1;
	static volatile uint32_t t52 = 257819918U;

    t52 = ((x217!=x218)/(x219^x220));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = 2;
	int64_t x222 = INT64_MAX;
	uint32_t x223 = 85939649U;
	uint64_t x224 = 0LLU;
	volatile uint64_t t53 = 52868407268LLU;

    t53 = ((x221!=x222)/(x223^x224));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x229 = INT16_MIN;
	uint16_t x230 = UINT16_MAX;
	static volatile int64_t x231 = INT64_MIN;
	int64_t t54 = -964832LL;

    t54 = ((x229!=x230)/(x231^x232));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = INT32_MIN;
	volatile int32_t x234 = -1;
	uint8_t x235 = 30U;
	static int64_t x236 = -1LL;
	int64_t t55 = 137340541795486LL;

    t55 = ((x233!=x234)/(x235^x236));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = UINT64_MAX;

    t56 = ((x237!=x238)/(x239^x240));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x241 = 167LLU;
	static int32_t x244 = -40;
	int32_t t57 = 184059312;

    t57 = ((x241!=x242)/(x243^x244));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x246 = INT16_MIN;
	uint32_t x247 = 693445979U;
	int64_t x248 = 714646743LL;

    t58 = ((x245!=x246)/(x247^x248));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = -1;
	static volatile int32_t x250 = INT32_MIN;
	volatile int64_t x251 = -391534LL;
	uint16_t x252 = 3609U;
	volatile int64_t t59 = -30030LL;

    t59 = ((x249!=x250)/(x251^x252));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = 36;
	static int64_t x254 = 265305727LL;
	int64_t x255 = 294LL;
	volatile int64_t t60 = 620055197988254LL;

    t60 = ((x253!=x254)/(x255^x256));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	int16_t x260 = -3356;
	static volatile uint64_t t61 = 390898325728491707LLU;

    t61 = ((x257!=x258)/(x259^x260));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x261 = UINT8_MAX;
	volatile int32_t x263 = 1;
	static uint8_t x264 = 93U;
	int32_t t62 = 903510178;

    t62 = ((x261!=x262)/(x263^x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x265 = 1950465627068347LLU;
	int8_t x267 = 2;
	volatile int64_t x268 = INT64_MIN;
	int64_t t63 = 10871671792958175LL;

    t63 = ((x265!=x266)/(x267^x268));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x269 = 29623U;
	int64_t x270 = INT64_MIN;
	int32_t x271 = -5281930;
	int32_t x272 = INT32_MIN;
	volatile int32_t t64 = 43;

    t64 = ((x269!=x270)/(x271^x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x273 = 274846U;
	int8_t x274 = INT8_MIN;
	volatile uint16_t x275 = UINT16_MAX;
	volatile int32_t t65 = 58528363;

    t65 = ((x273!=x274)/(x275^x276));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x277 = 1;
	int64_t x278 = 218108149592755LL;
	uint64_t x279 = 6385406964266062692LLU;
	uint8_t x280 = 45U;

    t66 = ((x277!=x278)/(x279^x280));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = -26944083LL;
	int32_t x282 = -1896483;
	uint64_t x284 = 23163801851848LLU;
	uint64_t t67 = 11649162973963379LLU;

    t67 = ((x281!=x282)/(x283^x284));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x285 = UINT8_MAX;
	volatile uint16_t x286 = UINT16_MAX;
	int32_t x287 = INT32_MAX;
	uint64_t x288 = 7LLU;
	static volatile uint64_t t68 = 3329941712LLU;

    t68 = ((x285!=x286)/(x287^x288));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x289 = INT16_MIN;
	volatile int16_t x290 = 3;
	uint64_t x292 = 8LLU;
	volatile uint64_t t69 = 1196604120LLU;

    t69 = ((x289!=x290)/(x291^x292));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x294 = INT32_MAX;
	int16_t x295 = -4;
	int32_t x296 = INT32_MIN;
	volatile int32_t t70 = -1;

    t70 = ((x293!=x294)/(x295^x296));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x297 = 3U;
	int64_t x299 = -1LL;
	int16_t x300 = INT16_MIN;
	static volatile int64_t t71 = -2723383906384241LL;

    t71 = ((x297!=x298)/(x299^x300));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x301 = 1;
	uint8_t x302 = 2U;
	uint16_t x303 = 2156U;
	int32_t x304 = -1;
	volatile int32_t t72 = 20;

    t72 = ((x301!=x302)/(x303^x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = INT64_MAX;
	volatile int8_t x306 = INT8_MIN;
	volatile uint64_t x307 = 249770LLU;
	static uint16_t x308 = 441U;
	volatile uint64_t t73 = 0LLU;

    t73 = ((x305!=x306)/(x307^x308));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x310 = -2041804LL;
	volatile int32_t t74 = -840204;

    t74 = ((x309!=x310)/(x311^x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x313 = -1LL;
	int64_t x315 = INT64_MIN;
	int16_t x316 = -1;

    t75 = ((x313!=x314)/(x315^x316));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	uint16_t x319 = 29U;
	static volatile int32_t t76 = -1;

    t76 = ((x317!=x318)/(x319^x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x321 = -1;
	volatile int32_t x322 = INT32_MAX;
	static uint32_t x323 = 11991034U;
	uint8_t x324 = 22U;
	volatile uint32_t t77 = 2585267U;

    t77 = ((x321!=x322)/(x323^x324));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x327 = 23;
	volatile int8_t x328 = INT8_MIN;
	volatile int32_t t78 = 80246;

    t78 = ((x325!=x326)/(x327^x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int64_t x329 = -6944794147900LL;
	static uint32_t x330 = 107908320U;
	static int8_t x331 = INT8_MIN;
	int64_t x332 = INT64_MAX;
	int64_t t79 = -2434LL;

    t79 = ((x329!=x330)/(x331^x332));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x333 = UINT8_MAX;
	int16_t x334 = -790;
	int32_t x335 = 624890205;
	static uint32_t x336 = 89595U;
	volatile uint32_t t80 = 1011708454U;

    t80 = ((x333!=x334)/(x335^x336));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint64_t x337 = 591027863489LLU;
	int8_t x338 = -6;
	int64_t x339 = 89LL;
	uint16_t x340 = UINT16_MAX;
	static volatile int64_t t81 = -227517LL;

    t81 = ((x337!=x338)/(x339^x340));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = -1;
	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	volatile uint16_t x344 = 241U;

    t82 = ((x341!=x342)/(x343^x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x345 = INT16_MIN;
	int32_t x347 = -1;

    t83 = ((x345!=x346)/(x347^x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x349 = UINT8_MAX;
	uint32_t x351 = 2715U;
	int8_t x352 = -1;
	static volatile uint32_t t84 = 84731U;

    t84 = ((x349!=x350)/(x351^x352));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x355 = 1U;
	int32_t x356 = INT32_MIN;
	volatile int32_t t85 = -97;

    t85 = ((x353!=x354)/(x355^x356));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x357 = -641;
	uint8_t x358 = 5U;
	uint32_t x359 = 31085U;
	uint32_t t86 = 239690U;

    t86 = ((x357!=x358)/(x359^x360));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x361 = UINT16_MAX;
	int64_t x363 = 2008LL;
	volatile int64_t t87 = 3843272LL;

    t87 = ((x361!=x362)/(x363^x364));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x365 = -26;
	uint32_t x366 = UINT32_MAX;
	volatile int16_t x367 = INT16_MIN;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t88 = 66;

    t88 = ((x365!=x366)/(x367^x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x370 = UINT8_MAX;
	static int64_t x371 = INT64_MIN;
	volatile uint8_t x372 = 33U;

    t89 = ((x369!=x370)/(x371^x372));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	uint8_t x376 = UINT8_MAX;
	int64_t t90 = 252149703851LL;

    t90 = ((x373!=x374)/(x375^x376));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x377 = INT8_MAX;
	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	volatile int32_t t91 = 394604898;

    t91 = ((x377!=x378)/(x379^x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x382 = UINT32_MAX;
	int16_t x383 = -148;
	uint32_t x384 = 6016368U;

    t92 = ((x381!=x382)/(x383^x384));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x386 = -7;
	int32_t x387 = -1;
	volatile uint8_t x388 = 49U;
	volatile int32_t t93 = -108227;

    t93 = ((x385!=x386)/(x387^x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x390 = UINT8_MAX;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t94 = 618LLU;

    t94 = ((x389!=x390)/(x391^x392));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = 14;
	volatile uint16_t x394 = 1238U;
	int16_t x395 = 98;
	uint32_t t95 = 168U;

    t95 = ((x393!=x394)/(x395^x396));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x398 = 1U;
	volatile uint16_t x399 = UINT16_MAX;
	uint32_t x400 = UINT32_MAX;

    t96 = ((x397!=x398)/(x399^x400));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x402 = INT32_MAX;
	volatile int64_t x403 = -1LL;
	static int16_t x404 = INT16_MIN;
	volatile int64_t t97 = -3141250239LL;

    t97 = ((x401!=x402)/(x403^x404));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x409 = INT8_MAX;
	int8_t x410 = -1;
	uint32_t x411 = 40666514U;
	int8_t x412 = INT8_MAX;
	static volatile uint32_t t98 = 37U;

    t98 = ((x409!=x410)/(x411^x412));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x413 = 529104546;
	int32_t x416 = 12;
	int32_t t99 = 2611749;

    t99 = ((x413!=x414)/(x415^x416));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x422 = -650078701191750160LL;
	static int32_t x423 = 2206;
	volatile int16_t x424 = 125;
	volatile int32_t t100 = -257;

    t100 = ((x421!=x422)/(x423^x424));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x425 = -1;
	volatile int32_t x426 = -1;
	int64_t x427 = INT64_MAX;
	static int16_t x428 = -83;
	int64_t t101 = 2LL;

    t101 = ((x425!=x426)/(x427^x428));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x429 = INT32_MAX;
	int64_t x430 = -1LL;
	int64_t x431 = INT64_MAX;
	volatile int16_t x432 = INT16_MAX;

    t102 = ((x429!=x430)/(x431^x432));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x433 = INT64_MIN;
	uint64_t x434 = UINT64_MAX;
	static int64_t x436 = 1013LL;
	int64_t t103 = -4LL;

    t103 = ((x433!=x434)/(x435^x436));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x437 = 1U;
	volatile int8_t x438 = 42;
	static int32_t x439 = INT32_MIN;
	int8_t x440 = -1;
	volatile int32_t t104 = 3;

    t104 = ((x437!=x438)/(x439^x440));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x441 = INT32_MAX;
	volatile int8_t x443 = 5;
	uint8_t x444 = 26U;
	int32_t t105 = 1;

    t105 = ((x441!=x442)/(x443^x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x445 = INT32_MIN;
	volatile uint32_t x446 = UINT32_MAX;
	int32_t x447 = -1;
	volatile uint64_t x448 = 411117LLU;
	uint64_t t106 = 2192043060796684364LLU;

    t106 = ((x445!=x446)/(x447^x448));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x449 = INT16_MIN;
	uint8_t x450 = 0U;
	static int8_t x451 = INT8_MAX;

    t107 = ((x449!=x450)/(x451^x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x453 = 16853459165548157LLU;
	int64_t x454 = -1LL;
	static int32_t x455 = INT32_MIN;
	int8_t x456 = INT8_MAX;
	int32_t t108 = -943519415;

    t108 = ((x453!=x454)/(x455^x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x460 = UINT32_MAX;
	uint32_t t109 = 15358U;

    t109 = ((x457!=x458)/(x459^x460));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x461 = 677LL;
	int16_t x462 = -1;
	int32_t x463 = INT32_MAX;
	uint32_t x464 = UINT32_MAX;
	uint32_t t110 = 6999U;

    t110 = ((x461!=x462)/(x463^x464));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x465 = INT8_MIN;
	static uint16_t x466 = 0U;
	int8_t x467 = INT8_MIN;
	static int16_t x468 = -170;
	int32_t t111 = -2;

    t111 = ((x465!=x466)/(x467^x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x469 = -5;
	volatile int32_t x470 = -3;
	int32_t x471 = -1227;
	static int8_t x472 = INT8_MIN;
	volatile int32_t t112 = 1458427;

    t112 = ((x469!=x470)/(x471^x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x473 = UINT32_MAX;
	int16_t x474 = -1;
	uint16_t x476 = UINT16_MAX;
	volatile int64_t t113 = 8170196LL;

    t113 = ((x473!=x474)/(x475^x476));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x477 = INT64_MIN;
	int32_t x478 = INT32_MIN;
	int16_t x479 = -1;
	volatile int8_t x480 = INT8_MAX;
	static int32_t t114 = 145;

    t114 = ((x477!=x478)/(x479^x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x484 = -1;
	volatile uint32_t t115 = 490U;

    t115 = ((x481!=x482)/(x483^x484));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x485 = INT64_MAX;
	static int64_t x486 = -3143LL;
	int32_t x487 = -3389514;
	int8_t x488 = -33;
	int32_t t116 = -7;

    t116 = ((x485!=x486)/(x487^x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x494 = 4U;
	static uint64_t x495 = 676330269500400LLU;
	static volatile int8_t x496 = INT8_MIN;

    t117 = ((x493!=x494)/(x495^x496));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x499 = INT32_MIN;
	int16_t x500 = 12;
	volatile int32_t t118 = -5;

    t118 = ((x497!=x498)/(x499^x500));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x501 = INT32_MIN;
	int64_t x502 = INT64_MIN;
	static volatile int32_t x503 = INT32_MAX;
	int32_t t119 = -3;

    t119 = ((x501!=x502)/(x503^x504));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x505 = 1051LLU;
	static int16_t x506 = 942;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t120 = -105;

    t120 = ((x505!=x506)/(x507^x508));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x509 = -31;
	static int64_t x510 = INT64_MIN;
	volatile uint64_t x512 = 104LLU;

    t121 = ((x509!=x510)/(x511^x512));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x514 = INT8_MAX;
	volatile uint64_t t122 = 6782070364LLU;

    t122 = ((x513!=x514)/(x515^x516));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x517 = INT32_MIN;
	static uint32_t x519 = 190693884U;
	int16_t x520 = -116;
	static volatile uint32_t t123 = 13347U;

    t123 = ((x517!=x518)/(x519^x520));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x521 = 3019U;
	int8_t x522 = INT8_MIN;
	int32_t t124 = 3;

    t124 = ((x521!=x522)/(x523^x524));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x525 = -1LL;
	int8_t x527 = INT8_MAX;
	int16_t x528 = INT16_MAX;
	int32_t t125 = -1;

    t125 = ((x525!=x526)/(x527^x528));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x529 = INT16_MIN;
	static int64_t x530 = -544427829497824915LL;
	int64_t x531 = -8915726LL;
	static volatile uint64_t t126 = 33149328463LLU;

    t126 = ((x529!=x530)/(x531^x532));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x533 = UINT8_MAX;
	uint64_t x534 = UINT64_MAX;
	uint64_t x535 = 5214034057316LLU;
	volatile int64_t x536 = INT64_MAX;
	volatile uint64_t t127 = 1109136254046453508LLU;

    t127 = ((x533!=x534)/(x535^x536));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x537 = INT16_MAX;
	int8_t x538 = 1;
	volatile uint8_t x539 = 81U;
	uint64_t x540 = 72LLU;
	volatile uint64_t t128 = 2860750042LLU;

    t128 = ((x537!=x538)/(x539^x540));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x541 = 582LLU;
	volatile int64_t x544 = 104209LL;
	int64_t t129 = -37LL;

    t129 = ((x541!=x542)/(x543^x544));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x546 = INT8_MIN;
	static int32_t t130 = -30295243;

    t130 = ((x545!=x546)/(x547^x548));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x550 = -952248;
	uint16_t x551 = UINT16_MAX;
	static int8_t x552 = -1;
	int32_t t131 = 158650784;

    t131 = ((x549!=x550)/(x551^x552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x553 = 1441;
	int16_t x554 = INT16_MIN;
	int32_t x555 = INT32_MAX;
	int32_t x556 = INT32_MIN;
	static volatile int32_t t132 = -4743;

    t132 = ((x553!=x554)/(x555^x556));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x557 = -1568026982580319LL;
	int8_t x558 = 0;
	uint16_t x559 = UINT16_MAX;
	int32_t x560 = INT32_MAX;
	int32_t t133 = 1;

    t133 = ((x557!=x558)/(x559^x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x565 = INT16_MAX;
	volatile uint8_t x566 = UINT8_MAX;
	int32_t t134 = 478796;

    t134 = ((x565!=x566)/(x567^x568));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x569 = -2;
	static uint16_t x570 = 2U;
	int64_t x571 = -213148591913367LL;
	volatile int32_t x572 = -1;
	int64_t t135 = 68034372699757LL;

    t135 = ((x569!=x570)/(x571^x572));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x573 = -43;
	static uint8_t x574 = 9U;
	int8_t x575 = INT8_MIN;

    t136 = ((x573!=x574)/(x575^x576));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x577 = 79U;
	int32_t x578 = INT32_MAX;
	int8_t x580 = -5;

    t137 = ((x577!=x578)/(x579^x580));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x581 = 1;
	uint16_t x583 = 8366U;
	int32_t t138 = -279;

    t138 = ((x581!=x582)/(x583^x584));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x585 = 0U;
	int16_t x586 = -1;
	int64_t x588 = -6612559867LL;
	volatile int64_t t139 = 913496582755746LL;

    t139 = ((x585!=x586)/(x587^x588));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x589 = 81833644009284LLU;
	static volatile int16_t x590 = INT16_MIN;
	int64_t x591 = INT64_MIN;
	volatile int64_t t140 = 6674141213LL;

    t140 = ((x589!=x590)/(x591^x592));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x593 = -1;
	static volatile int8_t x594 = INT8_MAX;
	static int32_t x595 = INT32_MIN;
	int8_t x596 = INT8_MIN;
	static volatile int32_t t141 = -1;

    t141 = ((x593!=x594)/(x595^x596));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x597 = INT32_MIN;
	uint16_t x599 = UINT16_MAX;
	int32_t x600 = -1;
	volatile int32_t t142 = 315;

    t142 = ((x597!=x598)/(x599^x600));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x601 = 24703836288LLU;
	int8_t x603 = 14;
	int8_t x604 = INT8_MIN;
	int32_t t143 = 12970526;

    t143 = ((x601!=x602)/(x603^x604));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x605 = -37517069LL;
	int64_t x606 = -89528752905LL;
	int64_t x607 = -1927175310LL;
	int64_t x608 = INT64_MAX;
	int64_t t144 = 273LL;

    t144 = ((x605!=x606)/(x607^x608));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x609 = INT16_MIN;
	int16_t x610 = -1;
	int8_t x611 = -1;
	int32_t t145 = -705;

    t145 = ((x609!=x610)/(x611^x612));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x613 = 3;
	int16_t x614 = INT16_MAX;
	volatile int64_t t146 = -5983430LL;

    t146 = ((x613!=x614)/(x615^x616));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x617 = 34U;
	static int64_t x618 = -52589948314LL;
	static uint64_t x620 = 3196068369934LLU;
	volatile uint64_t t147 = 424370LLU;

    t147 = ((x617!=x618)/(x619^x620));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x622 = INT16_MIN;
	int8_t x624 = INT8_MIN;
	int32_t t148 = 0;

    t148 = ((x621!=x622)/(x623^x624));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x625 = -16217110;
	int64_t x626 = INT64_MIN;
	static uint32_t x627 = 105U;
	int32_t x628 = INT32_MIN;

    t149 = ((x625!=x626)/(x627^x628));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x629 = UINT32_MAX;
	volatile int8_t x630 = INT8_MAX;
	volatile int16_t x631 = INT16_MAX;
	int32_t x632 = -343;

    t150 = ((x629!=x630)/(x631^x632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x633 = INT16_MIN;
	uint64_t x635 = 0LLU;
	int16_t x636 = INT16_MIN;
	static volatile uint64_t t151 = 1607747LLU;

    t151 = ((x633!=x634)/(x635^x636));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x637 = 0U;
	int64_t x639 = 28038186731296LL;
	volatile int64_t t152 = -526667410546829LL;

    t152 = ((x637!=x638)/(x639^x640));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x641 = -12;
	int32_t x642 = INT32_MAX;
	static volatile int16_t x643 = INT16_MAX;

    t153 = ((x641!=x642)/(x643^x644));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x645 = UINT32_MAX;
	int16_t x647 = INT16_MAX;
	uint64_t x648 = 12321LLU;
	static volatile uint64_t t154 = 338835941226LLU;

    t154 = ((x645!=x646)/(x647^x648));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x649 = 827216066658LLU;
	static int32_t x650 = INT32_MAX;
	int64_t x652 = INT64_MIN;

    t155 = ((x649!=x650)/(x651^x652));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x653 = INT8_MAX;
	volatile uint16_t x654 = 242U;
	static int32_t x655 = 2134178;
	uint32_t x656 = 197927U;

    t156 = ((x653!=x654)/(x655^x656));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x657 = 4252;
	static volatile int32_t x658 = -7687915;
	static uint64_t x659 = 8342434065215376LLU;
	volatile uint64_t t157 = 1609340059077LLU;

    t157 = ((x657!=x658)/(x659^x660));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x661 = INT16_MIN;
	int64_t x662 = -1LL;
	volatile int8_t x663 = -40;
	volatile int32_t t158 = 28;

    t158 = ((x661!=x662)/(x663^x664));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x669 = INT64_MIN;
	static int8_t x670 = INT8_MIN;
	int16_t x672 = INT16_MIN;

    t159 = ((x669!=x670)/(x671^x672));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x673 = -1;
	int64_t x674 = INT64_MAX;
	uint8_t x675 = UINT8_MAX;
	uint64_t x676 = UINT64_MAX;
	static volatile uint64_t t160 = 69145756345016211LLU;

    t160 = ((x673!=x674)/(x675^x676));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x678 = INT64_MIN;
	uint64_t x679 = 212336656731269782LLU;
	uint32_t x680 = 727310U;
	volatile uint64_t t161 = 65LLU;

    t161 = ((x677!=x678)/(x679^x680));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x681 = -1;
	uint32_t x682 = UINT32_MAX;
	static int32_t x684 = INT32_MAX;
	volatile int32_t t162 = 24194526;

    t162 = ((x681!=x682)/(x683^x684));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x689 = INT64_MIN;
	int64_t x690 = 3300229LL;
	static uint32_t x691 = 2U;
	int8_t x692 = 7;

    t163 = ((x689!=x690)/(x691^x692));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x693 = INT64_MAX;
	int8_t x694 = INT8_MIN;
	int32_t x695 = INT32_MIN;
	volatile int8_t x696 = -43;
	volatile int32_t t164 = 0;

    t164 = ((x693!=x694)/(x695^x696));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x697 = UINT8_MAX;
	int64_t x699 = 16584660942736279LL;
	int32_t x700 = INT32_MIN;
	volatile int64_t t165 = -567543666143282359LL;

    t165 = ((x697!=x698)/(x699^x700));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x701 = -1;
	int64_t x702 = INT64_MIN;
	volatile int8_t x703 = INT8_MIN;
	int32_t x704 = INT32_MIN;

    t166 = ((x701!=x702)/(x703^x704));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x705 = 1854941364716932LLU;
	int32_t x706 = INT32_MIN;
	uint32_t x707 = 54U;
	uint16_t x708 = UINT16_MAX;
	static uint32_t t167 = 4073U;

    t167 = ((x705!=x706)/(x707^x708));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x709 = INT16_MAX;
	volatile int64_t x711 = -1LL;
	static int32_t x712 = 73469;
	int64_t t168 = 370348LL;

    t168 = ((x709!=x710)/(x711^x712));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x714 = -392921223LL;
	volatile int16_t x715 = INT16_MIN;
	volatile int8_t x716 = 1;
	volatile int32_t t169 = -13204;

    t169 = ((x713!=x714)/(x715^x716));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x717 = INT64_MIN;
	static volatile int16_t x718 = INT16_MAX;
	uint16_t x719 = 4U;
	uint64_t x720 = UINT64_MAX;
	volatile uint64_t t170 = 47631770LLU;

    t170 = ((x717!=x718)/(x719^x720));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x721 = INT16_MIN;
	int16_t x722 = -451;
	volatile int8_t x723 = INT8_MIN;
	static int64_t x724 = 885619531750LL;
	static volatile int64_t t171 = 5596488089514725LL;

    t171 = ((x721!=x722)/(x723^x724));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x725 = UINT16_MAX;
	int16_t x726 = INT16_MIN;
	int16_t x728 = -1007;
	uint32_t t172 = 1330066U;

    t172 = ((x725!=x726)/(x727^x728));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint32_t x729 = UINT32_MAX;
	uint32_t x730 = 80507740U;
	static uint64_t t173 = 47LLU;

    t173 = ((x729!=x730)/(x731^x732));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x733 = 1187U;
	int16_t x734 = 4178;
	uint16_t x735 = 17U;
	int16_t x736 = INT16_MAX;
	volatile int32_t t174 = -121271;

    t174 = ((x733!=x734)/(x735^x736));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x739 = 698LLU;
	volatile int32_t x740 = -205190;

    t175 = ((x737!=x738)/(x739^x740));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x742 = -1;
	uint8_t x743 = 0U;

    t176 = ((x741!=x742)/(x743^x744));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x745 = 80U;
	int32_t x746 = -1;
	static int32_t x747 = INT32_MIN;
	uint8_t x748 = 1U;
	int32_t t177 = -88;

    t177 = ((x745!=x746)/(x747^x748));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x749 = UINT32_MAX;
	int32_t x750 = INT32_MIN;
	int64_t x751 = INT64_MAX;

    t178 = ((x749!=x750)/(x751^x752));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x753 = INT16_MIN;
	uint16_t x754 = 74U;
	int8_t x755 = INT8_MIN;
	int64_t x756 = -59731LL;
	volatile int64_t t179 = 370323692849LL;

    t179 = ((x753!=x754)/(x755^x756));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x757 = 0;
	volatile uint16_t x758 = UINT16_MAX;
	uint64_t x760 = 249396000828LLU;
	uint64_t t180 = 177949952947LLU;

    t180 = ((x757!=x758)/(x759^x760));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x761 = -16;
	static uint8_t x763 = 0U;
	static volatile int16_t x764 = -496;
	static volatile int32_t t181 = -1;

    t181 = ((x761!=x762)/(x763^x764));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x765 = -25;
	int32_t x766 = INT32_MIN;
	int64_t x767 = -4328676954650466649LL;
	int64_t t182 = 6451586498LL;

    t182 = ((x765!=x766)/(x767^x768));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x769 = 1;
	static int64_t x770 = 165518173LL;
	int8_t x771 = -2;
	int8_t x772 = 14;
	static volatile int32_t t183 = -2;

    t183 = ((x769!=x770)/(x771^x772));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x774 = -61;
	int64_t x775 = -941382206LL;
	volatile int16_t x776 = INT16_MAX;
	int64_t t184 = -8494512026LL;

    t184 = ((x773!=x774)/(x775^x776));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x778 = INT64_MAX;
	static volatile int16_t x779 = INT16_MAX;
	int8_t x780 = INT8_MIN;

    t185 = ((x777!=x778)/(x779^x780));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x781 = INT32_MIN;
	int32_t x782 = INT32_MAX;
	uint16_t x783 = 0U;
	uint8_t x784 = 7U;
	int32_t t186 = -895;

    t186 = ((x781!=x782)/(x783^x784));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x785 = INT64_MIN;
	volatile int64_t x786 = -1LL;
	volatile int64_t x787 = 4767556960263439LL;
	volatile int16_t x788 = 5000;
	volatile int64_t t187 = 0LL;

    t187 = ((x785!=x786)/(x787^x788));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x789 = -1;
	static int16_t x790 = INT16_MIN;
	int64_t x791 = INT64_MIN;
	int32_t x792 = INT32_MAX;
	volatile int64_t t188 = -11LL;

    t188 = ((x789!=x790)/(x791^x792));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x793 = 564330221U;
	int64_t x795 = INT64_MIN;
	static uint16_t x796 = 8020U;
	int64_t t189 = 2304271656771LL;

    t189 = ((x793!=x794)/(x795^x796));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x797 = 6123872U;
	volatile uint64_t x799 = UINT64_MAX;
	uint64_t t190 = 52408877599004693LLU;

    t190 = ((x797!=x798)/(x799^x800));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x801 = INT64_MAX;
	volatile int8_t x802 = -58;
	int16_t x803 = INT16_MIN;
	volatile uint16_t x804 = UINT16_MAX;
	volatile int32_t t191 = 43;

    t191 = ((x801!=x802)/(x803^x804));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x805 = UINT64_MAX;
	volatile int32_t x806 = INT32_MIN;
	volatile int16_t x807 = INT16_MIN;
	int16_t x808 = INT16_MAX;
	int32_t t192 = 30;

    t192 = ((x805!=x806)/(x807^x808));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x810 = 154U;
	int16_t x811 = -1;
	uint64_t t193 = 2973451765730284532LLU;

    t193 = ((x809!=x810)/(x811^x812));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x813 = -1LL;
	int32_t x814 = -2;
	static int8_t x815 = 6;
	int8_t x816 = -1;
	int32_t t194 = -66518572;

    t194 = ((x813!=x814)/(x815^x816));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x818 = 3484474U;
	int64_t x819 = -733202150634LL;
	static int64_t x820 = INT64_MIN;
	volatile int64_t t195 = -4743012523420101LL;

    t195 = ((x817!=x818)/(x819^x820));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x823 = INT8_MAX;
	int8_t x824 = INT8_MIN;
	int32_t t196 = -59607;

    t196 = ((x821!=x822)/(x823^x824));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x825 = 0U;
	uint16_t x826 = 2U;
	volatile uint64_t t197 = 89LLU;

    t197 = ((x825!=x826)/(x827^x828));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x830 = -252879;
	int32_t x831 = 357;
	int16_t x832 = INT16_MIN;
	volatile int32_t t198 = 140;

    t198 = ((x829!=x830)/(x831^x832));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x833 = 54373U;
	uint32_t x835 = 62372U;
	int16_t x836 = INT16_MIN;

    t199 = ((x833!=x834)/(x835^x836));

    if (t199 != 0U) { NG(); } else { ; }
	
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

