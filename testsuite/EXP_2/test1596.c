
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

static int32_t x3 = INT32_MIN;
static int64_t x8 = INT64_MIN;
static uint64_t x9 = 68275115980LLU;
uint8_t x12 = UINT8_MAX;
static int16_t x24 = INT16_MIN;
volatile int32_t t5 = -4801;
int8_t x25 = INT8_MIN;
static int64_t x28 = -228579493260854LL;
static int16_t x30 = INT16_MIN;
static int8_t x36 = INT8_MIN;
int64_t x51 = -609403350779LL;
volatile int32_t t12 = 3294312;
static int8_t x63 = INT8_MIN;
uint64_t x66 = UINT64_MAX;
int32_t t15 = -412546;
uint16_t x70 = 758U;
static uint64_t t17 = 259017164659LLU;
int8_t x80 = INT8_MIN;
uint64_t x81 = UINT64_MAX;
uint64_t x89 = UINT64_MAX;
int32_t x92 = -1;
uint64_t t21 = 0LLU;
volatile int64_t x98 = INT64_MIN;
uint16_t x101 = 0U;
int64_t x103 = INT64_MIN;
int32_t t24 = 1;
uint64_t t25 = 520553959134LLU;
int8_t x110 = INT8_MIN;
static uint8_t x113 = 93U;
uint16_t x114 = 511U;
static uint64_t x117 = 18130796339380LLU;
volatile uint64_t t28 = 5150293793143325651LLU;
volatile int16_t x130 = -229;
int16_t x134 = -2113;
int16_t x136 = -1;
volatile uint32_t x138 = 81555623U;
int8_t x143 = 0;
volatile int8_t x149 = INT8_MAX;
volatile uint16_t x151 = 238U;
static uint64_t x152 = UINT64_MAX;
volatile uint64_t t36 = 25466LLU;
volatile uint8_t x153 = 0U;
int16_t x154 = INT16_MIN;
int32_t x155 = INT32_MAX;
volatile int8_t x157 = INT8_MIN;
static int32_t t38 = 995;
static uint16_t x162 = 15U;
uint8_t x166 = 57U;
volatile int32_t t40 = 121;
static volatile uint64_t x172 = 4082807744202494472LLU;
int64_t x176 = INT64_MIN;
static int32_t x181 = -27;
static int32_t t43 = 116;
int16_t x186 = -1;
volatile int32_t t45 = 3567;
int32_t x199 = INT32_MIN;
volatile int32_t t48 = 1;
int8_t x206 = INT8_MIN;
static uint16_t x212 = UINT16_MAX;
int32_t t50 = 1937741;
int32_t t51 = 1;
uint32_t x228 = UINT32_MAX;
int32_t t53 = 354524441;
int8_t x233 = -18;
volatile uint8_t x239 = 37U;
static uint32_t x247 = UINT32_MAX;
static int64_t x253 = INT64_MIN;
uint32_t x254 = 1696U;
int64_t x257 = -1LL;
int8_t x260 = INT8_MIN;
int8_t x264 = INT8_MIN;
volatile int64_t x269 = -1LL;
int16_t x275 = -1;
uint16_t x278 = 1736U;
volatile int8_t x279 = INT8_MIN;
int16_t x280 = INT16_MIN;
volatile int32_t t65 = -28848326;
volatile int64_t x281 = INT64_MIN;
volatile int64_t t66 = INT64_MIN;
int64_t x288 = -163983LL;
static volatile int32_t t68 = -1003692;
int64_t t69 = -41132994808736LL;
static int32_t x317 = -173318653;
uint32_t x326 = 8074366U;
uint16_t x327 = UINT16_MAX;
static int64_t x329 = 15627LL;
uint8_t x333 = 2U;
int32_t x334 = -1;
int32_t t78 = -33;
volatile int64_t x346 = INT64_MIN;
static int32_t t79 = -5925;
uint64_t x349 = 232928992433622LLU;
static int16_t x364 = INT16_MIN;
static int32_t t82 = 20220;
uint64_t x365 = 1043LLU;
int64_t x367 = -1052251043078913464LL;
static int32_t t84 = 0;
int64_t x374 = INT64_MIN;
int64_t t85 = 821657554534LL;
int8_t x377 = 53;
static int64_t x380 = -577LL;
int8_t x385 = 1;
int16_t x386 = INT16_MAX;
static int8_t x392 = INT8_MAX;
volatile int32_t t89 = 10325530;
int16_t x394 = 0;
uint16_t x396 = UINT16_MAX;
volatile int64_t t90 = 1944248713314455892LL;
static int16_t x398 = INT16_MIN;
int64_t x400 = -1LL;
int16_t x402 = INT16_MAX;
int16_t x406 = 46;
uint16_t x410 = UINT16_MAX;
volatile int8_t x412 = INT8_MIN;
volatile int32_t t94 = 5495575;
volatile int32_t t95 = -8836;
int32_t x419 = -1;
uint64_t t96 = 129828190640LLU;
static uint32_t x431 = 2389U;
uint64_t t99 = 13604891LLU;
volatile int16_t x433 = INT16_MIN;
int8_t x438 = INT8_MAX;
int64_t x439 = -684521768430LL;
volatile uint16_t x444 = UINT16_MAX;
static int32_t x451 = -228089;
static uint32_t x452 = 60063556U;
static volatile int64_t x455 = INT64_MIN;
uint32_t x460 = 283U;
volatile uint32_t t106 = 127755073U;
static uint8_t x464 = UINT8_MAX;
int32_t x471 = INT32_MIN;
volatile int64_t x475 = -1630984116260832099LL;
uint16_t x478 = UINT16_MAX;
volatile int32_t t111 = 0;
int16_t x485 = INT16_MAX;
volatile int8_t x492 = -1;
int8_t x494 = INT8_MIN;
int32_t x506 = INT32_MIN;
volatile int64_t x508 = -1060828981038530LL;
volatile int32_t t119 = -454446;
volatile int32_t x513 = -28;
volatile int8_t x514 = INT8_MIN;
static int32_t x519 = INT32_MIN;
int64_t x529 = 106228714933900LL;
int16_t x531 = -22;
int32_t x534 = INT32_MIN;
int8_t x536 = 1;
volatile int64_t t123 = 109LL;
int8_t x547 = -15;
volatile uint64_t t127 = 629369203843LLU;
int64_t x553 = -1LL;
uint32_t x557 = 84581U;
uint64_t x559 = UINT64_MAX;
volatile int64_t t130 = -45070574792LL;
static volatile int32_t t131 = -3;
volatile int32_t t134 = 1;
volatile int16_t x587 = -1;
volatile int16_t x589 = INT16_MIN;
int16_t x592 = -1;
int16_t x597 = 7826;
int64_t t138 = -1472584746LL;
int16_t x603 = INT16_MIN;
volatile int8_t x604 = 4;
int16_t x605 = -1;
int8_t x606 = INT8_MAX;
volatile uint16_t x607 = 1U;
int8_t x613 = -16;
volatile uint16_t x616 = 2319U;
int64_t x620 = INT64_MIN;
uint64_t t145 = 1621LLU;
static int64_t x630 = INT64_MIN;
uint16_t x632 = 453U;
uint32_t x633 = 24716U;
volatile int64_t t147 = -1LL;
static volatile int8_t x639 = 1;
volatile uint64_t t152 = 892LLU;
volatile int32_t x658 = 23048;
uint64_t x660 = 103798759LLU;
int32_t t155 = -85116;
volatile int64_t t157 = 3LL;
volatile int32_t t159 = -2008410;
static int64_t x686 = -1LL;
static int64_t x689 = INT64_MIN;
static uint32_t x691 = UINT32_MAX;
int8_t x695 = INT8_MIN;
volatile uint64_t t162 = 3532995359065008LLU;
uint64_t t163 = 3195767229636238LLU;
volatile uint64_t x703 = 965611947669LLU;
int16_t x704 = -1;
volatile int32_t t164 = 2;
volatile int16_t x706 = -1;
int8_t x707 = INT8_MAX;
int64_t t169 = 1LL;
uint8_t x729 = 6U;
int64_t x734 = INT64_MIN;
int64_t t173 = -16491078790042978LL;
int64_t x742 = INT64_MAX;
static volatile int32_t t174 = 7;
volatile int16_t x749 = -73;
static int32_t t177 = -1;
int32_t x758 = -16482961;
int8_t x763 = INT8_MIN;
int32_t x764 = 18;
static volatile int64_t t180 = 2107653978611993LL;
int16_t x783 = INT16_MIN;
uint64_t x788 = 22688632989549LLU;
static uint16_t x804 = 430U;
int8_t x814 = 5;
uint64_t x817 = 538359270580LLU;
volatile uint64_t t192 = 344LLU;
int16_t x821 = INT16_MIN;
static uint32_t x824 = UINT32_MAX;
uint8_t x828 = 6U;
static int64_t x829 = 969051394LL;
int64_t x831 = INT64_MIN;
uint32_t x837 = 502292619U;


void f0(void) {
    	static int16_t x1 = -1;
	uint32_t x2 = 463706U;
	int32_t x4 = -2228304;
	int32_t t0 = 199;

    t0 = ((x1-(x2>x3))^x4);

    if (t0 != 2228303) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -8131335150696443LL;
	volatile uint16_t x6 = 41U;
	int16_t x7 = 9467;
	static int64_t t1 = -8338326000799356LL;

    t1 = ((x5-(x6>x7))^x8);

    if (t1 != 9215240701704079365LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 1009106767922LLU;
	static int8_t x11 = INT8_MAX;
	volatile uint64_t t2 = 204LLU;

    t2 = ((x9-(x10>x11))^x12);

    if (t2 != 68275115828LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int32_t x14 = -63;
	int16_t x15 = INT16_MIN;
	static volatile int64_t x16 = -527510862709842LL;
	volatile int64_t t3 = -26841926875348041LL;

    t3 = ((x13-(x14>x15))^x16);

    if (t3 != -527509198846896LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	volatile int64_t x18 = INT64_MIN;
	static int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -342931402;

    t4 = ((x17-(x18>x19))^x20);

    if (t4 != -2147450881) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 676;
	static int64_t x22 = INT64_MIN;
	int8_t x23 = -1;

    t5 = ((x21-(x22>x23))^x24);

    if (t5 != -32092) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MAX;
	uint32_t x27 = 1915253686U;
	volatile int64_t t6 = -3442366897100428255LL;

    t6 = ((x25-(x26>x27))^x28);

    if (t6 != 228579493260981LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	static int32_t x31 = INT32_MIN;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 252917311LLU;

    t7 = ((x29-(x30>x31))^x32);

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	volatile int16_t x34 = INT16_MIN;
	volatile int32_t x35 = -1;
	int32_t t8 = 921599491;

    t8 = ((x33-(x34>x35))^x36);

    if (t8 != 32640) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -80;
	static uint64_t x38 = UINT64_MAX;
	static int32_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -32420172;

    t9 = ((x37-(x38>x39))^x40);

    if (t9 != -65457) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	volatile int64_t x42 = -30428LL;
	int8_t x43 = -1;
	int8_t x44 = -1;
	static int32_t t10 = INT32_MIN;

    t10 = ((x41-(x42>x43))^x44);

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = 584U;
	int64_t x46 = -1LL;
	int32_t x47 = INT32_MIN;
	int32_t x48 = -1;
	int32_t t11 = -523;

    t11 = ((x45-(x46>x47))^x48);

    if (t11 != -584) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 3U;
	int16_t x50 = INT16_MIN;
	int32_t x52 = 950466468;

    t12 = ((x49-(x50>x51))^x52);

    if (t12 != 950466470) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	static int64_t x54 = INT64_MAX;
	int16_t x55 = -1;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -685;

    t13 = ((x53-(x54>x55))^x56);

    if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MIN;
	volatile int64_t x62 = INT64_MIN;
	static int32_t x64 = 1;
	volatile int32_t t14 = -2548628;

    t14 = ((x61-(x62>x63))^x64);

    if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = 6842;
	uint16_t x67 = UINT16_MAX;
	int8_t x68 = 6;

    t15 = ((x65-(x66>x67))^x68);

    if (t15 != 6847) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MIN;
	uint32_t x71 = UINT32_MAX;
	static int8_t x72 = 0;
	int32_t t16 = INT32_MIN;

    t16 = ((x69-(x70>x71))^x72);

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MAX;
	static uint16_t x74 = 48U;
	static int64_t x75 = -2LL;
	uint64_t x76 = 16016LLU;

    t17 = ((x73-(x74>x75))^x76);

    if (t17 != 2147467630LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MIN;
	uint32_t x78 = 104196730U;
	volatile uint32_t x79 = 30572U;
	static volatile int32_t t18 = -1;

    t18 = ((x77-(x78>x79))^x80);

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	volatile int8_t x84 = 1;
	static uint64_t t19 = UINT64_MAX;

    t19 = ((x81-(x82>x83))^x84);

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	static volatile int32_t x86 = -1988;
	static int32_t x87 = 146296;
	static uint32_t x88 = 525U;
	volatile uint32_t t20 = 43583U;

    t20 = ((x85-(x86>x87))^x88);

    if (t20 != 2147484173U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x90 = INT8_MIN;
	static int16_t x91 = INT16_MIN;

    t21 = ((x89-(x90>x91))^x92);

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = UINT32_MAX;
	static uint8_t x94 = 0U;
	int16_t x95 = INT16_MAX;
	int64_t x96 = INT64_MAX;
	static volatile int64_t t22 = -1LL;

    t22 = ((x93-(x94>x95))^x96);

    if (t22 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -2762055763530LL;
	volatile int64_t x99 = 56978430247LL;
	int16_t x100 = -6;
	int64_t t23 = -145644912782165486LL;

    t23 = ((x97-(x98>x99))^x100);

    if (t23 != 2762055763532LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x102 = INT64_MIN;
	int32_t x104 = -1;

    t24 = ((x101-(x102>x103))^x104);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x105 = 10U;
	int8_t x106 = -1;
	volatile int16_t x107 = INT16_MIN;
	uint64_t x108 = UINT64_MAX;

    t25 = ((x105-(x106>x107))^x108);

    if (t25 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x109 = INT8_MAX;
	uint16_t x111 = UINT16_MAX;
	int32_t x112 = -1;
	static volatile int32_t t26 = 520019242;

    t26 = ((x109-(x110>x111))^x112);

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x115 = 1U;
	uint16_t x116 = UINT16_MAX;
	static volatile int32_t t27 = -2670;

    t27 = ((x113-(x114>x115))^x116);

    if (t27 != 65443) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x118 = 1U;
	uint32_t x119 = UINT32_MAX;
	volatile uint64_t x120 = 372757450LLU;

    t28 = ((x117-(x118>x119))^x120);

    if (t28 != 18130962953086LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = -1;
	int32_t x122 = -1;
	uint64_t x123 = 1LLU;
	static uint8_t x124 = 25U;
	volatile int32_t t29 = 0;

    t29 = ((x121-(x122>x123))^x124);

    if (t29 != -25) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x125 = 10U;
	static int16_t x126 = -1;
	static int16_t x127 = -694;
	static int32_t x128 = 2;
	volatile int32_t t30 = -12031;

    t30 = ((x125-(x126>x127))^x128);

    if (t30 != 11) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 23475LLU;
	static int16_t x131 = INT16_MIN;
	uint16_t x132 = 78U;
	volatile uint64_t t31 = 888098690864593548LLU;

    t31 = ((x129-(x130>x131))^x132);

    if (t31 != 23548LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x133 = 1;
	int64_t x135 = INT64_MIN;
	static volatile int32_t t32 = -1197;

    t32 = ((x133-(x134>x135))^x136);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 111U;
	static volatile int32_t x139 = -1;
	volatile int32_t x140 = -1;
	volatile uint32_t t33 = 29749323U;

    t33 = ((x137-(x138>x139))^x140);

    if (t33 != 4294967184U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x141 = -753677110LL;
	int16_t x142 = INT16_MIN;
	uint64_t x144 = 2864706662634811355LLU;
	volatile uint64_t t34 = 44886140587LLU;

    t34 = ((x141-(x142>x143))^x144);

    if (t34 != 15582037411530089233LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x145 = INT32_MIN;
	volatile int32_t x146 = 56;
	int16_t x147 = 121;
	int16_t x148 = INT16_MIN;
	int32_t t35 = 239777609;

    t35 = ((x145-(x146>x147))^x148);

    if (t35 != 2147450880) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x150 = UINT32_MAX;

    t36 = ((x149-(x150>x151))^x152);

    if (t36 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x156 = 13684229U;
	volatile uint32_t t37 = 12U;

    t37 = ((x153-(x154>x155))^x156);

    if (t37 != 13684229U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x158 = 11U;
	uint32_t x159 = 638762U;
	volatile int32_t x160 = INT32_MIN;

    t38 = ((x157-(x158>x159))^x160);

    if (t38 != 2147483520) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -1;
	static int16_t x163 = -1;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t39 = -57739;

    t39 = ((x161-(x162>x163))^x164);

    if (t39 != 126) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = -1;
	uint16_t x167 = 9310U;
	volatile int16_t x168 = INT16_MIN;

    t40 = ((x165-(x166>x167))^x168);

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x169 = INT16_MAX;
	int64_t x170 = 186495023492LL;
	volatile int8_t x171 = -39;
	uint64_t t41 = 12868077458LLU;

    t41 = ((x169-(x170>x171))^x172);

    if (t41 != 4082807744202485238LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	uint32_t x175 = 28U;
	static int64_t t42 = 1LL;

    t42 = ((x173-(x174>x175))^x176);

    if (t42 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x182 = UINT8_MAX;
	uint16_t x183 = 13888U;
	uint16_t x184 = 6310U;

    t43 = ((x181-(x182>x183))^x184);

    if (t43 != -6333) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MIN;
	static int64_t x187 = INT64_MIN;
	int16_t x188 = -12;
	volatile int32_t t44 = -1001447;

    t44 = ((x185-(x186>x187))^x188);

    if (t44 != 139) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = 31;
	int8_t x190 = -1;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MAX;

    t45 = ((x189-(x190>x191))^x192);

    if (t45 != 97) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x193 = INT32_MAX;
	int64_t x194 = INT64_MAX;
	volatile int16_t x195 = 218;
	volatile int16_t x196 = 397;
	int32_t t46 = -466240349;

    t46 = ((x193-(x194>x195))^x196);

    if (t46 != 2147483251) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x197 = 12U;
	int8_t x198 = INT8_MIN;
	volatile uint16_t x200 = 20791U;
	static int32_t t47 = 1;

    t47 = ((x197-(x198>x199))^x200);

    if (t47 != 20796) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x201 = INT16_MIN;
	volatile uint16_t x202 = UINT16_MAX;
	volatile uint8_t x203 = 1U;
	int32_t x204 = INT32_MIN;

    t48 = ((x201-(x202>x203))^x204);

    if (t48 != 2147450879) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = 105541716574290839LL;
	int16_t x207 = INT16_MIN;
	int16_t x208 = -272;
	volatile int64_t t49 = 4909249251727LL;

    t49 = ((x205-(x206>x207))^x208);

    if (t49 != -105541716574290586LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x209 = -1;
	static int64_t x210 = 2233LL;
	int16_t x211 = INT16_MAX;

    t50 = ((x209-(x210>x211))^x212);

    if (t50 != -65536) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = -1;
	int8_t x222 = INT8_MAX;
	uint16_t x223 = 39U;
	uint8_t x224 = 55U;

    t51 = ((x221-(x222>x223))^x224);

    if (t51 != -55) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x225 = 3U;
	int64_t x226 = INT64_MIN;
	int16_t x227 = -421;
	uint32_t t52 = 80U;

    t52 = ((x225-(x226>x227))^x228);

    if (t52 != 4294967292U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = -7;
	int32_t x230 = -1;
	volatile uint8_t x231 = 2U;
	int16_t x232 = INT16_MIN;

    t53 = ((x229-(x230>x231))^x232);

    if (t53 != 32761) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x234 = 1U;
	volatile int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MAX;
	volatile int64_t t54 = 318LL;

    t54 = ((x233-(x234>x235))^x236);

    if (t54 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MIN;
	uint8_t x240 = 1U;
	int32_t t55 = -2;

    t55 = ((x237-(x238>x239))^x240);

    if (t55 != 2147483646) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x241 = UINT8_MAX;
	uint32_t x242 = 7U;
	int8_t x243 = -1;
	int16_t x244 = INT16_MIN;
	int32_t t56 = 2875580;

    t56 = ((x241-(x242>x243))^x244);

    if (t56 != -32513) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x245 = INT64_MAX;
	int16_t x246 = INT16_MAX;
	static int64_t x248 = -1LL;
	int64_t t57 = INT64_MIN;

    t57 = ((x245-(x246>x247))^x248);

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x249 = UINT16_MAX;
	int32_t x250 = INT32_MAX;
	volatile int16_t x251 = INT16_MIN;
	int16_t x252 = -1;
	int32_t t58 = -1;

    t58 = ((x249-(x250>x251))^x252);

    if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x255 = 922033682177918128LLU;
	uint8_t x256 = 103U;
	int64_t t59 = -85396962388LL;

    t59 = ((x253-(x254>x255))^x256);

    if (t59 != -9223372036854775705LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x258 = INT16_MAX;
	int32_t x259 = -1;
	volatile int64_t t60 = 311880821716276LL;

    t60 = ((x257-(x258>x259))^x260);

    if (t60 != 126LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x261 = INT32_MAX;
	static int64_t x262 = INT64_MIN;
	volatile int64_t x263 = -1LL;
	volatile int32_t t61 = -13;

    t61 = ((x261-(x262>x263))^x264);

    if (t61 != -2147483521) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x265 = 3838338279806747LLU;
	int8_t x266 = -1;
	uint16_t x267 = 4636U;
	int16_t x268 = INT16_MIN;
	volatile uint64_t t62 = 0LLU;

    t62 = ((x265-(x266>x267))^x268);

    if (t62 != 18442905735429723931LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x270 = 1U;
	uint16_t x271 = 50U;
	int8_t x272 = INT8_MIN;
	volatile int64_t t63 = 74558LL;

    t63 = ((x269-(x270>x271))^x272);

    if (t63 != 127LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = -6;
	static uint32_t x274 = 218951893U;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t64 = -56;

    t64 = ((x273-(x274>x275))^x276);

    if (t64 != 2147483642) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = 0;

    t65 = ((x277-(x278>x279))^x280);

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x282 = 73103LLU;
	int32_t x283 = -5;
	static uint8_t x284 = 0U;

    t66 = ((x281-(x282>x283))^x284);

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = INT16_MIN;
	static int64_t x286 = 1660530362LL;
	volatile int32_t x287 = INT32_MAX;
	volatile int64_t t67 = 977416919229LL;

    t67 = ((x285-(x286>x287))^x288);

    if (t67 != 196465LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x297 = -1;
	int16_t x298 = -1;
	uint64_t x299 = 164433378LLU;
	int8_t x300 = -1;

    t68 = ((x297-(x298>x299))^x300);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x301 = 1701U;
	uint64_t x302 = 8589330606LLU;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;

    t69 = ((x301-(x302>x303))^x304);

    if (t69 != -9223372036854774107LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x305 = 1;
	uint64_t x306 = 0LLU;
	int8_t x307 = 5;
	uint32_t x308 = 40U;
	volatile uint32_t t70 = 29171648U;

    t70 = ((x305-(x306>x307))^x308);

    if (t70 != 41U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	int16_t x311 = INT16_MIN;
	int8_t x312 = -57;
	static volatile int32_t t71 = 3557;

    t71 = ((x309-(x310>x311))^x312);

    if (t71 != 57) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x313 = 19337U;
	int8_t x314 = INT8_MAX;
	volatile int64_t x315 = INT64_MAX;
	uint8_t x316 = 48U;
	volatile int32_t t72 = -46866;

    t72 = ((x313-(x314>x315))^x316);

    if (t72 != 19385) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x318 = INT64_MIN;
	int32_t x319 = 1960052;
	volatile int8_t x320 = INT8_MIN;
	int32_t t73 = -8836;

    t73 = ((x317-(x318>x319))^x320);

    if (t73 != 173318531) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MAX;
	static uint8_t x324 = UINT8_MAX;
	volatile int64_t t74 = -2926592LL;

    t74 = ((x321-(x322>x323))^x324);

    if (t74 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = INT8_MAX;
	int32_t x328 = INT32_MIN;
	volatile int32_t t75 = 59;

    t75 = ((x325-(x326>x327))^x328);

    if (t75 != -2147483522) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x330 = -556;
	volatile uint32_t x331 = 1006713U;
	int64_t x332 = INT64_MIN;
	volatile int64_t t76 = -18789665146LL;

    t76 = ((x329-(x330>x331))^x332);

    if (t76 != -9223372036854760182LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x335 = INT8_MAX;
	uint32_t x336 = 660511525U;
	volatile uint32_t t77 = 1541U;

    t77 = ((x333-(x334>x335))^x336);

    if (t77 != 660511527U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x341 = 3U;
	uint32_t x342 = 8404476U;
	uint8_t x343 = 0U;
	uint16_t x344 = 13U;

    t78 = ((x341-(x342>x343))^x344);

    if (t78 != 15) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x345 = INT16_MAX;
	volatile int16_t x347 = -21;
	volatile int32_t x348 = INT32_MAX;

    t79 = ((x345-(x346>x347))^x348);

    if (t79 != 2147450880) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x350 = INT64_MIN;
	volatile int16_t x351 = INT16_MAX;
	static int64_t x352 = 19LL;
	uint64_t t80 = 61608964579LLU;

    t80 = ((x349-(x350>x351))^x352);

    if (t80 != 232928992433605LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x357 = 15U;
	volatile int32_t x358 = -1;
	volatile int64_t x359 = -10766918LL;
	int32_t x360 = -12042;
	volatile int32_t t81 = -868;

    t81 = ((x357-(x358>x359))^x360);

    if (t81 != -12040) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x361 = 104U;
	int16_t x362 = INT16_MIN;
	static int16_t x363 = INT16_MAX;

    t82 = ((x361-(x362>x363))^x364);

    if (t82 != -32664) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x366 = UINT8_MAX;
	uint8_t x368 = 6U;
	static uint64_t t83 = 202LLU;

    t83 = ((x365-(x366>x367))^x368);

    if (t83 != 1044LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x369 = 7U;
	static int16_t x370 = 75;
	int32_t x371 = 3;
	int16_t x372 = -1;

    t84 = ((x369-(x370>x371))^x372);

    if (t84 != -7) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x373 = UINT16_MAX;
	int64_t x375 = INT64_MIN;
	volatile int64_t x376 = INT64_MAX;

    t85 = ((x373-(x374>x375))^x376);

    if (t85 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x378 = INT64_MIN;
	int32_t x379 = -5989;
	int64_t t86 = 249LL;

    t86 = ((x377-(x378>x379))^x380);

    if (t86 != -630LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x381 = -7026488LL;
	int8_t x382 = INT8_MIN;
	uint16_t x383 = 8770U;
	int64_t x384 = 29020459753414039LL;
	static volatile int64_t t87 = -121797LL;

    t87 = ((x381-(x382>x383))^x384);

    if (t87 != -29020459751778977LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x387 = UINT16_MAX;
	static int8_t x388 = INT8_MIN;
	volatile int32_t t88 = -779;

    t88 = ((x385-(x386>x387))^x388);

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x389 = INT8_MIN;
	uint8_t x390 = 7U;
	uint32_t x391 = UINT32_MAX;

    t89 = ((x389-(x390>x391))^x392);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x393 = INT64_MIN;
	int64_t x395 = INT64_MAX;

    t90 = ((x393-(x394>x395))^x396);

    if (t90 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x397 = 215171LLU;
	int8_t x399 = 1;
	volatile uint64_t t91 = 1917873108LLU;

    t91 = ((x397-(x398>x399))^x400);

    if (t91 != 18446744073709336444LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x401 = 29807U;
	int32_t x403 = INT32_MAX;
	uint32_t x404 = 29842771U;
	volatile uint32_t t92 = 1433U;

    t92 = ((x401-(x402>x403))^x404);

    if (t92 != 29829436U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x405 = INT8_MAX;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MIN;
	static int64_t t93 = 0LL;

    t93 = ((x405-(x406>x407))^x408);

    if (t93 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x409 = 1;
	volatile uint16_t x411 = UINT16_MAX;

    t94 = ((x409-(x410>x411))^x412);

    if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x413 = INT8_MAX;
	int8_t x414 = -1;
	uint8_t x415 = 34U;
	volatile int16_t x416 = -124;

    t95 = ((x413-(x414>x415))^x416);

    if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x417 = 4183U;
	uint32_t x418 = 3468162U;
	static uint64_t x420 = 173LLU;

    t96 = ((x417-(x418>x419))^x420);

    if (t96 != 4346LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x421 = -1;
	volatile int32_t x422 = 30051;
	int8_t x423 = 1;
	static int8_t x424 = INT8_MIN;
	static volatile int32_t t97 = 18;

    t97 = ((x421-(x422>x423))^x424);

    if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x425 = -1;
	int16_t x426 = -5;
	int32_t x427 = INT32_MAX;
	static volatile uint16_t x428 = 1561U;
	int32_t t98 = 7620170;

    t98 = ((x425-(x426>x427))^x428);

    if (t98 != -1562) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x429 = -687439759572444LL;
	static int16_t x430 = -1;
	uint64_t x432 = 198441234139047LLU;

    t99 = ((x429-(x430>x431))^x432);

    if (t99 != 18445964235526014340LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x434 = INT16_MIN;
	int32_t x435 = 4862;
	static volatile uint32_t x436 = 36U;
	volatile uint32_t t100 = 11335U;

    t100 = ((x433-(x434>x435))^x436);

    if (t100 != 4294934564U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x437 = INT8_MIN;
	static volatile int64_t x440 = INT64_MIN;
	int64_t t101 = -227154LL;

    t101 = ((x437-(x438>x439))^x440);

    if (t101 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x441 = UINT64_MAX;
	uint64_t x442 = 3807105228811LLU;
	int32_t x443 = INT32_MIN;
	volatile uint64_t t102 = 6160050747106147LLU;

    t102 = ((x441-(x442>x443))^x444);

    if (t102 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x445 = -1LL;
	int8_t x446 = -1;
	int64_t x447 = INT64_MAX;
	uint32_t x448 = 1028844894U;
	volatile int64_t t103 = 8352380LL;

    t103 = ((x445-(x446>x447))^x448);

    if (t103 != -1028844895LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x449 = -1;
	uint32_t x450 = 2143U;
	volatile uint32_t t104 = 74636830U;

    t104 = ((x449-(x450>x451))^x452);

    if (t104 != 4234903739U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x453 = 1951876788U;
	static int64_t x454 = INT64_MIN;
	int32_t x456 = INT32_MAX;
	static volatile uint32_t t105 = 239U;

    t105 = ((x453-(x454>x455))^x456);

    if (t105 != 195606859U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x457 = 6670U;
	int8_t x458 = -1;
	uint32_t x459 = UINT32_MAX;

    t106 = ((x457-(x458>x459))^x460);

    if (t106 != 6933U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x461 = INT16_MAX;
	int16_t x462 = INT16_MAX;
	static int16_t x463 = -2;
	int32_t t107 = 56753207;

    t107 = ((x461-(x462>x463))^x464);

    if (t107 != 32513) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x465 = -1;
	volatile uint16_t x466 = UINT16_MAX;
	static int16_t x467 = INT16_MIN;
	int64_t x468 = INT64_MAX;
	volatile int64_t t108 = 25LL;

    t108 = ((x465-(x466>x467))^x468);

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x469 = -14;
	uint32_t x470 = 8248054U;
	static uint16_t x472 = 278U;
	volatile int32_t t109 = -9897071;

    t109 = ((x469-(x470>x471))^x472);

    if (t109 != -284) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x473 = INT16_MAX;
	static uint32_t x474 = UINT32_MAX;
	static int32_t x476 = 2;
	volatile int32_t t110 = 81037;

    t110 = ((x473-(x474>x475))^x476);

    if (t110 != 32764) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x477 = UINT16_MAX;
	int64_t x479 = 108281547312245358LL;
	int16_t x480 = INT16_MIN;

    t111 = ((x477-(x478>x479))^x480);

    if (t111 != -32769) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x481 = INT16_MIN;
	int8_t x482 = 1;
	int32_t x483 = INT32_MIN;
	int8_t x484 = INT8_MIN;
	volatile int32_t t112 = -37;

    t112 = ((x481-(x482>x483))^x484);

    if (t112 != 32895) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x486 = -1;
	volatile uint64_t x487 = UINT64_MAX;
	volatile uint16_t x488 = UINT16_MAX;
	volatile int32_t t113 = 25;

    t113 = ((x485-(x486>x487))^x488);

    if (t113 != 32768) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x489 = 5U;
	uint8_t x490 = 0U;
	int32_t x491 = INT32_MIN;
	int32_t t114 = 3880944;

    t114 = ((x489-(x490>x491))^x492);

    if (t114 != -5) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x493 = 151298182LLU;
	uint8_t x495 = 96U;
	static uint16_t x496 = 9019U;
	volatile uint64_t t115 = 156742970439756LLU;

    t115 = ((x493-(x494>x495))^x496);

    if (t115 != 151290813LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x497 = INT16_MAX;
	uint64_t x498 = 93211764755LLU;
	int64_t x499 = INT64_MAX;
	int32_t x500 = 0;
	static volatile int32_t t116 = -5;

    t116 = ((x497-(x498>x499))^x500);

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x501 = 13406;
	int32_t x502 = 300061;
	int64_t x503 = INT64_MIN;
	volatile int32_t x504 = -1;
	volatile int32_t t117 = 323135;

    t117 = ((x501-(x502>x503))^x504);

    if (t117 != -13406) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x505 = 18U;
	uint16_t x507 = 9U;
	volatile int64_t t118 = 713048492159LL;

    t118 = ((x505-(x506>x507))^x508);

    if (t118 != -1060828981038548LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x509 = -61;
	volatile uint8_t x510 = 2U;
	int8_t x511 = -1;
	int32_t x512 = INT32_MAX;

    t119 = ((x509-(x510>x511))^x512);

    if (t119 != -2147483587) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x515 = INT64_MIN;
	int16_t x516 = INT16_MAX;
	static volatile int32_t t120 = 0;

    t120 = ((x513-(x514>x515))^x516);

    if (t120 != -32740) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x517 = -1;
	static volatile uint64_t x518 = UINT64_MAX;
	volatile int8_t x520 = INT8_MAX;
	volatile int32_t t121 = -1462092;

    t121 = ((x517-(x518>x519))^x520);

    if (t121 != -127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x530 = 2U;
	int64_t x532 = -41102105912LL;
	static volatile int64_t t122 = -33115336758LL;

    t122 = ((x529-(x530>x531))^x532);

    if (t122 != -106192482456509LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x533 = INT64_MIN;
	volatile int16_t x535 = INT16_MAX;

    t123 = ((x533-(x534>x535))^x536);

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x537 = -483757494LL;
	volatile int32_t x538 = -1;
	uint32_t x539 = UINT32_MAX;
	uint16_t x540 = 2660U;
	int64_t t124 = -130860LL;

    t124 = ((x537-(x538>x539))^x540);

    if (t124 != -483755986LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x541 = -1;
	static volatile int16_t x542 = INT16_MIN;
	int32_t x543 = -1;
	uint8_t x544 = 1U;
	volatile int32_t t125 = -25;

    t125 = ((x541-(x542>x543))^x544);

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x545 = INT16_MAX;
	int32_t x546 = INT32_MIN;
	volatile uint64_t x548 = UINT64_MAX;
	uint64_t t126 = 1392458944442393516LLU;

    t126 = ((x545-(x546>x547))^x548);

    if (t126 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x549 = 95009;
	static int8_t x550 = 0;
	uint16_t x551 = 1U;
	static uint64_t x552 = UINT64_MAX;

    t127 = ((x549-(x550>x551))^x552);

    if (t127 != 18446744073709456606LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x554 = INT64_MIN;
	uint16_t x555 = 1U;
	volatile uint64_t x556 = UINT64_MAX;
	uint64_t t128 = 4004140777LLU;

    t128 = ((x553-(x554>x555))^x556);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x558 = 68656U;
	static int32_t x560 = INT32_MIN;
	uint32_t t129 = 255743418U;

    t129 = ((x557-(x558>x559))^x560);

    if (t129 != 2147568229U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x561 = 6U;
	int64_t x562 = INT64_MIN;
	int8_t x563 = -8;
	int64_t x564 = INT64_MAX;

    t130 = ((x561-(x562>x563))^x564);

    if (t130 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x565 = -2;
	static int16_t x566 = INT16_MAX;
	uint32_t x567 = 18U;
	int8_t x568 = 7;

    t131 = ((x565-(x566>x567))^x568);

    if (t131 != -6) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x569 = 1;
	uint16_t x570 = 429U;
	int16_t x571 = INT16_MIN;
	int16_t x572 = -380;
	static volatile int32_t t132 = -4544;

    t132 = ((x569-(x570>x571))^x572);

    if (t132 != -380) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x577 = -187LL;
	int64_t x578 = -917424269LL;
	static uint32_t x579 = 7237364U;
	int8_t x580 = -1;
	volatile int64_t t133 = -6364242211262000LL;

    t133 = ((x577-(x578>x579))^x580);

    if (t133 != 186LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x581 = UINT16_MAX;
	int64_t x582 = INT64_MAX;
	uint8_t x583 = UINT8_MAX;
	static volatile int8_t x584 = -1;

    t134 = ((x581-(x582>x583))^x584);

    if (t134 != -65535) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x585 = INT8_MIN;
	int64_t x586 = INT64_MAX;
	int16_t x588 = 60;
	volatile int32_t t135 = 3588529;

    t135 = ((x585-(x586>x587))^x588);

    if (t135 != -189) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x590 = INT64_MAX;
	volatile uint8_t x591 = 36U;
	int32_t t136 = -319998;

    t136 = ((x589-(x590>x591))^x592);

    if (t136 != 32768) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x593 = -101163;
	static int16_t x594 = -1;
	int16_t x595 = -1;
	int64_t x596 = -1265113261042137LL;
	static volatile int64_t t137 = -891059285895LL;

    t137 = ((x593-(x594>x595))^x596);

    if (t137 != 1265113261138674LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x598 = 13;
	static volatile int8_t x599 = INT8_MAX;
	int64_t x600 = -1LL;

    t138 = ((x597-(x598>x599))^x600);

    if (t138 != -7827LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x601 = INT16_MAX;
	static volatile int64_t x602 = -1LL;
	volatile int32_t t139 = 130177488;

    t139 = ((x601-(x602>x603))^x604);

    if (t139 != 32762) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x608 = UINT8_MAX;
	volatile int32_t t140 = 978615;

    t140 = ((x605-(x606>x607))^x608);

    if (t140 != -255) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x609 = -7;
	uint32_t x610 = 0U;
	int64_t x611 = -1LL;
	int8_t x612 = -52;
	volatile int32_t t141 = 398;

    t141 = ((x609-(x610>x611))^x612);

    if (t141 != 52) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x614 = INT16_MAX;
	static volatile int64_t x615 = 220765350816728LL;
	static volatile int32_t t142 = -42610;

    t142 = ((x613-(x614>x615))^x616);

    if (t142 != -2305) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x617 = UINT32_MAX;
	int16_t x618 = INT16_MAX;
	int8_t x619 = INT8_MAX;
	int64_t t143 = 203750LL;

    t143 = ((x617-(x618>x619))^x620);

    if (t143 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x621 = -1;
	uint64_t x622 = 93LLU;
	volatile int8_t x623 = INT8_MAX;
	static uint16_t x624 = UINT16_MAX;
	volatile int32_t t144 = 531785;

    t144 = ((x621-(x622>x623))^x624);

    if (t144 != -65536) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x625 = UINT64_MAX;
	static uint32_t x626 = UINT32_MAX;
	uint32_t x627 = UINT32_MAX;
	int64_t x628 = INT64_MIN;

    t145 = ((x625-(x626>x627))^x628);

    if (t145 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x629 = INT8_MIN;
	int32_t x631 = 97002976;
	int32_t t146 = -8923;

    t146 = ((x629-(x630>x631))^x632);

    if (t146 != -443) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x634 = -1;
	static uint64_t x635 = 855352212274LLU;
	volatile int64_t x636 = -1LL;

    t147 = ((x633-(x634>x635))^x636);

    if (t147 != -24716LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x637 = 3;
	uint16_t x638 = UINT16_MAX;
	static int64_t x640 = INT64_MAX;
	int64_t t148 = 895001223963LL;

    t148 = ((x637-(x638>x639))^x640);

    if (t148 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x641 = -1;
	int8_t x642 = -5;
	uint64_t x643 = 7136572678830LLU;
	static uint32_t x644 = 13U;
	volatile uint32_t t149 = 128427540U;

    t149 = ((x641-(x642>x643))^x644);

    if (t149 != 4294967283U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x645 = UINT8_MAX;
	uint16_t x646 = UINT16_MAX;
	static uint32_t x647 = 278U;
	uint32_t x648 = UINT32_MAX;
	volatile uint32_t t150 = 19U;

    t150 = ((x645-(x646>x647))^x648);

    if (t150 != 4294967041U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x649 = UINT16_MAX;
	static int16_t x650 = INT16_MIN;
	int64_t x651 = INT64_MIN;
	int16_t x652 = INT16_MIN;
	int32_t t151 = 26833567;

    t151 = ((x649-(x650>x651))^x652);

    if (t151 != -32770) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x653 = -1;
	volatile uint64_t x654 = 53710LLU;
	int64_t x655 = -1LL;
	volatile uint64_t x656 = UINT64_MAX;

    t152 = ((x653-(x654>x655))^x656);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x657 = INT32_MAX;
	int64_t x659 = INT64_MIN;
	uint64_t t153 = 3213432825896595121LLU;

    t153 = ((x657-(x658>x659))^x660);

    if (t153 != 2043684889LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x661 = INT32_MIN;
	uint8_t x662 = 6U;
	volatile int64_t x663 = 4470LL;
	static int8_t x664 = -1;
	static int32_t t154 = INT32_MAX;

    t154 = ((x661-(x662>x663))^x664);

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x665 = INT16_MIN;
	int8_t x666 = INT8_MIN;
	int8_t x667 = -1;
	static volatile int16_t x668 = INT16_MAX;

    t155 = ((x665-(x666>x667))^x668);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x669 = -1;
	volatile int8_t x670 = 11;
	int32_t x671 = 1;
	int8_t x672 = -6;
	volatile int32_t t156 = 10051103;

    t156 = ((x669-(x670>x671))^x672);

    if (t156 != 4) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x673 = 2077724884556LL;
	int8_t x674 = -2;
	int16_t x675 = -1;
	int16_t x676 = INT16_MIN;

    t157 = ((x673-(x674>x675))^x676);

    if (t157 != -2077724885428LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x677 = -222;
	int64_t x678 = 242605735LL;
	int32_t x679 = INT32_MIN;
	static volatile uint8_t x680 = 7U;
	int32_t t158 = -1539148;

    t158 = ((x677-(x678>x679))^x680);

    if (t158 != -218) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x681 = -5;
	uint8_t x682 = 1U;
	int16_t x683 = INT16_MIN;
	uint8_t x684 = 24U;

    t159 = ((x681-(x682>x683))^x684);

    if (t159 != -30) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x685 = -1;
	static uint64_t x687 = 2842888897LLU;
	uint64_t x688 = 6133452227LLU;
	volatile uint64_t t160 = 49448250LLU;

    t160 = ((x685-(x686>x687))^x688);

    if (t160 != 18446744067576099389LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x690 = 1U;
	static volatile uint16_t x692 = 3U;
	static volatile int64_t t161 = -55389763620187LL;

    t161 = ((x689-(x690>x691))^x692);

    if (t161 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x693 = UINT64_MAX;
	uint32_t x694 = 198396U;
	volatile int64_t x696 = -1LL;

    t162 = ((x693-(x694>x695))^x696);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x697 = 13311758LLU;
	int16_t x698 = INT16_MIN;
	volatile int32_t x699 = -100623338;
	int64_t x700 = INT64_MIN;

    t163 = ((x697-(x698>x699))^x700);

    if (t163 != 9223372036868087565LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x701 = 2U;
	static volatile uint8_t x702 = 22U;

    t164 = ((x701-(x702>x703))^x704);

    if (t164 != -3) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x705 = INT8_MIN;
	volatile int64_t x708 = INT64_MIN;
	volatile int64_t t165 = 12463641776683LL;

    t165 = ((x705-(x706>x707))^x708);

    if (t165 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x709 = 99707318;
	static uint16_t x710 = UINT16_MAX;
	int32_t x711 = -1130;
	uint16_t x712 = 55U;
	static int32_t t166 = -410393444;

    t166 = ((x709-(x710>x711))^x712);

    if (t166 != 99707266) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x713 = 431319601822078LLU;
	int32_t x714 = INT32_MIN;
	static uint32_t x715 = 1U;
	uint16_t x716 = UINT16_MAX;
	volatile uint64_t t167 = 27364578922LLU;

    t167 = ((x713-(x714>x715))^x716);

    if (t167 != 431319601792642LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x717 = 492U;
	uint32_t x718 = 1U;
	int64_t x719 = -1LL;
	uint64_t x720 = 3451LLU;
	volatile uint64_t t168 = 224924000222100099LLU;

    t168 = ((x717-(x718>x719))^x720);

    if (t168 != 3216LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x721 = 713423037280185597LL;
	volatile int64_t x722 = -8067326205957LL;
	int32_t x723 = 14;
	int16_t x724 = INT16_MAX;

    t169 = ((x721-(x722>x723))^x724);

    if (t169 != 713423037280162562LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x725 = 117U;
	volatile uint8_t x726 = 0U;
	int32_t x727 = 128;
	uint8_t x728 = 1U;
	int32_t t170 = 96336;

    t170 = ((x725-(x726>x727))^x728);

    if (t170 != 116) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x730 = UINT32_MAX;
	int16_t x731 = INT16_MIN;
	int8_t x732 = 61;
	volatile int32_t t171 = 1;

    t171 = ((x729-(x730>x731))^x732);

    if (t171 != 56) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x733 = 86LLU;
	int64_t x735 = -140185646515959377LL;
	int32_t x736 = INT32_MIN;
	static volatile uint64_t t172 = 256607681883LLU;

    t172 = ((x733-(x734>x735))^x736);

    if (t172 != 18446744071562068054LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x737 = 1314711233301357335LL;
	int8_t x738 = 8;
	int8_t x739 = INT8_MIN;
	int32_t x740 = INT32_MAX;

    t173 = ((x737-(x738>x739))^x740);

    if (t173 != 1314711234001198313LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x741 = 142;
	int32_t x743 = 890;
	volatile int16_t x744 = INT16_MIN;

    t174 = ((x741-(x742>x743))^x744);

    if (t174 != -32627) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x745 = 94U;
	static int8_t x746 = INT8_MIN;
	int64_t x747 = INT64_MIN;
	int8_t x748 = INT8_MIN;
	static int32_t t175 = 0;

    t175 = ((x745-(x746>x747))^x748);

    if (t175 != -35) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x750 = INT16_MIN;
	static uint64_t x751 = 3076383063746LLU;
	volatile uint16_t x752 = 1604U;
	int32_t t176 = -16919;

    t176 = ((x749-(x750>x751))^x752);

    if (t176 != -1550) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x753 = UINT8_MAX;
	uint8_t x754 = 2U;
	static uint64_t x755 = 15367210062311LLU;
	static volatile int32_t x756 = INT32_MIN;

    t177 = ((x753-(x754>x755))^x756);

    if (t177 != -2147483393) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x757 = 2151;
	int16_t x759 = INT16_MIN;
	volatile uint64_t x760 = UINT64_MAX;
	volatile uint64_t t178 = 25366293978916198LLU;

    t178 = ((x757-(x758>x759))^x760);

    if (t178 != 18446744073709549464LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x761 = 0U;
	uint8_t x762 = 0U;
	uint32_t t179 = 1891571U;

    t179 = ((x761-(x762>x763))^x764);

    if (t179 != 4294967277U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x765 = INT64_MIN;
	volatile int64_t x766 = INT64_MIN;
	int64_t x767 = INT64_MIN;
	int64_t x768 = INT64_MIN;

    t180 = ((x765-(x766>x767))^x768);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x769 = -413315290;
	static volatile int64_t x770 = INT64_MIN;
	static int16_t x771 = INT16_MIN;
	int8_t x772 = -1;
	volatile int32_t t181 = 93;

    t181 = ((x769-(x770>x771))^x772);

    if (t181 != 413315289) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x777 = -1;
	int8_t x778 = INT8_MAX;
	static int32_t x779 = -1;
	int16_t x780 = 1;
	volatile int32_t t182 = 1417;

    t182 = ((x777-(x778>x779))^x780);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x781 = INT16_MAX;
	static uint8_t x782 = 0U;
	int8_t x784 = INT8_MIN;
	static volatile int32_t t183 = -707;

    t183 = ((x781-(x782>x783))^x784);

    if (t183 != -32642) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x785 = INT16_MIN;
	static volatile uint16_t x786 = UINT16_MAX;
	volatile uint64_t x787 = 12155229297717339LLU;
	uint64_t t184 = 190542LLU;

    t184 = ((x785-(x786>x787))^x788);

    if (t184 != 18446721385076582253LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x789 = -2;
	static int32_t x790 = -1;
	int64_t x791 = -98732485399713LL;
	volatile int64_t x792 = -1129428LL;
	volatile int64_t t185 = 2923347768018766369LL;

    t185 = ((x789-(x790>x791))^x792);

    if (t185 != 1129425LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x793 = INT32_MAX;
	int64_t x794 = -2LL;
	uint64_t x795 = UINT64_MAX;
	volatile int32_t x796 = -1;
	int32_t t186 = INT32_MIN;

    t186 = ((x793-(x794>x795))^x796);

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x797 = INT16_MIN;
	volatile uint32_t x798 = 3469218U;
	volatile int32_t x799 = 3938227;
	volatile int16_t x800 = -1;
	static volatile int32_t t187 = -343;

    t187 = ((x797-(x798>x799))^x800);

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x801 = INT16_MIN;
	static int32_t x802 = 7;
	static int8_t x803 = 2;
	int32_t t188 = 16;

    t188 = ((x801-(x802>x803))^x804);

    if (t188 != -33199) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x805 = 7034U;
	volatile uint16_t x806 = 484U;
	int8_t x807 = -1;
	uint32_t x808 = 0U;
	volatile uint32_t t189 = 226U;

    t189 = ((x805-(x806>x807))^x808);

    if (t189 != 7033U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x809 = INT64_MIN;
	int8_t x810 = INT8_MIN;
	int8_t x811 = -1;
	int8_t x812 = 2;
	int64_t t190 = 72277081036LL;

    t190 = ((x809-(x810>x811))^x812);

    if (t190 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x813 = -1LL;
	int8_t x815 = INT8_MIN;
	uint32_t x816 = UINT32_MAX;
	int64_t t191 = -685278216820285828LL;

    t191 = ((x813-(x814>x815))^x816);

    if (t191 != -4294967295LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x818 = 52U;
	int16_t x819 = -803;
	int32_t x820 = -1;

    t192 = ((x817-(x818>x819))^x820);

    if (t192 != 18446743535350281036LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x822 = UINT64_MAX;
	int16_t x823 = 7;
	uint32_t t193 = 64560U;

    t193 = ((x821-(x822>x823))^x824);

    if (t193 != 32768U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x825 = INT8_MIN;
	int64_t x826 = INT64_MIN;
	int64_t x827 = INT64_MIN;
	volatile int32_t t194 = 0;

    t194 = ((x825-(x826>x827))^x828);

    if (t194 != -122) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x830 = 1U;
	volatile int16_t x832 = INT16_MAX;
	volatile int64_t t195 = -30LL;

    t195 = ((x829-(x830>x831))^x832);

    if (t195 != 969077502LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x833 = 7145U;
	uint16_t x834 = 0U;
	int32_t x835 = 0;
	volatile int8_t x836 = 0;
	volatile uint32_t t196 = 61163U;

    t196 = ((x833-(x834>x835))^x836);

    if (t196 != 7145U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x838 = 824;
	volatile int64_t x839 = INT64_MIN;
	static int8_t x840 = INT8_MAX;
	uint32_t t197 = 313017U;

    t197 = ((x837-(x838>x839))^x840);

    if (t197 != 502292725U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x841 = 0U;
	static uint16_t x842 = 8U;
	volatile int8_t x843 = -1;
	int64_t x844 = INT64_MIN;
	int64_t t198 = INT64_MAX;

    t198 = ((x841-(x842>x843))^x844);

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x845 = 0;
	volatile int8_t x846 = 4;
	static uint64_t x847 = 535LLU;
	int64_t x848 = INT64_MAX;
	volatile int64_t t199 = INT64_MAX;

    t199 = ((x845-(x846>x847))^x848);

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

