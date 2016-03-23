
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

uint16_t x11 = 0U;
volatile int32_t t4 = 198678;
uint32_t x42 = 1005421U;
int16_t x43 = -881;
static volatile int32_t t10 = -1;
static int64_t x50 = INT64_MIN;
int32_t t11 = 1;
uint64_t x58 = 123595380913LLU;
int16_t x61 = -24;
static int8_t x64 = INT8_MIN;
int64_t x69 = INT64_MAX;
int32_t t15 = INT32_MAX;
int16_t x73 = -1;
uint64_t x83 = 5919447701531240LLU;
uint8_t x87 = 3U;
static uint16_t x88 = UINT16_MAX;
uint64_t x101 = 435299983699LLU;
int8_t x103 = INT8_MAX;
static volatile int8_t x113 = INT8_MIN;
volatile int64_t x114 = -13862899LL;
int8_t x117 = INT8_MIN;
static int32_t t25 = 4;
int32_t x130 = 185337910;
int16_t x132 = -4451;
uint16_t x136 = UINT16_MAX;
int16_t x140 = 86;
int32_t x149 = INT32_MAX;
int32_t t30 = -90247245;
int16_t x155 = -1;
volatile int32_t t32 = INT32_MAX;
uint32_t x164 = 38149028U;
uint32_t t33 = 95454U;
int64_t x172 = INT64_MIN;
volatile int8_t x173 = INT8_MIN;
int64_t t36 = -923950622966065732LL;
volatile uint8_t x180 = 1U;
int32_t x184 = INT32_MIN;
int16_t x187 = -1;
static int32_t t39 = -4725;
volatile uint32_t x193 = 96444U;
int32_t t41 = -199191;
uint32_t x198 = 14U;
uint64_t x203 = UINT64_MAX;
static volatile int64_t x204 = -1LL;
static int16_t x209 = -1;
int32_t x213 = INT32_MIN;
uint64_t x218 = UINT64_MAX;
int16_t x226 = INT16_MIN;
volatile uint8_t x229 = 35U;
static int32_t x232 = INT32_MIN;
int32_t t50 = -50419880;
static uint32_t x237 = UINT32_MAX;
int32_t t51 = 8186548;
int8_t x245 = -1;
int32_t t53 = -30458;
uint64_t x251 = 80766636543LLU;
int16_t x264 = INT16_MIN;
int32_t t58 = 92531188;
volatile int32_t x272 = INT32_MAX;
volatile int16_t x273 = 12;
int16_t x280 = 936;
uint64_t t62 = 750933259LLU;
volatile int8_t x291 = INT8_MIN;
uint16_t x293 = 7U;
uint64_t x295 = 14510232LLU;
volatile int64_t x301 = INT64_MIN;
volatile int32_t x304 = INT32_MIN;
volatile int32_t t68 = -15;
uint8_t x315 = 43U;
volatile int32_t t73 = 2;
volatile int8_t x339 = 7;
uint64_t x340 = 2071460068463LLU;
static uint64_t t74 = UINT64_MAX;
volatile int8_t x341 = INT8_MIN;
int8_t x354 = INT8_MIN;
int64_t x360 = INT64_MIN;
static volatile int64_t t79 = -7484LL;
volatile int64_t x368 = INT64_MIN;
uint8_t x385 = 65U;
uint32_t x386 = 57U;
int32_t x397 = INT32_MAX;
uint16_t x398 = UINT16_MAX;
volatile int8_t x399 = INT8_MIN;
int32_t x401 = INT32_MIN;
volatile uint32_t t87 = 104664U;
uint16_t x411 = 193U;
uint32_t x417 = UINT32_MAX;
static volatile uint64_t t91 = 5397060386994LLU;
volatile int32_t x424 = 401;
int16_t x429 = INT16_MAX;
int16_t x432 = INT16_MAX;
volatile uint64_t t95 = 21323LLU;
static int16_t x437 = INT16_MAX;
volatile uint64_t x438 = 84404752289LLU;
static int64_t t96 = 102603484101914LL;
int32_t x447 = -1;
int16_t x450 = -1;
uint16_t x456 = 12U;
volatile uint64_t x457 = 2447420113943409858LLU;
int16_t x460 = 431;
volatile uint64_t x477 = UINT64_MAX;
uint32_t t106 = UINT32_MAX;
volatile uint64_t x482 = 101486655LLU;
volatile uint32_t x484 = UINT32_MAX;
volatile uint32_t t107 = UINT32_MAX;
uint16_t x488 = UINT16_MAX;
int32_t t108 = 12;
volatile uint64_t t110 = 205365994615LLU;
uint8_t x499 = 1U;
int8_t x500 = INT8_MIN;
static int32_t t111 = 514;
static uint32_t x502 = 3382U;
int8_t x503 = -1;
int8_t x504 = INT8_MIN;
volatile int32_t t112 = 3;
volatile int8_t x515 = -1;
int32_t x516 = -339861216;
static int8_t x523 = -1;
int8_t x527 = -1;
int32_t x541 = 0;
volatile int32_t t121 = -4962;
static int32_t x548 = INT32_MIN;
uint32_t x551 = 4027190U;
int8_t x552 = INT8_MIN;
static uint64_t x555 = UINT64_MAX;
int64_t x557 = -1LL;
volatile uint32_t t125 = UINT32_MAX;
uint64_t x567 = UINT64_MAX;
int8_t x568 = -1;
volatile int64_t x570 = INT64_MIN;
int64_t x573 = INT64_MIN;
int64_t x575 = INT64_MAX;
int8_t x577 = INT8_MIN;
int8_t x578 = INT8_MIN;
static uint32_t x585 = 67956U;
int8_t x586 = INT8_MIN;
static volatile uint32_t x587 = 153933533U;
int64_t x588 = 22173LL;
volatile int64_t t132 = 382715LL;
int8_t x589 = INT8_MIN;
int8_t x595 = INT8_MIN;
int64_t t134 = INT64_MAX;
int16_t x615 = 45;
int16_t x618 = INT16_MAX;
static uint8_t x622 = 26U;
uint32_t x624 = UINT32_MAX;
int64_t x625 = 79899LL;
int64_t x629 = -4373019694722600168LL;
int16_t x634 = INT16_MIN;
uint8_t x638 = 44U;
static volatile int16_t x643 = 208;
int64_t x651 = -4575LL;
uint64_t x661 = UINT64_MAX;
int32_t t151 = -391;
int16_t x673 = -3;
static uint32_t x690 = 60762952U;
int32_t x691 = 425177505;
volatile uint32_t x706 = 11495U;
int32_t x710 = -1;
static uint8_t x711 = 2U;
static uint16_t x715 = UINT16_MAX;
int64_t x720 = 781924493080485679LL;
int8_t x723 = INT8_MIN;
int64_t x729 = -1LL;
int8_t x735 = INT8_MIN;
static volatile int32_t t164 = 2037;
static int64_t x737 = INT64_MIN;
static volatile int16_t x739 = 249;
volatile uint64_t x745 = 6LLU;
int8_t x752 = 1;
int8_t x756 = 0;
volatile uint16_t x759 = 24U;
uint64_t x763 = 2195520580LLU;
uint16_t x765 = 13U;
static int64_t x766 = INT64_MIN;
int16_t x771 = -1;
volatile int64_t x777 = -1LL;
volatile uint8_t x780 = 0U;
int8_t x783 = 15;
int32_t t174 = 1;
uint32_t x794 = UINT32_MAX;
volatile int64_t t176 = -591692390040847LL;
volatile int64_t t177 = 29717066935LL;
int8_t x803 = INT8_MIN;
uint32_t x810 = 0U;
static uint8_t x811 = 1U;
int16_t x812 = INT16_MIN;
int32_t t179 = 87851;
volatile int8_t x823 = INT8_MIN;
int64_t t182 = INT64_MAX;
int8_t x833 = 1;
int64_t x839 = 482467305953192LL;
static uint64_t x841 = UINT64_MAX;
uint16_t x843 = 9U;
volatile int32_t t186 = 62961;
int8_t x847 = INT8_MIN;
int16_t x854 = -1;
static int64_t t189 = -13551011LL;
int64_t t190 = -59985952LL;
volatile int8_t x874 = -1;
static int64_t x876 = -1LL;
int8_t x878 = INT8_MAX;
volatile int8_t x879 = -1;
uint64_t x880 = UINT64_MAX;
int16_t x881 = INT16_MAX;
int16_t x885 = INT16_MIN;
static int32_t x887 = 97398;
volatile int16_t x894 = INT16_MIN;
int64_t x900 = INT64_MIN;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	static int16_t x2 = INT16_MIN;
	static uint64_t x3 = UINT64_MAX;
	volatile int64_t x4 = 60178LL;
	static volatile uint64_t t0 = 3190259LLU;

    t0 = (((x1>x2)-x3)|x4);

    if (t0 != 60179LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = -995;
	static uint64_t x10 = 163944477233091779LLU;
	int64_t x12 = -1LL;
	volatile int64_t t1 = 247132872704975LL;

    t1 = (((x9>x10)-x11)|x12);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = 26;
	static int32_t x14 = -1;
	uint32_t x15 = 868121145U;
	int8_t x16 = 12;
	volatile uint32_t t2 = 9412192U;

    t2 = (((x13>x14)-x15)|x16);

    if (t2 != 3426846156U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -6LL;
	int64_t x18 = INT64_MIN;
	int64_t x19 = 10879314134057594LL;
	uint64_t x20 = 136245073058LLU;
	volatile uint64_t t3 = 37LLU;

    t3 = (((x17>x18)-x19)|x20);

    if (t3 != 18435864818368380327LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = 20245;
	int8_t x22 = INT8_MAX;
	int16_t x23 = -1;
	volatile int32_t x24 = -73925;

    t4 = (((x21>x22)-x23)|x24);

    if (t4 != -73925) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x25 = INT16_MIN;
	int8_t x26 = -1;
	volatile int16_t x27 = INT16_MIN;
	int16_t x28 = 1;
	volatile int32_t t5 = -33;

    t5 = (((x25>x26)-x27)|x28);

    if (t5 != 32769) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = 2;
	int64_t x30 = INT64_MIN;
	uint32_t x31 = 4U;
	int32_t x32 = 17853;
	static volatile uint32_t t6 = 1260788224U;

    t6 = (((x29>x30)-x31)|x32);

    if (t6 != 4294967293U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = 62323310929360LL;
	int8_t x34 = -1;
	static int64_t x35 = -1589573038379186LL;
	uint8_t x36 = 92U;
	volatile int64_t t7 = -121406455LL;

    t7 = (((x33>x34)-x35)|x36);

    if (t7 != 1589573038379263LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = 1545936;
	uint16_t x38 = UINT16_MAX;
	int16_t x39 = -1;
	volatile int8_t x40 = INT8_MIN;
	static volatile int32_t t8 = -13;

    t8 = (((x37>x38)-x39)|x40);

    if (t8 != -126) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MIN;
	volatile int64_t x44 = INT64_MIN;
	int64_t t9 = -22846548046436LL;

    t9 = (((x41>x42)-x43)|x44);

    if (t9 != -9223372036854774926LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x45 = -2894;
	uint64_t x46 = 250771LLU;
	static volatile int8_t x47 = INT8_MIN;
	volatile int8_t x48 = INT8_MIN;

    t10 = (((x45>x46)-x47)|x48);

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MIN;
	volatile int8_t x51 = 9;
	int16_t x52 = INT16_MIN;

    t11 = (((x49>x50)-x51)|x52);

    if (t11 != -8) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x57 = 1U;
	static int16_t x59 = -299;
	static uint16_t x60 = 457U;
	int32_t t12 = 1;

    t12 = (((x57>x58)-x59)|x60);

    if (t12 != 491) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x62 = -29;
	int64_t x63 = -124212515261LL;
	int64_t t13 = 16390094LL;

    t13 = (((x61>x62)-x63)|x64);

    if (t13 != -66LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x65 = 134631U;
	uint16_t x66 = UINT16_MAX;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MAX;
	int32_t t14 = 5770;

    t14 = (((x65>x66)-x67)|x68);

    if (t14 != -129) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MAX;

    t15 = (((x69>x70)-x71)|x72);

    if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x74 = -1;
	int64_t x75 = -1LL;
	int8_t x76 = INT8_MAX;
	volatile int64_t t16 = -14229617747489445LL;

    t16 = (((x73>x74)-x75)|x76);

    if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = -1;
	int8_t x78 = INT8_MIN;
	static uint32_t x79 = 6049U;
	static int32_t x80 = -1;
	volatile uint32_t t17 = UINT32_MAX;

    t17 = (((x77>x78)-x79)|x80);

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x81 = 100938172866LLU;
	volatile uint64_t x82 = 70721LLU;
	static int8_t x84 = INT8_MIN;
	volatile uint64_t t18 = 741872639510813141LLU;

    t18 = (((x81>x82)-x83)|x84);

    if (t18 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MAX;
	int64_t x86 = INT64_MIN;
	volatile int32_t t19 = 5;

    t19 = (((x85>x86)-x87)|x88);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = 232173;
	volatile int8_t x90 = INT8_MAX;
	static int16_t x91 = INT16_MAX;
	static uint8_t x92 = 3U;
	int32_t t20 = 22;

    t20 = (((x89>x90)-x91)|x92);

    if (t20 != -32765) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = 0;
	int8_t x94 = INT8_MAX;
	uint8_t x95 = 12U;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t21 = -6386438;

    t21 = (((x93>x94)-x95)|x96);

    if (t21 != -12) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = -2660;
	int16_t x98 = -1;
	volatile int8_t x99 = INT8_MIN;
	uint32_t x100 = 2802433U;
	uint32_t t22 = 60550384U;

    t22 = (((x97>x98)-x99)|x100);

    if (t22 != 2802561U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x102 = 829LLU;
	int16_t x104 = 14;
	int32_t t23 = -10209;

    t23 = (((x101>x102)-x103)|x104);

    if (t23 != -114) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x115 = INT16_MAX;
	int16_t x116 = 97;
	static int32_t t24 = 61457595;

    t24 = (((x113>x114)-x115)|x116);

    if (t24 != -32669) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x118 = INT32_MAX;
	volatile uint16_t x119 = UINT16_MAX;
	int16_t x120 = -1;

    t25 = (((x117>x118)-x119)|x120);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = INT8_MAX;
	static int16_t x131 = INT16_MIN;
	static int32_t t26 = 821;

    t26 = (((x129>x130)-x131)|x132);

    if (t26 != -4451) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x133 = INT32_MIN;
	int8_t x134 = -5;
	uint16_t x135 = UINT16_MAX;
	int32_t t27 = 20592;

    t27 = (((x133>x134)-x135)|x136);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	static int16_t x139 = INT16_MIN;
	static int32_t t28 = -14;

    t28 = (((x137>x138)-x139)|x140);

    if (t28 != 32854) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x141 = -66477195120LL;
	uint32_t x142 = 3454562U;
	int8_t x143 = -8;
	int32_t x144 = -1;
	int32_t t29 = 292467;

    t29 = (((x141>x142)-x143)|x144);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MAX;
	int32_t x152 = -2922;

    t30 = (((x149>x150)-x151)|x152);

    if (t30 != -106) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x153 = 14211490450423864LL;
	int64_t x154 = 261049LL;
	uint8_t x156 = 24U;
	int32_t t31 = 7;

    t31 = (((x153>x154)-x155)|x156);

    if (t31 != 26) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x157 = 82;
	volatile int16_t x158 = INT16_MAX;
	int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MAX;

    t32 = (((x157>x158)-x159)|x160);

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x161 = UINT32_MAX;
	volatile int32_t x162 = INT32_MIN;
	static int16_t x163 = INT16_MIN;

    t33 = (((x161>x162)-x163)|x164);

    if (t33 != 38181797U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MAX;
	volatile int16_t x167 = INT16_MIN;
	uint8_t x168 = 3U;
	volatile int32_t t34 = 1063258878;

    t34 = (((x165>x166)-x167)|x168);

    if (t34 != 32771) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x169 = -1;
	uint8_t x170 = 15U;
	int16_t x171 = INT16_MIN;
	static int64_t t35 = 4226390921052LL;

    t35 = (((x169>x170)-x171)|x172);

    if (t35 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x174 = 3648U;
	volatile int64_t x175 = INT64_MAX;
	static volatile int16_t x176 = -1;

    t36 = (((x173>x174)-x175)|x176);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x177 = 41U;
	int32_t x178 = INT32_MAX;
	volatile int16_t x179 = -1187;
	int32_t t37 = 1788087;

    t37 = (((x177>x178)-x179)|x180);

    if (t37 != 1187) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x181 = INT16_MIN;
	volatile int32_t x182 = -1;
	int16_t x183 = 10066;
	int32_t t38 = -964665;

    t38 = (((x181>x182)-x183)|x184);

    if (t38 != -10066) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x185 = 91890126U;
	uint16_t x186 = UINT16_MAX;
	uint16_t x188 = 7158U;

    t39 = (((x185>x186)-x187)|x188);

    if (t39 != 7158) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x189 = INT8_MAX;
	static uint16_t x190 = 74U;
	int64_t x191 = INT64_MAX;
	int16_t x192 = INT16_MIN;
	int64_t t40 = -964838067061034436LL;

    t40 = (((x189>x190)-x191)|x192);

    if (t40 != -32766LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x194 = 3289648LLU;
	int32_t x195 = INT32_MAX;
	int16_t x196 = 7341;

    t41 = (((x193>x194)-x195)|x196);

    if (t41 != -2147476307) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x197 = INT32_MIN;
	int64_t x199 = -14799LL;
	int32_t x200 = -1;
	static volatile int64_t t42 = -5LL;

    t42 = (((x197>x198)-x199)|x200);

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x201 = INT8_MAX;
	static int16_t x202 = INT16_MIN;
	volatile uint64_t t43 = UINT64_MAX;

    t43 = (((x201>x202)-x203)|x204);

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x210 = UINT64_MAX;
	int32_t x211 = -1;
	uint8_t x212 = 1U;
	int32_t t44 = -34;

    t44 = (((x209>x210)-x211)|x212);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x214 = 1;
	int8_t x215 = -1;
	uint8_t x216 = 119U;
	int32_t t45 = 8;

    t45 = (((x213>x214)-x215)|x216);

    if (t45 != 119) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x217 = 24U;
	int64_t x219 = 6089317LL;
	volatile uint64_t x220 = 2727LLU;
	volatile uint64_t t46 = 0LLU;

    t46 = (((x217>x218)-x219)|x220);

    if (t46 != 18446744073703464895LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x221 = INT16_MAX;
	int8_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = INT64_MIN;
	int64_t t47 = -11205475LL;

    t47 = (((x221>x222)-x223)|x224);

    if (t47 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x225 = 67164746050706502LL;
	static int32_t x227 = INT32_MAX;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t48 = -44464492209957600LL;

    t48 = (((x225>x226)-x227)|x228);

    if (t48 != -2147483646LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x230 = UINT32_MAX;
	static int8_t x231 = INT8_MIN;
	int32_t t49 = -215026;

    t49 = (((x229>x230)-x231)|x232);

    if (t49 != -2147483520) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x233 = -1;
	volatile int64_t x234 = INT64_MIN;
	volatile uint8_t x235 = UINT8_MAX;
	int32_t x236 = INT32_MIN;

    t50 = (((x233>x234)-x235)|x236);

    if (t50 != -254) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x238 = 0U;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = 32U;

    t51 = (((x237>x238)-x239)|x240);

    if (t51 != 161) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x241 = -15;
	int16_t x242 = -2;
	int8_t x243 = INT8_MAX;
	int64_t x244 = -785913LL;
	int64_t t52 = -88228448871750LL;

    t52 = (((x241>x242)-x243)|x244);

    if (t52 != -121LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x246 = -1469364;
	int16_t x247 = -2622;
	int16_t x248 = -320;

    t53 = (((x245>x246)-x247)|x248);

    if (t53 != -257) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x249 = INT64_MIN;
	volatile int32_t x250 = -5;
	int16_t x252 = -1;
	uint64_t t54 = UINT64_MAX;

    t54 = (((x249>x250)-x251)|x252);

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	int8_t x255 = -11;
	volatile int64_t x256 = INT64_MIN;
	volatile int64_t t55 = 18214986LL;

    t55 = (((x253>x254)-x255)|x256);

    if (t55 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x257 = UINT16_MAX;
	int16_t x258 = INT16_MAX;
	uint64_t x259 = 409438136401LLU;
	volatile int8_t x260 = INT8_MIN;
	volatile uint64_t t56 = 170859LLU;

    t56 = (((x257>x258)-x259)|x260);

    if (t56 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x261 = UINT8_MAX;
	int8_t x262 = 0;
	uint64_t x263 = 27832436674334918LLU;
	static volatile uint64_t t57 = 61673393LLU;

    t57 = (((x261>x262)-x263)|x264);

    if (t57 != 18446744073709547323LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x265 = UINT32_MAX;
	uint32_t x266 = 554U;
	int16_t x267 = -1;
	static int16_t x268 = -19;

    t58 = (((x265>x266)-x267)|x268);

    if (t58 != -17) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x269 = 7345377;
	int64_t x270 = INT64_MIN;
	static int16_t x271 = -11706;
	volatile int32_t t59 = INT32_MAX;

    t59 = (((x269>x270)-x271)|x272);

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x274 = INT32_MAX;
	uint64_t x275 = 7289228104793532560LLU;
	uint16_t x276 = 13158U;
	volatile uint64_t t60 = 13115LLU;

    t60 = (((x273>x274)-x275)|x276);

    if (t60 != 11157515968916027254LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x277 = 0U;
	int8_t x278 = -1;
	static int16_t x279 = 1;
	int32_t t61 = -160;

    t61 = (((x277>x278)-x279)|x280);

    if (t61 != 936) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x281 = -1;
	int8_t x282 = INT8_MIN;
	uint64_t x283 = 50758487931026759LLU;
	int16_t x284 = INT16_MIN;

    t62 = (((x281>x282)-x283)|x284);

    if (t62 != 18446744073709519546LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x289 = 36;
	int16_t x290 = INT16_MAX;
	static int8_t x292 = 9;
	int32_t t63 = -132163658;

    t63 = (((x289>x290)-x291)|x292);

    if (t63 != 137) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x294 = UINT16_MAX;
	int32_t x296 = INT32_MAX;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (((x293>x294)-x295)|x296);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MIN;
	volatile int8_t x299 = 5;
	int8_t x300 = INT8_MIN;
	volatile int32_t t65 = -3;

    t65 = (((x297>x298)-x299)|x300);

    if (t65 != -4) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x302 = INT16_MIN;
	int8_t x303 = -1;
	volatile int32_t t66 = 240868;

    t66 = (((x301>x302)-x303)|x304);

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x305 = 119955621U;
	uint16_t x306 = UINT16_MAX;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = 3;
	volatile uint64_t t67 = 64660LLU;

    t67 = (((x305>x306)-x307)|x308);

    if (t67 != 3LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x309 = -1LL;
	static int8_t x310 = -1;
	volatile int32_t x311 = 40;
	int32_t x312 = INT32_MAX;

    t68 = (((x309>x310)-x311)|x312);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x313 = -1;
	int16_t x314 = -1457;
	int32_t x316 = INT32_MIN;
	volatile int32_t t69 = 252774;

    t69 = (((x313>x314)-x315)|x316);

    if (t69 != -42) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x317 = -1;
	volatile int64_t x318 = 5133478473143LL;
	int8_t x319 = INT8_MIN;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t70 = 455;

    t70 = (((x317>x318)-x319)|x320);

    if (t70 != -32640) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x321 = 755285524U;
	uint16_t x322 = UINT16_MAX;
	int64_t x323 = INT64_MAX;
	int8_t x324 = 1;
	volatile int64_t t71 = -4467802233524688LL;

    t71 = (((x321>x322)-x323)|x324);

    if (t71 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 100802U;
	uint32_t x327 = 9672U;
	int16_t x328 = 16356;
	uint32_t t72 = 2678443U;

    t72 = (((x325>x326)-x327)|x328);

    if (t72 != 4294967293U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x329 = UINT16_MAX;
	uint32_t x330 = 36547U;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = 4586U;

    t73 = (((x329>x330)-x331)|x332);

    if (t73 != 37355) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x337 = -2398;
	int32_t x338 = INT32_MAX;

    t74 = (((x337>x338)-x339)|x340);

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x342 = 71771557U;
	int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MIN;
	int64_t t75 = 1723243LL;

    t75 = (((x341>x342)-x343)|x344);

    if (t75 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x345 = INT16_MAX;
	int16_t x346 = 14;
	int16_t x347 = -15;
	uint8_t x348 = 6U;
	int32_t t76 = 7996;

    t76 = (((x345>x346)-x347)|x348);

    if (t76 != 22) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x349 = -36;
	volatile uint8_t x350 = 2U;
	int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t77 = 265867758;

    t77 = (((x349>x350)-x351)|x352);

    if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x353 = 37LLU;
	static uint32_t x355 = 183043U;
	volatile int16_t x356 = 1;
	static uint32_t t78 = 520414310U;

    t78 = (((x353>x354)-x355)|x356);

    if (t78 != 4294784253U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x357 = 7345U;
	volatile int16_t x358 = INT16_MIN;
	int64_t x359 = -500188LL;

    t79 = (((x357>x358)-x359)|x360);

    if (t79 != -9223372036854275619LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x361 = -1;
	static int16_t x362 = -1;
	int64_t x363 = INT64_MAX;
	static int32_t x364 = 2217;
	volatile int64_t t80 = 15478972052512176LL;

    t80 = (((x361>x362)-x363)|x364);

    if (t80 != -9223372036854773591LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x365 = INT32_MAX;
	int16_t x366 = 1495;
	int16_t x367 = INT16_MIN;
	int64_t t81 = 61549LL;

    t81 = (((x365>x366)-x367)|x368);

    if (t81 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x369 = -1;
	static int8_t x370 = -1;
	uint32_t x371 = 854507337U;
	static int32_t x372 = -218;
	static volatile uint32_t t82 = 131926836U;

    t82 = (((x369>x370)-x371)|x372);

    if (t82 != 4294967223U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint32_t x381 = UINT32_MAX;
	static uint64_t x382 = 168506250619LLU;
	int64_t x383 = INT64_MAX;
	uint64_t x384 = 7082321308320825452LLU;
	static uint64_t t83 = 555016740861706837LLU;

    t83 = (((x381>x382)-x383)|x384);

    if (t83 != 16305693345175601261LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x387 = -1;
	static uint64_t x388 = 250850LLU;
	static uint64_t t84 = 109669990LLU;

    t84 = (((x385>x386)-x387)|x388);

    if (t84 != 250850LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x393 = -21;
	int16_t x394 = 3;
	static uint8_t x395 = UINT8_MAX;
	static int64_t x396 = -59099LL;
	volatile int64_t t85 = -50239021755300643LL;

    t85 = (((x393>x394)-x395)|x396);

    if (t85 != -219LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x400 = INT16_MIN;
	static volatile int32_t t86 = 79420426;

    t86 = (((x397>x398)-x399)|x400);

    if (t86 != -32639) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x402 = INT8_MIN;
	uint32_t x403 = UINT32_MAX;
	uint32_t x404 = 520962782U;

    t87 = (((x401>x402)-x403)|x404);

    if (t87 != 520962783U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x405 = -1;
	volatile int32_t x406 = INT32_MIN;
	uint64_t x407 = 128343380194472LLU;
	int16_t x408 = INT16_MIN;
	static uint64_t t88 = 375LLU;

    t88 = (((x405>x406)-x407)|x408);

    if (t88 != 18446744073709521753LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x409 = UINT8_MAX;
	static volatile int8_t x410 = INT8_MAX;
	uint32_t x412 = 416028678U;
	volatile uint32_t t89 = 3U;

    t89 = (((x409>x410)-x411)|x412);

    if (t89 != 4294967110U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x413 = UINT16_MAX;
	static int16_t x414 = -3;
	uint32_t x415 = 61U;
	int8_t x416 = 0;
	volatile uint32_t t90 = 65476732U;

    t90 = (((x413>x414)-x415)|x416);

    if (t90 != 4294967236U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x418 = INT64_MAX;
	int8_t x419 = INT8_MIN;
	uint64_t x420 = 23008833586311LLU;

    t91 = (((x417>x418)-x419)|x420);

    if (t91 != 23008833586311LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x421 = 1;
	volatile int8_t x422 = INT8_MAX;
	uint64_t x423 = 41245866LLU;
	uint64_t t92 = 4221291690640198LLU;

    t92 = (((x421>x422)-x423)|x424);

    if (t92 != 18446744073668305879LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x425 = -6;
	int64_t x426 = INT64_MAX;
	int8_t x427 = 60;
	int8_t x428 = INT8_MIN;
	volatile int32_t t93 = 1;

    t93 = (((x425>x426)-x427)|x428);

    if (t93 != -60) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x430 = -1;
	uint32_t x431 = 773414227U;
	volatile uint32_t t94 = 334852U;

    t94 = (((x429>x430)-x431)|x432);

    if (t94 != 3521576959U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x433 = -948;
	volatile int8_t x434 = INT8_MAX;
	uint16_t x435 = UINT16_MAX;
	uint64_t x436 = 647LLU;

    t95 = (((x433>x434)-x435)|x436);

    if (t95 != 18446744073709486727LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x439 = -1LL;
	static volatile int32_t x440 = INT32_MIN;

    t96 = (((x437>x438)-x439)|x440);

    if (t96 != -2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x441 = INT8_MAX;
	uint64_t x442 = 3548400252LLU;
	volatile uint64_t x443 = 383912676858306159LLU;
	int8_t x444 = INT8_MAX;
	uint64_t t97 = 288976LLU;

    t97 = (((x441>x442)-x443)|x444);

    if (t97 != 18062831396851245567LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x445 = INT32_MAX;
	uint8_t x446 = UINT8_MAX;
	int16_t x448 = INT16_MIN;
	int32_t t98 = 855364481;

    t98 = (((x445>x446)-x447)|x448);

    if (t98 != -32766) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x449 = 6210U;
	int8_t x451 = INT8_MIN;
	int8_t x452 = INT8_MAX;
	volatile int32_t t99 = -16212520;

    t99 = (((x449>x450)-x451)|x452);

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x453 = INT64_MIN;
	int16_t x454 = -1;
	int16_t x455 = 1;
	volatile int32_t t100 = 959167812;

    t100 = (((x453>x454)-x455)|x456);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x458 = INT64_MIN;
	int8_t x459 = -1;
	int32_t t101 = -161860093;

    t101 = (((x457>x458)-x459)|x460);

    if (t101 != 431) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x461 = -1512;
	volatile int16_t x462 = -1;
	int32_t x463 = -1;
	uint64_t x464 = 31331246LLU;
	static volatile uint64_t t102 = 20095LLU;

    t102 = (((x461>x462)-x463)|x464);

    if (t102 != 31331247LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x465 = 87;
	int16_t x466 = INT16_MIN;
	volatile uint64_t x467 = UINT64_MAX;
	int8_t x468 = 1;
	volatile uint64_t t103 = 4380LLU;

    t103 = (((x465>x466)-x467)|x468);

    if (t103 != 3LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x469 = INT32_MIN;
	static int32_t x470 = INT32_MIN;
	int8_t x471 = INT8_MIN;
	static int32_t x472 = 13661627;
	static volatile int32_t t104 = 550590;

    t104 = (((x469>x470)-x471)|x472);

    if (t104 != 13661627) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x473 = -1031527;
	static int64_t x474 = 1LL;
	int8_t x475 = 30;
	int16_t x476 = INT16_MAX;
	int32_t t105 = 415;

    t105 = (((x473>x474)-x475)|x476);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x478 = -1;
	int8_t x479 = INT8_MIN;
	uint32_t x480 = UINT32_MAX;

    t106 = (((x477>x478)-x479)|x480);

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x481 = INT64_MIN;
	int8_t x483 = INT8_MIN;

    t107 = (((x481>x482)-x483)|x484);

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x485 = INT32_MAX;
	int32_t x486 = INT32_MIN;
	int8_t x487 = INT8_MAX;

    t108 = (((x485>x486)-x487)|x488);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x489 = -1;
	uint64_t x490 = UINT64_MAX;
	int32_t x491 = -18304;
	int8_t x492 = INT8_MAX;
	volatile int32_t t109 = -58;

    t109 = (((x489>x490)-x491)|x492);

    if (t109 != 18431) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x493 = INT16_MAX;
	int64_t x494 = 947009055LL;
	uint64_t x495 = UINT64_MAX;
	volatile int16_t x496 = INT16_MIN;

    t110 = (((x493>x494)-x495)|x496);

    if (t110 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x497 = 809;
	int32_t x498 = -104;

    t111 = (((x497>x498)-x499)|x500);

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x501 = -1;

    t112 = (((x501>x502)-x503)|x504);

    if (t112 != -126) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x505 = 610923LL;
	volatile int64_t x506 = INT64_MIN;
	volatile int8_t x507 = 0;
	static volatile int8_t x508 = INT8_MAX;
	int32_t t113 = -10;

    t113 = (((x505>x506)-x507)|x508);

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x509 = INT64_MIN;
	static uint16_t x510 = 10575U;
	volatile int16_t x511 = INT16_MIN;
	volatile int32_t x512 = 3735;
	volatile int32_t t114 = 6946;

    t114 = (((x509>x510)-x511)|x512);

    if (t114 != 36503) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x513 = -14;
	int16_t x514 = 114;
	int32_t t115 = 299;

    t115 = (((x513>x514)-x515)|x516);

    if (t115 != -339861215) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x517 = -5;
	volatile uint32_t x518 = 48185U;
	uint8_t x519 = 1U;
	static int16_t x520 = INT16_MIN;
	static volatile int32_t t116 = -1092;

    t116 = (((x517>x518)-x519)|x520);

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x521 = UINT16_MAX;
	int32_t x522 = -1;
	volatile uint8_t x524 = 16U;
	int32_t t117 = -69910420;

    t117 = (((x521>x522)-x523)|x524);

    if (t117 != 18) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x525 = INT32_MIN;
	volatile int16_t x526 = -1;
	uint64_t x528 = 21762LLU;
	volatile uint64_t t118 = 6338068LLU;

    t118 = (((x525>x526)-x527)|x528);

    if (t118 != 21763LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x529 = -14;
	int16_t x530 = INT16_MAX;
	int16_t x531 = INT16_MAX;
	int8_t x532 = INT8_MIN;
	int32_t t119 = -487119097;

    t119 = (((x529>x530)-x531)|x532);

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x537 = -14;
	int32_t x538 = INT32_MIN;
	int16_t x539 = -1;
	static uint64_t x540 = 85996649837LLU;
	uint64_t t120 = 92581056765951871LLU;

    t120 = (((x537>x538)-x539)|x540);

    if (t120 != 85996649839LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x542 = -1;
	uint8_t x543 = 8U;
	volatile int32_t x544 = INT32_MIN;

    t121 = (((x541>x542)-x543)|x544);

    if (t121 != -7) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x545 = INT16_MIN;
	static volatile int8_t x546 = -1;
	int64_t x547 = INT64_MAX;
	int64_t t122 = 5291482913916LL;

    t122 = (((x545>x546)-x547)|x548);

    if (t122 != -2147483647LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x549 = 284LLU;
	uint8_t x550 = 54U;
	volatile uint32_t t123 = 15889U;

    t123 = (((x549>x550)-x551)|x552);

    if (t123 != 4294967243U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x553 = INT64_MAX;
	int64_t x554 = 104224334579LL;
	uint16_t x556 = 0U;
	uint64_t t124 = 5958680987057115LLU;

    t124 = (((x553>x554)-x555)|x556);

    if (t124 != 2LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x558 = INT64_MIN;
	int32_t x559 = 1;
	uint32_t x560 = UINT32_MAX;

    t125 = (((x557>x558)-x559)|x560);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x561 = INT16_MAX;
	uint16_t x562 = 13878U;
	int8_t x563 = -13;
	volatile uint8_t x564 = 64U;
	volatile int32_t t126 = 27;

    t126 = (((x561>x562)-x563)|x564);

    if (t126 != 78) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x565 = -24668910537554181LL;
	static int16_t x566 = -1;
	uint64_t t127 = UINT64_MAX;

    t127 = (((x565>x566)-x567)|x568);

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x569 = -796;
	static uint64_t x571 = UINT64_MAX;
	static int32_t x572 = -1752926;
	static volatile uint64_t t128 = 152LLU;

    t128 = (((x569>x570)-x571)|x572);

    if (t128 != 18446744073707798690LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x574 = UINT32_MAX;
	uint64_t x576 = 31424709994880LLU;
	volatile uint64_t t129 = 2982656912LLU;

    t129 = (((x573>x574)-x575)|x576);

    if (t129 != 9223403461564770689LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x579 = -1;
	int16_t x580 = INT16_MIN;
	int32_t t130 = 1677;

    t130 = (((x577>x578)-x579)|x580);

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x581 = -91971;
	volatile int32_t x582 = -3726;
	static volatile int64_t x583 = 891943764184LL;
	volatile uint32_t x584 = 6781U;
	volatile int64_t t131 = 25576782303515376LL;

    t131 = (((x581>x582)-x583)|x584);

    if (t131 != -891943764099LL) { NG(); } else { ; }
	
}

void f132(void) {
    

    t132 = (((x585>x586)-x587)|x588);

    if (t132 != 4141055935LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x590 = 11;
	static int32_t x591 = 856784;
	int32_t x592 = -1;
	volatile int32_t t133 = 3774041;

    t133 = (((x589>x590)-x591)|x592);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x593 = INT16_MAX;
	static volatile uint8_t x594 = UINT8_MAX;
	int64_t x596 = INT64_MAX;

    t134 = (((x593>x594)-x595)|x596);

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x597 = -1;
	int16_t x598 = INT16_MAX;
	static int8_t x599 = -3;
	static int64_t x600 = INT64_MAX;
	volatile int64_t t135 = INT64_MAX;

    t135 = (((x597>x598)-x599)|x600);

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x605 = INT8_MIN;
	int32_t x606 = -14011;
	int32_t x607 = -1;
	int32_t x608 = INT32_MAX;
	int32_t t136 = INT32_MAX;

    t136 = (((x605>x606)-x607)|x608);

    if (t136 != INT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x609 = INT32_MIN;
	volatile int16_t x610 = -1;
	uint64_t x611 = 6242096274534LLU;
	uint32_t x612 = 2201U;
	uint64_t t137 = 7789002847147010455LLU;

    t137 = (((x609>x610)-x611)|x612);

    if (t137 != 18446737831613279131LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x613 = -47;
	static volatile int8_t x614 = INT8_MAX;
	int16_t x616 = 6409;
	int32_t t138 = 2554;

    t138 = (((x613>x614)-x615)|x616);

    if (t138 != -37) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x617 = 26;
	int16_t x619 = INT16_MAX;
	static int32_t x620 = INT32_MAX;
	int32_t t139 = 3391214;

    t139 = (((x617>x618)-x619)|x620);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x621 = 10954;
	int64_t x623 = 1863304LL;
	int64_t t140 = 619156LL;

    t140 = (((x621>x622)-x623)|x624);

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x626 = 3U;
	uint32_t x627 = 1435337U;
	static volatile uint64_t x628 = UINT64_MAX;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = (((x625>x626)-x627)|x628);

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x630 = UINT64_MAX;
	static uint64_t x631 = 135512LLU;
	static int64_t x632 = -672648378LL;
	volatile uint64_t t142 = 132295711941016279LLU;

    t142 = (((x629>x630)-x631)|x632);

    if (t142 != 18446744073709420526LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x633 = -1;
	int16_t x635 = -1;
	uint8_t x636 = 115U;
	int32_t t143 = -119;

    t143 = (((x633>x634)-x635)|x636);

    if (t143 != 115) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x637 = INT64_MAX;
	uint16_t x639 = UINT16_MAX;
	static uint8_t x640 = UINT8_MAX;
	volatile int32_t t144 = -1;

    t144 = (((x637>x638)-x639)|x640);

    if (t144 != -65281) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x641 = 13;
	static int32_t x642 = -9588;
	static int32_t x644 = INT32_MAX;
	int32_t t145 = 43;

    t145 = (((x641>x642)-x643)|x644);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x645 = -1;
	uint64_t x646 = UINT64_MAX;
	static int8_t x647 = INT8_MAX;
	static int8_t x648 = INT8_MAX;
	int32_t t146 = 1415056;

    t146 = (((x645>x646)-x647)|x648);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x649 = INT32_MIN;
	static int64_t x650 = INT64_MIN;
	int32_t x652 = -3897;
	static volatile int64_t t147 = -345563263397741LL;

    t147 = (((x649>x650)-x651)|x652);

    if (t147 != -3609LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x657 = UINT8_MAX;
	int32_t x658 = INT32_MIN;
	int8_t x659 = INT8_MAX;
	int16_t x660 = INT16_MIN;
	int32_t t148 = 0;

    t148 = (((x657>x658)-x659)|x660);

    if (t148 != -126) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x662 = -1;
	uint8_t x663 = 105U;
	static int32_t x664 = INT32_MIN;
	volatile int32_t t149 = -302315837;

    t149 = (((x661>x662)-x663)|x664);

    if (t149 != -105) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x665 = -1;
	volatile int8_t x666 = INT8_MAX;
	int8_t x667 = INT8_MAX;
	volatile int8_t x668 = 52;
	volatile int32_t t150 = 3859;

    t150 = (((x665>x666)-x667)|x668);

    if (t150 != -75) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x669 = -1LL;
	static volatile int8_t x670 = -1;
	int32_t x671 = -1;
	static uint8_t x672 = UINT8_MAX;

    t151 = (((x669>x670)-x671)|x672);

    if (t151 != 255) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x674 = INT8_MIN;
	static volatile int32_t x675 = -304598;
	int8_t x676 = -2;
	int32_t t152 = 5834;

    t152 = (((x673>x674)-x675)|x676);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x677 = INT64_MIN;
	int8_t x678 = INT8_MAX;
	volatile int32_t x679 = 24445847;
	static int16_t x680 = -1;
	volatile int32_t t153 = 33648;

    t153 = (((x677>x678)-x679)|x680);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x681 = -1;
	int32_t x682 = 593469507;
	volatile int16_t x683 = INT16_MIN;
	int8_t x684 = INT8_MIN;
	volatile int32_t t154 = -162207194;

    t154 = (((x681>x682)-x683)|x684);

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x689 = INT8_MIN;
	static int16_t x692 = INT16_MIN;
	static int32_t t155 = -7;

    t155 = (((x689>x690)-x691)|x692);

    if (t155 != -12704) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x697 = UINT8_MAX;
	int8_t x698 = INT8_MIN;
	int16_t x699 = -599;
	int16_t x700 = INT16_MAX;
	volatile int32_t t156 = -63869361;

    t156 = (((x697>x698)-x699)|x700);

    if (t156 != 32767) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x705 = 6;
	volatile uint32_t x707 = UINT32_MAX;
	int8_t x708 = -50;
	volatile uint32_t t157 = 1170583489U;

    t157 = (((x705>x706)-x707)|x708);

    if (t157 != 4294967247U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x709 = 114U;
	int32_t x712 = INT32_MAX;
	static volatile int32_t t158 = 42293;

    t158 = (((x709>x710)-x711)|x712);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x713 = 3U;
	static uint32_t x714 = 835066U;
	int8_t x716 = -1;
	int32_t t159 = 556343683;

    t159 = (((x713>x714)-x715)|x716);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x717 = UINT16_MAX;
	volatile uint8_t x718 = 19U;
	int32_t x719 = INT32_MAX;
	volatile int64_t t160 = 3330774LL;

    t160 = (((x717>x718)-x719)|x720);

    if (t160 != -2093129937LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x721 = 1081636597003493LLU;
	uint32_t x722 = 5U;
	int16_t x724 = -20;
	int32_t t161 = -1;

    t161 = (((x721>x722)-x723)|x724);

    if (t161 != -19) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x725 = 2049U;
	int64_t x726 = 785763715642282LL;
	int8_t x727 = -1;
	volatile uint32_t x728 = UINT32_MAX;
	static uint32_t t162 = UINT32_MAX;

    t162 = (((x725>x726)-x727)|x728);

    if (t162 != UINT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x730 = INT64_MIN;
	int16_t x731 = INT16_MIN;
	uint32_t x732 = 61759849U;
	uint32_t t163 = 628786741U;

    t163 = (((x729>x730)-x731)|x732);

    if (t163 != 61792617U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x733 = 2197806217129257579LL;
	int8_t x734 = 31;
	uint8_t x736 = 0U;

    t164 = (((x733>x734)-x735)|x736);

    if (t164 != 129) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x738 = UINT8_MAX;
	int16_t x740 = 267;
	volatile int32_t t165 = -15746417;

    t165 = (((x737>x738)-x739)|x740);

    if (t165 != -241) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x746 = -1276;
	static int16_t x747 = INT16_MIN;
	static volatile int64_t x748 = INT64_MIN;
	volatile int64_t t166 = 2542212LL;

    t166 = (((x745>x746)-x747)|x748);

    if (t166 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x749 = INT64_MIN;
	uint8_t x750 = 3U;
	int16_t x751 = INT16_MIN;
	static int32_t t167 = 155392760;

    t167 = (((x749>x750)-x751)|x752);

    if (t167 != 32769) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x753 = -1;
	int64_t x754 = INT64_MIN;
	static volatile uint32_t x755 = UINT32_MAX;
	static uint32_t t168 = 4778403U;

    t168 = (((x753>x754)-x755)|x756);

    if (t168 != 2U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x757 = -3;
	static int32_t x758 = INT32_MAX;
	static int16_t x760 = INT16_MAX;
	static volatile int32_t t169 = -92389;

    t169 = (((x757>x758)-x759)|x760);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x761 = INT16_MIN;
	int16_t x762 = -1;
	volatile uint64_t x764 = UINT64_MAX;
	uint64_t t170 = UINT64_MAX;

    t170 = (((x761>x762)-x763)|x764);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x767 = UINT64_MAX;
	int8_t x768 = INT8_MAX;
	static uint64_t t171 = 4209367286352628LLU;

    t171 = (((x765>x766)-x767)|x768);

    if (t171 != 127LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint64_t x769 = UINT64_MAX;
	int8_t x770 = INT8_MIN;
	uint32_t x772 = UINT32_MAX;
	volatile uint32_t t172 = UINT32_MAX;

    t172 = (((x769>x770)-x771)|x772);

    if (t172 != UINT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x778 = INT32_MIN;
	int16_t x779 = INT16_MIN;
	volatile int32_t t173 = 438148;

    t173 = (((x777>x778)-x779)|x780);

    if (t173 != 32769) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x781 = INT16_MIN;
	static uint8_t x782 = UINT8_MAX;
	volatile int32_t x784 = -1;

    t174 = (((x781>x782)-x783)|x784);

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x785 = UINT64_MAX;
	uint32_t x786 = 436U;
	volatile uint64_t x787 = 5002709LLU;
	uint8_t x788 = 28U;
	volatile uint64_t t175 = 57085660337852195LLU;

    t175 = (((x785>x786)-x787)|x788);

    if (t175 != 18446744073704548924LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x793 = -1;
	int16_t x795 = -1;
	static int64_t x796 = -1LL;

    t176 = (((x793>x794)-x795)|x796);

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x797 = 11265U;
	volatile int64_t x798 = INT64_MIN;
	uint32_t x799 = UINT32_MAX;
	static int64_t x800 = -1LL;

    t177 = (((x797>x798)-x799)|x800);

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x801 = INT64_MIN;
	int64_t x802 = INT64_MIN;
	int16_t x804 = 848;
	volatile int32_t t178 = -45527973;

    t178 = (((x801>x802)-x803)|x804);

    if (t178 != 976) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x809 = INT8_MIN;

    t179 = (((x809>x810)-x811)|x812);

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x813 = UINT8_MAX;
	int8_t x814 = -1;
	uint16_t x815 = 689U;
	uint64_t x816 = UINT64_MAX;
	uint64_t t180 = UINT64_MAX;

    t180 = (((x813>x814)-x815)|x816);

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x817 = -1LL;
	int16_t x818 = -5632;
	int64_t x819 = 2230196988308329LL;
	static int16_t x820 = INT16_MIN;
	volatile int64_t t181 = -271LL;

    t181 = (((x817>x818)-x819)|x820);

    if (t181 != -27496LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x821 = UINT16_MAX;
	volatile int8_t x822 = INT8_MIN;
	int64_t x824 = INT64_MAX;

    t182 = (((x821>x822)-x823)|x824);

    if (t182 != INT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x825 = 1U;
	int16_t x826 = -504;
	volatile int32_t x827 = 340;
	int16_t x828 = -81;
	volatile int32_t t183 = -38;

    t183 = (((x825>x826)-x827)|x828);

    if (t183 != -81) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x834 = INT8_MIN;
	int64_t x835 = -1LL;
	int8_t x836 = INT8_MIN;
	int64_t t184 = -92709419LL;

    t184 = (((x833>x834)-x835)|x836);

    if (t184 != -126LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x837 = 194523719941350LLU;
	volatile uint16_t x838 = UINT16_MAX;
	static volatile int16_t x840 = -37;
	volatile int64_t t185 = 1853LL;

    t185 = (((x837>x838)-x839)|x840);

    if (t185 != -37LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x842 = UINT32_MAX;
	int8_t x844 = INT8_MIN;

    t186 = (((x841>x842)-x843)|x844);

    if (t186 != -8) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x845 = 38;
	uint8_t x846 = 85U;
	static int8_t x848 = INT8_MAX;
	volatile int32_t t187 = -43766262;

    t187 = (((x845>x846)-x847)|x848);

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x849 = 1227LLU;
	int8_t x850 = INT8_MIN;
	int32_t x851 = INT32_MAX;
	int8_t x852 = -1;
	static volatile int32_t t188 = -28425187;

    t188 = (((x849>x850)-x851)|x852);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x853 = -15732;
	volatile int64_t x855 = 2LL;
	int16_t x856 = -1;

    t189 = (((x853>x854)-x855)|x856);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x861 = 114U;
	static uint16_t x862 = UINT16_MAX;
	int8_t x863 = INT8_MAX;
	int64_t x864 = -14520LL;

    t190 = (((x861>x862)-x863)|x864);

    if (t190 != -55LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x869 = 59U;
	int16_t x870 = INT16_MAX;
	uint8_t x871 = 1U;
	static int16_t x872 = INT16_MIN;
	volatile int32_t t191 = 1;

    t191 = (((x869>x870)-x871)|x872);

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x873 = INT64_MAX;
	int32_t x875 = -1;
	static volatile int64_t t192 = 110202039185232LL;

    t192 = (((x873>x874)-x875)|x876);

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x877 = 8243;
	volatile uint64_t t193 = UINT64_MAX;

    t193 = (((x877>x878)-x879)|x880);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x882 = 40316U;
	int8_t x883 = INT8_MIN;
	uint16_t x884 = 293U;
	int32_t t194 = -9610459;

    t194 = (((x881>x882)-x883)|x884);

    if (t194 != 421) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x886 = 11U;
	int32_t x888 = -13826718;
	int32_t t195 = 147;

    t195 = (((x885>x886)-x887)|x888);

    if (t195 != -30742) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x889 = INT64_MAX;
	int64_t x890 = -1LL;
	static uint32_t x891 = 1692U;
	int16_t x892 = INT16_MAX;
	static volatile uint32_t t196 = UINT32_MAX;

    t196 = (((x889>x890)-x891)|x892);

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x893 = 330LLU;
	uint8_t x895 = 9U;
	volatile int16_t x896 = -1;
	static int32_t t197 = 746357;

    t197 = (((x893>x894)-x895)|x896);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x897 = 51U;
	volatile int16_t x898 = INT16_MIN;
	int8_t x899 = 0;
	volatile int64_t t198 = INT64_MIN;

    t198 = (((x897>x898)-x899)|x900);

    if (t198 != INT64_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x901 = INT16_MAX;
	int16_t x902 = INT16_MIN;
	int8_t x903 = INT8_MAX;
	int32_t x904 = -3;
	int32_t t199 = 0;

    t199 = (((x901>x902)-x903)|x904);

    if (t199 != -1) { NG(); } else { ; }
	
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

