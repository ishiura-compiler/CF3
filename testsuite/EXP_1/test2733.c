
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

static volatile int8_t x12 = -1;
uint64_t x13 = 162063615161030LLU;
int64_t x14 = INT64_MAX;
static int64_t x26 = -7314749230LL;
volatile int16_t x28 = INT16_MAX;
int8_t x32 = 1;
int32_t x33 = -1;
uint8_t x35 = 20U;
volatile int32_t t4 = 626;
int64_t t5 = 11100881LL;
int32_t x56 = -1;
volatile int16_t x59 = -1;
uint32_t t8 = 22U;
static volatile int8_t x85 = -1;
volatile int64_t x86 = -27169183594355LL;
static int32_t x93 = -1;
static int32_t x95 = INT32_MIN;
uint64_t t14 = 464485LLU;
int16_t x103 = 922;
int32_t x115 = INT32_MAX;
static uint64_t t19 = 258133777LLU;
static int8_t x117 = INT8_MIN;
volatile int8_t x118 = INT8_MAX;
int32_t t20 = 0;
static int8_t x125 = -4;
int32_t t21 = 2036;
int64_t x129 = 1977028LL;
int16_t x133 = INT16_MAX;
static volatile int8_t x135 = INT8_MIN;
volatile int32_t t23 = -126570;
int32_t x173 = 90569;
int32_t x188 = -1;
uint16_t x191 = 10594U;
int16_t x193 = INT16_MIN;
volatile int8_t x194 = INT8_MIN;
volatile int8_t x203 = INT8_MIN;
int32_t t34 = 667;
uint64_t x205 = UINT64_MAX;
volatile uint32_t x210 = UINT32_MAX;
int16_t x219 = INT16_MIN;
static uint64_t x220 = UINT64_MAX;
volatile uint16_t x222 = 904U;
uint8_t x225 = 14U;
uint16_t x227 = 7366U;
static int8_t x234 = INT8_MIN;
volatile uint64_t t40 = 8767195257246584370LLU;
volatile int16_t x255 = 1;
uint16_t x257 = UINT16_MAX;
static int32_t x264 = INT32_MIN;
int64_t t44 = -15409554LL;
int32_t x270 = 10;
volatile uint64_t t45 = 438LLU;
int32_t x274 = -1;
uint16_t x281 = 978U;
int64_t x283 = -1LL;
int64_t x284 = 99LL;
static int8_t x288 = -10;
uint32_t x292 = UINT32_MAX;
uint64_t x294 = 163501368819526711LLU;
static int16_t x296 = INT16_MIN;
static volatile int32_t t55 = 279288;
static int64_t x313 = INT64_MAX;
int16_t x316 = -1;
uint16_t x325 = 3654U;
static int16_t x326 = -1;
int16_t x333 = -1;
int16_t x335 = INT16_MIN;
uint64_t x339 = 349903000LLU;
int16_t x341 = -1;
static int32_t x343 = INT32_MIN;
int64_t x350 = 414295089449415LL;
volatile int8_t x352 = -1;
int64_t t65 = -395128762379072LL;
int16_t x364 = -1;
int8_t x372 = -4;
int8_t x390 = INT8_MAX;
int8_t x400 = INT8_MAX;
volatile uint64_t t73 = 366785023LLU;
uint64_t x407 = UINT64_MAX;
uint64_t t74 = 432LLU;
int64_t x409 = -5950294330LL;
int64_t x411 = 1212LL;
volatile int8_t x421 = -1;
int64_t x422 = 263297179992LL;
int8_t x424 = 36;
int32_t t78 = 6129;
uint32_t t79 = 79103985U;
uint32_t t80 = 506U;
uint8_t x455 = 1U;
volatile uint64_t x462 = UINT64_MAX;
static int8_t x467 = INT8_MIN;
volatile uint64_t x468 = UINT64_MAX;
uint16_t x474 = UINT16_MAX;
static int16_t x480 = 219;
uint16_t x488 = 23U;
static int64_t x489 = 8689897886115584LL;
int32_t x490 = -1;
uint64_t t88 = 3346LLU;
static int8_t x516 = 59;
int8_t x522 = -1;
static uint8_t x523 = UINT8_MAX;
volatile uint16_t x527 = 24U;
uint8_t x532 = 3U;
int32_t x538 = INT32_MAX;
static volatile uint32_t t95 = 10792174U;
int8_t x552 = INT8_MIN;
uint64_t x556 = UINT64_MAX;
int32_t x561 = -1;
int32_t x564 = INT32_MAX;
volatile int8_t x565 = -1;
static volatile int8_t x569 = INT8_MIN;
volatile uint64_t t102 = 1LLU;
int32_t x578 = 1;
volatile int8_t x590 = 0;
volatile int8_t x591 = 46;
int32_t x598 = -10222;
volatile int64_t t107 = 742854860LL;
uint64_t x605 = UINT64_MAX;
int32_t x608 = INT32_MIN;
volatile uint64_t t110 = 619376780554286718LLU;
uint8_t x613 = 20U;
int8_t x614 = INT8_MAX;
int16_t x615 = -42;
uint64_t x624 = UINT64_MAX;
static volatile uint64_t x629 = 0LLU;
uint64_t x631 = UINT64_MAX;
int32_t x638 = INT32_MAX;
uint64_t x639 = UINT64_MAX;
static uint32_t x640 = 13U;
int32_t x651 = INT32_MIN;
volatile uint8_t x659 = 71U;
static int32_t t120 = -849328;
volatile uint8_t x666 = UINT8_MAX;
static volatile int32_t x683 = INT32_MIN;
static int8_t x689 = -9;
int8_t x690 = INT8_MAX;
volatile uint64_t t125 = 248657LLU;
static uint64_t x693 = UINT64_MAX;
static int64_t x698 = 10568817LL;
volatile int64_t x700 = INT64_MIN;
static int64_t x702 = INT64_MIN;
volatile int32_t x703 = -1;
int16_t x704 = INT16_MAX;
volatile uint16_t x705 = 11020U;
volatile int8_t x706 = -1;
int32_t x707 = -1;
volatile int32_t x720 = INT32_MIN;
uint16_t x735 = 302U;
volatile int16_t x738 = INT16_MAX;
int8_t x752 = 0;
volatile uint32_t x757 = UINT32_MAX;
uint64_t x759 = 1168450242342LLU;
uint64_t t138 = 955LLU;
volatile uint16_t x764 = 169U;
int32_t t139 = 29832;
int16_t x769 = INT16_MAX;
volatile uint32_t t140 = 14532558U;
volatile uint8_t x774 = UINT8_MAX;
int64_t t141 = 1038708991LL;
volatile uint64_t t142 = 121023LLU;
int8_t x782 = -1;
int64_t t144 = -646805175854410922LL;
uint8_t x800 = UINT8_MAX;
uint16_t x807 = 2U;
volatile uint64_t x808 = 7LLU;
int32_t x816 = -1;
static int8_t x830 = INT8_MAX;
int64_t x833 = -1LL;
uint64_t t152 = 276284502331024851LLU;
int8_t x842 = -1;
static uint32_t x868 = UINT32_MAX;
uint32_t x878 = 15820U;
static volatile int32_t x899 = INT32_MIN;
static int16_t x900 = INT16_MIN;
volatile uint32_t t164 = 526824937U;
int64_t x906 = INT64_MIN;
static int16_t x912 = 18;
static uint16_t x915 = 3416U;
volatile uint32_t t168 = 3710U;
int64_t x922 = -23557LL;
volatile uint16_t x927 = 682U;
static volatile uint64_t x930 = 21982144666317LLU;
static int64_t x938 = -4244903LL;
static volatile uint64_t t175 = 92LLU;
static int32_t x953 = 312;
int64_t x956 = 1076LL;
int64_t t177 = -27359721926534083LL;
static volatile int8_t x966 = INT8_MIN;
uint64_t x975 = 1292425537270792LLU;
volatile uint64_t t180 = 58543083385986538LLU;
int8_t x980 = INT8_MIN;
static int32_t x982 = INT32_MAX;
uint16_t x983 = UINT16_MAX;
int32_t x987 = 9;
static int8_t x988 = -59;
uint8_t x1005 = 1U;
volatile uint32_t t188 = 122U;
volatile int8_t x1021 = 2;
int16_t x1027 = INT16_MIN;
static uint64_t x1029 = UINT64_MAX;
int32_t x1045 = 879595982;
uint32_t x1051 = 38U;
volatile uint32_t t195 = 299U;
int16_t x1066 = INT16_MIN;
int16_t x1070 = -13;


void f0(void) {
    	uint16_t x9 = 2U;
	int32_t x10 = INT32_MIN;
	static volatile int16_t x11 = 110;
	static volatile int32_t t0 = 1;

    t0 = (((x9^x10)^x11)*x12);

    if (t0 != 2147483540) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x15 = INT64_MAX;
	uint32_t x16 = 3640565U;
	volatile uint64_t t1 = 7994481901852483LLU;

    t1 = (((x13^x14)^x15)*x16);

    if (t1 != 18154058843719081854LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x25 = -1LL;
	int16_t x27 = INT16_MIN;
	volatile int64_t t2 = 44668572690923744LL;

    t2 = (((x25^x26)^x27)*x28);

    if (t2 != -239682536027949LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x29 = INT32_MIN;
	uint8_t x30 = 16U;
	int16_t x31 = INT16_MAX;
	static int32_t t3 = 167767769;

    t3 = (((x29^x30)^x31)*x32);

    if (t3 != -2147450897) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x34 = 47U;
	static uint8_t x36 = 0U;

    t4 = (((x33^x34)^x35)*x36);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	uint32_t x39 = 3331296U;
	int64_t x40 = -1LL;

    t5 = (((x37^x38)^x39)*x40);

    if (t5 != -4291679456LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x49 = -1;
	int8_t x50 = INT8_MIN;
	volatile uint64_t x51 = 1778LLU;
	uint8_t x52 = UINT8_MAX;
	volatile uint64_t t6 = 7671959977994LLU;

    t6 = (((x49^x50)^x51)*x52);

    if (t6 != 427635LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x53 = UINT64_MAX;
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MAX;
	volatile uint64_t t7 = 16092514LLU;

    t7 = (((x53^x54)^x55)*x56);

    if (t7 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x57 = INT32_MIN;
	uint32_t x58 = UINT32_MAX;
	volatile uint8_t x60 = 20U;

    t8 = (((x57^x58)^x59)*x60);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MIN;
	static int8_t x63 = INT8_MAX;
	static volatile uint16_t x64 = 1U;
	static int32_t t9 = -7;

    t9 = (((x61^x62)^x63)*x64);

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x73 = 0U;
	int16_t x74 = -1;
	static int16_t x75 = INT16_MIN;
	int8_t x76 = 7;
	volatile uint32_t t10 = 34U;

    t10 = (((x73^x74)^x75)*x76);

    if (t10 != 229369U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x81 = 8U;
	volatile int8_t x82 = -40;
	int64_t x83 = -522LL;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t11 = -13110673LL;

    t11 = (((x81^x82)^x83)*x84);

    if (t11 != 140250LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x87 = -2;
	static int16_t x88 = INT16_MIN;
	static int64_t t12 = -4LL;

    t12 = (((x85^x86)^x87)*x88);

    if (t12 != 890279808019857408LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MAX;
	uint8_t x91 = 1U;
	int64_t x92 = -15689274682963558LL;
	int64_t t13 = 2LL;

    t13 = (((x89^x90)^x91)*x92);

    if (t13 != 31378549365927116LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x94 = INT8_MAX;
	uint64_t x96 = 83247LLU;

    t14 = (((x93^x94)^x95)*x96);

    if (t14 != 178771560589440LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x97 = 1701174185LLU;
	uint16_t x98 = 15U;
	volatile int32_t x99 = -16;
	uint64_t x100 = 185424977593138239LLU;
	volatile uint64_t t15 = 7911012413545382LLU;

    t15 = (((x97^x98)^x99)*x100);

    if (t15 != 5336329614066227498LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x101 = 0;
	int8_t x102 = -11;
	int64_t x104 = 356785LL;
	volatile int64_t t16 = -53821LL;

    t16 = (((x101^x102)^x103)*x104);

    if (t16 != -325744705LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MAX;
	int8_t x108 = -1;
	volatile int64_t t17 = 2085693239510786LL;

    t17 = (((x105^x106)^x107)*x108);

    if (t17 != -2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x109 = 127821420300LLU;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	uint32_t x112 = UINT32_MAX;
	static volatile uint64_t t18 = 497347914528301700LLU;

    t18 = (((x109^x110)^x111)*x112);

    if (t18 != 14033242347156793485LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x113 = 1308546U;
	uint32_t x114 = UINT32_MAX;
	uint64_t x116 = 506919110099LLU;

    t19 = (((x113^x114)^x115)*x116);

    if (t19 != 905926421294221862LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x119 = -1;
	static int32_t x120 = -1;

    t20 = (((x117^x118)^x119)*x120);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x126 = 1U;
	int16_t x127 = INT16_MIN;
	int32_t x128 = -1;

    t21 = (((x125^x126)^x127)*x128);

    if (t21 != -32765) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x130 = 22U;
	uint64_t x131 = 7LLU;
	static int64_t x132 = INT64_MIN;
	volatile uint64_t t22 = 2036129277LLU;

    t22 = (((x129^x130)^x131)*x132);

    if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x134 = INT8_MIN;
	int16_t x136 = -1243;

    t23 = (((x133^x134)^x135)*x136);

    if (t23 != -40729381) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x141 = 26684403185139LLU;
	volatile uint32_t x142 = 37904U;
	uint8_t x143 = UINT8_MAX;
	static int64_t x144 = INT64_MIN;
	volatile uint64_t t24 = 14918536176245LLU;

    t24 = (((x141^x142)^x143)*x144);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x149 = UINT64_MAX;
	static volatile uint16_t x150 = UINT16_MAX;
	uint32_t x151 = 3780U;
	volatile int64_t x152 = -1LL;
	volatile uint64_t t25 = 252124772805LLU;

    t25 = (((x149^x150)^x151)*x152);

    if (t25 != 61756LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x153 = UINT64_MAX;
	volatile uint8_t x154 = 103U;
	volatile int64_t x155 = INT64_MIN;
	static int64_t x156 = INT64_MIN;
	uint64_t t26 = 3471LLU;

    t26 = (((x153^x154)^x155)*x156);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x169 = INT16_MAX;
	volatile uint64_t x170 = 124LLU;
	volatile int16_t x171 = INT16_MIN;
	uint32_t x172 = 54U;
	volatile uint64_t t27 = 8033911LLU;

    t27 = (((x169^x170)^x171)*x172);

    if (t27 != 18446744073709544866LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x174 = 3U;
	volatile int8_t x175 = -1;
	int8_t x176 = INT8_MAX;
	volatile uint32_t t28 = 11139678U;

    t28 = (((x173^x174)^x175)*x176);

    if (t28 != 4283464779U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x181 = 1;
	volatile int8_t x182 = 0;
	uint32_t x183 = 4U;
	volatile int16_t x184 = 14;
	volatile uint32_t t29 = 174U;

    t29 = (((x181^x182)^x183)*x184);

    if (t29 != 70U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x185 = -1;
	uint16_t x186 = 1010U;
	uint32_t x187 = UINT32_MAX;
	volatile uint32_t t30 = 966611U;

    t30 = (((x185^x186)^x187)*x188);

    if (t30 != 4294966286U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x189 = INT32_MAX;
	static int32_t x190 = -1;
	int8_t x192 = -1;
	int32_t t31 = -3423340;

    t31 = (((x189^x190)^x191)*x192);

    if (t31 != 2147473054) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x195 = 3574LLU;
	static volatile uint64_t x196 = 3LLU;
	volatile uint64_t t32 = 2LLU;

    t32 = (((x193^x194)^x195)*x196);

    if (t32 != 87906LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x197 = -1;
	volatile uint32_t x198 = UINT32_MAX;
	uint16_t x199 = 0U;
	uint64_t x200 = 10585969988913659LLU;
	static volatile uint64_t t33 = 23417450LLU;

    t33 = (((x197^x198)^x199)*x200);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x201 = INT8_MIN;
	uint8_t x202 = UINT8_MAX;
	int16_t x204 = 41;

    t34 = (((x201^x202)^x203)*x204);

    if (t34 != 10455) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x206 = 29783U;
	uint8_t x207 = 0U;
	volatile int32_t x208 = INT32_MAX;
	uint64_t t35 = 434891222LLU;

    t35 = (((x205^x206)^x207)*x208);

    if (t35 != 18446680113056609368LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x209 = INT64_MAX;
	uint8_t x211 = 43U;
	volatile int8_t x212 = -1;
	int64_t t36 = 8723475339309LL;

    t36 = (((x209^x210)^x211)*x212);

    if (t36 != -9223372032559808555LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x217 = UINT32_MAX;
	static uint32_t x218 = 101U;
	volatile uint64_t t37 = 395LLU;

    t37 = (((x217^x218)^x219)*x220);

    if (t37 != 18446744073709518950LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x221 = 183532U;
	static uint64_t x223 = UINT64_MAX;
	uint8_t x224 = UINT8_MAX;
	volatile uint64_t t38 = 752959843637LLU;

    t38 = (((x221^x222)^x223)*x224);

    if (t38 != 18446744073662589541LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x226 = 5U;
	int16_t x228 = 454;
	int32_t t39 = -28663;

    t39 = (((x225^x226)^x227)*x228);

    if (t39 != 3347342) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x233 = 1437626913296102633LL;
	static uint32_t x235 = 0U;
	uint64_t x236 = 46095983733LLU;

    t40 = (((x233^x234)^x235)*x236);

    if (t40 != 4760219117052721917LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x249 = INT32_MIN;
	static int8_t x250 = INT8_MIN;
	static int32_t x251 = INT32_MAX;
	uint8_t x252 = 96U;
	volatile int32_t t41 = 540998;

    t41 = (((x249^x250)^x251)*x252);

    if (t41 != 12192) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x253 = 57613586U;
	volatile int64_t x254 = -91LL;
	int16_t x256 = -1;
	volatile int64_t t42 = -173717157LL;

    t42 = (((x253^x254)^x255)*x256);

    if (t42 != 57613642LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MIN;
	static int16_t x260 = 0;
	int32_t t43 = -553839713;

    t43 = (((x257^x258)^x259)*x260);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x261 = -1LL;
	static int8_t x262 = 2;
	int32_t x263 = -1;

    t44 = (((x261^x262)^x263)*x264);

    if (t44 != -4294967296LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x269 = 20051140251195859LLU;
	int32_t x271 = INT32_MAX;
	uint8_t x272 = 1U;

    t45 = (((x269^x270)^x271)*x272);

    if (t45 != 20051139042764326LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x273 = 802214602498LLU;
	int32_t x275 = -253925;
	static uint32_t x276 = UINT32_MAX;
	volatile uint64_t t46 = 120353403232LLU;

    t46 = (((x273^x274)^x275)*x276);

    if (t46 != 14390329205123139354LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x277 = 6079698351909845LL;
	uint64_t x278 = UINT64_MAX;
	int32_t x279 = 256725;
	static int64_t x280 = -393163950441LL;
	volatile uint64_t t47 = 272232425472526LLU;

    t47 = (((x277^x278)^x279)*x280);

    if (t47 != 7959063238157251177LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x282 = -1LL;
	volatile int64_t t48 = 1254LL;

    t48 = (((x281^x282)^x283)*x284);

    if (t48 != 96822LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x285 = INT32_MIN;
	int64_t x286 = 59458337279695LL;
	static int64_t x287 = -15LL;
	int64_t t49 = 14185562LL;

    t49 = (((x285^x286)^x287)*x288);

    if (t49 != -594585697283180LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x289 = INT16_MIN;
	int64_t x290 = -1LL;
	static int64_t x291 = 6LL;
	volatile int64_t t50 = -6638625540392LL;

    t50 = (((x289^x290)^x291)*x292);

    if (t50 != 140707423551495LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x293 = INT64_MIN;
	volatile int8_t x295 = INT8_MIN;
	volatile uint64_t t51 = 3282LLU;

    t51 = (((x293^x294)^x295)*x296);

    if (t51 != 8057072102481887232LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x297 = 159U;
	volatile int64_t x298 = -7781551844490LL;
	int32_t x299 = 166208327;
	volatile uint16_t x300 = 1U;
	int64_t t52 = 152958877449LL;

    t52 = (((x297^x298)^x299)*x300);

    if (t52 != -7781428629330LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x301 = INT32_MAX;
	int32_t x302 = INT32_MIN;
	static int8_t x303 = INT8_MIN;
	static uint8_t x304 = 2U;
	volatile int32_t t53 = -504680;

    t53 = (((x301^x302)^x303)*x304);

    if (t53 != 254) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x305 = 0;
	uint64_t x306 = 304930539177795LLU;
	int8_t x307 = 26;
	int32_t x308 = -38;
	uint64_t t54 = 0LLU;

    t54 = (((x305^x306)^x307)*x308);

    if (t54 != 18435156713220794570LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x309 = 17;
	int16_t x310 = 655;
	int8_t x311 = 4;
	uint8_t x312 = 55U;

    t55 = (((x309^x310)^x311)*x312);

    if (t55 != 36630) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x314 = -1;
	int8_t x315 = INT8_MIN;
	int64_t t56 = -2309212715LL;

    t56 = (((x313^x314)^x315)*x316);

    if (t56 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x321 = 1U;
	uint8_t x322 = UINT8_MAX;
	uint16_t x323 = 7U;
	static volatile int8_t x324 = INT8_MIN;
	volatile int32_t t57 = 16584;

    t57 = (((x321^x322)^x323)*x324);

    if (t57 != -31872) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x327 = INT16_MIN;
	int64_t x328 = 5582539LL;
	static int64_t t58 = 1LL;

    t58 = (((x325^x326)^x327)*x328);

    if (t58 != 162524457907LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x329 = 39;
	int8_t x330 = INT8_MAX;
	int64_t x331 = -24742198LL;
	uint16_t x332 = 1U;
	volatile int64_t t59 = 6738420LL;

    t59 = (((x329^x330)^x331)*x332);

    if (t59 != -24742254LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x334 = -10;
	volatile int8_t x336 = -1;
	volatile int32_t t60 = -40601855;

    t60 = (((x333^x334)^x335)*x336);

    if (t60 != 32759) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x337 = -482182126;
	uint32_t x338 = UINT32_MAX;
	int8_t x340 = -48;
	volatile uint64_t t61 = 123992628896868LLU;

    t61 = (((x337^x338)^x339)*x340);

    if (t61 != 18446744066944326160LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x342 = UINT64_MAX;
	int64_t x344 = -17200786558180LL;
	volatile uint64_t t62 = 1070549639LLU;

    t62 = (((x341^x342)^x343)*x344);

    if (t62 != 8026230863228305408LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x345 = INT8_MIN;
	int8_t x346 = 0;
	uint16_t x347 = 13885U;
	int32_t x348 = -1;
	volatile int32_t t63 = 169;

    t63 = (((x345^x346)^x347)*x348);

    if (t63 != 13891) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x349 = 1;
	int32_t x351 = INT32_MIN;
	int64_t t64 = 672655234202LL;

    t64 = (((x349^x350)^x351)*x352);

    if (t64 != 414296443745850LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x357 = INT32_MAX;
	uint32_t x358 = 35289U;
	int64_t x359 = -599898429LL;
	static uint32_t x360 = 31953U;

    t65 = (((x357^x358)^x359)*x360);

    if (t65 != -49451105790219LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x361 = INT32_MIN;
	volatile int64_t x362 = -1LL;
	static uint16_t x363 = UINT16_MAX;
	static int64_t t66 = -35LL;

    t66 = (((x361^x362)^x363)*x364);

    if (t66 != -2147418112LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x365 = INT16_MIN;
	static uint16_t x366 = UINT16_MAX;
	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t67 = 84982193;

    t67 = (((x365^x366)^x367)*x368);

    if (t67 != -2147450880) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x369 = 20;
	uint64_t x370 = UINT64_MAX;
	static uint64_t x371 = UINT64_MAX;
	volatile uint64_t t68 = 5LLU;

    t68 = (((x369^x370)^x371)*x372);

    if (t68 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x373 = 1;
	static uint32_t x374 = 3U;
	int32_t x375 = -1;
	uint32_t x376 = 726337U;
	uint32_t t69 = 1304017U;

    t69 = (((x373^x374)^x375)*x376);

    if (t69 != 4292788285U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x377 = 26;
	int64_t x378 = INT64_MIN;
	volatile int64_t x379 = INT64_MAX;
	static int8_t x380 = 10;
	int64_t t70 = 6143794975387042LL;

    t70 = (((x377^x378)^x379)*x380);

    if (t70 != -270LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x381 = UINT32_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	uint8_t x383 = 0U;
	int32_t x384 = INT32_MAX;
	uint64_t t71 = 12686LLU;

    t71 = (((x381^x382)^x383)*x384);

    if (t71 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x389 = 7470261884489064157LLU;
	static int16_t x391 = 1396;
	static uint16_t x392 = UINT16_MAX;
	volatile uint64_t t72 = 84699LLU;

    t72 = (((x389^x390)^x391)*x392);

    if (t72 != 5471627812978402346LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x397 = 268383U;
	volatile uint8_t x398 = 61U;
	volatile uint64_t x399 = 413572859300596194LLU;

    t73 = (((x397^x398)^x399)*x400);

    if (t73 != 15630264983790153344LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x405 = -1;
	int8_t x406 = INT8_MIN;
	int32_t x408 = -3;

    t74 = (((x405^x406)^x407)*x408);

    if (t74 != 384LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x410 = 1U;
	int64_t x412 = -1LL;
	static int64_t t75 = -2189565116710LL;

    t75 = (((x409^x410)^x411)*x412);

    if (t75 != 5950295429LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x413 = -1;
	volatile int64_t x414 = -248626074LL;
	int32_t x415 = 1;
	int8_t x416 = -1;
	static int64_t t76 = 21064511887LL;

    t76 = (((x413^x414)^x415)*x416);

    if (t76 != -248626072LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x423 = 197U;
	int64_t t77 = -749LL;

    t77 = (((x421^x422)^x423)*x424);

    if (t77 != -9478698482232LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x425 = UINT8_MAX;
	static uint8_t x426 = 1U;
	uint8_t x427 = 102U;
	int16_t x428 = INT16_MIN;

    t78 = (((x425^x426)^x427)*x428);

    if (t78 != -4980736) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x437 = 1U;
	int16_t x438 = -8411;
	volatile int16_t x439 = -1;
	static int32_t x440 = INT32_MIN;

    t79 = (((x437^x438)^x439)*x440);

    if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x445 = UINT32_MAX;
	int8_t x446 = -1;
	int16_t x447 = INT16_MAX;
	volatile uint16_t x448 = UINT16_MAX;

    t80 = (((x445^x446)^x447)*x448);

    if (t80 != 2147385345U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x449 = INT64_MIN;
	uint16_t x450 = UINT16_MAX;
	uint64_t x451 = 35225722039000423LLU;
	volatile int16_t x452 = 3402;
	uint64_t t81 = 84081552540LLU;

    t81 = (((x449^x450)^x451)*x452);

    if (t81 != 9157441934482388976LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x453 = INT32_MIN;
	uint64_t x454 = 78434599940471LLU;
	int32_t x456 = 340493222;
	uint64_t t82 = 2766499LLU;

    t82 = (((x453^x454)^x455)*x456);

    if (t82 != 5103763809705555076LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x461 = 12U;
	static int16_t x463 = INT16_MIN;
	static int8_t x464 = INT8_MAX;
	volatile uint64_t t83 = 97217697326LLU;

    t83 = (((x461^x462)^x463)*x464);

    if (t83 != 4159885LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x465 = INT8_MIN;
	uint16_t x466 = 3185U;
	uint64_t t84 = 14503LLU;

    t84 = (((x465^x466)^x467)*x468);

    if (t84 != 18446744073709548431LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	volatile int16_t x475 = INT16_MAX;
	int8_t x476 = INT8_MIN;
	static uint64_t t85 = 13573166LLU;

    t85 = (((x473^x474)^x475)*x476);

    if (t85 != 4194432LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x477 = 1U;
	uint32_t x478 = 16017U;
	int8_t x479 = -1;
	uint32_t t86 = 8U;

    t86 = (((x477^x478)^x479)*x480);

    if (t86 != 4291459573U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x485 = -26;
	int8_t x486 = 1;
	static uint16_t x487 = 664U;
	int32_t t87 = -1;

    t87 = (((x485^x486)^x487)*x488);

    if (t87 != -14743) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x491 = 146LLU;
	uint16_t x492 = UINT16_MAX;

    t88 = (((x489^x490)^x491)*x492);

    if (t88 != 2356608318401669011LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x493 = INT8_MIN;
	int8_t x494 = -1;
	volatile int64_t x495 = INT64_MAX;
	static int64_t x496 = -1LL;
	static int64_t t89 = 3088398571860586LL;

    t89 = (((x493^x494)^x495)*x496);

    if (t89 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x501 = 23U;
	uint8_t x502 = 36U;
	volatile int8_t x503 = INT8_MIN;
	static volatile int8_t x504 = INT8_MIN;
	volatile int32_t t90 = 73;

    t90 = (((x501^x502)^x503)*x504);

    if (t90 != 9856) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x513 = INT16_MIN;
	static int16_t x514 = INT16_MAX;
	int16_t x515 = -31;
	int32_t t91 = 49768659;

    t91 = (((x513^x514)^x515)*x516);

    if (t91 != 1770) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x521 = INT64_MAX;
	int16_t x524 = -1;
	int64_t t92 = -27057409LL;

    t92 = (((x521^x522)^x523)*x524);

    if (t92 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x525 = -1LL;
	volatile int16_t x526 = INT16_MIN;
	int16_t x528 = -1;
	volatile int64_t t93 = 384829567423LL;

    t93 = (((x525^x526)^x527)*x528);

    if (t93 != -32743LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x529 = 159LLU;
	static int64_t x530 = -1349231660LL;
	volatile int64_t x531 = 8008LL;
	uint64_t t94 = 117623212287LLU;

    t94 = (((x529^x530)^x531)*x532);

    if (t94 != 18446744069661838345LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x537 = 6415901U;
	int16_t x539 = INT16_MIN;
	static int8_t x540 = -1;

    t95 = (((x537^x538)^x539)*x540);

    if (t95 != 2141087262U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x541 = UINT8_MAX;
	uint8_t x542 = UINT8_MAX;
	int8_t x543 = INT8_MIN;
	int16_t x544 = INT16_MIN;
	volatile int32_t t96 = -2;

    t96 = (((x541^x542)^x543)*x544);

    if (t96 != 4194304) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x549 = 4U;
	uint64_t x550 = UINT64_MAX;
	static int64_t x551 = -1LL;
	static uint64_t t97 = 13770086384LLU;

    t97 = (((x549^x550)^x551)*x552);

    if (t97 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x553 = 26LL;
	uint16_t x554 = UINT16_MAX;
	int8_t x555 = -1;
	uint64_t t98 = 1501042057420LLU;

    t98 = (((x553^x554)^x555)*x556);

    if (t98 != 65510LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x557 = 109704564LL;
	volatile int32_t x558 = INT32_MAX;
	static uint8_t x559 = 6U;
	uint16_t x560 = 0U;
	int64_t t99 = -6210234606149LL;

    t99 = (((x557^x558)^x559)*x560);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x562 = 1;
	volatile uint32_t x563 = 6818U;
	uint32_t t100 = 153300065U;

    t100 = (((x561^x562)^x563)*x564);

    if (t100 != 6820U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x566 = INT8_MAX;
	volatile int64_t x567 = 63LL;
	int8_t x568 = -1;
	int64_t t101 = 140094110731191043LL;

    t101 = (((x565^x566)^x567)*x568);

    if (t101 != 65LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x570 = -20;
	int64_t x571 = -1LL;
	volatile uint64_t x572 = 11456800260176LLU;

    t102 = (((x569^x570)^x571)*x572);

    if (t102 != 18445495282481192432LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x573 = UINT16_MAX;
	int16_t x574 = -1;
	uint32_t x575 = 238107247U;
	uint64_t x576 = 8LLU;
	static uint64_t t103 = 210477916411194LLU;

    t103 = (((x573^x574)^x575)*x576);

    if (t103 != 32454595448LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x577 = INT8_MAX;
	static int16_t x579 = -1;
	int32_t x580 = -342330;
	int32_t t104 = -572482158;

    t104 = (((x577^x578)^x579)*x580);

    if (t104 != 43475910) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x585 = UINT64_MAX;
	uint32_t x586 = 7674U;
	int8_t x587 = -1;
	static volatile int64_t x588 = -14115311LL;
	uint64_t t105 = 422266LLU;

    t105 = (((x585^x586)^x587)*x588);

    if (t105 != 18446743965388655002LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x589 = UINT64_MAX;
	uint16_t x592 = 2U;
	volatile uint64_t t106 = 48426100563LLU;

    t106 = (((x589^x590)^x591)*x592);

    if (t106 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x597 = INT8_MIN;
	int64_t x599 = INT64_MIN;
	int8_t x600 = -1;

    t107 = (((x597^x598)^x599)*x600);

    if (t107 != 9223372036854765678LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x601 = INT8_MIN;
	uint16_t x602 = 29U;
	uint64_t x603 = 75490LLU;
	int16_t x604 = 0;
	volatile uint64_t t108 = 1657084429307725LLU;

    t108 = (((x601^x602)^x603)*x604);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x606 = -10;
	uint8_t x607 = UINT8_MAX;
	uint64_t t109 = 2LLU;

    t109 = (((x605^x606)^x607)*x608);

    if (t109 != 18446743545428574208LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x609 = 114164259756739702LLU;
	uint64_t x610 = UINT64_MAX;
	volatile int32_t x611 = 474209117;
	uint16_t x612 = UINT16_MAX;

    t110 = (((x609^x610)^x611)*x612);

    if (t110 != 7623344224962828076LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x616 = 25758930632LLU;
	volatile uint64_t t111 = 14400082LLU;

    t111 = (((x613^x614)^x615)*x616);

    if (t111 != 18446742347861199272LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x617 = 6;
	volatile uint32_t x618 = 1U;
	uint32_t x619 = 651U;
	uint64_t x620 = 194796LLU;
	static volatile uint64_t t112 = 12899LLU;

    t112 = (((x617^x618)^x619)*x620);

    if (t112 != 127006992LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x621 = 2169726573756681LLU;
	static int64_t x622 = INT64_MIN;
	uint32_t x623 = 6996U;
	uint64_t t113 = 2094188000271LLU;

    t113 = (((x621^x622)^x623)*x624);

    if (t113 != 9221202310281012643LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x625 = -1;
	volatile uint64_t x626 = 5426878799647LLU;
	uint16_t x627 = 1742U;
	static volatile int64_t x628 = INT64_MAX;
	uint64_t t114 = 1987669009624916315LLU;

    t114 = (((x625^x626)^x627)*x628);

    if (t114 != 5426878798290LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x630 = 60U;
	int64_t x632 = INT64_MIN;
	volatile uint64_t t115 = 3091332269369LLU;

    t115 = (((x629^x630)^x631)*x632);

    if (t115 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x637 = 13355LL;
	uint64_t t116 = 56648749LLU;

    t116 = (((x637^x638)^x639)*x640);

    if (t116 != 18446744045792437807LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x645 = INT16_MIN;
	int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MAX;
	volatile int16_t x648 = -1;
	volatile int64_t t117 = 68451075973000603LL;

    t117 = (((x645^x646)^x647)*x648);

    if (t117 != -32767LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x649 = INT32_MAX;
	uint64_t x650 = 882924138075013LLU;
	volatile uint32_t x652 = 6U;
	volatile uint64_t t118 = 171675987910LLU;

    t118 = (((x649^x650)^x651)*x652);

    if (t118 != 18441446528881101532LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x653 = INT32_MIN;
	int64_t x654 = 3858122897753LL;
	volatile int8_t x655 = 1;
	int8_t x656 = -1;
	volatile int64_t t119 = -946104515558LL;

    t119 = (((x653^x654)^x655)*x656);

    if (t119 != 3857785849512LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x657 = INT8_MIN;
	int8_t x658 = -52;
	uint8_t x660 = 17U;

    t120 = (((x657^x658)^x659)*x660);

    if (t120 != 187) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x665 = 4207499358386427LLU;
	uint16_t x667 = 2U;
	int64_t x668 = INT64_MIN;
	uint64_t t121 = 6998632469864LLU;

    t121 = (((x665^x666)^x667)*x668);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x669 = INT8_MAX;
	volatile int16_t x670 = 14645;
	int64_t x671 = 75637LL;
	static int8_t x672 = INT8_MIN;
	int64_t t122 = -30314911213291LL;

    t122 = (((x669^x670)^x671)*x672);

    if (t122 != -9379712LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x681 = -1LL;
	int32_t x682 = -1;
	int16_t x684 = 2050;
	static volatile int64_t t123 = -1904393458LL;

    t123 = (((x681^x682)^x683)*x684);

    if (t123 != -4402341478400LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x685 = 5771010247LLU;
	int8_t x686 = INT8_MAX;
	int64_t x687 = 3707612346LL;
	uint64_t x688 = 325614251026839LLU;
	volatile uint64_t t124 = 176023394976007656LLU;

    t124 = (((x685^x686)^x687)*x688);

    if (t124 != 3767415605206738734LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x691 = 138189526584405949LLU;
	int16_t x692 = 77;

    t125 = (((x689^x690)^x691)*x692);

    if (t125 != 7806150526710292465LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x694 = -106;
	volatile int64_t x695 = 223LL;
	int16_t x696 = 1;
	uint64_t t126 = 1788770LLU;

    t126 = (((x693^x694)^x695)*x696);

    if (t126 != 182LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x697 = 60824073669LLU;
	int16_t x699 = INT16_MIN;
	static uint64_t t127 = 1679222379644LLU;

    t127 = (((x697^x698)^x699)*x700);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x701 = UINT64_MAX;
	uint64_t t128 = 1676575LLU;

    t128 = (((x701^x702)^x703)*x704);

    if (t128 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x708 = INT16_MAX;
	volatile int32_t t129 = -6799604;

    t129 = (((x705^x706)^x707)*x708);

    if (t129 != 361092340) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x717 = INT32_MAX;
	int8_t x718 = 4;
	uint32_t x719 = UINT32_MAX;
	uint32_t t130 = 12U;

    t130 = (((x717^x718)^x719)*x720);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x721 = UINT32_MAX;
	int32_t x722 = 15;
	static volatile uint8_t x723 = 14U;
	uint16_t x724 = 4405U;
	uint32_t t131 = 0U;

    t131 = (((x721^x722)^x723)*x724);

    if (t131 != 4294958486U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x725 = -1LL;
	int64_t x726 = INT64_MIN;
	int64_t x727 = INT64_MAX;
	int64_t x728 = INT64_MAX;
	static int64_t t132 = -6380231LL;

    t132 = (((x725^x726)^x727)*x728);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x729 = -1LL;
	static int8_t x730 = INT8_MIN;
	static int64_t x731 = 3LL;
	int8_t x732 = INT8_MIN;
	volatile int64_t t133 = -948150528LL;

    t133 = (((x729^x730)^x731)*x732);

    if (t133 != -15872LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x733 = 1346U;
	uint32_t x734 = 434265U;
	int32_t x736 = INT32_MAX;
	static uint32_t t134 = 42U;

    t134 = (((x733^x734)^x735)*x736);

    if (t134 != 2147048395U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x737 = INT16_MIN;
	int16_t x739 = INT16_MAX;
	int64_t x740 = 323846634061LL;
	int64_t t135 = -17262LL;

    t135 = (((x737^x738)^x739)*x740);

    if (t135 != -10611806504910848LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x745 = UINT32_MAX;
	int8_t x746 = INT8_MAX;
	uint32_t x747 = 10U;
	int16_t x748 = INT16_MIN;
	uint32_t t136 = 4467U;

    t136 = (((x745^x746)^x747)*x748);

    if (t136 != 3866624U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x749 = UINT8_MAX;
	static int8_t x750 = -1;
	int8_t x751 = -1;
	volatile int32_t t137 = 932117;

    t137 = (((x749^x750)^x751)*x752);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x758 = 12297;
	static int32_t x760 = INT32_MAX;

    t138 = (((x757^x758)^x759)*x760);

    if (t138 != 8752749548210747184LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x761 = -5754;
	int8_t x762 = -1;
	int8_t x763 = -1;

    t139 = (((x761^x762)^x763)*x764);

    if (t139 != -972426) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x770 = 51193U;
	int16_t x771 = -1401;
	int16_t x772 = -1;

    t140 = (((x769^x770)^x771)*x772);

    if (t140 != 48511U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x773 = 18U;
	uint16_t x775 = 11642U;
	int64_t x776 = 1711351695LL;

    t141 = (((x773^x774)^x775)*x776);

    if (t141 != 19973185632345LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x777 = 17U;
	volatile int64_t x778 = 366579173722LL;
	static int8_t x779 = -50;
	static uint64_t x780 = 78361410518514LLU;

    t142 = (((x777^x778)^x779)*x780);

    if (t142 != 14577796907136170682LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x781 = -36;
	volatile int32_t x783 = INT32_MIN;
	int64_t x784 = -1LL;
	volatile int64_t t143 = -4300LL;

    t143 = (((x781^x782)^x783)*x784);

    if (t143 != 2147483613LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x785 = INT32_MAX;
	int64_t x786 = -873342735LL;
	volatile int32_t x787 = -1;
	static int8_t x788 = 1;

    t144 = (((x785^x786)^x787)*x788);

    if (t144 != 1274140913LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x789 = UINT64_MAX;
	int16_t x790 = INT16_MIN;
	static int64_t x791 = INT64_MIN;
	static int64_t x792 = INT64_MAX;
	volatile uint64_t t145 = 306821034878LLU;

    t145 = (((x789^x790)^x791)*x792);

    if (t145 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x797 = UINT16_MAX;
	uint64_t x798 = UINT64_MAX;
	volatile uint8_t x799 = UINT8_MAX;
	uint64_t t146 = 4310719517137LLU;

    t146 = (((x797^x798)^x799)*x800);

    if (t146 != 18446744073692904961LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x805 = -884409071LL;
	int8_t x806 = -6;
	volatile uint64_t t147 = 24984850210153LLU;

    t147 = (((x805^x806)^x807)*x808);

    if (t147 != 6190863455LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x813 = -1LL;
	static volatile int8_t x814 = INT8_MAX;
	static uint32_t x815 = UINT32_MAX;
	volatile int64_t t148 = 735780086873144530LL;

    t148 = (((x813^x814)^x815)*x816);

    if (t148 != 4294967169LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x817 = 112215351374LLU;
	static uint32_t x818 = UINT32_MAX;
	uint32_t x819 = 12U;
	static uint32_t x820 = 1U;
	uint64_t t149 = 417580839924LLU;

    t149 = (((x817^x818)^x819)*x820);

    if (t149 != 115417915325LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x829 = UINT32_MAX;
	static uint8_t x831 = 53U;
	int32_t x832 = -1;
	uint32_t t150 = 34U;

    t150 = (((x829^x830)^x831)*x832);

    if (t150 != 75U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x834 = INT32_MAX;
	static int32_t x835 = -1;
	static int32_t x836 = INT32_MAX;
	volatile int64_t t151 = 129418888284714600LL;

    t151 = (((x833^x834)^x835)*x836);

    if (t151 != 4611686014132420609LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x837 = INT8_MIN;
	volatile int32_t x838 = -62;
	static volatile uint64_t x839 = 2LLU;
	uint64_t x840 = UINT64_MAX;

    t152 = (((x837^x838)^x839)*x840);

    if (t152 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x841 = -1;
	int16_t x843 = -1;
	uint64_t x844 = UINT64_MAX;
	uint64_t t153 = 228712LLU;

    t153 = (((x841^x842)^x843)*x844);

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x845 = UINT8_MAX;
	uint8_t x846 = 14U;
	static uint8_t x847 = UINT8_MAX;
	uint64_t x848 = 60360432LLU;
	static volatile uint64_t t154 = 44626667542328LLU;

    t154 = (((x845^x846)^x847)*x848);

    if (t154 != 845046048LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x849 = INT8_MIN;
	int16_t x850 = INT16_MAX;
	uint8_t x851 = UINT8_MAX;
	int8_t x852 = INT8_MIN;
	volatile int32_t t155 = 37209;

    t155 = (((x849^x850)^x851)*x852);

    if (t155 != 4177920) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x853 = 0;
	int64_t x854 = INT64_MIN;
	static int64_t x855 = INT64_MIN;
	int16_t x856 = -367;
	static volatile int64_t t156 = -13LL;

    t156 = (((x853^x854)^x855)*x856);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x865 = INT16_MAX;
	static volatile uint64_t x866 = UINT64_MAX;
	static int16_t x867 = -1;
	static volatile uint64_t t157 = 10907655035141220LLU;

    t157 = (((x865^x866)^x867)*x868);

    if (t157 != 140733193355265LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x873 = -1LL;
	int16_t x874 = INT16_MIN;
	int32_t x875 = -1;
	volatile int8_t x876 = -1;
	static volatile int64_t t158 = -1519374278484269566LL;

    t158 = (((x873^x874)^x875)*x876);

    if (t158 != 32768LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x877 = INT8_MIN;
	int16_t x879 = 2;
	uint32_t x880 = 6U;
	static volatile uint32_t t159 = 7265U;

    t159 = (((x877^x878)^x879)*x880);

    if (t159 != 4294872532U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x885 = INT32_MIN;
	int32_t x886 = INT32_MIN;
	static volatile int8_t x887 = INT8_MIN;
	volatile uint16_t x888 = 21621U;
	int32_t t160 = -16;

    t160 = (((x885^x886)^x887)*x888);

    if (t160 != -2767488) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x889 = 0;
	int64_t x890 = 36014814139LL;
	volatile int16_t x891 = -9768;
	uint64_t x892 = UINT64_MAX;
	uint64_t t161 = 84266781096LLU;

    t161 = (((x889^x890)^x891)*x892);

    if (t161 != 36014806429LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x893 = 142U;
	uint64_t x894 = 11582LLU;
	int8_t x895 = INT8_MIN;
	int64_t x896 = -1LL;
	volatile uint64_t t162 = 4248085663060LLU;

    t162 = (((x893^x894)^x895)*x896);

    if (t162 != 11728LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x897 = 2U;
	uint64_t x898 = 96054465992555563LLU;
	static volatile uint64_t t163 = 77793878LLU;

    t163 = (((x897^x898)^x899)*x900);

    if (t163 != 11566279266319171584LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x901 = 3U;
	int32_t x902 = INT32_MIN;
	int16_t x903 = -3;
	int32_t x904 = INT32_MIN;

    t164 = (((x901^x902)^x903)*x904);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x905 = INT64_MIN;
	uint16_t x907 = 80U;
	int8_t x908 = -6;
	static volatile int64_t t165 = -451313LL;

    t165 = (((x905^x906)^x907)*x908);

    if (t165 != -480LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x909 = 61U;
	volatile uint32_t x910 = 11U;
	int8_t x911 = -3;
	uint32_t t166 = 2U;

    t166 = (((x909^x910)^x911)*x912);

    if (t166 != 4294966342U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x913 = 124366417525795632LLU;
	int8_t x914 = -12;
	uint8_t x916 = 1U;
	volatile uint64_t t167 = 5077560786458231LLU;

    t167 = (((x913^x914)^x915)*x916);

    if (t167 != 18322377656183757212LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x917 = 1;
	static uint8_t x918 = 8U;
	uint32_t x919 = 214602275U;
	int32_t x920 = INT32_MIN;

    t168 = (((x917^x918)^x919)*x920);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x921 = UINT16_MAX;
	volatile uint8_t x923 = 7U;
	int8_t x924 = INT8_MAX;
	int64_t t169 = -115786369985119054LL;

    t169 = (((x921^x922)^x923)*x924);

    if (t169 != -5331587LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x925 = -15;
	uint32_t x926 = 82379U;
	int32_t x928 = INT32_MIN;
	volatile uint32_t t170 = 120U;

    t170 = (((x925^x926)^x927)*x928);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x929 = -1;
	volatile int64_t x931 = -3480LL;
	int32_t x932 = -1;
	static uint64_t t171 = 1751331868837LLU;

    t171 = (((x929^x930)^x931)*x932);

    if (t171 != 18446722091564886182LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x933 = -1LL;
	int32_t x934 = INT32_MIN;
	int32_t x935 = INT32_MIN;
	int16_t x936 = 1;
	static int64_t t172 = 2132954980665195LL;

    t172 = (((x933^x934)^x935)*x936);

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x937 = -16304;
	uint16_t x939 = 22U;
	volatile int16_t x940 = -193;
	int64_t t173 = 290775281338706277LL;

    t173 = (((x937^x938)^x939)*x940);

    if (t173 != -821858655LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x941 = -23;
	static volatile int16_t x942 = INT16_MIN;
	int32_t x943 = 2311;
	volatile uint32_t x944 = UINT32_MAX;
	volatile uint32_t t174 = 22U;

    t174 = (((x941^x942)^x943)*x944);

    if (t174 != 4294936850U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x945 = 4740U;
	int8_t x946 = 4;
	volatile uint64_t x947 = 133025064778590367LLU;
	int8_t x948 = -1;

    t175 = (((x945^x946)^x947)*x948);

    if (t175 != 18313719008930956769LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x949 = 4U;
	int32_t x950 = INT32_MIN;
	int64_t x951 = 5937899354561LL;
	volatile int64_t x952 = 1LL;
	volatile int64_t t176 = -2085439043535632LL;

    t176 = (((x949^x950)^x951)*x952);

    if (t176 != -5939832702523LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x954 = -7;
	int16_t x955 = INT16_MIN;

    t177 = (((x953^x954)^x955)*x956);

    if (t177 != 34915124LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x957 = INT64_MAX;
	volatile int64_t x958 = INT64_MIN;
	uint8_t x959 = UINT8_MAX;
	uint16_t x960 = UINT16_MAX;
	static volatile int64_t t178 = 1LL;

    t178 = (((x957^x958)^x959)*x960);

    if (t178 != -16776960LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x965 = -1LL;
	volatile int32_t x967 = INT32_MIN;
	volatile int8_t x968 = 24;
	volatile int64_t t179 = 113164304390589688LL;

    t179 = (((x965^x966)^x967)*x968);

    if (t179 != -51539604504LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x973 = UINT64_MAX;
	int64_t x974 = -11312999LL;
	static volatile uint64_t x976 = UINT64_MAX;

    t180 = (((x973^x974)^x975)*x976);

    if (t180 != 18445451648162550930LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x977 = 228241453U;
	volatile int32_t x978 = -247996;
	int64_t x979 = -1LL;
	volatile int64_t t181 = -2973953448261LL;

    t181 = (((x977^x978)^x979)*x980);

    if (t181 != 520551118080LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x981 = 1U;
	uint64_t x984 = 17258583715381LLU;
	uint64_t t182 = 7788044490503576648LLU;

    t182 = (((x981^x982)^x983)*x984);

    if (t182 != 1886431053506899509LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x985 = -1LL;
	int8_t x986 = INT8_MAX;
	volatile int64_t t183 = 8249261LL;

    t183 = (((x985^x986)^x987)*x988);

    if (t183 != 7021LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x989 = UINT16_MAX;
	uint32_t x990 = 2847221U;
	int64_t x991 = -1LL;
	uint32_t x992 = 0U;
	int64_t t184 = -118489756LL;

    t184 = (((x989^x990)^x991)*x992);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x997 = 283133407215006658LL;
	volatile uint64_t x998 = UINT64_MAX;
	uint32_t x999 = 13292U;
	int32_t x1000 = -43576184;
	volatile uint64_t t185 = 844841988LLU;

    t185 = (((x997^x998)^x999)*x1000);

    if (t185 != 8483319806979685128LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1001 = -1;
	volatile uint8_t x1002 = 1U;
	uint16_t x1003 = 14096U;
	uint16_t x1004 = UINT16_MAX;
	int32_t t186 = 83451343;

    t186 = (((x1001^x1002)^x1003)*x1004);

    if (t186 != -923912430) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1006 = 8934335U;
	volatile uint8_t x1007 = 79U;
	uint16_t x1008 = 3652U;
	static volatile uint32_t t187 = 2U;

    t187 = (((x1005^x1006)^x1007)*x1008);

    if (t187 != 2563602948U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1009 = INT8_MIN;
	int8_t x1010 = 7;
	uint16_t x1011 = 3637U;
	static uint32_t x1012 = UINT32_MAX;

    t188 = (((x1009^x1010)^x1011)*x1012);

    if (t188 != 3662U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1017 = INT8_MAX;
	uint16_t x1018 = 538U;
	uint32_t x1019 = 106039349U;
	uint32_t x1020 = 46U;
	volatile uint32_t t189 = 1U;

    t189 = (((x1017^x1018)^x1019)*x1020);

    if (t189 != 582867552U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1022 = -1;
	int16_t x1023 = INT16_MIN;
	uint32_t x1024 = 222205U;
	uint32_t t190 = 111794132U;

    t190 = (((x1021^x1022)^x1023)*x1024);

    if (t190 != 2985579529U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1025 = 883U;
	static int32_t x1026 = -1;
	uint8_t x1028 = UINT8_MAX;
	volatile uint32_t t191 = 61863818U;

    t191 = (((x1025^x1026)^x1027)*x1028);

    if (t191 != 8130420U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1030 = 23LLU;
	int8_t x1031 = -1;
	int64_t x1032 = INT64_MIN;
	volatile uint64_t t192 = 46LLU;

    t192 = (((x1029^x1030)^x1031)*x1032);

    if (t192 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x1041 = INT64_MAX;
	int64_t x1042 = -4146LL;
	static int64_t x1043 = INT64_MIN;
	int32_t x1044 = INT32_MIN;
	volatile int64_t t193 = 90625LL;

    t193 = (((x1041^x1042)^x1043)*x1044);

    if (t193 != -8901319720960LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1046 = 14U;
	static int64_t x1047 = INT64_MIN;
	static uint64_t x1048 = 274422728052381LLU;
	static volatile uint64_t t194 = 8199LLU;

    t194 = (((x1045^x1046)^x1047)*x1048);

    if (t194 != 14702289982192280256LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1049 = 68082U;
	uint16_t x1050 = 50U;
	int32_t x1052 = INT32_MIN;

    t195 = (((x1049^x1050)^x1051)*x1052);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x1053 = 7U;
	static int32_t x1054 = -344101649;
	int8_t x1055 = INT8_MIN;
	int8_t x1056 = INT8_MIN;
	static uint32_t t196 = 135607389U;

    t196 = (((x1053^x1054)^x1055)*x1056);

    if (t196 != 3199618048U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1061 = -1;
	uint32_t x1062 = 10071853U;
	volatile uint8_t x1063 = UINT8_MAX;
	int8_t x1064 = INT8_MAX;
	uint32_t t197 = 32371565U;

    t197 = (((x1061^x1062)^x1063)*x1064);

    if (t197 != 3015820883U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1065 = INT8_MIN;
	int16_t x1067 = INT16_MAX;
	int32_t x1068 = -238;
	volatile int32_t t198 = 1362605;

    t198 = (((x1065^x1066)^x1067)*x1068);

    if (t198 != -30226) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1069 = -166;
	int64_t x1071 = 3933LL;
	uint64_t x1072 = UINT64_MAX;
	uint64_t t199 = 4254541242160885960LLU;

    t199 = (((x1069^x1070)^x1071)*x1072);

    if (t199 != 18446744073709547532LLU) { NG(); } else { ; }
	
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

