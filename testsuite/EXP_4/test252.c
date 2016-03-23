
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

volatile uint16_t x4 = 3U;
uint32_t x8 = 2917792U;
volatile uint32_t t1 = 80272U;
uint64_t x12 = 27103388521272712LLU;
volatile uint32_t x13 = 60U;
int8_t x14 = -27;
uint16_t x18 = 3236U;
uint64_t t5 = 12076191783744141LLU;
uint16_t x32 = 0U;
static int64_t x36 = 489174LL;
int64_t t7 = 9LL;
volatile int64_t t8 = -219794490430586LL;
uint32_t x43 = UINT32_MAX;
int64_t x44 = INT64_MAX;
volatile int64_t t9 = -318478629827839LL;
volatile uint64_t t10 = 40786034975207LLU;
uint8_t x53 = 1U;
uint32_t t11 = 456U;
int16_t x59 = 476;
volatile int64_t t12 = 1LL;
int32_t x70 = 448428503;
int16_t x72 = -585;
int32_t t15 = 0;
uint16_t x76 = 30U;
volatile uint64_t t16 = 239097LLU;
volatile int8_t x83 = -6;
static int32_t x90 = INT32_MIN;
uint32_t x92 = 22U;
int16_t x110 = INT16_MIN;
int64_t x112 = 251LL;
static volatile int64_t t23 = -11369840973912LL;
int16_t x128 = 1;
int32_t t30 = 544249;
int16_t x158 = -1;
static volatile int32_t t32 = 437931;
uint16_t x165 = UINT16_MAX;
int16_t x166 = INT16_MAX;
volatile uint32_t t34 = 5904430U;
volatile uint64_t t35 = 2583078817120610534LLU;
int8_t x173 = 0;
int16_t x182 = INT16_MAX;
uint64_t t40 = 791LLU;
static int16_t x224 = INT16_MIN;
uint32_t x235 = 123U;
int32_t x242 = 2;
static int16_t x251 = -1064;
uint64_t x255 = 16377781LLU;
uint64_t t51 = 15625564500LLU;
uint16_t x263 = 3U;
uint64_t x276 = UINT64_MAX;
static uint64_t t56 = 3932249050164623LLU;
int16_t x282 = 14;
int32_t x286 = INT32_MIN;
uint8_t x292 = 13U;
int8_t x299 = INT8_MAX;
static volatile uint16_t x300 = 118U;
uint64_t t62 = 761644802413582LLU;
int32_t t63 = INT32_MIN;
uint64_t x305 = UINT64_MAX;
int8_t x312 = INT8_MIN;
volatile uint64_t t66 = 19975388701291LLU;
int64_t x325 = INT64_MIN;
int16_t x332 = INT16_MIN;
static int64_t t69 = -1LL;
int16_t x350 = -1;
uint8_t x351 = 7U;
int8_t x352 = -1;
static int32_t t74 = 108215;
int32_t x367 = -94;
uint64_t x368 = 13279364269LLU;
uint64_t x370 = UINT64_MAX;
volatile int8_t x371 = 5;
static volatile uint64_t t79 = 958795501840434LLU;
int32_t x382 = -1;
int64_t x383 = INT64_MAX;
static uint64_t x384 = 2196175795LLU;
static uint64_t t81 = 26LLU;
static int16_t x387 = INT16_MIN;
volatile uint64_t t82 = 3276868705243LLU;
volatile uint64_t x400 = 469LLU;
volatile int64_t t85 = -332165075689LL;
int16_t x406 = INT16_MAX;
static uint8_t x409 = 16U;
int64_t t90 = 122970355LL;
int64_t x443 = INT64_MAX;
uint16_t x444 = 117U;
uint16_t x445 = 1U;
int64_t t93 = 2414016LL;
uint16_t x451 = 1825U;
int16_t x457 = 1;
int8_t x460 = 2;
static uint8_t x462 = UINT8_MAX;
uint64_t x463 = 286LLU;
int32_t x465 = INT32_MIN;
volatile int8_t x470 = -9;
volatile int32_t x473 = -1;
static volatile uint64_t x492 = 539201698153757LLU;
volatile uint64_t t102 = 14946648LLU;
static int32_t x497 = INT32_MAX;
static int32_t x500 = INT32_MAX;
volatile int64_t x506 = INT64_MAX;
static uint64_t x509 = UINT64_MAX;
static volatile int64_t t108 = -3LL;
int8_t x518 = -1;
static volatile uint64_t t109 = 44487563LLU;
uint8_t x541 = 0U;
int8_t x546 = INT8_MAX;
volatile uint64_t t114 = 6194554735097613LLU;
uint64_t x551 = 56223456462899235LLU;
int64_t t117 = INT64_MAX;
int64_t x561 = INT64_MIN;
uint8_t x566 = UINT8_MAX;
uint16_t x570 = 1158U;
int64_t t120 = -21904399136032LL;
int8_t x576 = INT8_MIN;
int64_t t121 = 13543005947345LL;
volatile int64_t t122 = 7397719466LL;
int16_t x591 = INT16_MIN;
int8_t x592 = INT8_MAX;
static volatile int64_t x612 = -1LL;
volatile int64_t t133 = 198443161527LL;
uint64_t x633 = 267292979LLU;
int16_t x637 = -1;
uint64_t x639 = 513655729LLU;
uint64_t t135 = UINT64_MAX;
int8_t x645 = INT8_MIN;
static uint32_t x657 = UINT32_MAX;
volatile int64_t t139 = -18862270825292LL;
uint16_t x661 = 1381U;
int64_t x662 = INT64_MAX;
int64_t x675 = INT64_MIN;
volatile uint64_t t143 = 4244082LLU;
int64_t x681 = 3729295489LL;
uint64_t t144 = 100540644246845LLU;
volatile uint32_t x685 = UINT32_MAX;
static int64_t x687 = -1LL;
uint16_t x688 = 1U;
int8_t x700 = INT8_MIN;
uint64_t x705 = UINT64_MAX;
uint32_t x706 = 302422U;
int64_t x710 = 509049LL;
int16_t x711 = 122;
int32_t x712 = -1;
int8_t x715 = -1;
volatile int64_t t150 = 49144885LL;
uint32_t x718 = 74U;
volatile uint64_t t151 = 1552489LLU;
volatile int8_t x723 = 31;
static int8_t x726 = INT8_MAX;
volatile int64_t t154 = 43850075992184175LL;
volatile int8_t x737 = -1;
int32_t x739 = INT32_MIN;
volatile int64_t x745 = 1410668906785LL;
static uint32_t x746 = 84U;
volatile int64_t x747 = INT64_MAX;
static volatile int64_t t157 = 687605LL;
int8_t x751 = INT8_MIN;
uint16_t x755 = UINT16_MAX;
volatile int32_t x780 = 37;
static volatile uint8_t x781 = UINT8_MAX;
int8_t x783 = -1;
volatile int64_t x784 = INT64_MIN;
volatile int16_t x789 = INT16_MIN;
int16_t x790 = INT16_MIN;
static int32_t t166 = 11;
volatile int8_t x809 = -1;
int64_t x811 = 1LL;
uint64_t x812 = UINT64_MAX;
uint64_t t168 = 5926095812LLU;
uint16_t x821 = UINT16_MAX;
static int8_t x824 = INT8_MIN;
uint32_t x836 = 391619U;
static int8_t x843 = INT8_MIN;
uint32_t x852 = 430030U;
int16_t x860 = INT16_MIN;
int16_t x868 = INT16_MAX;
int8_t x870 = -1;
int16_t x875 = -318;
int32_t t182 = -962264549;
static int32_t x887 = INT32_MIN;
uint64_t t184 = UINT64_MAX;
uint16_t x891 = 14996U;
int64_t t185 = -766866LL;
uint16_t x898 = 0U;
int16_t x900 = INT16_MIN;
int8_t x909 = INT8_MIN;
static uint16_t x912 = 21U;
uint64_t x916 = UINT64_MAX;
int64_t x918 = -1LL;
int64_t x920 = -1LL;
int8_t x922 = INT8_MIN;
int8_t x925 = -51;
int32_t x928 = INT32_MIN;
volatile uint16_t x931 = 0U;
int8_t x934 = INT8_MIN;
int16_t x938 = 2;
int8_t x945 = 10;
volatile uint32_t x953 = UINT32_MAX;
uint32_t t199 = 292189U;


void f0(void) {
    	int8_t x1 = -1;
	int8_t x2 = INT8_MAX;
	int16_t x3 = INT16_MIN;
	int32_t t0 = 1346;

    t0 = (x1^(x2/(x3-x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	static int8_t x6 = INT8_MIN;
	int16_t x7 = INT16_MIN;

    t1 = (x5^(x6/(x7-x8)));

    if (t1 != 65534U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 430LLU;
	volatile int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	static volatile uint64_t t2 = 3687954LLU;

    t2 = (x9^(x10/(x11-x12)));

    if (t2 != 431LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x15 = -1LL;
	int64_t x16 = INT64_MIN;
	int64_t t3 = 1LL;

    t3 = (x13^(x14/(x15-x16)));

    if (t3 != 60LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -267;
	static uint64_t x19 = 96985582LLU;
	int8_t x20 = 25;
	uint64_t t4 = 22325969LLU;

    t4 = (x17^(x18/(x19-x20)));

    if (t4 != 18446744073709551349LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 2940U;
	static uint64_t x22 = UINT64_MAX;
	volatile uint64_t x23 = UINT64_MAX;
	uint16_t x24 = UINT16_MAX;

    t5 = (x21^(x22/(x23-x24)));

    if (t5 != 2941LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -6493;
	int16_t x30 = -1;
	int64_t x31 = INT64_MAX;
	int64_t t6 = -2096984755369663812LL;

    t6 = (x29^(x30/(x31-x32)));

    if (t6 != -6493LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	static uint8_t x35 = 0U;

    t7 = (x33^(x34/(x35-x36)));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x37 = 1263LL;
	int16_t x38 = -1;
	volatile int32_t x39 = -1;
	uint32_t x40 = 19127U;

    t8 = (x37^(x38/(x39-x40)));

    if (t8 != 1262LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = 273086720;
	uint32_t x42 = 2U;

    t9 = (x41^(x42/(x43-x44)));

    if (t9 != 273086720LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = 31494812847049LLU;
	int16_t x46 = INT16_MAX;
	int64_t x47 = INT64_MAX;
	static volatile int8_t x48 = 57;

    t10 = (x45^(x46/(x47-x48)));

    if (t10 != 31494812847049LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x54 = INT16_MAX;
	int32_t x55 = INT32_MIN;
	static volatile uint32_t x56 = 632203568U;

    t11 = (x53^(x54/(x55-x56)));

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -103530373847179LL;
	static volatile uint32_t x58 = UINT32_MAX;
	int32_t x60 = -6;

    t12 = (x57^(x58/(x59-x60)));

    if (t12 != -103530382749451LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = UINT64_MAX;
	int64_t x62 = -1LL;
	volatile int8_t x63 = 1;
	static volatile int16_t x64 = -4;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = (x61^(x62/(x63-x64)));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x65 = INT64_MIN;
	int16_t x66 = 134;
	static int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MAX;
	volatile int64_t t14 = INT64_MIN;

    t14 = (x65^(x66/(x67-x68)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = INT8_MIN;
	int16_t x71 = INT16_MAX;

    t15 = (x69^(x70/(x71-x72)));

    if (t15 != -13563) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x73 = 17;
	uint32_t x74 = UINT32_MAX;
	volatile uint64_t x75 = UINT64_MAX;

    t16 = (x73^(x74/(x75-x76)));

    if (t16 != 17LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = -1LL;
	int64_t x78 = INT64_MIN;
	static int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MAX;
	volatile int64_t t17 = -22967014990520452LL;

    t17 = (x77^(x78/(x79-x80)));

    if (t17 != -280388266814251LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = INT8_MAX;
	volatile int64_t x82 = INT64_MAX;
	volatile int8_t x84 = INT8_MIN;
	volatile int64_t t18 = -46LL;

    t18 = (x81^(x82/(x83-x84)));

    if (t18 != 75601410138153939LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MIN;
	static int64_t x86 = INT64_MAX;
	static int32_t x87 = INT32_MAX;
	uint16_t x88 = 3142U;
	volatile int64_t t19 = -8934363666LL;

    t19 = (x85^(x86/(x87-x88)));

    if (t19 != -9223372032559802226LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x91 = -1;
	volatile int64_t t20 = INT64_MIN;

    t20 = (x89^(x90/(x91-x92)));

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = -11;
	int16_t x94 = -1;
	uint8_t x95 = 0U;
	int32_t x96 = INT32_MAX;
	volatile int32_t t21 = 107637;

    t21 = (x93^(x94/(x95-x96)));

    if (t21 != -11) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = INT64_MIN;
	static uint64_t x106 = UINT64_MAX;
	int32_t x107 = -11856;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t22 = 1004113458LLU;

    t22 = (x105^(x106/(x107-x108)));

    if (t22 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x109 = -1;
	int8_t x111 = INT8_MIN;

    t23 = (x109^(x110/(x111-x112)));

    if (t23 != -87LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x113 = UINT64_MAX;
	int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MAX;
	volatile int16_t x116 = 1;
	static volatile uint64_t t24 = UINT64_MAX;

    t24 = (x113^(x114/(x115-x116)));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = INT64_MIN;
	static int16_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int64_t x120 = -1LL;
	int64_t t25 = INT64_MIN;

    t25 = (x117^(x118/(x119-x120)));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x121 = -2600;
	int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	volatile int64_t x124 = INT64_MIN;
	volatile int64_t t26 = 11609542543LL;

    t26 = (x121^(x122/(x123-x124)));

    if (t26 != -2600LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x125 = 2LLU;
	int16_t x126 = -1;
	static int32_t x127 = 694646;
	static uint64_t t27 = 3854854884212LLU;

    t27 = (x125^(x126/(x127-x128)));

    if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x133 = 2U;
	int16_t x134 = INT16_MIN;
	int8_t x135 = -24;
	int64_t x136 = INT64_MIN;
	int64_t t28 = -2138588443908474LL;

    t28 = (x133^(x134/(x135-x136)));

    if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x141 = 19U;
	static uint64_t x142 = 28309474826153LLU;
	static volatile int64_t x143 = 23468LL;
	int32_t x144 = -209565;
	uint64_t t29 = 412607LLU;

    t29 = (x141^(x142/(x143-x144)));

    if (t29 != 121482669LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x149 = INT16_MIN;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = INT8_MAX;
	uint8_t x152 = 0U;

    t30 = (x149^(x150/(x151-x152)));

    if (t30 != -32252) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 5U;
	static uint8_t x156 = UINT8_MAX;
	int32_t t31 = 6;

    t31 = (x153^(x154/(x155-x156)));

    if (t31 != -8589842) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x157 = 0U;
	static volatile int8_t x159 = INT8_MIN;
	int8_t x160 = 1;

    t32 = (x157^(x158/(x159-x160)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x161 = INT64_MIN;
	volatile int16_t x162 = INT16_MIN;
	volatile uint32_t x163 = 31U;
	uint16_t x164 = 3U;
	volatile int64_t t33 = -33LL;

    t33 = (x161^(x162/(x163-x164)));

    if (t33 != -9223372036701385290LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x167 = INT32_MAX;
	volatile uint32_t x168 = 8U;

    t34 = (x165^(x166/(x167-x168)));

    if (t34 != 65535U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x169 = -760;
	uint64_t x170 = 3158LLU;
	uint64_t x171 = 240LLU;
	int16_t x172 = -29;

    t35 = (x169^(x170/(x171-x172)));

    if (t35 != 18446744073709550851LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x174 = -8379953738LL;
	int8_t x175 = -1;
	uint8_t x176 = 57U;
	static volatile int64_t t36 = 78673LL;

    t36 = (x173^(x174/(x175-x176)));

    if (t36 != 144481961LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x181 = -58;
	volatile int16_t x183 = INT16_MIN;
	uint32_t x184 = 107393020U;
	volatile uint32_t t37 = 1U;

    t37 = (x181^(x182/(x183-x184)));

    if (t37 != 4294967238U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x189 = -7606;
	int32_t x190 = 1138;
	int16_t x191 = -1;
	uint32_t x192 = 2774867U;
	uint32_t t38 = 2U;

    t38 = (x189^(x190/(x191-x192)));

    if (t38 != 4294959690U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x193 = 1;
	uint64_t x194 = 1LLU;
	uint64_t x195 = 13LLU;
	uint16_t x196 = UINT16_MAX;
	volatile uint64_t t39 = 145434183LLU;

    t39 = (x193^(x194/(x195-x196)));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x197 = INT8_MAX;
	int8_t x198 = INT8_MIN;
	int8_t x199 = -1;
	uint64_t x200 = 25786LLU;

    t40 = (x197^(x198/(x199-x200)));

    if (t40 != 126LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x205 = 641846142676LLU;
	int32_t x206 = INT32_MAX;
	int16_t x207 = INT16_MIN;
	uint8_t x208 = 4U;
	static uint64_t t41 = 5301LLU;

    t41 = (x205^(x206/(x207-x208)));

    if (t41 != 18446743431863461596LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x209 = INT8_MAX;
	int32_t x210 = -284;
	static int32_t x211 = -141630;
	int16_t x212 = 1;
	volatile int32_t t42 = -1;

    t42 = (x209^(x210/(x211-x212)));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x213 = INT8_MIN;
	static volatile int8_t x214 = -1;
	uint32_t x215 = 29331U;
	int16_t x216 = INT16_MIN;
	volatile uint32_t t43 = 449976U;

    t43 = (x213^(x214/(x215-x216)));

    if (t43 != 4294898091U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x217 = INT8_MIN;
	int16_t x218 = -1;
	static int32_t x219 = INT32_MAX;
	int64_t x220 = -1LL;
	int64_t t44 = 33048810525252LL;

    t44 = (x217^(x218/(x219-x220)));

    if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x221 = -1;
	volatile int16_t x222 = INT16_MAX;
	int16_t x223 = -5394;
	int32_t t45 = -812831;

    t45 = (x221^(x222/(x223-x224)));

    if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x225 = 54U;
	volatile int8_t x226 = -1;
	static volatile int64_t x227 = -1LL;
	int64_t x228 = 58LL;
	int64_t t46 = 370820LL;

    t46 = (x225^(x226/(x227-x228)));

    if (t46 != 54LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x229 = 1;
	int32_t x230 = -1;
	static int64_t x231 = -1LL;
	int32_t x232 = -225091014;
	int64_t t47 = 1LL;

    t47 = (x229^(x230/(x231-x232)));

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x233 = 3921U;
	volatile int8_t x234 = INT8_MAX;
	uint8_t x236 = UINT8_MAX;
	uint32_t t48 = 356294415U;

    t48 = (x233^(x234/(x235-x236)));

    if (t48 != 3921U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x241 = INT64_MAX;
	int32_t x243 = 37;
	static volatile int64_t x244 = 4141633LL;
	int64_t t49 = INT64_MAX;

    t49 = (x241^(x242/(x243-x244)));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x249 = INT8_MAX;
	int8_t x250 = 55;
	int64_t x252 = -1LL;
	static int64_t t50 = 21300LL;

    t50 = (x249^(x250/(x251-x252)));

    if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x253 = 10U;
	uint32_t x254 = UINT32_MAX;
	uint32_t x256 = UINT32_MAX;

    t51 = (x253^(x254/(x255-x256)));

    if (t51 != 10LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x257 = -1LL;
	int64_t x258 = INT64_MIN;
	static int8_t x259 = INT8_MIN;
	uint8_t x260 = UINT8_MAX;
	int64_t t52 = -122945LL;

    t52 = (x257^(x258/(x259-x260)));

    if (t52 != -24081911323380616LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x261 = 20058U;
	int16_t x262 = INT16_MIN;
	uint16_t x264 = UINT16_MAX;
	volatile uint32_t t53 = 446476469U;

    t53 = (x261^(x262/(x263-x264)));

    if (t53 != 20058U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x265 = INT32_MIN;
	uint8_t x266 = 34U;
	static int16_t x267 = INT16_MIN;
	int64_t x268 = -1LL;
	volatile int64_t t54 = 711276797819875136LL;

    t54 = (x265^(x266/(x267-x268)));

    if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x269 = 2145U;
	static int64_t x270 = -3105026474939LL;
	uint32_t x271 = 6795U;
	int8_t x272 = 14;
	volatile int64_t t55 = 91292473379366LL;

    t55 = (x269^(x270/(x271-x272)));

    if (t55 != -457903050LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x273 = 2618;
	uint32_t x274 = 372404651U;
	volatile int64_t x275 = INT64_MIN;

    t56 = (x273^(x274/(x275-x276)));

    if (t56 != 2618LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x277 = 12;
	int8_t x278 = -1;
	int8_t x279 = INT8_MIN;
	int16_t x280 = 358;
	int32_t t57 = -12;

    t57 = (x277^(x278/(x279-x280)));

    if (t57 != 12) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x281 = INT16_MIN;
	static int64_t x283 = INT64_MIN;
	static int32_t x284 = INT32_MIN;
	volatile int64_t t58 = 23079114667LL;

    t58 = (x281^(x282/(x283-x284)));

    if (t58 != -32768LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x285 = INT16_MIN;
	int32_t x287 = INT32_MAX;
	int16_t x288 = INT16_MAX;
	int32_t t59 = -26377921;

    t59 = (x285^(x286/(x287-x288)));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x289 = INT32_MIN;
	volatile int16_t x290 = -1;
	int8_t x291 = INT8_MAX;
	int32_t t60 = INT32_MIN;

    t60 = (x289^(x290/(x291-x292)));

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x293 = 1493U;
	uint8_t x294 = 6U;
	static volatile int32_t x295 = -1;
	volatile uint32_t x296 = 415U;
	uint32_t t61 = 1618316U;

    t61 = (x293^(x294/(x295-x296)));

    if (t61 != 1493U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x297 = 49393065021LLU;
	int8_t x298 = INT8_MIN;

    t62 = (x297^(x298/(x299-x300)));

    if (t62 != 18446744024316486607LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x301 = INT32_MIN;
	volatile int32_t x302 = -1;
	int16_t x303 = 9745;
	int16_t x304 = 132;

    t63 = (x301^(x302/(x303-x304)));

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MIN;
	volatile int16_t x308 = INT16_MAX;
	uint64_t t64 = 1047114935737452LLU;

    t64 = (x305^(x306/(x307-x308)));

    if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x309 = INT8_MIN;
	uint8_t x310 = UINT8_MAX;
	uint8_t x311 = 15U;
	volatile int32_t t65 = -1002345181;

    t65 = (x309^(x310/(x311-x312)));

    if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x317 = INT32_MIN;
	uint64_t x318 = 38484611435216477LLU;
	uint8_t x319 = UINT8_MAX;
	volatile int16_t x320 = -1;

    t66 = (x317^(x318/(x319-x320)));

    if (t66 != 18446593741479864894LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x321 = INT64_MAX;
	volatile int8_t x322 = 18;
	int32_t x323 = -1;
	volatile int8_t x324 = INT8_MAX;
	int64_t t67 = INT64_MAX;

    t67 = (x321^(x322/(x323-x324)));

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;
	int32_t x328 = 0;
	static int64_t t68 = INT64_MIN;

    t68 = (x325^(x326/(x327-x328)));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x329 = 8966U;
	int64_t x330 = -115692098146161453LL;
	int32_t x331 = INT32_MIN;

    t69 = (x329^(x330/(x331-x332)));

    if (t69 != 53882607LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x333 = UINT32_MAX;
	volatile int64_t x334 = INT64_MIN;
	volatile int16_t x335 = INT16_MIN;
	uint8_t x336 = 8U;
	volatile int64_t t70 = 12172447636LL;

    t70 = (x333^(x334/(x335-x336)));

    if (t70 != 281410535428095LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x337 = INT16_MIN;
	volatile uint32_t x338 = 435632807U;
	static int64_t x339 = 893LL;
	int8_t x340 = INT8_MAX;
	int64_t t71 = -2681766068453332037LL;

    t71 = (x337^(x338/(x339-x340)));

    if (t71 != -578169LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x341 = 9158032558LLU;
	int8_t x342 = -1;
	int8_t x343 = INT8_MAX;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t72 = 65384993278LLU;

    t72 = (x341^(x342/(x343-x344)));

    if (t72 != 144115178917823313LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x345 = -1LL;
	volatile int64_t x346 = INT64_MIN;
	uint32_t x347 = 14U;
	uint16_t x348 = 23859U;
	volatile int64_t t73 = -38725760165647688LL;

    t73 = (x345^(x346/(x347-x348)));

    if (t73 != 2147495569LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x349 = 0;

    t74 = (x349^(x350/(x351-x352)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x353 = 446654U;
	uint64_t x354 = UINT64_MAX;
	uint16_t x355 = 19645U;
	uint8_t x356 = 9U;
	static uint64_t t75 = 54LLU;

    t75 = (x353^(x354/(x355-x356)));

    if (t75 != 939434918842596LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x357 = INT64_MAX;
	int64_t x358 = INT64_MIN;
	volatile int8_t x359 = INT8_MIN;
	uint64_t x360 = 1508842LLU;
	uint64_t t76 = 1108LLU;

    t76 = (x357^(x358/(x359-x360)));

    if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x361 = -6;
	volatile int32_t x362 = -3;
	int8_t x363 = 34;
	static uint16_t x364 = 13762U;
	static int32_t t77 = -75066842;

    t77 = (x361^(x362/(x363-x364)));

    if (t77 != -6) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x365 = -168069441095860285LL;
	uint16_t x366 = UINT16_MAX;
	static volatile uint64_t t78 = 1441502317511883132LLU;

    t78 = (x365^(x366/(x367-x368)));

    if (t78 != 18278674632613691331LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x369 = INT16_MIN;
	static volatile int8_t x372 = -17;

    t79 = (x369^(x370/(x371-x372)));

    if (t79 != 17608255706722738920LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x373 = 29571404669LLU;
	volatile int16_t x374 = INT16_MIN;
	volatile int32_t x375 = -1;
	uint8_t x376 = UINT8_MAX;
	uint64_t t80 = 8532166081206916LLU;

    t80 = (x373^(x374/(x375-x376)));

    if (t80 != 29571404797LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x381 = INT16_MIN;

    t81 = (x381^(x382/(x383-x384)));

    if (t81 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x385 = 0U;
	volatile int16_t x386 = INT16_MIN;
	static uint64_t x388 = 467519847038510LLU;

    t82 = (x385^(x386/(x387-x388)));

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x393 = UINT32_MAX;
	volatile int32_t x394 = INT32_MAX;
	static int8_t x395 = INT8_MAX;
	uint32_t x396 = UINT32_MAX;
	uint32_t t83 = 182122U;

    t83 = (x393^(x394/(x395-x396)));

    if (t83 != 4278190080U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x397 = -1;
	int64_t x398 = -142559LL;
	uint8_t x399 = UINT8_MAX;
	uint64_t t84 = UINT64_MAX;

    t84 = (x397^(x398/(x399-x400)));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x401 = 345;
	int64_t x402 = 3572LL;
	volatile uint16_t x403 = UINT16_MAX;
	uint16_t x404 = 4480U;

    t85 = (x401^(x402/(x403-x404)));

    if (t85 != 345LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x405 = -1;
	int16_t x407 = 12;
	static int16_t x408 = INT16_MIN;
	int32_t t86 = 7660;

    t86 = (x405^(x406/(x407-x408)));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MAX;
	uint16_t x412 = UINT16_MAX;
	volatile int64_t t87 = -38915366LL;

    t87 = (x409^(x410/(x411-x412)));

    if (t87 != 16LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x413 = 7074U;
	uint64_t x414 = UINT64_MAX;
	uint8_t x415 = UINT8_MAX;
	static int16_t x416 = -7950;
	volatile uint64_t t88 = 3272250888LLU;

    t88 = (x413^(x414/(x415-x416)));

    if (t88 != 2248232062614547LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x417 = INT64_MAX;
	static uint16_t x418 = 6U;
	volatile int64_t x419 = -88422576621827049LL;
	int16_t x420 = -1;
	int64_t t89 = INT64_MAX;

    t89 = (x417^(x418/(x419-x420)));

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x433 = INT16_MIN;
	static uint16_t x434 = 819U;
	uint32_t x435 = 1042136278U;
	int64_t x436 = -1LL;

    t90 = (x433^(x434/(x435-x436)));

    if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x437 = 3163274LLU;
	int64_t x438 = 111470308219246LL;
	int64_t x439 = 0LL;
	int8_t x440 = INT8_MIN;
	volatile uint64_t t91 = 76867907822989179LLU;

    t91 = (x437^(x438/(x439-x440)));

    if (t91 != 870860749624LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x441 = INT32_MAX;
	int16_t x442 = INT16_MIN;
	int64_t t92 = -245LL;

    t92 = (x441^(x442/(x443-x444)));

    if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x446 = 1;
	volatile int16_t x447 = INT16_MAX;
	int64_t x448 = INT64_MAX;

    t93 = (x445^(x446/(x447-x448)));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x449 = -96709947;
	int16_t x450 = 0;
	int32_t x452 = -1054788212;
	volatile int32_t t94 = -8634730;

    t94 = (x449^(x450/(x451-x452)));

    if (t94 != -96709947) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x458 = INT16_MIN;
	volatile int8_t x459 = INT8_MIN;
	volatile int32_t t95 = 5573891;

    t95 = (x457^(x458/(x459-x460)));

    if (t95 != 253) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x461 = -1;
	int32_t x464 = INT32_MIN;
	static volatile uint64_t t96 = UINT64_MAX;

    t96 = (x461^(x462/(x463-x464)));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x466 = INT32_MIN;
	int16_t x467 = INT16_MAX;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t97 = 0;

    t97 = (x465^(x466/(x467-x468)));

    if (t97 != -2147418112) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x469 = -894;
	uint64_t x471 = 1324578LLU;
	volatile int8_t x472 = -36;
	uint64_t t98 = 17LLU;

    t98 = (x469^(x470/(x471-x472)));

    if (t98 != 18446730147581583346LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x474 = INT8_MIN;
	uint8_t x475 = 1U;
	int8_t x476 = INT8_MAX;
	int32_t t99 = -58829;

    t99 = (x473^(x474/(x475-x476)));

    if (t99 != -2) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x477 = 0;
	static uint32_t x478 = 128U;
	static int32_t x479 = -10617;
	uint16_t x480 = 5U;
	uint32_t t100 = 97290951U;

    t100 = (x477^(x478/(x479-x480)));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x485 = -58;
	static int32_t x486 = INT32_MAX;
	int16_t x487 = 533;
	int8_t x488 = INT8_MIN;
	int32_t t101 = -35886;

    t101 = (x485^(x486/(x487-x488)));

    if (t101 != -3248882) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x489 = UINT8_MAX;
	int64_t x490 = INT64_MIN;
	int64_t x491 = INT64_MIN;

    t102 = (x489^(x490/(x491-x492)));

    if (t102 != 254LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x493 = INT64_MIN;
	static int16_t x494 = INT16_MAX;
	static int8_t x495 = INT8_MIN;
	int16_t x496 = INT16_MIN;
	int64_t t103 = 3248LL;

    t103 = (x493^(x494/(x495-x496)));

    if (t103 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x498 = 63U;
	volatile int16_t x499 = 88;
	int32_t t104 = INT32_MAX;

    t104 = (x497^(x498/(x499-x500)));

    if (t104 != INT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x501 = INT8_MIN;
	int64_t x502 = -6358606207476LL;
	int16_t x503 = -4113;
	uint32_t x504 = 14440989U;
	int64_t t105 = 136244LL;

    t105 = (x501^(x502/(x503-x504)));

    if (t105 != 1459LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x505 = INT16_MIN;
	int8_t x507 = 1;
	uint32_t x508 = 114819912U;
	volatile int64_t t106 = -8017LL;

    t106 = (x505^(x506/(x507-x508)));

    if (t106 != -2206494330LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x510 = 3978;
	static volatile int16_t x511 = -29;
	uint32_t x512 = 195884U;
	volatile uint64_t t107 = UINT64_MAX;

    t107 = (x509^(x510/(x511-x512)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x513 = 1U;
	int64_t x514 = -1LL;
	int32_t x515 = 592;
	volatile int16_t x516 = INT16_MAX;

    t108 = (x513^(x514/(x515-x516)));

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x517 = UINT32_MAX;
	int8_t x519 = -3;
	volatile uint64_t x520 = 1755LLU;

    t109 = (x517^(x518/(x519-x520)));

    if (t109 != 4294967294LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x521 = UINT16_MAX;
	volatile int64_t x522 = INT64_MIN;
	int64_t x523 = -3615LL;
	int16_t x524 = 8289;
	volatile int64_t t110 = -14976003790330693LL;

    t110 = (x521^(x522/(x523-x524)));

    if (t110 != 774812839181631LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x525 = INT8_MAX;
	int16_t x526 = -1;
	uint16_t x527 = 5U;
	int8_t x528 = INT8_MIN;
	volatile int32_t t111 = -1049305545;

    t111 = (x525^(x526/(x527-x528)));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x533 = -808;
	int32_t x534 = INT32_MIN;
	static int64_t x535 = INT64_MIN;
	volatile int64_t x536 = -289724105657929LL;
	int64_t t112 = 24802454879436LL;

    t112 = (x533^(x534/(x535-x536)));

    if (t112 != -808LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x542 = -10849402;
	static int64_t x543 = 959549412231441977LL;
	static uint32_t x544 = UINT32_MAX;
	static volatile int64_t t113 = -4891076200571193LL;

    t113 = (x541^(x542/(x543-x544)));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x545 = 82464855061269565LLU;
	uint16_t x547 = 80U;
	static uint16_t x548 = 22U;

    t114 = (x545^(x546/(x547-x548)));

    if (t114 != 82464855061269567LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x549 = 1U;
	int64_t x550 = -1LL;
	int16_t x552 = 3491;
	volatile uint64_t t115 = 907165217032LLU;

    t115 = (x549^(x550/(x551-x552)));

    if (t115 != 329LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x553 = -3688062105LL;
	static uint64_t x554 = UINT64_MAX;
	int8_t x555 = -1;
	uint32_t x556 = 99U;
	uint64_t t116 = 10221380614155923LLU;

    t116 = (x553^(x554/(x555-x556)));

    if (t116 != 18446744065726522115LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x557 = INT64_MAX;
	int64_t x558 = -1LL;
	volatile int16_t x559 = INT16_MIN;
	static int16_t x560 = 424;

    t117 = (x557^(x558/(x559-x560)));

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x562 = -1LL;
	int16_t x563 = -1;
	static volatile int32_t x564 = INT32_MIN;
	int64_t t118 = INT64_MIN;

    t118 = (x561^(x562/(x563-x564)));

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x565 = -39;
	uint8_t x567 = 28U;
	volatile int32_t x568 = INT32_MAX;
	static int32_t t119 = -468;

    t119 = (x565^(x566/(x567-x568)));

    if (t119 != -39) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x569 = UINT16_MAX;
	uint32_t x571 = 7332U;
	static int64_t x572 = -12114298258969858LL;

    t120 = (x569^(x570/(x571-x572)));

    if (t120 != 65535LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x573 = INT32_MAX;
	int64_t x574 = INT64_MAX;
	static int32_t x575 = INT32_MIN;

    t121 = (x573^(x574/(x575-x576)));

    if (t121 != -6442450689LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x577 = INT32_MAX;
	int64_t x578 = -1LL;
	static int8_t x579 = 0;
	uint16_t x580 = 8072U;

    t122 = (x577^(x578/(x579-x580)));

    if (t122 != 2147483647LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x581 = UINT8_MAX;
	static volatile uint8_t x582 = 17U;
	uint32_t x583 = 3594U;
	static volatile uint32_t x584 = UINT32_MAX;
	volatile uint32_t t123 = 41U;

    t123 = (x581^(x582/(x583-x584)));

    if (t123 != 255U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x585 = INT8_MIN;
	int32_t x586 = 48073126;
	static volatile int32_t x587 = -1;
	int8_t x588 = 1;
	static int32_t t124 = 3118;

    t124 = (x585^(x586/(x587-x588)));

    if (t124 != 24036525) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x589 = INT64_MIN;
	volatile uint8_t x590 = 5U;
	int64_t t125 = INT64_MIN;

    t125 = (x589^(x590/(x591-x592)));

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x593 = INT64_MIN;
	static int32_t x594 = -3695;
	uint8_t x595 = UINT8_MAX;
	uint64_t x596 = UINT64_MAX;
	uint64_t t126 = 975LLU;

    t126 = (x593^(x594/(x595-x596)));

    if (t126 != 9295429630892703729LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x597 = 30369LLU;
	int64_t x598 = -1LL;
	volatile int16_t x599 = -1;
	uint64_t x600 = 7880838050660466LLU;
	uint64_t t127 = 6LLU;

    t127 = (x597^(x598/(x599-x600)));

    if (t127 != 30368LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x601 = 4001U;
	uint64_t x602 = UINT64_MAX;
	int32_t x603 = INT32_MAX;
	volatile int16_t x604 = 457;
	uint64_t t128 = 6433249495069200LLU;

    t128 = (x601^(x602/(x603-x604)));

    if (t128 != 8589936777LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x609 = INT32_MIN;
	static int8_t x610 = -1;
	uint32_t x611 = 6000294U;
	int64_t t129 = 27038317474103708LL;

    t129 = (x609^(x610/(x611-x612)));

    if (t129 != -2147483648LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x613 = 9;
	volatile int64_t x614 = INT64_MIN;
	static int32_t x615 = -1;
	volatile int8_t x616 = INT8_MAX;
	int64_t t130 = -3067LL;

    t130 = (x613^(x614/(x615-x616)));

    if (t130 != 72057594037927945LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x617 = 2248169218893427082LLU;
	int64_t x618 = -1LL;
	static int64_t x619 = -1LL;
	int16_t x620 = 158;
	uint64_t t131 = 40190254LLU;

    t131 = (x617^(x618/(x619-x620)));

    if (t131 != 2248169218893427082LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x621 = 22U;
	static int64_t x622 = INT64_MIN;
	int32_t x623 = -102;
	volatile int32_t x624 = -139;
	int64_t t132 = 250135213236LL;

    t132 = (x621^(x622/(x623-x624)));

    if (t132 != -249280325320399336LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x629 = UINT8_MAX;
	int32_t x630 = -2136532;
	int16_t x631 = INT16_MIN;
	int64_t x632 = 11511585584666606LL;

    t133 = (x629^(x630/(x631-x632)));

    if (t133 != 255LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x634 = -1LL;
	static uint16_t x635 = 119U;
	volatile uint64_t x636 = UINT64_MAX;
	static volatile uint64_t t134 = 16223842LLU;

    t134 = (x633^(x634/(x635-x636)));

    if (t134 != 153722867476640529LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x638 = 290;
	int16_t x640 = INT16_MIN;

    t135 = (x637^(x638/(x639-x640)));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x646 = UINT32_MAX;
	int64_t x647 = -61829LL;
	uint32_t x648 = 195301100U;
	volatile int64_t t136 = 78948LL;

    t136 = (x645^(x646/(x647-x648)));

    if (t136 != 107LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x649 = UINT8_MAX;
	volatile int64_t x650 = -1LL;
	volatile uint8_t x651 = 0U;
	uint8_t x652 = UINT8_MAX;
	static volatile int64_t t137 = 548445318591769LL;

    t137 = (x649^(x650/(x651-x652)));

    if (t137 != 255LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x653 = -1;
	volatile int8_t x654 = INT8_MIN;
	int8_t x655 = INT8_MIN;
	static int64_t x656 = 56311027LL;
	volatile int64_t t138 = -902413401843181LL;

    t138 = (x653^(x654/(x655-x656)));

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x658 = INT16_MIN;
	int64_t x659 = -1LL;
	int8_t x660 = INT8_MIN;

    t139 = (x657^(x658/(x659-x660)));

    if (t139 != -4294967039LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x663 = 1U;
	int64_t x664 = INT64_MAX;
	volatile int64_t t140 = -846333LL;

    t140 = (x661^(x662/(x663-x664)));

    if (t140 != -1382LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x669 = 254U;
	int16_t x670 = 338;
	uint64_t x671 = 324904938284118291LLU;
	volatile uint64_t x672 = 74082438LLU;
	volatile uint64_t t141 = 9LLU;

    t141 = (x669^(x670/(x671-x672)));

    if (t141 != 254LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x673 = INT8_MAX;
	static uint32_t x674 = UINT32_MAX;
	int32_t x676 = -155073;
	int64_t t142 = 221LL;

    t142 = (x673^(x674/(x675-x676)));

    if (t142 != 127LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x677 = UINT64_MAX;
	int64_t x678 = -2940178146388327147LL;
	int32_t x679 = 2463868;
	static int32_t x680 = INT32_MAX;

    t143 = (x677^(x678/(x679-x680)));

    if (t143 != 18446744072338851832LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x682 = UINT8_MAX;
	volatile uint8_t x683 = 15U;
	static uint64_t x684 = 5264LLU;

    t144 = (x681^(x682/(x683-x684)));

    if (t144 != 3729295489LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x686 = 169;
	int64_t t145 = -7155085934LL;

    t145 = (x685^(x686/(x687-x688)));

    if (t145 != -4294967213LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x689 = INT64_MIN;
	uint32_t x690 = UINT32_MAX;
	int32_t x691 = -1;
	int32_t x692 = INT32_MIN;
	int64_t t146 = 170995LL;

    t146 = (x689^(x690/(x691-x692)));

    if (t146 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x697 = INT32_MAX;
	int64_t x698 = -285LL;
	int8_t x699 = -1;
	int64_t t147 = 236330603LL;

    t147 = (x697^(x698/(x699-x700)));

    if (t147 != -2147483647LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x707 = INT32_MAX;
	int64_t x708 = INT64_MAX;
	uint64_t t148 = UINT64_MAX;

    t148 = (x705^(x706/(x707-x708)));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x709 = INT64_MIN;
	volatile int64_t t149 = -7237487122255LL;

    t149 = (x709^(x710/(x711-x712)));

    if (t149 != -9223372036854771670LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x713 = INT32_MIN;
	int8_t x714 = 0;
	int64_t x716 = -1730LL;

    t150 = (x713^(x714/(x715-x716)));

    if (t150 != -2147483648LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x717 = INT32_MIN;
	uint64_t x719 = 23414110220LLU;
	int16_t x720 = INT16_MIN;

    t151 = (x717^(x718/(x719-x720)));

    if (t151 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x721 = 6;
	static int32_t x722 = -2;
	int8_t x724 = INT8_MIN;
	volatile int32_t t152 = 1;

    t152 = (x721^(x722/(x723-x724)));

    if (t152 != 6) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x725 = -1;
	uint16_t x727 = UINT16_MAX;
	uint8_t x728 = 1U;
	int32_t t153 = -203239795;

    t153 = (x725^(x726/(x727-x728)));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x729 = -22628345683LL;
	int8_t x730 = INT8_MAX;
	int16_t x731 = INT16_MIN;
	uint16_t x732 = UINT16_MAX;

    t154 = (x729^(x730/(x731-x732)));

    if (t154 != -22628345683LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x733 = INT32_MAX;
	int16_t x734 = INT16_MIN;
	static volatile int16_t x735 = 228;
	uint32_t x736 = UINT32_MAX;
	static volatile uint32_t t155 = 13U;

    t155 = (x733^(x734/(x735-x736)));

    if (t155 != 2128728475U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x738 = INT16_MIN;
	uint32_t x740 = 7U;
	static uint32_t t156 = 13U;

    t156 = (x737^(x738/(x739-x740)));

    if (t156 != 4294967294U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x748 = 12162U;

    t157 = (x745^(x746/(x747-x748)));

    if (t157 != 1410668906785LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x749 = 15026831169676LL;
	static volatile int8_t x750 = INT8_MIN;
	int8_t x752 = 0;
	int64_t t158 = -235515LL;

    t158 = (x749^(x750/(x751-x752)));

    if (t158 != 15026831169677LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x753 = -1LL;
	int8_t x754 = INT8_MAX;
	int8_t x756 = -1;
	int64_t t159 = 285140LL;

    t159 = (x753^(x754/(x755-x756)));

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x761 = 16;
	volatile uint64_t x762 = UINT64_MAX;
	uint16_t x763 = 23589U;
	static volatile uint32_t x764 = 96211U;
	volatile uint64_t t160 = 2322533LLU;

    t160 = (x761^(x762/(x763-x764)));

    if (t160 != 4295039935LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x773 = -1LL;
	static volatile int64_t x774 = INT64_MIN;
	volatile int64_t x775 = INT64_MIN;
	static int16_t x776 = -49;
	static volatile int64_t t161 = 3691LL;

    t161 = (x773^(x774/(x775-x776)));

    if (t161 != -2LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x777 = 1692496585849LLU;
	uint32_t x778 = UINT32_MAX;
	static uint64_t x779 = 1LLU;
	uint64_t t162 = 442148LLU;

    t162 = (x777^(x778/(x779-x780)));

    if (t162 != 1692496585849LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x782 = -1;
	int64_t t163 = 25515848197LL;

    t163 = (x781^(x782/(x783-x784)));

    if (t163 != 255LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x791 = 2U;
	static int8_t x792 = -1;
	volatile int32_t t164 = -468635183;

    t164 = (x789^(x790/(x791-x792)));

    if (t164 != 21846) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x793 = -1LL;
	uint64_t x794 = 11178092LLU;
	volatile int64_t x795 = -12916362LL;
	volatile int32_t x796 = 847080;
	static uint64_t t165 = UINT64_MAX;

    t165 = (x793^(x794/(x795-x796)));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x797 = INT32_MIN;
	int32_t x798 = INT32_MAX;
	int16_t x799 = INT16_MAX;
	int32_t x800 = -134308803;

    t166 = (x797^(x798/(x799-x800)));

    if (t166 != -2147483633) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x801 = UINT8_MAX;
	volatile int8_t x802 = INT8_MAX;
	static uint64_t x803 = UINT64_MAX;
	uint8_t x804 = 1U;
	static uint64_t t167 = 0LLU;

    t167 = (x801^(x802/(x803-x804)));

    if (t167 != 255LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x810 = -1;

    t168 = (x809^(x810/(x811-x812)));

    if (t168 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x813 = INT64_MAX;
	int8_t x814 = INT8_MIN;
	static int32_t x815 = 0;
	int8_t x816 = 18;
	int64_t t169 = 8LL;

    t169 = (x813^(x814/(x815-x816)));

    if (t169 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x817 = INT64_MIN;
	uint32_t x818 = UINT32_MAX;
	int32_t x819 = -4826;
	static volatile uint8_t x820 = 1U;
	volatile int64_t t170 = 263803360LL;

    t170 = (x817^(x818/(x819-x820)));

    if (t170 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x822 = 72925401U;
	volatile int64_t x823 = 1059809176791LL;
	int64_t t171 = -48970404LL;

    t171 = (x821^(x822/(x823-x824)));

    if (t171 != 65535LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x825 = INT32_MIN;
	uint64_t x826 = 16241679561936877LLU;
	volatile uint8_t x827 = UINT8_MAX;
	static int64_t x828 = 1415LL;
	volatile uint64_t t172 = 95512597558LLU;

    t172 = (x825^(x826/(x827-x828)));

    if (t172 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x829 = INT32_MIN;
	int16_t x830 = -1;
	int8_t x831 = -3;
	volatile int32_t x832 = -523;
	volatile int32_t t173 = INT32_MIN;

    t173 = (x829^(x830/(x831-x832)));

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x833 = -8914;
	int8_t x834 = -42;
	uint64_t x835 = 152667695286439LLU;
	uint64_t t174 = 46070096053LLU;

    t174 = (x833^(x834/(x835-x836)));

    if (t174 != 18446744073709423315LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x841 = 2LLU;
	static int8_t x842 = INT8_MIN;
	int16_t x844 = -1;
	uint64_t t175 = 9303740413LLU;

    t175 = (x841^(x842/(x843-x844)));

    if (t175 != 3LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x845 = 1U;
	volatile int8_t x846 = INT8_MIN;
	int32_t x847 = 1;
	uint8_t x848 = 3U;
	volatile int32_t t176 = 19;

    t176 = (x845^(x846/(x847-x848)));

    if (t176 != 65) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x849 = INT64_MIN;
	int8_t x850 = -1;
	static int32_t x851 = -1;
	static volatile int64_t t177 = -256935LL;

    t177 = (x849^(x850/(x851-x852)));

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x853 = INT16_MAX;
	uint32_t x854 = UINT32_MAX;
	int16_t x855 = 18;
	volatile int16_t x856 = INT16_MIN;
	volatile uint32_t t178 = 26U;

    t178 = (x853^(x854/(x855-x856)));

    if (t178 != 98375U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x857 = 422U;
	int8_t x858 = -30;
	int32_t x859 = INT32_MIN;
	int32_t t179 = -723922007;

    t179 = (x857^(x858/(x859-x860)));

    if (t179 != 422) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x865 = INT64_MIN;
	uint32_t x866 = 12323510U;
	uint8_t x867 = UINT8_MAX;
	int64_t t180 = INT64_MIN;

    t180 = (x865^(x866/(x867-x868)));

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x869 = 14U;
	int64_t x871 = 17651932LL;
	static volatile uint32_t x872 = 0U;
	static int64_t t181 = -60LL;

    t181 = (x869^(x870/(x871-x872)));

    if (t181 != 14LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x873 = -18;
	int32_t x874 = INT32_MIN;
	static int32_t x876 = -1;

    t182 = (x873^(x874/(x875-x876)));

    if (t182 != -6774382) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x877 = INT64_MIN;
	int16_t x878 = 74;
	static int64_t x879 = 1142LL;
	uint64_t x880 = 21650537LLU;
	uint64_t t183 = 1363889LLU;

    t183 = (x877^(x878/(x879-x880)));

    if (t183 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x885 = -1;
	static int32_t x886 = INT32_MAX;
	static uint64_t x888 = UINT64_MAX;

    t184 = (x885^(x886/(x887-x888)));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x889 = -263731754LL;
	uint16_t x890 = 33U;
	volatile uint32_t x892 = 39U;

    t185 = (x889^(x890/(x891-x892)));

    if (t185 != -263731754LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x893 = INT16_MAX;
	int32_t x894 = INT32_MAX;
	uint16_t x895 = 27709U;
	volatile int32_t x896 = INT32_MAX;
	volatile int32_t t186 = -417;

    t186 = (x893^(x894/(x895-x896)));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x897 = -1;
	static uint32_t x899 = 25240U;
	static uint32_t t187 = UINT32_MAX;

    t187 = (x897^(x898/(x899-x900)));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x901 = UINT16_MAX;
	int64_t x902 = 68633826212LL;
	int32_t x903 = 54852917;
	volatile int32_t x904 = -2;
	int64_t t188 = 223489451LL;

    t188 = (x901^(x902/(x903-x904)));

    if (t188 != 64284LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x910 = 11725;
	uint32_t x911 = 7U;
	uint32_t t189 = 110037776U;

    t189 = (x909^(x910/(x911-x912)));

    if (t189 != 4294967168U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x913 = 18U;
	uint32_t x914 = 1834U;
	static uint8_t x915 = 1U;
	volatile uint64_t t190 = 14978112052LLU;

    t190 = (x913^(x914/(x915-x916)));

    if (t190 != 903LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x917 = UINT16_MAX;
	int8_t x919 = 1;
	int64_t t191 = 13172141689838625LL;

    t191 = (x917^(x918/(x919-x920)));

    if (t191 != 65535LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x921 = UINT64_MAX;
	int8_t x923 = INT8_MIN;
	static int64_t x924 = -1147LL;
	volatile uint64_t t192 = UINT64_MAX;

    t192 = (x921^(x922/(x923-x924)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x926 = 0U;
	int8_t x927 = INT8_MIN;
	volatile int32_t t193 = -2;

    t193 = (x925^(x926/(x927-x928)));

    if (t193 != -51) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x929 = -907819867LL;
	uint8_t x930 = UINT8_MAX;
	uint8_t x932 = UINT8_MAX;
	int64_t t194 = -66100900480LL;

    t194 = (x929^(x930/(x931-x932)));

    if (t194 != 907819866LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x933 = 603598624LL;
	int16_t x935 = -489;
	int16_t x936 = -1;
	int64_t t195 = -22LL;

    t195 = (x933^(x934/(x935-x936)));

    if (t195 != 603598624LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x937 = UINT64_MAX;
	uint32_t x939 = 982278352U;
	uint16_t x940 = UINT16_MAX;
	volatile uint64_t t196 = UINT64_MAX;

    t196 = (x937^(x938/(x939-x940)));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x941 = UINT16_MAX;
	int16_t x942 = -1;
	volatile int64_t x943 = -542700072266LL;
	int8_t x944 = 7;
	volatile int64_t t197 = -78100574991LL;

    t197 = (x941^(x942/(x943-x944)));

    if (t197 != 65535LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x946 = UINT32_MAX;
	int8_t x947 = -3;
	int8_t x948 = INT8_MAX;
	volatile uint32_t t198 = 1614566U;

    t198 = (x945^(x946/(x947-x948)));

    if (t198 != 11U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x954 = UINT16_MAX;
	int32_t x955 = 242;
	volatile int8_t x956 = -4;

    t199 = (x953^(x954/(x955-x956)));

    if (t199 != 4294967029U) { NG(); } else { ; }
	
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

