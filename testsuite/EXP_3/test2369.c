
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

int16_t x9 = -1;
int64_t x10 = -1LL;
volatile int16_t x13 = INT16_MAX;
int8_t x14 = -1;
static int8_t x28 = 6;
static int32_t x31 = INT32_MIN;
volatile int16_t x36 = INT16_MAX;
volatile int64_t t5 = 3240769LL;
volatile uint32_t x41 = 429U;
volatile uint64_t t7 = 818917LLU;
uint64_t t10 = 1565553247LLU;
uint64_t t12 = 97494LLU;
int8_t x88 = -1;
int64_t x97 = -1LL;
volatile int64_t t16 = -3129724980902412LL;
static int16_t x103 = -1;
volatile uint32_t t17 = 0U;
static int32_t x107 = INT32_MIN;
static int64_t t18 = -2294715470371891765LL;
int64_t x113 = 4LL;
static volatile int16_t x120 = INT16_MIN;
int16_t x136 = 0;
int8_t x144 = -1;
int32_t x156 = 2077527;
uint16_t x165 = UINT16_MAX;
static int64_t x172 = INT64_MIN;
static int16_t x177 = -128;
static uint16_t x178 = 1U;
int8_t x182 = -1;
static uint16_t x184 = 21259U;
static int32_t x187 = -1;
static volatile uint32_t t33 = 20U;
int8_t x202 = INT8_MAX;
int64_t x220 = 11542LL;
int64_t x238 = INT64_MIN;
int64_t x239 = INT64_MIN;
static uint32_t x242 = UINT32_MAX;
int16_t x246 = 10;
int64_t x249 = -1LL;
static uint64_t t47 = 66310088558LLU;
int16_t x296 = INT16_MIN;
int32_t x300 = INT32_MAX;
volatile uint64_t t50 = 338LLU;
uint64_t x313 = UINT64_MAX;
uint64_t x315 = 1495790124049113LLU;
uint32_t x316 = UINT32_MAX;
int32_t t52 = 0;
int64_t t56 = -475LL;
int8_t x348 = -40;
volatile int8_t x358 = -10;
int32_t t59 = 1478;
int64_t x384 = -1LL;
static int64_t x392 = -1LL;
volatile uint64_t x393 = 16901188LLU;
int16_t x398 = 0;
static volatile int64_t x402 = -1LL;
int64_t x410 = 3228028819386163LL;
int8_t x418 = INT8_MIN;
int64_t x419 = -1762597906444LL;
int64_t x431 = -5301340744016177LL;
volatile int64_t t69 = -342746645LL;
int32_t t72 = -2031506;
uint8_t x458 = UINT8_MAX;
int32_t x460 = INT32_MIN;
static int8_t x465 = -1;
int64_t x466 = -903571260306946538LL;
volatile uint32_t x472 = 1855U;
volatile uint32_t t78 = 2U;
volatile uint64_t x481 = 5411973948402382LLU;
volatile int32_t x487 = -1;
static volatile int32_t x493 = -1;
static int64_t x495 = -851459LL;
static volatile int32_t t84 = -11261503;
uint8_t x517 = 0U;
int8_t x537 = 12;
uint16_t x557 = 30988U;
uint16_t x561 = UINT16_MAX;
static volatile uint16_t x562 = 4007U;
int16_t x566 = -1;
int32_t x581 = 891305;
static volatile int64_t t96 = 1068616521107LL;
int32_t x589 = INT32_MIN;
int8_t x596 = INT8_MAX;
uint8_t x603 = UINT8_MAX;
static int8_t x605 = INT8_MAX;
int16_t x613 = INT16_MIN;
int8_t x614 = INT8_MIN;
static uint16_t x615 = 50U;
int32_t x624 = -122;
volatile uint64_t x626 = 7347415619LLU;
uint32_t x629 = 183U;
int32_t x631 = 0;
static int8_t x644 = -1;
static volatile int64_t x647 = INT64_MIN;
int16_t x657 = -1;
volatile int16_t x667 = INT16_MIN;
volatile int8_t x668 = -11;
static volatile int16_t x670 = INT16_MIN;
uint64_t x671 = 303402272168147492LLU;
static int64_t x672 = INT64_MIN;
volatile uint64_t t114 = 1365682457LLU;
volatile int64_t t115 = -188LL;
static int64_t x685 = -3818395103017172468LL;
static volatile int32_t x687 = INT32_MAX;
uint32_t x691 = 124644436U;
int64_t t117 = 6LL;
int64_t x693 = -1LL;
int16_t x697 = INT16_MIN;
static int64_t x701 = INT64_MIN;
uint64_t x702 = 31494LLU;
int32_t x705 = 19767;
volatile int64_t t122 = 8298LL;
int8_t x718 = 12;
volatile int8_t x720 = -1;
int8_t x725 = INT8_MIN;
uint32_t x735 = UINT32_MAX;
int8_t x736 = 35;
uint64_t t129 = 0LLU;
int16_t x757 = INT16_MAX;
uint16_t x759 = UINT16_MAX;
int64_t x760 = INT64_MAX;
int32_t x763 = 19;
static int16_t x764 = -1;
volatile uint32_t t131 = 2U;
int8_t x767 = INT8_MIN;
int64_t x770 = 2694358LL;
static int32_t x773 = INT32_MIN;
volatile int8_t x778 = INT8_MIN;
volatile int32_t x780 = INT32_MIN;
static int32_t t138 = -784815;
volatile uint64_t t140 = 233337628310938141LLU;
int16_t x819 = -1;
uint64_t t143 = 2LLU;
int32_t x840 = -1;
volatile int8_t x844 = 14;
uint64_t t147 = 6455649164108LLU;
int16_t x856 = INT16_MIN;
int16_t x861 = INT16_MIN;
uint32_t x862 = UINT32_MAX;
uint16_t x868 = UINT16_MAX;
uint32_t x881 = 373U;
volatile int32_t x884 = INT32_MIN;
uint64_t t155 = 48LLU;
volatile uint8_t x903 = UINT8_MAX;
int16_t x904 = -11518;
static uint64_t t157 = 501448158018096230LLU;
uint8_t x909 = 0U;
volatile int16_t x910 = INT16_MIN;
uint8_t x915 = 3U;
int32_t x916 = INT32_MAX;
uint64_t t159 = 13194LLU;
uint8_t x917 = UINT8_MAX;
volatile uint32_t x920 = 5915U;
uint8_t x922 = UINT8_MAX;
uint64_t x925 = UINT64_MAX;
int64_t t164 = -73539395LL;
int32_t x937 = INT32_MIN;
volatile uint64_t t165 = 57LLU;
volatile uint32_t t166 = 0U;
static int64_t t167 = 1842780597LL;
int8_t x957 = INT8_MAX;
uint32_t x958 = 7U;
uint32_t t169 = 22335U;
uint64_t x961 = 141292932LLU;
int8_t x969 = INT8_MIN;
volatile int8_t x982 = INT8_MAX;
volatile int64_t x988 = -1LL;
int64_t t174 = -5346666145LL;
uint64_t t175 = 15835497LLU;
volatile int64_t x995 = -1LL;
static volatile int64_t t176 = 30376369LL;
volatile int32_t t177 = 1;
int64_t x1004 = -15283689000267LL;
volatile uint32_t t179 = 58857U;
static int8_t x1021 = -1;
int16_t x1023 = INT16_MAX;
volatile int8_t x1026 = 10;
volatile int32_t t181 = 0;
static int8_t x1035 = INT8_MIN;
volatile int64_t t183 = -58040568847529LL;
volatile int32_t x1045 = -1;
int8_t x1047 = INT8_MAX;
uint32_t x1048 = UINT32_MAX;
int16_t x1065 = INT16_MIN;
volatile int8_t x1067 = -1;
static uint32_t x1074 = 2041202U;
volatile int32_t x1075 = INT32_MIN;
static int32_t x1080 = 3571;
int32_t x1088 = -1;
int32_t x1099 = -1;
uint8_t x1105 = UINT8_MAX;
static int16_t x1106 = 1276;
static int64_t x1108 = INT64_MAX;
static uint32_t x1122 = UINT32_MAX;
volatile uint64_t t195 = 5318750878LLU;
int8_t x1130 = INT8_MIN;
uint32_t t197 = 4823U;


void f0(void) {
    	int32_t x11 = -1;
	int64_t x12 = INT64_MIN;
	volatile int64_t t0 = -1010270529721193LL;

    t0 = ((x9-x10)*(x11|x12));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MIN;
	static int64_t t1 = -323554345392LL;

    t1 = ((x13-x14)*(x15|x16));

    if (t1 != -70368744177664LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x25 = UINT8_MAX;
	int8_t x26 = -3;
	static int16_t x27 = -12539;
	volatile int32_t t2 = -6225856;

    t2 = ((x25-x26)*(x27|x28));

    if (t2 != -3234546) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x29 = -1;
	volatile uint32_t x30 = 384383038U;
	uint64_t x32 = 1656LLU;
	volatile uint64_t t3 = 252972819538712821LLU;

    t3 = ((x29-x30)*(x31|x32));

    if (t3 != 10048834803603351672LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x33 = INT64_MIN;
	uint64_t x34 = 226631809223766LLU;
	int16_t x35 = -15;
	static volatile uint64_t t4 = 501962LLU;

    t4 = ((x33-x34)*(x35|x36));

    if (t4 != 9223598668663999574LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x37 = -38839LL;
	volatile int32_t x38 = INT32_MIN;
	volatile int8_t x39 = 2;
	int16_t x40 = INT16_MAX;

    t5 = ((x37-x38)*(x39|x40));

    if (t5 != 70365324056503LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x42 = -2188;
	volatile uint32_t x43 = 53U;
	static volatile int32_t x44 = -1;
	uint32_t t6 = 10387U;

    t6 = ((x41-x42)*(x43|x44));

    if (t6 != 4294964679U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x53 = -1;
	volatile uint64_t x54 = UINT64_MAX;
	int8_t x55 = INT8_MIN;
	static int64_t x56 = 2729970LL;

    t7 = ((x53-x54)*(x55|x56));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x57 = 52U;
	int32_t x58 = -1;
	int16_t x59 = -1;
	int32_t x60 = INT32_MIN;
	static volatile int32_t t8 = 3281682;

    t8 = ((x57-x58)*(x59|x60));

    if (t8 != -53) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x61 = -1;
	int32_t x62 = -92446;
	static int16_t x63 = -229;
	volatile int16_t x64 = INT16_MAX;
	volatile int32_t t9 = 0;

    t9 = ((x61-x62)*(x63|x64));

    if (t9 != -92445) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x65 = 84U;
	uint64_t x66 = 26648299LLU;
	volatile uint64_t x67 = 3869983862162LLU;
	uint32_t x68 = 33834U;

    t10 = ((x65-x66)*(x67|x68));

    if (t10 != 7552301562559331146LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x69 = 60488069U;
	int16_t x70 = -8;
	static uint32_t x71 = 19060630U;
	int32_t x72 = -1;
	static volatile uint32_t t11 = 559U;

    t11 = ((x69-x70)*(x71|x72));

    if (t11 != 4234479219U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x73 = INT32_MAX;
	static uint64_t x74 = 21955LLU;
	static int64_t x75 = -1LL;
	static int8_t x76 = -3;

    t12 = ((x73-x74)*(x75|x76));

    if (t12 != 18446744071562089924LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x81 = -1;
	static int32_t x82 = -1;
	volatile uint8_t x83 = 2U;
	uint16_t x84 = 297U;
	static int32_t t13 = 145471;

    t13 = ((x81-x82)*(x83|x84));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x85 = -1;
	int16_t x86 = -3837;
	static int16_t x87 = 1;
	int32_t t14 = -973;

    t14 = ((x85-x86)*(x87|x88));

    if (t14 != -3836) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x89 = INT64_MIN;
	static int8_t x90 = INT8_MIN;
	int8_t x91 = -1;
	static int32_t x92 = INT32_MIN;
	volatile int64_t t15 = 3863LL;

    t15 = ((x89-x90)*(x91|x92));

    if (t15 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x98 = UINT32_MAX;
	int32_t x99 = 9615;
	int32_t x100 = 2533272;

    t16 = ((x97-x98)*(x99|x100));

    if (t16 != -10880350456643584LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x101 = INT16_MIN;
	uint32_t x102 = UINT32_MAX;
	int32_t x104 = INT32_MAX;

    t17 = ((x101-x102)*(x103|x104));

    if (t17 != 32767U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x105 = -1LL;
	int16_t x106 = INT16_MAX;
	int64_t x108 = -1LL;

    t18 = ((x105-x106)*(x107|x108));

    if (t18 != 32768LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x114 = -3;
	volatile int32_t x115 = INT32_MIN;
	int16_t x116 = 6501;
	volatile int64_t t19 = -3LL;

    t19 = ((x113-x114)*(x115|x116));

    if (t19 != -15032340029LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x117 = 10956596U;
	static int32_t x118 = -1;
	int32_t x119 = INT32_MAX;
	static uint32_t t20 = 110250U;

    t20 = ((x117-x118)*(x119|x120));

    if (t20 != 4284010699U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x129 = -2;
	int32_t x130 = 1;
	int32_t x131 = 37;
	int8_t x132 = INT8_MIN;
	static int32_t t21 = 725;

    t21 = ((x129-x130)*(x131|x132));

    if (t21 != 273) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x133 = -3;
	static volatile uint8_t x134 = 1U;
	volatile int8_t x135 = -10;
	int32_t t22 = -25151;

    t22 = ((x133-x134)*(x135|x136));

    if (t22 != 40) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x137 = -72811LL;
	volatile int32_t x138 = -1;
	static int8_t x139 = INT8_MIN;
	volatile int32_t x140 = INT32_MIN;
	static volatile int64_t t23 = 1296299136LL;

    t23 = ((x137-x138)*(x139|x140));

    if (t23 != 9319680LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x141 = INT16_MIN;
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	volatile int32_t t24 = 94754;

    t24 = ((x141-x142)*(x143|x144));

    if (t24 != 98303) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x153 = -1;
	static uint16_t x154 = 2U;
	static int32_t x155 = -25792110;
	volatile int32_t t25 = -13760978;

    t25 = ((x153-x154)*(x155|x156));

    if (t25 != 75506811) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x157 = 1656039U;
	int16_t x158 = INT16_MAX;
	uint8_t x159 = 6U;
	int32_t x160 = INT32_MAX;
	uint32_t t26 = 0U;

    t26 = ((x157-x158)*(x159|x160));

    if (t26 != 4293344024U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x166 = 229986112989861LLU;
	int32_t x167 = INT32_MIN;
	int64_t x168 = -1LL;
	static uint64_t t27 = 34000LLU;

    t27 = ((x165-x166)*(x167|x168));

    if (t27 != 229986112924326LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x169 = 8082782944498LLU;
	static int32_t x170 = INT32_MIN;
	volatile int16_t x171 = -1;
	volatile uint64_t t28 = 6041681515145656LLU;

    t28 = ((x169-x170)*(x171|x172));

    if (t28 != 18446735988779123470LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x179 = 24926LL;
	int64_t x180 = -1LL;
	static volatile int64_t t29 = 52910140LL;

    t29 = ((x177-x178)*(x179|x180));

    if (t29 != 129LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x181 = 1U;
	static int8_t x183 = INT8_MAX;
	uint32_t t30 = 1U;

    t30 = ((x181-x182)*(x183|x184));

    if (t30 != 42750U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x185 = -1;
	volatile uint32_t x186 = 2254U;
	volatile int16_t x188 = INT16_MIN;
	static uint32_t t31 = 487749313U;

    t31 = ((x185-x186)*(x187|x188));

    if (t31 != 2255U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x193 = INT8_MAX;
	uint16_t x194 = UINT16_MAX;
	int64_t x195 = 8123725LL;
	static int64_t x196 = -1LL;
	volatile int64_t t32 = -2359238208927584353LL;

    t32 = ((x193-x194)*(x195|x196));

    if (t32 != 65408LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x197 = INT16_MIN;
	uint8_t x198 = UINT8_MAX;
	volatile uint32_t x199 = 52403U;
	static volatile int16_t x200 = INT16_MIN;

    t33 = ((x197-x198)*(x199|x200));

    if (t33 != 433691059U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x201 = -1LL;
	static int8_t x203 = INT8_MIN;
	uint32_t x204 = UINT32_MAX;
	static int64_t t34 = 1603151740508306055LL;

    t34 = ((x201-x202)*(x203|x204));

    if (t34 != -549755813760LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x209 = -46;
	volatile int8_t x210 = 4;
	int32_t x211 = -108;
	int32_t x212 = INT32_MAX;
	volatile int32_t t35 = 3838141;

    t35 = ((x209-x210)*(x211|x212));

    if (t35 != 50) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x217 = INT8_MIN;
	uint16_t x218 = UINT16_MAX;
	volatile int32_t x219 = INT32_MAX;
	volatile int64_t t36 = -7728595547LL;

    t36 = ((x217-x218)*(x219|x220));

    if (t36 != -141010218712961LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x237 = 30LLU;
	static volatile int8_t x240 = 4;
	uint64_t t37 = 46877452206656LLU;

    t37 = ((x237-x238)*(x239|x240));

    if (t37 != 120LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x241 = 7377862478757358LLU;
	volatile uint32_t x243 = UINT32_MAX;
	int8_t x244 = 26;
	static volatile uint64_t t38 = 85854041LLU;

    t38 = ((x241-x242)*(x243|x244));

    if (t38 != 8657404815350989329LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x245 = UINT64_MAX;
	uint32_t x247 = 5427U;
	static int64_t x248 = -138964LL;
	uint64_t t39 = 0LLU;

    t39 = ((x245-x246)*(x247|x248));

    if (t39 != 1472075LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x250 = INT32_MAX;
	static int8_t x251 = -60;
	volatile uint64_t x252 = UINT64_MAX;
	uint64_t t40 = 820LLU;

    t40 = ((x249-x250)*(x251|x252));

    if (t40 != 2147483648LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x253 = INT32_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	volatile int16_t x255 = INT16_MIN;
	int16_t x256 = 48;
	uint32_t t41 = 7U;

    t41 = ((x253-x254)*(x255|x256));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x257 = 0U;
	static uint32_t x258 = 10086157U;
	int8_t x259 = -1;
	int32_t x260 = 232550655;
	uint32_t t42 = 86U;

    t42 = ((x257-x258)*(x259|x260));

    if (t42 != 10086157U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x261 = -1008762LL;
	static int16_t x262 = INT16_MAX;
	volatile int32_t x263 = INT32_MIN;
	int16_t x264 = 44;
	static volatile int64_t t43 = -122870672103797LL;

    t43 = ((x261-x262)*(x263|x264));

    if (t43 != 2236666450590516LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x265 = -1;
	int8_t x266 = INT8_MIN;
	uint64_t x267 = UINT64_MAX;
	static volatile int32_t x268 = 678450;
	uint64_t t44 = 4885LLU;

    t44 = ((x265-x266)*(x267|x268));

    if (t44 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x269 = UINT16_MAX;
	volatile int64_t x270 = INT64_MAX;
	int8_t x271 = -1;
	int16_t x272 = -1;
	volatile int64_t t45 = -52079493659853LL;

    t45 = ((x269-x270)*(x271|x272));

    if (t45 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x277 = 51U;
	static int64_t x278 = -86758717669661LL;
	uint8_t x279 = UINT8_MAX;
	int8_t x280 = -1;
	volatile int64_t t46 = 290694830937013LL;

    t46 = ((x277-x278)*(x279|x280));

    if (t46 != -86758717669712LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x281 = 1;
	int64_t x282 = -1LL;
	int64_t x283 = -1LL;
	static uint64_t x284 = 855149458LLU;

    t47 = ((x281-x282)*(x283|x284));

    if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x293 = UINT64_MAX;
	static int8_t x294 = INT8_MIN;
	uint16_t x295 = UINT16_MAX;
	volatile uint64_t t48 = 7773LLU;

    t48 = ((x293-x294)*(x295|x296));

    if (t48 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x297 = INT8_MIN;
	int8_t x298 = -16;
	int64_t x299 = -4956957011820407LL;
	int64_t t49 = -440819LL;

    t49 = ((x297-x298)*(x299|x300));

    if (t49 != 555178948833575024LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x301 = -2;
	uint64_t x302 = UINT64_MAX;
	uint32_t x303 = UINT32_MAX;
	volatile int16_t x304 = INT16_MIN;

    t50 = ((x301-x302)*(x303|x304));

    if (t50 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x314 = -1LL;
	uint64_t t51 = 6051268149288LLU;

    t51 = ((x313-x314)*(x315|x316));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x321 = 10U;
	uint16_t x322 = 137U;
	int16_t x323 = INT16_MIN;
	volatile uint8_t x324 = 2U;

    t52 = ((x321-x322)*(x323|x324));

    if (t52 != 4161282) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x325 = UINT16_MAX;
	int16_t x326 = -13867;
	static uint64_t x327 = 62768383LLU;
	int32_t x328 = INT32_MAX;
	uint64_t t53 = 0LLU;

    t53 = ((x325-x326)*(x327|x328));

    if (t53 != 170514496539094LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x329 = 46U;
	volatile uint32_t x330 = UINT32_MAX;
	volatile int64_t x331 = 41002555117951LL;
	static int8_t x332 = INT8_MAX;
	int64_t t54 = 1410975281758LL;

    t54 = ((x329-x330)*(x331|x332));

    if (t54 != 1927120090543697LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x333 = UINT64_MAX;
	uint64_t x334 = 595486692LLU;
	int8_t x335 = INT8_MAX;
	volatile int64_t x336 = INT64_MIN;
	volatile uint64_t t55 = 7923326088LLU;

    t55 = ((x333-x334)*(x335|x336));

    if (t55 != 9223371961227965797LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x337 = UINT32_MAX;
	static int64_t x338 = -530076932124LL;
	uint16_t x339 = 4U;
	int32_t x340 = 2540;

    t56 = ((x337-x338)*(x339|x340));

    if (t56 != 1357304624524260LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x345 = UINT64_MAX;
	uint16_t x346 = 3295U;
	int16_t x347 = 1;
	uint64_t t57 = 1LLU;

    t57 = ((x345-x346)*(x347|x348));

    if (t57 != 128544LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x357 = 0U;
	static int8_t x359 = INT8_MAX;
	uint64_t x360 = 353559654643503755LLU;
	uint64_t t58 = 40341679LLU;

    t58 = ((x357-x358)*(x359|x360));

    if (t58 != 3535596546435038710LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x361 = INT16_MIN;
	int8_t x362 = INT8_MIN;
	int8_t x363 = -1;
	volatile int8_t x364 = 10;

    t59 = ((x361-x362)*(x363|x364));

    if (t59 != 32640) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x369 = UINT64_MAX;
	int16_t x370 = INT16_MAX;
	static uint8_t x371 = UINT8_MAX;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t60 = 235973474529LLU;

    t60 = ((x369-x370)*(x371|x372));

    if (t60 != 18446744073701195776LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x373 = 443U;
	int8_t x374 = -1;
	static int16_t x375 = 657;
	uint64_t x376 = 1246865303LLU;
	uint64_t t61 = 65306640413LLU;

    t61 = ((x373-x374)*(x375|x376));

    if (t61 != 553608194532LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x381 = 704575501247281LLU;
	int64_t x382 = INT64_MIN;
	volatile int8_t x383 = -2;
	volatile uint64_t t62 = 850672954143299797LLU;

    t62 = ((x381-x382)*(x383|x384));

    if (t62 != 9222667461353528527LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x389 = -1;
	static int16_t x390 = 31;
	int64_t x391 = INT64_MIN;
	int64_t t63 = 755322691LL;

    t63 = ((x389-x390)*(x391|x392));

    if (t63 != 32LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x394 = INT16_MIN;
	int8_t x395 = 5;
	int8_t x396 = -1;
	uint64_t t64 = 23000930LLU;

    t64 = ((x393-x394)*(x395|x396));

    if (t64 != 18446744073692617660LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x397 = 44U;
	static int64_t x399 = INT64_MIN;
	static int64_t x400 = INT64_MAX;
	volatile int64_t t65 = 6055037194282195LL;

    t65 = ((x397-x398)*(x399|x400));

    if (t65 != -44LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x401 = INT32_MIN;
	uint8_t x403 = 3U;
	uint8_t x404 = 102U;
	volatile int64_t t66 = -9620504188LL;

    t66 = ((x401-x402)*(x403|x404));

    if (t66 != -221190815641LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x409 = -1;
	static uint64_t x411 = UINT64_MAX;
	uint16_t x412 = 64U;
	volatile uint64_t t67 = 11LLU;

    t67 = ((x409-x410)*(x411|x412));

    if (t67 != 3228028819386164LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x417 = -1LL;
	volatile int8_t x420 = 28;
	volatile int64_t t68 = -950LL;

    t68 = ((x417-x418)*(x419|x420));

    if (t68 != -223849934117372LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x429 = INT32_MIN;
	int32_t x430 = -95401593;
	int16_t x432 = INT16_MIN;

    t69 = ((x429-x430)*(x431|x432));

    if (t69 != 51057853610455LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x437 = -108;
	volatile uint16_t x438 = 26353U;
	static volatile int8_t x439 = INT8_MIN;
	static volatile uint32_t x440 = UINT32_MAX;
	static uint32_t t70 = 1299390613U;

    t70 = ((x437-x438)*(x439|x440));

    if (t70 != 26461U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x441 = UINT16_MAX;
	static int8_t x442 = INT8_MIN;
	static int32_t x443 = INT32_MAX;
	int16_t x444 = -10485;
	int32_t t71 = -6322;

    t71 = ((x441-x442)*(x443|x444));

    if (t71 != -65663) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x445 = 23U;
	int8_t x446 = -1;
	static int8_t x447 = -3;
	int8_t x448 = INT8_MAX;

    t72 = ((x445-x446)*(x447|x448));

    if (t72 != -24) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x449 = 7047U;
	uint64_t x450 = 1LLU;
	volatile uint16_t x451 = 11U;
	uint32_t x452 = 594422788U;
	static volatile uint64_t t73 = 163389417176LLU;

    t73 = ((x449-x450)*(x451|x452));

    if (t73 != 4188303041754LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x453 = -1LL;
	volatile uint64_t x454 = 6739505038376957LLU;
	uint8_t x455 = 57U;
	volatile int16_t x456 = 34;
	volatile uint64_t t74 = 1496404818654916281LLU;

    t74 = ((x453-x454)*(x455|x456));

    if (t74 != 18049113276445311094LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x457 = UINT32_MAX;
	static int16_t x459 = INT16_MIN;
	volatile uint32_t t75 = 14833097U;

    t75 = ((x457-x458)*(x459|x460));

    if (t75 != 8388608U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x467 = INT64_MAX;
	int32_t x468 = INT32_MIN;
	static volatile int64_t t76 = -193766LL;

    t76 = ((x465-x466)*(x467|x468));

    if (t76 != -903571260306946537LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x469 = UINT32_MAX;
	static volatile int8_t x470 = -5;
	static uint16_t x471 = UINT16_MAX;
	static uint32_t t77 = 52U;

    t77 = ((x469-x470)*(x471|x472));

    if (t77 != 262140U) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint32_t x473 = UINT32_MAX;
	int16_t x474 = INT16_MAX;
	int16_t x475 = -200;
	static int8_t x476 = INT8_MAX;

    t78 = ((x473-x474)*(x475|x476));

    if (t78 != 4227072U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x477 = UINT64_MAX;
	static int8_t x478 = INT8_MIN;
	volatile int64_t x479 = INT64_MIN;
	static int32_t x480 = INT32_MIN;
	static uint64_t t79 = 1321880LLU;

    t79 = ((x477-x478)*(x479|x480));

    if (t79 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x482 = INT16_MIN;
	int32_t x483 = INT32_MIN;
	int32_t x484 = INT32_MAX;
	volatile uint64_t t80 = 113395679227546829LLU;

    t80 = ((x481-x482)*(x483|x484));

    if (t80 != 18441332099761116466LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x485 = -1;
	int16_t x486 = INT16_MIN;
	int16_t x488 = INT16_MIN;
	volatile int32_t t81 = -2;

    t81 = ((x485-x486)*(x487|x488));

    if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x494 = -1;
	int64_t x496 = INT64_MIN;
	static volatile int64_t t82 = 1654991LL;

    t82 = ((x493-x494)*(x495|x496));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x497 = -1;
	int16_t x498 = 200;
	static volatile int16_t x499 = INT16_MIN;
	uint64_t x500 = 838724151LLU;
	static volatile uint64_t t83 = 852182560503LLU;

    t83 = ((x497-x498)*(x499|x500));

    if (t83 != 1120977LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x505 = 0U;
	uint16_t x506 = 10784U;
	int16_t x507 = INT16_MAX;
	uint8_t x508 = 23U;

    t84 = ((x505-x506)*(x507|x508));

    if (t84 != -353359328) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x509 = INT32_MAX;
	uint16_t x510 = 1U;
	uint64_t x511 = 1819481119LLU;
	volatile uint64_t x512 = 603343191LLU;
	static volatile uint64_t t85 = 22118552546LLU;

    t85 = ((x509-x510)*(x511|x512));

    if (t85 != 4034009956273440066LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x513 = -1LL;
	int16_t x514 = INT16_MIN;
	uint64_t x515 = 129049LLU;
	volatile int8_t x516 = -1;
	uint64_t t86 = 75666496789LLU;

    t86 = ((x513-x514)*(x515|x516));

    if (t86 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x518 = INT16_MIN;
	uint64_t x519 = 453877970457922LLU;
	int64_t x520 = INT64_MIN;
	uint64_t t87 = 253927897863LLU;

    t87 = ((x517-x518)*(x519|x520));

    if (t87 != 14872673335965188096LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x521 = -1;
	volatile uint32_t x522 = 504621U;
	uint8_t x523 = 46U;
	volatile uint32_t x524 = UINT32_MAX;
	static volatile uint32_t t88 = 36672U;

    t88 = ((x521-x522)*(x523|x524));

    if (t88 != 504622U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x538 = INT16_MIN;
	int8_t x539 = 13;
	int32_t x540 = 15;
	static int32_t t89 = 92902627;

    t89 = ((x537-x538)*(x539|x540));

    if (t89 != 491700) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x541 = UINT32_MAX;
	uint64_t x542 = 2480LLU;
	static uint8_t x543 = 55U;
	static uint16_t x544 = 0U;
	static volatile uint64_t t90 = 194179LLU;

    t90 = ((x541-x542)*(x543|x544));

    if (t90 != 236223064825LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x545 = -7LL;
	volatile int32_t x546 = 1477;
	uint64_t x547 = 83250868LLU;
	int64_t x548 = -1LL;
	uint64_t t91 = 536730777443333892LLU;

    t91 = ((x545-x546)*(x547|x548));

    if (t91 != 1484LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x558 = INT8_MAX;
	uint64_t x559 = UINT64_MAX;
	int32_t x560 = 43367649;
	uint64_t t92 = 2LLU;

    t92 = ((x557-x558)*(x559|x560));

    if (t92 != 18446744073709520755LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x563 = INT16_MAX;
	int64_t x564 = 12633LL;
	int64_t t93 = 0LL;

    t93 = ((x561-x562)*(x563|x564));

    if (t93 != 2016087976LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x565 = -1;
	static int16_t x567 = INT16_MIN;
	volatile uint8_t x568 = 59U;
	int32_t t94 = 0;

    t94 = ((x565-x566)*(x567|x568));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x573 = 45;
	uint16_t x574 = 14U;
	int8_t x575 = 1;
	uint8_t x576 = 0U;
	volatile int32_t t95 = -17681451;

    t95 = ((x573-x574)*(x575|x576));

    if (t95 != 31) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x582 = -1;
	int64_t x583 = 804002LL;
	int8_t x584 = INT8_MIN;

    t96 = ((x581-x582)*(x583|x584));

    if (t96 != -83782764LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x590 = 2U;
	int64_t x591 = INT64_MIN;
	int16_t x592 = INT16_MIN;
	volatile int64_t t97 = 65LL;

    t97 = ((x589-x590)*(x591|x592));

    if (t97 != -70368744112128LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x593 = -1LL;
	volatile int8_t x594 = -1;
	volatile int16_t x595 = 5;
	static volatile int64_t t98 = 110559LL;

    t98 = ((x593-x594)*(x595|x596));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x601 = UINT8_MAX;
	uint16_t x602 = 22831U;
	uint16_t x604 = 5U;
	int32_t t99 = -2;

    t99 = ((x601-x602)*(x603|x604));

    if (t99 != -5756880) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x606 = -11;
	int8_t x607 = -1;
	int8_t x608 = INT8_MIN;
	static volatile int32_t t100 = 20558;

    t100 = ((x605-x606)*(x607|x608));

    if (t100 != -138) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x609 = INT16_MIN;
	int64_t x610 = -1LL;
	int64_t x611 = INT64_MIN;
	volatile int64_t x612 = INT64_MAX;
	volatile int64_t t101 = -726635753LL;

    t101 = ((x609-x610)*(x611|x612));

    if (t101 != 32767LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x616 = 1621;
	static volatile int32_t t102 = -2;

    t102 = ((x613-x614)*(x615|x616));

    if (t102 != -54019200) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x621 = -1;
	static uint32_t x622 = 3U;
	volatile int64_t x623 = INT64_MAX;
	int64_t t103 = 1208LL;

    t103 = ((x621-x622)*(x623|x624));

    if (t103 != -4294967292LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x625 = UINT64_MAX;
	int16_t x627 = -3499;
	volatile uint64_t x628 = 4036181124LLU;
	volatile uint64_t t104 = 1182330979LLU;

    t104 = ((x625-x626)*(x627|x628));

    if (t104 != 2196877270380LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x630 = -1254;
	int16_t x632 = INT16_MIN;
	volatile uint32_t t105 = 165167U;

    t105 = ((x629-x630)*(x631|x632));

    if (t105 != 4247879680U) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x637 = UINT8_MAX;
	uint32_t x638 = 1377U;
	int32_t x639 = -1;
	uint32_t x640 = 1671430U;
	volatile uint32_t t106 = 27798282U;

    t106 = ((x637-x638)*(x639|x640));

    if (t106 != 1122U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x641 = INT8_MAX;
	uint32_t x642 = 2U;
	volatile int8_t x643 = INT8_MAX;
	uint32_t t107 = 26004629U;

    t107 = ((x641-x642)*(x643|x644));

    if (t107 != 4294967171U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x645 = -1692002LL;
	uint64_t x646 = UINT64_MAX;
	int64_t x648 = 51LL;
	static volatile uint64_t t108 = 254672790400LLU;

    t108 = ((x645-x646)*(x647|x648));

    if (t108 != 9223372036768483757LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x649 = -1;
	int64_t x650 = 1LL;
	int8_t x651 = -7;
	int16_t x652 = -678;
	volatile int64_t t109 = 5404404LL;

    t109 = ((x649-x650)*(x651|x652));

    if (t109 != 10LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x658 = 1005287966U;
	int32_t x659 = INT32_MIN;
	int16_t x660 = INT16_MIN;
	uint32_t t110 = 87U;

    t110 = ((x657-x658)*(x659|x660));

    if (t110 != 3171909632U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x661 = -1LL;
	int32_t x662 = -1;
	uint32_t x663 = 45U;
	int16_t x664 = INT16_MIN;
	static int64_t t111 = 21LL;

    t111 = ((x661-x662)*(x663|x664));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x665 = 474U;
	uint8_t x666 = 1U;
	uint32_t t112 = 10550U;

    t112 = ((x665-x666)*(x667|x668));

    if (t112 != 4294962093U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x669 = -3540;
	volatile uint64_t t113 = 523691165490LLU;

    t113 = ((x669-x670)*(x671|x672));

    if (t113 != 13404455550030120496LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x673 = 32;
	volatile int16_t x674 = 0;
	uint64_t x675 = UINT64_MAX;
	int16_t x676 = -3725;

    t114 = ((x673-x674)*(x675|x676));

    if (t114 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x677 = 14U;
	static volatile int64_t x678 = -10711464LL;
	uint8_t x679 = 90U;
	volatile int16_t x680 = INT16_MIN;

    t115 = ((x677-x678)*(x679|x680));

    if (t115 != -350029678084LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x686 = UINT8_MAX;
	int32_t x688 = -1;
	volatile int64_t t116 = 378775LL;

    t116 = ((x685-x686)*(x687|x688));

    if (t116 != 3818395103017172723LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x689 = -1;
	volatile int64_t x690 = -8510304609LL;
	int16_t x692 = INT16_MAX;

    t117 = ((x689-x690)*(x691|x692));

    if (t117 != 1060804967436062368LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x694 = 180;
	uint32_t x695 = 2092903870U;
	uint16_t x696 = 11158U;
	volatile int64_t t118 = 65045147308533LL;

    t118 = ((x693-x694)*(x695|x696));

    if (t118 != -378815693142LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x698 = INT16_MAX;
	static uint32_t x699 = 361555327U;
	int16_t x700 = -65;
	static uint32_t t119 = 11956395U;

    t119 = ((x697-x698)*(x699|x700));

    if (t119 != 65535U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x703 = INT8_MIN;
	static int16_t x704 = 25;
	static volatile uint64_t t120 = 34356817915LLU;

    t120 = ((x701-x702)*(x703|x704));

    if (t120 != 9223372036858019690LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x706 = -4;
	uint8_t x707 = UINT8_MAX;
	static volatile int8_t x708 = INT8_MIN;
	static int32_t t121 = -41;

    t121 = ((x705-x706)*(x707|x708));

    if (t121 != -19771) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x709 = 1U;
	volatile int64_t x710 = -1LL;
	static uint8_t x711 = UINT8_MAX;
	int8_t x712 = -1;

    t122 = ((x709-x710)*(x711|x712));

    if (t122 != -2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x713 = INT32_MIN;
	static int8_t x714 = INT8_MIN;
	int32_t x715 = INT32_MAX;
	static int16_t x716 = -1;
	int32_t t123 = -154076894;

    t123 = ((x713-x714)*(x715|x716));

    if (t123 != 2147483520) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x717 = -1;
	int64_t x719 = -1LL;
	volatile int64_t t124 = -483557106413LL;

    t124 = ((x717-x718)*(x719|x720));

    if (t124 != 13LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x721 = 33712895U;
	static int32_t x722 = 60082027;
	uint32_t x723 = 185U;
	uint32_t x724 = 3429530U;
	uint32_t t125 = 1355468540U;

    t125 = ((x721-x722)*(x723|x724));

    if (t125 != 231935260U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x726 = -1LL;
	uint8_t x727 = UINT8_MAX;
	uint16_t x728 = UINT16_MAX;
	int64_t t126 = -4867543378213746LL;

    t126 = ((x725-x726)*(x727|x728));

    if (t126 != -8322945LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x733 = -1LL;
	int32_t x734 = INT32_MIN;
	int64_t t127 = -6743LL;

    t127 = ((x733-x734)*(x735|x736));

    if (t127 != 9223372030412324865LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x737 = 48U;
	int32_t x738 = -1;
	int32_t x739 = 79234677;
	uint32_t x740 = UINT32_MAX;
	volatile uint32_t t128 = 4323063U;

    t128 = ((x737-x738)*(x739|x740));

    if (t128 != 4294967247U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x753 = -17372186;
	int64_t x754 = -1LL;
	uint64_t x755 = 359003915632260LLU;
	volatile uint32_t x756 = 2U;

    t129 = ((x753-x754)*(x755|x756));

    if (t129 != 16763802899490565354LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x758 = 390544328571LLU;
	static volatile uint64_t t130 = 1623459LLU;

    t130 = ((x757-x758)*(x759|x760));

    if (t130 != 390544295804LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x761 = 1U;
	uint32_t x762 = 247U;

    t131 = ((x761-x762)*(x763|x764));

    if (t131 != 246U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x765 = INT16_MAX;
	static int8_t x766 = INT8_MIN;
	int16_t x768 = INT16_MIN;
	int32_t t132 = -13116388;

    t132 = ((x765-x766)*(x767|x768));

    if (t132 != -4210560) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x769 = 19U;
	int32_t x771 = INT32_MAX;
	volatile int64_t x772 = -1LL;
	static volatile int64_t t133 = 7785843679626LL;

    t133 = ((x769-x770)*(x771|x772));

    if (t133 != 2694339LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x774 = -3;
	static int64_t x775 = INT64_MAX;
	int8_t x776 = -1;
	static volatile int64_t t134 = -413LL;

    t134 = ((x773-x774)*(x775|x776));

    if (t134 != 2147483645LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x777 = INT64_MIN;
	int32_t x779 = -1;
	static volatile int64_t t135 = -844489939565722554LL;

    t135 = ((x777-x778)*(x779|x780));

    if (t135 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x785 = UINT16_MAX;
	int8_t x786 = INT8_MIN;
	uint16_t x787 = UINT16_MAX;
	int16_t x788 = INT16_MIN;
	int32_t t136 = -301;

    t136 = ((x785-x786)*(x787|x788));

    if (t136 != -65663) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x789 = INT32_MIN;
	volatile uint64_t x790 = UINT64_MAX;
	int64_t x791 = INT64_MIN;
	int64_t x792 = INT64_MIN;
	uint64_t t137 = 10951115487997LLU;

    t137 = ((x789-x790)*(x791|x792));

    if (t137 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x801 = -1;
	int8_t x802 = INT8_MIN;
	int8_t x803 = -36;
	int16_t x804 = 2;

    t138 = ((x801-x802)*(x803|x804));

    if (t138 != -4318) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x805 = -176668297036701546LL;
	int32_t x806 = INT32_MAX;
	int64_t x807 = -1LL;
	int32_t x808 = 116;
	static volatile int64_t t139 = 289092LL;

    t139 = ((x805-x806)*(x807|x808));

    if (t139 != 176668299184185193LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x809 = UINT32_MAX;
	uint16_t x810 = 129U;
	volatile uint64_t x811 = UINT64_MAX;
	static int16_t x812 = INT16_MIN;

    t140 = ((x809-x810)*(x811|x812));

    if (t140 != 18446744069414584450LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x813 = UINT16_MAX;
	static int64_t x814 = 604017425864LL;
	int8_t x815 = INT8_MIN;
	static uint16_t x816 = UINT16_MAX;
	int64_t t141 = 367821LL;

    t141 = ((x813-x814)*(x815|x816));

    if (t141 != 604017360329LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x817 = INT32_MIN;
	int64_t x818 = -1LL;
	static int16_t x820 = INT16_MAX;
	volatile int64_t t142 = 6712350388748LL;

    t142 = ((x817-x818)*(x819|x820));

    if (t142 != 2147483647LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x825 = -1;
	uint64_t x826 = 88575LLU;
	volatile int16_t x827 = 0;
	int16_t x828 = INT16_MIN;

    t143 = ((x825-x826)*(x827|x828));

    if (t143 != 2902458368LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x833 = INT32_MAX;
	int32_t x834 = INT32_MAX;
	int64_t x835 = INT64_MIN;
	uint16_t x836 = 1U;
	static volatile int64_t t144 = -9551986982019884LL;

    t144 = ((x833-x834)*(x835|x836));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x837 = 33448844;
	volatile uint32_t x838 = 3U;
	volatile int32_t x839 = 0;
	volatile uint32_t t145 = 416218750U;

    t145 = ((x837-x838)*(x839|x840));

    if (t145 != 4261518455U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x841 = 535509878U;
	volatile uint64_t x842 = 8287567214663LLU;
	uint64_t x843 = UINT64_MAX;
	volatile uint64_t t146 = 109LLU;

    t146 = ((x841-x842)*(x843|x844));

    if (t146 != 8287031704785LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x845 = -29463;
	static uint64_t x846 = UINT64_MAX;
	int16_t x847 = INT16_MAX;
	uint16_t x848 = 19575U;

    t147 = ((x845-x846)*(x847|x848));

    if (t147 != 18446744072744170262LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x849 = 2142U;
	int32_t x850 = 23764411;
	static int32_t x851 = 101822;
	int16_t x852 = -1;
	int32_t t148 = 174;

    t148 = ((x849-x850)*(x851|x852));

    if (t148 != 23762269) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x853 = 2LLU;
	int16_t x854 = INT16_MAX;
	static int16_t x855 = INT16_MIN;
	uint64_t t149 = 14859459781966LLU;

    t149 = ((x853-x854)*(x855|x856));

    if (t149 != 1073643520LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x863 = 0;
	uint16_t x864 = 64U;
	volatile uint32_t t150 = 3U;

    t150 = ((x861-x862)*(x863|x864));

    if (t150 != 4292870208U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x865 = 7499;
	int16_t x866 = INT16_MAX;
	static uint8_t x867 = 0U;
	static volatile int32_t t151 = 6252881;

    t151 = ((x865-x866)*(x867|x868));

    if (t151 != -1655938380) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x877 = INT32_MIN;
	int8_t x878 = -44;
	static uint64_t x879 = 1332337918356291886LLU;
	int8_t x880 = INT8_MAX;
	uint64_t t152 = 107321110106313456LLU;

    t152 = ((x877-x878)*(x879|x880));

    if (t152 != 11626538836184285652LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x882 = INT8_MAX;
	volatile uint32_t x883 = UINT32_MAX;
	volatile uint32_t t153 = 615548684U;

    t153 = ((x881-x882)*(x883|x884));

    if (t153 != 4294967050U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x893 = -1;
	int8_t x894 = -1;
	static int16_t x895 = INT16_MAX;
	volatile int32_t x896 = INT32_MIN;
	int32_t t154 = -20546;

    t154 = ((x893-x894)*(x895|x896));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x897 = 0U;
	int64_t x898 = 757050146LL;
	volatile int32_t x899 = 1;
	static uint64_t x900 = 13846583LLU;

    t155 = ((x897-x898)*(x899|x900));

    if (t155 != 18436261516027800498LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x901 = -1;
	int8_t x902 = -1;
	int32_t t156 = 150638746;

    t156 = ((x901-x902)*(x903|x904));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x905 = -9;
	volatile uint64_t x906 = UINT64_MAX;
	int16_t x907 = INT16_MIN;
	int8_t x908 = -1;

    t157 = ((x905-x906)*(x907|x908));

    if (t157 != 8LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x911 = -1;
	uint8_t x912 = 0U;
	volatile int32_t t158 = -2;

    t158 = ((x909-x910)*(x911|x912));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x913 = 7756LLU;
	static volatile uint64_t x914 = 193463LLU;

    t159 = ((x913-x914)*(x915|x916));

    if (t159 != 18446345270963918187LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x918 = INT8_MIN;
	volatile int32_t x919 = -646838;
	uint32_t t160 = 44765U;

    t160 = ((x917-x918)*(x919|x920));

    if (t160 != 4049391909U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x921 = -4037405126LL;
	volatile int16_t x923 = INT16_MIN;
	static uint64_t x924 = 821LLU;
	volatile uint64_t t161 = 3LLU;

    t161 = ((x921-x922)*(x923|x924));

    if (t161 != 128982989706807LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x926 = -1;
	uint64_t x927 = 2328077LLU;
	static int64_t x928 = INT64_MIN;
	volatile uint64_t t162 = 56442644LLU;

    t162 = ((x925-x926)*(x927|x928));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x929 = UINT32_MAX;
	int8_t x930 = INT8_MIN;
	int32_t x931 = INT32_MIN;
	volatile uint32_t x932 = 1045U;
	volatile uint32_t t163 = 1525000892U;

    t163 = ((x929-x930)*(x931|x932));

    if (t163 != 2147616363U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x933 = INT8_MIN;
	uint32_t x934 = 765401U;
	volatile int64_t x935 = INT64_MIN;
	int32_t x936 = INT32_MIN;

    t164 = ((x933-x934)*(x935|x936));

    if (t164 != -9221728075845206016LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x938 = -1LL;
	uint64_t x939 = 12234188283662LLU;
	int8_t x940 = 3;

    t165 = ((x937-x938)*(x939|x940));

    if (t165 != 13891031550821293839LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x941 = UINT32_MAX;
	int32_t x942 = INT32_MAX;
	uint32_t x943 = UINT32_MAX;
	volatile int16_t x944 = INT16_MAX;

    t166 = ((x941-x942)*(x943|x944));

    if (t166 != 2147483648U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x945 = -1LL;
	int8_t x946 = -1;
	volatile int64_t x947 = -1LL;
	static int64_t x948 = INT64_MIN;

    t167 = ((x945-x946)*(x947|x948));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x949 = INT16_MIN;
	uint16_t x950 = 78U;
	int16_t x951 = INT16_MAX;
	int8_t x952 = -1;
	volatile int32_t t168 = 10429;

    t168 = ((x949-x950)*(x951|x952));

    if (t168 != 32846) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint16_t x959 = UINT16_MAX;
	volatile int8_t x960 = INT8_MIN;

    t169 = ((x957-x958)*(x959|x960));

    if (t169 != 4294967176U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x962 = 72371695506LL;
	static int32_t x963 = -38007;
	uint16_t x964 = 1U;
	uint64_t t170 = 4567681661LLU;

    t170 = ((x961-x962)*(x963|x964));

    if (t170 != 2745260910630018LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x965 = 2084U;
	uint32_t x966 = 7378598U;
	uint32_t x967 = UINT32_MAX;
	int16_t x968 = -1240;
	volatile uint32_t t171 = 2U;

    t171 = ((x965-x966)*(x967|x968));

    if (t171 != 7376514U) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint16_t x970 = 13U;
	static int32_t x971 = 1086653;
	volatile uint8_t x972 = UINT8_MAX;
	volatile int32_t t172 = -257002;

    t172 = ((x969-x970)*(x971|x972));

    if (t172 != -153227379) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x981 = UINT32_MAX;
	uint32_t x983 = 118182U;
	int64_t x984 = -4070097LL;
	volatile int64_t t173 = 887550596LL;

    t173 = ((x981-x982)*(x983|x984));

    if (t173 != -17471587137017728LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x985 = -6;
	static int64_t x986 = INT64_MIN;
	int32_t x987 = -2;

    t174 = ((x985-x986)*(x987|x988));

    if (t174 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x989 = 2U;
	static int16_t x990 = INT16_MAX;
	static int16_t x991 = -1;
	uint64_t x992 = 1LLU;

    t175 = ((x989-x990)*(x991|x992));

    if (t175 != 32765LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x993 = 19U;
	static int8_t x994 = INT8_MAX;
	int16_t x996 = -4173;

    t176 = ((x993-x994)*(x995|x996));

    if (t176 != 108LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x997 = -1;
	uint16_t x998 = 915U;
	volatile int16_t x999 = INT16_MIN;
	volatile int32_t x1000 = -1;

    t177 = ((x997-x998)*(x999|x1000));

    if (t177 != 916) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1001 = UINT16_MAX;
	volatile uint16_t x1002 = 2637U;
	uint16_t x1003 = 449U;
	int64_t t178 = 41280520833103LL;

    t178 = ((x1001-x1002)*(x1003|x1004));

    if (t178 != -961313470718666406LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1005 = 4403U;
	int8_t x1006 = -1;
	uint32_t x1007 = 1390U;
	int8_t x1008 = -1;

    t179 = ((x1005-x1006)*(x1007|x1008));

    if (t179 != 4294962892U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1022 = -1LL;
	static int16_t x1024 = INT16_MIN;
	int64_t t180 = 739713LL;

    t180 = ((x1021-x1022)*(x1023|x1024));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1025 = 226U;
	volatile uint8_t x1027 = 14U;
	static uint8_t x1028 = 2U;

    t181 = ((x1025-x1026)*(x1027|x1028));

    if (t181 != 3024) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1033 = 1U;
	static int8_t x1034 = -1;
	int64_t x1036 = INT64_MIN;
	volatile int64_t t182 = -1938311301LL;

    t182 = ((x1033-x1034)*(x1035|x1036));

    if (t182 != -256LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x1037 = UINT32_MAX;
	volatile int64_t x1038 = -1LL;
	static int8_t x1039 = INT8_MAX;
	volatile uint8_t x1040 = 30U;

    t183 = ((x1037-x1038)*(x1039|x1040));

    if (t183 != 545460846592LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1046 = 8LLU;
	volatile uint64_t t184 = 401167399LLU;

    t184 = ((x1045-x1046)*(x1047|x1048));

    if (t184 != 18446744035054845961LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1057 = UINT32_MAX;
	volatile int32_t x1058 = INT32_MIN;
	int32_t x1059 = -1;
	int32_t x1060 = INT32_MIN;
	uint32_t t185 = 53454008U;

    t185 = ((x1057-x1058)*(x1059|x1060));

    if (t185 != 2147483649U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1066 = -83;
	int16_t x1068 = 1531;
	volatile int32_t t186 = -46370;

    t186 = ((x1065-x1066)*(x1067|x1068));

    if (t186 != 32685) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1069 = 2U;
	int64_t x1070 = -320LL;
	static int16_t x1071 = INT16_MIN;
	uint64_t x1072 = 3574780968038422393LLU;
	volatile uint64_t t187 = 112619803741LLU;

    t187 = ((x1069-x1070)*(x1071|x1072));

    if (t187 != 18446744073706210866LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1073 = -1;
	int64_t x1076 = INT64_MAX;
	volatile int64_t t188 = 327840422531LL;

    t188 = ((x1073-x1074)*(x1075|x1076));

    if (t188 != -4292926093LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1077 = 14722LLU;
	static volatile int32_t x1078 = INT32_MIN;
	static uint8_t x1079 = UINT8_MAX;
	static volatile uint64_t t189 = 4658LLU;

    t189 = ((x1077-x1078)*(x1079|x1080));

    if (t189 != 7694486659710LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1085 = 1;
	uint32_t x1086 = 15986U;
	volatile int8_t x1087 = -12;
	volatile uint32_t t190 = 40U;

    t190 = ((x1085-x1086)*(x1087|x1088));

    if (t190 != 15985U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1089 = INT8_MIN;
	int16_t x1090 = INT16_MAX;
	int16_t x1091 = -2884;
	uint32_t x1092 = 3674U;
	volatile uint32_t t191 = 76997U;

    t191 = ((x1089-x1090)*(x1091|x1092));

    if (t191 != 8486910U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1097 = 10132626887460698LL;
	int32_t x1098 = 7119461;
	static uint16_t x1100 = UINT16_MAX;
	volatile int64_t t192 = -1303245LL;

    t192 = ((x1097-x1098)*(x1099|x1100));

    if (t192 != -10132626880341237LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1107 = INT8_MIN;
	volatile int64_t t193 = -224338341176960LL;

    t193 = ((x1105-x1106)*(x1107|x1108));

    if (t193 != 1021LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1117 = INT64_MAX;
	int8_t x1118 = 0;
	int64_t x1119 = -1LL;
	int8_t x1120 = INT8_MAX;
	volatile int64_t t194 = -781LL;

    t194 = ((x1117-x1118)*(x1119|x1120));

    if (t194 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1121 = UINT64_MAX;
	static uint16_t x1123 = 34U;
	int32_t x1124 = 81506705;

    t195 = ((x1121-x1122)*(x1123|x1124));

    if (t195 != 18096675295300943872LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1125 = -1LL;
	int8_t x1126 = INT8_MAX;
	static volatile int64_t x1127 = INT64_MIN;
	uint64_t x1128 = 35012325865752786LLU;
	uint64_t t196 = 156655698468LLU;

    t196 = ((x1125-x1126)*(x1127|x1128));

    if (t196 != 13965166362893195008LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1129 = 345902U;
	int8_t x1131 = INT8_MIN;
	int16_t x1132 = 225;

    t197 = ((x1129-x1130)*(x1131|x1132));

    if (t197 != 4284240366U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1133 = 10974U;
	int8_t x1134 = -28;
	static int8_t x1135 = 7;
	static int8_t x1136 = -3;
	uint32_t t198 = 3301U;

    t198 = ((x1133-x1134)*(x1135|x1136));

    if (t198 != 4294956294U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1137 = 154U;
	volatile int8_t x1138 = -1;
	int8_t x1139 = -1;
	static int8_t x1140 = INT8_MIN;
	volatile int32_t t199 = -4063867;

    t199 = ((x1137-x1138)*(x1139|x1140));

    if (t199 != -155) { NG(); } else { ; }
	
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

