
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

static int32_t x4 = INT32_MIN;
volatile uint64_t t0 = 5LLU;
int16_t x17 = INT16_MAX;
static int64_t x34 = INT64_MIN;
volatile int8_t x41 = -1;
static int64_t t7 = -12LL;
int64_t x53 = INT64_MIN;
volatile uint64_t x59 = UINT64_MAX;
static uint16_t x69 = UINT16_MAX;
uint64_t x72 = 28465417LLU;
uint8_t x76 = 2U;
static int64_t x80 = INT64_MIN;
uint32_t t16 = 1103891394U;
int16_t x105 = -7;
int32_t x129 = INT32_MIN;
uint32_t x137 = 1016907214U;
uint8_t x138 = UINT8_MAX;
static volatile uint32_t t24 = 13314323U;
volatile uint64_t t25 = 19526359LLU;
uint32_t x145 = 374U;
uint64_t x149 = 1742LLU;
volatile int64_t x154 = INT64_MIN;
int64_t x155 = INT64_MAX;
static int16_t x156 = INT16_MAX;
volatile int64_t x159 = INT64_MAX;
int32_t x160 = 119631892;
int8_t x163 = -62;
volatile int8_t x169 = 14;
uint32_t x171 = 29770U;
volatile int32_t x173 = INT32_MIN;
int8_t x175 = INT8_MIN;
volatile int8_t x190 = 8;
int64_t x191 = 4355046LL;
volatile int64_t t36 = 14104LL;
int8_t x193 = -1;
int16_t x203 = 57;
volatile int64_t x204 = INT64_MIN;
int8_t x212 = -1;
int64_t t40 = -4821839707LL;
int32_t x216 = -1066624870;
static uint32_t x219 = UINT32_MAX;
int16_t x220 = -2071;
uint64_t t42 = 259853361284LLU;
static volatile int32_t t44 = 889154;
static int32_t x229 = -1;
volatile uint64_t x235 = UINT64_MAX;
uint32_t x237 = 214349980U;
int16_t x238 = INT16_MAX;
uint32_t t47 = 1620U;
int32_t x243 = INT32_MIN;
uint64_t x248 = 1137479291677788446LLU;
static int16_t x250 = INT16_MIN;
volatile int8_t x259 = -1;
int16_t x260 = -1;
static int64_t x262 = -1LL;
volatile int64_t t52 = 267016937741744LL;
uint8_t x266 = UINT8_MAX;
volatile int64_t x271 = INT64_MIN;
int16_t x280 = -1;
static int32_t t55 = -415243891;
static volatile uint32_t x288 = 19U;
static volatile int32_t x296 = INT32_MAX;
int64_t t60 = -58654LL;
int16_t x314 = 2;
volatile uint64_t x317 = 905289012689LLU;
int32_t x320 = INT32_MIN;
static uint64_t x326 = UINT64_MAX;
volatile uint64_t t64 = 8795506092LLU;
int16_t x330 = 162;
int64_t x332 = -1LL;
uint32_t x343 = 18045U;
volatile int32_t x346 = INT32_MIN;
volatile uint64_t x354 = 0LLU;
int32_t x356 = INT32_MIN;
volatile uint8_t x363 = 103U;
int8_t x371 = INT8_MIN;
int8_t x376 = INT8_MAX;
static volatile uint64_t x382 = 15955804607414856LLU;
static uint16_t x388 = UINT16_MAX;
int8_t x405 = -1;
int32_t x407 = -124;
int8_t x408 = INT8_MIN;
int8_t x409 = -3;
volatile int64_t x410 = -1LL;
uint32_t x429 = 1476261U;
uint8_t x436 = 0U;
volatile int64_t x437 = -4608862594668713221LL;
volatile uint8_t x441 = 1U;
volatile int64_t x444 = 6831771LL;
int64_t x445 = -102360616560213689LL;
int16_t x451 = -4;
uint32_t x457 = 274062232U;
volatile uint32_t x458 = 148153365U;
int64_t x460 = 161820898725429985LL;
uint64_t t89 = 0LLU;
static int32_t x470 = INT32_MIN;
volatile int16_t x472 = 530;
static int64_t x477 = -1442203LL;
uint64_t x478 = 10486304410LLU;
volatile uint64_t t91 = 1691310788LLU;
volatile int64_t x484 = INT64_MIN;
volatile uint64_t t93 = 832757731038488119LLU;
static int8_t x489 = -1;
volatile uint64_t t96 = 221009LLU;
int16_t x506 = INT16_MIN;
int16_t x507 = -15959;
volatile int16_t x512 = 1;
uint32_t x515 = 0U;
uint8_t x523 = UINT8_MAX;
uint32_t x531 = 51017U;
int32_t x532 = -1;
int64_t x536 = INT64_MIN;
uint8_t x538 = 2U;
volatile uint64_t t103 = 6452800LLU;
int8_t x545 = -1;
static volatile int32_t x546 = INT32_MIN;
uint64_t x550 = 133LLU;
volatile int32_t t107 = INT32_MAX;
static uint16_t x570 = 6642U;
int64_t t109 = 95866997884808LL;
uint32_t x574 = 8536256U;
static uint8_t x575 = 1U;
volatile int64_t t111 = 69303302995LL;
static int64_t x581 = 1212269189LL;
uint64_t x583 = UINT64_MAX;
volatile uint32_t t115 = 33U;
volatile int32_t t117 = 247136;
volatile uint8_t x614 = 29U;
int16_t x618 = INT16_MIN;
uint64_t x620 = 8404816203419970365LLU;
static volatile uint64_t t119 = 334LLU;
uint64_t x627 = 300559275LLU;
static int16_t x644 = INT16_MIN;
int64_t t123 = 176605041LL;
volatile uint64_t x658 = 39727874LLU;
volatile int16_t x659 = INT16_MIN;
static int32_t x664 = INT32_MIN;
volatile uint32_t x669 = 4880373U;
int64_t x671 = -30973208LL;
static int8_t x675 = -1;
static volatile int64_t x678 = 69735225LL;
static uint64_t x679 = UINT64_MAX;
volatile uint64_t t128 = 66627LLU;
int32_t x681 = INT32_MIN;
int16_t x683 = 3;
static volatile uint16_t x685 = UINT16_MAX;
static int8_t x686 = -23;
uint32_t x707 = UINT32_MAX;
uint32_t t134 = 193U;
static uint32_t x716 = UINT32_MAX;
volatile int64_t x717 = -36635LL;
uint64_t x718 = 3021LLU;
uint64_t x727 = 14904030099439731LLU;
uint8_t x736 = 57U;
int16_t x738 = -1081;
int32_t x743 = INT32_MIN;
static int32_t x744 = INT32_MIN;
static int64_t x748 = -1LL;
volatile int32_t x753 = -1;
int32_t x759 = INT32_MIN;
int16_t x773 = -1;
int64_t t147 = 2123508668189LL;
int8_t x777 = -25;
volatile int8_t x778 = INT8_MAX;
int16_t x780 = INT16_MIN;
static volatile int32_t t148 = 87;
int32_t x783 = INT32_MIN;
uint32_t x789 = 44U;
uint8_t x791 = 88U;
uint64_t t152 = 1407045478455822035LLU;
int32_t x805 = INT32_MIN;
int32_t x807 = -158;
static volatile int16_t x811 = INT16_MIN;
int32_t x819 = -1;
volatile uint64_t x822 = 970248131561428LLU;
int8_t x824 = INT8_MAX;
volatile uint64_t t160 = 62919483697LLU;
int32_t x845 = -1;
static volatile uint64_t t161 = 32516394592619077LLU;
int32_t x850 = INT32_MAX;
int64_t x855 = -1LL;
int32_t x856 = 21565294;
volatile int64_t t164 = 23807314073LL;
int16_t x865 = 810;
int64_t x866 = -1835LL;
int64_t t165 = 1227428406944916212LL;
static volatile int16_t x888 = 56;
static int32_t t166 = 896618;
uint8_t x890 = 5U;
int16_t x894 = 1;
int16_t x897 = 113;
volatile int8_t x902 = -1;
int16_t x905 = INT16_MIN;
volatile int32_t x907 = 3973;
volatile int16_t x914 = 6014;
int8_t x917 = -42;
int16_t x918 = 366;
uint32_t x922 = 49U;
volatile int8_t x923 = -1;
static int16_t x924 = INT16_MAX;
int8_t x933 = INT8_MIN;
static int32_t x934 = -1;
uint64_t x936 = 42406426LLU;
static uint32_t x937 = UINT32_MAX;
static volatile int64_t t178 = 67690713999LL;
uint8_t x941 = 18U;
volatile uint32_t x942 = 15522024U;
volatile uint32_t t179 = 1561711074U;
volatile int8_t x947 = -15;
uint8_t x951 = 80U;
int16_t x960 = INT16_MIN;
volatile uint32_t t182 = 14U;
volatile int16_t x962 = -1;
uint8_t x968 = UINT8_MAX;
volatile int64_t t185 = 2161868LL;
int64_t x975 = 2001421LL;
uint64_t x979 = UINT64_MAX;
uint32_t x980 = 3062822U;
uint16_t x1007 = UINT16_MAX;
static volatile int64_t t192 = -49LL;
static uint8_t x1021 = 25U;
static volatile int8_t x1037 = -1;
uint64_t x1039 = 77487988405576LLU;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint64_t x2 = 351LLU;
	static int32_t x3 = -2047893;

    t0 = ((x1*(x2|x3))+x4);

    if (t0 != 4397221877383168LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x13 = UINT16_MAX;
	static volatile int16_t x14 = -7;
	int32_t x15 = INT32_MAX;
	int16_t x16 = -1296;
	volatile int32_t t1 = 12434;

    t1 = ((x13*(x14|x15))+x16);

    if (t1 != -66831) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x18 = INT32_MIN;
	uint32_t x19 = 2305175U;
	static volatile int16_t x20 = INT16_MIN;
	static uint32_t t2 = 1919U;

    t2 = ((x17*(x18|x19))+x20);

    if (t2 != 371708777U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x25 = -360847306LL;
	uint32_t x26 = 955U;
	uint16_t x27 = 17U;
	static int8_t x28 = INT8_MAX;
	volatile int64_t t3 = 3LL;

    t3 = ((x25*(x26|x27))+x28);

    if (t3 != -344609177103LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x29 = 45845178LL;
	uint64_t x30 = 19777693755372983LLU;
	volatile int16_t x31 = INT16_MIN;
	int32_t x32 = -180;
	static uint64_t t4 = 9913168442553LLU;

    t4 = ((x29*(x30|x31))+x32);

    if (t4 != 18446743952999197762LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = -1;
	uint8_t x35 = 13U;
	int32_t x36 = -1983;
	volatile int64_t t5 = 1136LL;

    t5 = ((x33*(x34|x35))+x36);

    if (t5 != 9223372036854773812LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x37 = -1LL;
	volatile int64_t x38 = INT64_MIN;
	volatile int64_t x39 = INT64_MAX;
	int32_t x40 = INT32_MIN;
	int64_t t6 = -55968530960162799LL;

    t6 = ((x37*(x38|x39))+x40);

    if (t6 != -2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x42 = -916748108702098679LL;
	int64_t x43 = 0LL;
	int8_t x44 = -1;

    t7 = ((x41*(x42|x43))+x44);

    if (t7 != 916748108702098678LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x45 = -59;
	uint16_t x46 = 1301U;
	volatile uint64_t x47 = UINT64_MAX;
	int32_t x48 = -2429;
	uint64_t t8 = 126181136LLU;

    t8 = ((x45*(x46|x47))+x48);

    if (t8 != 18446744073709549246LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x49 = 641U;
	int16_t x50 = 0;
	int16_t x51 = 0;
	static int32_t x52 = -751;
	int32_t t9 = -26296679;

    t9 = ((x49*(x50|x51))+x52);

    if (t9 != -751) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x54 = 2178814839808248605LLU;
	uint32_t x55 = 1U;
	uint32_t x56 = 19011460U;
	volatile uint64_t t10 = 2128LLU;

    t10 = ((x53*(x54|x55))+x56);

    if (t10 != 9223372036873787268LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = 5;
	uint8_t x58 = 57U;
	int32_t x60 = INT32_MIN;
	static volatile uint64_t t11 = 204189065746446147LLU;

    t11 = ((x57*(x58|x59))+x60);

    if (t11 != 18446744071562067963LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x70 = INT8_MAX;
	static int8_t x71 = -57;
	volatile uint64_t t12 = 0LLU;

    t12 = ((x69*(x70|x71))+x72);

    if (t12 != 28399882LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x73 = 5U;
	int8_t x74 = INT8_MAX;
	static int8_t x75 = -1;
	int32_t t13 = 12757;

    t13 = ((x73*(x74|x75))+x76);

    if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x77 = 31172U;
	int32_t x78 = INT32_MIN;
	int16_t x79 = -1;
	volatile int64_t t14 = 8LL;

    t14 = ((x77*(x78|x79))+x80);

    if (t14 != -9223372032559839684LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x85 = UINT64_MAX;
	volatile int8_t x86 = 14;
	uint64_t x87 = 6055192279347LLU;
	int16_t x88 = 0;
	uint64_t t15 = 0LLU;

    t15 = ((x85*(x86|x87))+x88);

    if (t15 != 18446738018517272257LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = 0U;

    t16 = ((x101*(x102|x103))+x104);

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x106 = -36LL;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	volatile int64_t t17 = 27597362LL;

    t17 = ((x105*(x106|x107))+x108);

    if (t17 != 124LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x113 = INT32_MAX;
	int8_t x114 = -1;
	int32_t x115 = 66445;
	static volatile int32_t x116 = -1;
	static volatile int32_t t18 = INT32_MIN;

    t18 = ((x113*(x114|x115))+x116);

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x117 = 18U;
	volatile int16_t x118 = INT16_MAX;
	static volatile int64_t x119 = 7532LL;
	static int64_t x120 = -1LL;
	int64_t t19 = -70418162929594043LL;

    t19 = ((x117*(x118|x119))+x120);

    if (t19 != 589805LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x121 = -6;
	uint64_t x122 = 444459922912550822LLU;
	volatile uint32_t x123 = 947528987U;
	volatile uint32_t x124 = UINT32_MAX;
	volatile uint64_t t20 = 3768686LLU;

    t20 = ((x121*(x122|x123))+x124);

    if (t20 != 15779984538880016773LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x125 = INT8_MIN;
	uint64_t x126 = 135947352815742777LLU;
	int16_t x127 = -28;
	uint16_t x128 = 556U;
	uint64_t t21 = 4903439629200LLU;

    t21 = ((x125*(x126|x127))+x128);

    if (t21 != 940LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x130 = UINT8_MAX;
	static volatile uint32_t x131 = UINT32_MAX;
	int32_t x132 = -1160;
	uint32_t t22 = 314616U;

    t22 = ((x129*(x130|x131))+x132);

    if (t22 != 2147482488U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MAX;
	uint64_t x135 = 43348917249720LLU;
	int16_t x136 = INT16_MAX;
	volatile uint64_t t23 = 37204333190295LLU;

    t23 = ((x133*(x134|x135))+x136);

    if (t23 != 17026286753058717695LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x139 = 1U;
	volatile int8_t x140 = 0;

    t24 = ((x137*(x138|x139))+x140);

    if (t24 != 1613301810U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x141 = INT64_MAX;
	volatile int32_t x142 = INT32_MIN;
	uint64_t x143 = 260572839245LLU;
	volatile uint8_t x144 = 3U;

    t25 = ((x141*(x142|x143))+x144);

    if (t25 != 9223372038274941622LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x146 = INT16_MIN;
	static uint16_t x147 = 85U;
	static volatile int8_t x148 = -13;
	volatile uint32_t t26 = 215683U;

    t26 = ((x145*(x146|x147))+x148);

    if (t26 != 4282743841U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x150 = 269;
	volatile int16_t x151 = INT16_MIN;
	int16_t x152 = -1;
	uint64_t t27 = 65038LLU;

    t27 = ((x149*(x150|x151))+x152);

    if (t27 != 18446744073652938357LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x153 = 3;
	static int64_t t28 = -1109LL;

    t28 = ((x153*(x154|x155))+x156);

    if (t28 != 32764LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x157 = -19268044386LL;
	int32_t x158 = -1;
	int64_t t29 = -75038103LL;

    t29 = ((x157*(x158|x159))+x160);

    if (t29 != 19387676278LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x161 = 3268U;
	uint64_t x162 = UINT64_MAX;
	static int8_t x164 = -1;
	uint64_t t30 = 1762134600223835543LLU;

    t30 = ((x161*(x162|x163))+x164);

    if (t30 != 18446744073709548347LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x165 = 3221U;
	int8_t x166 = -16;
	volatile int64_t x167 = INT64_MIN;
	uint64_t x168 = 440544053LLU;
	uint64_t t31 = 24LLU;

    t31 = ((x165*(x166|x167))+x168);

    if (t31 != 440492517LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x170 = INT16_MIN;
	volatile uint16_t x172 = 29551U;
	volatile uint32_t t32 = 1U;

    t32 = ((x169*(x170|x171))+x172);

    if (t32 != 4294954875U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x174 = UINT64_MAX;
	int8_t x176 = INT8_MAX;
	uint64_t t33 = 46388472LLU;

    t33 = ((x173*(x174|x175))+x176);

    if (t33 != 2147483775LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x177 = INT8_MIN;
	volatile uint64_t x178 = UINT64_MAX;
	volatile int64_t x179 = -1LL;
	static int32_t x180 = INT32_MAX;
	uint64_t t34 = 400158034197910LLU;

    t34 = ((x177*(x178|x179))+x180);

    if (t34 != 2147483775LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x181 = -10;
	int16_t x182 = INT16_MIN;
	static int64_t x183 = -1LL;
	uint8_t x184 = UINT8_MAX;
	volatile int64_t t35 = 152952132LL;

    t35 = ((x181*(x182|x183))+x184);

    if (t35 != 265LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x189 = 109U;
	static int64_t x192 = -1LL;

    t36 = ((x189*(x190|x191))+x192);

    if (t36 != 474700885LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x194 = -18;
	static volatile int16_t x195 = INT16_MIN;
	static volatile int32_t x196 = -1;
	int32_t t37 = 905913;

    t37 = ((x193*(x194|x195))+x196);

    if (t37 != 17) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint8_t x201 = 0U;
	int32_t x202 = -1;
	int64_t t38 = INT64_MIN;

    t38 = ((x201*(x202|x203))+x204);

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	int64_t x206 = -1LL;
	int16_t x207 = -1;
	uint64_t x208 = 1060382122793239760LLU;
	uint64_t t39 = 799995309LLU;

    t39 = ((x205*(x206|x207))+x208);

    if (t39 != 1060382118498272465LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x209 = 6987U;
	static int16_t x210 = -1;
	static int64_t x211 = -1LL;

    t40 = ((x209*(x210|x211))+x212);

    if (t40 != -6988LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x213 = -1;
	volatile uint16_t x214 = 0U;
	uint64_t x215 = UINT64_MAX;
	uint64_t t41 = 3LLU;

    t41 = ((x213*(x214|x215))+x216);

    if (t41 != 18446744072642926747LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x217 = UINT64_MAX;
	static int32_t x218 = -1;

    t42 = ((x217*(x218|x219))+x220);

    if (t42 != 18446744069414582250LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x221 = UINT32_MAX;
	uint8_t x222 = 105U;
	int16_t x223 = INT16_MIN;
	volatile int16_t x224 = 1252;
	volatile uint32_t t43 = 4001U;

    t43 = ((x221*(x222|x223))+x224);

    if (t43 != 33915U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x225 = 22U;
	static int8_t x226 = INT8_MIN;
	int16_t x227 = 1;
	static int8_t x228 = INT8_MIN;

    t44 = ((x225*(x226|x227))+x228);

    if (t44 != -2922) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x230 = INT16_MIN;
	int32_t x231 = -1;
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t45 = 150277190764LLU;

    t45 = ((x229*(x230|x231))+x232);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x233 = 13803260723612LLU;
	volatile int32_t x234 = -33;
	static int64_t x236 = -1LL;
	volatile uint64_t t46 = 331555LLU;

    t46 = ((x233*(x234|x235))+x236);

    if (t46 != 18446730270448828003LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x239 = 14U;
	static volatile int16_t x240 = INT16_MIN;

    t47 = ((x237*(x238|x239))+x240);

    if (t47 != 1334232932U) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x241 = 2U;
	int64_t x242 = -4658372LL;
	int32_t x244 = INT32_MIN;
	int64_t t48 = -991624681183070018LL;

    t48 = ((x241*(x242|x243))+x244);

    if (t48 != -2156800392LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x245 = INT16_MIN;
	static int32_t x246 = 6967;
	uint32_t x247 = UINT32_MAX;
	static uint64_t t49 = 3878373044LLU;

    t49 = ((x245*(x246|x247))+x248);

    if (t49 != 1137479291677821214LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x249 = INT8_MIN;
	int16_t x251 = 3403;
	int8_t x252 = INT8_MAX;
	static int32_t t50 = 79802;

    t50 = ((x249*(x250|x251))+x252);

    if (t50 != 3758847) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x257 = INT8_MIN;
	volatile uint16_t x258 = 7455U;
	volatile int32_t t51 = 60;

    t51 = ((x257*(x258|x259))+x260);

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x261 = UINT8_MAX;
	static volatile int64_t x263 = -1LL;
	int16_t x264 = 0;

    t52 = ((x261*(x262|x263))+x264);

    if (t52 != -255LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x265 = UINT16_MAX;
	int16_t x267 = INT16_MAX;
	int32_t x268 = 912;
	int32_t t53 = 251283178;

    t53 = ((x265*(x266|x267))+x268);

    if (t53 != 2147386257) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x269 = -1;
	volatile uint32_t x270 = UINT32_MAX;
	int32_t x272 = 0;
	int64_t t54 = -11273579107426744LL;

    t54 = ((x269*(x270|x271))+x272);

    if (t54 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x277 = -1;
	int16_t x278 = 1;
	uint8_t x279 = UINT8_MAX;

    t55 = ((x277*(x278|x279))+x280);

    if (t55 != -256) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x285 = -1850;
	int32_t x286 = -1;
	int16_t x287 = -7673;
	static volatile uint32_t t56 = 254U;

    t56 = ((x285*(x286|x287))+x288);

    if (t56 != 1869U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x289 = 0U;
	int16_t x290 = INT16_MIN;
	int64_t x291 = -875399318LL;
	volatile int8_t x292 = INT8_MAX;
	volatile int64_t t57 = 1171278140132LL;

    t57 = ((x289*(x290|x291))+x292);

    if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x293 = -1;
	int64_t x294 = 317LL;
	int8_t x295 = INT8_MAX;
	int64_t t58 = 371LL;

    t58 = ((x293*(x294|x295))+x296);

    if (t58 != 2147483264LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x297 = 5436U;
	uint16_t x298 = UINT16_MAX;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MAX;
	uint32_t t59 = 1755U;

    t59 = ((x297*(x298|x299))+x300);

    if (t59 != 2503731907U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x309 = 0;
	int16_t x310 = 181;
	int64_t x311 = 12779821958LL;
	int8_t x312 = -1;

    t60 = ((x309*(x310|x311))+x312);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x313 = INT16_MIN;
	static int32_t x315 = -1;
	static volatile int32_t x316 = -1;
	int32_t t61 = 64785963;

    t61 = ((x313*(x314|x315))+x316);

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x318 = -1;
	static int64_t x319 = -2LL;
	uint64_t t62 = 20126032948170504LLU;

    t62 = ((x317*(x318|x319))+x320);

    if (t62 != 18446743166273055279LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x321 = -1;
	volatile int8_t x322 = INT8_MAX;
	static int32_t x323 = INT32_MAX;
	static int64_t x324 = -1LL;
	int64_t t63 = 223819381134316815LL;

    t63 = ((x321*(x322|x323))+x324);

    if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x325 = INT8_MIN;
	uint16_t x327 = UINT16_MAX;
	static volatile int64_t x328 = INT64_MIN;

    t64 = ((x325*(x326|x327))+x328);

    if (t64 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x329 = -1028080361LL;
	int16_t x331 = INT16_MAX;
	int64_t t65 = -2LL;

    t65 = ((x329*(x330|x331))+x332);

    if (t65 != -33687109188888LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x333 = -1;
	int16_t x334 = INT16_MAX;
	uint64_t x335 = 2622538943240426741LLU;
	volatile int64_t x336 = INT64_MAX;
	uint64_t t66 = 543LLU;

    t66 = ((x333*(x334|x335))+x336);

    if (t66 != 6600833093614338048LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x341 = INT16_MIN;
	volatile int8_t x342 = -6;
	uint32_t x344 = UINT32_MAX;
	uint32_t t67 = 239963U;

    t67 = ((x341*(x342|x343))+x344);

    if (t67 != 32767U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x345 = -912566604LL;
	uint16_t x347 = UINT16_MAX;
	static int16_t x348 = INT16_MAX;
	static volatile int64_t t68 = 5097456959406980LL;

    t68 = ((x345*(x346|x347))+x348);

    if (t68 != 1959662054748531019LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x349 = INT16_MIN;
	int64_t x350 = INT64_MAX;
	volatile int8_t x351 = -25;
	uint8_t x352 = UINT8_MAX;
	int64_t t69 = 2673858404835577240LL;

    t69 = ((x349*(x350|x351))+x352);

    if (t69 != 33023LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x353 = UINT64_MAX;
	static uint16_t x355 = 5U;
	volatile uint64_t t70 = 229LLU;

    t70 = ((x353*(x354|x355))+x356);

    if (t70 != 18446744071562067963LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	uint16_t x358 = 2013U;
	uint64_t x359 = UINT64_MAX;
	static int64_t x360 = -27649596032881LL;
	volatile uint64_t t71 = 55559896013471359LLU;

    t71 = ((x357*(x358|x359))+x360);

    if (t71 != 18446716424113518480LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x361 = 0;
	int16_t x362 = INT16_MIN;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t72 = -19;

    t72 = ((x361*(x362|x363))+x364);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x369 = -258779130705LL;
	uint8_t x370 = UINT8_MAX;
	uint16_t x372 = 58U;
	volatile int64_t t73 = 446556012659703810LL;

    t73 = ((x369*(x370|x371))+x372);

    if (t73 != 258779130763LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x373 = 18U;
	uint8_t x374 = UINT8_MAX;
	int64_t x375 = -4404781181273830LL;
	volatile int64_t t74 = -13896594LL;

    t74 = ((x373*(x374|x375))+x376);

    if (t74 != -79286061262924691LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x377 = INT16_MAX;
	int8_t x378 = -1;
	uint8_t x379 = 2U;
	int8_t x380 = INT8_MIN;
	int32_t t75 = -34;

    t75 = ((x377*(x378|x379))+x380);

    if (t75 != -32895) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x381 = INT32_MIN;
	int16_t x383 = -5204;
	uint32_t x384 = 3107186U;
	volatile uint64_t t76 = 2096398916LLU;

    t76 = ((x381*(x382|x383))+x384);

    if (t76 != 11038069057906LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x385 = -2735;
	uint32_t x386 = 24918U;
	int16_t x387 = INT16_MIN;
	uint32_t t77 = 162261902U;

    t77 = ((x385*(x386|x387))+x388);

    if (t77 != 21535285U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x406 = 133;
	int32_t t78 = -13;

    t78 = ((x405*(x406|x407))+x408);

    if (t78 != -5) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x411 = INT16_MIN;
	int8_t x412 = 2;
	volatile int64_t t79 = 143219664LL;

    t79 = ((x409*(x410|x411))+x412);

    if (t79 != 5LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x413 = 1764U;
	volatile int8_t x414 = INT8_MIN;
	static int8_t x415 = INT8_MIN;
	uint16_t x416 = 26998U;
	uint32_t t80 = 2095U;

    t80 = ((x413*(x414|x415))+x416);

    if (t80 != 4294768502U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x421 = 0;
	int32_t x422 = INT32_MIN;
	int16_t x423 = 2;
	volatile uint8_t x424 = UINT8_MAX;
	volatile int32_t t81 = 30;

    t81 = ((x421*(x422|x423))+x424);

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x425 = 7;
	int64_t x426 = -817946364086261LL;
	uint32_t x427 = 4818U;
	int64_t x428 = INT64_MAX;
	int64_t t82 = -1754040610048208995LL;

    t82 = ((x425*(x426|x427))+x428);

    if (t82 != 9217646412306177020LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x430 = INT16_MIN;
	static int16_t x431 = 9;
	static volatile uint32_t x432 = 116380U;
	static uint32_t t83 = 13U;

    t83 = ((x429*(x430|x431))+x432);

    if (t83 != 3178889833U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x433 = -1LL;
	int16_t x434 = -1;
	int16_t x435 = 0;
	volatile int64_t t84 = -14LL;

    t84 = ((x433*(x434|x435))+x436);

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x438 = 107;
	int8_t x439 = -1;
	int16_t x440 = -1;
	int64_t t85 = 4148932LL;

    t85 = ((x437*(x438|x439))+x440);

    if (t85 != 4608862594668713220LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x442 = 21U;
	int16_t x443 = -1;
	int64_t t86 = -51207458950LL;

    t86 = ((x441*(x442|x443))+x444);

    if (t86 != 6831770LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x446 = -7489299561808LL;
	uint64_t x447 = 87046LLU;
	int16_t x448 = INT16_MIN;
	static volatile uint64_t t87 = 3564355395841914LLU;

    t87 = ((x445*(x446|x447))+x448);

    if (t87 != 15475276774825411194LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x449 = -1;
	int64_t x450 = -1LL;
	volatile int16_t x452 = INT16_MIN;
	int64_t t88 = -1LL;

    t88 = ((x449*(x450|x451))+x452);

    if (t88 != -32767LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x459 = UINT64_MAX;

    t89 = ((x457*(x458|x459))+x460);

    if (t89 != 161820898451367753LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x469 = -274964634;
	uint32_t x471 = 7332U;
	uint32_t t90 = 0U;

    t90 = ((x469*(x470|x471))+x472);

    if (t90 != 2593933162U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x479 = 1;
	static int32_t x480 = INT32_MIN;

    t91 = ((x477*(x478|x479))+x480);

    if (t91 != 18431620691881610535LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x481 = -1;
	int8_t x482 = INT8_MIN;
	static int32_t x483 = 314768;
	int64_t t92 = 6LL;

    t92 = ((x481*(x482|x483))+x484);

    if (t92 != -9223372036854775696LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x485 = 11273705487233578LLU;
	int16_t x486 = -302;
	int8_t x487 = 2;
	static uint64_t x488 = 12095996LLU;

    t93 = ((x485*(x486|x487))+x488);

    if (t93 != 15042085016577107056LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x490 = -1;
	int32_t x491 = INT32_MAX;
	int64_t x492 = -402271297883610242LL;
	volatile int64_t t94 = 201358333369LL;

    t94 = ((x489*(x490|x491))+x492);

    if (t94 != -402271297883610241LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x498 = -1;
	volatile uint16_t x499 = 879U;
	int32_t x500 = -203106;
	volatile int32_t t95 = 2;

    t95 = ((x497*(x498|x499))+x500);

    if (t95 != -170338) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x501 = -1;
	uint8_t x502 = 56U;
	static uint64_t x503 = 189148LLU;
	uint16_t x504 = 5585U;

    t96 = ((x501*(x502|x503))+x504);

    if (t96 != 18446744073709368021LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x505 = 60U;
	int16_t x508 = 1;
	static volatile int32_t t97 = -106;

    t97 = ((x505*(x506|x507))+x508);

    if (t97 != -957539) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint16_t x509 = 17643U;
	static int32_t x510 = INT32_MIN;
	int64_t x511 = INT64_MAX;
	int64_t t98 = -22LL;

    t98 = ((x509*(x510|x511))+x512);

    if (t98 != -17642LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x513 = 8432706266LL;
	uint16_t x514 = UINT16_MAX;
	int8_t x516 = -4;
	int64_t t99 = -530174791893407LL;

    t99 = ((x513*(x514|x515))+x516);

    if (t99 != 552637405142306LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x521 = INT8_MAX;
	volatile uint8_t x522 = 11U;
	static int64_t x524 = 1LL;
	volatile int64_t t100 = -44840699651315LL;

    t100 = ((x521*(x522|x523))+x524);

    if (t100 != 32386LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x529 = 10487847LLU;
	int8_t x530 = -1;
	volatile uint64_t t101 = 14393LLU;

    t101 = ((x529*(x530|x531))+x532);

    if (t101 != 45044959859963864LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x533 = 323787LLU;
	uint8_t x534 = 2U;
	uint8_t x535 = 5U;
	uint64_t t102 = 5345726136430731653LLU;

    t102 = ((x533*(x534|x535))+x536);

    if (t102 != 9223372036857042317LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x537 = 1;
	int16_t x539 = 1;
	uint64_t x540 = UINT64_MAX;

    t103 = ((x537*(x538|x539))+x540);

    if (t103 != 2LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x547 = UINT8_MAX;
	uint64_t x548 = 1LLU;
	uint64_t t104 = 9LLU;

    t104 = ((x545*(x546|x547))+x548);

    if (t104 != 2147483394LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x549 = -1;
	int64_t x551 = INT64_MAX;
	int32_t x552 = -1;
	volatile uint64_t t105 = 93743681483573LLU;

    t105 = ((x549*(x550|x551))+x552);

    if (t105 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x553 = -1;
	int64_t x554 = -1LL;
	static int16_t x555 = INT16_MAX;
	volatile int64_t x556 = 276LL;
	volatile int64_t t106 = 0LL;

    t106 = ((x553*(x554|x555))+x556);

    if (t106 != 277LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x561 = 0;
	int32_t x562 = -566329365;
	int8_t x563 = -1;
	static int32_t x564 = INT32_MAX;

    t107 = ((x561*(x562|x563))+x564);

    if (t107 != INT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x565 = 262808549LL;
	volatile int16_t x566 = 2256;
	static uint16_t x567 = 0U;
	uint32_t x568 = UINT32_MAX;
	volatile int64_t t108 = -7160182046287LL;

    t108 = ((x565*(x566|x567))+x568);

    if (t108 != 597191053839LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x569 = 0;
	int64_t x571 = INT64_MIN;
	int32_t x572 = -1;

    t109 = ((x569*(x570|x571))+x572);

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x573 = 10;
	volatile int16_t x576 = INT16_MAX;
	volatile uint32_t t110 = 32U;

    t110 = ((x573*(x574|x575))+x576);

    if (t110 != 85395337U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x577 = -20;
	static int16_t x578 = INT16_MIN;
	int64_t x579 = INT64_MIN;
	volatile uint32_t x580 = UINT32_MAX;

    t111 = ((x577*(x578|x579))+x580);

    if (t111 != 4295622655LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x582 = 525U;
	uint64_t x584 = UINT64_MAX;
	uint64_t t112 = 1039332001934LLU;

    t112 = ((x581*(x582|x583))+x584);

    if (t112 != 18446744072497282426LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x585 = -1;
	int8_t x586 = -2;
	uint32_t x587 = 430449908U;
	volatile int64_t x588 = INT64_MIN;
	int64_t t113 = -1LL;

    t113 = ((x585*(x586|x587))+x588);

    if (t113 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x593 = -1;
	int32_t x594 = -34888893;
	volatile int16_t x595 = INT16_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t114 = 1;

    t114 = ((x593*(x594|x595))+x596);

    if (t114 != -9027) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x597 = 48246558U;
	static int32_t x598 = INT32_MIN;
	uint32_t x599 = 32737726U;
	int16_t x600 = 0;

    t115 = ((x597*(x598|x599))+x600);

    if (t115 != 4078175812U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x601 = 22U;
	int64_t x602 = 637LL;
	int64_t x603 = 13377175884LL;
	volatile int8_t x604 = INT8_MIN;
	int64_t t116 = -315LL;

    t116 = ((x601*(x602|x603))+x604);

    if (t116 != 294297881662LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x609 = INT16_MIN;
	int16_t x610 = -3012;
	int8_t x611 = -1;
	int8_t x612 = INT8_MIN;

    t117 = ((x609*(x610|x611))+x612);

    if (t117 != 32640) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x613 = 51U;
	int16_t x615 = -10;
	static int8_t x616 = INT8_MAX;
	int32_t t118 = 3035;

    t118 = ((x613*(x614|x615))+x616);

    if (t118 != 76) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x617 = 29U;
	volatile uint64_t x619 = 685559996LLU;

    t119 = ((x617*(x618|x619))+x620);

    if (t119 != 8404816203419619465LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x621 = -16663954220686LL;
	int16_t x622 = -1;
	int32_t x623 = 30;
	int32_t x624 = INT32_MIN;
	int64_t t120 = 133469634137428629LL;

    t120 = ((x621*(x622|x623))+x624);

    if (t120 != 16661806737038LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x625 = -2;
	int32_t x626 = INT32_MIN;
	volatile uint16_t x628 = 4418U;
	volatile uint64_t t121 = 1LLU;

    t121 = ((x625*(x626|x627))+x628);

    if (t121 != 3693853164LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x629 = INT8_MIN;
	int16_t x630 = INT16_MAX;
	uint8_t x631 = 110U;
	int8_t x632 = INT8_MIN;
	int32_t t122 = 0;

    t122 = ((x629*(x630|x631))+x632);

    if (t122 != -4194304) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x641 = -1LL;
	int32_t x642 = INT32_MAX;
	static volatile int32_t x643 = INT32_MIN;

    t123 = ((x641*(x642|x643))+x644);

    if (t123 != -32767LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x657 = 11768U;
	int32_t x660 = INT32_MIN;
	static uint64_t t124 = 63605LLU;

    t124 = ((x657*(x658|x659))+x660);

    if (t124 != 18446744071330120688LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x661 = 3U;
	volatile int64_t x662 = INT64_MAX;
	volatile int8_t x663 = INT8_MIN;
	int64_t t125 = -38890400244804LL;

    t125 = ((x661*(x662|x663))+x664);

    if (t125 != -2147483651LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x670 = 7U;
	uint8_t x672 = UINT8_MAX;
	volatile int64_t t126 = -4361590812810738LL;

    t126 = ((x669*(x670|x671))+x672);

    if (t126 != -151160773883718LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x673 = -1;
	uint16_t x674 = 7U;
	int32_t x676 = 7679;
	int32_t t127 = 30;

    t127 = ((x673*(x674|x675))+x676);

    if (t127 != 7680) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x677 = 5840;
	uint16_t x680 = UINT16_MAX;

    t128 = ((x677*(x678|x679))+x680);

    if (t128 != 59695LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x682 = 375226708U;
	int64_t x684 = -1LL;
	int64_t t129 = -39585LL;

    t129 = ((x681*(x682|x683))+x684);

    if (t129 != 2147483647LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x687 = INT16_MAX;
	int16_t x688 = INT16_MIN;
	volatile int32_t t130 = 1960;

    t130 = ((x685*(x686|x687))+x688);

    if (t130 != -98303) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x693 = -5;
	uint64_t x694 = 184544036765375LLU;
	int64_t x695 = 2356017622244660LL;
	static int64_t x696 = INT64_MAX;
	volatile uint64_t t131 = 17638369588430LLU;

    t131 = ((x693*(x694|x695))+x696);

    if (t131 != 9210706358657220932LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x697 = 61178706U;
	static int16_t x698 = -15;
	static uint32_t x699 = 24416U;
	uint8_t x700 = 13U;
	static uint32_t t132 = 8633U;

    t132 = ((x697*(x698|x699))+x700);

    if (t132 != 3377286719U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x701 = INT8_MIN;
	static uint16_t x702 = 1U;
	static int8_t x703 = INT8_MIN;
	uint16_t x704 = 1759U;
	static int32_t t133 = 212645088;

    t133 = ((x701*(x702|x703))+x704);

    if (t133 != 18015) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x705 = 7434129U;
	uint16_t x706 = 30U;
	volatile int16_t x708 = -1;

    t134 = ((x705*(x706|x707))+x708);

    if (t134 != 4287533166U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x713 = -1;
	int32_t x714 = INT32_MIN;
	int16_t x715 = INT16_MIN;
	uint32_t t135 = 224541U;

    t135 = ((x713*(x714|x715))+x716);

    if (t135 != 32767U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x719 = 0U;
	int16_t x720 = -1;
	uint64_t t136 = 76LLU;

    t136 = ((x717*(x718|x719))+x720);

    if (t136 != 18446744073598877280LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x725 = 63;
	uint64_t x726 = 475267595587617366LLU;
	int64_t x728 = 452319109LL;
	volatile uint64_t t137 = 24884584929809450LLU;

    t137 = ((x725*(x726|x727))+x728);

    if (t137 != 12142514111137772238LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x729 = INT32_MIN;
	uint32_t x730 = 2269574U;
	volatile uint64_t x731 = 38687LLU;
	int32_t x732 = -1;
	volatile uint64_t t138 = 1010LLU;

    t138 = ((x729*(x730|x731))+x732);

    if (t138 != 18441858052341628927LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x733 = -1;
	uint16_t x734 = 20U;
	int32_t x735 = INT32_MAX;
	volatile int32_t t139 = -804204506;

    t139 = ((x733*(x734|x735))+x736);

    if (t139 != -2147483590) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x737 = -1;
	uint16_t x739 = UINT16_MAX;
	uint32_t x740 = 3U;
	static uint32_t t140 = 8087U;

    t140 = ((x737*(x738|x739))+x740);

    if (t140 != 4U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x741 = -1;
	int32_t x742 = -29;
	int32_t t141 = -754850;

    t141 = ((x741*(x742|x743))+x744);

    if (t141 != -2147483619) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x745 = INT16_MIN;
	volatile int16_t x746 = -1;
	volatile int32_t x747 = -1;
	volatile int64_t t142 = -341680932867511LL;

    t142 = ((x745*(x746|x747))+x748);

    if (t142 != 32767LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x749 = 36059U;
	uint16_t x750 = UINT16_MAX;
	uint8_t x751 = 2U;
	int32_t x752 = -1;
	uint32_t t143 = 25813884U;

    t143 = ((x749*(x750|x751))+x752);

    if (t143 != 2363126564U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x754 = 2587;
	volatile uint16_t x755 = 16U;
	int8_t x756 = INT8_MIN;
	int32_t t144 = 4763;

    t144 = ((x753*(x754|x755))+x756);

    if (t144 != -2715) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x757 = 217133U;
	int32_t x758 = INT32_MIN;
	uint64_t x760 = UINT64_MAX;
	uint64_t t145 = 275844664610742LLU;

    t145 = ((x757*(x758|x759))+x760);

    if (t145 != 2147483647LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x769 = 44U;
	static uint64_t x770 = UINT64_MAX;
	uint32_t x771 = UINT32_MAX;
	int8_t x772 = -5;
	uint64_t t146 = 452LLU;

    t146 = ((x769*(x770|x771))+x772);

    if (t146 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x774 = 1U;
	int64_t x775 = INT64_MAX;
	int16_t x776 = 0;

    t147 = ((x773*(x774|x775))+x776);

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x779 = INT16_MIN;

    t148 = ((x777*(x778|x779))+x780);

    if (t148 != 783257) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x781 = UINT16_MAX;
	int64_t x782 = 51812800439871LL;
	int16_t x784 = INT16_MIN;
	int64_t t149 = -4413LL;

    t149 = ((x781*(x782|x783))+x784);

    if (t149 != -110427724981823LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x785 = -7;
	int8_t x786 = -1;
	int64_t x787 = -1LL;
	static int16_t x788 = INT16_MAX;
	int64_t t150 = 198428323496600911LL;

    t150 = ((x785*(x786|x787))+x788);

    if (t150 != 32774LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x790 = -1;
	uint64_t x792 = 1420LLU;
	volatile uint64_t t151 = 3688LLU;

    t151 = ((x789*(x790|x791))+x792);

    if (t151 != 4294968672LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x801 = INT16_MIN;
	static int16_t x802 = INT16_MIN;
	uint64_t x803 = 107746719LLU;
	uint32_t x804 = 82071978U;

    t152 = ((x801*(x802|x803))+x804);

    if (t152 != 974442922LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x806 = INT64_MIN;
	int16_t x808 = -52;
	volatile int64_t t153 = 19LL;

    t153 = ((x805*(x806|x807))+x808);

    if (t153 != 339302416332LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x809 = 107;
	static uint32_t x810 = 886256U;
	volatile int16_t x812 = INT16_MAX;
	volatile uint32_t t154 = 182596U;

    t154 = ((x809*(x810|x811))+x812);

    if (t154 != 4291656527U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x813 = -2;
	int8_t x814 = INT8_MIN;
	static int16_t x815 = -1;
	volatile uint8_t x816 = UINT8_MAX;
	int32_t t155 = -316;

    t155 = ((x813*(x814|x815))+x816);

    if (t155 != 257) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint8_t x817 = 68U;
	int64_t x818 = INT64_MIN;
	uint8_t x820 = UINT8_MAX;
	int64_t t156 = -6497300210414609LL;

    t156 = ((x817*(x818|x819))+x820);

    if (t156 != 187LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x821 = INT16_MIN;
	uint16_t x823 = 2U;
	volatile uint64_t t157 = 927064801195175758LLU;

    t157 = ((x821*(x822|x823))+x824);

    if (t157 != 5100397372414165119LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x825 = INT8_MAX;
	volatile int8_t x826 = -12;
	int64_t x827 = -132046392987LL;
	static int64_t x828 = 123527667LL;
	int64_t t158 = 941012413943114LL;

    t158 = ((x825*(x826|x827))+x828);

    if (t158 != 123526270LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x829 = 44551U;
	int64_t x830 = INT64_MAX;
	int64_t x831 = INT64_MIN;
	int32_t x832 = INT32_MAX;
	int64_t t159 = 2134631922295643342LL;

    t159 = ((x829*(x830|x831))+x832);

    if (t159 != 2147439096LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x837 = -1;
	volatile int64_t x838 = -1LL;
	static uint64_t x839 = 2236163LLU;
	int32_t x840 = INT32_MAX;

    t160 = ((x837*(x838|x839))+x840);

    if (t160 != 2147483648LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x846 = INT8_MIN;
	volatile int32_t x847 = -1;
	uint64_t x848 = 15442511888428LLU;

    t161 = ((x845*(x846|x847))+x848);

    if (t161 != 15442511888429LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x849 = -1264;
	int64_t x851 = 353087521LL;
	int16_t x852 = INT16_MAX;
	volatile int64_t t162 = 1110054008LL;

    t162 = ((x849*(x850|x851))+x852);

    if (t162 != -2714419297041LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x853 = -1;
	static volatile uint8_t x854 = UINT8_MAX;
	volatile int64_t t163 = -577895402155691LL;

    t163 = ((x853*(x854|x855))+x856);

    if (t163 != 21565295LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x861 = INT8_MAX;
	uint16_t x862 = UINT16_MAX;
	int64_t x863 = -1LL;
	int64_t x864 = -322354LL;

    t164 = ((x861*(x862|x863))+x864);

    if (t164 != -322481LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x867 = INT64_MAX;
	int8_t x868 = -1;

    t165 = ((x865*(x866|x867))+x868);

    if (t165 != -811LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x885 = -1;
	uint8_t x886 = 2U;
	int8_t x887 = -5;

    t166 = ((x885*(x886|x887))+x888);

    if (t166 != 61) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x889 = 2LLU;
	int64_t x891 = INT64_MIN;
	static uint64_t x892 = 49LLU;
	volatile uint64_t t167 = 15LLU;

    t167 = ((x889*(x890|x891))+x892);

    if (t167 != 59LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x893 = -1;
	uint64_t x895 = UINT64_MAX;
	int8_t x896 = INT8_MIN;
	volatile uint64_t t168 = 2035063LLU;

    t168 = ((x893*(x894|x895))+x896);

    if (t168 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x898 = 12913955371770236LLU;
	uint16_t x899 = 6U;
	volatile int32_t x900 = INT32_MAX;
	uint64_t t169 = 243LLU;

    t169 = ((x897*(x898|x899))+x900);

    if (t169 != 1459276959157520541LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x901 = -1;
	uint32_t x903 = UINT32_MAX;
	static uint64_t x904 = 713284231191LLU;
	static volatile uint64_t t170 = 570925300939LLU;

    t170 = ((x901*(x902|x903))+x904);

    if (t170 != 713284231192LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x906 = UINT8_MAX;
	int16_t x908 = INT16_MIN;
	static int32_t t171 = 653;

    t171 = ((x905*(x906|x907))+x908);

    if (t171 != -134217728) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x909 = 0;
	int64_t x910 = -1LL;
	int8_t x911 = -1;
	int16_t x912 = INT16_MIN;
	static int64_t t172 = -9283633894LL;

    t172 = ((x909*(x910|x911))+x912);

    if (t172 != -32768LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x913 = INT16_MIN;
	uint64_t x915 = 77895579079569LLU;
	volatile uint32_t x916 = 3U;
	volatile uint64_t t173 = 1019LLU;

    t173 = ((x913*(x914|x915))+x916);

    if (t173 != 15894261738393075715LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x919 = -1;
	int64_t x920 = -33354942879470394LL;
	int64_t t174 = 776092807402778LL;

    t174 = ((x917*(x918|x919))+x920);

    if (t174 != -33354942879470352LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x921 = UINT16_MAX;
	uint32_t t175 = 5U;

    t175 = ((x921*(x922|x923))+x924);

    if (t175 != 4294934528U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x925 = 5875218;
	uint64_t x926 = 0LLU;
	volatile int16_t x927 = 548;
	volatile int64_t x928 = -1LL;
	uint64_t t176 = 34265965760645LLU;

    t176 = ((x925*(x926|x927))+x928);

    if (t176 != 3219619463LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x935 = INT64_MIN;
	static volatile uint64_t t177 = 307603188015789LLU;

    t177 = ((x933*(x934|x935))+x936);

    if (t177 != 42406554LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x938 = 1LL;
	volatile int8_t x939 = -1;
	int8_t x940 = INT8_MIN;

    t178 = ((x937*(x938|x939))+x940);

    if (t178 != -4294967423LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x943 = -489;
	int16_t x944 = -150;

    t179 = ((x941*(x942|x943))+x944);

    if (t179 != 4294962520U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x945 = -7;
	uint16_t x946 = 31U;
	static int8_t x948 = INT8_MAX;
	int32_t t180 = 239;

    t180 = ((x945*(x946|x947))+x948);

    if (t180 != 134) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x949 = 1U;
	int16_t x950 = INT16_MIN;
	volatile int8_t x952 = INT8_MIN;
	volatile int32_t t181 = 6;

    t181 = ((x949*(x950|x951))+x952);

    if (t181 != -32816) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x957 = 3297562U;
	uint8_t x958 = UINT8_MAX;
	int8_t x959 = 7;

    t182 = ((x957*(x958|x959))+x960);

    if (t182 != 840845542U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x961 = UINT8_MAX;
	int32_t x963 = 1226;
	int8_t x964 = INT8_MIN;
	volatile int32_t t183 = 12;

    t183 = ((x961*(x962|x963))+x964);

    if (t183 != -383) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x965 = -1;
	uint32_t x966 = 91U;
	int16_t x967 = INT16_MIN;
	uint32_t t184 = 6U;

    t184 = ((x965*(x966|x967))+x968);

    if (t184 != 32932U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x969 = -20;
	uint16_t x970 = 340U;
	int64_t x971 = -3622LL;
	volatile int8_t x972 = INT8_MIN;

    t185 = ((x969*(x970|x971))+x972);

    if (t185 != 72232LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x973 = UINT16_MAX;
	volatile uint64_t x974 = 7031774454824963LLU;
	int8_t x976 = -1;
	uint64_t t186 = 14LLU;

    t186 = ((x973*(x974|x975))+x976);

    if (t186 != 18105481241908164080LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x977 = 172U;
	volatile uint64_t x978 = 10706920215621LLU;
	volatile uint64_t t187 = 1LLU;

    t187 = ((x977*(x978|x979))+x980);

    if (t187 != 3062650LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x981 = 0U;
	int32_t x982 = -932796;
	int8_t x983 = INT8_MAX;
	int8_t x984 = -1;
	volatile int32_t t188 = 6135;

    t188 = ((x981*(x982|x983))+x984);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x989 = UINT32_MAX;
	static int8_t x990 = INT8_MAX;
	volatile int64_t x991 = -126LL;
	int16_t x992 = INT16_MAX;
	volatile int64_t t189 = 4107667215419637446LL;

    t189 = ((x989*(x990|x991))+x992);

    if (t189 != -4294934528LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1005 = -1;
	uint32_t x1006 = 631U;
	uint8_t x1008 = 0U;
	uint32_t t190 = 7U;

    t190 = ((x1005*(x1006|x1007))+x1008);

    if (t190 != 4294901761U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1009 = INT8_MAX;
	static int16_t x1010 = INT16_MIN;
	uint64_t x1011 = 977LLU;
	int64_t x1012 = INT64_MAX;
	volatile uint64_t t191 = 695576758567LLU;

    t191 = ((x1009*(x1010|x1011))+x1012);

    if (t191 != 9223372036850738350LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1017 = INT8_MIN;
	int16_t x1018 = INT16_MIN;
	static uint32_t x1019 = UINT32_MAX;
	static int64_t x1020 = -27407542909635LL;

    t192 = ((x1017*(x1018|x1019))+x1020);

    if (t192 != -27407542909507LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1022 = -1;
	int8_t x1023 = INT8_MIN;
	volatile uint32_t x1024 = 7355U;
	static volatile uint32_t t193 = 175245325U;

    t193 = ((x1021*(x1022|x1023))+x1024);

    if (t193 != 7330U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1025 = 7U;
	static int8_t x1026 = INT8_MIN;
	static uint32_t x1027 = UINT32_MAX;
	volatile int32_t x1028 = 1;
	volatile uint32_t t194 = 0U;

    t194 = ((x1025*(x1026|x1027))+x1028);

    if (t194 != 4294967290U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1029 = -1;
	int8_t x1030 = INT8_MIN;
	int8_t x1031 = 27;
	uint64_t x1032 = 133422LLU;
	uint64_t t195 = 8485451LLU;

    t195 = ((x1029*(x1030|x1031))+x1032);

    if (t195 != 133523LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x1033 = 2U;
	volatile int32_t x1034 = INT32_MIN;
	uint64_t x1035 = 320712009496692569LLU;
	int8_t x1036 = -1;
	uint64_t t196 = 2702LLU;

    t196 = ((x1033*(x1034|x1035))+x1036);

    if (t196 != 18446744070261903025LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1038 = INT16_MIN;
	int16_t x1040 = 2314;
	uint64_t t197 = 144719750605593935LLU;

    t197 = ((x1037*(x1038|x1039))+x1040);

    if (t197 != 5058LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1041 = 56;
	int32_t x1042 = 1;
	int16_t x1043 = 4;
	int64_t x1044 = 4LL;
	int64_t t198 = -211666606LL;

    t198 = ((x1041*(x1042|x1043))+x1044);

    if (t198 != 284LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1049 = INT8_MAX;
	int16_t x1050 = INT16_MAX;
	volatile int32_t x1051 = -1;
	int16_t x1052 = INT16_MIN;
	volatile int32_t t199 = 122887;

    t199 = ((x1049*(x1050|x1051))+x1052);

    if (t199 != -32895) { NG(); } else { ; }
	
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

