
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

uint32_t x2 = UINT32_MAX;
uint64_t x5 = 4528121515773629LLU;
int64_t x11 = INT64_MIN;
volatile int32_t x12 = -119249;
volatile int16_t x15 = INT16_MIN;
int8_t x20 = -1;
int64_t t5 = 28032295444LL;
volatile uint16_t x29 = 161U;
volatile int8_t x37 = 0;
uint64_t t10 = 173252973571525LLU;
uint16_t x51 = 921U;
volatile uint32_t t11 = 27599703U;
int8_t x61 = 1;
volatile uint64_t x63 = 613LLU;
uint16_t x66 = 4679U;
volatile int64_t t14 = 94366LL;
volatile int64_t x88 = INT64_MAX;
static int8_t x106 = INT8_MAX;
uint16_t x107 = UINT16_MAX;
int64_t x108 = 57LL;
int8_t x110 = INT8_MIN;
static volatile uint64_t x116 = UINT64_MAX;
int16_t x117 = INT16_MIN;
static int8_t x119 = -1;
int8_t x120 = 22;
int8_t x129 = INT8_MAX;
uint32_t x130 = 1938U;
static uint64_t x131 = UINT64_MAX;
static uint64_t x138 = UINT64_MAX;
int32_t x139 = 64371758;
volatile uint32_t x146 = 16118739U;
int32_t x148 = -1;
volatile int32_t x153 = -1;
int64_t x155 = INT64_MIN;
static int16_t x169 = 486;
int32_t x175 = INT32_MIN;
static int8_t x182 = -1;
volatile uint64_t t33 = 36328LLU;
static int16_t x187 = INT16_MAX;
uint32_t x188 = 47437U;
int32_t x192 = -948;
int16_t x194 = INT16_MIN;
int16_t x211 = INT16_MIN;
int8_t x230 = 0;
int32_t x232 = INT32_MIN;
int16_t x233 = -1506;
volatile uint64_t x235 = UINT64_MAX;
static uint16_t x240 = UINT16_MAX;
int64_t t43 = 82731599LL;
int16_t x243 = -1;
int16_t x244 = -5632;
uint64_t x245 = UINT64_MAX;
int8_t x246 = INT8_MIN;
int64_t t46 = 113368237628475LL;
static int8_t x258 = -1;
uint64_t x264 = 240172LLU;
uint64_t x272 = 30850878325717076LLU;
uint32_t x274 = 633158106U;
int64_t x297 = INT64_MIN;
int8_t x298 = 1;
int32_t x307 = INT32_MAX;
volatile uint64_t t56 = 1LLU;
volatile int64_t x327 = INT64_MIN;
int64_t t59 = -1197532577696926233LL;
uint16_t x329 = UINT16_MAX;
int32_t x330 = -1;
uint8_t x335 = UINT8_MAX;
int8_t x336 = 49;
int8_t x342 = -2;
static volatile int16_t x344 = 1;
int32_t x355 = INT32_MIN;
int32_t x365 = 10372615;
int8_t x366 = INT8_MAX;
int8_t x368 = -1;
int8_t x373 = INT8_MIN;
volatile int16_t x374 = 0;
uint64_t x376 = 11781LLU;
static int16_t x382 = -1;
uint64_t t69 = 823775622485451LLU;
uint16_t x396 = UINT16_MAX;
volatile uint64_t t70 = 217028176110167374LLU;
uint64_t x403 = 1998355LLU;
uint64_t t73 = 255918909583LLU;
volatile int8_t x414 = -4;
static int8_t x416 = INT8_MIN;
int16_t x420 = INT16_MAX;
int8_t x450 = 12;
volatile uint64_t x465 = UINT64_MAX;
uint16_t x481 = UINT16_MAX;
static uint32_t x483 = UINT32_MAX;
int64_t x508 = -2733918265LL;
int64_t t85 = 15LL;
volatile int16_t x509 = -1834;
uint64_t x515 = 516089393940714LLU;
static volatile int32_t t88 = 542323;
uint8_t x521 = 2U;
static volatile uint64_t t90 = 10534590201LLU;
int64_t x529 = -165191788122LL;
volatile int64_t x532 = -8508LL;
int64_t x535 = -1LL;
static volatile int32_t x543 = INT32_MAX;
int8_t x548 = -5;
static volatile uint64_t t96 = 3759051LLU;
int8_t x573 = -21;
int8_t x575 = INT8_MAX;
int8_t x576 = INT8_MIN;
uint8_t x596 = 5U;
volatile int64_t t101 = 14LL;
int8_t x601 = INT8_MIN;
static int32_t x604 = -44463;
int32_t t102 = 48;
int32_t t103 = -24418104;
int64_t x629 = -234092LL;
uint8_t x630 = 87U;
int8_t x646 = -1;
static uint32_t x658 = UINT32_MAX;
uint32_t x659 = 5U;
int32_t t112 = -659;
int8_t x677 = 6;
static uint16_t x697 = 7U;
static int32_t x699 = 13636;
uint32_t x716 = 14U;
volatile int64_t t122 = 2359793LL;
int64_t x735 = INT64_MAX;
volatile uint64_t x737 = UINT64_MAX;
uint64_t t125 = 4508350551907216262LLU;
int8_t x752 = -5;
static uint64_t x761 = 5971369951024435LLU;
volatile uint8_t x762 = 29U;
int32_t t131 = -1068501041;
volatile int32_t x775 = -1;
int32_t x781 = 1;
uint64_t x785 = 32265674372LLU;
int8_t x786 = INT8_MIN;
static volatile uint64_t t134 = 55569LLU;
volatile uint64_t x791 = UINT64_MAX;
volatile uint64_t t135 = 157821143LLU;
uint32_t x798 = 1894U;
uint8_t x808 = 1U;
int16_t x821 = INT16_MIN;
uint64_t t143 = 5341647703822LLU;
uint64_t x849 = UINT64_MAX;
static uint64_t x853 = 12021396LLU;
int8_t x862 = -1;
uint16_t x864 = UINT16_MAX;
uint32_t t148 = 4581562U;
uint16_t x873 = 445U;
int64_t x875 = -1LL;
uint32_t x878 = 710U;
int64_t t152 = -16173047769521627LL;
static int16_t x890 = INT16_MIN;
int16_t x897 = INT16_MAX;
uint16_t x902 = 9U;
int8_t x903 = INT8_MIN;
int64_t x905 = INT64_MAX;
volatile int64_t x920 = INT64_MAX;
volatile uint64_t x930 = UINT64_MAX;
uint8_t x932 = 0U;
int16_t x936 = INT16_MAX;
int64_t t164 = -369729000065052LL;
int8_t x939 = INT8_MIN;
static int32_t x945 = -26495;
uint32_t x962 = 13U;
int8_t x964 = 0;
int32_t x976 = INT32_MIN;
int32_t x991 = -3159;
volatile int64_t t173 = -245964474276829512LL;
int8_t x994 = 2;
static int8_t x1009 = INT8_MIN;
static volatile uint64_t t175 = 1LLU;
volatile int64_t t176 = 3074103358LL;
static int64_t x1017 = INT64_MAX;
int32_t x1022 = -60910;
uint64_t x1024 = 11615994692118086LLU;
static int32_t x1029 = 864828;
uint16_t x1030 = 16U;
static int64_t t180 = -660869LL;
volatile uint8_t x1047 = 117U;
int16_t x1049 = INT16_MIN;
int32_t x1055 = INT32_MAX;
int64_t x1059 = INT64_MAX;
volatile int16_t x1060 = INT16_MAX;
uint32_t x1066 = 1U;
volatile int64_t t187 = 34LL;
volatile int16_t x1082 = INT16_MIN;
uint64_t x1084 = UINT64_MAX;
uint16_t x1089 = 1388U;
uint32_t x1092 = UINT32_MAX;
int64_t x1094 = -1LL;
volatile int64_t t194 = 2146440692400501471LL;
uint64_t x1109 = 4157205LLU;
int8_t x1119 = INT8_MIN;
uint64_t x1122 = UINT64_MAX;
int8_t x1125 = INT8_MIN;


void f0(void) {
    	uint64_t x1 = 47905259LLU;
	int32_t x3 = 5967;
	static uint16_t x4 = 0U;
	static volatile uint64_t t0 = 56853626LLU;

    t0 = ((x1*x2)-(x3|x4));

    if (t0 != 205751520663498438LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	static uint16_t x7 = UINT16_MAX;
	static volatile int8_t x8 = 1;
	static volatile uint64_t t1 = 169LLU;

    t1 = ((x5*x6)-(x7|x8));

    if (t1 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x9 = INT8_MAX;
	volatile uint32_t x10 = UINT32_MAX;
	int64_t t2 = -1164894959678037LL;

    t2 = ((x9*x10)-(x11|x12));

    if (t2 != 4295086418LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int16_t x14 = 0;
	volatile uint8_t x16 = 1U;
	int32_t t3 = 1;

    t3 = ((x13*x14)-(x15|x16));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint16_t x18 = UINT16_MAX;
	static int8_t x19 = INT8_MIN;
	int32_t t4 = 6541289;

    t4 = ((x17*x18)-(x19|x20));

    if (t4 != -8388479) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	volatile int64_t x22 = 426LL;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = 305738251LL;

    t5 = ((x21*x22)-(x23|x24));

    if (t5 != -277820585LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x30 = 51U;
	int8_t x31 = INT8_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = -1;

    t6 = ((x29*x30)-(x31|x32));

    if (t6 != 40852) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = 9LL;
	int16_t x34 = INT16_MAX;
	int32_t x35 = INT32_MIN;
	static uint16_t x36 = 4834U;
	static int64_t t7 = 483LL;

    t7 = ((x33*x34)-(x35|x36));

    if (t7 != 2147773717LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x38 = 2U;
	static int32_t x39 = INT32_MIN;
	uint16_t x40 = 6U;
	volatile int32_t t8 = -2217866;

    t8 = ((x37*x38)-(x39|x40));

    if (t8 != 2147483642) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = INT8_MAX;
	int16_t x44 = -1;
	volatile uint32_t t9 = 7U;

    t9 = ((x41*x42)-(x43|x44));

    if (t9 != 2U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x45 = 32U;
	volatile uint64_t x46 = 3549000736LLU;
	int64_t x47 = INT64_MIN;
	volatile uint32_t x48 = 517082286U;

    t10 = ((x45*x46)-(x47|x48));

    if (t10 != 9223372149905717074LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = INT8_MAX;
	uint32_t x50 = 1719279U;
	int8_t x52 = INT8_MIN;

    t11 = ((x49*x50)-(x51|x52));

    if (t11 != 218348536U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = 1645U;
	volatile int8_t x58 = -31;
	int32_t x59 = -1021179903;
	static volatile int64_t x60 = 215345375409424LL;
	int64_t t12 = 63788562496LL;

    t12 = ((x57*x58)-(x59|x60));

    if (t12 != 5306071996LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x62 = INT32_MAX;
	uint32_t x64 = UINT32_MAX;
	volatile uint64_t t13 = 7980LLU;

    t13 = ((x61*x62)-(x63|x64));

    if (t13 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x65 = -1;
	int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MAX;

    t14 = ((x65*x66)-(x67|x68));

    if (t14 != -4678LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x69 = 290U;
	int8_t x70 = INT8_MIN;
	uint64_t x71 = 8612LLU;
	int8_t x72 = INT8_MAX;
	volatile uint64_t t15 = 596LLU;

    t15 = ((x69*x70)-(x71|x72));

    if (t15 != 18446744073709505793LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x85 = 8173;
	static int32_t x86 = 5914;
	int32_t x87 = -1051781;
	int64_t t16 = -835886LL;

    t16 = ((x85*x86)-(x87|x88));

    if (t16 != 48335123LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x93 = 2897U;
	uint8_t x94 = 3U;
	static uint8_t x95 = 1U;
	static int64_t x96 = -1LL;
	static int64_t t17 = -1LL;

    t17 = ((x93*x94)-(x95|x96));

    if (t17 != 8692LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x101 = 0;
	int32_t x102 = INT32_MIN;
	static int8_t x103 = INT8_MIN;
	static int8_t x104 = INT8_MIN;
	static volatile int32_t t18 = 16;

    t18 = ((x101*x102)-(x103|x104));

    if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x105 = 17;
	volatile int64_t t19 = 101351032163894LL;

    t19 = ((x105*x106)-(x107|x108));

    if (t19 != -63376LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x109 = 2U;
	int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;
	int64_t t20 = -868302759747126LL;

    t20 = ((x109*x110)-(x111|x112));

    if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x113 = -45969;
	uint64_t x114 = 1697LLU;
	int16_t x115 = INT16_MAX;
	volatile uint64_t t21 = 4577474825787LLU;

    t21 = ((x113*x114)-(x115|x116));

    if (t21 != 18446744073631542224LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x118 = INT16_MIN;
	volatile int32_t t22 = 4054;

    t22 = ((x117*x118)-(x119|x120));

    if (t22 != 1073741825) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x121 = UINT16_MAX;
	uint32_t x122 = 18697884U;
	int16_t x123 = -3661;
	int16_t x124 = INT16_MAX;
	volatile uint32_t t23 = 52448U;

    t23 = ((x121*x122)-(x123|x124));

    if (t23 != 1300148581U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x125 = 4026U;
	uint64_t x126 = UINT64_MAX;
	uint8_t x127 = 6U;
	int32_t x128 = -173;
	volatile uint64_t t24 = 0LLU;

    t24 = ((x125*x126)-(x127|x128));

    if (t24 != 18446744073709547759LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x132 = -1;
	volatile uint64_t t25 = 670232067505457LLU;

    t25 = ((x129*x130)-(x131|x132));

    if (t25 != 246127LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x133 = -2204;
	static volatile int16_t x134 = 94;
	int16_t x135 = INT16_MIN;
	int8_t x136 = -29;
	volatile int32_t t26 = -4957871;

    t26 = ((x133*x134)-(x135|x136));

    if (t26 != -207147) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x137 = 2U;
	int8_t x140 = INT8_MIN;
	uint64_t t27 = 1556066025968LLU;

    t27 = ((x137*x138)-(x139|x140));

    if (t27 != 80LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x145 = 105U;
	uint16_t x147 = 4U;
	uint32_t t28 = 7933814U;

    t28 = ((x145*x146)-(x147|x148));

    if (t28 != 1692467596U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x154 = -1;
	int16_t x156 = INT16_MIN;
	volatile int64_t t29 = 455LL;

    t29 = ((x153*x154)-(x155|x156));

    if (t29 != 32769LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x165 = 3LL;
	int64_t x166 = -11LL;
	static volatile uint64_t x167 = 399970369776087LLU;
	volatile uint8_t x168 = 7U;
	uint64_t t30 = 74564388062103996LLU;

    t30 = ((x165*x166)-(x167|x168));

    if (t30 != 18446344103339775496LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x170 = UINT64_MAX;
	int16_t x171 = -6;
	uint8_t x172 = 76U;
	volatile uint64_t t31 = 213663549192812LLU;

    t31 = ((x169*x170)-(x171|x172));

    if (t31 != 18446744073709551132LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x173 = -1;
	static uint8_t x174 = UINT8_MAX;
	volatile int16_t x176 = INT16_MAX;
	int32_t t32 = 158884;

    t32 = ((x173*x174)-(x175|x176));

    if (t32 != 2147450626) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x181 = UINT64_MAX;
	uint32_t x183 = UINT32_MAX;
	static int64_t x184 = INT64_MIN;

    t33 = ((x181*x182)-(x183|x184));

    if (t33 != 9223372032559808514LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x185 = 8U;
	int16_t x186 = -1;
	uint32_t t34 = 25872U;

    t34 = ((x185*x186)-(x187|x188));

    if (t34 != 4294901753U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x189 = INT8_MAX;
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	int32_t t35 = -170688708;

    t35 = ((x189*x190)-(x191|x192));

    if (t35 != -16204) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x193 = 0U;
	static int16_t x195 = INT16_MIN;
	uint16_t x196 = UINT16_MAX;
	int32_t t36 = 74;

    t36 = ((x193*x194)-(x195|x196));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x201 = 7U;
	int16_t x202 = 32;
	static int32_t x203 = 22083;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t37 = -322844003;

    t37 = ((x201*x202)-(x203|x204));

    if (t37 != 285) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x205 = 1;
	uint32_t x206 = 0U;
	int16_t x207 = INT16_MAX;
	int32_t x208 = 56;
	uint32_t t38 = 10558U;

    t38 = ((x205*x206)-(x207|x208));

    if (t38 != 4294934529U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x209 = 24;
	uint16_t x210 = 61U;
	static uint8_t x212 = 1U;
	int32_t t39 = 559832;

    t39 = ((x209*x210)-(x211|x212));

    if (t39 != 34231) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x225 = INT8_MIN;
	uint64_t x226 = 1080126934485LLU;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MIN;
	volatile uint64_t t40 = 37395474777669LLU;

    t40 = ((x225*x226)-(x227|x228));

    if (t40 != 18446605817461937664LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x229 = UINT64_MAX;
	int16_t x231 = INT16_MAX;
	volatile uint64_t t41 = 1268404LLU;

    t41 = ((x229*x230)-(x231|x232));

    if (t41 != 2147450881LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x234 = -98721966LL;
	int8_t x236 = INT8_MAX;
	static volatile uint64_t t42 = 111741796946417211LLU;

    t42 = ((x233*x234)-(x235|x236));

    if (t42 != 148675280797LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x237 = INT8_MIN;
	int16_t x238 = 115;
	int64_t x239 = INT64_MIN;

    t43 = ((x237*x238)-(x239|x240));

    if (t43 != 9223372036854695553LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x241 = -1018474063013773LL;
	uint64_t x242 = UINT64_MAX;
	uint64_t t44 = 0LLU;

    t44 = ((x241*x242)-(x243|x244));

    if (t44 != 1018474063013774LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x247 = 5U;
	static uint8_t x248 = UINT8_MAX;
	uint64_t t45 = 43030334415539256LLU;

    t45 = ((x245*x246)-(x247|x248));

    if (t45 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x249 = UINT32_MAX;
	uint16_t x250 = 6U;
	uint32_t x251 = 20555293U;
	int64_t x252 = 267189384141LL;

    t46 = ((x249*x250)-(x251|x252));

    if (t46 != -262894516195LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x253 = 238258;
	int8_t x254 = 8;
	int16_t x255 = -10;
	volatile int16_t x256 = 341;
	int32_t t47 = -15;

    t47 = ((x253*x254)-(x255|x256));

    if (t47 != 1906073) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x257 = 12U;
	static int64_t x259 = INT64_MIN;
	static int64_t x260 = 844899571LL;
	int64_t t48 = -2987872879LL;

    t48 = ((x257*x258)-(x259|x260));

    if (t48 != 9223372036009876225LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x261 = UINT64_MAX;
	static volatile int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MAX;
	uint64_t t49 = 114LLU;

    t49 = ((x261*x262)-(x263|x264));

    if (t49 != 18446744073709322241LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x265 = UINT64_MAX;
	uint64_t x266 = UINT64_MAX;
	static int16_t x267 = -1;
	volatile uint32_t x268 = 5626U;
	uint64_t t50 = 4407838868313641LLU;

    t50 = ((x265*x266)-(x267|x268));

    if (t50 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x269 = INT32_MAX;
	static int64_t x270 = 68673921LL;
	uint16_t x271 = 0U;
	uint64_t t51 = 7354267LLU;

    t51 = ((x269*x270)-(x271|x272));

    if (t51 != 116625243997152811LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x273 = 7478459660000053657LLU;
	uint8_t x275 = UINT8_MAX;
	static volatile uint64_t x276 = UINT64_MAX;
	volatile uint64_t t52 = 2LLU;

    t52 = ((x273*x274)-(x275|x276));

    if (t52 != 7528058488891555147LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x281 = -79730888LL;
	volatile uint64_t x282 = 17720345886634861LLU;
	uint16_t x283 = 59U;
	int32_t x284 = INT32_MIN;
	uint64_t t53 = 805LLU;

    t53 = ((x281*x282)-(x283|x284));

    if (t53 != 14108885019325569693LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x299 = INT32_MIN;
	uint16_t x300 = 699U;
	static volatile int64_t t54 = 55688LL;

    t54 = ((x297*x298)-(x299|x300));

    if (t54 != -9223372034707292859LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x305 = 1088U;
	static int16_t x306 = INT16_MAX;
	uint8_t x308 = 70U;
	volatile int32_t t55 = 167;

    t55 = ((x305*x306)-(x307|x308));

    if (t55 != -2111833151) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x309 = 12U;
	static uint64_t x310 = 14774860505058070LLU;
	uint32_t x311 = 888904659U;
	int16_t x312 = 62;

    t56 = ((x309*x310)-(x311|x312));

    if (t56 != 177298325171792137LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x317 = 0U;
	int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	uint64_t x320 = 2931903288LLU;
	volatile uint64_t t57 = 55954433454LLU;

    t57 = ((x317*x318)-(x319|x320));

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x321 = UINT32_MAX;
	static volatile int8_t x322 = 2;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	volatile uint32_t t58 = 34742U;

    t58 = ((x321*x322)-(x323|x324));

    if (t58 != 126U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x325 = 4086056LL;
	int64_t x326 = -1LL;
	int16_t x328 = INT16_MIN;

    t59 = ((x325*x326)-(x327|x328));

    if (t59 != -4053288LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x331 = 89U;
	int8_t x332 = 3;
	static volatile int32_t t60 = -14329618;

    t60 = ((x329*x330)-(x331|x332));

    if (t60 != -65626) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x333 = 662;
	volatile int32_t x334 = 3;
	volatile int32_t t61 = 2;

    t61 = ((x333*x334)-(x335|x336));

    if (t61 != 1731) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x341 = -1LL;
	static uint64_t x343 = UINT64_MAX;
	volatile uint64_t t62 = 1143LLU;

    t62 = ((x341*x342)-(x343|x344));

    if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x345 = 8463302229LLU;
	uint64_t x346 = 655201LLU;
	static volatile int8_t x347 = -1;
	uint8_t x348 = UINT8_MAX;
	volatile uint64_t t63 = 2771653773LLU;

    t63 = ((x345*x346)-(x347|x348));

    if (t63 != 5545164083743030LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x349 = 10410U;
	uint64_t x350 = UINT64_MAX;
	volatile int32_t x351 = INT32_MAX;
	int32_t x352 = INT32_MAX;
	volatile uint64_t t64 = 3864466310013211LLU;

    t64 = ((x349*x350)-(x351|x352));

    if (t64 != 18446744071562057559LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MIN;
	volatile int32_t x356 = 3856;
	volatile int32_t t65 = 2;

    t65 = ((x353*x354)-(x355|x356));

    if (t65 != 2143318256) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x357 = UINT64_MAX;
	volatile int32_t x358 = -151;
	int8_t x359 = -1;
	static int16_t x360 = INT16_MIN;
	uint64_t t66 = 424914024010LLU;

    t66 = ((x357*x358)-(x359|x360));

    if (t66 != 152LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x367 = 0LLU;
	uint64_t t67 = 8724571LLU;

    t67 = ((x365*x366)-(x367|x368));

    if (t67 != 1317322106LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x375 = -1;
	uint64_t t68 = 1440LLU;

    t68 = ((x373*x374)-(x375|x376));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x381 = 3U;
	uint64_t x383 = 1197079841644LLU;
	uint16_t x384 = 84U;

    t69 = ((x381*x382)-(x383|x384));

    if (t69 != 18446742876629709953LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x393 = 5905LLU;
	static int16_t x394 = INT16_MAX;
	int8_t x395 = 0;

    t70 = ((x393*x394)-(x395|x396));

    if (t70 != 193423600LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x401 = INT8_MIN;
	uint16_t x402 = 61U;
	static int32_t x404 = -1;
	uint64_t t71 = 328616LLU;

    t71 = ((x401*x402)-(x403|x404));

    if (t71 != 18446744073709543809LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x405 = -477229967LL;
	static int8_t x406 = 0;
	uint8_t x407 = 3U;
	uint16_t x408 = 153U;
	int64_t t72 = 111LL;

    t72 = ((x405*x406)-(x407|x408));

    if (t72 != -155LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x409 = INT16_MAX;
	uint64_t x410 = 1100708673290565LLU;
	int32_t x411 = INT32_MIN;
	int16_t x412 = -30;

    t73 = ((x409*x410)-(x411|x412));

    if (t73 != 17620177024002391769LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x413 = 15;
	uint32_t x415 = UINT32_MAX;
	volatile uint32_t t74 = 91037U;

    t74 = ((x413*x414)-(x415|x416));

    if (t74 != 4294967237U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x417 = -1;
	volatile int32_t x418 = INT32_MAX;
	int64_t x419 = -1LL;
	int64_t t75 = 337443350538834296LL;

    t75 = ((x417*x418)-(x419|x420));

    if (t75 != -2147483646LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x433 = 12430306;
	int8_t x434 = INT8_MIN;
	int64_t x435 = 1243419LL;
	int8_t x436 = -1;
	static volatile int64_t t76 = 686187LL;

    t76 = ((x433*x434)-(x435|x436));

    if (t76 != -1591079167LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x449 = -1;
	int8_t x451 = INT8_MAX;
	static int16_t x452 = INT16_MIN;
	static int32_t t77 = 3833;

    t77 = ((x449*x450)-(x451|x452));

    if (t77 != 32629) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x457 = UINT16_MAX;
	int8_t x458 = INT8_MAX;
	int32_t x459 = 0;
	static volatile int64_t x460 = 667LL;
	static int64_t t78 = -690612618956LL;

    t78 = ((x457*x458)-(x459|x460));

    if (t78 != 8322278LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x466 = INT16_MAX;
	int64_t x467 = -1LL;
	uint32_t x468 = 7U;
	volatile uint64_t t79 = 1LLU;

    t79 = ((x465*x466)-(x467|x468));

    if (t79 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x473 = UINT64_MAX;
	volatile int16_t x474 = INT16_MIN;
	uint16_t x475 = UINT16_MAX;
	int32_t x476 = INT32_MIN;
	uint64_t t80 = 196366983910320LLU;

    t80 = ((x473*x474)-(x475|x476));

    if (t80 != 2147450881LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x482 = INT16_MIN;
	uint64_t x484 = UINT64_MAX;
	volatile uint64_t t81 = 4284LLU;

    t81 = ((x481*x482)-(x483|x484));

    if (t81 != 18446744071562100737LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x485 = INT32_MIN;
	int8_t x486 = 0;
	int64_t x487 = INT64_MAX;
	static volatile int16_t x488 = 7334;
	volatile int64_t t82 = 1399415LL;

    t82 = ((x485*x486)-(x487|x488));

    if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x489 = 4;
	int16_t x490 = INT16_MIN;
	int16_t x491 = -1;
	static volatile int8_t x492 = INT8_MIN;
	volatile int32_t t83 = 1;

    t83 = ((x489*x490)-(x491|x492));

    if (t83 != -131071) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x497 = 5U;
	int16_t x498 = INT16_MIN;
	int8_t x499 = INT8_MIN;
	static int16_t x500 = -7;
	volatile int32_t t84 = 45;

    t84 = ((x497*x498)-(x499|x500));

    if (t84 != -163833) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x505 = 0U;
	volatile int8_t x506 = 0;
	int64_t x507 = INT64_MIN;

    t85 = ((x505*x506)-(x507|x508));

    if (t85 != 2733918265LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x510 = INT8_MIN;
	static uint64_t x511 = 7LLU;
	int32_t x512 = INT32_MIN;
	volatile uint64_t t86 = 7LLU;

    t86 = ((x509*x510)-(x511|x512));

    if (t86 != 2147718393LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x513 = INT8_MIN;
	static int16_t x514 = 0;
	static volatile int8_t x516 = 1;
	uint64_t t87 = 7470539464866187597LLU;

    t87 = ((x513*x514)-(x515|x516));

    if (t87 != 18446227984315610901LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x517 = 61U;
	static int8_t x518 = INT8_MIN;
	uint16_t x519 = 21388U;
	int32_t x520 = INT32_MIN;

    t88 = ((x517*x518)-(x519|x520));

    if (t88 != 2147454452) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x522 = INT8_MIN;
	static volatile int16_t x523 = 2148;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t89 = 27129500693718LLU;

    t89 = ((x521*x522)-(x523|x524));

    if (t89 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x525 = 280598LLU;
	int32_t x526 = INT32_MIN;
	static volatile uint64_t x527 = 5727295726LLU;
	int8_t x528 = -1;

    t90 = ((x525*x526)-(x527|x528));

    if (t90 != 18446141494092890113LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x530 = -1;
	int32_t x531 = -1378390;
	int64_t t91 = 2433779283LL;

    t91 = ((x529*x530)-(x531|x532));

    if (t91 != 165191788140LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x533 = 4644U;
	static uint32_t x534 = 39U;
	volatile int64_t x536 = -1LL;
	int64_t t92 = -7352635804881LL;

    t92 = ((x533*x534)-(x535|x536));

    if (t92 != 181117LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	int8_t x538 = INT8_MIN;
	int32_t x539 = INT32_MIN;
	uint8_t x540 = 63U;
	volatile int32_t t93 = 1889468;

    t93 = ((x537*x538)-(x539|x540));

    if (t93 != 2139095105) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x541 = UINT32_MAX;
	int32_t x542 = 0;
	static uint8_t x544 = 23U;
	volatile uint32_t t94 = 4U;

    t94 = ((x541*x542)-(x543|x544));

    if (t94 != 2147483649U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x545 = 54LLU;
	uint8_t x546 = UINT8_MAX;
	uint64_t x547 = 240378122124806163LLU;
	uint64_t t95 = 607210965804691884LLU;

    t95 = ((x545*x546)-(x547|x548));

    if (t95 != 13775LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x553 = 0;
	int32_t x554 = INT32_MAX;
	int32_t x555 = -30796453;
	uint64_t x556 = 3214622571LLU;

    t96 = ((x553*x554)-(x555|x556));

    if (t96 != 4505733LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x557 = INT32_MAX;
	volatile int64_t x558 = -1LL;
	uint32_t x559 = 14U;
	uint8_t x560 = 93U;
	volatile int64_t t97 = -189045LL;

    t97 = ((x557*x558)-(x559|x560));

    if (t97 != -2147483742LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x565 = 33062LL;
	int32_t x566 = 1;
	uint16_t x567 = 1298U;
	static volatile int32_t x568 = INT32_MAX;
	static int64_t t98 = -10009762269LL;

    t98 = ((x565*x566)-(x567|x568));

    if (t98 != -2147450585LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x574 = -1;
	static volatile int32_t t99 = -181;

    t99 = ((x573*x574)-(x575|x576));

    if (t99 != 22) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x585 = 626;
	volatile int8_t x586 = -1;
	int8_t x587 = INT8_MAX;
	uint8_t x588 = 1U;
	volatile int32_t t100 = -120;

    t100 = ((x585*x586)-(x587|x588));

    if (t100 != -753) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x593 = 21U;
	int32_t x594 = 0;
	int64_t x595 = INT64_MIN;

    t101 = ((x593*x594)-(x595|x596));

    if (t101 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint16_t x602 = 5U;
	int16_t x603 = INT16_MIN;

    t102 = ((x601*x602)-(x603|x604));

    if (t102 != 11055) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x609 = 42U;
	static uint8_t x610 = 53U;
	static uint16_t x611 = 231U;
	int32_t x612 = -1;

    t103 = ((x609*x610)-(x611|x612));

    if (t103 != 2227) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x613 = 38U;
	int16_t x614 = -1426;
	uint8_t x615 = 5U;
	int32_t x616 = INT32_MIN;
	volatile int32_t t104 = -130907;

    t104 = ((x613*x614)-(x615|x616));

    if (t104 != 2147429455) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x621 = -1;
	int8_t x622 = 15;
	int32_t x623 = -1;
	static int64_t x624 = INT64_MAX;
	int64_t t105 = -12583421LL;

    t105 = ((x621*x622)-(x623|x624));

    if (t105 != -14LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x625 = -9500;
	volatile uint64_t x626 = 1705759473124LLU;
	int8_t x627 = -1;
	volatile int32_t x628 = INT32_MIN;
	static volatile uint64_t t106 = 2930183545LLU;

    t106 = ((x625*x626)-(x627|x628));

    if (t106 != 18430539358714873617LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x631 = INT8_MIN;
	int64_t x632 = 93338162922155810LL;
	volatile int64_t t107 = 14913551055915440LL;

    t107 = ((x629*x630)-(x631|x632));

    if (t107 != -20365910LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x637 = -1;
	uint8_t x638 = 34U;
	volatile int16_t x639 = -5017;
	uint64_t x640 = 365043777544LLU;
	volatile uint64_t t108 = 23898401263050LLU;

    t108 = ((x637*x638)-(x639|x640));

    if (t108 != 4975LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x645 = INT32_MAX;
	volatile int64_t x647 = INT64_MAX;
	int32_t x648 = -1;
	static int64_t t109 = 8491133049904LL;

    t109 = ((x645*x646)-(x647|x648));

    if (t109 != -2147483646LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x653 = -1;
	int64_t x654 = -8473700484150181LL;
	uint8_t x655 = UINT8_MAX;
	int32_t x656 = -8;
	int64_t t110 = 0LL;

    t110 = ((x653*x654)-(x655|x656));

    if (t110 != 8473700484150182LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x657 = 13814181LLU;
	uint8_t x660 = UINT8_MAX;
	volatile uint64_t t111 = 487059403319203752LLU;

    t111 = ((x657*x658)-(x659|x660));

    if (t111 != 59331455602210140LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x669 = INT16_MIN;
	int16_t x670 = -7;
	int8_t x671 = -3;
	int32_t x672 = INT32_MIN;

    t112 = ((x669*x670)-(x671|x672));

    if (t112 != 229379) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x673 = -3;
	uint64_t x674 = 12184666495879839LLU;
	volatile uint16_t x675 = 21U;
	uint16_t x676 = 186U;
	static uint64_t t113 = 2657628LLU;

    t113 = ((x673*x674)-(x675|x676));

    if (t113 != 18410190074221911908LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x678 = INT16_MIN;
	static int16_t x679 = INT16_MIN;
	volatile int32_t x680 = -1;
	volatile int32_t t114 = 658764286;

    t114 = ((x677*x678)-(x679|x680));

    if (t114 != -196607) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x685 = 73U;
	static int16_t x686 = -1;
	static volatile int8_t x687 = INT8_MAX;
	int8_t x688 = -1;
	int32_t t115 = 783;

    t115 = ((x685*x686)-(x687|x688));

    if (t115 != -72) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x689 = 3590652LLU;
	int32_t x690 = -1;
	int64_t x691 = INT64_MIN;
	static int8_t x692 = -1;
	volatile uint64_t t116 = 111308172LLU;

    t116 = ((x689*x690)-(x691|x692));

    if (t116 != 18446744073705960965LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x693 = -207;
	static uint64_t x694 = 6625LLU;
	volatile int64_t x695 = -1LL;
	static uint8_t x696 = 3U;
	volatile uint64_t t117 = 892370LLU;

    t117 = ((x693*x694)-(x695|x696));

    if (t117 != 18446744073708180242LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x698 = INT16_MIN;
	uint16_t x700 = 2882U;
	int32_t t118 = 504167;

    t118 = ((x697*x698)-(x699|x700));

    if (t118 != -245574) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x701 = 39432U;
	int64_t x702 = -1LL;
	volatile uint32_t x703 = 2U;
	int32_t x704 = INT32_MIN;
	static volatile int64_t t119 = -68289823985444LL;

    t119 = ((x701*x702)-(x703|x704));

    if (t119 != -2147523082LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x714 = -13;
	uint8_t x715 = 11U;
	uint32_t t120 = 664643U;

    t120 = ((x713*x714)-(x715|x716));

    if (t120 != 1649U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x717 = -1;
	static volatile uint16_t x718 = UINT16_MAX;
	int64_t x719 = INT64_MIN;
	int64_t x720 = -1LL;
	static int64_t t121 = -1116020384LL;

    t121 = ((x717*x718)-(x719|x720));

    if (t121 != -65534LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x721 = 3435846478815560836LL;
	uint16_t x722 = 1U;
	volatile int32_t x723 = INT32_MIN;
	static int8_t x724 = INT8_MIN;

    t122 = ((x721*x722)-(x723|x724));

    if (t122 != 3435846478815560964LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x725 = 2U;
	static int64_t x726 = -1LL;
	static volatile int64_t x727 = -6144091LL;
	int32_t x728 = INT32_MIN;
	int64_t t123 = -192568615964043839LL;

    t123 = ((x725*x726)-(x727|x728));

    if (t123 != 6144089LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x733 = -1;
	int8_t x734 = -1;
	int16_t x736 = INT16_MAX;
	int64_t t124 = -484151951LL;

    t124 = ((x733*x734)-(x735|x736));

    if (t124 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x738 = -2581096LL;
	static uint64_t x739 = UINT64_MAX;
	int32_t x740 = -1371;

    t125 = ((x737*x738)-(x739|x740));

    if (t125 != 2581097LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x741 = 3;
	int32_t x742 = 94;
	volatile int32_t x743 = INT32_MIN;
	int16_t x744 = -1;
	int32_t t126 = 11542;

    t126 = ((x741*x742)-(x743|x744));

    if (t126 != 283) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x745 = -1;
	static uint32_t x746 = UINT32_MAX;
	uint16_t x747 = 0U;
	int16_t x748 = INT16_MIN;
	volatile uint32_t t127 = 24U;

    t127 = ((x745*x746)-(x747|x748));

    if (t127 != 32769U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x749 = 14564U;
	int16_t x750 = INT16_MIN;
	volatile int16_t x751 = INT16_MAX;
	int32_t t128 = -64848;

    t128 = ((x749*x750)-(x751|x752));

    if (t128 != -477233151) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x763 = 22;
	int16_t x764 = -1;
	uint64_t t129 = 117482495007551LLU;

    t129 = ((x761*x762)-(x763|x764));

    if (t129 != 173169728579708616LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x765 = -1;
	int32_t x766 = -582316528;
	int32_t x767 = -36101;
	volatile int8_t x768 = -3;
	volatile int32_t t130 = -52;

    t130 = ((x765*x766)-(x767|x768));

    if (t130 != 582316529) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x769 = 1U;
	int16_t x770 = -1;
	uint8_t x771 = UINT8_MAX;
	int32_t x772 = INT32_MIN;

    t131 = ((x769*x770)-(x771|x772));

    if (t131 != 2147483392) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x773 = 63U;
	static int64_t x774 = -1LL;
	volatile int16_t x776 = -1146;
	volatile int64_t t132 = 256354LL;

    t132 = ((x773*x774)-(x775|x776));

    if (t132 != -62LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x782 = INT32_MIN;
	int64_t x783 = -1LL;
	volatile int16_t x784 = -8;
	static int64_t t133 = 1546273143063636LL;

    t133 = ((x781*x782)-(x783|x784));

    if (t133 != -2147483647LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x787 = INT8_MIN;
	int16_t x788 = -1;

    t134 = ((x785*x786)-(x787|x788));

    if (t134 != 18446739943703232001LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x789 = -1LL;
	int16_t x790 = INT16_MIN;
	int8_t x792 = INT8_MIN;

    t135 = ((x789*x790)-(x791|x792));

    if (t135 != 32769LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x797 = 0;
	int32_t x799 = INT32_MIN;
	uint8_t x800 = 13U;
	uint32_t t136 = 2259U;

    t136 = ((x797*x798)-(x799|x800));

    if (t136 != 2147483635U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x801 = INT16_MIN;
	uint16_t x802 = 46U;
	volatile uint8_t x803 = UINT8_MAX;
	uint8_t x804 = 30U;
	int32_t t137 = 277103;

    t137 = ((x801*x802)-(x803|x804));

    if (t137 != -1507583) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x805 = -1LL;
	int32_t x806 = 122162021;
	int64_t x807 = INT64_MIN;
	volatile int64_t t138 = 303165783700LL;

    t138 = ((x805*x806)-(x807|x808));

    if (t138 != 9223372036732613786LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x809 = 31077780155LLU;
	int16_t x810 = -20;
	int16_t x811 = INT16_MIN;
	int8_t x812 = INT8_MAX;
	uint64_t t139 = 15451696373LLU;

    t139 = ((x809*x810)-(x811|x812));

    if (t139 != 18446743452153981157LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x813 = 2;
	int16_t x814 = INT16_MIN;
	static uint64_t x815 = 120805115LLU;
	uint8_t x816 = 11U;
	volatile uint64_t t140 = 0LLU;

    t140 = ((x813*x814)-(x815|x816));

    if (t140 != 18446744073588680965LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x817 = -1LL;
	volatile uint8_t x818 = 0U;
	uint64_t x819 = UINT64_MAX;
	int64_t x820 = INT64_MAX;
	uint64_t t141 = 1097917919570LLU;

    t141 = ((x817*x818)-(x819|x820));

    if (t141 != 1LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x822 = UINT64_MAX;
	int64_t x823 = -15912348335117LL;
	int32_t x824 = INT32_MIN;
	volatile uint64_t t142 = 374357LLU;

    t142 = ((x821*x822)-(x823|x824));

    if (t142 != 1642019853LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x837 = -1LL;
	volatile uint8_t x838 = 80U;
	uint64_t x839 = 16699604383694LLU;
	volatile int8_t x840 = -1;

    t143 = ((x837*x838)-(x839|x840));

    if (t143 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x850 = INT32_MAX;
	uint64_t x851 = UINT64_MAX;
	static uint32_t x852 = UINT32_MAX;
	uint64_t t144 = 464469250953LLU;

    t144 = ((x849*x850)-(x851|x852));

    if (t144 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x854 = -1;
	static uint32_t x855 = 393U;
	int16_t x856 = INT16_MAX;
	uint64_t t145 = 7LLU;

    t145 = ((x853*x854)-(x855|x856));

    if (t145 != 18446744073697497453LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x857 = -1LL;
	static int64_t x858 = INT64_MAX;
	int8_t x859 = -1;
	int8_t x860 = INT8_MAX;
	int64_t t146 = 273630362050504LL;

    t146 = ((x857*x858)-(x859|x860));

    if (t146 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x861 = 3U;
	uint64_t x863 = 16LLU;
	static uint64_t t147 = 31LLU;

    t147 = ((x861*x862)-(x863|x864));

    if (t147 != 18446744073709486078LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x865 = 31U;
	int32_t x866 = INT32_MIN;
	uint16_t x867 = 2U;
	static int32_t x868 = -1;

    t148 = ((x865*x866)-(x867|x868));

    if (t148 != 2147483649U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x869 = INT8_MIN;
	uint32_t x870 = 1137U;
	int8_t x871 = INT8_MIN;
	int32_t x872 = INT32_MAX;
	volatile uint32_t t149 = 2U;

    t149 = ((x869*x870)-(x871|x872));

    if (t149 != 4294821761U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x874 = UINT8_MAX;
	int8_t x876 = -8;
	static volatile int64_t t150 = 436LL;

    t150 = ((x873*x874)-(x875|x876));

    if (t150 != 113476LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x877 = INT16_MIN;
	uint32_t x879 = 173955575U;
	int64_t x880 = 6548463833546LL;
	int64_t t151 = -402527466LL;

    t151 = ((x877*x878)-(x879|x880));

    if (t151 != -6544192264703LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x885 = 2;
	static int16_t x886 = INT16_MAX;
	int16_t x887 = INT16_MIN;
	int64_t x888 = 215342438LL;

    t152 = ((x885*x886)-(x887|x888));

    if (t152 != 74392LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x889 = 223724279908415167LLU;
	uint32_t x891 = UINT32_MAX;
	uint32_t x892 = UINT32_MAX;
	uint64_t t153 = 169LLU;

    t153 = ((x889*x890)-(x891|x892));

    if (t153 != 10806937293158383617LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x893 = 0U;
	volatile uint32_t x894 = UINT32_MAX;
	uint32_t x895 = UINT32_MAX;
	int64_t x896 = -1LL;
	volatile int64_t t154 = -943272LL;

    t154 = ((x893*x894)-(x895|x896));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x898 = -101;
	static int16_t x899 = -1;
	volatile int8_t x900 = -1;
	int32_t t155 = 14071;

    t155 = ((x897*x898)-(x899|x900));

    if (t155 != -3309466) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x901 = INT8_MAX;
	int64_t x904 = INT64_MIN;
	static volatile int64_t t156 = -63097LL;

    t156 = ((x901*x902)-(x903|x904));

    if (t156 != 1271LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x906 = -1LL;
	uint8_t x907 = UINT8_MAX;
	volatile int8_t x908 = INT8_MIN;
	volatile int64_t t157 = -2400804291434865LL;

    t157 = ((x905*x906)-(x907|x908));

    if (t157 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x909 = 0U;
	uint64_t x910 = 43308503LLU;
	uint32_t x911 = UINT32_MAX;
	static int64_t x912 = INT64_MAX;
	uint64_t t158 = 10LLU;

    t158 = ((x909*x910)-(x911|x912));

    if (t158 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x913 = 606326707LLU;
	static volatile int64_t x914 = -51331585844LL;
	static uint32_t x915 = 371U;
	int32_t x916 = -1;
	volatile uint64_t t159 = 9387LLU;

    t159 = ((x913*x914)-(x915|x916));

    if (t159 != 5769776733243800229LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x917 = 15038U;
	uint8_t x918 = UINT8_MAX;
	uint8_t x919 = 15U;
	volatile int64_t t160 = 11894507LL;

    t160 = ((x917*x918)-(x919|x920));

    if (t160 != -9223372036850941117LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x921 = 1U;
	uint32_t x922 = 43410399U;
	uint64_t x923 = 1061873083095089LLU;
	volatile int8_t x924 = -1;
	static uint64_t t161 = 365LLU;

    t161 = ((x921*x922)-(x923|x924));

    if (t161 != 43410400LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x925 = 1375369517664386578LLU;
	static uint32_t x926 = UINT32_MAX;
	volatile uint64_t x927 = 10479326LLU;
	static int32_t x928 = -1;
	volatile uint64_t t162 = 18908975577821176LLU;

    t162 = ((x925*x926)-(x927|x928));

    if (t162 != 18172854386944295407LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x929 = INT16_MIN;
	int8_t x931 = INT8_MAX;
	uint64_t t163 = 32536889156311LLU;

    t163 = ((x929*x930)-(x931|x932));

    if (t163 != 32641LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x933 = UINT8_MAX;
	volatile uint32_t x934 = 168U;
	int64_t x935 = INT64_MAX;

    t164 = ((x933*x934)-(x935|x936));

    if (t164 != -9223372036854732967LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x937 = INT64_MAX;
	int8_t x938 = -1;
	static int64_t x940 = -3462410118LL;
	int64_t t165 = -659LL;

    t165 = ((x937*x938)-(x939|x940));

    if (t165 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x946 = -1;
	int16_t x947 = INT16_MIN;
	volatile int32_t x948 = -1;
	int32_t t166 = 2703;

    t166 = ((x945*x946)-(x947|x948));

    if (t166 != 26496) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x953 = -1;
	int32_t x954 = INT32_MAX;
	int32_t x955 = -1;
	volatile int64_t x956 = 10876628088LL;
	int64_t t167 = -29830362LL;

    t167 = ((x953*x954)-(x955|x956));

    if (t167 != -2147483646LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x957 = 107;
	uint64_t x958 = UINT64_MAX;
	uint64_t x959 = 2926135475383LLU;
	volatile uint64_t x960 = UINT64_MAX;
	volatile uint64_t t168 = 15608171253487040LLU;

    t168 = ((x957*x958)-(x959|x960));

    if (t168 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x961 = 124434U;
	uint64_t x963 = 472700575LLU;
	static volatile uint64_t t169 = 1479LLU;

    t169 = ((x961*x962)-(x963|x964));

    if (t169 != 18446744073238468683LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x965 = -1;
	int32_t x966 = -1;
	int8_t x967 = INT8_MIN;
	static volatile int8_t x968 = -2;
	volatile int32_t t170 = 226707170;

    t170 = ((x965*x966)-(x967|x968));

    if (t170 != 3) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x973 = 0;
	int8_t x974 = -4;
	volatile int32_t x975 = INT32_MAX;
	int32_t t171 = 0;

    t171 = ((x973*x974)-(x975|x976));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x977 = 2U;
	uint64_t x978 = UINT64_MAX;
	static int32_t x979 = INT32_MIN;
	volatile int8_t x980 = INT8_MAX;
	uint64_t t172 = 1LLU;

    t172 = ((x977*x978)-(x979|x980));

    if (t172 != 2147483519LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x989 = 405030321U;
	int64_t x990 = -1LL;
	uint8_t x992 = 13U;

    t173 = ((x989*x990)-(x991|x992));

    if (t173 != -405027166LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x993 = -1;
	uint64_t x995 = 111789225257LLU;
	volatile int64_t x996 = INT64_MIN;
	volatile uint64_t t174 = 3811LLU;

    t174 = ((x993*x994)-(x995|x996));

    if (t174 != 9223371925065550549LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x1010 = UINT64_MAX;
	uint64_t x1011 = UINT64_MAX;
	uint32_t x1012 = 68675U;

    t175 = ((x1009*x1010)-(x1011|x1012));

    if (t175 != 129LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1013 = INT32_MIN;
	int64_t x1014 = -1LL;
	int16_t x1015 = INT16_MIN;
	static int16_t x1016 = -3911;

    t176 = ((x1013*x1014)-(x1015|x1016));

    if (t176 != 2147487559LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1018 = -1;
	volatile int64_t x1019 = -1LL;
	static volatile int8_t x1020 = INT8_MIN;
	volatile int64_t t177 = 48131LL;

    t177 = ((x1017*x1018)-(x1019|x1020));

    if (t177 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1021 = -1;
	volatile int16_t x1023 = INT16_MIN;
	volatile uint64_t t178 = 93848410263LLU;

    t178 = ((x1021*x1022)-(x1023|x1024));

    if (t178 != 83880LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1031 = 0U;
	static int64_t x1032 = -11889734LL;
	static volatile int64_t t179 = 171007935LL;

    t179 = ((x1029*x1030)-(x1031|x1032));

    if (t179 != 25726982LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1033 = -4;
	int32_t x1034 = 227150;
	int16_t x1035 = 3;
	int64_t x1036 = -6389041597LL;

    t180 = ((x1033*x1034)-(x1035|x1036));

    if (t180 != 6388132997LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x1041 = -2379293;
	static int64_t x1042 = 547791640069LL;
	uint64_t x1043 = 954LLU;
	volatile uint32_t x1044 = UINT32_MAX;
	volatile uint64_t t181 = 4760428LLU;

    t181 = ((x1041*x1042)-(x1043|x1044));

    if (t181 != 17143387254739893104LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x1045 = UINT16_MAX;
	static uint8_t x1046 = UINT8_MAX;
	int8_t x1048 = INT8_MAX;
	static int32_t t182 = -1689;

    t182 = ((x1045*x1046)-(x1047|x1048));

    if (t182 != 16711298) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x1050 = 119U;
	int16_t x1051 = INT16_MIN;
	static int64_t x1052 = -1LL;
	int64_t t183 = 62514715170360LL;

    t183 = ((x1049*x1050)-(x1051|x1052));

    if (t183 != -3899391LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1053 = 8666U;
	int32_t x1054 = INT32_MIN;
	int16_t x1056 = INT16_MAX;
	uint32_t t184 = 5U;

    t184 = ((x1053*x1054)-(x1055|x1056));

    if (t184 != 2147483649U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1057 = -1LL;
	int8_t x1058 = 0;
	volatile int64_t t185 = -1561LL;

    t185 = ((x1057*x1058)-(x1059|x1060));

    if (t185 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x1061 = 5U;
	static int8_t x1062 = INT8_MAX;
	uint64_t x1063 = 210172697LLU;
	int64_t x1064 = INT64_MIN;
	uint64_t t186 = 12620177349256LLU;

    t186 = ((x1061*x1062)-(x1063|x1064));

    if (t186 != 9223372036644603746LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x1065 = -11306;
	int64_t x1067 = INT64_MAX;
	int16_t x1068 = 904;

    t187 = ((x1065*x1066)-(x1067|x1068));

    if (t187 != -9223372032559819817LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1069 = -211LL;
	uint8_t x1070 = 0U;
	int32_t x1071 = INT32_MIN;
	static int8_t x1072 = -1;
	static volatile int64_t t188 = 9112039531917LL;

    t188 = ((x1069*x1070)-(x1071|x1072));

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1073 = INT8_MAX;
	int16_t x1074 = INT16_MIN;
	int8_t x1075 = INT8_MAX;
	int32_t x1076 = -1;
	volatile int32_t t189 = -47630724;

    t189 = ((x1073*x1074)-(x1075|x1076));

    if (t189 != -4161535) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1077 = 32U;
	uint64_t x1078 = UINT64_MAX;
	int64_t x1079 = -1LL;
	static int8_t x1080 = 59;
	static volatile uint64_t t190 = 75522461LLU;

    t190 = ((x1077*x1078)-(x1079|x1080));

    if (t190 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1081 = UINT8_MAX;
	uint64_t x1083 = UINT64_MAX;
	volatile uint64_t t191 = 2985LLU;

    t191 = ((x1081*x1082)-(x1083|x1084));

    if (t191 != 18446744073701195777LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1085 = INT8_MIN;
	static uint16_t x1086 = 84U;
	uint32_t x1087 = 2708861U;
	volatile int16_t x1088 = 3;
	volatile uint32_t t192 = 3276111U;

    t192 = ((x1085*x1086)-(x1087|x1088));

    if (t192 != 4292247681U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1090 = UINT16_MAX;
	static volatile int64_t x1091 = INT64_MIN;
	volatile int64_t t193 = 252984971LL;

    t193 = ((x1089*x1090)-(x1091|x1092));

    if (t193 != 9223372032650771093LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1093 = -2919974;
	volatile int32_t x1095 = INT32_MIN;
	uint16_t x1096 = 344U;

    t194 = ((x1093*x1094)-(x1095|x1096));

    if (t194 != 2150403278LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1101 = -7482;
	uint32_t x1102 = 9U;
	int64_t x1103 = -1LL;
	static volatile int32_t x1104 = 97452661;
	volatile int64_t t195 = 15LL;

    t195 = ((x1101*x1102)-(x1103|x1104));

    if (t195 != 4294899959LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1110 = UINT8_MAX;
	static int32_t x1111 = INT32_MIN;
	volatile int16_t x1112 = -1;
	uint64_t t196 = 4889012974LLU;

    t196 = ((x1109*x1110)-(x1111|x1112));

    if (t196 != 1060087276LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1117 = 14U;
	static volatile int8_t x1118 = -6;
	int16_t x1120 = INT16_MIN;
	volatile int32_t t197 = 10579;

    t197 = ((x1117*x1118)-(x1119|x1120));

    if (t197 != 44) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1121 = INT8_MIN;
	static uint8_t x1123 = 0U;
	uint8_t x1124 = 3U;
	volatile uint64_t t198 = 204341278051LLU;

    t198 = ((x1121*x1122)-(x1123|x1124));

    if (t198 != 125LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1126 = 114555418U;
	int16_t x1127 = INT16_MIN;
	static uint8_t x1128 = 16U;
	uint32_t t199 = 477464U;

    t199 = ((x1125*x1126)-(x1127|x1128));

    if (t199 != 2516808432U) { NG(); } else { ; }
	
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

