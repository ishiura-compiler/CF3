
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

int8_t x2 = INT8_MIN;
uint32_t x7 = 191U;
uint32_t t2 = 415065852U;
int16_t x15 = INT16_MIN;
int32_t x16 = INT32_MIN;
volatile uint64_t x19 = 5589613148729133LLU;
int32_t x28 = INT32_MIN;
static volatile int32_t t6 = INT32_MAX;
uint64_t t7 = 12318421LLU;
int64_t x37 = INT64_MAX;
uint8_t x38 = 9U;
int16_t x40 = -1;
static uint32_t x55 = 1067744U;
uint16_t x57 = 158U;
volatile int8_t x58 = -1;
volatile int32_t t11 = 14698;
int8_t x67 = 26;
int32_t x77 = INT32_MIN;
uint64_t x79 = 617278869394960LLU;
int16_t x83 = -744;
static int16_t x88 = INT16_MAX;
static int16_t x100 = -16;
volatile int64_t x104 = -2396783LL;
int64_t x108 = INT64_MAX;
int32_t x109 = -727;
static int8_t x112 = INT8_MIN;
int64_t x127 = INT64_MIN;
int64_t x128 = -1LL;
int32_t x131 = INT32_MAX;
static int8_t x136 = 5;
int64_t x143 = INT64_MAX;
volatile int64_t t30 = -46LL;
uint64_t x149 = UINT64_MAX;
int32_t x154 = -8;
volatile int32_t t35 = -1;
volatile int32_t t37 = 1908;
int64_t x185 = INT64_MIN;
static uint8_t x188 = 0U;
int32_t x193 = 17281;
uint32_t x209 = 1092U;
static int64_t x211 = -245125LL;
uint64_t x214 = 868026389LLU;
volatile uint64_t t46 = 218LLU;
static int8_t x218 = 0;
int16_t x227 = -15412;
static volatile uint64_t t50 = 4LLU;
int32_t x235 = 89153000;
static volatile uint16_t x236 = 3U;
volatile int32_t t51 = 0;
volatile int8_t x245 = 7;
static uint32_t x263 = 31489U;
static uint32_t x268 = UINT32_MAX;
uint32_t t57 = 0U;
uint64_t x273 = 9LLU;
uint64_t x277 = 232967358811274LLU;
int16_t x278 = INT16_MIN;
int8_t x280 = -1;
int32_t x287 = -1;
static volatile int64_t t62 = 25LL;
volatile int16_t x295 = -1;
int16_t x299 = INT16_MIN;
uint8_t x302 = 9U;
int32_t x308 = INT32_MIN;
static int64_t x311 = INT64_MIN;
uint32_t x313 = UINT32_MAX;
int16_t x315 = 8458;
static volatile int64_t t68 = -2824LL;
volatile uint64_t x326 = 13LLU;
uint32_t x327 = 69U;
volatile int16_t x332 = INT16_MIN;
uint8_t x334 = UINT8_MAX;
volatile int8_t x335 = INT8_MAX;
int16_t x336 = INT16_MAX;
int32_t x339 = INT32_MAX;
uint16_t x358 = 2U;
static int16_t x364 = INT16_MIN;
static volatile uint16_t x371 = 1216U;
uint64_t x379 = 26726594747508LLU;
int32_t x381 = -1;
int16_t x385 = 3;
int8_t x387 = 5;
int32_t x388 = INT32_MAX;
uint64_t x398 = UINT64_MAX;
uint8_t x400 = UINT8_MAX;
uint32_t x408 = 11773940U;
static volatile uint16_t x418 = 3316U;
static volatile int32_t x419 = INT32_MAX;
static int16_t x437 = -1;
int16_t x438 = INT16_MAX;
uint64_t t94 = 0LLU;
static int64_t x460 = INT64_MIN;
int32_t x461 = -57592833;
int8_t x466 = -13;
volatile uint8_t x467 = UINT8_MAX;
static int16_t x468 = INT16_MAX;
int8_t x473 = 43;
uint64_t x475 = UINT64_MAX;
uint64_t t102 = 17877LLU;
int32_t t104 = -105;
uint16_t x492 = 2064U;
volatile int64_t x502 = INT64_MIN;
int64_t x510 = INT64_MIN;
volatile int8_t x519 = INT8_MAX;
int8_t x520 = INT8_MIN;
uint64_t x522 = 1038LLU;
volatile uint64_t t113 = 2392246253196LLU;
int16_t x525 = -1;
int16_t x528 = INT16_MIN;
uint32_t x535 = 331862U;
volatile int64_t t115 = 944688521000203683LL;
uint64_t x549 = UINT64_MAX;
int8_t x562 = -1;
int16_t x569 = -3990;
int64_t t123 = 52761635713847LL;
int32_t x578 = -28537;
int32_t x581 = INT32_MIN;
static int16_t x603 = 72;
volatile int64_t t129 = 2280LL;
int32_t x608 = INT32_MAX;
uint32_t x614 = 1443U;
int8_t x615 = INT8_MIN;
uint32_t t132 = 2U;
volatile uint32_t x624 = 8163762U;
int64_t x628 = -6714339LL;
static int16_t x632 = 28;
uint32_t x635 = 11U;
volatile uint32_t t137 = 437U;
int16_t x637 = -1;
static volatile uint32_t t139 = 1540321U;
int32_t x654 = INT32_MIN;
uint64_t t140 = 573LLU;
uint64_t x657 = UINT64_MAX;
int16_t x681 = 7;
int8_t x687 = 56;
uint32_t x694 = 20U;
int8_t x708 = 40;
int16_t x713 = -61;
uint16_t x718 = UINT16_MAX;
static uint8_t x727 = 1U;
int64_t t153 = 29095690282LL;
static int64_t t156 = -16812151643010LL;
uint64_t x751 = UINT64_MAX;
volatile uint64_t t159 = 8014992188849243LLU;
int64_t x755 = INT64_MIN;
volatile int64_t x769 = 1286522LL;
static uint16_t x773 = UINT16_MAX;
uint64_t x778 = 3309LLU;
int32_t t166 = -2;
static int16_t x797 = INT16_MAX;
int32_t x801 = 91023;
volatile uint64_t t170 = 108376LLU;
int64_t x815 = -24LL;
uint16_t x824 = 14U;
uint8_t x826 = UINT8_MAX;
volatile int64_t x828 = INT64_MIN;
static uint8_t x834 = 19U;
static int64_t t176 = INT64_MAX;
int32_t x840 = -2496;
volatile uint32_t x841 = 1496351512U;
uint32_t x843 = UINT32_MAX;
volatile int64_t t178 = 2095800529007660682LL;
uint8_t x845 = UINT8_MAX;
int32_t t179 = -3;
int16_t x849 = -1;
uint8_t x858 = 3U;
volatile int32_t x864 = INT32_MIN;
volatile int8_t x878 = INT8_MIN;
static volatile uint8_t x880 = UINT8_MAX;
int32_t x886 = -24727300;
static uint32_t x888 = 3474697U;
static uint32_t t187 = 4990064U;
int64_t x891 = INT64_MIN;
uint64_t x898 = 90131236023676LLU;
volatile int64_t x902 = INT64_MIN;
int32_t x903 = INT32_MIN;
int64_t t191 = 11LL;
int32_t x908 = INT32_MAX;
static int8_t x911 = INT8_MIN;
volatile int64_t x918 = INT64_MAX;
int64_t x920 = -166846983573934LL;
int64_t x924 = INT64_MIN;
int16_t x925 = INT16_MAX;
int64_t x931 = INT64_MIN;
static int64_t t197 = 129LL;
int64_t x938 = -773792LL;
int32_t x939 = INT32_MIN;
uint16_t x944 = UINT16_MAX;


void f0(void) {
    	int64_t x1 = -1LL;
	uint64_t x3 = UINT64_MAX;
	volatile int8_t x4 = INT8_MAX;
	volatile uint64_t t0 = 262593403032156473LLU;

    t0 = ((x1+(x2/x3))-x4);

    if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 500U;
	int32_t x6 = -38;
	static int8_t x8 = -4;
	static uint32_t t1 = 3U;

    t1 = ((x5+(x6/x7))-x8);

    if (t1 != 22487243U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	static volatile int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MAX;
	static uint32_t x12 = UINT32_MAX;

    t2 = ((x9+(x10/x11))-x12);

    if (t2 != 4278090744U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static volatile int16_t x14 = INT16_MIN;
	static int32_t t3 = -878;

    t3 = ((x13+(x14/x15))-x16);

    if (t3 != 2147483521) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = -1;
	int16_t x18 = -1;
	static volatile int8_t x20 = 0;
	uint64_t t4 = 2173LLU;

    t4 = ((x17+(x18/x19))-x20);

    if (t4 != 3299LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 7565LLU;
	uint16_t x22 = UINT16_MAX;
	volatile int64_t x23 = INT64_MIN;
	uint32_t x24 = UINT32_MAX;
	uint64_t t5 = 5309LLU;

    t5 = ((x21+(x22/x23))-x24);

    if (t5 != 18446744069414591886LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MAX;

    t6 = ((x25+(x26/x27))-x28);

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x33 = 1557LLU;
	uint16_t x34 = UINT16_MAX;
	uint32_t x35 = UINT32_MAX;
	int64_t x36 = INT64_MIN;

    t7 = ((x33+(x34/x35))-x36);

    if (t7 != 9223372036854777365LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x39 = UINT64_MAX;
	uint64_t t8 = 26593LLU;

    t8 = ((x37+(x38/x39))-x40);

    if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;
	int32_t x48 = -1;
	int32_t t9 = -2;

    t9 = ((x45+(x46/x47))-x48);

    if (t9 != 129) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x53 = UINT8_MAX;
	uint8_t x54 = 22U;
	uint8_t x56 = UINT8_MAX;
	static uint32_t t10 = 5519U;

    t10 = ((x53+(x54/x55))-x56);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x59 = INT32_MIN;
	int8_t x60 = -1;

    t11 = ((x57+(x58/x59))-x60);

    if (t11 != 159) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x61 = 192U;
	int16_t x62 = INT16_MIN;
	int8_t x63 = -1;
	static int16_t x64 = INT16_MAX;
	int32_t t12 = -10142816;

    t12 = ((x61+(x62/x63))-x64);

    if (t12 != 193) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x65 = UINT32_MAX;
	int8_t x66 = -19;
	volatile int32_t x68 = INT32_MIN;
	uint32_t t13 = 2U;

    t13 = ((x65+(x66/x67))-x68);

    if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = 16316694593848LL;
	static int64_t x70 = -6781141400753LL;
	int8_t x71 = -2;
	int16_t x72 = -1;
	static int64_t t14 = 2967LL;

    t14 = ((x69+(x70/x71))-x72);

    if (t14 != 19707265294225LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x73 = -2;
	int16_t x74 = INT16_MIN;
	volatile int16_t x75 = -1;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t15 = -7746503;

    t15 = ((x73+(x74/x75))-x76);

    if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x78 = INT64_MIN;
	int32_t x80 = INT32_MAX;
	uint64_t t16 = 116884111265424LLU;

    t16 = ((x77+(x78/x79))-x80);

    if (t16 != 18446744069414599262LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = UINT64_MAX;
	static int32_t x82 = INT32_MIN;
	int64_t x84 = -1LL;
	volatile uint64_t t17 = 28320591516LLU;

    t17 = ((x81+(x82/x83))-x84);

    if (t17 != 2886402LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x85 = UINT8_MAX;
	int8_t x86 = -30;
	int16_t x87 = INT16_MAX;
	int32_t t18 = -7;

    t18 = ((x85+(x86/x87))-x88);

    if (t18 != -32512) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = 2102928867U;
	static volatile int16_t x90 = INT16_MIN;
	int32_t x91 = INT32_MIN;
	uint16_t x92 = 69U;
	uint32_t t19 = 43404374U;

    t19 = ((x89+(x90/x91))-x92);

    if (t19 != 2102928798U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = -1;
	int64_t x94 = INT64_MAX;
	int8_t x95 = 4;
	int64_t x96 = INT64_MAX;
	volatile int64_t t20 = -11921603478790209LL;

    t20 = ((x93+(x94/x95))-x96);

    if (t20 != -6917529027641081857LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x97 = UINT64_MAX;
	volatile uint16_t x98 = UINT16_MAX;
	uint16_t x99 = UINT16_MAX;
	uint64_t t21 = 767108712918191LLU;

    t21 = ((x97+(x98/x99))-x100);

    if (t21 != 16LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x101 = 45;
	uint32_t x102 = 234U;
	static volatile uint16_t x103 = 25987U;
	volatile int64_t t22 = 3319812LL;

    t22 = ((x101+(x102/x103))-x104);

    if (t22 != 2396828LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x105 = 32427U;
	static int64_t x106 = -1LL;
	int16_t x107 = 118;
	volatile int64_t t23 = -1551951066241737LL;

    t23 = ((x105+(x106/x107))-x108);

    if (t23 != -9223372036854743380LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x110 = INT64_MIN;
	uint8_t x111 = 109U;
	static int64_t t24 = -386LL;

    t24 = ((x109+(x110/x111))-x112);

    if (t24 != -84618092081237074LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	static int32_t x119 = INT32_MIN;
	volatile int16_t x120 = INT16_MAX;
	int32_t t25 = 2;

    t25 = ((x117+(x118/x119))-x120);

    if (t25 != -65535) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MAX;
	volatile int16_t x123 = INT16_MIN;
	static uint64_t x124 = 6125014275476189450LLU;
	volatile uint64_t t26 = 3763881LLU;

    t26 = ((x121+(x122/x123))-x124);

    if (t26 != 3098357761378586358LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x125 = 4590853068917568001LL;
	uint32_t x126 = UINT32_MAX;
	int64_t t27 = 2810267001794469LL;

    t27 = ((x125+(x126/x127))-x128);

    if (t27 != 4590853068917568002LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = INT8_MAX;
	static volatile int8_t x130 = INT8_MAX;
	volatile uint16_t x132 = 8789U;
	int32_t t28 = -225;

    t28 = ((x129+(x130/x131))-x132);

    if (t28 != -8662) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x133 = -460;
	uint8_t x134 = 6U;
	volatile uint64_t x135 = 3594154244LLU;
	volatile uint64_t t29 = 494660851LLU;

    t29 = ((x133+(x134/x135))-x136);

    if (t29 != 18446744073709551151LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	int64_t x144 = 8034076415LL;

    t30 = ((x141+(x142/x143))-x144);

    if (t30 != -8034076416LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x145 = INT32_MIN;
	int64_t x146 = 294LL;
	uint64_t x147 = UINT64_MAX;
	int8_t x148 = -1;
	volatile uint64_t t31 = 383LLU;

    t31 = ((x145+(x146/x147))-x148);

    if (t31 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x150 = INT64_MIN;
	static int8_t x151 = -2;
	static int8_t x152 = INT8_MIN;
	static volatile uint64_t t32 = 394923478645075939LLU;

    t32 = ((x149+(x150/x151))-x152);

    if (t32 != 4611686018427388031LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x153 = UINT32_MAX;
	int64_t x155 = -8438721181131LL;
	int32_t x156 = -112407;
	volatile int64_t t33 = 3394350383190489LL;

    t33 = ((x153+(x154/x155))-x156);

    if (t33 != 4295079702LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x157 = UINT16_MAX;
	volatile int64_t x158 = INT64_MIN;
	static uint16_t x159 = UINT16_MAX;
	uint32_t x160 = 2440801U;
	int64_t t34 = 1049674553406LL;

    t34 = ((x157+(x158/x159))-x160);

    if (t34 != -140739638247010LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = -1;
	int32_t x170 = -1;
	int8_t x171 = INT8_MAX;
	int16_t x172 = 12;

    t35 = ((x169+(x170/x171))-x172);

    if (t35 != -13) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x173 = INT32_MAX;
	int16_t x174 = -1;
	int32_t x175 = INT32_MAX;
	static int64_t x176 = 2267088717393904451LL;
	int64_t t36 = 13525863829LL;

    t36 = ((x173+(x174/x175))-x176);

    if (t36 != -2267088715246420804LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x177 = 14581U;
	int16_t x178 = INT16_MAX;
	static int16_t x179 = 786;
	volatile int16_t x180 = INT16_MIN;

    t37 = ((x177+(x178/x179))-x180);

    if (t37 != 47390) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x181 = 464U;
	static int64_t x182 = INT64_MIN;
	volatile int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MAX;
	volatile int64_t t38 = 3143794LL;

    t38 = ((x181+(x182/x183))-x184);

    if (t38 != 72057591890444753LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x186 = INT32_MAX;
	volatile uint16_t x187 = 3465U;
	int64_t t39 = 0LL;

    t39 = ((x185+(x186/x187))-x188);

    if (t39 != -9223372036854156044LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x189 = 84U;
	int64_t x190 = INT64_MAX;
	volatile int32_t x191 = -1;
	static int64_t x192 = INT64_MIN;
	int64_t t40 = 819678LL;

    t40 = ((x189+(x190/x191))-x192);

    if (t40 != 85LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x194 = 1517619159U;
	int64_t x195 = -201LL;
	volatile int32_t x196 = -498;
	int64_t t41 = -66727905LL;

    t41 = ((x193+(x194/x195))-x196);

    if (t41 != -7532565LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x197 = UINT8_MAX;
	int64_t x198 = 792136LL;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = UINT16_MAX;
	int64_t t42 = -4641361798554LL;

    t42 = ((x197+(x198/x199))-x200);

    if (t42 != -71468LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x201 = -286;
	static uint16_t x202 = 4304U;
	uint64_t x203 = UINT64_MAX;
	uint32_t x204 = UINT32_MAX;
	uint64_t t43 = 746701721189633932LLU;

    t43 = ((x201+(x202/x203))-x204);

    if (t43 != 18446744069414584035LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	static int16_t x207 = -363;
	int32_t x208 = -3;
	static volatile int32_t t44 = 1019;

    t44 = ((x205+(x206/x207))-x208);

    if (t44 != 92) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x210 = 0U;
	int8_t x212 = INT8_MAX;
	static int64_t t45 = 2112587301381LL;

    t45 = ((x209+(x210/x211))-x212);

    if (t45 != 965LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = -1;
	int32_t x215 = -104;
	volatile int64_t x216 = INT64_MAX;

    t46 = ((x213+(x214/x215))-x216);

    if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x217 = INT32_MAX;
	static uint32_t x219 = 5060013U;
	int32_t x220 = INT32_MIN;
	volatile uint32_t t47 = UINT32_MAX;

    t47 = ((x217+(x218/x219))-x220);

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = INT32_MIN;
	volatile int32_t x222 = INT32_MAX;
	int16_t x223 = 5475;
	int16_t x224 = -1;
	volatile int32_t t48 = -413834581;

    t48 = ((x221+(x222/x223))-x224);

    if (t48 != -2147091413) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x225 = INT8_MAX;
	int16_t x226 = INT16_MAX;
	uint32_t x228 = 1U;
	uint32_t t49 = 37U;

    t49 = ((x225+(x226/x227))-x228);

    if (t49 != 124U) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x229 = UINT64_MAX;
	static int8_t x230 = 0;
	uint32_t x231 = 4684U;
	static int64_t x232 = INT64_MIN;

    t50 = ((x229+(x230/x231))-x232);

    if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x233 = INT32_MAX;
	int8_t x234 = INT8_MIN;

    t51 = ((x233+(x234/x235))-x236);

    if (t51 != 2147483644) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x237 = 5424U;
	uint64_t x238 = 3435770LLU;
	uint64_t x239 = 3LLU;
	int16_t x240 = 5318;
	uint64_t t52 = 0LLU;

    t52 = ((x237+(x238/x239))-x240);

    if (t52 != 1145362LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x241 = 4;
	volatile int16_t x242 = INT16_MAX;
	volatile int32_t x243 = -1;
	int32_t x244 = -1;
	int32_t t53 = -102926;

    t53 = ((x241+(x242/x243))-x244);

    if (t53 != -32762) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x246 = -50092;
	int64_t x247 = INT64_MIN;
	int8_t x248 = 3;
	int64_t t54 = 241169501LL;

    t54 = ((x245+(x246/x247))-x248);

    if (t54 != 4LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x257 = 13U;
	int32_t x258 = -12184348;
	int8_t x259 = 2;
	int16_t x260 = INT16_MIN;
	volatile int32_t t55 = 27932000;

    t55 = ((x257+(x258/x259))-x260);

    if (t55 != -6059393) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x261 = 11U;
	int8_t x262 = INT8_MIN;
	uint64_t x264 = UINT64_MAX;
	static volatile uint64_t t56 = 111348295LLU;

    t56 = ((x261+(x262/x263))-x264);

    if (t56 != 136407LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x265 = -1;
	int16_t x266 = 882;
	int32_t x267 = -1;

    t57 = ((x265+(x266/x267))-x268);

    if (t57 != 4294966414U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x269 = 71U;
	static int16_t x270 = -1;
	static int16_t x271 = -1;
	uint32_t x272 = 4511U;
	volatile uint32_t t58 = 1781714U;

    t58 = ((x269+(x270/x271))-x272);

    if (t58 != 4294962857U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x274 = INT8_MAX;
	static uint16_t x275 = 22U;
	static int64_t x276 = -1LL;
	volatile uint64_t t59 = 3834LLU;

    t59 = ((x273+(x274/x275))-x276);

    if (t59 != 15LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x279 = -1;
	volatile uint64_t t60 = 4624052LLU;

    t60 = ((x277+(x278/x279))-x280);

    if (t60 != 232967358844043LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x281 = UINT16_MAX;
	volatile uint32_t x282 = 2883U;
	static int16_t x283 = -14;
	uint32_t x284 = 74U;
	uint32_t t61 = 1012409121U;

    t61 = ((x281+(x282/x283))-x284);

    if (t61 != 65461U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = -22;
	uint8_t x286 = UINT8_MAX;
	volatile int64_t x288 = 450300074LL;

    t62 = ((x285+(x286/x287))-x288);

    if (t62 != -450300351LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x293 = 391869127755LLU;
	int64_t x294 = -1LL;
	uint64_t x296 = 20765639070148LLU;
	static volatile uint64_t t63 = 1047LLU;

    t63 = ((x293+(x294/x295))-x296);

    if (t63 != 18446723699939609224LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x297 = 4418330806LL;
	int64_t x298 = -580011596761248LL;
	uint8_t x300 = 62U;
	int64_t t64 = 16464115457476LL;

    t64 = ((x297+(x298/x299))-x300);

    if (t64 != 22118879961LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x301 = 27;
	int8_t x303 = INT8_MAX;
	static int64_t x304 = 5447668LL;
	static volatile int64_t t65 = 0LL;

    t65 = ((x301+(x302/x303))-x304);

    if (t65 != -5447641LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	volatile int64_t x307 = INT64_MAX;
	volatile int64_t t66 = -151747018859LL;

    t66 = ((x305+(x306/x307))-x308);

    if (t66 != 2147450879LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x309 = INT32_MIN;
	uint64_t x310 = 513552176LLU;
	int16_t x312 = INT16_MIN;
	volatile uint64_t t67 = 2095LLU;

    t67 = ((x309+(x310/x311))-x312);

    if (t67 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x314 = INT64_MAX;
	static int16_t x316 = INT16_MAX;

    t68 = ((x313+(x314/x315))-x316);

    if (t68 != 1090495195484868LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x317 = 55972802953453370LLU;
	int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	uint16_t x320 = UINT16_MAX;
	static volatile uint64_t t69 = 107543731184693016LLU;

    t69 = ((x317+(x318/x319))-x320);

    if (t69 != 55972802953387835LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x321 = 1U;
	int16_t x322 = 233;
	uint16_t x323 = 1U;
	uint32_t x324 = UINT32_MAX;
	static uint32_t t70 = 557U;

    t70 = ((x321+(x322/x323))-x324);

    if (t70 != 235U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x325 = 31U;
	static int16_t x328 = -1;
	volatile uint64_t t71 = 1370111855586LLU;

    t71 = ((x325+(x326/x327))-x328);

    if (t71 != 32LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x329 = 98130U;
	static int32_t x330 = INT32_MAX;
	uint16_t x331 = 11U;
	uint32_t t72 = 82172U;

    t72 = ((x329+(x330/x331))-x332);

    if (t72 != 195356684U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x333 = 234711188;
	static int32_t t73 = -975;

    t73 = ((x333+(x334/x335))-x336);

    if (t73 != 234678423) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x337 = -1;
	int32_t x338 = INT32_MAX;
	uint16_t x340 = 823U;
	int32_t t74 = 1238;

    t74 = ((x337+(x338/x339))-x340);

    if (t74 != -823) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x341 = 239458968;
	uint64_t x342 = 164897205641426739LLU;
	int16_t x343 = INT16_MIN;
	volatile int64_t x344 = INT64_MAX;
	volatile uint64_t t75 = 1LLU;

    t75 = ((x341+(x342/x343))-x344);

    if (t75 != 9223372037094234777LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x349 = INT32_MIN;
	uint64_t x350 = 663005LLU;
	volatile uint32_t x351 = UINT32_MAX;
	uint32_t x352 = 846294236U;
	uint64_t t76 = 211488408LLU;

    t76 = ((x349+(x350/x351))-x352);

    if (t76 != 18446744070715773732LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = UINT64_MAX;
	int8_t x356 = -1;
	volatile uint64_t t77 = 13571740331293957LLU;

    t77 = ((x353+(x354/x355))-x356);

    if (t77 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x357 = INT16_MAX;
	static int16_t x359 = INT16_MAX;
	volatile uint8_t x360 = 29U;
	int32_t t78 = -796307;

    t78 = ((x357+(x358/x359))-x360);

    if (t78 != 32738) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x361 = -11;
	uint16_t x362 = UINT16_MAX;
	uint64_t x363 = 6301747389LLU;
	volatile uint64_t t79 = 12935LLU;

    t79 = ((x361+(x362/x363))-x364);

    if (t79 != 32757LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x369 = UINT64_MAX;
	uint32_t x370 = 32U;
	uint32_t x372 = UINT32_MAX;
	volatile uint64_t t80 = 246778895LLU;

    t80 = ((x369+(x370/x371))-x372);

    if (t80 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x373 = INT64_MIN;
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	int64_t x376 = -1LL;
	int64_t t81 = 15382946223195LL;

    t81 = ((x373+(x374/x375))-x376);

    if (t81 != -9223372036854775551LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x377 = 6998U;
	int32_t x378 = INT32_MAX;
	static uint32_t x380 = 960372684U;
	volatile uint64_t t82 = 400571244412605193LLU;

    t82 = ((x377+(x378/x379))-x380);

    if (t82 != 18446744072749185930LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x382 = 461U;
	uint64_t x383 = UINT64_MAX;
	int16_t x384 = INT16_MIN;
	uint64_t t83 = 637500632799528LLU;

    t83 = ((x381+(x382/x383))-x384);

    if (t83 != 32767LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x386 = UINT64_MAX;
	volatile uint64_t t84 = 195643263007010517LLU;

    t84 = ((x385+(x386/x387))-x388);

    if (t84 != 3689348812594426679LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x389 = UINT32_MAX;
	int64_t x390 = 6982LL;
	static int64_t x391 = 203081LL;
	int16_t x392 = INT16_MIN;
	volatile int64_t t85 = 1LL;

    t85 = ((x389+(x390/x391))-x392);

    if (t85 != 4295000063LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x393 = INT32_MAX;
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	volatile uint32_t t86 = 21U;

    t86 = ((x393+(x394/x395))-x396);

    if (t86 != 2147516416U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x397 = INT8_MIN;
	int16_t x399 = INT16_MAX;
	uint64_t t87 = 365308086283454103LLU;

    t87 = ((x397+(x398/x399))-x400);

    if (t87 != 562967133814417LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x401 = -1;
	int8_t x402 = INT8_MAX;
	int16_t x403 = -1;
	volatile uint32_t x404 = 2790U;
	volatile uint32_t t88 = 2054632385U;

    t88 = ((x401+(x402/x403))-x404);

    if (t88 != 4294964378U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x405 = -1;
	volatile uint16_t x406 = 124U;
	uint32_t x407 = 431U;
	uint32_t t89 = 414643U;

    t89 = ((x405+(x406/x407))-x408);

    if (t89 != 4283193355U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x409 = INT16_MAX;
	int8_t x410 = -1;
	int16_t x411 = -747;
	uint16_t x412 = 6793U;
	int32_t t90 = -168162;

    t90 = ((x409+(x410/x411))-x412);

    if (t90 != 25974) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x417 = INT8_MAX;
	int32_t x420 = -1;
	volatile int32_t t91 = -676;

    t91 = ((x417+(x418/x419))-x420);

    if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MAX;
	uint32_t x423 = UINT32_MAX;
	uint16_t x424 = 87U;
	uint32_t t92 = 782U;

    t92 = ((x421+(x422/x423))-x424);

    if (t92 != 4294967081U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x439 = 1U;
	static uint16_t x440 = 100U;
	static int32_t t93 = -35;

    t93 = ((x437+(x438/x439))-x440);

    if (t93 != 32666) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x441 = 791362001405336LLU;
	uint32_t x442 = UINT32_MAX;
	int32_t x443 = 26;
	volatile uint64_t x444 = UINT64_MAX;

    t94 = ((x441+(x442/x443))-x444);

    if (t94 != 791362166596386LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x445 = -1;
	volatile int32_t x446 = INT32_MIN;
	int32_t x447 = 724200;
	int8_t x448 = 15;
	volatile int32_t t95 = -1;

    t95 = ((x445+(x446/x447))-x448);

    if (t95 != -2981) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x449 = -85957048LL;
	int8_t x450 = 1;
	static int32_t x451 = -1;
	static int32_t x452 = 2;
	int64_t t96 = -5963586933808308LL;

    t96 = ((x449+(x450/x451))-x452);

    if (t96 != -85957051LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x453 = 612053LLU;
	uint32_t x454 = 483U;
	int16_t x455 = INT16_MIN;
	int8_t x456 = -2;
	volatile uint64_t t97 = 176715306LLU;

    t97 = ((x453+(x454/x455))-x456);

    if (t97 != 612055LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x457 = 998856;
	uint64_t x458 = 18357788475199LLU;
	int32_t x459 = INT32_MIN;
	volatile uint64_t t98 = 10593062614418LLU;

    t98 = ((x457+(x458/x459))-x460);

    if (t98 != 9223372036855774664LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x462 = -1;
	int32_t x463 = INT32_MIN;
	int16_t x464 = -1;
	static int32_t t99 = -126;

    t99 = ((x461+(x462/x463))-x464);

    if (t99 != -57592832) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x465 = -41;
	static int32_t t100 = -538;

    t100 = ((x465+(x466/x467))-x468);

    if (t100 != -32808) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x469 = 762U;
	int32_t x470 = INT32_MIN;
	int32_t x471 = INT32_MIN;
	static int32_t x472 = -1;
	volatile int32_t t101 = 33;

    t101 = ((x469+(x470/x471))-x472);

    if (t101 != 764) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x474 = 5961826727301LLU;
	volatile uint64_t x476 = UINT64_MAX;

    t102 = ((x473+(x474/x475))-x476);

    if (t102 != 44LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x477 = -435560822;
	int8_t x478 = -1;
	uint32_t x479 = UINT32_MAX;
	int32_t x480 = -1;
	uint32_t t103 = 173628U;

    t103 = ((x477+(x478/x479))-x480);

    if (t103 != 3859406476U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x481 = INT32_MAX;
	int16_t x482 = INT16_MAX;
	int8_t x483 = INT8_MIN;
	int8_t x484 = 1;

    t104 = ((x481+(x482/x483))-x484);

    if (t104 != 2147483391) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x485 = 29U;
	int8_t x486 = -2;
	volatile uint8_t x487 = UINT8_MAX;
	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t105 = 3739LLU;

    t105 = ((x485+(x486/x487))-x488);

    if (t105 != 30LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x489 = -1;
	static volatile uint32_t x490 = 2U;
	int32_t x491 = INT32_MIN;
	volatile uint32_t t106 = 3U;

    t106 = ((x489+(x490/x491))-x492);

    if (t106 != 4294965231U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x497 = -1;
	uint64_t x498 = 7665067681123LLU;
	int64_t x499 = INT64_MAX;
	static int32_t x500 = INT32_MAX;
	volatile uint64_t t107 = 961626167937350LLU;

    t107 = ((x497+(x498/x499))-x500);

    if (t107 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x501 = 23;
	int32_t x503 = INT32_MIN;
	int32_t x504 = INT32_MIN;
	int64_t t108 = 219000LL;

    t108 = ((x501+(x502/x503))-x504);

    if (t108 != 6442450967LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x505 = -1;
	int32_t x506 = INT32_MIN;
	volatile int64_t x507 = INT64_MAX;
	static int64_t x508 = INT64_MIN;
	int64_t t109 = INT64_MAX;

    t109 = ((x505+(x506/x507))-x508);

    if (t109 != INT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x509 = UINT64_MAX;
	int32_t x511 = INT32_MIN;
	int64_t x512 = -3925668886484412LL;
	uint64_t t110 = 114625LLU;

    t110 = ((x509+(x510/x511))-x512);

    if (t110 != 3925673181451707LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x513 = INT8_MIN;
	uint32_t x514 = 1315484U;
	static int32_t x515 = INT32_MIN;
	volatile uint64_t x516 = 3273435LLU;
	uint64_t t111 = 46697074LLU;

    t111 = ((x513+(x514/x515))-x516);

    if (t111 != 4291693733LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x517 = 84053;
	volatile uint32_t x518 = 113U;
	static volatile uint32_t t112 = 11U;

    t112 = ((x517+(x518/x519))-x520);

    if (t112 != 84181U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x521 = 1400U;
	static volatile uint16_t x523 = 32U;
	uint16_t x524 = 2362U;

    t113 = ((x521+(x522/x523))-x524);

    if (t113 != 18446744073709550686LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x526 = INT64_MIN;
	uint32_t x527 = UINT32_MAX;
	int64_t t114 = 2742LL;

    t114 = ((x525+(x526/x527))-x528);

    if (t114 != -2147450881LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x533 = INT8_MAX;
	int64_t x534 = INT64_MAX;
	static int64_t x536 = INT64_MAX;

    t115 = ((x533+(x534/x535))-x536);

    if (t115 != -9223344244061274602LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x537 = UINT64_MAX;
	int32_t x538 = INT32_MIN;
	volatile int64_t x539 = 34602451049527LL;
	volatile int32_t x540 = -1;
	uint64_t t116 = 75351508721849699LLU;

    t116 = ((x537+(x538/x539))-x540);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x541 = 806;
	volatile int8_t x542 = 1;
	uint32_t x543 = 2799U;
	uint8_t x544 = 0U;
	static uint32_t t117 = 921U;

    t117 = ((x541+(x542/x543))-x544);

    if (t117 != 806U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x545 = 1;
	int8_t x546 = INT8_MIN;
	int64_t x547 = 1137230LL;
	int8_t x548 = INT8_MIN;
	static volatile int64_t t118 = 0LL;

    t118 = ((x545+(x546/x547))-x548);

    if (t118 != 129LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x550 = INT8_MIN;
	static volatile int16_t x551 = -1;
	uint64_t x552 = 21377LLU;
	volatile uint64_t t119 = 16000162715LLU;

    t119 = ((x549+(x550/x551))-x552);

    if (t119 != 18446744073709530366LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x553 = INT8_MIN;
	int32_t x554 = -116862;
	volatile uint32_t x555 = 12605U;
	static uint8_t x556 = 0U;
	volatile uint32_t t120 = 92419U;

    t120 = ((x553+(x554/x555))-x556);

    if (t120 != 340597U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x557 = INT8_MIN;
	uint8_t x558 = 47U;
	volatile uint8_t x559 = 1U;
	int16_t x560 = -951;
	volatile int32_t t121 = 1405;

    t121 = ((x557+(x558/x559))-x560);

    if (t121 != 870) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x561 = INT8_MIN;
	int32_t x563 = INT32_MIN;
	int16_t x564 = -1;
	volatile int32_t t122 = -91200792;

    t122 = ((x561+(x562/x563))-x564);

    if (t122 != -127) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x570 = 5791U;
	int64_t x571 = INT64_MAX;
	int64_t x572 = 8626191689LL;

    t123 = ((x569+(x570/x571))-x572);

    if (t123 != -8626195679LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x573 = INT16_MIN;
	uint32_t x574 = 56570698U;
	volatile int32_t x575 = 99061;
	static int16_t x576 = INT16_MIN;
	volatile uint32_t t124 = 24992U;

    t124 = ((x573+(x574/x575))-x576);

    if (t124 != 571U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x577 = UINT8_MAX;
	volatile int64_t x579 = INT64_MIN;
	int8_t x580 = -1;
	int64_t t125 = -2936979121539088584LL;

    t125 = ((x577+(x578/x579))-x580);

    if (t125 != 256LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x582 = 36305514U;
	volatile int32_t x583 = INT32_MAX;
	static int16_t x584 = INT16_MAX;
	volatile uint32_t t126 = 1735U;

    t126 = ((x581+(x582/x583))-x584);

    if (t126 != 2147450881U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	int16_t x586 = INT16_MIN;
	volatile int16_t x587 = -8436;
	volatile int64_t x588 = -1LL;
	static volatile uint64_t t127 = 112222676LLU;

    t127 = ((x585+(x586/x587))-x588);

    if (t127 != 3LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x589 = UINT64_MAX;
	uint16_t x590 = 370U;
	int32_t x591 = INT32_MAX;
	int16_t x592 = INT16_MIN;
	volatile uint64_t t128 = 65984390647LLU;

    t128 = ((x589+(x590/x591))-x592);

    if (t128 != 32767LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x601 = 12609410LL;
	volatile int16_t x602 = INT16_MAX;
	uint8_t x604 = 0U;

    t129 = ((x601+(x602/x603))-x604);

    if (t129 != 12609865LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x605 = 251U;
	uint8_t x606 = 58U;
	int16_t x607 = INT16_MIN;
	int32_t t130 = 0;

    t130 = ((x605+(x606/x607))-x608);

    if (t130 != -2147483396) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x609 = -1;
	volatile uint64_t x610 = 303827517813646100LLU;
	int16_t x611 = -2;
	int32_t x612 = -576406;
	uint64_t t131 = 62943210832093208LLU;

    t131 = ((x609+(x610/x611))-x612);

    if (t131 != 576405LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x613 = INT32_MIN;
	volatile int32_t x616 = INT32_MAX;

    t132 = ((x613+(x614/x615))-x616);

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x617 = 504;
	static int32_t x618 = -1;
	int64_t x619 = INT64_MIN;
	volatile int64_t x620 = -1LL;
	volatile int64_t t133 = 25031054747405LL;

    t133 = ((x617+(x618/x619))-x620);

    if (t133 != 505LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x621 = UINT64_MAX;
	static volatile uint32_t x622 = 1U;
	uint8_t x623 = 52U;
	volatile uint64_t t134 = 8655051522583217LLU;

    t134 = ((x621+(x622/x623))-x624);

    if (t134 != 18446744073701387853LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x625 = -1;
	volatile int64_t x626 = 35398935242485381LL;
	uint8_t x627 = UINT8_MAX;
	volatile int64_t t135 = -546788LL;

    t135 = ((x625+(x626/x627))-x628);

    if (t135 != 138819360606437LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x629 = -1;
	volatile uint32_t x630 = 325U;
	int64_t x631 = 1LL;
	volatile int64_t t136 = 61760LL;

    t136 = ((x629+(x630/x631))-x632);

    if (t136 != 296LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x633 = UINT16_MAX;
	static uint32_t x634 = 15572U;
	volatile int16_t x636 = -1;

    t137 = ((x633+(x634/x635))-x636);

    if (t137 != 66951U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x638 = 13989963492LLU;
	int8_t x639 = -1;
	int16_t x640 = INT16_MIN;
	volatile uint64_t t138 = 156210510730101478LLU;

    t138 = ((x637+(x638/x639))-x640);

    if (t138 != 32767LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x649 = -1;
	volatile int32_t x650 = -2652874;
	static int32_t x651 = INT32_MAX;
	volatile uint32_t x652 = 6U;

    t139 = ((x649+(x650/x651))-x652);

    if (t139 != 4294967289U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x653 = INT32_MIN;
	uint64_t x655 = 235368687155888179LLU;
	int32_t x656 = 0;

    t140 = ((x653+(x654/x655))-x656);

    if (t140 != 18446744071562068046LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x658 = INT64_MIN;
	int8_t x659 = -2;
	int64_t x660 = -1LL;
	volatile uint64_t t141 = 11888805933LLU;

    t141 = ((x657+(x658/x659))-x660);

    if (t141 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x665 = -1;
	uint32_t x666 = UINT32_MAX;
	int16_t x667 = 9707;
	static int64_t x668 = -23LL;
	volatile int64_t t142 = -539357728567LL;

    t142 = ((x665+(x666/x667))-x668);

    if (t142 != 442482LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x677 = INT8_MAX;
	static int8_t x678 = INT8_MIN;
	int32_t x679 = INT32_MIN;
	uint8_t x680 = UINT8_MAX;
	int32_t t143 = 1054029471;

    t143 = ((x677+(x678/x679))-x680);

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x682 = 14024012LLU;
	uint64_t x683 = 4217206724276944LLU;
	static uint16_t x684 = 3347U;
	uint64_t t144 = 11LLU;

    t144 = ((x681+(x682/x683))-x684);

    if (t144 != 18446744073709548276LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x685 = UINT16_MAX;
	static uint32_t x686 = UINT32_MAX;
	int16_t x688 = -1;
	uint32_t t145 = 3654073U;

    t145 = ((x685+(x686/x687))-x688);

    if (t145 != 76761380U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x693 = INT32_MIN;
	static int16_t x695 = -1;
	int64_t x696 = -1LL;
	static int64_t t146 = 17LL;

    t146 = ((x693+(x694/x695))-x696);

    if (t146 != 2147483649LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x697 = 2046LL;
	int32_t x698 = INT32_MIN;
	volatile uint16_t x699 = UINT16_MAX;
	int16_t x700 = INT16_MAX;
	volatile int64_t t147 = 246LL;

    t147 = ((x697+(x698/x699))-x700);

    if (t147 != -63489LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x705 = 49;
	static int8_t x706 = INT8_MIN;
	int32_t x707 = INT32_MAX;
	volatile int32_t t148 = -168809;

    t148 = ((x705+(x706/x707))-x708);

    if (t148 != 9) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x709 = 873U;
	uint16_t x710 = 70U;
	int8_t x711 = INT8_MIN;
	uint16_t x712 = UINT16_MAX;
	uint32_t t149 = 42042838U;

    t149 = ((x709+(x710/x711))-x712);

    if (t149 != 4294902634U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x714 = -11;
	int8_t x715 = -2;
	static int64_t x716 = -58027094088227272LL;
	volatile int64_t t150 = 816697070LL;

    t150 = ((x713+(x714/x715))-x716);

    if (t150 != 58027094088227216LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x717 = 4;
	static int16_t x719 = INT16_MIN;
	int16_t x720 = 9;
	int32_t t151 = 0;

    t151 = ((x717+(x718/x719))-x720);

    if (t151 != -6) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x721 = 2U;
	int64_t x722 = -3684319257LL;
	volatile int16_t x723 = INT16_MIN;
	int64_t x724 = -207642817603134LL;
	int64_t t152 = 5474445LL;

    t152 = ((x721+(x722/x723))-x724);

    if (t152 != 207642817715572LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x725 = 2057825U;
	int32_t x726 = INT32_MAX;
	int64_t x728 = 0LL;

    t153 = ((x725+(x726/x727))-x728);

    if (t153 != 2149541472LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x729 = INT16_MIN;
	int8_t x730 = -1;
	uint8_t x731 = 15U;
	uint8_t x732 = 2U;
	int32_t t154 = -296074;

    t154 = ((x729+(x730/x731))-x732);

    if (t154 != -32770) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x733 = -1;
	static int64_t x734 = -16LL;
	static volatile uint64_t x735 = 17624072LLU;
	int64_t x736 = -1LL;
	volatile uint64_t t155 = 455227808582459950LLU;

    t155 = ((x733+(x734/x735))-x736);

    if (t155 != 1046678887473LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x737 = -72298645840LL;
	int8_t x738 = 33;
	volatile int32_t x739 = 1022;
	int32_t x740 = -1;

    t156 = ((x737+(x738/x739))-x740);

    if (t156 != -72298645839LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x741 = UINT32_MAX;
	static int16_t x742 = -104;
	int16_t x743 = INT16_MIN;
	static int32_t x744 = -1;
	uint32_t t157 = 65198880U;

    t157 = ((x741+(x742/x743))-x744);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x745 = -2;
	int32_t x746 = INT32_MIN;
	uint16_t x747 = 13014U;
	int16_t x748 = INT16_MIN;
	static int32_t t158 = 442;

    t158 = ((x745+(x746/x747))-x748);

    if (t158 != -132247) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x749 = INT64_MIN;
	static uint64_t x750 = 276999917314752LLU;
	int64_t x752 = -1LL;

    t159 = ((x749+(x750/x751))-x752);

    if (t159 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x753 = -1LL;
	static uint32_t x754 = 20375012U;
	volatile uint8_t x756 = 74U;
	volatile int64_t t160 = -477157997LL;

    t160 = ((x753+(x754/x755))-x756);

    if (t160 != -75LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x757 = -834;
	uint64_t x758 = UINT64_MAX;
	int64_t x759 = 5040667LL;
	uint32_t x760 = 1214132800U;
	volatile uint64_t t161 = 1074847566165LLU;

    t161 = ((x757+(x758/x759))-x760);

    if (t161 != 3658369820971LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x770 = INT32_MAX;
	uint64_t x771 = 32495952LLU;
	uint16_t x772 = 9U;
	uint64_t t162 = 20LLU;

    t162 = ((x769+(x770/x771))-x772);

    if (t162 != 1286579LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x774 = 560U;
	uint64_t x775 = 16668229477159721LLU;
	volatile int16_t x776 = INT16_MIN;
	volatile uint64_t t163 = 30LLU;

    t163 = ((x773+(x774/x775))-x776);

    if (t163 != 98303LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x777 = UINT8_MAX;
	static int8_t x779 = -1;
	int32_t x780 = INT32_MAX;
	uint64_t t164 = 52380186666492819LLU;

    t164 = ((x777+(x778/x779))-x780);

    if (t164 != 18446744071562068224LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x789 = 1472186646LL;
	static uint8_t x790 = 1U;
	int64_t x791 = INT64_MAX;
	int16_t x792 = -1;
	volatile int64_t t165 = -185025958651848LL;

    t165 = ((x789+(x790/x791))-x792);

    if (t165 != 1472186647LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x793 = 0U;
	int8_t x794 = INT8_MIN;
	int32_t x795 = 61855774;
	int8_t x796 = INT8_MAX;

    t166 = ((x793+(x794/x795))-x796);

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x798 = INT8_MIN;
	int32_t x799 = -1;
	uint32_t x800 = 716418U;
	uint32_t t167 = 138U;

    t167 = ((x797+(x798/x799))-x800);

    if (t167 != 4294283773U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x802 = -1;
	volatile uint64_t x803 = 2026731485766810LLU;
	int8_t x804 = INT8_MIN;
	static volatile uint64_t t168 = 363551227582LLU;

    t168 = ((x801+(x802/x803))-x804);

    if (t168 != 100252LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x805 = -1;
	volatile int32_t x806 = 201326043;
	int64_t x807 = INT64_MIN;
	int8_t x808 = -19;
	volatile int64_t t169 = 1LL;

    t169 = ((x805+(x806/x807))-x808);

    if (t169 != 18LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x809 = INT16_MAX;
	static uint64_t x810 = 435926867LLU;
	int64_t x811 = -1LL;
	static int8_t x812 = 34;

    t170 = ((x809+(x810/x811))-x812);

    if (t170 != 32733LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x813 = 583819;
	int32_t x814 = INT32_MAX;
	volatile int16_t x816 = -1;
	volatile int64_t t171 = 854088594877376558LL;

    t171 = ((x813+(x814/x815))-x816);

    if (t171 != -88894665LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x817 = UINT64_MAX;
	uint64_t x818 = UINT64_MAX;
	int16_t x819 = -1;
	uint64_t x820 = UINT64_MAX;
	uint64_t t172 = 103662070134547974LLU;

    t172 = ((x817+(x818/x819))-x820);

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x821 = -125478308;
	int8_t x822 = INT8_MIN;
	uint16_t x823 = UINT16_MAX;
	static volatile int32_t t173 = -16;

    t173 = ((x821+(x822/x823))-x824);

    if (t173 != -125478322) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x825 = INT16_MIN;
	static int8_t x827 = INT8_MIN;
	volatile int64_t t174 = 1210829495343514121LL;

    t174 = ((x825+(x826/x827))-x828);

    if (t174 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x829 = 58044123147564LLU;
	int8_t x830 = 11;
	uint16_t x831 = UINT16_MAX;
	int16_t x832 = INT16_MIN;
	static uint64_t t175 = 116LLU;

    t175 = ((x829+(x830/x831))-x832);

    if (t175 != 58044123180332LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x833 = -1;
	static volatile int8_t x835 = INT8_MIN;
	int64_t x836 = INT64_MIN;

    t176 = ((x833+(x834/x835))-x836);

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x837 = 31;
	int16_t x838 = INT16_MIN;
	int16_t x839 = INT16_MAX;
	volatile int32_t t177 = 830438;

    t177 = ((x837+(x838/x839))-x840);

    if (t177 != 2526) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x842 = INT64_MIN;
	volatile uint32_t x844 = 42U;

    t178 = ((x841+(x842/x843))-x844);

    if (t178 != -651132178LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x846 = 20602U;
	static int8_t x847 = 2;
	int8_t x848 = INT8_MAX;

    t179 = ((x845+(x846/x847))-x848);

    if (t179 != 10429) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x850 = -1;
	int32_t x851 = INT32_MIN;
	uint8_t x852 = 15U;
	static volatile int32_t t180 = 2645564;

    t180 = ((x849+(x850/x851))-x852);

    if (t180 != -16) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x853 = -542;
	int32_t x854 = INT32_MIN;
	static int8_t x855 = 31;
	volatile int64_t x856 = INT64_MIN;
	int64_t t181 = -213012376603300LL;

    t181 = ((x853+(x854/x855))-x856);

    if (t181 != 9223372036785501600LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x857 = INT16_MIN;
	uint8_t x859 = UINT8_MAX;
	uint32_t x860 = 5099291U;
	uint32_t t182 = 64934460U;

    t182 = ((x857+(x858/x859))-x860);

    if (t182 != 4289835237U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x861 = 423171400U;
	static uint8_t x862 = 6U;
	static uint32_t x863 = 131065U;
	uint32_t t183 = 32833U;

    t183 = ((x861+(x862/x863))-x864);

    if (t183 != 2570655048U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x873 = INT64_MIN;
	static int32_t x874 = -672431263;
	uint32_t x875 = 3U;
	uint64_t x876 = 3545798592LLU;
	static uint64_t t184 = 31LLU;

    t184 = ((x873+(x874/x875))-x876);

    if (t184 != 9223372034516489227LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x877 = 6U;
	int8_t x879 = 21;
	static volatile int32_t t185 = 2793;

    t185 = ((x877+(x878/x879))-x880);

    if (t185 != -255) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x881 = 2U;
	int64_t x882 = INT64_MAX;
	int64_t x883 = -1009LL;
	int64_t x884 = -12529439479748783LL;
	volatile int64_t t186 = 252193244LL;

    t186 = ((x881+(x882/x883))-x884);

    if (t186 != 3388337361954161LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x885 = INT32_MIN;
	int16_t x887 = -1;

    t187 = ((x885+(x886/x887))-x888);

    if (t187 != 2168736251U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x889 = UINT32_MAX;
	uint16_t x890 = UINT16_MAX;
	uint8_t x892 = UINT8_MAX;
	volatile int64_t t188 = -58969353716144LL;

    t188 = ((x889+(x890/x891))-x892);

    if (t188 != 4294967040LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x893 = -1;
	volatile int16_t x894 = INT16_MIN;
	static uint16_t x895 = 95U;
	int16_t x896 = INT16_MIN;
	static int32_t t189 = -6237;

    t189 = ((x893+(x894/x895))-x896);

    if (t189 != 32423) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x897 = -1LL;
	int16_t x899 = -5289;
	uint32_t x900 = UINT32_MAX;
	volatile uint64_t t190 = 39458278873LLU;

    t190 = ((x897+(x898/x899))-x900);

    if (t190 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x901 = 15942U;
	volatile uint8_t x904 = UINT8_MAX;

    t191 = ((x901+(x902/x903))-x904);

    if (t191 != 4294982983LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x905 = 431444;
	volatile uint8_t x906 = 11U;
	volatile uint8_t x907 = 2U;
	volatile int32_t t192 = -706762;

    t192 = ((x905+(x906/x907))-x908);

    if (t192 != -2147052198) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x909 = 1U;
	uint64_t x910 = UINT64_MAX;
	uint32_t x912 = UINT32_MAX;
	static volatile uint64_t t193 = 4475LLU;

    t193 = ((x909+(x910/x911))-x912);

    if (t193 != 18446744069414584323LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x917 = 2812891LL;
	volatile uint16_t x919 = 1857U;
	volatile int64_t t194 = 6LL;

    t194 = ((x917+(x918/x919))-x920);

    if (t194 != 5133660145705498LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x921 = UINT16_MAX;
	int64_t x922 = INT64_MIN;
	volatile int16_t x923 = INT16_MAX;
	int64_t t195 = 2107105597LL;

    t195 = ((x921+(x922/x923))-x924);

    if (t195 != 9223090553287933943LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x926 = -1LL;
	volatile int32_t x927 = INT32_MIN;
	int64_t x928 = -1LL;
	int64_t t196 = -1278LL;

    t196 = ((x925+(x926/x927))-x928);

    if (t196 != 32768LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x929 = 167472U;
	uint8_t x930 = 17U;
	volatile int32_t x932 = -1;

    t197 = ((x929+(x930/x931))-x932);

    if (t197 != 167473LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x937 = INT64_MIN;
	int64_t x940 = INT64_MIN;
	int64_t t198 = 312629LL;

    t198 = ((x937+(x938/x939))-x940);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x941 = 0LLU;
	static uint64_t x942 = 1807276918380696LLU;
	volatile int64_t x943 = INT64_MIN;
	volatile uint64_t t199 = 15658666964301LLU;

    t199 = ((x941+(x942/x943))-x944);

    if (t199 != 18446744073709486081LLU) { NG(); } else { ; }
	
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

