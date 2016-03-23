
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

volatile int64_t x1 = -1LL;
uint16_t x6 = UINT16_MAX;
int8_t x7 = INT8_MIN;
static volatile uint16_t x11 = 17852U;
uint32_t x33 = 56U;
int32_t x40 = 10;
uint16_t x41 = 7517U;
int8_t x49 = 18;
int32_t x50 = -1;
int8_t x56 = INT8_MIN;
uint32_t x63 = 6U;
uint32_t t13 = 406409U;
int64_t x73 = -4607504825922013756LL;
uint8_t x76 = 103U;
int32_t t15 = -12470156;
int16_t x79 = -1;
int32_t x96 = 918367;
uint32_t x99 = 1727U;
int32_t t22 = -84548;
int8_t x122 = -1;
volatile int8_t x131 = 2;
static uint64_t x132 = 388715765397772560LLU;
uint64_t t25 = 4598LLU;
static volatile uint64_t x135 = 7956LLU;
uint16_t x149 = 31U;
volatile int16_t x151 = INT16_MAX;
volatile uint16_t x152 = 7154U;
volatile uint32_t x161 = 248740082U;
uint16_t x164 = 7662U;
int16_t x166 = -1;
static int16_t x167 = INT16_MAX;
static int8_t x172 = INT8_MIN;
uint64_t t34 = 60018LLU;
static volatile int64_t t35 = 82284416LL;
int8_t x186 = INT8_MAX;
static uint32_t x188 = 25U;
int8_t x190 = -16;
uint64_t x195 = 12974069LLU;
volatile uint64_t t38 = 1881589317222LLU;
int16_t x204 = INT16_MIN;
volatile int32_t t40 = -191308;
int16_t x205 = 12;
static uint16_t x207 = 15U;
int8_t x212 = INT8_MAX;
int32_t t43 = -54314;
static uint8_t x220 = 107U;
uint64_t x224 = 127465966578563LLU;
uint64_t x228 = UINT64_MAX;
volatile int64_t x234 = 134221LL;
uint64_t x236 = 1960255546941079502LLU;
static volatile uint64_t t48 = 561053366866363010LLU;
volatile int64_t x251 = -1LL;
uint16_t x252 = 2990U;
uint32_t x257 = 16170U;
volatile uint16_t x271 = 203U;
volatile uint64_t t57 = 6607161226LLU;
int16_t x280 = -254;
uint32_t t60 = 3943129U;
volatile int32_t t61 = -56692;
volatile uint64_t x293 = 101563LLU;
uint32_t t63 = 17U;
static int8_t x301 = INT8_MAX;
volatile int32_t t64 = -1;
int64_t x306 = INT64_MIN;
static int16_t x311 = -1;
static int64_t x321 = INT64_MAX;
int64_t x323 = INT64_MIN;
int32_t x327 = -1;
int32_t x328 = -253578;
volatile uint32_t x335 = 224425U;
int64_t t73 = 3456803LL;
int32_t t77 = -204471166;
static uint64_t x357 = 2213264008878549LLU;
uint16_t x365 = 70U;
int8_t x368 = -1;
uint32_t x374 = 1356238806U;
int8_t x390 = INT8_MIN;
volatile int32_t x397 = INT32_MAX;
uint8_t x399 = 0U;
volatile uint64_t t87 = 116020914LLU;
uint64_t x420 = 176LLU;
int32_t x428 = INT32_MIN;
uint32_t x432 = 0U;
volatile int16_t x438 = -1;
int16_t x440 = INT16_MIN;
int32_t x445 = INT32_MAX;
uint64_t x450 = 10985043LLU;
int16_t x456 = INT16_MAX;
volatile int64_t x458 = INT64_MAX;
int16_t x461 = -1;
int32_t x463 = -52533;
static volatile int32_t t99 = -4837661;
uint32_t x480 = 1047028U;
uint32_t t101 = 3U;
volatile int64_t x484 = -177337202368LL;
static int32_t x486 = INT32_MIN;
int64_t x488 = -1LL;
volatile uint64_t t105 = 25218142LLU;
static int32_t t106 = 11;
volatile int16_t x501 = INT16_MIN;
int8_t x503 = -1;
static uint8_t x504 = 10U;
volatile int64_t x506 = -1LL;
volatile int32_t x511 = INT32_MAX;
int8_t x512 = INT8_MIN;
int64_t t110 = 18723658650581626LL;
uint8_t x523 = 6U;
int16_t x524 = INT16_MIN;
volatile int32_t t112 = -23;
int8_t x526 = INT8_MIN;
uint16_t x532 = 303U;
uint64_t x542 = UINT64_MAX;
volatile int64_t x553 = -1LL;
uint16_t x560 = 10675U;
int32_t x564 = INT32_MAX;
volatile uint32_t t120 = 12867U;
uint64_t x575 = UINT64_MAX;
volatile uint64_t t122 = 101426LLU;
volatile uint64_t t124 = 7981036542221LLU;
static uint16_t x586 = 3U;
uint32_t x592 = 236U;
int16_t x601 = INT16_MIN;
int64_t x602 = -1LL;
uint16_t x603 = 120U;
int64_t x610 = 59414803LL;
int8_t x615 = -43;
static uint16_t x618 = 3U;
volatile int32_t x623 = -1;
volatile uint64_t x624 = 871LLU;
int64_t x625 = -18583282LL;
int8_t x627 = 0;
uint64_t x628 = 6089155LLU;
int8_t x630 = -1;
static int64_t x634 = INT64_MIN;
int32_t x635 = -1;
static int8_t x636 = INT8_MAX;
static int8_t x643 = 0;
int32_t t138 = -15268;
int32_t t139 = 42097;
static volatile uint8_t x651 = UINT8_MAX;
int16_t x652 = INT16_MAX;
uint8_t x657 = UINT8_MAX;
static uint64_t x664 = 516405LLU;
static volatile uint64_t t142 = 64023779659404119LLU;
int16_t x665 = INT16_MIN;
static int32_t t143 = -21921;
int32_t x669 = -1;
uint16_t x670 = UINT16_MAX;
int32_t t144 = -10864;
uint64_t x683 = 1675805752059919527LLU;
int16_t x688 = INT16_MIN;
volatile int64_t x692 = 164034110876589LL;
uint16_t x697 = 14U;
int32_t x700 = 470280;
static int32_t t152 = -3541390;
volatile int32_t t154 = -2;
uint16_t x714 = 553U;
static int64_t x716 = INT64_MIN;
uint32_t x729 = 9521836U;
int8_t x730 = INT8_MIN;
int32_t t157 = 48763;
volatile int64_t x743 = 3289114LL;
static volatile int32_t x745 = INT32_MIN;
uint8_t x746 = 14U;
static int64_t x748 = 333406721016LL;
int32_t t160 = 3;
int16_t x753 = INT16_MIN;
static int32_t t161 = -1;
uint64_t x758 = 13470018741297LLU;
volatile int16_t x766 = INT16_MAX;
int16_t x770 = 0;
int8_t x772 = INT8_MIN;
volatile int32_t t164 = 4986158;
int16_t x786 = 5;
int8_t x787 = -1;
volatile uint8_t x788 = 3U;
uint64_t x794 = 1LLU;
int64_t x798 = -1LL;
uint32_t t170 = 1570868413U;
static int32_t x803 = -1;
volatile uint8_t x804 = 0U;
int32_t x812 = INT32_MIN;
int8_t x823 = INT8_MAX;
uint16_t x824 = UINT16_MAX;
uint32_t x828 = 1747943469U;
int16_t x842 = 61;
static int32_t x845 = 333;
int64_t t180 = -2LL;
static volatile int32_t t181 = -2585070;
int64_t t182 = -18693376113301LL;
int16_t x858 = INT16_MIN;
int16_t x865 = 5897;
volatile int32_t t186 = -1;
uint32_t x878 = 2118017233U;
int64_t x879 = -238465945711LL;
static volatile int32_t x884 = 161031344;
int8_t x886 = 1;
static uint64_t x891 = UINT64_MAX;
int16_t x899 = -1;
int8_t x906 = INT8_MIN;
volatile uint8_t x912 = UINT8_MAX;
volatile int32_t t194 = 36028003;
volatile int64_t t195 = -778168LL;
static uint64_t t196 = 3768LLU;
volatile uint64_t x930 = 401458229866LLU;


void f0(void) {
    	volatile uint16_t x2 = UINT16_MAX;
	volatile int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -1;

    t0 = (((x1==x2)+x3)+x4);

    if (t0 != 2147450879) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -82;
	uint64_t x8 = 20765226731LLU;
	volatile uint64_t t1 = 98060508609LLU;

    t1 = (((x5==x6)+x7)+x8);

    if (t1 != 20765226603LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	volatile uint32_t x10 = 65460756U;
	static int32_t x12 = -1;
	static volatile int32_t t2 = -4076;

    t2 = (((x9==x10)+x11)+x12);

    if (t2 != 17851) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	uint8_t x14 = 6U;
	volatile uint64_t x15 = 33107LLU;
	uint8_t x16 = 0U;
	uint64_t t3 = 49996083LLU;

    t3 = (((x13==x14)+x15)+x16);

    if (t3 != 33107LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 16371U;
	int32_t x18 = 2126272;
	int8_t x19 = INT8_MAX;
	int32_t x20 = -286383199;
	volatile int32_t t4 = -1;

    t4 = (((x17==x18)+x19)+x20);

    if (t4 != -286383072) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x25 = 13491138617LLU;
	uint32_t x26 = 4443U;
	uint32_t x27 = 72U;
	int16_t x28 = INT16_MIN;
	volatile uint32_t t5 = 221235U;

    t5 = (((x25==x26)+x27)+x28);

    if (t5 != 4294934600U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = UINT8_MAX;
	int64_t x30 = 246247310277784629LL;
	int8_t x31 = 31;
	int16_t x32 = -3764;
	int32_t t6 = 0;

    t6 = (((x29==x30)+x31)+x32);

    if (t6 != -3733) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x34 = UINT16_MAX;
	static int32_t x35 = -1;
	static int64_t x36 = INT64_MAX;
	volatile int64_t t7 = 3709889087711299LL;

    t7 = (((x33==x34)+x35)+x36);

    if (t7 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MIN;
	static uint8_t x39 = UINT8_MAX;
	int32_t t8 = 228;

    t8 = (((x37==x38)+x39)+x40);

    if (t8 != 265) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x42 = UINT64_MAX;
	static volatile int8_t x43 = INT8_MAX;
	int16_t x44 = 22;
	volatile int32_t t9 = -51;

    t9 = (((x41==x42)+x43)+x44);

    if (t9 != 149) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x51 = -759;
	static int16_t x52 = -1;
	int32_t t10 = 1720;

    t10 = (((x49==x50)+x51)+x52);

    if (t10 != -760) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x53 = 3U;
	int16_t x54 = -1;
	volatile int8_t x55 = 43;
	volatile int32_t t11 = 1083;

    t11 = (((x53==x54)+x55)+x56);

    if (t11 != -85) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -1LL;
	int32_t x58 = INT32_MIN;
	volatile int16_t x59 = -286;
	int64_t x60 = -3752386723487053LL;
	volatile int64_t t12 = 213059LL;

    t12 = (((x57==x58)+x59)+x60);

    if (t12 != -3752386723487339LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = 582366113;
	static uint8_t x62 = UINT8_MAX;
	uint16_t x64 = 3417U;

    t13 = (((x61==x62)+x63)+x64);

    if (t13 != 3423U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MIN;
	static int64_t x67 = 1859260817330LL;
	volatile uint8_t x68 = 2U;
	volatile int64_t t14 = -2133100437LL;

    t14 = (((x65==x66)+x67)+x68);

    if (t14 != 1859260817332LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x74 = -1LL;
	int8_t x75 = INT8_MIN;

    t15 = (((x73==x74)+x75)+x76);

    if (t15 != -25) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x77 = UINT16_MAX;
	int64_t x78 = -1546248343LL;
	static int16_t x80 = -80;
	int32_t t16 = -6121;

    t16 = (((x77==x78)+x79)+x80);

    if (t16 != -81) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x89 = UINT16_MAX;
	static volatile int8_t x90 = INT8_MIN;
	static uint16_t x91 = 447U;
	static int8_t x92 = INT8_MIN;
	int32_t t17 = 13;

    t17 = (((x89==x90)+x91)+x92);

    if (t17 != 319) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	uint32_t x94 = UINT32_MAX;
	uint64_t x95 = 889107765LLU;
	uint64_t t18 = 232838272LLU;

    t18 = (((x93==x94)+x95)+x96);

    if (t18 != 890026132LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = INT16_MAX;
	uint16_t x98 = 11868U;
	volatile int64_t x100 = 42144167LL;
	int64_t t19 = -11LL;

    t19 = (((x97==x98)+x99)+x100);

    if (t19 != 42145894LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x105 = 108945410370821LLU;
	static volatile int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	volatile int64_t x108 = 52LL;
	volatile int64_t t20 = 15LL;

    t20 = (((x105==x106)+x107)+x108);

    if (t20 != -32716LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x109 = 0U;
	static uint32_t x110 = 464684087U;
	int16_t x111 = INT16_MIN;
	uint8_t x112 = 42U;
	volatile int32_t t21 = 8;

    t21 = (((x109==x110)+x111)+x112);

    if (t21 != -32726) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x117 = 0;
	volatile int64_t x118 = 248914LL;
	int32_t x119 = INT32_MIN;
	static volatile uint16_t x120 = UINT16_MAX;

    t22 = (((x117==x118)+x119)+x120);

    if (t22 != -2147418113) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x121 = INT8_MIN;
	int8_t x123 = -1;
	uint8_t x124 = UINT8_MAX;
	int32_t t23 = -503;

    t23 = (((x121==x122)+x123)+x124);

    if (t23 != 254) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x125 = INT8_MIN;
	int64_t x126 = -1LL;
	static int16_t x127 = INT16_MAX;
	int8_t x128 = -27;
	int32_t t24 = -4;

    t24 = (((x125==x126)+x127)+x128);

    if (t24 != 32740) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x129 = 1U;
	static int8_t x130 = -13;

    t25 = (((x129==x130)+x131)+x132);

    if (t25 != 388715765397772562LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x133 = INT32_MIN;
	volatile int16_t x134 = INT16_MIN;
	static int32_t x136 = -1;
	uint64_t t26 = 119852357646609LLU;

    t26 = (((x133==x134)+x135)+x136);

    if (t26 != 7955LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x145 = -1;
	int8_t x146 = -40;
	int32_t x147 = 0;
	uint8_t x148 = 21U;
	int32_t t27 = 2;

    t27 = (((x145==x146)+x147)+x148);

    if (t27 != 21) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x150 = 17;
	volatile int32_t t28 = 142;

    t28 = (((x149==x150)+x151)+x152);

    if (t28 != 39921) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x153 = INT16_MIN;
	volatile int64_t x154 = INT64_MIN;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MAX;
	static int32_t t29 = -94;

    t29 = (((x153==x154)+x155)+x156);

    if (t29 != 2147483519) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x157 = 117108771LL;
	int64_t x158 = 2037174912483185LL;
	static volatile uint16_t x159 = 1206U;
	volatile uint8_t x160 = UINT8_MAX;
	volatile int32_t t30 = -56;

    t30 = (((x157==x158)+x159)+x160);

    if (t30 != 1461) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x162 = 12;
	int64_t x163 = -1LL;
	int64_t t31 = -58572115669LL;

    t31 = (((x161==x162)+x163)+x164);

    if (t31 != 7661LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x165 = INT16_MIN;
	uint16_t x168 = 23U;
	int32_t t32 = 113201;

    t32 = (((x165==x166)+x167)+x168);

    if (t32 != 32790) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x169 = INT16_MIN;
	volatile uint16_t x170 = UINT16_MAX;
	int8_t x171 = INT8_MAX;
	int32_t t33 = 27;

    t33 = (((x169==x170)+x171)+x172);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x173 = INT64_MIN;
	uint32_t x174 = 3674584U;
	static uint64_t x175 = 265197465LLU;
	volatile uint64_t x176 = UINT64_MAX;

    t34 = (((x173==x174)+x175)+x176);

    if (t34 != 265197464LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x181 = 665U;
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = INT32_MAX;
	int64_t x184 = -81243187LL;

    t35 = (((x181==x182)+x183)+x184);

    if (t35 != 2066240460LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x185 = INT32_MAX;
	int32_t x187 = -1;
	volatile uint32_t t36 = 189322U;

    t36 = (((x185==x186)+x187)+x188);

    if (t36 != 24U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x189 = 13;
	uint64_t x191 = 64672475492LLU;
	uint16_t x192 = 11748U;
	uint64_t t37 = 775461595LLU;

    t37 = (((x189==x190)+x191)+x192);

    if (t37 != 64672487240LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x193 = -1;
	uint32_t x194 = 23668950U;
	int8_t x196 = -10;

    t38 = (((x193==x194)+x195)+x196);

    if (t38 != 12974059LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x198 = 3;
	int8_t x199 = -15;
	uint32_t x200 = 6441317U;
	volatile uint32_t t39 = 127520197U;

    t39 = (((x197==x198)+x199)+x200);

    if (t39 != 6441302U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x201 = INT32_MIN;
	static volatile int16_t x202 = INT16_MIN;
	volatile int16_t x203 = INT16_MIN;

    t40 = (((x201==x202)+x203)+x204);

    if (t40 != -65536) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x206 = INT32_MIN;
	int64_t x208 = INT64_MIN;
	int64_t t41 = 31LL;

    t41 = (((x205==x206)+x207)+x208);

    if (t41 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x209 = INT32_MIN;
	int16_t x210 = 11;
	int16_t x211 = 2633;
	int32_t t42 = 449;

    t42 = (((x209==x210)+x211)+x212);

    if (t42 != 2760) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x213 = UINT16_MAX;
	volatile int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	static int16_t x216 = 74;

    t43 = (((x213==x214)+x215)+x216);

    if (t43 != -32694) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x217 = UINT8_MAX;
	static int16_t x218 = INT16_MAX;
	int32_t x219 = -9230;
	volatile int32_t t44 = 10469056;

    t44 = (((x217==x218)+x219)+x220);

    if (t44 != -9123) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x221 = -5847869;
	static uint32_t x222 = UINT32_MAX;
	uint64_t x223 = UINT64_MAX;
	volatile uint64_t t45 = 8LLU;

    t45 = (((x221==x222)+x223)+x224);

    if (t45 != 127465966578562LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x225 = 18U;
	volatile uint32_t x226 = 10387U;
	uint16_t x227 = 850U;
	static uint64_t t46 = 74737687LLU;

    t46 = (((x225==x226)+x227)+x228);

    if (t46 != 849LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x229 = -7845443LL;
	static int32_t x230 = 11901;
	uint32_t x231 = 76021333U;
	uint32_t x232 = UINT32_MAX;
	static uint32_t t47 = 46U;

    t47 = (((x229==x230)+x231)+x232);

    if (t47 != 76021332U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x233 = INT16_MIN;
	volatile uint64_t x235 = 4821833LLU;

    t48 = (((x233==x234)+x235)+x236);

    if (t48 != 1960255546945901335LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x237 = INT64_MIN;
	int32_t x238 = -1;
	static int32_t x239 = -636070986;
	int8_t x240 = INT8_MIN;
	static int32_t t49 = -150504356;

    t49 = (((x237==x238)+x239)+x240);

    if (t49 != -636071114) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x245 = -1;
	int64_t x246 = INT64_MIN;
	int32_t x247 = -1;
	uint16_t x248 = 171U;
	int32_t t50 = 2;

    t50 = (((x245==x246)+x247)+x248);

    if (t50 != 170) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x249 = UINT8_MAX;
	uint32_t x250 = 6708257U;
	volatile int64_t t51 = 493113463416LL;

    t51 = (((x249==x250)+x251)+x252);

    if (t51 != 2989LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x253 = UINT16_MAX;
	static int16_t x254 = INT16_MAX;
	uint64_t x255 = 137335LLU;
	uint32_t x256 = 54U;
	static volatile uint64_t t52 = 2331025338331562LLU;

    t52 = (((x253==x254)+x255)+x256);

    if (t52 != 137389LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x258 = 5034192602LLU;
	uint16_t x259 = UINT16_MAX;
	volatile int64_t x260 = -1LL;
	volatile int64_t t53 = -3367003LL;

    t53 = (((x257==x258)+x259)+x260);

    if (t53 != 65534LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x261 = 5U;
	static uint8_t x262 = 35U;
	int16_t x263 = -6846;
	int32_t x264 = -1;
	int32_t t54 = -218588865;

    t54 = (((x261==x262)+x263)+x264);

    if (t54 != -6847) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x265 = -12;
	int64_t x266 = INT64_MIN;
	int64_t x267 = -1LL;
	int64_t x268 = 197322747750LL;
	int64_t t55 = -16644150314746313LL;

    t55 = (((x265==x266)+x267)+x268);

    if (t55 != 197322747749LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x269 = -1;
	volatile int8_t x270 = 1;
	int64_t x272 = INT64_MIN;
	static volatile int64_t t56 = -1054295933310838LL;

    t56 = (((x269==x270)+x271)+x272);

    if (t56 != -9223372036854775605LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x273 = 1LL;
	int32_t x274 = 4;
	uint8_t x275 = 82U;
	uint64_t x276 = 37857916LLU;

    t57 = (((x273==x274)+x275)+x276);

    if (t57 != 37857998LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x277 = 84762089U;
	static uint16_t x278 = UINT16_MAX;
	uint32_t x279 = 1040697U;
	uint32_t t58 = 165086400U;

    t58 = (((x277==x278)+x279)+x280);

    if (t58 != 1040443U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x281 = INT32_MAX;
	volatile uint16_t x282 = 456U;
	int16_t x283 = -24;
	volatile int8_t x284 = INT8_MAX;
	volatile int32_t t59 = 49897;

    t59 = (((x281==x282)+x283)+x284);

    if (t59 != 103) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x285 = -1565;
	uint64_t x286 = 215242079848706LLU;
	uint32_t x287 = 409U;
	int8_t x288 = -61;

    t60 = (((x285==x286)+x287)+x288);

    if (t60 != 348U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x289 = INT32_MIN;
	volatile int8_t x290 = -1;
	volatile int32_t x291 = INT32_MIN;
	uint16_t x292 = 16U;

    t61 = (((x289==x290)+x291)+x292);

    if (t61 != -2147483632) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x294 = 58U;
	uint64_t x295 = 2128200308LLU;
	uint8_t x296 = 2U;
	static volatile uint64_t t62 = 3054073329229LLU;

    t62 = (((x293==x294)+x295)+x296);

    if (t62 != 2128200310LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x297 = 1U;
	volatile int32_t x298 = INT32_MAX;
	uint32_t x299 = 2902U;
	volatile uint8_t x300 = UINT8_MAX;

    t63 = (((x297==x298)+x299)+x300);

    if (t63 != 3157U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x302 = INT32_MIN;
	uint16_t x303 = 1U;
	static int32_t x304 = INT32_MIN;

    t64 = (((x301==x302)+x303)+x304);

    if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x305 = INT64_MAX;
	uint16_t x307 = UINT16_MAX;
	volatile int8_t x308 = -50;
	static volatile int32_t t65 = 1;

    t65 = (((x305==x306)+x307)+x308);

    if (t65 != 65485) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x309 = 19606876LLU;
	static volatile int8_t x310 = INT8_MAX;
	static int64_t x312 = -512772LL;
	volatile int64_t t66 = 43489LL;

    t66 = (((x309==x310)+x311)+x312);

    if (t66 != -512773LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x313 = 283534870403LLU;
	int64_t x314 = INT64_MIN;
	static int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MAX;
	int32_t t67 = 62;

    t67 = (((x313==x314)+x315)+x316);

    if (t67 != 2147483519) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x317 = -74;
	int16_t x318 = -1;
	static volatile int8_t x319 = INT8_MIN;
	uint64_t x320 = 84486427219926315LLU;
	uint64_t t68 = 20769340664919LLU;

    t68 = (((x317==x318)+x319)+x320);

    if (t68 != 84486427219926187LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x322 = UINT32_MAX;
	uint32_t x324 = 951U;
	static volatile int64_t t69 = -39LL;

    t69 = (((x321==x322)+x323)+x324);

    if (t69 != -9223372036854774857LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x325 = -1;
	uint32_t x326 = UINT32_MAX;
	volatile int32_t t70 = -1388;

    t70 = (((x325==x326)+x327)+x328);

    if (t70 != -253578) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MAX;
	volatile uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = INT64_MIN;
	volatile int64_t t71 = 2984LL;

    t71 = (((x329==x330)+x331)+x332);

    if (t71 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x333 = 217801731468180LLU;
	uint16_t x334 = 5U;
	uint8_t x336 = 46U;
	volatile uint32_t t72 = 130U;

    t72 = (((x333==x334)+x335)+x336);

    if (t72 != 224471U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x337 = INT32_MIN;
	uint8_t x338 = UINT8_MAX;
	volatile int64_t x339 = -1LL;
	static int8_t x340 = INT8_MIN;

    t73 = (((x337==x338)+x339)+x340);

    if (t73 != -129LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x341 = INT8_MAX;
	volatile uint64_t x342 = 29065556LLU;
	volatile int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	volatile int32_t t74 = 64856347;

    t74 = (((x341==x342)+x343)+x344);

    if (t74 != -32896) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x345 = 70339U;
	static int16_t x346 = -1;
	int64_t x347 = -1LL;
	int8_t x348 = INT8_MAX;
	int64_t t75 = 34185401636LL;

    t75 = (((x345==x346)+x347)+x348);

    if (t75 != 126LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x349 = INT16_MIN;
	volatile int64_t x350 = -24403431137144223LL;
	static uint64_t x351 = UINT64_MAX;
	int64_t x352 = 3072557708649LL;
	volatile uint64_t t76 = 445872LLU;

    t76 = (((x349==x350)+x351)+x352);

    if (t76 != 3072557708648LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x353 = -127;
	uint64_t x354 = 42643808809708LLU;
	uint8_t x355 = UINT8_MAX;
	uint16_t x356 = 543U;

    t77 = (((x353==x354)+x355)+x356);

    if (t77 != 798) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x358 = 18;
	volatile int16_t x359 = INT16_MIN;
	uint8_t x360 = 6U;
	int32_t t78 = -103515493;

    t78 = (((x357==x358)+x359)+x360);

    if (t78 != -32762) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x366 = INT64_MIN;
	volatile uint64_t x367 = UINT64_MAX;
	volatile uint64_t t79 = 965582306354007512LLU;

    t79 = (((x365==x366)+x367)+x368);

    if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x369 = -39;
	int8_t x370 = 25;
	volatile int32_t x371 = 2;
	volatile int32_t x372 = -1;
	volatile int32_t t80 = 7286;

    t80 = (((x369==x370)+x371)+x372);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x373 = UINT64_MAX;
	uint32_t x375 = 349705693U;
	static int16_t x376 = INT16_MIN;
	volatile uint32_t t81 = 2402U;

    t81 = (((x373==x374)+x375)+x376);

    if (t81 != 349672925U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x377 = 3178;
	static volatile int8_t x378 = INT8_MAX;
	volatile int8_t x379 = INT8_MIN;
	static int8_t x380 = 17;
	int32_t t82 = 539;

    t82 = (((x377==x378)+x379)+x380);

    if (t82 != -111) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x385 = INT64_MIN;
	static int16_t x386 = INT16_MIN;
	static int32_t x387 = INT32_MAX;
	uint64_t x388 = 128671475429LLU;
	uint64_t t83 = 138531LLU;

    t83 = (((x385==x386)+x387)+x388);

    if (t83 != 130818959076LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x389 = INT16_MAX;
	uint64_t x391 = 109338117LLU;
	static int32_t x392 = INT32_MIN;
	uint64_t t84 = 14679855LLU;

    t84 = (((x389==x390)+x391)+x392);

    if (t84 != 18446744071671406085LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x393 = 261LLU;
	int64_t x394 = INT64_MIN;
	int32_t x395 = 1442;
	int32_t x396 = 3190140;
	int32_t t85 = 164847;

    t85 = (((x393==x394)+x395)+x396);

    if (t85 != 3191582) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x398 = 9802;
	static int32_t x400 = INT32_MIN;
	static int32_t t86 = INT32_MIN;

    t86 = (((x397==x398)+x399)+x400);

    if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x401 = INT64_MAX;
	int64_t x402 = INT64_MAX;
	uint64_t x403 = UINT64_MAX;
	volatile int32_t x404 = INT32_MIN;

    t87 = (((x401==x402)+x403)+x404);

    if (t87 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x409 = 89U;
	static int32_t x410 = -1;
	int32_t x411 = -151;
	int16_t x412 = 32;
	static int32_t t88 = -498746;

    t88 = (((x409==x410)+x411)+x412);

    if (t88 != -119) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x417 = UINT8_MAX;
	uint16_t x418 = 5784U;
	static int64_t x419 = INT64_MAX;
	static uint64_t t89 = 118482550592LLU;

    t89 = (((x417==x418)+x419)+x420);

    if (t89 != 9223372036854775983LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x421 = INT64_MIN;
	volatile uint64_t x422 = 184783787207164668LLU;
	int32_t x423 = 4136174;
	static volatile int8_t x424 = INT8_MIN;
	volatile int32_t t90 = 14840619;

    t90 = (((x421==x422)+x423)+x424);

    if (t90 != 4136046) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x425 = INT32_MIN;
	uint8_t x426 = 1U;
	volatile uint32_t x427 = UINT32_MAX;
	uint32_t t91 = 43495U;

    t91 = (((x425==x426)+x427)+x428);

    if (t91 != 2147483647U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x429 = INT64_MIN;
	int8_t x430 = -1;
	uint8_t x431 = UINT8_MAX;
	static uint32_t t92 = 380U;

    t92 = (((x429==x430)+x431)+x432);

    if (t92 != 255U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x433 = INT8_MIN;
	volatile int32_t x434 = INT32_MIN;
	int32_t x435 = -1;
	static int64_t x436 = -41054495839863LL;
	volatile int64_t t93 = 6494258LL;

    t93 = (((x433==x434)+x435)+x436);

    if (t93 != -41054495839864LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x437 = 0U;
	volatile int16_t x439 = INT16_MIN;
	volatile int32_t t94 = -2975899;

    t94 = (((x437==x438)+x439)+x440);

    if (t94 != -65536) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x446 = INT16_MIN;
	uint32_t x447 = 29U;
	int32_t x448 = INT32_MIN;
	uint32_t t95 = 19725175U;

    t95 = (((x445==x446)+x447)+x448);

    if (t95 != 2147483677U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x449 = 0;
	uint32_t x451 = 15U;
	volatile uint8_t x452 = 12U;
	uint32_t t96 = 12127U;

    t96 = (((x449==x450)+x451)+x452);

    if (t96 != 27U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x453 = 67LL;
	static volatile int32_t x454 = INT32_MAX;
	int8_t x455 = INT8_MAX;
	int32_t t97 = -10013483;

    t97 = (((x453==x454)+x455)+x456);

    if (t97 != 32894) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x457 = -4031;
	int16_t x459 = -1;
	static int8_t x460 = INT8_MIN;
	volatile int32_t t98 = 59904074;

    t98 = (((x457==x458)+x459)+x460);

    if (t98 != -129) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x462 = -1;
	int16_t x464 = INT16_MIN;

    t99 = (((x461==x462)+x463)+x464);

    if (t99 != -85300) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x469 = INT64_MAX;
	int16_t x470 = -25;
	volatile uint16_t x471 = 72U;
	int64_t x472 = INT64_MIN;
	int64_t t100 = -2LL;

    t100 = (((x469==x470)+x471)+x472);

    if (t100 != -9223372036854775736LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x477 = 6673;
	uint32_t x478 = 4045869U;
	int8_t x479 = -1;

    t101 = (((x477==x478)+x479)+x480);

    if (t101 != 1047027U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x481 = 3U;
	static volatile int8_t x482 = INT8_MAX;
	uint64_t x483 = 6587229512807LLU;
	uint64_t t102 = 683919376289878408LLU;

    t102 = (((x481==x482)+x483)+x484);

    if (t102 != 6409892310439LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x485 = 47948167U;
	uint32_t x487 = 295601U;
	int64_t t103 = -2413LL;

    t103 = (((x485==x486)+x487)+x488);

    if (t103 != 295600LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x489 = -7;
	int8_t x490 = INT8_MAX;
	volatile int8_t x491 = INT8_MAX;
	int8_t x492 = INT8_MIN;
	volatile int32_t t104 = 237;

    t104 = (((x489==x490)+x491)+x492);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x493 = 1620972750LLU;
	int8_t x494 = INT8_MIN;
	uint64_t x495 = 31LLU;
	int64_t x496 = -1LL;

    t105 = (((x493==x494)+x495)+x496);

    if (t105 != 30LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x497 = 28484553235786LLU;
	volatile uint64_t x498 = UINT64_MAX;
	int8_t x499 = INT8_MAX;
	int32_t x500 = -1;

    t106 = (((x497==x498)+x499)+x500);

    if (t106 != 126) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x502 = 511373LL;
	int32_t t107 = 464;

    t107 = (((x501==x502)+x503)+x504);

    if (t107 != 9) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x505 = UINT64_MAX;
	volatile int8_t x507 = -1;
	int64_t x508 = 1636LL;
	volatile int64_t t108 = -358LL;

    t108 = (((x505==x506)+x507)+x508);

    if (t108 != 1636LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x509 = UINT64_MAX;
	int16_t x510 = 28;
	volatile int32_t t109 = 1;

    t109 = (((x509==x510)+x511)+x512);

    if (t109 != 2147483519) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x513 = -1;
	volatile int8_t x514 = INT8_MIN;
	static int64_t x515 = -27134LL;
	int32_t x516 = INT32_MAX;

    t110 = (((x513==x514)+x515)+x516);

    if (t110 != 2147456513LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x517 = INT8_MIN;
	static int64_t x518 = INT64_MIN;
	volatile uint32_t x519 = 222236793U;
	int8_t x520 = -3;
	volatile uint32_t t111 = 20U;

    t111 = (((x517==x518)+x519)+x520);

    if (t111 != 222236790U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x521 = 3U;
	volatile int8_t x522 = INT8_MAX;

    t112 = (((x521==x522)+x523)+x524);

    if (t112 != -32762) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x525 = 0;
	int32_t x527 = 616;
	uint64_t x528 = 60608647649018LLU;
	volatile uint64_t t113 = 26897472491093812LLU;

    t113 = (((x525==x526)+x527)+x528);

    if (t113 != 60608647649634LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x529 = 906980588U;
	int8_t x530 = INT8_MAX;
	uint8_t x531 = 35U;
	int32_t t114 = -279731906;

    t114 = (((x529==x530)+x531)+x532);

    if (t114 != 338) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x533 = -1;
	volatile int8_t x534 = INT8_MAX;
	uint8_t x535 = 22U;
	volatile int16_t x536 = INT16_MIN;
	int32_t t115 = 21160379;

    t115 = (((x533==x534)+x535)+x536);

    if (t115 != -32746) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x541 = 0;
	int8_t x543 = 21;
	int16_t x544 = -1;
	int32_t t116 = -528652;

    t116 = (((x541==x542)+x543)+x544);

    if (t116 != 20) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	int64_t x546 = -1LL;
	int32_t x547 = -1;
	uint64_t x548 = 117750824468LLU;
	uint64_t t117 = 168087815528303443LLU;

    t117 = (((x545==x546)+x547)+x548);

    if (t117 != 117750824467LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x554 = 860480U;
	int8_t x555 = 0;
	uint32_t x556 = 0U;
	uint32_t t118 = 5957294U;

    t118 = (((x553==x554)+x555)+x556);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x557 = 18U;
	int32_t x558 = -15;
	static int64_t x559 = INT64_MIN;
	int64_t t119 = 112978657650LL;

    t119 = (((x557==x558)+x559)+x560);

    if (t119 != -9223372036854765133LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x561 = 246409491U;
	uint16_t x562 = 16U;
	uint32_t x563 = 121916334U;

    t120 = (((x561==x562)+x563)+x564);

    if (t120 != 2269399981U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x569 = UINT16_MAX;
	uint16_t x570 = 12897U;
	int8_t x571 = INT8_MIN;
	volatile uint64_t x572 = UINT64_MAX;
	uint64_t t121 = 727LLU;

    t121 = (((x569==x570)+x571)+x572);

    if (t121 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x573 = 949457U;
	static int16_t x574 = 2008;
	uint64_t x576 = 1LLU;

    t122 = (((x573==x574)+x575)+x576);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x577 = 60U;
	int64_t x578 = INT64_MAX;
	int8_t x579 = INT8_MAX;
	uint8_t x580 = 2U;
	volatile int32_t t123 = -3;

    t123 = (((x577==x578)+x579)+x580);

    if (t123 != 129) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x581 = UINT64_MAX;
	int8_t x582 = INT8_MAX;
	static int8_t x583 = INT8_MIN;
	static uint64_t x584 = 279760929804730LLU;

    t124 = (((x581==x582)+x583)+x584);

    if (t124 != 279760929804602LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x585 = INT32_MIN;
	int32_t x587 = 1361314;
	static int32_t x588 = INT32_MIN;
	volatile int32_t t125 = -1968;

    t125 = (((x585==x586)+x587)+x588);

    if (t125 != -2146122334) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x589 = -1;
	uint8_t x590 = 35U;
	static uint32_t x591 = UINT32_MAX;
	uint32_t t126 = 1557U;

    t126 = (((x589==x590)+x591)+x592);

    if (t126 != 235U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x593 = INT32_MAX;
	uint64_t x594 = UINT64_MAX;
	int32_t x595 = INT32_MAX;
	uint64_t x596 = 32640995717LLU;
	volatile uint64_t t127 = 6628908055414131LLU;

    t127 = (((x593==x594)+x595)+x596);

    if (t127 != 34788479364LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x597 = 13;
	uint16_t x598 = UINT16_MAX;
	int64_t x599 = -1LL;
	int8_t x600 = -1;
	int64_t t128 = -25LL;

    t128 = (((x597==x598)+x599)+x600);

    if (t128 != -2LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x604 = 588U;
	int32_t t129 = -185550;

    t129 = (((x601==x602)+x603)+x604);

    if (t129 != 708) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x605 = 4403U;
	int16_t x606 = -1;
	volatile int8_t x607 = -1;
	static int64_t x608 = -443346855367661307LL;
	int64_t t130 = -3521241153655874LL;

    t130 = (((x605==x606)+x607)+x608);

    if (t130 != -443346855367661308LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x609 = -1;
	static uint32_t x611 = UINT32_MAX;
	int32_t x612 = INT32_MAX;
	volatile uint32_t t131 = 280034U;

    t131 = (((x609==x610)+x611)+x612);

    if (t131 != 2147483646U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x613 = 1595247LL;
	uint8_t x614 = 32U;
	static uint64_t x616 = UINT64_MAX;
	volatile uint64_t t132 = 152073278LLU;

    t132 = (((x613==x614)+x615)+x616);

    if (t132 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x617 = 26294485132263305LLU;
	static uint32_t x619 = UINT32_MAX;
	static int64_t x620 = -1LL;
	volatile int64_t t133 = -6746236405LL;

    t133 = (((x617==x618)+x619)+x620);

    if (t133 != 4294967294LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x621 = 7U;
	int16_t x622 = -1;
	volatile uint64_t t134 = 0LLU;

    t134 = (((x621==x622)+x623)+x624);

    if (t134 != 870LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x626 = 1106U;
	volatile uint64_t t135 = 1859065029658LLU;

    t135 = (((x625==x626)+x627)+x628);

    if (t135 != 6089155LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x629 = INT32_MAX;
	static uint8_t x631 = 72U;
	static volatile int8_t x632 = -24;
	int32_t t136 = 11541;

    t136 = (((x629==x630)+x631)+x632);

    if (t136 != 48) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x633 = UINT64_MAX;
	volatile int32_t t137 = -255389;

    t137 = (((x633==x634)+x635)+x636);

    if (t137 != 126) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x641 = -1;
	int64_t x642 = INT64_MIN;
	int8_t x644 = 1;

    t138 = (((x641==x642)+x643)+x644);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x645 = -238516024070330114LL;
	int64_t x646 = INT64_MIN;
	int32_t x647 = INT32_MIN;
	volatile int16_t x648 = INT16_MAX;

    t139 = (((x645==x646)+x647)+x648);

    if (t139 != -2147450881) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x649 = INT32_MIN;
	volatile uint64_t x650 = UINT64_MAX;
	volatile int32_t t140 = -12162960;

    t140 = (((x649==x650)+x651)+x652);

    if (t140 != 33022) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x658 = INT32_MAX;
	static uint16_t x659 = UINT16_MAX;
	int32_t x660 = 802;
	volatile int32_t t141 = -470276;

    t141 = (((x657==x658)+x659)+x660);

    if (t141 != 66337) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x661 = 1221161;
	int8_t x662 = INT8_MIN;
	uint32_t x663 = 267571U;

    t142 = (((x661==x662)+x663)+x664);

    if (t142 != 783976LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x666 = INT32_MAX;
	int32_t x667 = -1;
	volatile uint8_t x668 = 0U;

    t143 = (((x665==x666)+x667)+x668);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x671 = 12U;
	static volatile uint8_t x672 = 123U;

    t144 = (((x669==x670)+x671)+x672);

    if (t144 != 135) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x673 = -1;
	int8_t x674 = INT8_MAX;
	volatile uint32_t x675 = 756707U;
	static int64_t x676 = 84959732114622LL;
	int64_t t145 = -801024817816LL;

    t145 = (((x673==x674)+x675)+x676);

    if (t145 != 84959732871329LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x677 = INT8_MAX;
	static int32_t x678 = -1;
	int8_t x679 = INT8_MIN;
	int32_t x680 = -1;
	volatile int32_t t146 = -117338154;

    t146 = (((x677==x678)+x679)+x680);

    if (t146 != -129) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x681 = -11LL;
	static int64_t x682 = INT64_MIN;
	volatile int32_t x684 = 223;
	uint64_t t147 = 4081464919730LLU;

    t147 = (((x681==x682)+x683)+x684);

    if (t147 != 1675805752059919750LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x685 = -1;
	int32_t x686 = -44126004;
	int64_t x687 = 134178689517LL;
	volatile int64_t t148 = -501073462891761LL;

    t148 = (((x685==x686)+x687)+x688);

    if (t148 != 134178656749LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x689 = UINT32_MAX;
	uint16_t x690 = UINT16_MAX;
	static int64_t x691 = INT64_MIN;
	static volatile int64_t t149 = -1LL;

    t149 = (((x689==x690)+x691)+x692);

    if (t149 != -9223208002743899219LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x693 = 0U;
	static int16_t x694 = INT16_MIN;
	uint8_t x695 = 3U;
	volatile int16_t x696 = INT16_MAX;
	static int32_t t150 = -1724;

    t150 = (((x693==x694)+x695)+x696);

    if (t150 != 32770) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x698 = 41618951;
	uint8_t x699 = 76U;
	int32_t t151 = 4008;

    t151 = (((x697==x698)+x699)+x700);

    if (t151 != 470356) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x701 = 448987U;
	static int32_t x702 = INT32_MIN;
	volatile uint16_t x703 = 3U;
	int32_t x704 = -1;

    t152 = (((x701==x702)+x703)+x704);

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x705 = UINT32_MAX;
	uint32_t x706 = 6492869U;
	uint8_t x707 = 20U;
	int8_t x708 = 0;
	volatile int32_t t153 = -34910305;

    t153 = (((x705==x706)+x707)+x708);

    if (t153 != 20) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x709 = 499U;
	static uint16_t x710 = 29U;
	int16_t x711 = INT16_MIN;
	int8_t x712 = INT8_MIN;

    t154 = (((x709==x710)+x711)+x712);

    if (t154 != -32896) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x713 = 7U;
	uint8_t x715 = 4U;
	volatile int64_t t155 = 7925476016105935LL;

    t155 = (((x713==x714)+x715)+x716);

    if (t155 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x731 = -1;
	volatile int16_t x732 = INT16_MIN;
	int32_t t156 = 1;

    t156 = (((x729==x730)+x731)+x732);

    if (t156 != -32769) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x737 = 204LL;
	volatile int64_t x738 = INT64_MAX;
	volatile int32_t x739 = INT32_MIN;
	uint8_t x740 = UINT8_MAX;

    t157 = (((x737==x738)+x739)+x740);

    if (t157 != -2147483393) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x741 = INT8_MAX;
	uint64_t x742 = 106567586LLU;
	volatile uint32_t x744 = UINT32_MAX;
	int64_t t158 = 16235178LL;

    t158 = (((x741==x742)+x743)+x744);

    if (t158 != 4298256409LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x747 = -1;
	static int64_t t159 = 39139485854802LL;

    t159 = (((x745==x746)+x747)+x748);

    if (t159 != 333406721015LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x749 = -1LL;
	uint64_t x750 = UINT64_MAX;
	int32_t x751 = INT32_MIN;
	int16_t x752 = INT16_MAX;

    t160 = (((x749==x750)+x751)+x752);

    if (t160 != -2147450880) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x754 = -1LL;
	int16_t x755 = 108;
	uint16_t x756 = 10950U;

    t161 = (((x753==x754)+x755)+x756);

    if (t161 != 11058) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x757 = 3;
	uint16_t x759 = 11037U;
	static volatile int64_t x760 = 7707953680465LL;
	volatile int64_t t162 = -44098744499852LL;

    t162 = (((x757==x758)+x759)+x760);

    if (t162 != 7707953691502LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x765 = -1;
	volatile int16_t x767 = -18;
	int16_t x768 = 2641;
	int32_t t163 = -158415;

    t163 = (((x765==x766)+x767)+x768);

    if (t163 != 2623) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x769 = INT64_MIN;
	int16_t x771 = INT16_MIN;

    t164 = (((x769==x770)+x771)+x772);

    if (t164 != -32896) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x777 = INT32_MIN;
	volatile int64_t x778 = -2174505LL;
	static uint32_t x779 = 286348U;
	static uint8_t x780 = 46U;
	volatile uint32_t t165 = 15U;

    t165 = (((x777==x778)+x779)+x780);

    if (t165 != 286394U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x781 = 0;
	static volatile uint16_t x782 = 2U;
	int8_t x783 = -1;
	uint32_t x784 = 1U;
	volatile uint32_t t166 = 9923U;

    t166 = (((x781==x782)+x783)+x784);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x785 = 4582U;
	int32_t t167 = -1428278;

    t167 = (((x785==x786)+x787)+x788);

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x789 = INT32_MAX;
	uint64_t x790 = UINT64_MAX;
	int64_t x791 = INT64_MAX;
	uint64_t x792 = UINT64_MAX;
	volatile uint64_t t168 = 8396074701363077LLU;

    t168 = (((x789==x790)+x791)+x792);

    if (t168 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x793 = UINT32_MAX;
	int32_t x795 = 90064733;
	static int64_t x796 = -933563310608LL;
	int64_t t169 = -810183LL;

    t169 = (((x793==x794)+x795)+x796);

    if (t169 != -933473245875LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x797 = INT64_MAX;
	uint32_t x799 = 1718390351U;
	int8_t x800 = INT8_MIN;

    t170 = (((x797==x798)+x799)+x800);

    if (t170 != 1718390223U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x801 = INT8_MAX;
	int64_t x802 = INT64_MAX;
	volatile int32_t t171 = 976699;

    t171 = (((x801==x802)+x803)+x804);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x805 = INT32_MAX;
	int64_t x806 = -99393272559828248LL;
	int16_t x807 = -1;
	uint8_t x808 = UINT8_MAX;
	static int32_t t172 = 28048;

    t172 = (((x805==x806)+x807)+x808);

    if (t172 != 254) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x809 = INT64_MAX;
	volatile uint64_t x810 = 1904LLU;
	int32_t x811 = 1;
	int32_t t173 = 145300;

    t173 = (((x809==x810)+x811)+x812);

    if (t173 != -2147483647) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x817 = INT16_MAX;
	int8_t x818 = -1;
	int32_t x819 = -287;
	int32_t x820 = -582;
	static int32_t t174 = -41254882;

    t174 = (((x817==x818)+x819)+x820);

    if (t174 != -869) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x821 = INT32_MIN;
	int8_t x822 = 0;
	volatile int32_t t175 = 3276;

    t175 = (((x821==x822)+x823)+x824);

    if (t175 != 65662) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x825 = INT32_MAX;
	int64_t x826 = INT64_MIN;
	static uint8_t x827 = 36U;
	static volatile uint32_t t176 = 10241U;

    t176 = (((x825==x826)+x827)+x828);

    if (t176 != 1747943505U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x833 = -1LL;
	int64_t x834 = 4108414679472190LL;
	int8_t x835 = INT8_MIN;
	static uint32_t x836 = UINT32_MAX;
	uint32_t t177 = 1921U;

    t177 = (((x833==x834)+x835)+x836);

    if (t177 != 4294967167U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x837 = 12376U;
	uint8_t x838 = 0U;
	volatile uint8_t x839 = 1U;
	uint32_t x840 = 7133U;
	uint32_t t178 = 1139819492U;

    t178 = (((x837==x838)+x839)+x840);

    if (t178 != 7134U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x841 = 1U;
	int64_t x843 = INT64_MIN;
	static int8_t x844 = 30;
	volatile int64_t t179 = -1058404801119196244LL;

    t179 = (((x841==x842)+x843)+x844);

    if (t179 != -9223372036854775778LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x846 = 42U;
	int16_t x847 = -126;
	int64_t x848 = 2083356392LL;

    t180 = (((x845==x846)+x847)+x848);

    if (t180 != 2083356266LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x849 = -1;
	int32_t x850 = -1;
	static int8_t x851 = INT8_MAX;
	static volatile uint8_t x852 = UINT8_MAX;

    t181 = (((x849==x850)+x851)+x852);

    if (t181 != 383) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x853 = UINT16_MAX;
	int8_t x854 = 42;
	static volatile int64_t x855 = 795230LL;
	int32_t x856 = -3952060;

    t182 = (((x853==x854)+x855)+x856);

    if (t182 != -3156830LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x857 = INT64_MAX;
	int16_t x859 = INT16_MIN;
	uint32_t x860 = 3712444U;
	volatile uint32_t t183 = 2U;

    t183 = (((x857==x858)+x859)+x860);

    if (t183 != 3679676U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x866 = INT16_MIN;
	int64_t x867 = -5927840308215LL;
	uint16_t x868 = 711U;
	int64_t t184 = 484345591LL;

    t184 = (((x865==x866)+x867)+x868);

    if (t184 != -5927840307504LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x869 = INT64_MAX;
	static uint16_t x870 = UINT16_MAX;
	int64_t x871 = INT64_MIN;
	volatile int8_t x872 = 18;
	volatile int64_t t185 = -2821730LL;

    t185 = (((x869==x870)+x871)+x872);

    if (t185 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x873 = INT32_MIN;
	int32_t x874 = 227377;
	volatile uint16_t x875 = 7679U;
	static int8_t x876 = INT8_MIN;

    t186 = (((x873==x874)+x875)+x876);

    if (t186 != 7551) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x877 = 1928537288870LL;
	int8_t x880 = 46;
	volatile int64_t t187 = 25352896065589321LL;

    t187 = (((x877==x878)+x879)+x880);

    if (t187 != -238465945665LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x881 = -186;
	static int32_t x882 = INT32_MIN;
	int16_t x883 = INT16_MAX;
	volatile int32_t t188 = -53441;

    t188 = (((x881==x882)+x883)+x884);

    if (t188 != 161064111) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x885 = INT16_MIN;
	int32_t x887 = INT32_MIN;
	int64_t x888 = -1LL;
	volatile int64_t t189 = 101091LL;

    t189 = (((x885==x886)+x887)+x888);

    if (t189 != -2147483649LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x889 = 10881U;
	volatile int64_t x890 = 33600LL;
	int8_t x892 = INT8_MIN;
	static uint64_t t190 = 1159LLU;

    t190 = (((x889==x890)+x891)+x892);

    if (t190 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x897 = INT8_MIN;
	static uint8_t x898 = 73U;
	int16_t x900 = -1;
	volatile int32_t t191 = 590517223;

    t191 = (((x897==x898)+x899)+x900);

    if (t191 != -2) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x901 = INT64_MIN;
	int64_t x902 = -12157192441038LL;
	uint8_t x903 = 14U;
	uint8_t x904 = 28U;
	static int32_t t192 = -7;

    t192 = (((x901==x902)+x903)+x904);

    if (t192 != 42) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x905 = -1;
	static uint8_t x907 = UINT8_MAX;
	static int16_t x908 = INT16_MIN;
	volatile int32_t t193 = -37;

    t193 = (((x905==x906)+x907)+x908);

    if (t193 != -32513) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x909 = 0U;
	static int16_t x910 = INT16_MIN;
	uint8_t x911 = 24U;

    t194 = (((x909==x910)+x911)+x912);

    if (t194 != 279) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x913 = 11657U;
	volatile int16_t x914 = -62;
	volatile int64_t x915 = 1LL;
	int8_t x916 = -63;

    t195 = (((x913==x914)+x915)+x916);

    if (t195 != -62LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x917 = 19;
	uint16_t x918 = 2U;
	int16_t x919 = -101;
	static volatile uint64_t x920 = UINT64_MAX;

    t196 = (((x917==x918)+x919)+x920);

    if (t196 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x921 = 6684014;
	int32_t x922 = 634307;
	uint8_t x923 = 50U;
	static uint8_t x924 = 0U;
	volatile int32_t t197 = -45364;

    t197 = (((x921==x922)+x923)+x924);

    if (t197 != 50) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x925 = 10U;
	static int32_t x926 = INT32_MIN;
	int8_t x927 = INT8_MIN;
	volatile uint16_t x928 = 0U;
	volatile int32_t t198 = -3807040;

    t198 = (((x925==x926)+x927)+x928);

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x929 = -1LL;
	static int64_t x931 = INT64_MIN;
	uint8_t x932 = 110U;
	volatile int64_t t199 = -57871892765539164LL;

    t199 = (((x929==x930)+x931)+x932);

    if (t199 != -9223372036854775698LL) { NG(); } else { ; }
	
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

