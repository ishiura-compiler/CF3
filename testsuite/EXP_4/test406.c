
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

static int16_t x14 = INT16_MAX;
int32_t x23 = 511127;
int8_t x36 = INT8_MAX;
int64_t t5 = 128546881389702LL;
uint8_t x48 = UINT8_MAX;
uint64_t t6 = 15037844564250786LLU;
int64_t x51 = -1LL;
volatile int8_t x58 = INT8_MIN;
int64_t x60 = -1LL;
uint16_t x64 = UINT16_MAX;
volatile uint8_t x67 = 3U;
static int64_t x69 = 48275243348853903LL;
uint8_t x71 = 52U;
volatile int64_t t12 = -260795195822603LL;
static int16_t x83 = INT16_MAX;
static volatile uint8_t x85 = 37U;
int32_t t14 = 33023136;
uint32_t t15 = 13U;
volatile int8_t x97 = 0;
int16_t x99 = -1;
volatile int32_t t16 = -15818806;
uint32_t t17 = 683507156U;
int8_t x112 = -10;
uint64_t x114 = 5LLU;
uint64_t t19 = 2235376254720304LLU;
uint32_t x131 = 10U;
volatile int32_t x140 = -1;
volatile uint32_t t26 = 151669612U;
static int64_t x154 = -1669015480975783395LL;
int32_t x155 = 113;
int32_t t28 = -82;
static int16_t x167 = 326;
volatile int32_t x177 = 778;
volatile int64_t t32 = 479785377536586730LL;
static volatile int8_t x186 = 1;
static uint32_t x188 = UINT32_MAX;
volatile int16_t x198 = INT16_MAX;
int32_t x210 = INT32_MIN;
uint32_t x213 = UINT32_MAX;
static int16_t x214 = -15;
uint8_t x217 = 105U;
int64_t x218 = INT64_MIN;
volatile uint64_t t41 = 3158940582LLU;
static int64_t x225 = INT64_MIN;
static int64_t t42 = 24516456LL;
static int16_t x229 = -1369;
volatile uint8_t x240 = 40U;
volatile int16_t x256 = INT16_MAX;
static int16_t x258 = INT16_MIN;
static uint32_t x263 = 785705436U;
static uint32_t t49 = 444591989U;
uint64_t t50 = 77053989378787003LLU;
int8_t x282 = INT8_MAX;
static uint32_t x284 = 262870U;
int8_t x286 = 1;
static int64_t x290 = INT64_MIN;
static volatile int64_t t54 = 86LL;
int64_t x309 = -352615LL;
volatile uint32_t x312 = 2784U;
static int64_t t58 = 5LL;
volatile uint64_t x316 = 4940315205415283057LLU;
volatile int8_t x327 = INT8_MAX;
uint8_t x332 = UINT8_MAX;
volatile int32_t x336 = INT32_MIN;
volatile int64_t t63 = -13269LL;
static uint8_t x357 = 20U;
uint8_t x368 = 40U;
int8_t x379 = -1;
volatile int64_t t69 = 1928LL;
uint64_t x388 = 3825003LLU;
uint32_t x391 = UINT32_MAX;
int64_t x393 = INT64_MIN;
int32_t t74 = -3639025;
static volatile uint8_t x410 = 2U;
static int64_t x412 = -1LL;
volatile int16_t x416 = INT16_MIN;
uint8_t x429 = UINT8_MAX;
int32_t x430 = INT32_MIN;
volatile uint32_t x431 = UINT32_MAX;
volatile int16_t x432 = INT16_MIN;
int64_t x437 = 1022886401608LL;
int16_t x441 = -1975;
uint64_t x444 = 127972032LLU;
int32_t x458 = INT32_MIN;
int64_t x459 = INT64_MIN;
static volatile uint32_t x466 = 77167210U;
int32_t x481 = INT32_MAX;
int32_t x491 = -1;
int16_t x516 = INT16_MIN;
static uint32_t x519 = 418631878U;
static uint8_t x530 = UINT8_MAX;
uint64_t x533 = 2734LLU;
volatile uint8_t x534 = UINT8_MAX;
static uint32_t x536 = 1267728279U;
int64_t x537 = -1LL;
static int8_t x540 = INT8_MIN;
volatile int64_t t96 = -167LL;
volatile int64_t t98 = -6602018649712LL;
uint16_t x568 = 26U;
int64_t x586 = -33440646033273277LL;
int8_t x588 = INT8_MIN;
volatile int64_t t105 = -300807530LL;
volatile uint32_t x598 = UINT32_MAX;
uint64_t t106 = 47525859115LLU;
int8_t x620 = INT8_MIN;
int16_t x628 = 0;
volatile int64_t t111 = 208101LL;
static uint64_t x641 = UINT64_MAX;
int16_t x651 = 1;
volatile uint8_t x688 = UINT8_MAX;
int8_t x703 = INT8_MAX;
int32_t x708 = -1993;
uint64_t t122 = 40569058LLU;
volatile int16_t x709 = -4463;
uint8_t x710 = 0U;
uint8_t x711 = UINT8_MAX;
volatile uint8_t x720 = 13U;
int16_t x723 = -1;
uint64_t x745 = UINT64_MAX;
volatile int8_t x750 = -1;
uint16_t x756 = 55U;
uint16_t x769 = 15871U;
uint32_t x775 = 25983U;
int32_t x776 = INT32_MIN;
volatile uint64_t x777 = 267443LLU;
volatile int32_t x787 = INT32_MAX;
volatile uint64_t t140 = 1590495361787057176LLU;
static volatile uint64_t x820 = 3452101219017507083LLU;
int8_t x821 = -1;
volatile uint64_t t143 = 3719790LLU;
int32_t x840 = INT32_MAX;
static int8_t x851 = INT8_MIN;
uint64_t t151 = 3262224482816057513LLU;
int64_t x881 = 18196LL;
static volatile int32_t x884 = -107;
int64_t t154 = 86560142380222LL;
static int64_t x885 = INT64_MIN;
volatile int8_t x886 = 9;
volatile uint64_t x887 = 469573504866794334LLU;
static int32_t x900 = 7395;
int64_t t157 = -1279738086972630LL;
volatile int32_t x905 = -1;
volatile int64_t x921 = INT64_MIN;
int16_t x928 = 0;
uint32_t x945 = UINT32_MAX;
static int8_t x952 = INT8_MIN;
static int64_t x954 = 87391401LL;
volatile int16_t x955 = INT16_MIN;
uint16_t x958 = UINT16_MAX;
volatile uint64_t t169 = 317LLU;
int8_t x986 = 0;
volatile int16_t x990 = 11;
volatile int8_t x991 = 3;
static uint32_t x1003 = 13204490U;
int32_t x1009 = 55;
uint64_t t177 = 130669534LLU;
int64_t t178 = -7958LL;
volatile int64_t x1025 = INT64_MIN;
volatile uint64_t x1031 = UINT64_MAX;
static uint64_t t181 = 464LLU;
int64_t t182 = -3LL;
int64_t t183 = -1789262LL;
volatile uint16_t x1042 = 1U;
int64_t x1048 = 668LL;
int64_t t185 = -1842175628LL;
static uint64_t x1052 = UINT64_MAX;
static uint16_t x1057 = 61U;
uint8_t x1061 = UINT8_MAX;
int8_t x1067 = 51;
volatile int8_t x1068 = INT8_MAX;
volatile int32_t t189 = 3152;
static int16_t x1073 = INT16_MAX;
volatile uint32_t x1084 = 19992U;
volatile int64_t x1085 = -1LL;
int64_t t193 = 4113036LL;
static int16_t x1095 = -2;
int8_t x1102 = INT8_MAX;
volatile uint64_t t197 = 93733245926420LLU;
uint32_t x1113 = 20999966U;
volatile uint32_t t198 = 1679U;
uint8_t x1119 = 10U;
static int8_t x1120 = INT8_MIN;


void f0(void) {
    	static uint8_t x9 = UINT8_MAX;
	int8_t x10 = INT8_MIN;
	volatile int16_t x11 = INT16_MIN;
	uint64_t x12 = 2118660558LLU;
	uint64_t t0 = 54425LLU;

    t0 = (x9^(x10+(x11*x12)));

    if (t0 != 18446674649440386943LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x13 = -1;
	volatile uint64_t x15 = 422366618842630LLU;
	int16_t x16 = INT16_MIN;
	static volatile uint64_t t1 = 179012338765473773LLU;

    t1 = (x13^(x14+(x15*x16)));

    if (t1 != 13840109366235267072LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x17 = 75LLU;
	static int8_t x18 = 0;
	int16_t x19 = INT16_MIN;
	int8_t x20 = 21;
	volatile uint64_t t2 = 16686497500741675LLU;

    t2 = (x17^(x18+(x19*x20)));

    if (t2 != 18446744073708863563LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x21 = -1;
	uint64_t x22 = 2643035193393LLU;
	static int64_t x24 = -64410LL;
	uint64_t t3 = 5LLU;

    t3 = (x21^(x22+(x23*x24)));

    if (t3 != 18446741463596048292LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x33 = UINT32_MAX;
	volatile int32_t x34 = INT32_MIN;
	static int64_t x35 = -1LL;
	int64_t t4 = -11942564LL;

    t4 = (x33^(x34+(x35*x36)));

    if (t4 != -2147483522LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x37 = -1;
	uint8_t x38 = 3U;
	uint32_t x39 = UINT32_MAX;
	int64_t x40 = -1LL;

    t5 = (x37^(x38+(x39*x40)));

    if (t5 != 4294967291LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x45 = 492607655849LLU;
	int32_t x46 = 28246;
	uint32_t x47 = 17411278U;

    t6 = (x45^(x46+(x47*x48)));

    if (t6 != 492731613217LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x49 = 974759826LLU;
	int64_t x50 = 384613345LL;
	int8_t x52 = INT8_MAX;
	uint64_t t7 = 2662097783LLU;

    t7 = (x49^(x50+(x51*x52)));

    if (t7 != 754261232LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x53 = -57668851974767LL;
	int8_t x54 = -1;
	int8_t x55 = 0;
	int32_t x56 = 0;
	int64_t t8 = -2623557LL;

    t8 = (x53^(x54+(x55*x56)));

    if (t8 != 57668851974766LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x57 = INT32_MIN;
	volatile int16_t x59 = -5000;
	volatile int64_t t9 = 1726367404201LL;

    t9 = (x57^(x58+(x59*x60)));

    if (t9 != -2147478776LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x61 = 62109259U;
	uint8_t x62 = 28U;
	volatile int16_t x63 = -1;
	uint32_t t10 = 33U;

    t10 = (x61^(x62+(x63*x64)));

    if (t10 != 4232885846U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x65 = INT32_MAX;
	int32_t x66 = -477519547;
	int8_t x68 = -50;
	static volatile int32_t t11 = 280;

    t11 = (x65^(x66+(x67*x68)));

    if (t11 != -1669963952) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x70 = UINT32_MAX;
	int16_t x72 = INT16_MIN;

    t12 = (x69^(x70+(x71*x72)));

    if (t12 != 48275239211432816LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x81 = -49676222;
	int32_t x82 = INT32_MAX;
	uint32_t x84 = UINT32_MAX;
	uint32_t t13 = 139134U;

    t13 = (x81^(x82+(x83*x84)));

    if (t13 != 2197127234U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x86 = 1055156755;
	int16_t x87 = INT16_MAX;
	uint8_t x88 = UINT8_MAX;

    t14 = (x85^(x86+(x87*x88)));

    if (t14 != 1063512369) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x93 = -3;
	static int16_t x94 = -1;
	int32_t x95 = 856024;
	volatile uint32_t x96 = 104301196U;

    t15 = (x93^(x94+(x95*x96)));

    if (t15 != 3748111842U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x98 = 2;
	int16_t x100 = 13;

    t16 = (x97^(x98+(x99*x100)));

    if (t16 != -11) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x105 = 1U;
	uint8_t x106 = 64U;
	volatile int8_t x107 = INT8_MIN;
	int16_t x108 = -1;

    t17 = (x105^(x106+(x107*x108)));

    if (t17 != 193U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x109 = -1LL;
	int16_t x110 = INT16_MAX;
	static volatile int64_t x111 = 82281057125157251LL;
	volatile int64_t t18 = -11493286126378928LL;

    t18 = (x109^(x110+(x111*x112)));

    if (t18 != 822810571251539742LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x113 = -3;
	int64_t x115 = -1020566LL;
	int16_t x116 = INT16_MIN;

    t19 = (x113^(x114+(x115*x116)));

    if (t19 != 18446744040267644920LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x117 = 29276;
	int64_t x118 = -1LL;
	int16_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t20 = 7289420219775746LL;

    t20 = (x117^(x118+(x119*x120)));

    if (t20 != -29348LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x125 = 253LLU;
	volatile int16_t x126 = -1;
	uint32_t x127 = 165U;
	uint32_t x128 = 1U;
	static volatile uint64_t t21 = 165706LLU;

    t21 = (x125^(x126+(x127*x128)));

    if (t21 != 89LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x129 = UINT16_MAX;
	static int8_t x130 = INT8_MIN;
	static int8_t x132 = INT8_MAX;
	static volatile uint32_t t22 = 806093419U;

    t22 = (x129^(x130+(x131*x132)));

    if (t22 != 64393U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x133 = 73LL;
	int32_t x134 = INT32_MIN;
	int64_t x135 = 327LL;
	static volatile uint16_t x136 = 15046U;
	volatile int64_t t23 = -90690234141LL;

    t23 = (x133^(x134+(x135*x136)));

    if (t23 != -2142563677LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x137 = INT16_MAX;
	volatile int32_t x138 = -1;
	uint32_t x139 = 77U;
	volatile uint32_t t24 = 54934959U;

    t24 = (x137^(x138+(x139*x140)));

    if (t24 != 4294934605U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x141 = UINT8_MAX;
	volatile int32_t x142 = INT32_MAX;
	uint32_t x143 = 3698U;
	int64_t x144 = 856723647056LL;
	static int64_t t25 = 1LL;

    t25 = (x141^(x142+(x143*x144)));

    if (t25 != 3168166194296672LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x145 = 1U;
	static uint32_t x146 = UINT32_MAX;
	int8_t x147 = INT8_MIN;
	uint16_t x148 = 453U;

    t26 = (x145^(x146+(x147*x148)));

    if (t26 != 4294909310U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x153 = 6365136286LL;
	uint8_t x156 = UINT8_MAX;
	int64_t t27 = 183046891440836LL;

    t27 = (x153^(x154+(x155*x156)));

    if (t27 != -1669015485726081230LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x157 = 96;
	int16_t x158 = -11;
	int16_t x159 = INT16_MAX;
	volatile uint8_t x160 = 9U;

    t28 = (x157^(x158+(x159*x160)));

    if (t28 != 294796) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x165 = -1;
	int8_t x166 = 13;
	static int64_t x168 = -1LL;
	int64_t t29 = 110319854576210137LL;

    t29 = (x165^(x166+(x167*x168)));

    if (t29 != 312LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x169 = -1;
	static int32_t x170 = INT32_MAX;
	uint32_t x171 = 57240U;
	volatile int16_t x172 = INT16_MIN;
	uint32_t t30 = 312638911U;

    t30 = (x169^(x170+(x171*x172)));

    if (t30 != 4023123968U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x178 = INT64_MIN;
	volatile uint16_t x179 = UINT16_MAX;
	uint16_t x180 = 1606U;
	int64_t t31 = 748207091879962LL;

    t31 = (x177^(x178+(x179*x180)));

    if (t31 != -9223372036749526352LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x181 = -1LL;
	int8_t x182 = INT8_MAX;
	int8_t x183 = -1;
	volatile int8_t x184 = -2;

    t32 = (x181^(x182+(x183*x184)));

    if (t32 != -130LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x185 = 10;
	volatile uint16_t x187 = UINT16_MAX;
	uint32_t t33 = 0U;

    t33 = (x185^(x186+(x187*x188)));

    if (t33 != 4294901768U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x189 = -4;
	uint8_t x190 = 3U;
	volatile uint8_t x191 = 0U;
	uint32_t x192 = 329463301U;
	uint32_t t34 = UINT32_MAX;

    t34 = (x189^(x190+(x191*x192)));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x193 = 363U;
	static int8_t x194 = 49;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MIN;
	int32_t t35 = -7106;

    t35 = (x193^(x194+(x195*x196)));

    if (t35 != 4194650) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x197 = INT32_MAX;
	uint64_t x199 = 87803810101LLU;
	static int64_t x200 = -1LL;
	uint64_t t36 = 26590LLU;

    t36 = (x197^(x198+(x199*x200)));

    if (t36 != 18446743987567153461LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x205 = INT8_MAX;
	volatile int16_t x206 = INT16_MAX;
	uint32_t x207 = 67U;
	int32_t x208 = INT32_MAX;
	volatile uint32_t t37 = 810510U;

    t37 = (x205^(x206+(x207*x208)));

    if (t37 != 2147516355U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x209 = INT64_MIN;
	int64_t x211 = -10639552LL;
	int32_t x212 = -439;
	volatile int64_t t38 = 5537LL;

    t38 = (x209^(x210+(x211*x212)));

    if (t38 != -9223372034331496128LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x215 = 55U;
	int16_t x216 = INT16_MIN;
	volatile uint32_t t39 = 135407U;

    t39 = (x213^(x214+(x215*x216)));

    if (t39 != 1802254U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x219 = -1;
	static uint64_t x220 = 43716024744056LLU;
	volatile uint64_t t40 = 0LLU;

    t40 = (x217^(x218+(x219*x220)));

    if (t40 != 9223328320830031841LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x221 = -1;
	int16_t x222 = INT16_MIN;
	static uint8_t x223 = UINT8_MAX;
	uint64_t x224 = UINT64_MAX;

    t41 = (x221^(x222+(x223*x224)));

    if (t41 != 33022LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x226 = INT16_MIN;
	int32_t x227 = -3;
	volatile uint32_t x228 = 890U;

    t42 = (x225^(x226+(x227*x228)));

    if (t42 != -9223372032559843950LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MAX;
	static int64_t x232 = 52LL;
	int64_t t43 = 1440LL;

    t43 = (x229^(x230+(x231*x232)));

    if (t43 != -1669781LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x233 = -1;
	int32_t x234 = INT32_MIN;
	static int64_t x235 = -1LL;
	uint64_t x236 = 118009606LLU;
	static volatile uint64_t t44 = 12866440LLU;

    t44 = (x233^(x234+(x235*x236)));

    if (t44 != 2265493253LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x237 = -972037005492676586LL;
	int8_t x238 = INT8_MAX;
	static volatile uint64_t x239 = UINT64_MAX;
	volatile uint64_t t45 = 66511924343791LLU;

    t45 = (x237^(x238+(x239*x240)));

    if (t45 != 17474707068216875073LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x245 = INT8_MIN;
	volatile uint64_t x246 = UINT64_MAX;
	uint32_t x247 = 2U;
	static uint8_t x248 = 84U;
	volatile uint64_t t46 = 4154417568213786LLU;

    t46 = (x245^(x246+(x247*x248)));

    if (t46 != 18446744073709551399LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x253 = -1;
	static volatile int8_t x254 = INT8_MAX;
	int16_t x255 = INT16_MIN;
	volatile int32_t t47 = 5;

    t47 = (x253^(x254+(x255*x256)));

    if (t47 != 1073708928) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x257 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	static uint32_t x260 = UINT32_MAX;
	volatile uint32_t t48 = 82180379U;

    t48 = (x257^(x258+(x259*x260)));

    if (t48 != 128U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x261 = 3U;
	int32_t x262 = -1;
	uint16_t x264 = 1U;

    t49 = (x261^(x262+(x263*x264)));

    if (t49 != 785705432U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x269 = 1519592LLU;
	int16_t x270 = INT16_MAX;
	int8_t x271 = 25;
	int16_t x272 = INT16_MIN;

    t50 = (x269^(x270+(x271*x272)));

    if (t50 != 18446744073707769879LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x277 = INT8_MIN;
	int16_t x278 = -1;
	int16_t x279 = INT16_MIN;
	uint32_t x280 = 24816U;
	volatile uint32_t t51 = 194445702U;

    t51 = (x277^(x278+(x279*x280)));

    if (t51 != 813170815U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x281 = -1;
	volatile uint16_t x283 = 13U;
	volatile uint32_t t52 = 706847796U;

    t52 = (x281^(x282+(x283*x284)));

    if (t52 != 4291549858U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x285 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t53 = -1857;

    t53 = (x285^(x286+(x287*x288)));

    if (t53 != -1073774591) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x289 = 36;
	uint8_t x291 = 0U;
	static int64_t x292 = -1LL;

    t54 = (x289^(x290+(x291*x292)));

    if (t54 != -9223372036854775772LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x297 = UINT16_MAX;
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = INT8_MIN;
	uint64_t x300 = 168574426940812LLU;
	static uint64_t t55 = 2065198179663523215LLU;

    t55 = (x297^(x298+(x299*x300)));

    if (t55 != 9201794510206387711LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x301 = INT16_MIN;
	static int16_t x302 = -2;
	int8_t x303 = 0;
	static volatile int64_t x304 = INT64_MIN;
	int64_t t56 = 22LL;

    t56 = (x301^(x302+(x303*x304)));

    if (t56 != 32766LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x305 = INT32_MIN;
	uint32_t x306 = 0U;
	int64_t x307 = 2285899154452397LL;
	uint32_t x308 = 3502U;
	volatile int64_t t57 = -34016LL;

    t57 = (x305^(x306+(x307*x308)));

    if (t57 != -8005218838038663018LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x310 = 71U;
	volatile int64_t x311 = 333550487253448LL;

    t58 = (x309^(x310+(x311*x312)));

    if (t58 != -928604556513263138LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x313 = -47956;
	static int16_t x314 = INT16_MAX;
	int32_t x315 = -1;
	static volatile uint64_t t59 = 2172129532217960243LLU;

    t59 = (x313^(x314+(x315*x316)));

    if (t59 != 4940315205415211554LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x325 = INT64_MAX;
	uint8_t x326 = UINT8_MAX;
	volatile int64_t x328 = 931751LL;
	volatile int64_t t60 = -596638085866548083LL;

    t60 = (x325^(x326+(x327*x328)));

    if (t60 != 9223372036736443175LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x329 = INT16_MIN;
	int64_t x330 = 27LL;
	uint16_t x331 = 3U;
	volatile int64_t t61 = 286092977861436572LL;

    t61 = (x329^(x330+(x331*x332)));

    if (t61 != -31976LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x333 = 115923083;
	volatile int8_t x334 = INT8_MAX;
	volatile uint32_t x335 = UINT32_MAX;
	uint32_t t62 = 486393U;

    t62 = (x333^(x334+(x335*x336)));

    if (t62 != 2263406836U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x341 = -94911;
	static int64_t x342 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;
	volatile uint16_t x344 = 4U;

    t63 = (x341^(x342+(x343*x344)));

    if (t63 != 9223372036854681277LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x345 = INT16_MIN;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = 1;
	uint16_t x348 = UINT16_MAX;
	static volatile int32_t t64 = 39;

    t64 = (x345^(x346+(x347*x348)));

    if (t64 != -98306) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x358 = INT32_MIN;
	int64_t x359 = 22808988LL;
	int8_t x360 = INT8_MAX;
	int64_t t65 = 142742215293476LL;

    t65 = (x357^(x358+(x359*x360)));

    if (t65 != 749257840LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x365 = INT16_MIN;
	static volatile int16_t x366 = 206;
	uint32_t x367 = 116652510U;
	volatile uint32_t t66 = 121U;

    t66 = (x365^(x366+(x367*x368)));

    if (t66 != 3923807102U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x369 = INT8_MIN;
	int32_t x370 = 180544776;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = -1;
	volatile uint32_t t67 = 212777415U;

    t67 = (x369^(x370+(x371*x372)));

    if (t67 != 4114422409U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x373 = -1LL;
	static int32_t x374 = INT32_MIN;
	volatile int32_t x375 = INT32_MAX;
	int32_t x376 = 0;
	int64_t t68 = 170620146762LL;

    t68 = (x373^(x374+(x375*x376)));

    if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x377 = 5U;
	uint16_t x378 = UINT16_MAX;
	int64_t x380 = 491463618LL;

    t69 = (x377^(x378+(x379*x380)));

    if (t69 != -491398088LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x385 = 651LLU;
	static uint8_t x386 = UINT8_MAX;
	int32_t x387 = INT32_MIN;
	volatile uint64_t t70 = 6040LLU;

    t70 = (x385^(x386+(x387*x388)));

    if (t70 != 18438529942313501300LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x389 = 3;
	uint8_t x390 = UINT8_MAX;
	int32_t x392 = INT32_MIN;
	uint32_t t71 = 520014939U;

    t71 = (x389^(x390+(x391*x392)));

    if (t71 != 2147483900U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x394 = INT32_MAX;
	int16_t x395 = 36;
	static volatile uint32_t x396 = 1U;
	static int64_t t72 = 913035684776LL;

    t72 = (x393^(x394+(x395*x396)));

    if (t72 != -9223372034707292125LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x397 = INT64_MIN;
	static int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MAX;
	volatile int16_t x400 = INT16_MIN;
	volatile int64_t t73 = -73717767768664139LL;

    t73 = (x397^(x398+(x399*x400)));

    if (t73 != 9223372035781033984LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x401 = -1;
	static int32_t x402 = INT32_MIN;
	volatile int8_t x403 = -1;
	static int8_t x404 = -5;

    t74 = (x401^(x402+(x403*x404)));

    if (t74 != 2147483642) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x409 = INT64_MIN;
	volatile uint8_t x411 = 2U;
	static int64_t t75 = INT64_MIN;

    t75 = (x409^(x410+(x411*x412)));

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x413 = 17U;
	int64_t x414 = INT64_MAX;
	uint16_t x415 = 1U;
	volatile int64_t t76 = -6266917775630LL;

    t76 = (x413^(x414+(x415*x416)));

    if (t76 != 9223372036854743022LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x417 = INT32_MAX;
	static volatile int64_t x418 = 62LL;
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = 2LL;
	static int64_t t77 = 47LL;

    t77 = (x417^(x418+(x419*x420)));

    if (t77 != 2147352515LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x421 = UINT32_MAX;
	int16_t x422 = INT16_MIN;
	int16_t x423 = -2148;
	int8_t x424 = INT8_MAX;
	static volatile uint32_t t78 = 326727U;

    t78 = (x421^(x422+(x423*x424)));

    if (t78 != 305563U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t t79 = 253U;

    t79 = (x429^(x430+(x431*x432)));

    if (t79 != 2147516671U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x433 = 10263U;
	volatile uint64_t x434 = 20LLU;
	volatile uint8_t x435 = 0U;
	volatile uint32_t x436 = 15U;
	uint64_t t80 = 431645614LLU;

    t80 = (x433^(x434+(x435*x436)));

    if (t80 != 10243LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x438 = INT64_MIN;
	uint8_t x439 = 8U;
	int32_t x440 = 114;
	volatile int64_t t81 = 454552152LL;

    t81 = (x437^(x438+(x439*x440)));

    if (t81 != -9223371013968374312LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x442 = UINT64_MAX;
	volatile uint64_t x443 = 126055459518LLU;
	volatile uint64_t t82 = 150944LLU;

    t82 = (x441^(x442+(x443*x444)));

    if (t82 != 2315170774497350198LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x457 = 62971281LLU;
	static uint64_t x460 = 2433LLU;
	volatile uint64_t t83 = 1074LLU;

    t83 = (x457^(x458+(x459*x460)));

    if (t83 != 9223372034770263441LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x461 = 6756U;
	volatile uint64_t x462 = UINT64_MAX;
	static int8_t x463 = -3;
	int64_t x464 = 0LL;
	uint64_t t84 = 1487822914885805457LLU;

    t84 = (x461^(x462+(x463*x464)));

    if (t84 != 18446744073709544859LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x465 = UINT32_MAX;
	int64_t x467 = 29901180814244LL;
	int16_t x468 = -1616;
	int64_t t85 = 19602566975LL;

    t85 = (x465^(x466+(x467*x468)));

    if (t85 != -48320308627013419LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x469 = 42U;
	int8_t x470 = -58;
	uint16_t x471 = 5U;
	int8_t x472 = -1;
	int32_t t86 = 5094;

    t86 = (x469^(x470+(x471*x472)));

    if (t86 != -21) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x482 = 1302435667354850LLU;
	int16_t x483 = INT16_MIN;
	int32_t x484 = 1;
	volatile uint64_t t87 = 67853154012707057LLU;

    t87 = (x481^(x482+(x483*x484)));

    if (t87 != 1302434080414493LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x489 = INT32_MIN;
	int32_t x490 = -1;
	static int8_t x492 = INT8_MIN;
	static volatile int32_t t88 = -6420171;

    t88 = (x489^(x490+(x491*x492)));

    if (t88 != -2147483521) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x501 = 10LL;
	volatile int8_t x502 = 13;
	int64_t x503 = -39LL;
	int8_t x504 = INT8_MAX;
	volatile int64_t t89 = -135732LL;

    t89 = (x501^(x502+(x503*x504)));

    if (t89 != -4930LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x513 = INT32_MIN;
	uint64_t x514 = 5155161500409LLU;
	int64_t x515 = -1LL;
	uint64_t t90 = 535191950LLU;

    t90 = (x513^(x514+(x515*x516)));

    if (t90 != 18446738918802090745LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x517 = INT16_MAX;
	int64_t x518 = INT64_MIN;
	volatile uint32_t x520 = 77U;
	static int64_t t91 = 20973191816LL;

    t91 = (x517^(x518+(x519*x520)));

    if (t91 != -9223372034684898191LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x521 = 448540U;
	static int8_t x522 = INT8_MAX;
	int8_t x523 = -1;
	static uint64_t x524 = 9061LLU;
	static uint64_t t92 = 3956306LLU;

    t92 = (x521^(x522+(x523*x524)));

    if (t92 != 18446744073709094150LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x529 = 13489789526LL;
	static uint32_t x531 = 1195891U;
	int16_t x532 = 6730;
	volatile int64_t t93 = -40872807059246211LL;

    t93 = (x529^(x530+(x531*x532)));

    if (t93 != 17107901547LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x535 = INT32_MAX;
	volatile uint64_t t94 = 349321094LLU;

    t94 = (x533^(x534+(x535*x536)));

    if (t94 != 879758278LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x538 = INT16_MIN;
	static int8_t x539 = -1;
	volatile int64_t t95 = 120271596949209LL;

    t95 = (x537^(x538+(x539*x540)));

    if (t95 != 32639LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x541 = INT32_MAX;
	int64_t x542 = -213728LL;
	int8_t x543 = INT8_MIN;
	volatile int64_t x544 = -1LL;

    t96 = (x541^(x542+(x543*x544)));

    if (t96 != -2147270049LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	uint16_t x546 = UINT16_MAX;
	int16_t x547 = -1608;
	int64_t x548 = 875599766849LL;
	uint64_t t97 = 5540723011387606085LLU;

    t97 = (x545^(x546+(x547*x548)));

    if (t97 != 1407964425027656LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x557 = -12371;
	int64_t x558 = -1LL;
	int16_t x559 = INT16_MAX;
	int16_t x560 = -1;

    t98 = (x557^(x558+(x559*x560)));

    if (t98 != 20397LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x561 = INT32_MIN;
	int16_t x562 = INT16_MIN;
	int8_t x563 = INT8_MIN;
	int16_t x564 = -1;
	int32_t t99 = -764182547;

    t99 = (x561^(x562+(x563*x564)));

    if (t99 != 2147451008) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x565 = 16145U;
	int8_t x566 = 1;
	volatile uint64_t x567 = 90011147LLU;
	uint64_t t100 = 4LLU;

    t100 = (x565^(x566+(x567*x568)));

    if (t100 != 2340274702LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x569 = INT16_MIN;
	volatile uint8_t x570 = UINT8_MAX;
	static volatile uint16_t x571 = 27743U;
	static volatile int8_t x572 = -1;
	static int32_t t101 = 26164017;

    t101 = (x569^(x570+(x571*x572)));

    if (t101 != 5280) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x573 = 10275U;
	int64_t x574 = -1LL;
	static int64_t x575 = 20897LL;
	int16_t x576 = INT16_MIN;
	static volatile int64_t t102 = 2280822706283887400LL;

    t102 = (x573^(x574+(x575*x576)));

    if (t102 != -684763172LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x581 = INT8_MAX;
	int8_t x582 = -15;
	uint16_t x583 = UINT16_MAX;
	int32_t x584 = -1;
	static volatile int32_t t103 = 1884;

    t103 = (x581^(x582+(x583*x584)));

    if (t103 != -65651) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x585 = -1;
	volatile int32_t x587 = -1;
	static int64_t t104 = -41322LL;

    t104 = (x585^(x586+(x587*x588)));

    if (t104 != 33440646033273148LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x589 = -1LL;
	static int32_t x590 = INT32_MIN;
	int64_t x591 = -79218890356827LL;
	uint16_t x592 = 215U;

    t105 = (x589^(x590+(x591*x592)));

    if (t105 != 17032063574201452LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x597 = -681272497971720LL;
	uint64_t x599 = 987LLU;
	uint32_t x600 = 6172U;

    t106 = (x597^(x598+(x599*x600)));

    if (t106 != 18446062805504208395LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x609 = -1;
	int32_t x610 = INT32_MAX;
	int64_t x611 = -1LL;
	int16_t x612 = INT16_MIN;
	volatile int64_t t107 = -21235LL;

    t107 = (x609^(x610+(x611*x612)));

    if (t107 != -2147516416LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x613 = 21825U;
	static int32_t x614 = 424;
	static int32_t x615 = -1;
	int8_t x616 = -1;
	volatile uint32_t t108 = 0U;

    t108 = (x613^(x614+(x615*x616)));

    if (t108 != 21736U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x617 = INT16_MIN;
	int32_t x618 = -2616829;
	volatile int64_t x619 = -1LL;
	int64_t t109 = -2769901LL;

    t109 = (x617^(x618+(x619*x620)));

    if (t109 != 2593411LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x621 = 1371054063028319LLU;
	int32_t x622 = INT32_MIN;
	uint64_t x623 = UINT64_MAX;
	int16_t x624 = INT16_MAX;
	static uint64_t t110 = 45971644156LLU;

    t110 = (x621^(x622+(x623*x624)));

    if (t110 != 18445373017499011166LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x625 = -1LL;
	int16_t x626 = INT16_MIN;
	int32_t x627 = 140080737;

    t111 = (x625^(x626+(x627*x628)));

    if (t111 != 32767LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x629 = INT16_MIN;
	int32_t x630 = INT32_MIN;
	uint64_t x631 = 290152513644959360LLU;
	uint8_t x632 = 5U;
	volatile uint64_t t112 = 15467066LLU;

    t112 = (x629^(x630+(x631*x632)));

    if (t112 != 16995981507632263296LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x637 = -52;
	static int32_t x638 = INT32_MAX;
	uint16_t x639 = 949U;
	volatile uint32_t x640 = UINT32_MAX;
	static volatile uint32_t t113 = 107U;

    t113 = (x637^(x638+(x639*x640)));

    if (t113 != 2147484550U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x642 = -1LL;
	int64_t x643 = -20LL;
	int8_t x644 = INT8_MAX;
	volatile uint64_t t114 = 1436444677533429881LLU;

    t114 = (x641^(x642+(x643*x644)));

    if (t114 != 2540LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x645 = -1;
	int8_t x646 = INT8_MIN;
	int8_t x647 = INT8_MIN;
	int16_t x648 = 2;
	volatile int32_t t115 = 90576;

    t115 = (x645^(x646+(x647*x648)));

    if (t115 != 383) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x649 = INT16_MAX;
	volatile uint32_t x650 = UINT32_MAX;
	uint64_t x652 = UINT64_MAX;
	static uint64_t t116 = 9599749615523840LLU;

    t116 = (x649^(x650+(x651*x652)));

    if (t116 != 4294934529LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x657 = -216058;
	volatile int32_t x658 = 1573875;
	int16_t x659 = -116;
	uint64_t x660 = 0LLU;
	volatile uint64_t t117 = 13747LLU;

    t117 = (x657^(x658+(x659*x660)));

    if (t117 != 18446744073707763701LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x681 = 548207543777920LLU;
	int64_t x682 = 62717613033340135LL;
	int8_t x683 = INT8_MIN;
	int8_t x684 = -1;
	static uint64_t t118 = 3313815LLU;

    t118 = (x681^(x682+(x683*x684)));

    if (t118 != 62808234694264807LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x685 = INT32_MAX;
	uint8_t x686 = UINT8_MAX;
	uint32_t x687 = 30883U;
	uint32_t t119 = 1131888097U;

    t119 = (x685^(x686+(x687*x688)));

    if (t119 != 2139608227U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x697 = INT32_MIN;
	int16_t x698 = -1;
	volatile uint16_t x699 = 4U;
	int32_t x700 = 431414020;
	int32_t t120 = 864464997;

    t120 = (x697^(x698+(x699*x700)));

    if (t120 != -421827569) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x701 = 79251879582366LLU;
	int32_t x702 = -1561005;
	int64_t x704 = -6808635423421279LL;
	uint64_t t121 = 5924684998911LLU;

    t121 = (x701^(x702+(x703*x704)));

    if (t121 != 17581968262640347308LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x705 = INT64_MAX;
	int16_t x706 = -186;
	volatile uint64_t x707 = 2LLU;

    t122 = (x705^(x706+(x707*x708)));

    if (t122 != 9223372036854779979LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x712 = 32293835003LLU;
	volatile uint64_t t123 = 78760367LLU;

    t123 = (x709^(x710+(x711*x712)));

    if (t123 != 18446735838781621396LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x713 = 27U;
	int8_t x714 = INT8_MIN;
	int16_t x715 = -1;
	volatile uint8_t x716 = UINT8_MAX;
	uint32_t t124 = 3176U;

    t124 = (x713^(x714+(x715*x716)));

    if (t124 != 4294966938U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x717 = INT64_MIN;
	int8_t x718 = -1;
	int16_t x719 = 1;
	int64_t t125 = -19209658195626LL;

    t125 = (x717^(x718+(x719*x720)));

    if (t125 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x721 = INT16_MIN;
	int16_t x722 = INT16_MAX;
	uint8_t x724 = UINT8_MAX;
	int32_t t126 = 571843389;

    t126 = (x721^(x722+(x723*x724)));

    if (t126 != -256) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x725 = INT64_MIN;
	volatile int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MIN;
	uint16_t x728 = 1U;
	volatile int64_t t127 = -23758LL;

    t127 = (x725^(x726+(x727*x728)));

    if (t127 != 9223372036854742912LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x737 = 0;
	uint64_t x738 = UINT64_MAX;
	static int8_t x739 = INT8_MAX;
	static uint64_t x740 = UINT64_MAX;
	volatile uint64_t t128 = 103353953719LLU;

    t128 = (x737^(x738+(x739*x740)));

    if (t128 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x746 = 6U;
	volatile uint64_t x747 = UINT64_MAX;
	int64_t x748 = INT64_MIN;
	static uint64_t t129 = 3981330051675979053LLU;

    t129 = (x745^(x746+(x747*x748)));

    if (t129 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x749 = -1LL;
	static volatile int8_t x751 = INT8_MIN;
	int16_t x752 = -1;
	static volatile int64_t t130 = 1LL;

    t130 = (x749^(x750+(x751*x752)));

    if (t130 != -128LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x753 = INT32_MAX;
	uint64_t x754 = 4010786580138LLU;
	uint32_t x755 = 5625634U;
	uint64_t t131 = 646LLU;

    t131 = (x753^(x754+(x755*x756)));

    if (t131 != 4009755435271LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x757 = INT32_MIN;
	int32_t x758 = INT32_MIN;
	uint8_t x759 = 23U;
	volatile uint8_t x760 = 1U;
	int32_t t132 = -326326;

    t132 = (x757^(x758+(x759*x760)));

    if (t132 != 23) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x761 = INT16_MIN;
	volatile int16_t x762 = 1;
	volatile int8_t x763 = 3;
	volatile uint64_t x764 = 1210285678LLU;
	static uint64_t t133 = 100LLU;

    t133 = (x761^(x762+(x763*x764)));

    if (t133 != 18446744070078724939LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x765 = UINT16_MAX;
	uint64_t x766 = UINT64_MAX;
	uint32_t x767 = 21U;
	static uint8_t x768 = UINT8_MAX;
	volatile uint64_t t134 = 5393623961598LLU;

    t134 = (x765^(x766+(x767*x768)));

    if (t134 != 60181LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x770 = 738;
	static int16_t x771 = -1;
	static uint8_t x772 = 1U;
	volatile int32_t t135 = 306;

    t135 = (x769^(x770+(x771*x772)));

    if (t135 != 16158) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x773 = INT64_MIN;
	static volatile uint32_t x774 = UINT32_MAX;
	int64_t t136 = -239494283575LL;

    t136 = (x773^(x774+(x775*x776)));

    if (t136 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x778 = 3885323U;
	uint64_t x779 = 960509639496039LLU;
	uint64_t x780 = 64877786444414645LLU;
	volatile uint64_t t137 = 496850092LLU;

    t137 = (x777^(x778+(x779*x780)));

    if (t137 != 16548505767473912941LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x785 = -16;
	uint64_t x786 = 14577585871LLU;
	static uint32_t x788 = UINT32_MAX;
	uint64_t t138 = 8063911819525464LLU;

    t138 = (x785^(x786+(x787*x788)));

    if (t138 != 18446744056984482080LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x797 = 12421LLU;
	int8_t x798 = INT8_MAX;
	uint64_t x799 = UINT64_MAX;
	volatile uint16_t x800 = 15277U;
	static uint64_t t139 = 15LLU;

    t139 = (x797^(x798+(x799*x800)));

    if (t139 != 18446744073709548631LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x805 = UINT64_MAX;
	uint32_t x806 = 3867U;
	int8_t x807 = INT8_MIN;
	static int16_t x808 = INT16_MIN;

    t140 = (x805^(x806+(x807*x808)));

    if (t140 != 18446744073705353444LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x813 = -14;
	uint32_t x814 = 745991U;
	int8_t x815 = INT8_MIN;
	static volatile int16_t x816 = -1;
	uint32_t t141 = 410643204U;

    t141 = (x813^(x814+(x815*x816)));

    if (t141 != 4294221173U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x817 = -1LL;
	int64_t x818 = -1LL;
	volatile int16_t x819 = -1;
	volatile uint64_t t142 = 6582738LLU;

    t142 = (x817^(x818+(x819*x820)));

    if (t142 != 3452101219017507083LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x822 = INT8_MIN;
	int16_t x823 = 16014;
	uint64_t x824 = 45168281153881LLU;

    t143 = (x821^(x822+(x823*x824)));

    if (t143 != 17723419219311301409LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x833 = 5474U;
	static int16_t x834 = -8260;
	uint16_t x835 = 36U;
	uint32_t x836 = UINT32_MAX;
	volatile uint32_t t144 = 0U;

    t144 = (x833^(x834+(x835*x836)));

    if (t144 != 4294953722U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x837 = 27732U;
	int64_t x838 = 1988370LL;
	int32_t x839 = -1;
	volatile int64_t t145 = 8164489080LL;

    t145 = (x837^(x838+(x839*x840)));

    if (t145 != -2145502393LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x841 = INT64_MIN;
	int32_t x842 = -1;
	uint8_t x843 = 34U;
	int16_t x844 = -147;
	int64_t t146 = -1078322LL;

    t146 = (x841^(x842+(x843*x844)));

    if (t146 != 9223372036854770809LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int8_t x845 = 15;
	volatile int64_t x846 = INT64_MAX;
	uint8_t x847 = UINT8_MAX;
	volatile int16_t x848 = INT16_MIN;
	volatile int64_t t147 = 88LL;

    t147 = (x845^(x846+(x847*x848)));

    if (t147 != 9223372036846419952LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x849 = UINT16_MAX;
	int16_t x850 = -5;
	volatile uint32_t x852 = UINT32_MAX;
	static volatile uint32_t t148 = 8623722U;

    t148 = (x849^(x850+(x851*x852)));

    if (t148 != 65412U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x853 = INT16_MIN;
	int64_t x854 = INT64_MIN;
	uint64_t x855 = 7495135009LLU;
	uint64_t x856 = 307552282827576729LLU;
	volatile uint64_t t149 = 499LLU;

    t149 = (x853^(x854+(x855*x856)));

    if (t149 != 15412936579028033465LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x861 = 0;
	volatile int32_t x862 = -53487;
	int16_t x863 = INT16_MAX;
	volatile int32_t x864 = -1;
	volatile int32_t t150 = 1;

    t150 = (x861^(x862+(x863*x864)));

    if (t150 != -86254) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x869 = 8U;
	uint8_t x870 = UINT8_MAX;
	int64_t x871 = INT64_MAX;
	uint64_t x872 = 84280LLU;

    t151 = (x869^(x870+(x871*x872)));

    if (t151 != 18446744073709467599LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x873 = UINT64_MAX;
	static int32_t x874 = INT32_MAX;
	static int16_t x875 = INT16_MIN;
	int8_t x876 = INT8_MAX;
	static uint64_t t152 = 222494335124LLU;

    t152 = (x873^(x874+(x875*x876)));

    if (t152 != 18446744071566229504LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x877 = INT32_MIN;
	volatile uint8_t x878 = UINT8_MAX;
	static int8_t x879 = 3;
	static int32_t x880 = -388;
	volatile int32_t t153 = -214;

    t153 = (x877^(x878+(x879*x880)));

    if (t153 != 2147482739) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x882 = INT32_MIN;
	int64_t x883 = -967723635LL;

    t154 = (x881^(x882+(x883*x884)));

    if (t154 != 101398960389LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x888 = -1;
	uint64_t t155 = 928034LLU;

    t155 = (x885^(x886+(x887*x888)));

    if (t155 != 8753798531987981483LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x889 = UINT64_MAX;
	volatile int32_t x890 = -1;
	int16_t x891 = INT16_MAX;
	int8_t x892 = -1;
	static volatile uint64_t t156 = 28LLU;

    t156 = (x889^(x890+(x891*x892)));

    if (t156 != 32767LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x897 = 9U;
	int64_t x898 = INT64_MAX;
	int8_t x899 = 0;

    t157 = (x897^(x898+(x899*x900)));

    if (t157 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x906 = -1LL;
	static uint8_t x907 = UINT8_MAX;
	int16_t x908 = INT16_MIN;
	volatile int64_t t158 = 105491LL;

    t158 = (x905^(x906+(x907*x908)));

    if (t158 != 8355840LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x909 = UINT8_MAX;
	int16_t x910 = INT16_MAX;
	uint8_t x911 = UINT8_MAX;
	static volatile int32_t x912 = 880089;
	int32_t t159 = 56179634;

    t159 = (x909^(x910+(x911*x912)));

    if (t159 != 224455641) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x913 = INT64_MAX;
	int64_t x914 = INT64_MIN;
	int8_t x915 = INT8_MAX;
	uint8_t x916 = 0U;
	volatile int64_t t160 = -94329211588LL;

    t160 = (x913^(x914+(x915*x916)));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x922 = INT64_MIN;
	int8_t x923 = -1;
	int8_t x924 = -1;
	int64_t t161 = -50LL;

    t161 = (x921^(x922+(x923*x924)));

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x925 = 0U;
	volatile uint64_t x926 = UINT64_MAX;
	int8_t x927 = INT8_MIN;
	uint64_t t162 = UINT64_MAX;

    t162 = (x925^(x926+(x927*x928)));

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x933 = INT8_MAX;
	static uint8_t x934 = 24U;
	static int32_t x935 = -1;
	static int8_t x936 = INT8_MIN;
	static volatile int32_t t163 = 272424;

    t163 = (x933^(x934+(x935*x936)));

    if (t163 != 231) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x946 = UINT16_MAX;
	static int8_t x947 = 23;
	uint64_t x948 = UINT64_MAX;
	uint64_t t164 = 14LLU;

    t164 = (x945^(x946+(x947*x948)));

    if (t164 != 4294901783LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x949 = UINT8_MAX;
	volatile int64_t x950 = INT64_MIN;
	int8_t x951 = -42;
	int64_t t165 = -700297249539224843LL;

    t165 = (x949^(x950+(x951*x952)));

    if (t165 != -9223372036854770177LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x953 = 13LL;
	static int16_t x956 = -1;
	int64_t t166 = -99637421789980LL;

    t166 = (x953^(x954+(x955*x956)));

    if (t166 != 87424164LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x957 = INT16_MIN;
	static uint32_t x959 = UINT32_MAX;
	volatile int32_t x960 = INT32_MIN;
	uint32_t t167 = 1993691U;

    t167 = (x957^(x958+(x959*x960)));

    if (t167 != 2147450879U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x965 = 14115U;
	volatile int32_t x966 = INT32_MIN;
	int32_t x967 = INT32_MAX;
	volatile int64_t x968 = -1LL;
	volatile int64_t t168 = -606746962LL;

    t168 = (x965^(x966+(x967*x968)));

    if (t168 != -4294953182LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x977 = -1;
	int64_t x978 = -1LL;
	int8_t x979 = INT8_MAX;
	uint64_t x980 = UINT64_MAX;

    t169 = (x977^(x978+(x979*x980)));

    if (t169 != 127LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x985 = 115;
	volatile uint8_t x987 = UINT8_MAX;
	static int16_t x988 = INT16_MIN;
	int32_t t170 = 999;

    t170 = (x985^(x986+(x987*x988)));

    if (t170 != -8355725) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x989 = 68U;
	volatile int16_t x992 = INT16_MAX;
	static int32_t t171 = -139;

    t171 = (x989^(x990+(x991*x992)));

    if (t171 != 98380) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x993 = INT64_MAX;
	int16_t x994 = -1;
	uint64_t x995 = 2964406LLU;
	int8_t x996 = INT8_MIN;
	static uint64_t t172 = 881304545378691LLU;

    t172 = (x993^(x994+(x995*x996)));

    if (t172 != 9223372037234219776LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x997 = -1;
	volatile int32_t x998 = INT32_MIN;
	int16_t x999 = -1;
	int16_t x1000 = -21;
	volatile int32_t t173 = 3101428;

    t173 = (x997^(x998+(x999*x1000)));

    if (t173 != 2147483626) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1001 = INT8_MIN;
	static int16_t x1002 = -2221;
	volatile int32_t x1004 = -862934125;
	uint32_t t174 = 34920U;

    t174 = (x1001^(x1002+(x1003*x1004)));

    if (t174 != 953360529U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1005 = UINT16_MAX;
	uint64_t x1006 = 13863716783011440LLU;
	volatile uint64_t x1007 = UINT64_MAX;
	int64_t x1008 = -14530114392476238LL;
	volatile uint64_t t175 = 208697365256799344LLU;

    t175 = (x1005^(x1006+(x1007*x1008)));

    if (t175 != 28393831175552833LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1010 = INT8_MAX;
	static int32_t x1011 = -2320543;
	int16_t x1012 = -1;
	int32_t t176 = 1226;

    t176 = (x1009^(x1010+(x1011*x1012)));

    if (t176 != 2320681) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1013 = UINT8_MAX;
	int64_t x1014 = INT64_MIN;
	uint64_t x1015 = UINT64_MAX;
	uint32_t x1016 = 1401606875U;

    t177 = (x1013^(x1014+(x1015*x1016)));

    if (t177 != 9223372035453169114LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1017 = -1LL;
	static int16_t x1018 = INT16_MIN;
	int16_t x1019 = 6;
	int64_t x1020 = 167403190LL;

    t178 = (x1017^(x1018+(x1019*x1020)));

    if (t178 != -1004386373LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x1021 = INT8_MAX;
	int8_t x1022 = INT8_MIN;
	uint8_t x1023 = 11U;
	volatile int32_t x1024 = 1121030;
	volatile int32_t t179 = 41305834;

    t179 = (x1021^(x1022+(x1023*x1024)));

    if (t179 != 12331197) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1026 = 13U;
	uint64_t x1027 = 1LLU;
	int32_t x1028 = -240471830;
	volatile uint64_t t180 = 894LLU;

    t180 = (x1025^(x1026+(x1027*x1028)));

    if (t180 != 9223372036614303991LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1029 = 14U;
	int8_t x1030 = INT8_MIN;
	uint8_t x1032 = UINT8_MAX;

    t181 = (x1029^(x1030+(x1031*x1032)));

    if (t181 != 18446744073709551247LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1033 = 57U;
	static volatile int16_t x1034 = INT16_MAX;
	int64_t x1035 = -1LL;
	int32_t x1036 = -2535913;

    t182 = (x1033^(x1034+(x1035*x1036)));

    if (t182 != 2568657LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1037 = INT64_MAX;
	uint8_t x1038 = UINT8_MAX;
	int16_t x1039 = 96;
	int8_t x1040 = 58;

    t183 = (x1037^(x1038+(x1039*x1040)));

    if (t183 != 9223372036854769984LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x1041 = 1;
	volatile int64_t x1043 = 1943LL;
	static volatile int8_t x1044 = INT8_MAX;
	static volatile int64_t t184 = 4364162751LL;

    t184 = (x1041^(x1042+(x1043*x1044)));

    if (t184 != 246763LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1045 = UINT8_MAX;
	uint16_t x1046 = 857U;
	static volatile int16_t x1047 = 2;

    t185 = (x1045^(x1046+(x1047*x1048)));

    if (t185 != 2158LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1049 = 13LLU;
	int32_t x1050 = -1;
	int16_t x1051 = -1;
	volatile uint64_t t186 = 760311110593LLU;

    t186 = (x1049^(x1050+(x1051*x1052)));

    if (t186 != 13LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x1058 = 209;
	uint8_t x1059 = 1U;
	static uint16_t x1060 = 0U;
	int32_t t187 = 25804759;

    t187 = (x1057^(x1058+(x1059*x1060)));

    if (t187 != 236) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x1062 = INT64_MIN;
	volatile uint64_t x1063 = 271528729481LLU;
	volatile int16_t x1064 = INT16_MIN;
	volatile uint64_t t188 = 462390409886LLU;

    t188 = (x1061^(x1062+(x1063*x1064)));

    if (t188 != 9214474583447142655LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1065 = 62;
	uint16_t x1066 = 580U;

    t189 = (x1065^(x1066+(x1067*x1068)));

    if (t189 != 7087) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1074 = UINT32_MAX;
	uint32_t x1075 = 26648736U;
	uint16_t x1076 = 28412U;
	static volatile uint32_t t190 = 91U;

    t190 = (x1073^(x1074+(x1075*x1076)));

    if (t190 != 1229628032U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x1077 = -1;
	int32_t x1078 = INT32_MIN;
	static int16_t x1079 = INT16_MAX;
	uint32_t x1080 = UINT32_MAX;
	uint32_t t191 = 108316329U;

    t191 = (x1077^(x1078+(x1079*x1080)));

    if (t191 != 2147516414U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1081 = 0;
	int16_t x1082 = INT16_MIN;
	static uint8_t x1083 = 54U;
	uint32_t t192 = 38340U;

    t192 = (x1081^(x1082+(x1083*x1084)));

    if (t192 != 1046800U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1086 = 21;
	static int32_t x1087 = -46595;
	uint8_t x1088 = UINT8_MAX;

    t193 = (x1085^(x1086+(x1087*x1088)));

    if (t193 != 11881703LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1089 = UINT8_MAX;
	uint8_t x1090 = 124U;
	uint16_t x1091 = 0U;
	uint64_t x1092 = 5862LLU;
	volatile uint64_t t194 = 140632370LLU;

    t194 = (x1089^(x1090+(x1091*x1092)));

    if (t194 != 131LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x1093 = 84;
	static uint16_t x1094 = 2U;
	volatile uint64_t x1096 = 586LLU;
	uint64_t t195 = 104592LLU;

    t195 = (x1093^(x1094+(x1095*x1096)));

    if (t195 != 18446744073709550394LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1097 = -9456;
	int8_t x1098 = INT8_MIN;
	int64_t x1099 = -12LL;
	int16_t x1100 = -6992;
	static int64_t t196 = 1LL;

    t196 = (x1097^(x1098+(x1099*x1100)));

    if (t196 != -91056LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1101 = 3177;
	uint64_t x1103 = 871LLU;
	volatile int64_t x1104 = -3139514345497LL;

    t197 = (x1101^(x1102+(x1103*x1104)));

    if (t197 != 18444009556714626841LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1114 = -1;
	uint32_t x1115 = UINT32_MAX;
	int8_t x1116 = -1;

    t198 = (x1113^(x1114+(x1115*x1116)));

    if (t198 != 20999966U) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x1117 = 17513226LLU;
	int16_t x1118 = -1;
	static volatile uint64_t t199 = 1LLU;

    t199 = (x1117^(x1118+(x1119*x1120)));

    if (t199 != 18446744073692037621LLU) { NG(); } else { ; }
	
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

