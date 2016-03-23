
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

uint8_t x1 = 6U;
volatile uint8_t x3 = UINT8_MAX;
volatile int32_t t1 = -567236;
int32_t x10 = INT32_MAX;
int8_t x11 = INT8_MIN;
volatile uint32_t x26 = 1824U;
volatile uint16_t x32 = 17U;
static uint32_t x38 = UINT32_MAX;
volatile uint64_t x47 = 624947LLU;
volatile uint64_t x48 = 3405582330952LLU;
uint64_t t10 = 7361442403904LLU;
uint64_t t11 = 1LLU;
int32_t t12 = -31497655;
uint16_t x60 = 496U;
static uint32_t x68 = UINT32_MAX;
static int32_t t17 = -1017827041;
static uint32_t x80 = 9U;
int64_t x82 = INT64_MIN;
int64_t x84 = INT64_MIN;
uint16_t x97 = 8U;
int64_t x102 = INT64_MAX;
static volatile int8_t x106 = INT8_MIN;
int8_t x108 = INT8_MIN;
static volatile int32_t x115 = INT32_MIN;
uint16_t x122 = 3501U;
volatile int32_t t29 = 246501;
static int32_t t33 = 14702807;
volatile uint32_t x142 = UINT32_MAX;
uint64_t x149 = UINT64_MAX;
uint64_t t36 = 76220425564181567LLU;
static int16_t x158 = -1;
static int64_t t39 = -672356050320988562LL;
int8_t x169 = INT8_MIN;
int32_t x172 = -1;
volatile uint64_t x173 = 172124139LLU;
int32_t x175 = -968985;
int16_t x176 = INT16_MAX;
int16_t x177 = INT16_MIN;
int32_t x181 = 5;
int16_t x183 = 145;
volatile uint8_t x186 = 5U;
static volatile uint16_t x187 = 3836U;
uint32_t x190 = 828596313U;
volatile int8_t x193 = -22;
uint32_t x195 = UINT32_MAX;
int32_t t46 = -3511506;
int32_t x197 = -1;
uint8_t x205 = UINT8_MAX;
static int64_t x211 = 636090093873LL;
static volatile uint64_t t50 = 242342557425031LLU;
uint8_t x220 = 9U;
static uint16_t x225 = 1U;
static int64_t x231 = INT64_MIN;
int16_t x235 = -1;
static int32_t x236 = -2432;
uint16_t x251 = 771U;
uint8_t x255 = 16U;
int8_t x264 = INT8_MIN;
int8_t x266 = 2;
static volatile int32_t x269 = INT32_MIN;
volatile uint32_t t65 = 241526830U;
int32_t t66 = 6;
static int16_t x282 = INT16_MIN;
int16_t x284 = INT16_MIN;
volatile uint32_t x286 = 415771U;
volatile int32_t x287 = -1;
int8_t x289 = INT8_MIN;
volatile int32_t t69 = 1099015;
int8_t x293 = 0;
int64_t x297 = -1LL;
volatile int32_t x308 = INT32_MIN;
static int8_t x318 = -1;
uint8_t x319 = 3U;
volatile int32_t t77 = 757;
int32_t x325 = INT32_MIN;
static volatile uint8_t x327 = 32U;
int16_t x329 = INT16_MIN;
volatile uint8_t x333 = 11U;
static volatile uint32_t t81 = 234205U;
int8_t x347 = INT8_MAX;
volatile int64_t x348 = -1LL;
int32_t x349 = INT32_MAX;
volatile int8_t x351 = 53;
volatile int32_t x354 = INT32_MAX;
volatile uint16_t x359 = 11410U;
static int64_t x379 = -84228060LL;
static int64_t t90 = INT64_MAX;
volatile uint32_t t92 = 1810203456U;
uint16_t x389 = 106U;
int16_t x394 = -1;
volatile int64_t x397 = INT64_MIN;
int16_t x400 = INT16_MIN;
static uint16_t x404 = 0U;
uint64_t x405 = UINT64_MAX;
int32_t x408 = INT32_MIN;
int8_t x409 = -1;
uint32_t x415 = 1659U;
int64_t t99 = 2611587LL;
uint64_t x418 = 201867LLU;
volatile int32_t x420 = -4;
int8_t x433 = 30;
int16_t x435 = -491;
volatile int8_t x440 = -1;
int32_t t107 = 150;
uint64_t t109 = 59817LLU;
int8_t x458 = INT8_MIN;
int64_t t111 = 22745105525LL;
int16_t x469 = INT16_MAX;
uint64_t x470 = 302412LLU;
int16_t x473 = -1;
int32_t t114 = -4;
uint16_t x478 = 46U;
static volatile int32_t t116 = INT32_MIN;
int64_t x488 = INT64_MIN;
int16_t x490 = INT16_MIN;
static volatile uint32_t x503 = 842280U;
static int64_t x509 = INT64_MAX;
static int64_t t123 = -25LL;
int8_t x513 = -1;
int32_t x514 = -1437;
volatile uint32_t t125 = 100345U;
int16_t x524 = 1;
int32_t x535 = 407621816;
volatile uint64_t t128 = UINT64_MAX;
int8_t x547 = 1;
static uint64_t x569 = UINT64_MAX;
static int8_t x570 = -35;
static volatile int32_t t142 = -744;
int64_t x610 = -85523313692265891LL;
static volatile int32_t x613 = INT32_MIN;
int32_t t146 = 427029;
static int32_t t147 = 1;
int32_t x630 = 423471;
static uint64_t x631 = 364241LLU;
volatile int32_t x637 = -1;
static volatile int64_t t152 = INT64_MIN;
volatile int64_t x671 = INT64_MAX;
int32_t t161 = -1614865;
int32_t x683 = INT32_MAX;
volatile int64_t t162 = -895129039LL;
int16_t x685 = 6;
int8_t x687 = -1;
int16_t x691 = -886;
static volatile int64_t t165 = -16830292691LL;
int64_t x702 = -1LL;
volatile int32_t t169 = -5803;
volatile int64_t x724 = -1LL;
int8_t x733 = INT8_MIN;
volatile uint32_t t175 = 9486799U;
static uint32_t x743 = 528632625U;
static int8_t x744 = 1;
static int32_t x745 = INT32_MIN;
int8_t x748 = -1;
int64_t x754 = INT64_MAX;
volatile uint64_t x758 = 76455117178918631LLU;
int32_t x768 = INT32_MIN;
int64_t x770 = -41821915635LL;
int16_t x772 = 0;
volatile int32_t t182 = 1145;
uint64_t x774 = 431191251570922414LLU;
uint32_t x775 = 37140U;
int32_t t184 = -174544;
int32_t x782 = INT32_MIN;
int8_t x783 = 27;
uint8_t x784 = 54U;
uint64_t t188 = 4LLU;
volatile int16_t x807 = 1226;
uint8_t x809 = 0U;
int32_t x810 = INT32_MAX;
volatile int64_t x815 = 26670741426LL;
volatile int32_t t193 = -3588;
int32_t x818 = INT32_MAX;
int64_t x830 = INT64_MIN;
int64_t x838 = -62LL;


void f0(void) {
    	uint8_t x2 = 19U;
	static uint8_t x4 = UINT8_MAX;
	int32_t t0 = 97407;

    t0 = ((x1+(x2<=x3))^x4);

    if (t0 != 248) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MAX;
	int32_t x6 = -1;
	int8_t x7 = INT8_MIN;
	volatile uint16_t x8 = 1244U;

    t1 = ((x5+(x6<=x7))^x8);

    if (t1 != 1187) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 7U;
	static int16_t x12 = INT16_MAX;
	int32_t t2 = 1390;

    t2 = ((x9+(x10<=x11))^x12);

    if (t2 != 32760) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MIN;
	static volatile int32_t x18 = -4708;
	static int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MIN;
	volatile int32_t t3 = -11298117;

    t3 = ((x17+(x18<=x19))^x20);

    if (t3 != 2147450881) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = 21LLU;
	int8_t x22 = -5;
	uint64_t x23 = 272458LLU;
	uint16_t x24 = 3701U;
	uint64_t t4 = 2032657136629807LLU;

    t4 = ((x21+(x22<=x23))^x24);

    if (t4 != 3680LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 24997;
	int8_t x27 = 32;
	volatile int64_t x28 = -3474724626LL;
	int64_t t5 = 1847189896217582049LL;

    t5 = ((x25+(x26<=x27))^x28);

    if (t5 != -3474749109LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -1;
	static int16_t x30 = -1;
	static uint16_t x31 = 786U;
	int32_t t6 = -16251766;

    t6 = ((x29+(x30<=x31))^x32);

    if (t6 != 17) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = 39;
	volatile int64_t x36 = 116246024711818LL;
	volatile int64_t t7 = 19675LL;

    t7 = ((x33+(x34<=x35))^x36);

    if (t7 != 116246024711818LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = 123U;
	static int16_t x39 = -7783;
	static int32_t x40 = INT32_MIN;
	int32_t t8 = 39;

    t8 = ((x37+(x38<=x39))^x40);

    if (t8 != -2147483525) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -7;
	volatile int8_t x42 = INT8_MIN;
	uint8_t x43 = UINT8_MAX;
	int8_t x44 = 1;
	static int32_t t9 = 74;

    t9 = ((x41+(x42<=x43))^x44);

    if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x45 = 199U;
	uint64_t x46 = UINT64_MAX;

    t10 = ((x45+(x46<=x47))^x48);

    if (t10 != 3405582331023LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x49 = UINT64_MAX;
	volatile uint32_t x50 = 101760U;
	volatile int16_t x51 = INT16_MIN;
	static volatile uint32_t x52 = UINT32_MAX;

    t11 = ((x49+(x50<=x51))^x52);

    if (t11 != 4294967295LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = 2746;
	int64_t x54 = -1LL;
	uint16_t x55 = 30083U;
	uint8_t x56 = 2U;

    t12 = ((x53+(x54<=x55))^x56);

    if (t12 != 2745) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	volatile int32_t t13 = -14;

    t13 = ((x57+(x58<=x59))^x60);

    if (t13 != -399) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = 13U;
	int8_t x62 = INT8_MAX;
	static volatile uint16_t x63 = UINT16_MAX;
	int64_t x64 = -69526LL;
	int64_t t14 = 4758562LL;

    t14 = ((x61+(x62<=x63))^x64);

    if (t14 != -69532LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x65 = -1;
	int16_t x66 = -78;
	uint16_t x67 = 19U;
	volatile uint32_t t15 = UINT32_MAX;

    t15 = ((x65+(x66<=x67))^x68);

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 85U;
	uint32_t x71 = UINT32_MAX;
	volatile int16_t x72 = INT16_MAX;
	volatile int32_t t16 = 388139521;

    t16 = ((x69+(x70<=x71))^x72);

    if (t16 != 32511) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	int16_t x75 = 12;
	int8_t x76 = -15;

    t17 = ((x73+(x74<=x75))^x76);

    if (t17 != 32752) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 217289441U;
	int16_t x78 = INT16_MAX;
	int8_t x79 = INT8_MIN;
	static volatile uint32_t t18 = 511802667U;

    t18 = ((x77+(x78<=x79))^x80);

    if (t18 != 217289448U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x81 = 51360LLU;
	int64_t x83 = -1LL;
	uint64_t t19 = 2135LLU;

    t19 = ((x81+(x82<=x83))^x84);

    if (t19 != 9223372036854827169LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = UINT32_MAX;
	int16_t x86 = -1;
	volatile int32_t x87 = INT32_MAX;
	uint16_t x88 = UINT16_MAX;
	volatile uint32_t t20 = 259061U;

    t20 = ((x85+(x86<=x87))^x88);

    if (t20 != 65535U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = INT8_MIN;
	uint16_t x90 = 34U;
	volatile uint64_t x91 = UINT64_MAX;
	uint32_t x92 = 0U;
	volatile uint32_t t21 = 8U;

    t21 = ((x89+(x90<=x91))^x92);

    if (t21 != 4294967169U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	static int64_t x94 = INT64_MAX;
	static uint8_t x95 = 104U;
	int32_t x96 = INT32_MAX;
	volatile int32_t t22 = 259705;

    t22 = ((x93+(x94<=x95))^x96);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x98 = -19186LL;
	uint64_t x99 = 5448454LLU;
	int64_t x100 = INT64_MAX;
	int64_t t23 = -5731810630LL;

    t23 = ((x97+(x98<=x99))^x100);

    if (t23 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x103 = -478124497290LL;
	int8_t x104 = -1;
	volatile int32_t t24 = -14;

    t24 = ((x101+(x102<=x103))^x104);

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = -1;
	int32_t x107 = INT32_MAX;
	int32_t t25 = 17019;

    t25 = ((x105+(x106<=x107))^x108);

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = UINT16_MAX;
	int64_t x110 = INT64_MAX;
	volatile int32_t x111 = INT32_MIN;
	static int32_t x112 = 4;
	int32_t t26 = -391;

    t26 = ((x109+(x110<=x111))^x112);

    if (t26 != 65531) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x113 = 2U;
	uint32_t x114 = UINT32_MAX;
	uint8_t x116 = 2U;
	volatile int32_t t27 = -36272;

    t27 = ((x113+(x114<=x115))^x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = INT16_MIN;
	volatile uint8_t x118 = 16U;
	int16_t x119 = INT16_MIN;
	volatile int64_t x120 = 579327LL;
	int64_t t28 = 165614715180LL;

    t28 = ((x117+(x118<=x119))^x120);

    if (t28 != -567553LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = 15423U;
	uint64_t x123 = 1711483LLU;
	int32_t x124 = -12038360;

    t29 = ((x121+(x122<=x123))^x124);

    if (t29 != -12029080) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 486458325354383LLU;
	volatile int16_t x126 = INT16_MIN;
	static int32_t x127 = 0;
	int64_t x128 = 8372198982LL;
	volatile uint64_t t30 = 255966256LLU;

    t30 = ((x125+(x126<=x127))^x128);

    if (t30 != 486463375137238LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = -1;
	int32_t x130 = -1;
	int8_t x131 = INT8_MIN;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t31 = 8U;

    t31 = ((x129+(x130<=x131))^x132);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = 1LL;
	int64_t x134 = -15494046396096344LL;
	static int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	int64_t t32 = 876827406LL;

    t32 = ((x133+(x134<=x135))^x136);

    if (t32 != -126LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x137 = 0U;
	uint16_t x138 = 17U;
	int32_t x139 = INT32_MIN;
	static volatile uint8_t x140 = UINT8_MAX;

    t33 = ((x137+(x138<=x139))^x140);

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = UINT8_MAX;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MIN;
	int32_t t34 = 258004619;

    t34 = ((x141+(x142<=x143))^x144);

    if (t34 != -129) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x150 = 55U;
	int16_t x151 = INT16_MIN;
	int64_t x152 = -1LL;
	volatile uint64_t t35 = 8391165738143365780LLU;

    t35 = ((x149+(x150<=x151))^x152);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = 10540LLU;
	int32_t x154 = INT32_MIN;
	volatile uint32_t x155 = UINT32_MAX;
	int64_t x156 = INT64_MAX;

    t36 = ((x153+(x154<=x155))^x156);

    if (t36 != 9223372036854765266LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x157 = 18U;
	int8_t x159 = -1;
	volatile uint8_t x160 = UINT8_MAX;
	int32_t t37 = -117;

    t37 = ((x157+(x158<=x159))^x160);

    if (t37 != 236) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = -7;
	uint16_t x162 = UINT16_MAX;
	static uint16_t x163 = 43U;
	uint32_t x164 = 651273953U;
	uint32_t t38 = 764514753U;

    t38 = ((x161+(x162<=x163))^x164);

    if (t38 != 3643693336U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = INT64_MIN;
	uint16_t x166 = UINT16_MAX;
	uint8_t x167 = 43U;
	int16_t x168 = -34;

    t39 = ((x165+(x166<=x167))^x168);

    if (t39 != 9223372036854775774LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x170 = 19U;
	volatile int32_t x171 = 498;
	static volatile int32_t t40 = 26631;

    t40 = ((x169+(x170<=x171))^x172);

    if (t40 != 126) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x174 = -1LL;
	static uint64_t t41 = 3LLU;

    t41 = ((x173+(x174<=x175))^x176);

    if (t41 != 172103700LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MIN;
	uint64_t x180 = UINT64_MAX;
	uint64_t t42 = 27338858239LLU;

    t42 = ((x177+(x178<=x179))^x180);

    if (t42 != 32766LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x182 = 35264604011377LLU;
	int16_t x184 = 5;
	volatile int32_t t43 = -997352;

    t43 = ((x181+(x182<=x183))^x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x185 = INT64_MIN;
	int8_t x188 = INT8_MIN;
	static int64_t t44 = 0LL;

    t44 = ((x185+(x186<=x187))^x188);

    if (t44 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = -59;
	int32_t x191 = INT32_MAX;
	uint32_t x192 = 23010340U;
	static volatile uint32_t t45 = 7153U;

    t45 = ((x189+(x190<=x191))^x192);

    if (t45 != 4271956962U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x194 = -1;
	uint16_t x196 = UINT16_MAX;

    t46 = ((x193+(x194<=x195))^x196);

    if (t46 != -65516) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x198 = INT8_MIN;
	volatile uint64_t x199 = UINT64_MAX;
	int32_t x200 = -122085;
	int32_t t47 = -37360803;

    t47 = ((x197+(x198<=x199))^x200);

    if (t47 != -122085) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x201 = 0LLU;
	uint32_t x202 = 1378U;
	static int8_t x203 = -1;
	static int16_t x204 = INT16_MIN;
	static volatile uint64_t t48 = 178417LLU;

    t48 = ((x201+(x202<=x203))^x204);

    if (t48 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x206 = UINT32_MAX;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MIN;
	int32_t t49 = 106765;

    t49 = ((x205+(x206<=x207))^x208);

    if (t49 != -2147483393) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x209 = UINT64_MAX;
	int8_t x210 = INT8_MIN;
	static int8_t x212 = INT8_MAX;

    t50 = ((x209+(x210<=x211))^x212);

    if (t50 != 127LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = -1;
	volatile int16_t x214 = -10466;
	volatile int16_t x215 = -524;
	int64_t x216 = 60LL;
	static int64_t t51 = -7LL;

    t51 = ((x213+(x214<=x215))^x216);

    if (t51 != 60LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = INT8_MIN;
	int32_t x218 = 1148240;
	int64_t x219 = -87163733LL;
	static volatile int32_t t52 = 35574517;

    t52 = ((x217+(x218<=x219))^x220);

    if (t52 != -119) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int8_t x223 = -2;
	uint64_t x224 = UINT64_MAX;
	uint64_t t53 = UINT64_MAX;

    t53 = ((x221+(x222<=x223))^x224);

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x226 = UINT8_MAX;
	uint16_t x227 = 452U;
	uint32_t x228 = UINT32_MAX;
	static volatile uint32_t t54 = 6U;

    t54 = ((x225+(x226<=x227))^x228);

    if (t54 != 4294967293U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x229 = INT32_MAX;
	int16_t x230 = INT16_MIN;
	static int64_t x232 = 5262600488LL;
	volatile int64_t t55 = 4LL;

    t55 = ((x229+(x230<=x231))^x232);

    if (t55 != 5474817751LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MAX;
	int32_t x234 = INT32_MIN;
	int32_t t56 = -3;

    t56 = ((x233+(x234<=x235))^x236);

    if (t56 != -2560) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x237 = 71;
	static int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MIN;
	volatile uint16_t x240 = 6940U;
	int32_t t57 = 244;

    t57 = ((x237+(x238<=x239))^x240);

    if (t57 != 7003) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x241 = INT16_MAX;
	volatile int64_t x242 = -1LL;
	volatile int32_t x243 = INT32_MIN;
	uint16_t x244 = 899U;
	volatile int32_t t58 = 563;

    t58 = ((x241+(x242<=x243))^x244);

    if (t58 != 31868) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x249 = INT64_MIN;
	volatile uint8_t x250 = 72U;
	int64_t x252 = 9590LL;
	volatile int64_t t59 = 42847472LL;

    t59 = ((x249+(x250<=x251))^x252);

    if (t59 != -9223372036854766217LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	int64_t x256 = INT64_MAX;
	static int64_t t60 = 7139845785802LL;

    t60 = ((x253+(x254<=x255))^x256);

    if (t60 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x257 = 0LLU;
	int32_t x258 = 324500;
	static int32_t x259 = INT32_MAX;
	uint16_t x260 = UINT16_MAX;
	uint64_t t61 = 1925090027457LLU;

    t61 = ((x257+(x258<=x259))^x260);

    if (t61 != 65534LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = INT64_MIN;
	uint8_t x262 = 3U;
	int8_t x263 = INT8_MIN;
	int64_t t62 = 1416LL;

    t62 = ((x261+(x262<=x263))^x264);

    if (t62 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x265 = 23LLU;
	int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;
	uint64_t t63 = 1674512975LLU;

    t63 = ((x265+(x266<=x267))^x268);

    if (t63 != 9223372036854775831LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x270 = INT32_MIN;
	volatile int64_t x271 = 0LL;
	uint32_t x272 = 800923U;
	volatile uint32_t t64 = 175354U;

    t64 = ((x269+(x270<=x271))^x272);

    if (t64 != 2148284570U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x273 = UINT32_MAX;
	static volatile int32_t x274 = INT32_MAX;
	int64_t x275 = 142LL;
	uint32_t x276 = 1096U;

    t65 = ((x273+(x274<=x275))^x276);

    if (t65 != 4294966199U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x277 = INT16_MIN;
	int32_t x278 = 38326;
	int16_t x279 = 29;
	static uint8_t x280 = 14U;

    t66 = ((x277+(x278<=x279))^x280);

    if (t66 != -32754) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x281 = INT32_MIN;
	volatile int32_t x283 = INT32_MIN;
	int32_t t67 = 22977;

    t67 = ((x281+(x282<=x283))^x284);

    if (t67 != 2147450880) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x285 = -1;
	int8_t x288 = -29;
	static volatile int32_t t68 = 13;

    t68 = ((x285+(x286<=x287))^x288);

    if (t68 != -29) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x290 = 107U;
	int64_t x291 = 117583263LL;
	int32_t x292 = INT32_MIN;

    t69 = ((x289+(x290<=x291))^x292);

    if (t69 != 2147483521) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x294 = 46411835;
	volatile int8_t x295 = 11;
	static uint8_t x296 = 73U;
	volatile int32_t t70 = -3;

    t70 = ((x293+(x294<=x295))^x296);

    if (t70 != 73) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x298 = INT8_MIN;
	volatile int64_t x299 = -1LL;
	uint32_t x300 = 2U;
	volatile int64_t t71 = 254437299516769262LL;

    t71 = ((x297+(x298<=x299))^x300);

    if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x301 = 15U;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MAX;
	volatile int16_t x304 = INT16_MIN;
	int32_t t72 = -6;

    t72 = ((x301+(x302<=x303))^x304);

    if (t72 != -32752) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = INT16_MIN;
	volatile uint8_t x306 = 48U;
	volatile int64_t x307 = INT64_MAX;
	static int32_t t73 = -456713;

    t73 = ((x305+(x306<=x307))^x308);

    if (t73 != 2147450881) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x309 = INT16_MIN;
	int8_t x310 = 16;
	volatile int8_t x311 = -24;
	volatile uint32_t x312 = UINT32_MAX;
	uint32_t t74 = 13227U;

    t74 = ((x309+(x310<=x311))^x312);

    if (t74 != 32767U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = -1;
	int64_t x314 = 73235209LL;
	volatile uint64_t x315 = 205246949382146119LLU;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = ((x313+(x314<=x315))^x316);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x317 = INT8_MIN;
	uint64_t x320 = 118LLU;
	volatile uint64_t t76 = 26963252LLU;

    t76 = ((x317+(x318<=x319))^x320);

    if (t76 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x321 = -1;
	uint8_t x322 = 0U;
	static int32_t x323 = INT32_MIN;
	static int32_t x324 = -59143;

    t77 = ((x321+(x322<=x323))^x324);

    if (t77 != 59142) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x326 = INT16_MIN;
	static int32_t x328 = -12714;
	volatile int32_t t78 = 8088;

    t78 = ((x325+(x326<=x327))^x328);

    if (t78 != 2147470935) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x330 = 38;
	int32_t x331 = INT32_MAX;
	static volatile int32_t x332 = -1;
	static volatile int32_t t79 = 0;

    t79 = ((x329+(x330<=x331))^x332);

    if (t79 != 32766) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x334 = -36;
	int32_t x335 = -1;
	uint32_t x336 = UINT32_MAX;
	uint32_t t80 = 63794U;

    t80 = ((x333+(x334<=x335))^x336);

    if (t80 != 4294967283U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x337 = 1U;
	uint32_t x338 = 4U;
	volatile uint8_t x339 = 0U;
	volatile uint8_t x340 = UINT8_MAX;

    t81 = ((x337+(x338<=x339))^x340);

    if (t81 != 254U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x341 = 62140LLU;
	int64_t x342 = INT64_MIN;
	uint16_t x343 = 56U;
	volatile int8_t x344 = -1;
	uint64_t t82 = 3362LLU;

    t82 = ((x341+(x342<=x343))^x344);

    if (t82 != 18446744073709489474LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x345 = -1;
	int8_t x346 = 5;
	int64_t t83 = 706012461095LL;

    t83 = ((x345+(x346<=x347))^x348);

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x350 = 91675U;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t84 = -2594516;

    t84 = ((x349+(x350<=x351))^x352);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x353 = 1U;
	int64_t x355 = 21293LL;
	static volatile uint16_t x356 = 17497U;
	static int32_t t85 = -34;

    t85 = ((x353+(x354<=x355))^x356);

    if (t85 != 17496) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x357 = 671U;
	volatile uint8_t x358 = 13U;
	volatile int64_t x360 = INT64_MAX;
	int64_t t86 = -8053LL;

    t86 = ((x357+(x358<=x359))^x360);

    if (t86 != 9223372036854775135LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x365 = INT64_MIN;
	int64_t x366 = INT64_MIN;
	volatile int8_t x367 = -24;
	int64_t x368 = INT64_MIN;
	int64_t t87 = -29510890LL;

    t87 = ((x365+(x366<=x367))^x368);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x369 = UINT8_MAX;
	volatile int16_t x370 = -6987;
	static int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MAX;
	int32_t t88 = -2;

    t88 = ((x369+(x370<=x371))^x372);

    if (t88 != 2147483391) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x373 = 461;
	int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MAX;
	int16_t x376 = 1053;
	int32_t t89 = 1472859;

    t89 = ((x373+(x374<=x375))^x376);

    if (t89 != 1491) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x377 = -1;
	int16_t x378 = 9452;
	int64_t x380 = INT64_MIN;

    t90 = ((x377+(x378<=x379))^x380);

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x381 = -1;
	static int8_t x382 = INT8_MIN;
	int32_t x383 = -7;
	int16_t x384 = INT16_MAX;
	int32_t t91 = 0;

    t91 = ((x381+(x382<=x383))^x384);

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x385 = 105U;
	int16_t x386 = INT16_MAX;
	int32_t x387 = -1;
	volatile uint32_t x388 = 100550U;

    t92 = ((x385+(x386<=x387))^x388);

    if (t92 != 100527U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x390 = INT32_MIN;
	uint64_t x391 = 18301632LLU;
	static int64_t x392 = 139010000961LL;
	static int64_t t93 = -28465684105959LL;

    t93 = ((x389+(x390<=x391))^x392);

    if (t93 != 139010000939LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x393 = INT8_MIN;
	static int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t94 = 144091;

    t94 = ((x393+(x394<=x395))^x396);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x398 = -1LL;
	uint32_t x399 = 9169371U;
	volatile int64_t t95 = 4273684422LL;

    t95 = ((x397+(x398<=x399))^x400);

    if (t95 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x401 = 87U;
	volatile uint32_t x402 = 1228U;
	int32_t x403 = -3;
	int32_t t96 = -1022111;

    t96 = ((x401+(x402<=x403))^x404);

    if (t96 != 88) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x406 = -1;
	int16_t x407 = 0;
	volatile uint64_t t97 = 13233037063454LLU;

    t97 = ((x405+(x406<=x407))^x408);

    if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x410 = INT16_MAX;
	int8_t x411 = INT8_MIN;
	volatile uint32_t x412 = 65649U;
	uint32_t t98 = 107062219U;

    t98 = ((x409+(x410<=x411))^x412);

    if (t98 != 4294901646U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x413 = -1;
	static uint16_t x414 = 0U;
	int64_t x416 = -26LL;

    t99 = ((x413+(x414<=x415))^x416);

    if (t99 != -26LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x417 = -1;
	int8_t x419 = INT8_MIN;
	int32_t t100 = -1504822;

    t100 = ((x417+(x418<=x419))^x420);

    if (t100 != -4) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x421 = INT8_MIN;
	int8_t x422 = -1;
	uint16_t x423 = UINT16_MAX;
	int8_t x424 = 5;
	volatile int32_t t101 = 86019;

    t101 = ((x421+(x422<=x423))^x424);

    if (t101 != -124) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x425 = INT8_MAX;
	int8_t x426 = -1;
	int64_t x427 = -1LL;
	int32_t x428 = 193022;
	int32_t t102 = -14;

    t102 = ((x425+(x426<=x427))^x428);

    if (t102 != 192894) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x429 = INT64_MIN;
	static uint32_t x430 = 1174891223U;
	static int16_t x431 = -1429;
	static int8_t x432 = INT8_MIN;
	volatile int64_t t103 = -480530042LL;

    t103 = ((x429+(x430<=x431))^x432);

    if (t103 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x434 = UINT16_MAX;
	volatile int8_t x436 = -1;
	volatile int32_t t104 = -49485203;

    t104 = ((x433+(x434<=x435))^x436);

    if (t104 != -31) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x437 = INT8_MAX;
	int16_t x438 = -3;
	int64_t x439 = -1LL;
	static int32_t t105 = -202665;

    t105 = ((x437+(x438<=x439))^x440);

    if (t105 != -129) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x441 = 3718U;
	int16_t x442 = 13;
	static volatile int16_t x443 = 1259;
	int64_t x444 = INT64_MIN;
	int64_t t106 = -1009LL;

    t106 = ((x441+(x442<=x443))^x444);

    if (t106 != -9223372036854772089LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x445 = 8U;
	int16_t x446 = INT16_MIN;
	static int8_t x447 = INT8_MIN;
	int16_t x448 = -1;

    t107 = ((x445+(x446<=x447))^x448);

    if (t107 != -10) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = INT16_MAX;
	int64_t x450 = 1914967999395565685LL;
	int16_t x451 = INT16_MIN;
	static int32_t x452 = INT32_MAX;
	int32_t t108 = 1;

    t108 = ((x449+(x450<=x451))^x452);

    if (t108 != 2147450880) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x453 = INT32_MIN;
	uint8_t x454 = 38U;
	int8_t x455 = 1;
	uint64_t x456 = 119041003LLU;

    t109 = ((x453+(x454<=x455))^x456);

    if (t109 != 18446744071681108971LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x457 = UINT16_MAX;
	int64_t x459 = INT64_MAX;
	int8_t x460 = -1;
	volatile int32_t t110 = -894;

    t110 = ((x457+(x458<=x459))^x460);

    if (t110 != -65537) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x461 = INT64_MIN;
	uint8_t x462 = 2U;
	uint64_t x463 = 1977LLU;
	int8_t x464 = INT8_MAX;

    t111 = ((x461+(x462<=x463))^x464);

    if (t111 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x465 = -1LL;
	static int8_t x466 = INT8_MIN;
	int16_t x467 = INT16_MIN;
	int8_t x468 = 1;
	volatile int64_t t112 = -2789874LL;

    t112 = ((x465+(x466<=x467))^x468);

    if (t112 != -2LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x471 = 2U;
	volatile int32_t x472 = INT32_MAX;
	volatile int32_t t113 = 17894;

    t113 = ((x469+(x470<=x471))^x472);

    if (t113 != 2147450880) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x474 = INT32_MIN;
	uint64_t x475 = UINT64_MAX;
	uint16_t x476 = 8U;

    t114 = ((x473+(x474<=x475))^x476);

    if (t114 != 8) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x477 = 895805LLU;
	volatile uint16_t x479 = 1U;
	int32_t x480 = INT32_MIN;
	uint64_t t115 = 118998266035336LLU;

    t115 = ((x477+(x478<=x479))^x480);

    if (t115 != 18446744071562963773LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = INT32_MAX;
	uint8_t x482 = UINT8_MAX;
	uint32_t x483 = 244U;
	volatile int32_t x484 = -1;

    t116 = ((x481+(x482<=x483))^x484);

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x485 = 1240910U;
	static int16_t x486 = INT16_MIN;
	int16_t x487 = INT16_MIN;
	volatile int64_t t117 = 92445327710893575LL;

    t117 = ((x485+(x486<=x487))^x488);

    if (t117 != -9223372036853534897LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x489 = 39474884536LLU;
	uint16_t x491 = UINT16_MAX;
	volatile uint64_t x492 = UINT64_MAX;
	volatile uint64_t t118 = 22168192830112LLU;

    t118 = ((x489+(x490<=x491))^x492);

    if (t118 != 18446744034234667078LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x493 = INT16_MIN;
	static volatile uint16_t x494 = 2992U;
	uint32_t x495 = 1000070561U;
	int64_t x496 = -265985235LL;
	volatile int64_t t119 = 342507522LL;

    t119 = ((x493+(x494<=x495))^x496);

    if (t119 != 266003244LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x497 = UINT64_MAX;
	volatile int8_t x498 = INT8_MIN;
	volatile uint16_t x499 = 322U;
	uint16_t x500 = 7288U;
	volatile uint64_t t120 = 51617684LLU;

    t120 = ((x497+(x498<=x499))^x500);

    if (t120 != 7288LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x501 = INT32_MIN;
	int64_t x502 = INT64_MAX;
	uint8_t x504 = UINT8_MAX;
	int32_t t121 = -282692098;

    t121 = ((x501+(x502<=x503))^x504);

    if (t121 != -2147483393) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x505 = INT64_MIN;
	volatile int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MAX;
	volatile uint16_t x508 = 15562U;
	volatile int64_t t122 = 14131LL;

    t122 = ((x505+(x506<=x507))^x508);

    if (t122 != -9223372036854760245LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x510 = 600U;
	int32_t x511 = INT32_MIN;
	uint32_t x512 = UINT32_MAX;

    t123 = ((x509+(x510<=x511))^x512);

    if (t123 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x515 = 17;
	static uint16_t x516 = UINT16_MAX;
	volatile int32_t t124 = 258392;

    t124 = ((x513+(x514<=x515))^x516);

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x517 = 15U;
	int16_t x518 = 28;
	int32_t x519 = -1;
	volatile uint32_t x520 = UINT32_MAX;

    t125 = ((x517+(x518<=x519))^x520);

    if (t125 != 4294967280U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x521 = 215;
	uint32_t x522 = 5U;
	volatile uint8_t x523 = UINT8_MAX;
	volatile int32_t t126 = -278937;

    t126 = ((x521+(x522<=x523))^x524);

    if (t126 != 217) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x525 = -1LL;
	static int8_t x526 = 2;
	volatile uint8_t x527 = 11U;
	int8_t x528 = INT8_MAX;
	int64_t t127 = 104438LL;

    t127 = ((x525+(x526<=x527))^x528);

    if (t127 != 127LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x533 = UINT64_MAX;
	int16_t x534 = INT16_MIN;
	volatile int32_t x536 = -1;

    t128 = ((x533+(x534<=x535))^x536);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x537 = 32;
	uint8_t x538 = UINT8_MAX;
	int32_t x539 = INT32_MIN;
	int8_t x540 = 9;
	int32_t t129 = -548192;

    t129 = ((x537+(x538<=x539))^x540);

    if (t129 != 41) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x541 = -1;
	int32_t x542 = 786;
	int32_t x543 = INT32_MAX;
	uint32_t x544 = UINT32_MAX;
	static volatile uint32_t t130 = UINT32_MAX;

    t130 = ((x541+(x542<=x543))^x544);

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x545 = INT8_MIN;
	volatile uint8_t x546 = 6U;
	volatile int64_t x548 = INT64_MIN;
	volatile int64_t t131 = 8353LL;

    t131 = ((x545+(x546<=x547))^x548);

    if (t131 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x549 = INT64_MAX;
	int64_t x550 = -10LL;
	static volatile int64_t x551 = INT64_MIN;
	int8_t x552 = INT8_MAX;
	static volatile int64_t t132 = 15373LL;

    t132 = ((x549+(x550<=x551))^x552);

    if (t132 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x553 = 1;
	static uint16_t x554 = 2298U;
	uint16_t x555 = 0U;
	static int64_t x556 = INT64_MIN;
	static volatile int64_t t133 = 2008122148LL;

    t133 = ((x553+(x554<=x555))^x556);

    if (t133 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint16_t x557 = 947U;
	uint8_t x558 = 49U;
	uint32_t x559 = 1133U;
	int64_t x560 = INT64_MIN;
	volatile int64_t t134 = -2567499285908519LL;

    t134 = ((x557+(x558<=x559))^x560);

    if (t134 != -9223372036854774860LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = INT8_MIN;
	static uint16_t x562 = 6191U;
	int32_t x563 = INT32_MAX;
	int16_t x564 = 468;
	volatile int32_t t135 = 3517186;

    t135 = ((x561+(x562<=x563))^x564);

    if (t135 != -427) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x565 = 0;
	int16_t x566 = INT16_MIN;
	int32_t x567 = INT32_MIN;
	int64_t x568 = INT64_MIN;
	int64_t t136 = INT64_MIN;

    t136 = ((x565+(x566<=x567))^x568);

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x571 = INT16_MAX;
	volatile uint8_t x572 = 1U;
	uint64_t t137 = 2327LLU;

    t137 = ((x569+(x570<=x571))^x572);

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x573 = -246840;
	int8_t x574 = 29;
	uint32_t x575 = UINT32_MAX;
	static int32_t x576 = 4502;
	volatile int32_t t138 = -43273;

    t138 = ((x573+(x574<=x575))^x576);

    if (t138 != -251297) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x577 = -399365340425177347LL;
	int8_t x578 = 0;
	static int32_t x579 = INT32_MAX;
	uint64_t x580 = 78LLU;
	uint64_t t139 = 283673105837465834LLU;

    t139 = ((x577+(x578<=x579))^x580);

    if (t139 != 18047378733284374192LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x581 = 145;
	volatile int8_t x582 = INT8_MIN;
	int8_t x583 = -24;
	uint8_t x584 = 0U;
	int32_t t140 = -3;

    t140 = ((x581+(x582<=x583))^x584);

    if (t140 != 146) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = INT8_MIN;
	int32_t x586 = 353116;
	int8_t x587 = -1;
	volatile int16_t x588 = 0;
	volatile int32_t t141 = 55627020;

    t141 = ((x585+(x586<=x587))^x588);

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x593 = 2U;
	static int8_t x594 = -1;
	static int16_t x595 = INT16_MIN;
	static int8_t x596 = 1;

    t142 = ((x593+(x594<=x595))^x596);

    if (t142 != 3) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x597 = INT8_MIN;
	int16_t x598 = INT16_MAX;
	int8_t x599 = 24;
	int8_t x600 = 12;
	static volatile int32_t t143 = 99123;

    t143 = ((x597+(x598<=x599))^x600);

    if (t143 != -116) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x601 = UINT64_MAX;
	volatile int16_t x602 = 26;
	volatile int16_t x603 = -32;
	static int16_t x604 = INT16_MAX;
	volatile uint64_t t144 = 0LLU;

    t144 = ((x601+(x602<=x603))^x604);

    if (t144 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x609 = UINT32_MAX;
	int16_t x611 = INT16_MIN;
	int8_t x612 = -1;
	volatile uint32_t t145 = UINT32_MAX;

    t145 = ((x609+(x610<=x611))^x612);

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x614 = UINT8_MAX;
	volatile int32_t x615 = 18;
	uint8_t x616 = UINT8_MAX;

    t146 = ((x613+(x614<=x615))^x616);

    if (t146 != -2147483393) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x617 = INT8_MIN;
	static int32_t x618 = -613;
	int64_t x619 = INT64_MIN;
	int8_t x620 = INT8_MIN;

    t147 = ((x617+(x618<=x619))^x620);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x621 = 1070805U;
	static int32_t x622 = 24;
	int64_t x623 = INT64_MAX;
	static int64_t x624 = INT64_MIN;
	volatile int64_t t148 = -216LL;

    t148 = ((x621+(x622<=x623))^x624);

    if (t148 != -9223372036853705002LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x625 = 0;
	uint32_t x626 = 61773700U;
	int8_t x627 = -1;
	static int32_t x628 = -65124582;
	volatile int32_t t149 = -18211;

    t149 = ((x625+(x626<=x627))^x628);

    if (t149 != -65124581) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x629 = 44;
	int64_t x632 = -1LL;
	int64_t t150 = 538024LL;

    t150 = ((x629+(x630<=x631))^x632);

    if (t150 != -45LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x633 = INT64_MIN;
	uint16_t x634 = UINT16_MAX;
	uint32_t x635 = 4667U;
	volatile int8_t x636 = INT8_MIN;
	int64_t t151 = 0LL;

    t151 = ((x633+(x634<=x635))^x636);

    if (t151 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x638 = 26U;
	int64_t x639 = INT64_MAX;
	static int64_t x640 = INT64_MIN;

    t152 = ((x637+(x638<=x639))^x640);

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x641 = 607U;
	volatile int64_t x642 = 14616504184412097LL;
	static int64_t x643 = INT64_MAX;
	int32_t x644 = 58950;
	uint32_t t153 = 1446U;

    t153 = ((x641+(x642<=x643))^x644);

    if (t153 != 58406U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x645 = INT64_MIN;
	static int16_t x646 = 20;
	int32_t x647 = 254;
	int64_t x648 = -1LL;
	volatile int64_t t154 = 5610368LL;

    t154 = ((x645+(x646<=x647))^x648);

    if (t154 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x653 = 12289070332673033LL;
	static uint64_t x654 = 13860978337LLU;
	static uint32_t x655 = 605763U;
	int64_t x656 = 31207LL;
	volatile int64_t t155 = 348069LL;

    t155 = ((x653+(x654<=x655))^x656);

    if (t155 != 12289070332642798LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x657 = 17U;
	volatile uint8_t x658 = UINT8_MAX;
	uint32_t x659 = UINT32_MAX;
	static int16_t x660 = INT16_MIN;
	static int32_t t156 = 30552419;

    t156 = ((x657+(x658<=x659))^x660);

    if (t156 != -32750) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x661 = INT32_MAX;
	static volatile int8_t x662 = -1;
	volatile int32_t x663 = -108659;
	int64_t x664 = INT64_MIN;
	volatile int64_t t157 = -1591435341106LL;

    t157 = ((x661+(x662<=x663))^x664);

    if (t157 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x665 = 6587U;
	uint16_t x666 = 27U;
	int16_t x667 = INT16_MIN;
	uint32_t x668 = 536459181U;
	volatile uint32_t t158 = 9U;

    t158 = ((x665+(x666<=x667))^x668);

    if (t158 != 536456726U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x669 = INT64_MIN;
	int8_t x670 = INT8_MIN;
	int8_t x672 = INT8_MIN;
	static int64_t t159 = 982875197145LL;

    t159 = ((x669+(x670<=x671))^x672);

    if (t159 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x673 = INT8_MAX;
	int16_t x674 = 7703;
	volatile uint32_t x675 = UINT32_MAX;
	volatile int64_t x676 = 34959955046944LL;
	int64_t t160 = -1196737LL;

    t160 = ((x673+(x674<=x675))^x676);

    if (t160 != 34959955047072LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x677 = 14U;
	volatile int32_t x678 = -1;
	int8_t x679 = -1;
	volatile int32_t x680 = -1;

    t161 = ((x677+(x678<=x679))^x680);

    if (t161 != -16) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x681 = -1LL;
	int16_t x682 = -1;
	volatile int16_t x684 = INT16_MIN;

    t162 = ((x681+(x682<=x683))^x684);

    if (t162 != -32768LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x686 = 7;
	uint16_t x688 = 0U;
	int32_t t163 = -6241279;

    t163 = ((x685+(x686<=x687))^x688);

    if (t163 != 6) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x689 = 38152524284472581LLU;
	static uint32_t x690 = 941U;
	static int8_t x692 = INT8_MIN;
	static volatile uint64_t t164 = 361557LLU;

    t164 = ((x689+(x690<=x691))^x692);

    if (t164 != 18408591549425078918LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x693 = 5922U;
	volatile uint32_t x694 = 86508149U;
	static uint8_t x695 = UINT8_MAX;
	volatile int64_t x696 = -1LL;

    t165 = ((x693+(x694<=x695))^x696);

    if (t165 != -5923LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x697 = 1U;
	int64_t x698 = 3412593651251618621LL;
	uint64_t x699 = 121091LLU;
	uint8_t x700 = 28U;
	volatile int32_t t166 = 95600;

    t166 = ((x697+(x698<=x699))^x700);

    if (t166 != 29) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x701 = 1799U;
	uint16_t x703 = 833U;
	volatile uint16_t x704 = 717U;
	volatile uint32_t t167 = 1359131619U;

    t167 = ((x701+(x702<=x703))^x704);

    if (t167 != 1477U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x709 = UINT64_MAX;
	int16_t x710 = -4;
	int64_t x711 = INT64_MAX;
	static int64_t x712 = -17085721501LL;
	uint64_t t168 = 125779400197177LLU;

    t168 = ((x709+(x710<=x711))^x712);

    if (t168 != 18446744056623830115LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x713 = INT16_MIN;
	uint32_t x714 = UINT32_MAX;
	int32_t x715 = -1;
	int32_t x716 = -13076261;

    t169 = ((x713+(x714<=x715))^x716);

    if (t169 != 13105370) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x717 = INT8_MIN;
	int64_t x718 = INT64_MAX;
	int8_t x719 = 1;
	int16_t x720 = -1;
	volatile int32_t t170 = -1462;

    t170 = ((x717+(x718<=x719))^x720);

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x721 = 26339400638LLU;
	static uint64_t x722 = 7286877362LLU;
	static int16_t x723 = -4356;
	uint64_t t171 = 2118071822097745833LLU;

    t171 = ((x721+(x722<=x723))^x724);

    if (t171 != 18446744047370150976LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x725 = INT32_MIN;
	static int8_t x726 = -30;
	uint8_t x727 = 24U;
	int64_t x728 = INT64_MIN;
	int64_t t172 = 62LL;

    t172 = ((x725+(x726<=x727))^x728);

    if (t172 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x729 = 30159102LL;
	int64_t x730 = -1LL;
	int8_t x731 = 20;
	volatile uint16_t x732 = 2U;
	static int64_t t173 = -81697708838656195LL;

    t173 = ((x729+(x730<=x731))^x732);

    if (t173 != 30159101LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x734 = UINT16_MAX;
	int64_t x735 = INT64_MAX;
	int32_t x736 = INT32_MIN;
	volatile int32_t t174 = -294;

    t174 = ((x733+(x734<=x735))^x736);

    if (t174 != 2147483521) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x737 = INT16_MIN;
	int32_t x738 = -1;
	volatile int16_t x739 = 22;
	volatile uint32_t x740 = 58324U;

    t175 = ((x737+(x738<=x739))^x740);

    if (t175 != 4294927317U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x741 = INT64_MIN;
	static int8_t x742 = INT8_MIN;
	int64_t t176 = -2677819660862384046LL;

    t176 = ((x741+(x742<=x743))^x744);

    if (t176 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x746 = 87U;
	int32_t x747 = INT32_MAX;
	int32_t t177 = 461799785;

    t177 = ((x745+(x746<=x747))^x748);

    if (t177 != 2147483646) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x749 = INT64_MIN;
	static int16_t x750 = -1;
	uint16_t x751 = 28634U;
	static uint16_t x752 = 1523U;
	static volatile int64_t t178 = 2650758770417LL;

    t178 = ((x749+(x750<=x751))^x752);

    if (t178 != -9223372036854774286LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x753 = INT16_MIN;
	uint64_t x755 = UINT64_MAX;
	volatile int32_t x756 = INT32_MAX;
	static volatile int32_t t179 = 40680;

    t179 = ((x753+(x754<=x755))^x756);

    if (t179 != -2147450882) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x757 = 60485694334623005LLU;
	int64_t x759 = -2846026208616042LL;
	int16_t x760 = 93;
	uint64_t t180 = 13036431812720899LLU;

    t180 = ((x757+(x758<=x759))^x760);

    if (t180 != 60485694334623043LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x765 = 95118668U;
	volatile uint64_t x766 = 2LLU;
	uint16_t x767 = 13U;
	uint32_t t181 = 3111935U;

    t181 = ((x765+(x766<=x767))^x768);

    if (t181 != 2242602317U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x769 = -4;
	int64_t x771 = -1LL;

    t182 = ((x769+(x770<=x771))^x772);

    if (t182 != -3) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x773 = INT32_MAX;
	static volatile int32_t x776 = INT32_MIN;
	static volatile int32_t t183 = 532048281;

    t183 = ((x773+(x774<=x775))^x776);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x777 = -19;
	int32_t x778 = 1796;
	uint16_t x779 = 4038U;
	int8_t x780 = INT8_MIN;

    t184 = ((x777+(x778<=x779))^x780);

    if (t184 != 110) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x781 = -24;
	static int32_t t185 = -3;

    t185 = ((x781+(x782<=x783))^x784);

    if (t185 != -33) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x785 = 102U;
	int64_t x786 = -55808LL;
	static int8_t x787 = 0;
	uint32_t x788 = 1U;
	volatile uint32_t t186 = 211347654U;

    t186 = ((x785+(x786<=x787))^x788);

    if (t186 != 102U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x789 = INT8_MAX;
	int32_t x790 = -1;
	volatile uint64_t x791 = 103953704930LLU;
	static volatile uint32_t x792 = 149475U;
	static volatile uint32_t t187 = 116863U;

    t187 = ((x789+(x790<=x791))^x792);

    if (t187 != 149404U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x793 = 1314157LLU;
	static volatile int64_t x794 = INT64_MIN;
	volatile uint8_t x795 = UINT8_MAX;
	volatile int32_t x796 = 601749;

    t188 = ((x793+(x794<=x795))^x796);

    if (t188 != 1909755LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x797 = -1;
	volatile uint8_t x798 = 0U;
	static int8_t x799 = 4;
	int64_t x800 = -1LL;
	volatile int64_t t189 = -835832098085532LL;

    t189 = ((x797+(x798<=x799))^x800);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x801 = INT16_MIN;
	uint64_t x802 = 1584LLU;
	static volatile uint8_t x803 = UINT8_MAX;
	static volatile int16_t x804 = 288;
	volatile int32_t t190 = 8026525;

    t190 = ((x801+(x802<=x803))^x804);

    if (t190 != -32480) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x805 = UINT64_MAX;
	uint16_t x806 = UINT16_MAX;
	int8_t x808 = INT8_MIN;
	volatile uint64_t t191 = 21565203186109814LLU;

    t191 = ((x805+(x806<=x807))^x808);

    if (t191 != 127LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x811 = -1;
	static int16_t x812 = -8;
	int32_t t192 = 11417015;

    t192 = ((x809+(x810<=x811))^x812);

    if (t192 != -8) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x813 = 4U;
	uint8_t x814 = UINT8_MAX;
	int32_t x816 = INT32_MIN;

    t193 = ((x813+(x814<=x815))^x816);

    if (t193 != -2147483643) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x817 = INT16_MIN;
	uint32_t x819 = UINT32_MAX;
	static int32_t x820 = INT32_MIN;
	int32_t t194 = 118064;

    t194 = ((x817+(x818<=x819))^x820);

    if (t194 != 2147450881) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x821 = UINT8_MAX;
	uint8_t x822 = 41U;
	volatile int16_t x823 = INT16_MIN;
	volatile int16_t x824 = -1;
	int32_t t195 = 51956;

    t195 = ((x821+(x822<=x823))^x824);

    if (t195 != -256) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x825 = UINT64_MAX;
	int8_t x826 = 6;
	static volatile int8_t x827 = INT8_MAX;
	int16_t x828 = INT16_MIN;
	volatile uint64_t t196 = 367007351438082758LLU;

    t196 = ((x825+(x826<=x827))^x828);

    if (t196 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x829 = UINT16_MAX;
	volatile int64_t x831 = -1LL;
	uint16_t x832 = UINT16_MAX;
	static volatile int32_t t197 = 120612;

    t197 = ((x829+(x830<=x831))^x832);

    if (t197 != 131071) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x833 = 114U;
	static uint16_t x834 = 145U;
	int32_t x835 = INT32_MIN;
	uint8_t x836 = 2U;
	int32_t t198 = -2;

    t198 = ((x833+(x834<=x835))^x836);

    if (t198 != 112) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x837 = 25U;
	uint16_t x839 = UINT16_MAX;
	static uint32_t x840 = UINT32_MAX;
	static volatile uint32_t t199 = 112U;

    t199 = ((x837+(x838<=x839))^x840);

    if (t199 != 4294967269U) { NG(); } else { ; }
	
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

