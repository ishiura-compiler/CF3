
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

static int32_t x3 = 12028;
int16_t x5 = INT16_MIN;
int32_t x10 = INT32_MAX;
volatile uint64_t t5 = 21974240696LLU;
int16_t x32 = -29;
int64_t x55 = INT64_MIN;
int8_t x71 = -1;
uint32_t t11 = 558808U;
static int16_t x74 = INT16_MIN;
int8_t x85 = 0;
volatile int32_t x98 = -1;
static int64_t x101 = INT64_MAX;
static uint64_t x111 = 2182957122LLU;
volatile uint64_t t19 = 118089146080557489LLU;
int64_t t20 = -1627086178580227LL;
int64_t x119 = 3714202451717424014LL;
uint64_t t21 = 175LLU;
volatile int32_t x141 = INT32_MIN;
static int64_t x153 = 3076546186696LL;
uint8_t x184 = 0U;
static volatile int8_t x197 = INT8_MAX;
uint64_t x202 = UINT64_MAX;
int64_t t35 = 1LL;
volatile uint8_t x218 = 5U;
int8_t x223 = INT8_MIN;
volatile int64_t t38 = 64903774297200LL;
int16_t x239 = INT16_MIN;
volatile int16_t x240 = 641;
int32_t t39 = 1692000;
volatile uint64_t t40 = 1969258LLU;
static int8_t x247 = INT8_MIN;
uint16_t x251 = 1337U;
static int64_t x252 = 417422LL;
int32_t x254 = INT32_MIN;
volatile uint64_t x255 = 3202457013652586LLU;
int16_t x265 = -1;
static uint8_t x280 = 2U;
int32_t t48 = -804824008;
int8_t x288 = INT8_MAX;
int64_t x291 = -1LL;
static int64_t t51 = -200032LL;
volatile uint32_t x297 = 472723370U;
uint64_t x302 = UINT64_MAX;
int64_t x308 = 141444LL;
int64_t x318 = -1LL;
int16_t x320 = INT16_MIN;
static int8_t x328 = -1;
int32_t t59 = 1040426935;
volatile uint64_t x329 = 29377163715LLU;
volatile uint64_t t60 = 7076094664739LLU;
volatile int16_t x334 = INT16_MAX;
volatile int64_t t61 = -96956982540051LL;
int16_t x337 = INT16_MIN;
static uint8_t x345 = UINT8_MAX;
static volatile int16_t x347 = -1;
static uint32_t t63 = 7017U;
uint8_t x350 = 11U;
uint32_t x351 = 141U;
int8_t x352 = INT8_MAX;
volatile int8_t x354 = INT8_MIN;
int64_t x356 = 113197881084299845LL;
volatile uint64_t x362 = 1372230683769LLU;
int16_t x363 = 1469;
static volatile uint64_t t66 = 16778LLU;
int64_t t67 = -27LL;
int16_t x385 = -1;
int16_t x386 = -314;
int16_t x388 = 199;
int64_t x389 = -1LL;
static int32_t t71 = -489;
uint16_t x401 = 1921U;
uint64_t x405 = 8169920LLU;
volatile uint8_t x408 = 61U;
uint32_t x414 = 2141344U;
uint32_t x418 = 470U;
uint64_t x419 = 20LLU;
int16_t x429 = INT16_MIN;
uint16_t x430 = UINT16_MAX;
static int8_t x431 = INT8_MIN;
int32_t x432 = -1;
uint64_t x436 = 1300963504LLU;
int16_t x440 = INT16_MAX;
int8_t x441 = INT8_MIN;
uint8_t x443 = 0U;
volatile int8_t x446 = -1;
volatile int32_t t83 = -6;
static volatile int64_t x449 = 6445LL;
int32_t x450 = 821;
int32_t x451 = -7;
volatile int8_t x461 = -50;
int8_t x463 = INT8_MIN;
volatile uint64_t t85 = 514630LLU;
volatile int16_t x465 = -1;
volatile int64_t x470 = -1LL;
uint32_t x471 = UINT32_MAX;
uint64_t t88 = 34572066LLU;
int32_t x477 = INT32_MIN;
volatile uint64_t t91 = 17000313LLU;
uint16_t x508 = UINT16_MAX;
uint64_t x509 = 9632LLU;
static uint32_t x516 = 40143U;
volatile uint64_t t95 = 632754442978LLU;
int32_t x525 = INT32_MAX;
uint64_t x550 = 136669LLU;
static volatile int8_t x559 = INT8_MAX;
uint64_t t103 = 102063003327697LLU;
int16_t x565 = INT16_MAX;
uint64_t x567 = 781380083LLU;
static int64_t x569 = INT64_MIN;
volatile int32_t x571 = 254496;
int64_t x572 = INT64_MIN;
int32_t x579 = -1;
uint64_t x588 = 5LLU;
int64_t x592 = 134058619LL;
volatile int64_t t110 = -2118923327568213796LL;
volatile int8_t x597 = INT8_MIN;
static int8_t x599 = INT8_MAX;
volatile int32_t t112 = -465980;
uint64_t x616 = 1064254206212140564LLU;
uint64_t t114 = 53719193LLU;
volatile int16_t x634 = -1;
int32_t t118 = -1330567;
uint64_t t120 = 1135215261766LLU;
int64_t x654 = INT64_MAX;
int32_t x656 = -1;
static int8_t x657 = INT8_MIN;
int32_t x661 = 402017;
int64_t x670 = -398813299006093LL;
int64_t t126 = 525LL;
int64_t x686 = 4170LL;
volatile int64_t t130 = -1LL;
int64_t x696 = INT64_MIN;
int16_t x697 = -1;
uint64_t x699 = 5353949LLU;
int32_t x717 = INT32_MIN;
volatile int64_t t136 = 65555218LL;
volatile int32_t x726 = -1;
int64_t t138 = 39LL;
int64_t x738 = -21367332605848LL;
static uint8_t x739 = UINT8_MAX;
volatile uint64_t t139 = 38306485LLU;
uint32_t t140 = 138U;
volatile int64_t x764 = 0LL;
uint16_t x766 = 23U;
static int64_t t145 = 3698LL;
int64_t x776 = 888273LL;
uint32_t x778 = 18U;
uint32_t t147 = 1964467U;
static int8_t x788 = INT8_MAX;
uint64_t x795 = 10337113265932587LLU;
int32_t x796 = INT32_MAX;
int16_t x799 = INT16_MAX;
int16_t x809 = INT16_MIN;
int8_t x810 = -1;
static int64_t x835 = 1LL;
static int16_t x837 = -1;
uint8_t x840 = 0U;
int64_t x850 = INT64_MAX;
int16_t x851 = -1;
uint64_t x852 = UINT64_MAX;
uint64_t t161 = 49865045LLU;
uint32_t x855 = 877U;
int8_t x866 = INT8_MIN;
int64_t x869 = 53514719849178558LL;
volatile uint16_t x871 = UINT16_MAX;
volatile uint64_t t167 = 554172110870LLU;
volatile uint32_t x887 = UINT32_MAX;
int32_t x888 = INT32_MIN;
int32_t x889 = INT32_MAX;
int32_t x895 = 0;
int16_t x896 = INT16_MIN;
uint32_t x897 = UINT32_MAX;
int16_t x900 = INT16_MIN;
int16_t x902 = INT16_MIN;
static int8_t x904 = -1;
volatile int16_t x906 = 91;
int32_t t173 = -21;
uint64_t x914 = UINT64_MAX;
static int16_t x916 = -89;
uint32_t x920 = 8980U;
int8_t x935 = -12;
uint8_t x953 = 18U;
static int16_t x957 = -580;
static int16_t x958 = INT16_MAX;
static volatile int64_t t183 = -3611411864729665997LL;
uint8_t x964 = UINT8_MAX;
volatile int32_t t185 = 60192442;
int16_t x986 = INT16_MAX;
volatile int16_t x990 = INT16_MIN;
static uint8_t x992 = 57U;
static volatile int64_t x1002 = -342630884817603LL;
volatile int16_t x1005 = 54;
volatile int8_t x1007 = 0;
uint16_t x1008 = UINT16_MAX;
uint32_t x1011 = 181097213U;
static int32_t x1033 = INT32_MAX;
uint16_t x1046 = 4256U;
uint64_t x1047 = 2150799896109LLU;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	static int8_t x2 = INT8_MAX;
	volatile int8_t x4 = -22;
	static int32_t t0 = 8;

    t0 = ((x1|x2)*(x3+x4));

    if (t0 != -12006) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = 5;
	int32_t x7 = 29;
	uint8_t x8 = 18U;
	volatile int32_t t1 = -77532;

    t1 = ((x5|x6)*(x7+x8));

    if (t1 != -1539861) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -59;
	int16_t x11 = 15426;
	static uint8_t x12 = 22U;
	static volatile int32_t t2 = -15165062;

    t2 = ((x9|x10)*(x11+x12));

    if (t2 != -15448) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x17 = INT8_MIN;
	uint8_t x18 = 0U;
	int64_t x19 = -120322LL;
	int8_t x20 = 6;
	int64_t t3 = 10716631597784589LL;

    t3 = ((x17|x18)*(x19+x20));

    if (t3 != 15400448LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -2;
	int16_t x22 = -626;
	static int8_t x23 = -2;
	static int32_t x24 = -1;
	volatile int32_t t4 = -1060;

    t4 = ((x21|x22)*(x23+x24));

    if (t4 != 6) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x25 = UINT64_MAX;
	static int16_t x26 = 1;
	int16_t x27 = INT16_MIN;
	volatile uint32_t x28 = 15U;

    t5 = ((x25|x26)*(x27+x28));

    if (t5 != 18446744069414617073LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x29 = 4U;
	uint8_t x30 = 1U;
	volatile int32_t x31 = 53;
	volatile int32_t t6 = 27622397;

    t6 = ((x29|x30)*(x31+x32));

    if (t6 != 120) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x41 = INT64_MIN;
	int16_t x42 = -168;
	uint8_t x43 = 78U;
	int64_t x44 = 174380LL;
	static volatile int64_t t7 = -4LL;

    t7 = ((x41|x42)*(x43+x44));

    if (t7 != -29308944LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	static int16_t x51 = -1;
	uint64_t x52 = UINT64_MAX;
	uint64_t t8 = 20074LLU;

    t8 = ((x49|x50)*(x51+x52));

    if (t8 != 65536LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x53 = INT32_MIN;
	uint64_t x54 = 927LLU;
	volatile int8_t x56 = INT8_MAX;
	uint64_t t9 = 664846222745LLU;

    t9 = ((x53|x54)*(x55+x56));

    if (t9 != 9223371764124470241LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x57 = INT8_MAX;
	uint8_t x58 = 0U;
	int16_t x59 = -1;
	int16_t x60 = -1;
	int32_t t10 = 22;

    t10 = ((x57|x58)*(x59+x60));

    if (t10 != -254) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x69 = -1;
	static volatile uint32_t x70 = 16U;
	static uint32_t x72 = UINT32_MAX;

    t11 = ((x69|x70)*(x71+x72));

    if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x73 = 82443LL;
	int16_t x75 = INT16_MAX;
	int8_t x76 = INT8_MIN;
	volatile int64_t t12 = -2061LL;

    t12 = ((x73|x74)*(x75+x76));

    if (t12 != -517687179LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x86 = -1;
	int32_t x87 = -7949;
	static uint8_t x88 = 33U;
	static volatile int32_t t13 = 4834;

    t13 = ((x85|x86)*(x87+x88));

    if (t13 != 7916) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x89 = INT16_MIN;
	uint16_t x90 = UINT16_MAX;
	uint8_t x91 = 48U;
	int16_t x92 = INT16_MIN;
	volatile int32_t t14 = 1;

    t14 = ((x89|x90)*(x91+x92));

    if (t14 != 32720) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x93 = INT32_MAX;
	int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	uint8_t x96 = 36U;
	int32_t t15 = -15643;

    t15 = ((x93|x94)*(x95+x96));

    if (t15 != 2147483612) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x97 = 105145828244LLU;
	int64_t x99 = 1936876903755242LL;
	static int8_t x100 = INT8_MIN;
	volatile uint64_t t16 = 682LLU;

    t16 = ((x97|x98)*(x99+x100));

    if (t16 != 18444807196805796502LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x102 = -63;
	uint8_t x103 = 7U;
	int32_t x104 = -1;
	int64_t t17 = -104435060358578407LL;

    t17 = ((x101|x102)*(x103+x104));

    if (t17 != -6LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x105 = 50825961U;
	int8_t x106 = 20;
	volatile uint32_t x107 = UINT32_MAX;
	int8_t x108 = INT8_MIN;
	volatile uint32_t t18 = 4591U;

    t18 = ((x105|x106)*(x107+x108));

    if (t18 != 2033383043U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x109 = INT64_MIN;
	int32_t x110 = -1;
	static volatile uint64_t x112 = 38837142LLU;

    t19 = ((x109|x110)*(x111+x112));

    if (t19 != 18446744071487757352LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x113 = INT32_MAX;
	int8_t x114 = INT8_MIN;
	volatile int8_t x115 = -2;
	int64_t x116 = -32513579894450076LL;

    t20 = ((x113|x114)*(x115+x116));

    if (t20 != 32513579894450078LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MAX;
	uint64_t x120 = UINT64_MAX;

    t21 = ((x117|x118)*(x119+x120));

    if (t21 != 14732541621992127603LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x121 = UINT16_MAX;
	uint8_t x122 = 119U;
	volatile int64_t x123 = -1LL;
	int16_t x124 = INT16_MIN;
	volatile int64_t t22 = 160113501970810LL;

    t22 = ((x121|x122)*(x123+x124));

    if (t22 != -2147516415LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x133 = INT16_MIN;
	int16_t x134 = -3262;
	static volatile int16_t x135 = INT16_MIN;
	uint8_t x136 = 0U;
	volatile int32_t t23 = -669;

    t23 = ((x133|x134)*(x135+x136));

    if (t23 != 106889216) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x137 = INT8_MAX;
	uint32_t x138 = 22U;
	volatile uint32_t x139 = 1263U;
	volatile uint8_t x140 = 0U;
	static volatile uint32_t t24 = 591U;

    t24 = ((x137|x138)*(x139+x140));

    if (t24 != 160401U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x142 = 79356190LL;
	volatile uint8_t x143 = UINT8_MAX;
	int8_t x144 = INT8_MIN;
	int64_t t25 = -38229340407LL;

    t25 = ((x141|x142)*(x143+x144));

    if (t25 != -262652187166LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x149 = 2294795077238550LLU;
	volatile int32_t x150 = INT32_MIN;
	uint16_t x151 = UINT16_MAX;
	volatile int8_t x152 = -1;
	volatile uint64_t t26 = 11158LLU;

    t26 = ((x149|x150)*(x151+x152));

    if (t26 != 18446635677396468180LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x154 = INT8_MIN;
	uint8_t x155 = UINT8_MAX;
	static int8_t x156 = 12;
	volatile int64_t t27 = 65481059LL;

    t27 = ((x153|x154)*(x155+x156));

    if (t27 != -14952LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x157 = 1746;
	volatile int16_t x158 = INT16_MIN;
	int64_t x159 = -1LL;
	static uint32_t x160 = UINT32_MAX;
	int64_t t28 = 65536931579872380LL;

    t28 = ((x157|x158)*(x159+x160));

    if (t28 != -133238475394468LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x165 = 30U;
	int8_t x166 = INT8_MAX;
	uint8_t x167 = 58U;
	static int16_t x168 = 15204;
	static int32_t t29 = -6;

    t29 = ((x165|x166)*(x167+x168));

    if (t29 != 1938274) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x181 = 847766674U;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	volatile uint32_t t30 = 1964355860U;

    t30 = ((x181|x182)*(x183+x184));

    if (t30 != 3154116736U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x185 = -420;
	uint16_t x186 = 0U;
	static int32_t x187 = INT32_MAX;
	int64_t x188 = 3070924604474205LL;
	volatile int64_t t31 = 120299702855230LL;

    t31 = ((x185|x186)*(x187+x188));

    if (t31 != -1289789235822297840LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x193 = -1;
	uint16_t x194 = 6142U;
	uint8_t x195 = UINT8_MAX;
	volatile uint32_t x196 = 110U;
	uint32_t t32 = 4U;

    t32 = ((x193|x194)*(x195+x196));

    if (t32 != 4294966931U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x198 = 2237630203000LL;
	volatile uint64_t x199 = 119860092483829912LLU;
	int64_t x200 = INT64_MIN;
	volatile uint64_t t33 = 5995516LLU;

    t33 = ((x197|x198)*(x199+x200));

    if (t33 != 3962908425936055144LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x201 = UINT16_MAX;
	int32_t x203 = 543586501;
	int64_t x204 = INT64_MIN;
	uint64_t t34 = 2LLU;

    t34 = ((x201|x202)*(x203+x204));

    if (t34 != 9223372036311189307LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x205 = 2;
	uint8_t x206 = 43U;
	int32_t x207 = 60190;
	static volatile int64_t x208 = -3743374LL;

    t35 = ((x205|x206)*(x207+x208));

    if (t35 != -158376912LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x217 = 32567371LL;
	int16_t x219 = 29;
	volatile int16_t x220 = -2;
	volatile int64_t t36 = -116709703LL;

    t36 = ((x217|x218)*(x219+x220));

    if (t36 != 879319125LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x221 = UINT32_MAX;
	static int32_t x222 = 6383924;
	static volatile int16_t x224 = -194;
	uint32_t t37 = 477893U;

    t37 = ((x221|x222)*(x223+x224));

    if (t37 != 322U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x229 = -10169;
	int16_t x230 = INT16_MAX;
	int64_t x231 = 848439037LL;
	int16_t x232 = -1920;

    t38 = ((x229|x230)*(x231+x232));

    if (t38 != -848437117LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x237 = INT32_MIN;
	int8_t x238 = -4;

    t39 = ((x237|x238)*(x239+x240));

    if (t39 != 128508) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x241 = INT8_MAX;
	int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = 137204462329LLU;

    t40 = ((x241|x242)*(x243+x244));

    if (t40 != 9223371901797797127LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x245 = -4390;
	int8_t x246 = INT8_MAX;
	uint64_t x248 = 2035931855965916962LLU;
	uint64_t t41 = 412744911LLU;

    t41 = ((x245|x246)*(x247+x248));

    if (t41 != 10472530434658348894LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x249 = 833057;
	uint8_t x250 = 55U;
	static int64_t t42 = -68640LL;

    t42 = ((x249|x250)*(x251+x252));

    if (t42 != 348859328961LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x253 = 0U;
	int16_t x256 = -5555;
	volatile uint64_t t43 = 214895731191613LLU;

    t43 = ((x253|x254)*(x255+x256));

    if (t43 != 17268354188279021568LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x257 = -1;
	uint64_t x258 = 5299877582LLU;
	int64_t x259 = INT64_MAX;
	int16_t x260 = -1;
	static uint64_t t44 = 33633313960840411LLU;

    t44 = ((x257|x258)*(x259+x260));

    if (t44 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x266 = INT64_MIN;
	int8_t x267 = 5;
	int16_t x268 = INT16_MIN;
	int64_t t45 = 1047864LL;

    t45 = ((x265|x266)*(x267+x268));

    if (t45 != 32763LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x269 = 0LL;
	uint32_t x270 = 849398U;
	static volatile int64_t x271 = -2LL;
	int16_t x272 = INT16_MIN;
	int64_t t46 = 3791232304977743LL;

    t46 = ((x269|x270)*(x271+x272));

    if (t46 != -27834772460LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x273 = 6U;
	int8_t x274 = INT8_MIN;
	static int16_t x275 = INT16_MAX;
	volatile uint16_t x276 = 12U;
	volatile int32_t t47 = 1933;

    t47 = ((x273|x274)*(x275+x276));

    if (t47 != -3999038) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x277 = UINT8_MAX;
	int16_t x278 = INT16_MIN;
	int16_t x279 = 3;

    t48 = ((x277|x278)*(x279+x280));

    if (t48 != -162565) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x281 = INT32_MAX;
	int64_t x282 = -1LL;
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MIN;
	int64_t t49 = -396048056LL;

    t49 = ((x281|x282)*(x283+x284));

    if (t49 != -32767LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x285 = INT8_MAX;
	int32_t x286 = -1;
	static int8_t x287 = -1;
	volatile int32_t t50 = -2079608;

    t50 = ((x285|x286)*(x287+x288));

    if (t50 != -126) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x289 = 11810;
	uint8_t x290 = 0U;
	static uint32_t x292 = UINT32_MAX;

    t51 = ((x289|x290)*(x291+x292));

    if (t51 != 50723563742140LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x293 = 430;
	int8_t x294 = INT8_MAX;
	static int64_t x295 = 3021058LL;
	static int32_t x296 = -28240828;
	volatile int64_t t52 = 119686054832LL;

    t52 = ((x293|x294)*(x295+x296));

    if (t52 != -12887302470LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x298 = 48LLU;
	uint32_t x299 = 95150U;
	int16_t x300 = 3;
	volatile uint64_t t53 = 90452173666982069LLU;

    t53 = ((x297|x298)*(x299+x300));

    if (t53 != 44981048348058LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x301 = 3471163LLU;
	uint64_t x303 = 925974618811174LLU;
	static int64_t x304 = INT64_MIN;
	volatile uint64_t t54 = 68452581994LLU;

    t54 = ((x301|x302)*(x303+x304));

    if (t54 != 9222446062235964634LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x305 = 4U;
	int32_t x306 = INT32_MAX;
	volatile uint8_t x307 = 6U;
	static int64_t t55 = -1LL;

    t55 = ((x305|x306)*(x307+x308));

    if (t55 != 303761561868150LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x313 = 902U;
	uint8_t x314 = UINT8_MAX;
	static int64_t x315 = 30LL;
	int8_t x316 = 0;
	int64_t t56 = -3879010556369964LL;

    t56 = ((x313|x314)*(x315+x316));

    if (t56 != 30690LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x317 = INT8_MAX;
	int16_t x319 = INT16_MAX;
	int64_t t57 = -266032981844LL;

    t57 = ((x317|x318)*(x319+x320));

    if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x321 = -47380236308LL;
	int64_t x322 = 955997297816598LL;
	static int16_t x323 = 1;
	uint8_t x324 = 34U;
	volatile int64_t t58 = -15819323LL;

    t58 = ((x321|x322)*(x323+x324));

    if (t58 != -305345402950LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x325 = -1;
	int16_t x326 = -22;
	int32_t x327 = -7142742;

    t59 = ((x325|x326)*(x327+x328));

    if (t59 != 7142743) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x330 = UINT32_MAX;
	int8_t x331 = INT8_MIN;
	int64_t x332 = INT64_MAX;

    t60 = ((x329|x330)*(x331+x332));

    if (t60 != 9223368158499307649LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x333 = 58125LL;
	int16_t x335 = INT16_MIN;
	uint32_t x336 = 12U;

    t61 = ((x333|x334)*(x335+x336));

    if (t61 != 281468535078900LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x338 = -1LL;
	volatile int64_t x339 = 15203LL;
	volatile int8_t x340 = INT8_MIN;
	volatile int64_t t62 = -147569308LL;

    t62 = ((x337|x338)*(x339+x340));

    if (t62 != -15075LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x346 = 110971U;
	uint8_t x348 = UINT8_MAX;

    t63 = ((x345|x346)*(x347+x348));

    if (t63 != 28220162U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x349 = INT32_MIN;
	volatile uint32_t t64 = 51000293U;

    t64 = ((x349|x350)*(x351+x352));

    if (t64 != 2948U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x353 = 71747;
	int8_t x355 = -1;
	int64_t t65 = -36931394420504LL;

    t65 = ((x353|x354)*(x355+x356));

    if (t65 != -6905070746142290484LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x361 = INT8_MAX;
	uint16_t x364 = 44U;

    t66 = ((x361|x362)*(x363+x364));

    if (t66 != 2076185024551575LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x369 = INT64_MAX;
	uint32_t x370 = UINT32_MAX;
	int8_t x371 = 1;
	int32_t x372 = -1;

    t67 = ((x369|x370)*(x371+x372));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x377 = UINT64_MAX;
	static int16_t x378 = 5;
	int64_t x379 = -62LL;
	int8_t x380 = -1;
	volatile uint64_t t68 = 3853807LLU;

    t68 = ((x377|x378)*(x379+x380));

    if (t68 != 63LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x387 = UINT64_MAX;
	uint64_t t69 = 19334579LLU;

    t69 = ((x385|x386)*(x387+x388));

    if (t69 != 18446744073709551418LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x390 = 1;
	int8_t x391 = INT8_MAX;
	uint16_t x392 = UINT16_MAX;
	int64_t t70 = 628450054LL;

    t70 = ((x389|x390)*(x391+x392));

    if (t70 != -65662LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x393 = 1U;
	uint16_t x394 = UINT16_MAX;
	int16_t x395 = -1;
	volatile int16_t x396 = -121;

    t71 = ((x393|x394)*(x395+x396));

    if (t71 != -7995270) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x402 = UINT8_MAX;
	uint16_t x403 = 2027U;
	volatile int8_t x404 = -1;
	static volatile int32_t t72 = -2940928;

    t72 = ((x401|x402)*(x403+x404));

    if (t72 != 4147222) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x406 = INT32_MAX;
	uint16_t x407 = 110U;
	static uint64_t t73 = 62686081681LLU;

    t73 = ((x405|x406)*(x407+x408));

    if (t73 != 367219703637LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	uint64_t x410 = 2035LLU;
	static int16_t x411 = INT16_MAX;
	static uint16_t x412 = 1U;
	uint64_t t74 = 4383297479494754LLU;

    t74 = ((x409|x410)*(x411+x412));

    if (t74 != 67076096LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x413 = INT16_MAX;
	uint8_t x415 = 63U;
	uint16_t x416 = 6659U;
	volatile uint32_t t75 = 196U;

    t75 = ((x413|x414)*(x415+x416));

    if (t75 != 1652680126U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x417 = 0;
	int16_t x420 = -697;
	static uint64_t t76 = 731519LLU;

    t76 = ((x417|x418)*(x419+x420));

    if (t76 != 18446744073709233426LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x421 = UINT64_MAX;
	int16_t x422 = -1;
	static int16_t x423 = INT16_MIN;
	static int8_t x424 = 16;
	uint64_t t77 = 64102244432319988LLU;

    t77 = ((x421|x422)*(x423+x424));

    if (t77 != 32752LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x425 = -5;
	static int8_t x426 = INT8_MAX;
	uint16_t x427 = 14U;
	static uint16_t x428 = 125U;
	int32_t t78 = -141795987;

    t78 = ((x425|x426)*(x427+x428));

    if (t78 != -139) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t t79 = -7;

    t79 = ((x429|x430)*(x431+x432));

    if (t79 != 129) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x433 = 2U;
	volatile int64_t x434 = INT64_MIN;
	int32_t x435 = 1;
	static volatile uint64_t t80 = 29027524961725785LLU;

    t80 = ((x433|x434)*(x435+x436));

    if (t80 != 9223372039456702818LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x437 = 892506514LL;
	uint64_t x438 = 2481062LLU;
	uint64_t x439 = UINT64_MAX;
	uint64_t t81 = 425LLU;

    t81 = ((x437|x438)*(x439+x440));

    if (t81 != 29255227099284LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x442 = UINT32_MAX;
	int8_t x444 = 13;
	uint32_t t82 = 39U;

    t82 = ((x441|x442)*(x443+x444));

    if (t82 != 4294967283U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x445 = -1;
	int32_t x447 = -9259980;
	static volatile int16_t x448 = INT16_MAX;

    t83 = ((x445|x446)*(x447+x448));

    if (t83 != 9227213) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x452 = -1;
	volatile int64_t t84 = 2636036103LL;

    t84 = ((x449|x450)*(x451+x452));

    if (t84 != -55784LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x462 = INT8_MAX;
	uint64_t x464 = 51920506824105LLU;

    t85 = ((x461|x462)*(x463+x464));

    if (t85 != 18446692153202727639LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x466 = INT16_MIN;
	static uint8_t x467 = 20U;
	uint32_t x468 = 1786315811U;
	volatile uint32_t t86 = 2U;

    t86 = ((x465|x466)*(x467+x468));

    if (t86 != 2508651465U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x469 = INT16_MAX;
	static uint16_t x472 = 2U;
	volatile int64_t t87 = -3465693954LL;

    t87 = ((x469|x470)*(x471+x472));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x473 = INT8_MAX;
	volatile int64_t x474 = INT64_MAX;
	static int64_t x475 = INT64_MAX;
	uint64_t x476 = 125305337LLU;

    t88 = ((x473|x474)*(x475+x476));

    if (t88 != 9223372036729470472LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x478 = 71172LLU;
	static int8_t x479 = 13;
	volatile int32_t x480 = -1;
	volatile uint64_t t89 = 1093268239748LLU;

    t89 = ((x477|x478)*(x479+x480));

    if (t89 != 18446744047940601904LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x481 = UINT32_MAX;
	uint64_t x482 = 7237975LLU;
	uint32_t x483 = 13490395U;
	static int8_t x484 = INT8_MAX;
	volatile uint64_t t90 = 7780030290008666LLU;

    t90 = ((x481|x482)*(x483+x484));

    if (t90 != 57941350782477990LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x489 = INT16_MIN;
	uint64_t x490 = 59LLU;
	volatile uint64_t x491 = UINT64_MAX;
	int64_t x492 = INT64_MIN;

    t91 = ((x489|x490)*(x491+x492));

    if (t91 != 9223372036854808517LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x501 = 484823U;
	int16_t x502 = -1;
	volatile int32_t x503 = INT32_MIN;
	uint8_t x504 = 59U;
	static uint32_t t92 = 12450U;

    t92 = ((x501|x502)*(x503+x504));

    if (t92 != 2147483589U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x505 = -1;
	int8_t x506 = INT8_MAX;
	int32_t x507 = INT32_MIN;
	int32_t t93 = -109;

    t93 = ((x505|x506)*(x507+x508));

    if (t93 != 2147418113) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x510 = UINT8_MAX;
	int32_t x511 = INT32_MAX;
	volatile int32_t x512 = INT32_MIN;
	volatile uint64_t t94 = 184938LLU;

    t94 = ((x509|x510)*(x511+x512));

    if (t94 != 18446744073709541889LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x513 = 141459LLU;
	uint16_t x514 = UINT16_MAX;
	uint64_t x515 = 104450360LLU;

    t95 = ((x513|x514)*(x515+x516));

    if (t95 != 20543564323321LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x517 = 6361U;
	uint32_t x518 = UINT32_MAX;
	uint32_t x519 = UINT32_MAX;
	uint8_t x520 = 0U;
	uint32_t t96 = 60875U;

    t96 = ((x517|x518)*(x519+x520));

    if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x526 = INT16_MIN;
	uint16_t x527 = UINT16_MAX;
	uint8_t x528 = 8U;
	int32_t t97 = -2321;

    t97 = ((x525|x526)*(x527+x528));

    if (t97 != -65543) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = 22;
	uint32_t x531 = 3U;
	uint32_t x532 = 1U;
	static uint32_t t98 = 1732U;

    t98 = ((x529|x530)*(x531+x532));

    if (t98 != 4294966872U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x533 = -1;
	volatile uint64_t x534 = 605706922409717LLU;
	static uint8_t x535 = UINT8_MAX;
	static volatile int32_t x536 = INT32_MIN;
	volatile uint64_t t99 = 163637LLU;

    t99 = ((x533|x534)*(x535+x536));

    if (t99 != 2147483393LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x541 = -223428854879676320LL;
	uint16_t x542 = 60U;
	int32_t x543 = -1;
	uint64_t x544 = 122040272LLU;
	uint64_t t100 = 369790104014466LLU;

    t100 = ((x541|x542)*(x543+x544));

    if (t100 != 13454979512296509508LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x549 = UINT64_MAX;
	uint32_t x551 = UINT32_MAX;
	int16_t x552 = -1;
	static uint64_t t101 = 3746929844LLU;

    t101 = ((x549|x550)*(x551+x552));

    if (t101 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x553 = -1;
	int64_t x554 = INT64_MIN;
	static int64_t x555 = 27724111548245222LL;
	int64_t x556 = 1748750371LL;
	volatile int64_t t102 = 14255499524LL;

    t102 = ((x553|x554)*(x555+x556));

    if (t102 != -27724113296995593LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x557 = INT32_MIN;
	static uint64_t x558 = 17LLU;
	int8_t x560 = INT8_MIN;

    t103 = ((x557|x558)*(x559+x560));

    if (t103 != 2147483631LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x566 = 20LLU;
	int8_t x568 = INT8_MIN;
	static uint64_t t104 = 27718LLU;

    t104 = ((x565|x566)*(x567+x568));

    if (t104 != 25603476985485LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x570 = UINT64_MAX;
	uint64_t t105 = 6763892397360LLU;

    t105 = ((x569|x570)*(x571+x572));

    if (t105 != 9223372036854521312LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x573 = -1;
	int16_t x574 = INT16_MIN;
	int16_t x575 = -14;
	volatile int64_t x576 = 190415397573218LL;
	int64_t t106 = 125065274789510LL;

    t106 = ((x573|x574)*(x575+x576));

    if (t106 != -190415397573204LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x577 = 0;
	static volatile int32_t x578 = -1;
	int8_t x580 = INT8_MIN;
	static int32_t t107 = -200239186;

    t107 = ((x577|x578)*(x579+x580));

    if (t107 != 129) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x581 = -4829LL;
	uint8_t x582 = 0U;
	volatile uint8_t x583 = 13U;
	volatile uint32_t x584 = 132671089U;
	int64_t t108 = -28250528017505361LL;

    t108 = ((x581|x582)*(x583+x584));

    if (t108 != -640668751558LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x585 = 1616U;
	uint16_t x586 = UINT16_MAX;
	int8_t x587 = -1;
	uint64_t t109 = 221305LLU;

    t109 = ((x585|x586)*(x587+x588));

    if (t109 != 262140LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x589 = -1;
	static int8_t x590 = -1;
	uint32_t x591 = UINT32_MAX;

    t110 = ((x589|x590)*(x591+x592));

    if (t110 != -4429025914LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x593 = -38;
	static uint8_t x594 = UINT8_MAX;
	uint64_t x595 = UINT64_MAX;
	int8_t x596 = -25;
	uint64_t t111 = 1298657358LLU;

    t111 = ((x593|x594)*(x595+x596));

    if (t111 != 26LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x598 = INT16_MAX;
	uint16_t x600 = 1509U;

    t112 = ((x597|x598)*(x599+x600));

    if (t112 != -1636) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x609 = INT16_MAX;
	uint8_t x610 = 7U;
	uint64_t x611 = UINT64_MAX;
	volatile int64_t x612 = 1618238965330LL;
	volatile uint64_t t113 = 53175026659116LLU;

    t113 = ((x609|x610)*(x611+x612));

    if (t113 != 53024836176935343LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x613 = 26;
	static int8_t x614 = 1;
	int32_t x615 = -22533;

    t114 = ((x613|x614)*(x615+x616));

    if (t114 != 10288119494017635221LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x617 = 63078U;
	uint16_t x618 = 3640U;
	static int8_t x619 = INT8_MIN;
	uint16_t x620 = UINT16_MAX;
	uint32_t t115 = 59971190U;

    t115 = ((x617|x618)*(x619+x620));

    if (t115 != 4261266050U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x621 = INT64_MIN;
	static int8_t x622 = INT8_MIN;
	int32_t x623 = 4;
	static uint16_t x624 = 15919U;
	static volatile int64_t t116 = 134907654LL;

    t116 = ((x621|x622)*(x623+x624));

    if (t116 != -2038144LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x625 = INT32_MAX;
	int64_t x626 = -1LL;
	volatile uint8_t x627 = 26U;
	uint16_t x628 = UINT16_MAX;
	volatile int64_t t117 = -54878661666050326LL;

    t117 = ((x625|x626)*(x627+x628));

    if (t117 != -65561LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x633 = 137;
	int32_t x635 = -38;
	static int32_t x636 = INT32_MAX;

    t118 = ((x633|x634)*(x635+x636));

    if (t118 != -2147483609) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x637 = -1;
	int32_t x638 = INT32_MIN;
	int16_t x639 = INT16_MAX;
	static int32_t x640 = INT32_MIN;
	int32_t t119 = 932138805;

    t119 = ((x637|x638)*(x639+x640));

    if (t119 != 2147450881) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x641 = -35423230267201218LL;
	uint64_t x642 = 990741973LLU;
	int64_t x643 = 471347752LL;
	volatile int8_t x644 = -1;

    t120 = ((x641|x642)*(x643+x644));

    if (t120 != 4650765747820367833LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x645 = UINT64_MAX;
	uint64_t x646 = 46628LLU;
	volatile int32_t x647 = -1;
	uint64_t x648 = UINT64_MAX;
	uint64_t t121 = 31838274971LLU;

    t121 = ((x645|x646)*(x647+x648));

    if (t121 != 2LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x649 = -1LL;
	static uint16_t x650 = 15U;
	int32_t x651 = 47;
	int64_t x652 = -1LL;
	volatile int64_t t122 = -217529014961961LL;

    t122 = ((x649|x650)*(x651+x652));

    if (t122 != -46LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x653 = INT32_MIN;
	volatile int8_t x655 = -3;
	int64_t t123 = 7LL;

    t123 = ((x653|x654)*(x655+x656));

    if (t123 != 4LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x658 = INT16_MAX;
	volatile uint32_t x659 = 906U;
	int32_t x660 = -1;
	uint32_t t124 = 64071653U;

    t124 = ((x657|x658)*(x659+x660));

    if (t124 != 4294966391U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x662 = -8;
	int64_t x663 = 3486785216LL;
	volatile int8_t x664 = 3;
	int64_t t125 = -4LL;

    t125 = ((x661|x662)*(x663+x664));

    if (t125 != -24407496533LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x669 = INT32_MIN;
	int64_t x671 = -1LL;
	volatile int8_t x672 = -1;

    t126 = ((x669|x670)*(x671+x672));

    if (t126 != 3926504730LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x673 = -3215261726887392857LL;
	static int8_t x674 = -22;
	int64_t x675 = 237249LL;
	volatile int8_t x676 = -3;
	volatile int64_t t127 = -1656593010176116988LL;

    t127 = ((x673|x674)*(x675+x676));

    if (t127 != -4033182LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x677 = 19297120805LLU;
	volatile int64_t x678 = -1LL;
	int64_t x679 = INT64_MAX;
	int32_t x680 = INT32_MIN;
	uint64_t t128 = 1826820703LLU;

    t128 = ((x677|x678)*(x679+x680));

    if (t128 != 9223372039002259457LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x681 = 2;
	uint16_t x682 = 1897U;
	int64_t x683 = 207LL;
	volatile int8_t x684 = -1;
	volatile int64_t t129 = -3625378LL;

    t129 = ((x681|x682)*(x683+x684));

    if (t129 != 391194LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x685 = -2645;
	uint8_t x687 = UINT8_MAX;
	volatile int16_t x688 = INT16_MAX;

    t130 = ((x685|x686)*(x687+x688));

    if (t130 != -85229782LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x689 = UINT16_MAX;
	static int32_t x690 = -1;
	static int8_t x691 = INT8_MAX;
	int16_t x692 = INT16_MIN;
	static volatile int32_t t131 = 1;

    t131 = ((x689|x690)*(x691+x692));

    if (t131 != 32641) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x693 = 4333;
	static int64_t x694 = -1LL;
	uint32_t x695 = 5U;
	int64_t t132 = 802LL;

    t132 = ((x693|x694)*(x695+x696));

    if (t132 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x698 = UINT16_MAX;
	int8_t x700 = INT8_MAX;
	volatile uint64_t t133 = 50068111432480457LLU;

    t133 = ((x697|x698)*(x699+x700));

    if (t133 != 18446744073704197540LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x701 = INT16_MIN;
	int64_t x702 = INT64_MIN;
	int64_t x703 = -1LL;
	uint8_t x704 = UINT8_MAX;
	int64_t t134 = 7028741086731LL;

    t134 = ((x701|x702)*(x703+x704));

    if (t134 != -8323072LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x709 = -1;
	uint16_t x710 = UINT16_MAX;
	int16_t x711 = 17;
	int64_t x712 = INT64_MIN;
	int64_t t135 = -19923882LL;

    t135 = ((x709|x710)*(x711+x712));

    if (t135 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x718 = INT64_MAX;
	int16_t x719 = INT16_MIN;
	static int8_t x720 = INT8_MIN;

    t136 = ((x717|x718)*(x719+x720));

    if (t136 != 32896LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x721 = INT16_MAX;
	int16_t x722 = -846;
	int16_t x723 = -1;
	uint16_t x724 = 1U;
	volatile int32_t t137 = -6837;

    t137 = ((x721|x722)*(x723+x724));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x725 = 394460406;
	volatile int64_t x727 = INT64_MIN;
	uint32_t x728 = UINT32_MAX;

    t138 = ((x725|x726)*(x727+x728));

    if (t138 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x737 = 7LLU;
	volatile uint8_t x740 = 0U;

    t139 = ((x737|x738)*(x739+x740));

    if (t139 != 18441295403895062161LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x745 = -4;
	uint32_t x746 = 64318U;
	volatile int32_t x747 = 58747;
	int32_t x748 = 46333807;

    t140 = ((x745|x746)*(x747+x748));

    if (t140 != 4202182188U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x753 = INT32_MIN;
	int64_t x754 = 444LL;
	int8_t x755 = INT8_MAX;
	uint64_t x756 = UINT64_MAX;
	uint64_t t141 = 12LLU;

    t141 = ((x753|x754)*(x755+x756));

    if (t141 != 18446743803126667912LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x757 = INT8_MIN;
	static int64_t x758 = INT64_MAX;
	int32_t x759 = 13893993;
	int32_t x760 = 15;
	volatile int64_t t142 = -155691270265346LL;

    t142 = ((x757|x758)*(x759+x760));

    if (t142 != -13894008LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x761 = INT8_MAX;
	volatile int16_t x762 = INT16_MAX;
	uint64_t x763 = 11LLU;
	volatile uint64_t t143 = 1814888475175767LLU;

    t143 = ((x761|x762)*(x763+x764));

    if (t143 != 360437LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x765 = -1;
	uint16_t x767 = 10U;
	int32_t x768 = INT32_MIN;
	volatile int32_t t144 = 627;

    t144 = ((x765|x766)*(x767+x768));

    if (t144 != 2147483638) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x769 = INT64_MIN;
	int32_t x770 = -1;
	int8_t x771 = INT8_MIN;
	static volatile int32_t x772 = INT32_MAX;

    t145 = ((x769|x770)*(x771+x772));

    if (t145 != -2147483519LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x773 = -348355382LL;
	uint8_t x774 = 65U;
	uint32_t x775 = UINT32_MAX;
	volatile int64_t t146 = -97869994143517945LL;

    t146 = ((x773|x774)*(x775+x776));

    if (t146 != -1496484403111611408LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x777 = INT32_MAX;
	static int8_t x779 = 1;
	uint8_t x780 = 6U;

    t147 = ((x777|x778)*(x779+x780));

    if (t147 != 2147483641U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x781 = -3;
	volatile uint16_t x782 = UINT16_MAX;
	static int8_t x783 = 13;
	uint8_t x784 = 126U;
	static int32_t t148 = 40297;

    t148 = ((x781|x782)*(x783+x784));

    if (t148 != -139) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x785 = UINT32_MAX;
	int8_t x786 = INT8_MAX;
	volatile int8_t x787 = INT8_MIN;
	uint32_t t149 = 213344661U;

    t149 = ((x785|x786)*(x787+x788));

    if (t149 != 1U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x793 = -1LL;
	volatile int64_t x794 = INT64_MAX;
	volatile uint64_t t150 = 938496256933577LLU;

    t150 = ((x793|x794)*(x795+x796));

    if (t150 != 18436406958296135382LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x797 = INT8_MIN;
	int64_t x798 = INT64_MIN;
	uint64_t x800 = 70LLU;
	uint64_t t151 = 1762378LLU;

    t151 = ((x797|x798)*(x799+x800));

    if (t151 != 18446744073705348480LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x801 = INT16_MAX;
	int32_t x802 = -1;
	int8_t x803 = INT8_MAX;
	uint32_t x804 = UINT32_MAX;
	volatile uint32_t t152 = 28U;

    t152 = ((x801|x802)*(x803+x804));

    if (t152 != 4294967170U) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x805 = INT32_MIN;
	volatile int16_t x806 = -1;
	uint64_t x807 = 58641702007712702LLU;
	uint16_t x808 = 10U;
	static uint64_t t153 = 191228721LLU;

    t153 = ((x805|x806)*(x807+x808));

    if (t153 != 18388102371701838904LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x811 = INT8_MAX;
	static int16_t x812 = 13242;
	static int32_t t154 = -2548401;

    t154 = ((x809|x810)*(x811+x812));

    if (t154 != -13369) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x813 = -28615LL;
	uint16_t x814 = 3805U;
	int64_t x815 = INT64_MIN;
	uint64_t x816 = UINT64_MAX;
	volatile uint64_t t155 = 2805469668124LLU;

    t155 = ((x813|x814)*(x815+x816));

    if (t155 != 9223372036854800643LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x821 = -1LL;
	int32_t x822 = INT32_MIN;
	static uint16_t x823 = UINT16_MAX;
	volatile int8_t x824 = 61;
	volatile int64_t t156 = -24LL;

    t156 = ((x821|x822)*(x823+x824));

    if (t156 != -65596LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x825 = -3;
	int32_t x826 = -1;
	volatile uint8_t x827 = UINT8_MAX;
	int16_t x828 = -5233;
	volatile int32_t t157 = 64978240;

    t157 = ((x825|x826)*(x827+x828));

    if (t157 != 4978) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x829 = -53;
	int64_t x830 = 68005LL;
	static int8_t x831 = -17;
	volatile int32_t x832 = INT32_MAX;
	int64_t t158 = -241795759LL;

    t158 = ((x829|x830)*(x831+x832));

    if (t158 != -36507221710LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x833 = -18;
	int32_t x834 = INT32_MIN;
	uint32_t x836 = UINT32_MAX;
	int64_t t159 = 7LL;

    t159 = ((x833|x834)*(x835+x836));

    if (t159 != -77309411328LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x838 = 16LLU;
	int8_t x839 = INT8_MIN;
	uint64_t t160 = 38976857LLU;

    t160 = ((x837|x838)*(x839+x840));

    if (t160 != 128LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x849 = INT8_MIN;

    t161 = ((x849|x850)*(x851+x852));

    if (t161 != 2LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x853 = 215815LLU;
	int32_t x854 = INT32_MIN;
	int8_t x856 = 1;
	volatile uint64_t t162 = 603269830LLU;

    t162 = ((x853|x854)*(x855+x856));

    if (t162 != 18446742188408394242LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x857 = INT8_MIN;
	static int64_t x858 = 15567049437912568LL;
	volatile uint32_t x859 = 134178509U;
	int8_t x860 = INT8_MIN;
	int64_t t163 = 5LL;

    t163 = ((x857|x858)*(x859+x860));

    if (t163 != -1073427048LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x861 = -476;
	static int32_t x862 = INT32_MIN;
	int16_t x863 = INT16_MIN;
	static uint8_t x864 = 6U;
	static volatile int32_t t164 = -343066738;

    t164 = ((x861|x862)*(x863+x864));

    if (t164 != 15594712) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x865 = INT32_MAX;
	int16_t x867 = -1;
	int8_t x868 = -1;
	int32_t t165 = 15857;

    t165 = ((x865|x866)*(x867+x868));

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x870 = -224;
	uint8_t x872 = 1U;
	int64_t t166 = -2LL;

    t166 = ((x869|x870)*(x871+x872));

    if (t166 != -4325376LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x877 = UINT32_MAX;
	volatile int32_t x878 = -1;
	uint64_t x879 = UINT64_MAX;
	int16_t x880 = INT16_MIN;

    t167 = ((x877|x878)*(x879+x880));

    if (t167 != 18446603331926261761LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x885 = -2526261;
	int64_t x886 = 9484464685129LL;
	volatile int64_t t168 = -4762023501285424LL;

    t168 = ((x885|x886)*(x887+x888));

    if (t168 != -77079630541771LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x890 = -1;
	volatile int8_t x891 = INT8_MAX;
	static uint64_t x892 = 741723562899230680LLU;
	uint64_t t169 = 28497664902862LLU;

    t169 = ((x889|x890)*(x891+x892));

    if (t169 != 17705020510810320809LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x893 = -1;
	static int32_t x894 = INT32_MAX;
	volatile int32_t t170 = 7703;

    t170 = ((x893|x894)*(x895+x896));

    if (t170 != 32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x898 = 1020895814;
	uint64_t x899 = 754663278681LLU;
	static volatile uint64_t t171 = 4880686390236226607LLU;

    t171 = ((x897|x898)*(x899+x900));

    if (t171 != 13073747035705882535LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x901 = UINT8_MAX;
	uint16_t x903 = 12U;
	volatile int32_t t172 = -71374;

    t172 = ((x901|x902)*(x903+x904));

    if (t172 != -357643) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x905 = INT16_MIN;
	static volatile int8_t x907 = -1;
	static int8_t x908 = -1;

    t173 = ((x905|x906)*(x907+x908));

    if (t173 != 65354) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x909 = INT16_MIN;
	int16_t x910 = INT16_MIN;
	int64_t x911 = 102923LL;
	int8_t x912 = INT8_MAX;
	int64_t t174 = 3236524LL;

    t174 = ((x909|x910)*(x911+x912));

    if (t174 != -3376742400LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint8_t x913 = UINT8_MAX;
	int8_t x915 = INT8_MIN;
	static volatile uint64_t t175 = 7132409LLU;

    t175 = ((x913|x914)*(x915+x916));

    if (t175 != 217LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x917 = 1948225242169956LL;
	static int8_t x918 = -12;
	static uint32_t x919 = 7U;
	volatile int64_t t176 = -11620898576259972LL;

    t176 = ((x917|x918)*(x919+x920));

    if (t176 != -107844LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x921 = -1;
	uint64_t x922 = UINT64_MAX;
	static uint32_t x923 = 15886U;
	volatile uint64_t x924 = 1LLU;
	volatile uint64_t t177 = 55255403462LLU;

    t177 = ((x921|x922)*(x923+x924));

    if (t177 != 18446744073709535729LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x929 = 7325718116221759LLU;
	uint16_t x930 = UINT16_MAX;
	int64_t x931 = -1039078911481LL;
	volatile int64_t x932 = -938240625416253433LL;
	uint64_t t178 = 297343441525LLU;

    t178 = ((x929|x930)*(x931+x932));

    if (t178 != 12636011999911648754LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x933 = UINT32_MAX;
	int16_t x934 = INT16_MIN;
	int64_t x936 = -5304LL;
	static volatile int64_t t179 = 1LL;

    t179 = ((x933|x934)*(x935+x936));

    if (t179 != -22832046140220LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x945 = 11938U;
	uint16_t x946 = 0U;
	volatile int8_t x947 = -1;
	uint32_t x948 = UINT32_MAX;
	uint32_t t180 = 240U;

    t180 = ((x945|x946)*(x947+x948));

    if (t180 != 4294943420U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x949 = -380;
	int16_t x950 = INT16_MIN;
	int16_t x951 = 10;
	uint32_t x952 = UINT32_MAX;
	volatile uint32_t t181 = 55303702U;

    t181 = ((x949|x950)*(x951+x952));

    if (t181 != 4294963876U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x954 = UINT64_MAX;
	static uint16_t x955 = 893U;
	int16_t x956 = INT16_MAX;
	volatile uint64_t t182 = 9388836LLU;

    t182 = ((x953|x954)*(x955+x956));

    if (t182 != 18446744073709517956LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x959 = 177999715LL;
	int8_t x960 = INT8_MIN;

    t183 = ((x957|x958)*(x959+x960));

    if (t183 != -177999587LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x961 = 5U;
	uint8_t x962 = 13U;
	int64_t x963 = -945LL;
	static int64_t t184 = -14061727802778269LL;

    t184 = ((x961|x962)*(x963+x964));

    if (t184 != -8970LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x965 = UINT8_MAX;
	uint16_t x966 = 0U;
	int16_t x967 = -1;
	static int16_t x968 = 3;

    t185 = ((x965|x966)*(x967+x968));

    if (t185 != 510) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x973 = INT32_MIN;
	int64_t x974 = INT64_MAX;
	volatile uint64_t x975 = 1070258LLU;
	uint64_t x976 = 12188896145LLU;
	static uint64_t t186 = 1658716697828267613LLU;

    t186 = ((x973|x974)*(x975+x976));

    if (t186 != 18446744061519585213LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x981 = INT16_MIN;
	int8_t x982 = 4;
	int8_t x983 = 0;
	static int8_t x984 = -2;
	int32_t t187 = 4569;

    t187 = ((x981|x982)*(x983+x984));

    if (t187 != 65528) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x985 = 15LLU;
	int16_t x987 = -374;
	uint16_t x988 = 14597U;
	static uint64_t t188 = 56LLU;

    t188 = ((x985|x986)*(x987+x988));

    if (t188 != 466045041LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x989 = INT32_MIN;
	static int16_t x991 = INT16_MIN;
	static volatile int32_t t189 = 113636592;

    t189 = ((x989|x990)*(x991+x992));

    if (t189 != 1071874048) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x993 = -13263;
	static volatile uint16_t x994 = 54U;
	int8_t x995 = INT8_MIN;
	static volatile int8_t x996 = -2;
	int32_t t190 = -70;

    t190 = ((x993|x994)*(x995+x996));

    if (t190 != 1723410) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x997 = -21;
	static volatile int64_t x998 = -362612633LL;
	int16_t x999 = INT16_MIN;
	static int32_t x1000 = -1;
	volatile int64_t t191 = 1900715937552LL;

    t191 = ((x997|x998)*(x999+x1000));

    if (t191 != 557073LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x1001 = UINT16_MAX;
	int64_t x1003 = INT64_MIN;
	volatile uint64_t x1004 = 0LLU;
	volatile uint64_t t192 = 3899394488LLU;

    t192 = ((x1001|x1002)*(x1003+x1004));

    if (t192 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1006 = 1;
	int32_t t193 = 16380;

    t193 = ((x1005|x1006)*(x1007+x1008));

    if (t193 != 3604425) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1009 = UINT16_MAX;
	static int32_t x1010 = -1817;
	int8_t x1012 = INT8_MIN;
	uint32_t t194 = 1775U;

    t194 = ((x1009|x1010)*(x1011+x1012));

    if (t194 != 4113870211U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1025 = INT32_MIN;
	uint16_t x1026 = UINT16_MAX;
	int64_t x1027 = -3LL;
	volatile int32_t x1028 = -243652268;
	volatile int64_t t195 = -1LL;

    t195 = ((x1025|x1026)*(x1027+x1028));

    if (t195 != 523223300018984623LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1029 = INT64_MIN;
	int32_t x1030 = INT32_MIN;
	int8_t x1031 = 1;
	int16_t x1032 = -1;
	int64_t t196 = -209936900LL;

    t196 = ((x1029|x1030)*(x1031+x1032));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1034 = 1;
	uint64_t x1035 = UINT64_MAX;
	uint8_t x1036 = 21U;
	volatile uint64_t t197 = 2904743LLU;

    t197 = ((x1033|x1034)*(x1035+x1036));

    if (t197 != 42949672940LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1037 = 186608166U;
	uint8_t x1038 = 0U;
	volatile int16_t x1039 = INT16_MIN;
	int16_t x1040 = INT16_MAX;
	volatile uint32_t t198 = 37U;

    t198 = ((x1037|x1038)*(x1039+x1040));

    if (t198 != 4108359130U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1045 = UINT64_MAX;
	uint64_t x1048 = 2013LLU;
	static uint64_t t199 = 237167919808988864LLU;

    t199 = ((x1045|x1046)*(x1047+x1048));

    if (t199 != 18446741922909653494LLU) { NG(); } else { ; }
	
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

