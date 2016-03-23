
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

int8_t x1 = 2;
int16_t x3 = 5837;
static int32_t x13 = INT32_MAX;
volatile int64_t x15 = -1LL;
uint32_t x26 = UINT32_MAX;
static volatile int16_t x28 = -204;
int32_t x29 = -623667;
volatile int64_t x30 = INT64_MIN;
int64_t t6 = -3241LL;
volatile uint32_t t7 = 3420693U;
int32_t x38 = INT32_MIN;
volatile int32_t x39 = INT32_MIN;
int8_t x40 = INT8_MIN;
uint8_t x41 = 75U;
uint64_t x55 = UINT64_MAX;
static uint64_t t11 = 1781865LLU;
int16_t x71 = INT16_MAX;
int16_t x77 = 285;
static uint8_t x80 = 106U;
uint16_t x84 = 2866U;
int8_t x86 = INT8_MIN;
volatile int64_t x88 = INT64_MIN;
uint16_t x89 = 5U;
uint8_t x95 = 4U;
int16_t x96 = INT16_MAX;
volatile uint64_t t21 = 80LLU;
volatile uint16_t x99 = UINT16_MAX;
static int64_t x101 = INT64_MIN;
int64_t x104 = 107825LL;
uint64_t x105 = UINT64_MAX;
uint32_t x106 = 55066193U;
int32_t x108 = 2872;
int64_t t25 = 8061698LL;
static volatile uint32_t x115 = 83385U;
int64_t x121 = -1983LL;
uint16_t x130 = 1209U;
volatile int32_t t29 = -1;
static int64_t x134 = INT64_MIN;
uint8_t x139 = 57U;
static int32_t x149 = -404796;
int32_t t34 = -2;
int32_t x157 = -5984879;
int64_t x162 = INT64_MIN;
int8_t x167 = -13;
int32_t t37 = -7292;
int64_t x171 = INT64_MIN;
int16_t x174 = -1;
uint8_t x176 = UINT8_MAX;
int8_t x181 = -1;
int32_t x197 = INT32_MIN;
uint8_t x199 = UINT8_MAX;
static int32_t x203 = -1;
uint16_t x204 = UINT16_MAX;
int64_t t49 = -26LL;
int32_t x222 = -21204397;
volatile int64_t x229 = 902112480948392LL;
static uint64_t t51 = 89LLU;
int8_t x241 = 0;
static int32_t x244 = 318524;
static int64_t x248 = -1LL;
int64_t x262 = INT64_MAX;
int8_t x267 = -6;
uint32_t t60 = 3401U;
int32_t x278 = INT32_MIN;
volatile int16_t x284 = -1;
volatile uint32_t t63 = 521501322U;
static uint64_t x290 = UINT64_MAX;
int64_t x291 = -637LL;
uint64_t t65 = 245796752835546LLU;
volatile uint64_t x294 = 1354LLU;
volatile int32_t x298 = INT32_MAX;
int8_t x302 = INT8_MIN;
static int8_t x309 = INT8_MIN;
volatile int64_t x312 = -41032918LL;
int64_t t69 = 867557LL;
volatile int16_t x329 = -941;
static int32_t x339 = -1;
uint64_t t76 = 274879895982761901LLU;
uint64_t x343 = 1354405LLU;
uint16_t x345 = 4028U;
int16_t x350 = 2;
int64_t x354 = INT64_MAX;
volatile int64_t x358 = 285769808035266123LL;
int16_t x359 = -9910;
volatile int64_t t81 = 605044312LL;
int8_t x361 = INT8_MIN;
volatile int32_t t82 = -123692100;
static int8_t x369 = INT8_MAX;
int8_t x376 = -1;
int64_t x378 = INT64_MIN;
static int64_t x386 = -1LL;
static volatile uint16_t x387 = 404U;
static volatile uint64_t x392 = UINT64_MAX;
int64_t x393 = -6169473890428LL;
int64_t x396 = INT64_MAX;
static uint64_t t90 = 4219104499LLU;
static uint16_t x398 = 31414U;
int16_t x399 = -10;
static uint32_t t91 = 32275660U;
int16_t x401 = -349;
volatile uint64_t t94 = 405917353427543LLU;
int16_t x415 = -1;
uint32_t t97 = 21U;
volatile int16_t x427 = -1;
int32_t x431 = -2;
volatile int32_t x452 = INT32_MAX;
static uint8_t x454 = UINT8_MAX;
int16_t x457 = INT16_MIN;
uint64_t x463 = UINT64_MAX;
volatile uint64_t t108 = 975743099LLU;
int32_t x473 = INT32_MIN;
int64_t x482 = -925073473LL;
int64_t x484 = -1LL;
int32_t x504 = INT32_MIN;
int64_t x514 = 41186830LL;
int8_t x516 = INT8_MIN;
volatile int64_t t121 = 32204462LL;
int8_t x530 = -33;
static uint32_t x543 = UINT32_MAX;
volatile int32_t x545 = 1841;
volatile int8_t x549 = INT8_MIN;
int64_t t129 = 778376553920120LL;
uint32_t x559 = 323913642U;
uint64_t x562 = UINT64_MAX;
int32_t x567 = -187433;
int16_t x568 = INT16_MAX;
uint64_t t132 = 571304134771061113LLU;
int8_t x571 = -8;
int8_t x575 = INT8_MAX;
int32_t t134 = 64524;
int32_t x577 = 529824541;
int64_t x580 = INT64_MAX;
volatile int32_t x583 = INT32_MAX;
static uint16_t x586 = 1U;
static int64_t x588 = 403151486LL;
volatile uint16_t x589 = 6U;
int8_t x592 = 21;
volatile int32_t x597 = INT32_MIN;
uint64_t x600 = 7041LLU;
static uint16_t x606 = 42U;
int64_t t143 = -27490LL;
int16_t x616 = INT16_MIN;
uint64_t x620 = UINT64_MAX;
static int8_t x622 = INT8_MAX;
uint32_t x627 = 912409998U;
static uint64_t x628 = UINT64_MAX;
volatile int32_t x629 = 78149593;
int8_t x632 = INT8_MAX;
int16_t x645 = INT16_MAX;
uint8_t x647 = 55U;
int8_t x654 = -13;
int64_t t153 = 12312223437683588LL;
uint64_t x662 = 56863228466098785LLU;
int8_t x670 = -1;
volatile int64_t x678 = INT64_MIN;
uint32_t t161 = 2676191U;
uint16_t x694 = UINT16_MAX;
int64_t x697 = INT64_MIN;
int8_t x700 = -1;
volatile int64_t x709 = -8234956LL;
uint64_t x713 = UINT64_MAX;
int8_t x729 = INT8_MIN;
uint64_t x732 = 3318661269522LLU;
static uint8_t x745 = 1U;
int16_t x746 = -192;
uint32_t x757 = 208U;
int32_t x758 = -786;
static uint32_t x759 = UINT32_MAX;
int8_t x760 = 14;
uint64_t x763 = 1764280853LLU;
int16_t x773 = INT16_MIN;
int64_t x776 = INT64_MIN;
uint64_t t180 = 1627204414362LLU;
static volatile uint16_t x783 = 22U;
volatile uint64_t t182 = 11148412572800555LLU;
int32_t x796 = INT32_MIN;
uint16_t x801 = UINT16_MAX;
volatile int32_t x803 = INT32_MIN;
int32_t x806 = -7;
static int32_t x811 = 26945447;
int16_t x815 = -1;
uint64_t x816 = 41957LLU;
uint16_t x821 = UINT16_MAX;
int32_t x828 = -1;
static volatile uint64_t x829 = 3161LLU;
int64_t x831 = -1LL;
uint8_t x837 = 10U;
int32_t x838 = INT32_MAX;
uint64_t x841 = 857950LLU;
int32_t x842 = INT32_MIN;
int64_t x845 = -1LL;
int8_t x859 = 42;
int32_t t199 = -47399291;


void f0(void) {
    	int16_t x2 = -1;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -1471;

    t0 = (((x1^x2)+x3)^x4);

    if (t0 != 5813) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MAX;
	volatile uint32_t x6 = 11797085U;
	static volatile int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MIN;
	static volatile int64_t t1 = -126733549641747834LL;

    t1 = (((x5^x6)+x7)^x8);

    if (t1 != 9223372034719120802LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x14 = 36U;
	int8_t x16 = 7;
	int64_t t2 = -2948534994280807LL;

    t2 = (((x13^x14)+x15)^x16);

    if (t2 != 2147483613LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = UINT32_MAX;
	int16_t x18 = 30;
	int16_t x19 = INT16_MIN;
	uint64_t x20 = 30732328LLU;
	volatile uint64_t t3 = 1586703535141035258LLU;

    t3 = (((x17^x18)+x19)^x20);

    if (t3 != 4264267721LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MAX;
	int8_t x22 = -1;
	int8_t x23 = INT8_MAX;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t4 = 6219U;

    t4 = (((x21^x22)+x23)^x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x25 = 3;
	uint16_t x27 = 726U;
	volatile uint32_t t5 = 0U;

    t5 = (((x25^x26)+x27)^x28);

    if (t5 != 4294966758U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x31 = 382U;
	static int16_t x32 = 4302;

    t6 = (((x29^x30)+x31)^x32);

    if (t6 != 9223372036854148485LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = INT32_MAX;
	int8_t x34 = INT8_MIN;
	static volatile uint32_t x35 = 11704859U;
	int16_t x36 = 105;

    t7 = (((x33^x34)+x35)^x36);

    if (t7 != 2159188723U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = -1;
	static volatile int32_t t8 = -1907893;

    t8 = (((x37^x38)+x39)^x40);

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x42 = 72;
	int8_t x43 = 9;
	volatile uint32_t x44 = 1352722U;
	static volatile uint32_t t9 = 3U;

    t9 = (((x41^x42)+x43)^x44);

    if (t9 != 1352734U) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x49 = -1;
	int32_t x50 = -1;
	int32_t x51 = INT32_MAX;
	static int16_t x52 = -3344;
	static int32_t t10 = -11254238;

    t10 = (((x49^x50)+x51)^x52);

    if (t10 != -2147480305) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 44U;
	uint32_t x54 = UINT32_MAX;
	static int8_t x56 = INT8_MIN;

    t11 = (((x53^x54)+x55)^x56);

    if (t11 != 18446744069414584402LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x57 = 0;
	static int8_t x58 = -1;
	static uint32_t x59 = UINT32_MAX;
	static int64_t x60 = -1LL;
	int64_t t12 = 53933237616074909LL;

    t12 = (((x57^x58)+x59)^x60);

    if (t12 != -4294967295LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = -309;
	int32_t x62 = -14478511;
	static uint32_t x63 = UINT32_MAX;
	uint32_t x64 = 1516631U;
	volatile uint32_t t13 = 13U;

    t13 = (((x61^x62)+x63)^x64);

    if (t13 != 13355470U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = 104;
	int64_t x66 = 583272LL;
	int8_t x67 = INT8_MAX;
	volatile int8_t x68 = -1;
	volatile int64_t t14 = -1489106861662983LL;

    t14 = (((x65^x66)+x67)^x68);

    if (t14 != -583296LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = 1983023LLU;
	volatile int64_t x70 = INT64_MIN;
	int32_t x72 = 101181;
	uint64_t t15 = 217259LLU;

    t15 = (((x69^x70)+x71)^x72);

    if (t15 != 9223372036856826131LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = INT64_MAX;
	int32_t x74 = 25821429;
	int64_t x75 = INT64_MIN;
	uint8_t x76 = 35U;
	volatile int64_t t16 = -16650947LL;

    t16 = (((x73^x74)+x75)^x76);

    if (t16 != -25821399LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x78 = UINT32_MAX;
	int8_t x79 = -13;
	volatile uint32_t t17 = 12314U;

    t17 = (((x77^x78)+x79)^x80);

    if (t17 != 4294966975U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = -1;
	uint8_t x82 = 16U;
	static uint32_t x83 = 192858577U;
	volatile uint32_t t18 = 0U;

    t18 = (((x81^x82)+x83)^x84);

    if (t18 != 192856818U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MAX;
	static volatile uint8_t x87 = 1U;
	int64_t t19 = 28534684555LL;

    t19 = (((x85^x86)+x87)^x88);

    if (t19 != 128LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x90 = -351LL;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	int64_t t20 = -1737999020811689928LL;

    t20 = (((x89^x90)+x91)^x92);

    if (t20 != 4294966948LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x93 = 9233472883LLU;
	uint16_t x94 = 5U;

    t21 = (((x93^x94)+x95)^x96);

    if (t21 != 9233490565LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x97 = 13U;
	int8_t x98 = 1;
	static int8_t x100 = INT8_MIN;
	static volatile int32_t t22 = 0;

    t22 = (((x97^x98)+x99)^x100);

    if (t22 != -65653) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x102 = 0U;
	volatile uint64_t x103 = 219305LLU;
	static volatile uint64_t t23 = 222075239215LLU;

    t23 = (((x101^x102)+x103)^x104);

    if (t23 != 9223372036854971800LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x107 = 469;
	uint64_t t24 = 998987LLU;

    t24 = (((x105^x106)+x107)^x108);

    if (t24 != 18446744073654487227LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x109 = UINT16_MAX;
	static int16_t x110 = 11230;
	int64_t x111 = 7LL;
	int8_t x112 = -1;

    t25 = (((x109^x110)+x111)^x112);

    if (t25 != -54313LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x113 = UINT8_MAX;
	int16_t x114 = INT16_MAX;
	volatile int8_t x116 = INT8_MIN;
	volatile uint32_t t26 = 307U;

    t26 = (((x113^x114)+x115)^x116);

    if (t26 != 4294851385U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = INT16_MAX;
	uint64_t x118 = 977952154649242LLU;
	volatile uint16_t x119 = UINT16_MAX;
	int32_t x120 = INT32_MIN;
	volatile uint64_t t27 = 492156637327LLU;

    t27 = (((x117^x118)+x119)^x120);

    if (t27 != 18445766121380019556LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x122 = INT8_MAX;
	int64_t x123 = INT64_MAX;
	int32_t x124 = INT32_MIN;
	volatile int64_t t28 = 394455491LL;

    t28 = (((x121^x122)+x123)^x124);

    if (t28 != -9223372034707294147LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x129 = -88;
	static volatile int16_t x131 = -1;
	uint16_t x132 = UINT16_MAX;

    t29 = (((x129^x130)+x131)^x132);

    if (t29 != -64273) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = 3;
	uint16_t x135 = 2U;
	volatile uint8_t x136 = 87U;
	static volatile int64_t t30 = -5653324573LL;

    t30 = (((x133^x134)+x135)^x136);

    if (t30 != -9223372036854775726LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x137 = INT8_MIN;
	volatile uint64_t x138 = 11302431302LLU;
	static volatile int16_t x140 = INT16_MIN;
	volatile uint64_t t31 = 790812849375904273LLU;

    t31 = (((x137^x138)+x139)^x140);

    if (t31 != 11302409727LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x141 = INT8_MIN;
	int16_t x142 = INT16_MIN;
	int16_t x143 = -1;
	int8_t x144 = 0;
	int32_t t32 = 178028;

    t32 = (((x141^x142)+x143)^x144);

    if (t32 != 32639) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x145 = 414331611U;
	static uint16_t x146 = UINT16_MAX;
	uint16_t x147 = 146U;
	uint32_t x148 = 765649U;
	uint32_t t33 = 101992U;

    t33 = (((x145^x146)+x147)^x148);

    if (t33 != 414802791U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x150 = INT16_MIN;
	uint8_t x151 = 27U;
	uint16_t x152 = 7766U;

    t34 = (((x149^x150)+x151)^x152);

    if (t34 != 412809) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x158 = 1U;
	static int8_t x159 = 24;
	volatile uint16_t x160 = UINT16_MAX;
	volatile int32_t t35 = 539036097;

    t35 = (((x157^x158)+x159)^x160);

    if (t35 != -6008233) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x161 = -1LL;
	int16_t x163 = -375;
	int8_t x164 = INT8_MIN;
	int64_t t36 = 858LL;

    t36 = (((x161^x162)+x163)^x164);

    if (t36 != -9223372036854775544LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x165 = -1;
	static volatile uint16_t x166 = 7361U;
	volatile int16_t x168 = -5;

    t37 = (((x165^x166)+x167)^x168);

    if (t37 != 7370) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x169 = -1;
	volatile int8_t x170 = -2;
	int32_t x172 = INT32_MIN;
	volatile int64_t t38 = 60769LL;

    t38 = (((x169^x170)+x171)^x172);

    if (t38 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = INT16_MIN;
	volatile uint64_t x175 = 1732LLU;
	uint64_t t39 = 35201312238969772LLU;

    t39 = (((x173^x174)+x175)^x176);

    if (t39 != 34364LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x182 = -1LL;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = UINT64_MAX;
	uint64_t t40 = 860096345733505083LLU;

    t40 = (((x181^x182)+x183)^x184);

    if (t40 != 127LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x185 = INT64_MIN;
	static uint64_t x186 = UINT64_MAX;
	int64_t x187 = 267941309LL;
	int16_t x188 = -1;
	uint64_t t41 = 3123LLU;

    t41 = (((x185^x186)+x187)^x188);

    if (t41 != 9223372036586834499LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x189 = 27964U;
	volatile uint16_t x190 = 30304U;
	int8_t x191 = INT8_MAX;
	static int8_t x192 = 5;
	uint32_t t42 = 15249711U;

    t42 = (((x189^x190)+x191)^x192);

    if (t42 != 7134U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x193 = 152;
	int64_t x194 = -2800LL;
	int8_t x195 = 12;
	static int64_t x196 = INT64_MAX;
	static volatile int64_t t43 = 2LL;

    t43 = (((x193^x194)+x195)^x196);

    if (t43 != -9223372036854773141LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x198 = INT8_MAX;
	int64_t x200 = INT64_MIN;
	volatile int64_t t44 = 1990576305986950LL;

    t44 = (((x197^x198)+x199)^x200);

    if (t44 != 9223372034707292542LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x201 = -9;
	uint32_t x202 = 1564139383U;
	volatile uint32_t t45 = 1882158U;

    t45 = (((x201^x202)+x203)^x204);

    if (t45 != 2730876800U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x205 = INT16_MIN;
	int32_t x206 = 66;
	uint64_t x207 = 3832176LLU;
	volatile uint8_t x208 = 2U;
	uint64_t t46 = 11LLU;

    t46 = (((x205^x206)+x207)^x208);

    if (t46 != 3799472LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = INT16_MAX;
	int16_t x210 = INT16_MAX;
	volatile uint64_t x211 = 243LLU;
	int8_t x212 = 1;
	uint64_t t47 = 3667LLU;

    t47 = (((x209^x210)+x211)^x212);

    if (t47 != 242LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = INT8_MAX;
	static int16_t x214 = -1;
	volatile uint8_t x215 = UINT8_MAX;
	int16_t x216 = -1;
	int32_t t48 = 231239891;

    t48 = (((x213^x214)+x215)^x216);

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x217 = UINT16_MAX;
	int16_t x218 = INT16_MIN;
	volatile int64_t x219 = INT64_MAX;
	static uint16_t x220 = 1625U;

    t49 = (((x217^x218)+x219)^x220);

    if (t49 != 9223372036854741415LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x221 = 7;
	static volatile int32_t x223 = INT32_MAX;
	static int16_t x224 = INT16_MIN;
	volatile int32_t t50 = -1;

    t50 = (((x221^x222)+x223)^x224);

    if (t50 != -2126253485) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x230 = 0;
	uint32_t x231 = 0U;
	uint64_t x232 = 22LLU;

    t51 = (((x229^x230)+x231)^x232);

    if (t51 != 902112480948414LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x233 = 2741983U;
	volatile int8_t x234 = INT8_MIN;
	static uint64_t x235 = 10731713LLU;
	int64_t x236 = 563372841781763LL;
	volatile uint64_t t52 = 1216791028871425LLU;

    t52 = (((x233^x234)+x235)^x236);

    if (t52 != 563377141555235LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x237 = UINT32_MAX;
	int8_t x238 = 0;
	static int16_t x239 = 3;
	static uint32_t x240 = 1647153U;
	uint32_t t53 = 48207U;

    t53 = (((x237^x238)+x239)^x240);

    if (t53 != 1647155U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x242 = 2U;
	int16_t x243 = INT16_MAX;
	static int32_t t54 = 47148320;

    t54 = (((x241^x242)+x243)^x244);

    if (t54 != 285757) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x245 = -8;
	int64_t x246 = -5834754129428626LL;
	static int16_t x247 = 1374;
	static volatile int64_t t55 = 27371LL;

    t55 = (((x245^x246)+x247)^x248);

    if (t55 != -5834754129430005LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x249 = UINT16_MAX;
	int64_t x250 = INT64_MIN;
	static int64_t x251 = INT64_MAX;
	int32_t x252 = -1;
	int64_t t56 = 8013163623LL;

    t56 = (((x249^x250)+x251)^x252);

    if (t56 != -65535LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	static uint64_t x255 = 4423965779212LLU;
	static int32_t x256 = INT32_MIN;
	uint64_t t57 = 193809426787860LLU;

    t57 = (((x253^x254)+x255)^x256);

    if (t57 != 9223367613187925260LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x257 = INT64_MAX;
	uint16_t x258 = 2U;
	int16_t x259 = INT16_MIN;
	uint16_t x260 = UINT16_MAX;
	int64_t t58 = 69690658103LL;

    t58 = (((x257^x258)+x259)^x260);

    if (t58 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = INT32_MAX;
	int16_t x263 = -1;
	int8_t x264 = -1;
	volatile int64_t t59 = 6733LL;

    t59 = (((x261^x262)+x263)^x264);

    if (t59 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x265 = INT8_MIN;
	uint32_t x266 = 1U;
	volatile int32_t x268 = INT32_MAX;

    t60 = (((x265^x266)+x267)^x268);

    if (t60 != 2147483780U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x273 = INT32_MAX;
	static volatile int16_t x274 = INT16_MIN;
	int64_t x275 = -1LL;
	volatile uint32_t x276 = 6601745U;
	static int64_t t61 = -215301545901401LL;

    t61 = (((x273^x274)+x275)^x276);

    if (t61 != -2140879889LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x277 = INT8_MIN;
	int64_t x279 = -9719509279447LL;
	uint16_t x280 = 7U;
	int64_t t62 = -245695LL;

    t62 = (((x277^x278)+x279)^x280);

    if (t62 != -9717361795922LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = INT16_MAX;
	volatile uint32_t x282 = UINT32_MAX;
	int32_t x283 = INT32_MIN;

    t63 = (((x281^x282)+x283)^x284);

    if (t63 != 2147516415U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x285 = -1LL;
	int8_t x286 = INT8_MIN;
	uint16_t x287 = UINT16_MAX;
	volatile int16_t x288 = INT16_MIN;
	int64_t t64 = 17LL;

    t64 = (((x285^x286)+x287)^x288);

    if (t64 != -98178LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = 2;
	static int32_t x292 = INT32_MIN;

    t65 = (((x289^x290)+x291)^x292);

    if (t65 != 2147483008LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x293 = 414292314U;
	int64_t x295 = -3834LL;
	int8_t x296 = 6;
	uint64_t t66 = 3LLU;

    t66 = (((x293^x294)+x295)^x296);

    if (t66 != 414289168LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x297 = 1329;
	static int8_t x299 = -11;
	int64_t x300 = INT64_MIN;
	int64_t t67 = 28891437185148473LL;

    t67 = (((x297^x298)+x299)^x300);

    if (t67 != -9223372034707293501LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x301 = 12U;
	int8_t x303 = -6;
	int64_t x304 = -8618963743LL;
	static int64_t t68 = -45236769550000LL;

    t68 = (((x301^x302)+x303)^x304);

    if (t68 != 8618963815LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x310 = 5;
	int16_t x311 = INT16_MIN;

    t69 = (((x309^x310)+x311)^x312);

    if (t69 != 41065647LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x313 = 10499241430LL;
	uint32_t x314 = 45U;
	volatile uint16_t x315 = UINT16_MAX;
	int8_t x316 = -1;
	int64_t t70 = 350LL;

    t70 = (((x313^x314)+x315)^x316);

    if (t70 != -10499307003LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x317 = INT8_MIN;
	int16_t x318 = -1;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = -1;
	volatile int32_t t71 = 1;

    t71 = (((x317^x318)+x319)^x320);

    if (t71 != -383) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x321 = INT16_MAX;
	uint32_t x322 = UINT32_MAX;
	uint32_t x323 = 1U;
	volatile uint32_t x324 = 152U;
	static volatile uint32_t t72 = 104016451U;

    t72 = (((x321^x322)+x323)^x324);

    if (t72 != 4294934681U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x325 = 9;
	int64_t x326 = INT64_MIN;
	volatile int32_t x327 = INT32_MAX;
	int32_t x328 = -1;
	int64_t t73 = -229806118317105LL;

    t73 = (((x325^x326)+x327)^x328);

    if (t73 != 9223372034707292151LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x330 = 4459U;
	uint16_t x331 = 29U;
	uint16_t x332 = UINT16_MAX;
	uint32_t t74 = 11U;

    t74 = (((x329^x330)+x331)^x332);

    if (t74 != 4294906538U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x333 = INT16_MAX;
	volatile int32_t x334 = INT32_MIN;
	int64_t x335 = -1LL;
	int8_t x336 = -9;
	int64_t t75 = 1LL;

    t75 = (((x333^x334)+x335)^x336);

    if (t75 != 2147450889LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x337 = -44;
	volatile int16_t x338 = INT16_MIN;
	volatile uint64_t x340 = UINT64_MAX;

    t76 = (((x337^x338)+x339)^x340);

    if (t76 != 18446744073709518892LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x341 = INT16_MIN;
	int64_t x342 = -2508483410549821LL;
	volatile int64_t x344 = INT64_MAX;
	static uint64_t t77 = 537354713276266304LLU;

    t77 = (((x341^x342)+x343)^x344);

    if (t77 != 9220863553442886039LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x346 = 39LLU;
	uint32_t x347 = UINT32_MAX;
	volatile uint64_t x348 = 270816678294327LLU;
	static uint64_t t78 = 1529709933210655797LLU;

    t78 = (((x345^x346)+x347)^x348);

    if (t78 != 270820973264045LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x349 = INT8_MIN;
	int8_t x351 = 3;
	int64_t x352 = -1LL;
	volatile int64_t t79 = 1001080786380LL;

    t79 = (((x349^x350)+x351)^x352);

    if (t79 != 122LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x353 = INT8_MIN;
	uint64_t x355 = 102219581003LLU;
	int16_t x356 = -2;
	volatile uint64_t t80 = 233LLU;

    t80 = (((x353^x354)+x355)^x356);

    if (t80 != 9223371934635194676LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x357 = 6U;
	int64_t x360 = INT64_MIN;

    t81 = (((x357^x358)+x359)^x360);

    if (t81 != -8937602228819519593LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x362 = UINT8_MAX;
	static int16_t x363 = INT16_MAX;
	int32_t x364 = -1929885;

    t82 = (((x361^x362)+x363)^x364);

    if (t82 != -1904099) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x365 = -694433401;
	int16_t x366 = INT16_MAX;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = -1;
	static uint32_t t83 = 31973121U;

    t83 = (((x365^x366)+x367)^x368);

    if (t83 != 694438280U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x370 = -234372378844934824LL;
	int16_t x371 = INT16_MIN;
	uint32_t x372 = 0U;
	int64_t t84 = -396280358LL;

    t84 = (((x369^x370)+x371)^x372);

    if (t84 != -234372378844967641LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x373 = INT16_MAX;
	int8_t x374 = INT8_MIN;
	int32_t x375 = -1;
	static int32_t t85 = -83694;

    t85 = (((x373^x374)+x375)^x376);

    if (t85 != 32641) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x377 = 2409213316633337925LLU;
	int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MIN;
	uint64_t t86 = 3741LLU;

    t86 = (((x377^x378)+x379)^x380);

    if (t86 != 6814158722035753029LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x381 = 42U;
	volatile uint8_t x382 = UINT8_MAX;
	static int32_t x383 = -1433;
	int32_t x384 = 8129317;
	static volatile int32_t t87 = -292084564;

    t87 = (((x381^x382)+x383)^x384);

    if (t87 != -8130535) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x385 = UINT8_MAX;
	int64_t x388 = 4695940804LL;
	volatile int64_t t88 = 839063043009LL;

    t88 = (((x385^x386)+x387)^x388);

    if (t88 != 4695940688LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x389 = 0LLU;
	uint16_t x390 = 113U;
	int32_t x391 = -3;
	volatile uint64_t t89 = 114LLU;

    t89 = (((x389^x390)+x391)^x392);

    if (t89 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x394 = 698678299U;
	uint64_t x395 = 1979LLU;

    t90 = (((x393^x394)+x395)^x396);

    if (t90 != 9223378205919427749LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x397 = INT16_MIN;
	static uint32_t x400 = UINT32_MAX;

    t91 = (((x397^x398)+x399)^x400);

    if (t91 != 1363U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x402 = INT64_MAX;
	int32_t x403 = 295;
	int16_t x404 = 349;
	int64_t t92 = -256538810990079300LL;

    t92 = (((x401^x402)+x403)^x404);

    if (t92 != -9223372036854774818LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x405 = -1LL;
	uint64_t x406 = 5265375293544LLU;
	static volatile int32_t x407 = -1;
	int8_t x408 = 1;
	uint64_t t93 = 1062345987440296LLU;

    t93 = (((x405^x406)+x407)^x408);

    if (t93 != 18446738808334258071LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x409 = -1LL;
	uint64_t x410 = 23839971165LLU;
	static uint16_t x411 = 85U;
	uint16_t x412 = 10U;

    t94 = (((x409^x410)+x411)^x412);

    if (t94 != 18446744049869580541LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x413 = -1;
	int8_t x414 = 21;
	static volatile int8_t x416 = INT8_MIN;
	volatile int32_t t95 = -1;

    t95 = (((x413^x414)+x415)^x416);

    if (t95 != 105) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x417 = 6U;
	int8_t x418 = INT8_MIN;
	int16_t x419 = -187;
	uint16_t x420 = 161U;
	static int32_t t96 = -12;

    t96 = (((x417^x418)+x419)^x420);

    if (t96 != -406) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x421 = UINT32_MAX;
	int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	int32_t x424 = INT32_MAX;

    t97 = (((x421^x422)+x423)^x424);

    if (t97 != 2147516288U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x425 = -1LL;
	volatile int32_t x426 = 31;
	int16_t x428 = INT16_MIN;
	int64_t t98 = -35516544701LL;

    t98 = (((x425^x426)+x427)^x428);

    if (t98 != 32735LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x429 = INT16_MIN;
	volatile uint32_t x430 = 502397631U;
	static int8_t x432 = 1;
	uint32_t t99 = 2163U;

    t99 = (((x429^x430)+x431)^x432);

    if (t99 != 3792599740U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x433 = INT16_MAX;
	uint8_t x434 = UINT8_MAX;
	volatile uint32_t x435 = 216246U;
	int64_t x436 = INT64_MIN;
	static volatile int64_t t100 = -825LL;

    t100 = (((x433^x434)+x435)^x436);

    if (t100 != -9223372036854527050LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x437 = UINT16_MAX;
	static uint32_t x438 = 826838583U;
	uint32_t x439 = 777510174U;
	int64_t x440 = INT64_MAX;
	int64_t t101 = -64992973LL;

    t101 = (((x437^x438)+x439)^x440);

    if (t101 != 9223372035250434329LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x441 = 22U;
	static int8_t x442 = -1;
	uint8_t x443 = 43U;
	static uint32_t x444 = UINT32_MAX;
	volatile uint32_t t102 = 379300U;

    t102 = (((x441^x442)+x443)^x444);

    if (t102 != 4294967275U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x445 = -871;
	static int16_t x446 = 649;
	int8_t x447 = 0;
	uint32_t x448 = UINT32_MAX;
	static uint32_t t103 = 28303603U;

    t103 = (((x445^x446)+x447)^x448);

    if (t103 != 495U) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x449 = 5263447896338926304LLU;
	static int64_t x450 = INT64_MAX;
	volatile uint8_t x451 = 65U;
	volatile uint64_t t104 = 85175LLU;

    t104 = (((x449^x450)+x451)^x452);

    if (t104 != 3959924138739436191LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x453 = 4U;
	int8_t x455 = INT8_MIN;
	uint8_t x456 = 27U;
	int32_t t105 = 0;

    t105 = (((x453^x454)+x455)^x456);

    if (t105 != 96) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x458 = 5U;
	static int32_t x459 = INT32_MAX;
	static volatile int16_t x460 = -10;
	volatile int32_t t106 = 315002301;

    t106 = (((x457^x458)+x459)^x460);

    if (t106 != -2147450894) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x461 = 25U;
	int8_t x462 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	volatile uint64_t t107 = 4273LLU;

    t107 = (((x461^x462)+x463)^x464);

    if (t107 != 32664LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x465 = -20913;
	int32_t x466 = 199808455;
	uint64_t x467 = 59558LLU;
	uint64_t x468 = 5033LLU;

    t108 = (((x465^x466)+x467)^x468);

    if (t108 != 18446744073509828487LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x469 = 1887661773LLU;
	int8_t x470 = -17;
	volatile uint8_t x471 = 40U;
	static int8_t x472 = INT8_MIN;
	static volatile uint64_t t109 = 5LLU;

    t109 = (((x469^x470)+x471)^x472);

    if (t109 != 1887661770LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x474 = INT64_MAX;
	static int32_t x475 = -74;
	int16_t x476 = -34;
	volatile int64_t t110 = 6LL;

    t110 = (((x473^x474)+x475)^x476);

    if (t110 != 9223372034707292267LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x477 = UINT32_MAX;
	static uint8_t x478 = 5U;
	volatile int8_t x479 = INT8_MIN;
	static uint64_t x480 = 128291328457542LLU;
	volatile uint64_t t111 = 602662400LLU;

    t111 = (((x477^x478)+x479)^x480);

    if (t111 != 128294312772668LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x481 = -1;
	static int16_t x483 = INT16_MIN;
	int64_t t112 = 17477LL;

    t112 = (((x481^x482)+x483)^x484);

    if (t112 != -925040705LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x485 = 2U;
	volatile uint16_t x486 = 3U;
	int64_t x487 = INT64_MIN;
	uint16_t x488 = 6U;
	static volatile int64_t t113 = 451716792592LL;

    t113 = (((x485^x486)+x487)^x488);

    if (t113 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	static int16_t x490 = INT16_MAX;
	int8_t x491 = -3;
	uint32_t x492 = UINT32_MAX;
	static uint32_t t114 = 10U;

    t114 = (((x489^x490)+x491)^x492);

    if (t114 != 4294934786U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x493 = INT64_MIN;
	int32_t x494 = -1;
	static volatile int64_t x495 = INT64_MIN;
	int32_t x496 = INT32_MIN;
	volatile int64_t t115 = 16564LL;

    t115 = (((x493^x494)+x495)^x496);

    if (t115 != 2147483647LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x497 = 1168643156990412631LLU;
	int16_t x498 = -1;
	uint8_t x499 = UINT8_MAX;
	static uint16_t x500 = 10365U;
	volatile uint64_t t116 = 511155567692LLU;

    t116 = (((x497^x498)+x499)^x500);

    if (t116 != 17278100916719129050LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x501 = 1715471U;
	int64_t x502 = -1LL;
	volatile int64_t x503 = 241977772LL;
	static int64_t t117 = 598227033710610LL;

    t117 = (((x501^x502)+x503)^x504);

    if (t117 != -1907221348LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x505 = UINT64_MAX;
	int8_t x506 = -1;
	uint32_t x507 = 24264852U;
	uint32_t x508 = 5500833U;
	uint64_t t118 = 520624944580LLU;

    t118 = (((x505^x506)+x507)^x508);

    if (t118 != 18984757LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x509 = INT16_MAX;
	int64_t x510 = INT64_MAX;
	int16_t x511 = 3;
	int16_t x512 = -1;
	volatile int64_t t119 = -527LL;

    t119 = (((x509^x510)+x511)^x512);

    if (t119 != -9223372036854743044LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x513 = INT32_MAX;
	int16_t x515 = 9395;
	volatile int64_t t120 = 969599632583484LL;

    t120 = (((x513^x514)+x515)^x516);

    if (t120 != -2106306268LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x517 = INT64_MIN;
	int8_t x518 = INT8_MIN;
	volatile uint8_t x519 = 6U;
	int8_t x520 = INT8_MIN;

    t121 = (((x517^x518)+x519)^x520);

    if (t121 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x521 = 17341326U;
	int64_t x522 = -1LL;
	uint16_t x523 = 181U;
	int16_t x524 = -101;
	int64_t t122 = -5715824640082LL;

    t122 = (((x521^x522)+x523)^x524);

    if (t122 != 17341117LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x525 = -23;
	uint8_t x526 = 84U;
	int8_t x527 = -1;
	uint32_t x528 = UINT32_MAX;
	static volatile uint32_t t123 = 3U;

    t123 = (((x525^x526)+x527)^x528);

    if (t123 != 67U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x529 = INT8_MIN;
	static uint16_t x531 = UINT16_MAX;
	static int64_t x532 = INT64_MAX;
	volatile int64_t t124 = -334285505405908LL;

    t124 = (((x529^x530)+x531)^x532);

    if (t124 != 9223372036854710177LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x533 = INT8_MIN;
	int32_t x534 = -1;
	int32_t x535 = -1;
	int8_t x536 = INT8_MIN;
	static volatile int32_t t125 = 16589428;

    t125 = (((x533^x534)+x535)^x536);

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x537 = -1;
	volatile int32_t x538 = -1;
	int32_t x539 = 2297;
	int8_t x540 = INT8_MAX;
	volatile int32_t t126 = 918;

    t126 = (((x537^x538)+x539)^x540);

    if (t126 != 2182) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x541 = INT8_MIN;
	uint64_t x542 = 18557LLU;
	int8_t x544 = -1;
	uint64_t t127 = 280013152LLU;

    t127 = (((x541^x542)+x543)^x544);

    if (t127 != 18446744069414602755LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x546 = UINT32_MAX;
	uint64_t x547 = UINT64_MAX;
	uint16_t x548 = 280U;
	uint64_t t128 = 14583215688991LLU;

    t128 = (((x545^x546)+x547)^x548);

    if (t128 != 4294965717LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x550 = -1LL;
	static int32_t x551 = 58875;
	static int32_t x552 = 152372;

    t129 = (((x549^x550)+x551)^x552);

    if (t129 != 177486LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x557 = UINT8_MAX;
	int64_t x558 = -892941LL;
	static uint32_t x560 = UINT32_MAX;
	volatile int64_t t130 = -64633465928LL;

    t130 = (((x557^x558)+x559)^x560);

    if (t130 != 3971946825LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x561 = 22U;
	int8_t x563 = 6;
	static uint32_t x564 = 1212605752U;
	volatile uint64_t t131 = 334837218182280LLU;

    t131 = (((x561^x562)+x563)^x564);

    if (t131 != 18446744072496945879LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x565 = 165613724040166547LLU;
	volatile int32_t x566 = -1;

    t132 = (((x565^x566)+x567)^x568);

    if (t132 != 18281130349669210300LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x569 = 3U;
	static uint8_t x570 = UINT8_MAX;
	static uint32_t x572 = 1029U;
	volatile uint32_t t133 = 1373806574U;

    t133 = (((x569^x570)+x571)^x572);

    if (t133 != 1265U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x573 = -499;
	int32_t x574 = INT32_MIN;
	int32_t x576 = -1;

    t134 = (((x573^x574)+x575)^x576);

    if (t134 != -2147483277) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x578 = -1LL;
	uint16_t x579 = 386U;
	volatile int64_t t135 = -328906LL;

    t135 = (((x577^x578)+x579)^x580);

    if (t135 != -9223372036324951653LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x581 = INT64_MIN;
	int32_t x582 = 975215;
	volatile int16_t x584 = INT16_MIN;
	volatile int64_t t136 = 1300755896848708LL;

    t136 = (((x581^x582)+x583)^x584);

    if (t136 != 9223372034706334062LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x585 = 12;
	int16_t x587 = INT16_MIN;
	int64_t t137 = -453170955LL;

    t137 = (((x585^x586)+x587)^x588);

    if (t137 != -403170701LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x590 = 19;
	int32_t x591 = -379149;
	static volatile int32_t t138 = 126913458;

    t138 = (((x589^x590)+x591)^x592);

    if (t138 != -379107) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x593 = -1LL;
	uint16_t x594 = UINT16_MAX;
	uint16_t x595 = 3300U;
	uint8_t x596 = UINT8_MAX;
	static int64_t t139 = -120LL;

    t139 = (((x593^x594)+x595)^x596);

    if (t139 != -62437LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x598 = 85U;
	volatile int64_t x599 = 3225857401LL;
	static volatile uint64_t t140 = 3446LLU;

    t140 = (((x597^x598)+x599)^x600);

    if (t140 != 1078376015LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x601 = INT32_MIN;
	int8_t x602 = INT8_MAX;
	uint64_t x603 = UINT64_MAX;
	uint64_t x604 = UINT64_MAX;
	uint64_t t141 = 10514675893LLU;

    t141 = (((x601^x602)+x603)^x604);

    if (t141 != 2147483521LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x605 = INT8_MIN;
	volatile uint16_t x607 = UINT16_MAX;
	int64_t x608 = INT64_MIN;
	static volatile int64_t t142 = 7351769343407338LL;

    t142 = (((x605^x606)+x607)^x608);

    if (t142 != -9223372036854710359LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x609 = -1;
	int8_t x610 = INT8_MIN;
	int32_t x611 = -1;
	int64_t x612 = INT64_MIN;

    t143 = (((x609^x610)+x611)^x612);

    if (t143 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x613 = INT16_MAX;
	uint32_t x614 = UINT32_MAX;
	static int64_t x615 = INT64_MIN;
	int64_t t144 = -197901473975807389LL;

    t144 = (((x613^x614)+x615)^x616);

    if (t144 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x617 = INT64_MAX;
	int64_t x618 = INT64_MIN;
	int64_t x619 = -487430862106674LL;
	uint64_t t145 = 112418065009764LLU;

    t145 = (((x617^x618)+x619)^x620);

    if (t145 != 487430862106674LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x623 = -1LL;
	uint8_t x624 = 1U;
	volatile int64_t t146 = 3LL;

    t146 = (((x621^x622)+x623)^x624);

    if (t146 != -2147483521LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x625 = 702852LLU;
	int16_t x626 = INT16_MIN;
	static volatile uint64_t t147 = 5583593LLU;

    t147 = (((x625^x626)+x627)^x628);

    if (t147 != 18446744072797847789LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x630 = INT64_MIN;
	int8_t x631 = INT8_MIN;
	static volatile int64_t t148 = 4LL;

    t148 = (((x629^x630)+x631)^x632);

    if (t148 != -9223372036776626394LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x633 = -1;
	int8_t x634 = INT8_MIN;
	uint64_t x635 = 119675855699LLU;
	int32_t x636 = INT32_MIN;
	volatile uint64_t t149 = 1158744177LLU;

    t149 = (((x633^x634)+x635)^x636);

    if (t149 != 18446743955014722514LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x641 = 66028388584574LLU;
	uint16_t x642 = 20U;
	int64_t x643 = -11130870693342LL;
	int16_t x644 = INT16_MAX;
	volatile uint64_t t150 = 2LLU;

    t150 = (((x641^x642)+x643)^x644);

    if (t150 != 54897517916531LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x646 = INT8_MIN;
	uint64_t x648 = 128308014392330551LLU;
	uint64_t t151 = 110LLU;

    t151 = (((x645^x646)+x647)^x648);

    if (t151 != 18318436059317225857LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x649 = -2221993570611LL;
	int32_t x650 = INT32_MAX;
	static int16_t x651 = INT16_MIN;
	static int16_t x652 = INT16_MIN;
	static int64_t t152 = 731221427114462LL;

    t152 = (((x649^x650)+x651)^x652);

    if (t152 != 2221150122290LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x653 = INT32_MIN;
	volatile int64_t x655 = INT64_MIN;
	static int32_t x656 = INT32_MIN;

    t153 = (((x653^x654)+x655)^x656);

    if (t153 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x657 = INT64_MIN;
	int8_t x658 = INT8_MIN;
	int16_t x659 = INT16_MIN;
	static int16_t x660 = INT16_MIN;
	int64_t t154 = -91592278087516360LL;

    t154 = (((x657^x658)+x659)^x660);

    if (t154 != -9223372036854710400LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x661 = -2;
	uint32_t x663 = 7688177U;
	static uint16_t x664 = 63U;
	static uint64_t t155 = 11093520470893LLU;

    t155 = (((x661^x662)+x663)^x664);

    if (t155 != 18389880845251141039LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x665 = INT32_MAX;
	int16_t x666 = -96;
	int64_t x667 = INT64_MAX;
	int8_t x668 = INT8_MAX;
	int64_t t156 = -284178035268LL;

    t156 = (((x665^x666)+x667)^x668);

    if (t156 != 9223372034707292193LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x669 = INT64_MIN;
	int16_t x671 = INT16_MIN;
	uint64_t x672 = 263353LLU;
	static volatile uint64_t t157 = 2189583571710246532LLU;

    t157 = (((x669^x670)+x671)^x672);

    if (t157 != 9223372036854479686LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x673 = INT8_MIN;
	volatile int8_t x674 = INT8_MIN;
	uint8_t x675 = 2U;
	uint32_t x676 = UINT32_MAX;
	static volatile uint32_t t158 = 15647341U;

    t158 = (((x673^x674)+x675)^x676);

    if (t158 != 4294967293U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x677 = INT32_MIN;
	uint32_t x679 = 1815651820U;
	int16_t x680 = INT16_MAX;
	int64_t t159 = -27801895020939LL;

    t159 = (((x677^x678)+x679)^x680);

    if (t159 != 9223372036522957331LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x681 = 34;
	int16_t x682 = INT16_MIN;
	volatile int8_t x683 = INT8_MIN;
	volatile int16_t x684 = -3;
	int32_t t160 = 910558;

    t160 = (((x681^x682)+x683)^x684);

    if (t160 != 32863) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x685 = INT16_MAX;
	volatile uint32_t x686 = 216U;
	int8_t x687 = INT8_MAX;
	int16_t x688 = -1;

    t161 = (((x685^x686)+x687)^x688);

    if (t161 != 4294934617U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x689 = 3448135U;
	uint16_t x690 = 113U;
	uint64_t x691 = 10LLU;
	int32_t x692 = INT32_MAX;
	uint64_t t162 = 34553329709485380LLU;

    t162 = (((x689^x690)+x691)^x692);

    if (t162 != 2144035519LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x693 = UINT16_MAX;
	int32_t x695 = -1;
	uint64_t x696 = 62878230LLU;
	static volatile uint64_t t163 = 1971912842626LLU;

    t163 = (((x693^x694)+x695)^x696);

    if (t163 != 18446744073646673385LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x698 = INT32_MIN;
	int8_t x699 = 2;
	int64_t t164 = 31915872609455669LL;

    t164 = (((x697^x698)+x699)^x700);

    if (t164 != -9223372034707292163LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x701 = 2U;
	static int8_t x702 = -1;
	int64_t x703 = -1LL;
	uint32_t x704 = UINT32_MAX;
	static int64_t t165 = -5LL;

    t165 = (((x701^x702)+x703)^x704);

    if (t165 != -4294967293LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x705 = 286242LLU;
	uint32_t x706 = 3217U;
	int16_t x707 = 336;
	uint8_t x708 = 7U;
	static uint64_t t166 = 1594027243767750LLU;

    t166 = (((x705^x706)+x707)^x708);

    if (t166 != 283652LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x710 = 395230U;
	uint16_t x711 = 1U;
	static int64_t x712 = INT64_MIN;
	int64_t t167 = 1077LL;

    t167 = (((x709^x710)+x711)^x712);

    if (t167 != 9223372036846673899LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x714 = 195U;
	int32_t x715 = INT32_MIN;
	uint32_t x716 = 56U;
	static uint64_t t168 = 21LLU;

    t168 = (((x713^x714)+x715)^x716);

    if (t168 != 18446744071562067716LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x717 = INT64_MAX;
	int64_t x718 = INT64_MIN;
	volatile int16_t x719 = INT16_MAX;
	volatile int64_t x720 = INT64_MIN;
	volatile int64_t t169 = -1216460806446814LL;

    t169 = (((x717^x718)+x719)^x720);

    if (t169 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x721 = 2261636;
	static volatile int32_t x722 = 287251;
	static volatile uint64_t x723 = 608010766LLU;
	int64_t x724 = INT64_MIN;
	volatile uint64_t t170 = 1303LLU;

    t170 = (((x721^x722)+x723)^x724);

    if (t170 != 9223372037465334437LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x725 = 38U;
	uint8_t x726 = UINT8_MAX;
	volatile uint32_t x727 = 98U;
	uint64_t x728 = 643LLU;
	uint64_t t171 = 0LLU;

    t171 = (((x725^x726)+x727)^x728);

    if (t171 != 952LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x730 = INT32_MAX;
	uint8_t x731 = 1U;
	static uint64_t t172 = 2010LLU;

    t172 = (((x729^x730)+x731)^x732);

    if (t172 != 18446740754498865298LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x737 = UINT32_MAX;
	volatile uint16_t x738 = 369U;
	int32_t x739 = -1;
	static volatile int64_t x740 = INT64_MAX;
	volatile int64_t t173 = -130713732068511314LL;

    t173 = (((x737^x738)+x739)^x740);

    if (t173 != 9223372032559808882LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x741 = 19872U;
	int8_t x742 = -4;
	volatile int16_t x743 = -198;
	volatile uint16_t x744 = 506U;
	volatile uint32_t t174 = 221673U;

    t174 = (((x741^x742)+x743)^x744);

    if (t174 != 4294946924U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x747 = INT8_MIN;
	uint64_t x748 = 6910956729926994LLU;
	static volatile uint64_t t175 = 20524493877290008LLU;

    t175 = (((x745^x746)+x747)^x748);

    if (t175 != 18439833116979624851LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t t176 = 798U;

    t176 = (((x757^x758)+x759)^x760);

    if (t176 != 4294966323U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x761 = 0U;
	static uint16_t x762 = 43U;
	uint32_t x764 = 6399U;
	uint64_t t177 = 73298122002LLU;

    t177 = (((x761^x762)+x763)^x764);

    if (t177 != 1764283071LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x769 = -14;
	static int32_t x770 = 3;
	int32_t x771 = -1;
	int16_t x772 = -1;
	int32_t t178 = -8062605;

    t178 = (((x769^x770)+x771)^x772);

    if (t178 != 15) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x774 = 816969279295132854LLU;
	int8_t x775 = INT8_MIN;
	volatile uint64_t t179 = 13042617274671LLU;

    t179 = (((x773^x774)+x775)^x776);

    if (t179 != 8406402757559620662LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x777 = 34823U;
	static int32_t x778 = INT32_MIN;
	uint64_t x779 = 21714091388994501LLU;
	uint16_t x780 = UINT16_MAX;

    t180 = (((x777^x778)+x779)^x780);

    if (t180 != 21714093536572467LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x781 = INT16_MIN;
	static int8_t x782 = INT8_MAX;
	static int32_t x784 = 71094578;
	int32_t t181 = 309655;

    t181 = (((x781^x782)+x783)^x784);

    if (t181 != -71085657) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x785 = 0;
	static volatile uint8_t x786 = 6U;
	uint64_t x787 = 20LLU;
	int32_t x788 = -6;

    t182 = (((x785^x786)+x787)^x788);

    if (t182 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x789 = INT64_MIN;
	volatile uint8_t x790 = 10U;
	volatile uint32_t x791 = 795U;
	int32_t x792 = INT32_MIN;
	int64_t t183 = 34489904LL;

    t183 = (((x789^x790)+x791)^x792);

    if (t183 != 9223372034707292965LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x793 = INT64_MIN;
	int64_t x794 = INT64_MAX;
	uint8_t x795 = UINT8_MAX;
	int64_t t184 = -96945728082375318LL;

    t184 = (((x793^x794)+x795)^x796);

    if (t184 != -2147483394LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x797 = UINT64_MAX;
	int16_t x798 = INT16_MIN;
	static volatile int8_t x799 = INT8_MIN;
	int32_t x800 = INT32_MAX;
	volatile uint64_t t185 = 377428280725866LLU;

    t185 = (((x797^x798)+x799)^x800);

    if (t185 != 2147451008LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x802 = UINT8_MAX;
	int8_t x804 = INT8_MIN;
	static int32_t t186 = 201757;

    t186 = (((x801^x802)+x803)^x804);

    if (t186 != 2147418240) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x805 = 61;
	volatile int8_t x807 = INT8_MIN;
	static int8_t x808 = INT8_MAX;
	static volatile int32_t t187 = -31;

    t187 = (((x805^x806)+x807)^x808);

    if (t187 != -197) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x809 = -1;
	int16_t x810 = INT16_MAX;
	uint8_t x812 = 1U;
	int32_t t188 = 391606675;

    t188 = (((x809^x810)+x811)^x812);

    if (t188 != 26912678) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x813 = 3529U;
	uint16_t x814 = UINT16_MAX;
	uint64_t t189 = 603813699726LLU;

    t189 = (((x813^x814)+x815)^x816);

    if (t189 != 20944LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x817 = INT32_MIN;
	uint16_t x818 = UINT16_MAX;
	int32_t x819 = -2032;
	int16_t x820 = 1;
	int32_t t190 = 1;

    t190 = (((x817^x818)+x819)^x820);

    if (t190 != -2147420146) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x822 = 0U;
	volatile int16_t x823 = -13;
	volatile int32_t x824 = -1;
	volatile uint32_t t191 = 31187161U;

    t191 = (((x821^x822)+x823)^x824);

    if (t191 != 4294901773U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x825 = -219;
	int8_t x826 = -6;
	static uint16_t x827 = UINT16_MAX;
	static volatile int32_t t192 = 742;

    t192 = (((x825^x826)+x827)^x828);

    if (t192 != -65759) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x830 = UINT64_MAX;
	uint8_t x832 = 8U;
	static uint64_t t193 = 31507760243953295LLU;

    t193 = (((x829^x830)+x831)^x832);

    if (t193 != 18446744073709548461LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x839 = INT8_MIN;
	volatile uint16_t x840 = 1U;
	volatile int32_t t194 = 10;

    t194 = (((x837^x838)+x839)^x840);

    if (t194 != 2147483508) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x843 = -1;
	int32_t x844 = INT32_MIN;
	volatile uint64_t t195 = 135245382108LLU;

    t195 = (((x841^x842)+x843)^x844);

    if (t195 != 857949LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x846 = -1;
	int16_t x847 = -11383;
	volatile uint8_t x848 = UINT8_MAX;
	int64_t t196 = -4415LL;

    t196 = (((x845^x846)+x847)^x848);

    if (t196 != -11402LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x849 = -23LL;
	int32_t x850 = INT32_MIN;
	int32_t x851 = 1991;
	int32_t x852 = -1;
	static int64_t t197 = -24581273921572LL;

    t197 = (((x849^x850)+x851)^x852);

    if (t197 != -2147485617LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x853 = INT32_MIN;
	static volatile int64_t x854 = INT64_MIN;
	uint8_t x855 = UINT8_MAX;
	volatile int8_t x856 = -1;
	volatile int64_t t198 = -193183366LL;

    t198 = (((x853^x854)+x855)^x856);

    if (t198 != -9223372034707292416LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x857 = -1;
	int32_t x858 = -1;
	int16_t x860 = -2;

    t199 = (((x857^x858)+x859)^x860);

    if (t199 != -44) { NG(); } else { ; }
	
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

