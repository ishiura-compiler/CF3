
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

int16_t x8 = INT16_MIN;
static int32_t x12 = -1;
uint64_t t1 = 194LLU;
volatile int64_t x21 = -1LL;
int32_t t4 = -276766984;
static int8_t x45 = -1;
int32_t x46 = INT32_MIN;
volatile int16_t x48 = INT16_MIN;
volatile uint32_t x51 = 1027033175U;
static int32_t x52 = INT32_MAX;
uint32_t x57 = 7605282U;
static int16_t x58 = INT16_MIN;
volatile uint32_t t11 = 3U;
uint64_t x62 = 55075282398600408LLU;
volatile uint64_t t12 = 13632LLU;
static int64_t x91 = INT64_MIN;
int32_t t17 = 34219;
int16_t x93 = -1;
static int64_t t19 = 1LL;
static uint64_t x112 = UINT64_MAX;
uint8_t x116 = 78U;
int16_t x120 = 16;
uint32_t x123 = 579166U;
volatile int64_t t24 = -252015LL;
int32_t x136 = -48473596;
uint16_t x147 = 0U;
uint64_t x151 = UINT64_MAX;
volatile int32_t x152 = INT32_MAX;
volatile int8_t x153 = -1;
int8_t x170 = 0;
int32_t x171 = INT32_MAX;
static uint16_t x175 = UINT16_MAX;
static uint64_t x179 = 3143046352664542631LLU;
uint64_t t36 = 215LLU;
uint16_t x182 = UINT16_MAX;
int64_t x185 = INT64_MIN;
static uint32_t x195 = 0U;
int64_t t41 = 454366734526857621LL;
uint16_t x207 = UINT16_MAX;
int32_t x230 = -14218;
int32_t t47 = -83212;
volatile int32_t t48 = 12;
static int16_t x238 = -1789;
uint16_t x242 = UINT16_MAX;
int32_t t50 = 14913999;
int8_t x248 = 1;
int8_t x250 = INT8_MAX;
static int32_t x251 = INT32_MIN;
static uint32_t x252 = UINT32_MAX;
volatile int32_t x254 = INT32_MIN;
int32_t x263 = 36357;
uint32_t x264 = 241U;
static volatile int64_t t54 = -5886710LL;
uint8_t x265 = UINT8_MAX;
volatile int32_t t55 = -385;
int32_t t57 = -93148;
uint64_t t58 = 15768542978LLU;
int8_t x291 = 17;
volatile uint16_t x292 = UINT16_MAX;
volatile int64_t t59 = -745971970123981LL;
volatile int32_t x293 = -1;
volatile int32_t t60 = -226360948;
static volatile int16_t x297 = INT16_MIN;
int8_t x301 = INT8_MIN;
static int16_t x306 = -1;
static int64_t x309 = -45722850044LL;
int16_t x310 = -427;
int64_t x317 = 187LL;
volatile uint32_t t66 = 9415705U;
int8_t x332 = INT8_MIN;
int32_t x340 = -126127;
static volatile uint16_t x350 = 22U;
uint32_t x355 = 402U;
static int8_t x356 = -1;
uint64_t x359 = UINT64_MAX;
int16_t x361 = INT16_MIN;
uint16_t x362 = 706U;
volatile int32_t x372 = -1;
int64_t t75 = -635424486180LL;
static uint8_t x388 = 12U;
uint16_t x401 = UINT16_MAX;
uint16_t x410 = 25U;
static int8_t x411 = INT8_MAX;
volatile int8_t x424 = 5;
int32_t t86 = 254;
static volatile int32_t x432 = -233;
int32_t t87 = 849644;
static int32_t t88 = 123450488;
volatile int32_t t93 = 9325447;
static int8_t x498 = INT8_MIN;
int64_t x500 = -1LL;
uint64_t x508 = 5698617758LLU;
volatile uint32_t t98 = 582872U;
static int8_t x519 = INT8_MAX;
volatile int32_t x522 = -455403044;
int32_t x524 = 870956;
uint16_t x525 = 0U;
static int16_t x526 = 23;
uint64_t x529 = UINT64_MAX;
int8_t x531 = INT8_MAX;
volatile int64_t x532 = 14600546029LL;
volatile int64_t x533 = INT64_MAX;
static uint32_t x534 = 7602582U;
int64_t x535 = -1LL;
volatile uint8_t x536 = 8U;
uint64_t t104 = 33019906748583505LLU;
uint16_t x552 = 0U;
int16_t x553 = INT16_MIN;
int16_t x554 = INT16_MIN;
int32_t x557 = -1;
int8_t x564 = -33;
volatile int32_t x570 = 66784654;
int64_t t110 = 42LL;
volatile int8_t x582 = INT8_MIN;
uint64_t x592 = UINT64_MAX;
int16_t x598 = -5;
uint64_t x606 = 113417069038094LLU;
static uint64_t t115 = 7643361752LLU;
int32_t x613 = INT32_MIN;
uint32_t x621 = 121U;
uint16_t x627 = 1U;
static volatile int64_t x636 = INT64_MAX;
uint32_t x647 = 116U;
int16_t x650 = 1;
uint32_t x651 = 7U;
volatile int32_t t123 = 61001497;
static volatile uint8_t x655 = UINT8_MAX;
uint64_t x661 = UINT64_MAX;
volatile int8_t x669 = INT8_MAX;
uint8_t x672 = 61U;
volatile uint16_t x682 = UINT16_MAX;
volatile uint8_t x689 = 2U;
volatile int32_t x690 = INT32_MIN;
int64_t x699 = INT64_MIN;
int32_t t134 = -32422;
static volatile int32_t x705 = INT32_MIN;
volatile int64_t x707 = INT64_MIN;
int64_t x708 = -1LL;
int32_t x715 = INT32_MIN;
uint8_t x716 = UINT8_MAX;
volatile int64_t x725 = -2LL;
int64_t x730 = -25863LL;
volatile int8_t x743 = INT8_MAX;
uint64_t x752 = 13055LLU;
uint64_t x760 = UINT64_MAX;
int16_t x762 = -7517;
int8_t x769 = INT8_MAX;
volatile uint32_t t146 = 120U;
volatile int32_t x777 = -17;
int16_t x788 = INT16_MAX;
int64_t t148 = 1081781545153618LL;
int8_t x790 = 28;
static int16_t x793 = -1;
int16_t x795 = INT16_MIN;
int32_t t150 = -2688403;
int32_t x801 = -1;
volatile int32_t x802 = INT32_MIN;
int32_t x818 = -78752;
uint64_t t154 = 6LLU;
static uint32_t x824 = UINT32_MAX;
int8_t x829 = INT8_MIN;
uint64_t x830 = 833220LLU;
static int16_t x831 = INT16_MIN;
volatile int8_t x832 = INT8_MAX;
volatile int16_t x835 = -1;
int8_t x840 = INT8_MIN;
int32_t x842 = 39286885;
volatile int32_t t159 = 128;
int64_t x849 = 25086939071279LL;
int64_t x850 = INT64_MIN;
volatile int64_t x863 = INT64_MIN;
int64_t t165 = -1925LL;
uint8_t x873 = 13U;
int16_t x878 = INT16_MIN;
volatile int32_t x881 = 1;
int32_t t168 = -437710606;
volatile int8_t x888 = -1;
volatile int64_t t170 = -31414681LL;
static volatile int32_t t171 = -3397372;
static int16_t x900 = INT16_MIN;
uint32_t t172 = 18550087U;
uint16_t x908 = UINT16_MAX;
uint32_t x913 = UINT32_MAX;
uint64_t x915 = 9LLU;
int16_t x918 = -51;
uint8_t x922 = 30U;
static volatile int64_t x923 = -219976693574930341LL;
int16_t x926 = INT16_MAX;
int8_t x932 = 2;
int64_t x934 = INT64_MIN;
uint8_t x936 = UINT8_MAX;
volatile uint32_t t181 = 5U;
static int32_t x941 = INT32_MAX;
static int8_t x944 = INT8_MIN;
int64_t x951 = INT64_MAX;
static int16_t x953 = INT16_MAX;
static volatile uint32_t x959 = UINT32_MAX;
int64_t x965 = INT64_MAX;
int16_t x966 = INT16_MIN;
static int32_t t188 = 60203421;
uint8_t x983 = 0U;
int64_t x997 = INT64_MIN;
uint8_t x1000 = 4U;
static int32_t x1001 = INT32_MIN;
static volatile int64_t x1004 = 151328896662LL;
static int32_t t192 = -13;
int16_t x1025 = 201;
int16_t x1026 = -3369;
uint8_t x1027 = 19U;
volatile uint32_t x1030 = 4U;
int64_t x1031 = 226044LL;
int8_t x1033 = -21;
int8_t x1034 = 1;
volatile uint8_t x1038 = 41U;
static int32_t x1040 = -24;
int32_t t198 = 956521;
uint64_t x1046 = 393830866220218LLU;


void f0(void) {
    	static int32_t x5 = INT32_MAX;
	int32_t x6 = 32346785;
	uint64_t x7 = 15656003943580816LLU;
	static int32_t t0 = 204802;

    t0 = (x5%(x6+(x7!=x8)));

    if (t0 != 12595771) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x9 = 1;
	uint64_t x10 = 66899873799035601LLU;
	uint32_t x11 = 847303586U;

    t1 = (x9%(x10+(x11!=x12)));

    if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x17 = 92297373524LLU;
	volatile int8_t x18 = 13;
	int8_t x19 = 1;
	uint32_t x20 = UINT32_MAX;
	static volatile uint64_t t2 = 1059995681477LLU;

    t2 = (x17%(x18+(x19!=x20)));

    if (t2 != 6LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x22 = 1U;
	static int16_t x23 = INT16_MIN;
	static uint32_t x24 = UINT32_MAX;
	int64_t t3 = 1069720716378696LL;

    t3 = (x21%(x22+(x23!=x24)));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x29 = UINT8_MAX;
	volatile int16_t x30 = 10;
	int32_t x31 = INT32_MIN;
	int8_t x32 = 0;

    t4 = (x29%(x30+(x31!=x32)));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x33 = UINT8_MAX;
	int8_t x34 = INT8_MIN;
	volatile int32_t x35 = -818487;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t5 = -17417766;

    t5 = (x33%(x34+(x35!=x36)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x37 = 104U;
	int8_t x38 = 1;
	static int32_t x39 = INT32_MIN;
	uint16_t x40 = 3485U;
	int32_t t6 = -15471179;

    t6 = (x37%(x38+(x39!=x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = 993465629231778397LLU;
	int32_t x42 = INT32_MIN;
	uint8_t x43 = 1U;
	volatile int64_t x44 = 4679599LL;
	volatile uint64_t t7 = 5LLU;

    t7 = (x41%(x42+(x43!=x44)));

    if (t7 != 993465629231778397LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x47 = INT8_MIN;
	volatile int32_t t8 = -316;

    t8 = (x45%(x46+(x47!=x48)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = INT64_MIN;
	uint64_t x50 = 23LLU;
	static volatile uint64_t t9 = 283755048903265295LLU;

    t9 = (x49%(x50+(x51!=x52)));

    if (t9 != 8LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x53 = 3LLU;
	static int64_t x54 = 1407636LL;
	static int64_t x55 = -1LL;
	int8_t x56 = INT8_MAX;
	volatile uint64_t t10 = 0LLU;

    t10 = (x53%(x54+(x55!=x56)));

    if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x59 = -1;
	int64_t x60 = 3LL;

    t11 = (x57%(x58+(x59!=x60)));

    if (t11 != 7605282U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MAX;
	volatile int16_t x63 = -9;
	int16_t x64 = -134;

    t12 = (x61%(x62+(x63!=x64)));

    if (t12 != 2147483647LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x65 = 3;
	int8_t x66 = 3;
	int8_t x67 = -1;
	int8_t x68 = INT8_MIN;
	volatile int32_t t13 = 118;

    t13 = (x65%(x66+(x67!=x68)));

    if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = 7365509U;
	uint16_t x70 = 13304U;
	volatile int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	uint32_t t14 = 1910113205U;

    t14 = (x69%(x70+(x71!=x72)));

    if (t14 != 8397U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x73 = 3U;
	uint64_t x74 = 32081LLU;
	static volatile int64_t x75 = INT64_MIN;
	static uint32_t x76 = 129694508U;
	uint64_t t15 = 938118531427LLU;

    t15 = (x73%(x74+(x75!=x76)));

    if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x85 = 1832348594363109LLU;
	int64_t x86 = INT64_MIN;
	int32_t x87 = -1;
	int32_t x88 = INT32_MIN;
	volatile uint64_t t16 = 647LLU;

    t16 = (x85%(x86+(x87!=x88)));

    if (t16 != 1832348594363109LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = -30;
	int16_t x90 = INT16_MIN;
	int32_t x92 = -1;

    t17 = (x89%(x90+(x91!=x92)));

    if (t17 != -30) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x94 = UINT16_MAX;
	uint32_t x95 = 1415U;
	int32_t x96 = INT32_MIN;
	volatile int32_t t18 = -10090785;

    t18 = (x93%(x94+(x95!=x96)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x97 = INT32_MIN;
	static int64_t x98 = 6182075LL;
	uint16_t x99 = UINT16_MAX;
	static int32_t x100 = INT32_MIN;

    t19 = (x97%(x98+(x99!=x100)));

    if (t19 != -2303276LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x101 = 1;
	int64_t x102 = 10188176LL;
	volatile int64_t x103 = 24233134359145985LL;
	uint8_t x104 = 31U;
	static int64_t t20 = 10694045610LL;

    t20 = (x101%(x102+(x103!=x104)));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x109 = 148U;
	static uint8_t x110 = UINT8_MAX;
	int64_t x111 = INT64_MIN;
	static int32_t t21 = -847;

    t21 = (x109%(x110+(x111!=x112)));

    if (t21 != 148) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x113 = INT16_MIN;
	int32_t x114 = 1;
	volatile int8_t x115 = -1;
	volatile int32_t t22 = -23719140;

    t22 = (x113%(x114+(x115!=x116)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x117 = INT64_MIN;
	volatile int16_t x118 = INT16_MAX;
	uint16_t x119 = UINT16_MAX;
	int64_t t23 = 919993112165LL;

    t23 = (x117%(x118+(x119!=x120)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x121 = INT64_MIN;
	uint16_t x122 = UINT16_MAX;
	static int16_t x124 = -1;

    t24 = (x121%(x122+(x123!=x124)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x129 = 27366;
	static int16_t x130 = INT16_MIN;
	int32_t x131 = -1975396;
	uint8_t x132 = UINT8_MAX;
	int32_t t25 = 37644557;

    t25 = (x129%(x130+(x131!=x132)));

    if (t25 != 27366) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x133 = 198;
	int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MAX;
	int32_t t26 = 40942;

    t26 = (x133%(x134+(x135!=x136)));

    if (t26 != 198) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MIN;
	static int32_t x139 = INT32_MIN;
	volatile int16_t x140 = INT16_MIN;
	volatile uint64_t t27 = 540944254008547763LLU;

    t27 = (x137%(x138+(x139!=x140)));

    if (t27 != 32766LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x141 = UINT8_MAX;
	static int8_t x142 = -3;
	uint8_t x143 = 13U;
	int32_t x144 = INT32_MIN;
	volatile int32_t t28 = 0;

    t28 = (x141%(x142+(x143!=x144)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	int32_t x148 = 250;
	volatile int64_t t29 = 192LL;

    t29 = (x145%(x146+(x147!=x148)));

    if (t29 != -8LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x149 = 2424LLU;
	static int64_t x150 = INT64_MIN;
	volatile uint64_t t30 = 97683624197LLU;

    t30 = (x149%(x150+(x151!=x152)));

    if (t30 != 2424LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x154 = 3170145720790LLU;
	volatile int8_t x155 = -1;
	uint32_t x156 = 53864737U;
	uint64_t t31 = 20LLU;

    t31 = (x153%(x154+(x155!=x156)));

    if (t31 != 2159873126461LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x161 = UINT32_MAX;
	uint8_t x162 = 3U;
	uint64_t x163 = 43LLU;
	int16_t x164 = -1;
	volatile uint32_t t32 = 11144U;

    t32 = (x161%(x162+(x163!=x164)));

    if (t32 != 3U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x165 = -1;
	static int64_t x166 = INT64_MIN;
	uint64_t x167 = 2LLU;
	int16_t x168 = -1;
	static int64_t t33 = -199934368LL;

    t33 = (x165%(x166+(x167!=x168)));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x169 = 573460395U;
	int32_t x172 = -1;
	static uint32_t t34 = 1450U;

    t34 = (x169%(x170+(x171!=x172)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x173 = -1;
	int16_t x174 = INT16_MIN;
	int64_t x176 = -1LL;
	volatile int32_t t35 = -2362381;

    t35 = (x173%(x174+(x175!=x176)));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x177 = -1;
	uint64_t x178 = 114463518269LLU;
	int16_t x180 = 1;

    t36 = (x177%(x178+(x179!=x180)));

    if (t36 != 3177221205LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x181 = UINT16_MAX;
	volatile int8_t x183 = INT8_MIN;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t37 = 0;

    t37 = (x181%(x182+(x183!=x184)));

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x186 = -79182184;
	int8_t x187 = -1;
	int32_t x188 = 8663364;
	static volatile int64_t t38 = 4135853075LL;

    t38 = (x185%(x186+(x187!=x188)));

    if (t38 != -19547402LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x193 = UINT16_MAX;
	uint16_t x194 = 3U;
	static int16_t x196 = 5226;
	volatile int32_t t39 = -5794;

    t39 = (x193%(x194+(x195!=x196)));

    if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x197 = 31646601U;
	int16_t x198 = INT16_MIN;
	volatile int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MAX;
	static uint32_t t40 = 1779709U;

    t40 = (x197%(x198+(x199!=x200)));

    if (t40 != 31646601U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x201 = -1;
	static int64_t x202 = INT64_MIN;
	uint16_t x203 = 51U;
	int8_t x204 = INT8_MIN;

    t41 = (x201%(x202+(x203!=x204)));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x205 = INT64_MIN;
	uint16_t x206 = UINT16_MAX;
	int8_t x208 = INT8_MAX;
	int64_t t42 = -1451986805626044LL;

    t42 = (x205%(x206+(x207!=x208)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x213 = INT32_MIN;
	int32_t x214 = 1058473300;
	int64_t x215 = INT64_MAX;
	volatile int8_t x216 = 3;
	volatile int32_t t43 = 978653;

    t43 = (x213%(x214+(x215!=x216)));

    if (t43 != -30537046) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x217 = INT16_MIN;
	static int32_t x218 = -2;
	int64_t x219 = INT64_MIN;
	int64_t x220 = -1992341768759LL;
	int32_t t44 = -2701895;

    t44 = (x217%(x218+(x219!=x220)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x221 = UINT8_MAX;
	uint8_t x222 = 75U;
	int8_t x223 = 3;
	volatile uint16_t x224 = 1U;
	int32_t t45 = 39238;

    t45 = (x221%(x222+(x223!=x224)));

    if (t45 != 27) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x225 = INT8_MIN;
	static volatile uint32_t x226 = 27307U;
	int16_t x227 = 2;
	int16_t x228 = -1;
	static uint32_t t46 = 246605019U;

    t46 = (x225%(x226+(x227!=x228)));

    if (t46 != 19544U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x229 = INT8_MIN;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;

    t47 = (x229%(x230+(x231!=x232)));

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x233 = INT8_MIN;
	int8_t x234 = 1;
	int16_t x235 = INT16_MAX;
	static uint64_t x236 = UINT64_MAX;

    t48 = (x233%(x234+(x235!=x236)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x237 = INT64_MIN;
	static volatile int16_t x239 = INT16_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile int64_t t49 = -33985LL;

    t49 = (x237%(x238+(x239!=x240)));

    if (t49 != -200LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x241 = 6U;
	int8_t x243 = INT8_MAX;
	int32_t x244 = INT32_MIN;

    t50 = (x241%(x242+(x243!=x244)));

    if (t50 != 6) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x245 = 0;
	static int32_t x246 = INT32_MIN;
	static int8_t x247 = -1;
	volatile int32_t t51 = -2;

    t51 = (x245%(x246+(x247!=x248)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x249 = 4U;
	int32_t t52 = 77856979;

    t52 = (x249%(x250+(x251!=x252)));

    if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x253 = INT32_MIN;
	static uint16_t x255 = UINT16_MAX;
	int64_t x256 = INT64_MIN;
	static int32_t t53 = 119499162;

    t53 = (x253%(x254+(x255!=x256)));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x261 = -2214;
	static int64_t x262 = -1339578219372LL;

    t54 = (x261%(x262+(x263!=x264)));

    if (t54 != -2214LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x266 = UINT8_MAX;
	uint16_t x267 = 17984U;
	int16_t x268 = INT16_MIN;

    t55 = (x265%(x266+(x267!=x268)));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x269 = INT32_MIN;
	int16_t x270 = INT16_MIN;
	int16_t x271 = -1;
	int32_t x272 = INT32_MAX;
	volatile int32_t t56 = -362978;

    t56 = (x269%(x270+(x271!=x272)));

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x273 = -1;
	int8_t x274 = 1;
	int64_t x275 = 1885290LL;
	static int8_t x276 = -1;

    t57 = (x273%(x274+(x275!=x276)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x277 = 102932676013LLU;
	static uint8_t x278 = 0U;
	static uint8_t x279 = 75U;
	uint32_t x280 = 36570027U;

    t58 = (x277%(x278+(x279!=x280)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x289 = 370570U;
	int64_t x290 = 1LL;

    t59 = (x289%(x290+(x291!=x292)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x294 = 22;
	int64_t x295 = INT64_MIN;
	static int8_t x296 = INT8_MIN;

    t60 = (x293%(x294+(x295!=x296)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x298 = 5U;
	int8_t x299 = -1;
	volatile int64_t x300 = -308192558LL;
	uint32_t t61 = 1U;

    t61 = (x297%(x298+(x299!=x300)));

    if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MIN;
	static int8_t x304 = -1;
	int64_t t62 = -986625LL;

    t62 = (x301%(x302+(x303!=x304)));

    if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x305 = INT32_MIN;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = -1;
	volatile int32_t t63 = 31461022;

    t63 = (x305%(x306+(x307!=x308)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x311 = INT8_MIN;
	static int8_t x312 = INT8_MIN;
	int64_t t64 = 67LL;

    t64 = (x309%(x310+(x311!=x312)));

    if (t64 != -46LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x318 = 124208422U;
	uint8_t x319 = 1U;
	int32_t x320 = -318745995;
	int64_t t65 = 4199982292187LL;

    t65 = (x317%(x318+(x319!=x320)));

    if (t65 != 187LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x321 = UINT32_MAX;
	static int16_t x322 = INT16_MAX;
	int32_t x323 = -1;
	int8_t x324 = INT8_MAX;

    t66 = (x321%(x322+(x323!=x324)));

    if (t66 != 32767U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x325 = 1;
	static int16_t x326 = 180;
	volatile uint32_t x327 = 7416U;
	volatile uint8_t x328 = 1U;
	static int32_t t67 = 16457;

    t67 = (x325%(x326+(x327!=x328)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x329 = 3;
	int8_t x330 = 1;
	uint8_t x331 = 18U;
	int32_t t68 = -239704950;

    t68 = (x329%(x330+(x331!=x332)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint16_t x333 = 3738U;
	int64_t x334 = INT64_MIN;
	static volatile int16_t x335 = INT16_MIN;
	int64_t x336 = -2525225687LL;
	volatile int64_t t69 = 581278988189782LL;

    t69 = (x333%(x334+(x335!=x336)));

    if (t69 != 3738LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x337 = UINT64_MAX;
	uint64_t x338 = 38333105744897LLU;
	static int8_t x339 = INT8_MIN;
	volatile uint64_t t70 = 240LLU;

    t70 = (x337%(x338+(x339!=x340)));

    if (t70 != 10260938246259LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x349 = INT64_MIN;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 44227374653471LLU;
	int64_t t71 = 1647LL;

    t71 = (x349%(x350+(x351!=x352)));

    if (t71 != -3LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x353 = UINT32_MAX;
	static int64_t x354 = 2765454849017955021LL;
	volatile int64_t t72 = -139285659697187LL;

    t72 = (x353%(x354+(x355!=x356)));

    if (t72 != 4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x357 = 43421U;
	int8_t x358 = INT8_MIN;
	int64_t x360 = 151896LL;
	static volatile uint32_t t73 = 6685U;

    t73 = (x357%(x358+(x359!=x360)));

    if (t73 != 43421U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x363 = 17014U;
	int16_t x364 = INT16_MAX;
	volatile int32_t t74 = 3;

    t74 = (x361%(x362+(x363!=x364)));

    if (t74 != -246) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x369 = -157623424103LL;
	int32_t x370 = INT32_MIN;
	int16_t x371 = -1;

    t75 = (x369%(x370+(x371!=x372)));

    if (t75 != -857117799LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x373 = UINT8_MAX;
	uint8_t x374 = 25U;
	volatile int16_t x375 = INT16_MAX;
	int64_t x376 = -224358LL;
	volatile int32_t t76 = -15;

    t76 = (x373%(x374+(x375!=x376)));

    if (t76 != 21) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x377 = -1LL;
	static uint8_t x378 = 67U;
	uint32_t x379 = 3022U;
	uint8_t x380 = UINT8_MAX;
	volatile int64_t t77 = 2281050917809305889LL;

    t77 = (x377%(x378+(x379!=x380)));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x385 = UINT8_MAX;
	int8_t x386 = INT8_MIN;
	uint8_t x387 = 0U;
	int32_t t78 = 617;

    t78 = (x385%(x386+(x387!=x388)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MAX;
	static int8_t x392 = INT8_MAX;
	int32_t t79 = -2077825;

    t79 = (x389%(x390+(x391!=x392)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x393 = 911U;
	uint32_t x394 = 3083465U;
	int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MIN;
	uint32_t t80 = 324643U;

    t80 = (x393%(x394+(x395!=x396)));

    if (t80 != 911U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x402 = INT32_MIN;
	int32_t x403 = INT32_MIN;
	int32_t x404 = 24823;
	int32_t t81 = 0;

    t81 = (x401%(x402+(x403!=x404)));

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x405 = -1;
	uint16_t x406 = 7U;
	static volatile int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MAX;
	volatile int32_t t82 = 1517296;

    t82 = (x405%(x406+(x407!=x408)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x409 = 4559685694003LLU;
	int32_t x412 = -1;
	uint64_t t83 = 38805093643LLU;

    t83 = (x409%(x410+(x411!=x412)));

    if (t83 != 11LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x417 = -6719289340625135LL;
	static int64_t x418 = INT64_MIN;
	uint32_t x419 = UINT32_MAX;
	volatile uint16_t x420 = 121U;
	int64_t t84 = -166786908159102716LL;

    t84 = (x417%(x418+(x419!=x420)));

    if (t84 != -6719289340625135LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x421 = 1411593251LLU;
	uint32_t x422 = 1567447705U;
	volatile uint32_t x423 = 468915550U;
	uint64_t t85 = 1250438713LLU;

    t85 = (x421%(x422+(x423!=x424)));

    if (t85 != 1411593251LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x425 = 33584;
	static uint16_t x426 = 209U;
	int32_t x427 = -1;
	int16_t x428 = 0;

    t86 = (x425%(x426+(x427!=x428)));

    if (t86 != 194) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x429 = INT8_MIN;
	int32_t x430 = INT32_MIN;
	int64_t x431 = 216036971LL;

    t87 = (x429%(x430+(x431!=x432)));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x437 = INT8_MIN;
	int8_t x438 = INT8_MIN;
	uint64_t x439 = 60762278LLU;
	uint16_t x440 = UINT16_MAX;

    t88 = (x437%(x438+(x439!=x440)));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x445 = UINT8_MAX;
	uint8_t x446 = 8U;
	volatile uint8_t x447 = UINT8_MAX;
	int16_t x448 = INT16_MAX;
	static volatile int32_t t89 = -33169808;

    t89 = (x445%(x446+(x447!=x448)));

    if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x449 = 23;
	uint64_t x450 = 26878269488762LLU;
	int8_t x451 = -3;
	volatile int8_t x452 = 7;
	volatile uint64_t t90 = 290196511958883LLU;

    t90 = (x449%(x450+(x451!=x452)));

    if (t90 != 23LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x453 = INT64_MIN;
	int32_t x454 = INT32_MIN;
	uint16_t x455 = 878U;
	uint16_t x456 = 2037U;
	volatile int64_t t91 = 2069247494643664403LL;

    t91 = (x453%(x454+(x455!=x456)));

    if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x461 = -1;
	int64_t x462 = 345882469LL;
	volatile int64_t x463 = 917LL;
	uint64_t x464 = 411559LLU;
	volatile int64_t t92 = 551149187503999LL;

    t92 = (x461%(x462+(x463!=x464)));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x473 = UINT8_MAX;
	uint8_t x474 = 37U;
	int8_t x475 = 7;
	volatile int8_t x476 = -1;

    t93 = (x473%(x474+(x475!=x476)));

    if (t93 != 27) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x477 = 50;
	uint64_t x478 = 11317LLU;
	volatile uint64_t x479 = 334882LLU;
	volatile int32_t x480 = INT32_MAX;
	static uint64_t t94 = 531210963462LLU;

    t94 = (x477%(x478+(x479!=x480)));

    if (t94 != 50LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x481 = 188532118561386548LL;
	int8_t x482 = INT8_MAX;
	static uint32_t x483 = UINT32_MAX;
	static int16_t x484 = INT16_MIN;
	volatile int64_t t95 = 192026379LL;

    t95 = (x481%(x482+(x483!=x484)));

    if (t95 != 52LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x497 = INT16_MIN;
	volatile int64_t x499 = INT64_MAX;
	volatile int32_t t96 = 0;

    t96 = (x497%(x498+(x499!=x500)));

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x505 = 320U;
	uint32_t x506 = 1392U;
	volatile int64_t x507 = INT64_MIN;
	uint32_t t97 = 244U;

    t97 = (x505%(x506+(x507!=x508)));

    if (t97 != 320U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x509 = UINT32_MAX;
	int32_t x510 = 2;
	static int16_t x511 = INT16_MAX;
	static uint8_t x512 = 53U;

    t98 = (x509%(x510+(x511!=x512)));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x517 = -1;
	int16_t x518 = INT16_MIN;
	int16_t x520 = INT16_MIN;
	int32_t t99 = 653716383;

    t99 = (x517%(x518+(x519!=x520)));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x521 = 20LLU;
	int8_t x523 = -1;
	uint64_t t100 = 8LLU;

    t100 = (x521%(x522+(x523!=x524)));

    if (t100 != 20LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x527 = -1;
	volatile int16_t x528 = INT16_MIN;
	volatile int32_t t101 = 1;

    t101 = (x525%(x526+(x527!=x528)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x530 = INT32_MIN;
	volatile uint64_t t102 = 7456940987750719LLU;

    t102 = (x529%(x530+(x531!=x532)));

    if (t102 != 2147483646LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t t103 = 0LL;

    t103 = (x533%(x534+(x535!=x536)));

    if (t103 != 5777333LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x537 = 4028340821LLU;
	int8_t x538 = INT8_MAX;
	int8_t x539 = INT8_MAX;
	uint16_t x540 = 17U;

    t104 = (x537%(x538+(x539!=x540)));

    if (t104 != 85LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x549 = INT16_MAX;
	int8_t x550 = INT8_MIN;
	int8_t x551 = INT8_MIN;
	int32_t t105 = 3;

    t105 = (x549%(x550+(x551!=x552)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x555 = -1;
	uint32_t x556 = UINT32_MAX;
	int32_t t106 = 1083454;

    t106 = (x553%(x554+(x555!=x556)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MIN;
	int64_t x560 = 5584LL;
	volatile int32_t t107 = -71;

    t107 = (x557%(x558+(x559!=x560)));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x561 = INT8_MAX;
	int64_t x562 = 121LL;
	static int64_t x563 = INT64_MIN;
	int64_t t108 = 22LL;

    t108 = (x561%(x562+(x563!=x564)));

    if (t108 != 5LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x569 = 7U;
	static uint64_t x571 = 2646986929989429LLU;
	static uint8_t x572 = 13U;
	int32_t t109 = -2622319;

    t109 = (x569%(x570+(x571!=x572)));

    if (t109 != 7) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x577 = -1;
	int64_t x578 = INT64_MIN;
	int32_t x579 = INT32_MAX;
	volatile uint32_t x580 = UINT32_MAX;

    t110 = (x577%(x578+(x579!=x580)));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x581 = 0U;
	uint32_t x583 = 2027U;
	int8_t x584 = INT8_MIN;
	volatile uint32_t t111 = 55U;

    t111 = (x581%(x582+(x583!=x584)));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	volatile int16_t x590 = INT16_MIN;
	volatile int64_t x591 = INT64_MIN;
	uint32_t t112 = 3822278U;

    t112 = (x589%(x590+(x591!=x592)));

    if (t112 != 32766U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x597 = INT32_MAX;
	static int8_t x599 = 18;
	static int16_t x600 = INT16_MAX;
	volatile int32_t t113 = 49368913;

    t113 = (x597%(x598+(x599!=x600)));

    if (t113 != 3) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x601 = -1LL;
	static int8_t x602 = 4;
	int16_t x603 = -1;
	int32_t x604 = -1;
	static volatile int64_t t114 = 7223LL;

    t114 = (x601%(x602+(x603!=x604)));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x605 = -1LL;
	static int32_t x607 = INT32_MIN;
	int8_t x608 = -1;

    t115 = (x605%(x606+(x607!=x608)));

    if (t115 != 24880008590340LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x614 = 44U;
	static int16_t x615 = INT16_MAX;
	volatile int32_t x616 = INT32_MIN;
	static volatile int32_t t116 = 382;

    t116 = (x613%(x614+(x615!=x616)));

    if (t116 != -38) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x617 = UINT8_MAX;
	int64_t x618 = 252LL;
	int16_t x619 = -1;
	static uint32_t x620 = 153429351U;
	volatile int64_t t117 = 43009LL;

    t117 = (x617%(x618+(x619!=x620)));

    if (t117 != 2LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x622 = INT16_MAX;
	volatile int64_t x623 = INT64_MIN;
	int16_t x624 = 0;
	static volatile uint32_t t118 = 12U;

    t118 = (x621%(x622+(x623!=x624)));

    if (t118 != 121U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x625 = UINT8_MAX;
	int32_t x626 = INT32_MIN;
	volatile int64_t x628 = -2951879LL;
	int32_t t119 = 313;

    t119 = (x625%(x626+(x627!=x628)));

    if (t119 != 255) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x633 = INT8_MIN;
	uint8_t x634 = 7U;
	int64_t x635 = -80977LL;
	int32_t t120 = -31;

    t120 = (x633%(x634+(x635!=x636)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x637 = -1;
	int16_t x638 = 424;
	static int8_t x639 = INT8_MIN;
	volatile uint32_t x640 = UINT32_MAX;
	static int32_t t121 = -395;

    t121 = (x637%(x638+(x639!=x640)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x645 = INT16_MAX;
	volatile uint8_t x646 = 0U;
	int16_t x648 = INT16_MAX;
	static int32_t t122 = 24532738;

    t122 = (x645%(x646+(x647!=x648)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x649 = UINT8_MAX;
	volatile uint16_t x652 = 30360U;

    t123 = (x649%(x650+(x651!=x652)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x653 = -1539;
	static int64_t x654 = INT64_MIN;
	volatile int8_t x656 = INT8_MIN;
	volatile int64_t t124 = 8552198011350527LL;

    t124 = (x653%(x654+(x655!=x656)));

    if (t124 != -1539LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x657 = INT32_MIN;
	uint8_t x658 = UINT8_MAX;
	static int32_t x659 = INT32_MIN;
	volatile int8_t x660 = 38;
	int32_t t125 = 32440081;

    t125 = (x657%(x658+(x659!=x660)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x662 = 4;
	int8_t x663 = 38;
	static int16_t x664 = -1;
	volatile uint64_t t126 = 64354011LLU;

    t126 = (x661%(x662+(x663!=x664)));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x665 = UINT64_MAX;
	uint8_t x666 = UINT8_MAX;
	int16_t x667 = -703;
	static uint8_t x668 = 0U;
	volatile uint64_t t127 = 3287LLU;

    t127 = (x665%(x666+(x667!=x668)));

    if (t127 != 255LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x670 = -2344228389847951LL;
	uint8_t x671 = UINT8_MAX;
	volatile int64_t t128 = -1776LL;

    t128 = (x669%(x670+(x671!=x672)));

    if (t128 != 127LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x673 = UINT64_MAX;
	volatile int32_t x674 = 2081;
	uint64_t x675 = 177994LLU;
	uint64_t x676 = 233148381552LLU;
	volatile uint64_t t129 = 94358LLU;

    t129 = (x673%(x674+(x675!=x676)));

    if (t129 != 513LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x681 = -29;
	int32_t x683 = -2276537;
	int8_t x684 = INT8_MAX;
	int32_t t130 = -224522473;

    t130 = (x681%(x682+(x683!=x684)));

    if (t130 != -29) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x691 = 11301;
	uint16_t x692 = 356U;
	static volatile int32_t t131 = -116729678;

    t131 = (x689%(x690+(x691!=x692)));

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x693 = INT8_MIN;
	static int8_t x694 = INT8_MIN;
	int32_t x695 = INT32_MIN;
	static int8_t x696 = INT8_MIN;
	static int32_t t132 = 3;

    t132 = (x693%(x694+(x695!=x696)));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x697 = 19U;
	int8_t x698 = INT8_MAX;
	int32_t x700 = 13;
	static int32_t t133 = 4733851;

    t133 = (x697%(x698+(x699!=x700)));

    if (t133 != 19) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x701 = 5786;
	int16_t x702 = 41;
	uint16_t x703 = 214U;
	volatile uint32_t x704 = 87267901U;

    t134 = (x701%(x702+(x703!=x704)));

    if (t134 != 32) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x706 = 212720611968LLU;
	volatile uint64_t t135 = 2484877LLU;

    t135 = (x705%(x706+(x707!=x708)));

    if (t135 != 178565395486LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x713 = -6LL;
	volatile int16_t x714 = INT16_MIN;
	static int64_t t136 = -19266598LL;

    t136 = (x713%(x714+(x715!=x716)));

    if (t136 != -6LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x721 = INT64_MIN;
	volatile int8_t x722 = INT8_MIN;
	static uint8_t x723 = 0U;
	volatile int8_t x724 = INT8_MIN;
	int64_t t137 = 101470LL;

    t137 = (x721%(x722+(x723!=x724)));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MIN;
	static int8_t x728 = -1;
	static volatile int64_t t138 = 755LL;

    t138 = (x725%(x726+(x727!=x728)));

    if (t138 != -2LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x729 = INT32_MAX;
	uint8_t x731 = 6U;
	static uint64_t x732 = 49906700LLU;
	volatile int64_t t139 = -4058581319LL;

    t139 = (x729%(x730+(x731!=x732)));

    if (t139 != 6615LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x737 = UINT8_MAX;
	int32_t x738 = INT32_MIN;
	volatile uint64_t x739 = UINT64_MAX;
	int64_t x740 = -1LL;
	volatile int32_t t140 = -8857958;

    t140 = (x737%(x738+(x739!=x740)));

    if (t140 != 255) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x741 = -36406;
	static volatile uint8_t x742 = 7U;
	uint32_t x744 = 1234U;
	static volatile int32_t t141 = 0;

    t141 = (x741%(x742+(x743!=x744)));

    if (t141 != -6) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x749 = 59U;
	int16_t x750 = INT16_MIN;
	int32_t x751 = -1;
	static volatile uint32_t t142 = 6533190U;

    t142 = (x749%(x750+(x751!=x752)));

    if (t142 != 59U) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x757 = UINT64_MAX;
	int16_t x758 = INT16_MAX;
	uint8_t x759 = 5U;
	volatile uint64_t t143 = 1543410365104LLU;

    t143 = (x757%(x758+(x759!=x760)));

    if (t143 != 32767LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x761 = 24U;
	uint32_t x763 = 25U;
	int16_t x764 = -1;
	volatile int32_t t144 = 0;

    t144 = (x761%(x762+(x763!=x764)));

    if (t144 != 24) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x770 = INT16_MIN;
	uint8_t x771 = 37U;
	int16_t x772 = -1;
	static int32_t t145 = -436984;

    t145 = (x769%(x770+(x771!=x772)));

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x773 = -1;
	static uint32_t x774 = 681432620U;
	int64_t x775 = -1LL;
	static volatile int32_t x776 = INT32_MAX;

    t146 = (x773%(x774+(x775!=x776)));

    if (t146 != 206371569U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x778 = UINT16_MAX;
	uint64_t x779 = 3824989067LLU;
	int32_t x780 = INT32_MAX;
	volatile int32_t t147 = 613507;

    t147 = (x777%(x778+(x779!=x780)));

    if (t147 != -17) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x785 = 1217U;
	int64_t x786 = INT64_MIN;
	int64_t x787 = INT64_MAX;

    t148 = (x785%(x786+(x787!=x788)));

    if (t148 != 1217LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x789 = UINT64_MAX;
	int8_t x791 = INT8_MIN;
	int16_t x792 = -14495;
	volatile uint64_t t149 = 2135629LLU;

    t149 = (x789%(x790+(x791!=x792)));

    if (t149 != 23LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x794 = INT16_MIN;
	static volatile int32_t x796 = INT32_MAX;

    t150 = (x793%(x794+(x795!=x796)));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x803 = UINT16_MAX;
	int64_t x804 = -1LL;
	volatile int32_t t151 = 200718;

    t151 = (x801%(x802+(x803!=x804)));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x805 = INT16_MAX;
	volatile uint32_t x806 = 3U;
	int64_t x807 = INT64_MAX;
	static uint16_t x808 = UINT16_MAX;
	volatile uint32_t t152 = 2U;

    t152 = (x805%(x806+(x807!=x808)));

    if (t152 != 3U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x809 = INT64_MIN;
	static uint32_t x810 = 16225237U;
	int16_t x811 = INT16_MIN;
	static int32_t x812 = INT32_MIN;
	static volatile int64_t t153 = -13241098451890LL;

    t153 = (x809%(x810+(x811!=x812)));

    if (t153 != -9130658LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x817 = 3197343LLU;
	uint8_t x819 = UINT8_MAX;
	int8_t x820 = INT8_MIN;

    t154 = (x817%(x818+(x819!=x820)));

    if (t154 != 3197343LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x821 = 3U;
	volatile int16_t x822 = INT16_MAX;
	static int32_t x823 = INT32_MIN;
	volatile int32_t t155 = 47;

    t155 = (x821%(x822+(x823!=x824)));

    if (t155 != 3) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t t156 = 8284754LLU;

    t156 = (x829%(x830+(x831!=x832)));

    if (t156 != 735786LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x833 = -1;
	int32_t x834 = INT32_MIN;
	uint8_t x836 = 1U;
	volatile int32_t t157 = 7425;

    t157 = (x833%(x834+(x835!=x836)));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x837 = UINT64_MAX;
	int8_t x838 = INT8_MIN;
	uint64_t x839 = UINT64_MAX;
	volatile uint64_t t158 = 10983447870232751LLU;

    t158 = (x837%(x838+(x839!=x840)));

    if (t158 != 126LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x841 = 57;
	uint64_t x843 = UINT64_MAX;
	int16_t x844 = 1;

    t159 = (x841%(x842+(x843!=x844)));

    if (t159 != 57) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x851 = -1;
	static int64_t x852 = 87LL;
	volatile int64_t t160 = -1225704150814LL;

    t160 = (x849%(x850+(x851!=x852)));

    if (t160 != 25086939071279LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x853 = 82LLU;
	int64_t x854 = INT64_MIN;
	volatile uint16_t x855 = 28U;
	static int32_t x856 = -1;
	volatile uint64_t t161 = 361396057200LLU;

    t161 = (x853%(x854+(x855!=x856)));

    if (t161 != 82LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x857 = -3711262021LL;
	volatile uint8_t x858 = UINT8_MAX;
	int32_t x859 = -63;
	int8_t x860 = INT8_MIN;
	volatile int64_t t162 = 38805013355LL;

    t162 = (x857%(x858+(x859!=x860)));

    if (t162 != -69LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x861 = 100;
	int16_t x862 = INT16_MIN;
	int32_t x864 = 483851;
	int32_t t163 = 40;

    t163 = (x861%(x862+(x863!=x864)));

    if (t163 != 100) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x865 = -9;
	int8_t x866 = -28;
	static int8_t x867 = -1;
	volatile int64_t x868 = INT64_MIN;
	int32_t t164 = -21;

    t164 = (x865%(x866+(x867!=x868)));

    if (t164 != -9) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x869 = INT64_MAX;
	int64_t x870 = 857434LL;
	int32_t x871 = INT32_MIN;
	int8_t x872 = -1;

    t165 = (x869%(x870+(x871!=x872)));

    if (t165 != 36707LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x874 = 9088;
	int32_t x875 = -1;
	volatile int16_t x876 = INT16_MAX;
	int32_t t166 = -5;

    t166 = (x873%(x874+(x875!=x876)));

    if (t166 != 13) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x877 = INT32_MAX;
	static int16_t x879 = -2741;
	int64_t x880 = -1LL;
	volatile int32_t t167 = 357841;

    t167 = (x877%(x878+(x879!=x880)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x882 = INT8_MIN;
	static volatile int16_t x883 = INT16_MIN;
	int32_t x884 = INT32_MIN;

    t168 = (x881%(x882+(x883!=x884)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x885 = -1;
	uint8_t x886 = 0U;
	uint8_t x887 = 8U;
	int32_t t169 = 716320511;

    t169 = (x885%(x886+(x887!=x888)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x889 = -503774681592957LL;
	int16_t x890 = INT16_MIN;
	int8_t x891 = INT8_MIN;
	int16_t x892 = INT16_MIN;

    t170 = (x889%(x890+(x891!=x892)));

    if (t170 != -31526LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x893 = UINT8_MAX;
	int32_t x894 = INT32_MIN;
	int16_t x895 = INT16_MAX;
	volatile int32_t x896 = INT32_MAX;

    t171 = (x893%(x894+(x895!=x896)));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x897 = INT16_MAX;
	uint32_t x898 = UINT32_MAX;
	int16_t x899 = INT16_MIN;

    t172 = (x897%(x898+(x899!=x900)));

    if (t172 != 32767U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x901 = INT32_MIN;
	int16_t x902 = -1;
	volatile uint64_t x903 = UINT64_MAX;
	int8_t x904 = -1;
	volatile int32_t t173 = -46;

    t173 = (x901%(x902+(x903!=x904)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x905 = 1U;
	volatile uint16_t x906 = UINT16_MAX;
	static uint64_t x907 = 506073388170LLU;
	volatile int32_t t174 = -3864597;

    t174 = (x905%(x906+(x907!=x908)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x914 = INT32_MIN;
	int16_t x916 = -2;
	uint32_t t175 = 506241U;

    t175 = (x913%(x914+(x915!=x916)));

    if (t175 != 2147483646U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x917 = INT64_MIN;
	volatile int64_t x919 = INT64_MIN;
	int32_t x920 = INT32_MIN;
	int64_t t176 = -314LL;

    t176 = (x917%(x918+(x919!=x920)));

    if (t176 != -8LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x921 = UINT64_MAX;
	uint16_t x924 = 1U;
	volatile uint64_t t177 = 9LLU;

    t177 = (x921%(x922+(x923!=x924)));

    if (t177 != 15LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x925 = UINT8_MAX;
	int64_t x927 = -8LL;
	int32_t x928 = 396;
	int32_t t178 = 230;

    t178 = (x925%(x926+(x927!=x928)));

    if (t178 != 255) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x929 = 87U;
	static int32_t x930 = -81882207;
	uint8_t x931 = 23U;
	int32_t t179 = 0;

    t179 = (x929%(x930+(x931!=x932)));

    if (t179 != 87) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x933 = 3;
	static volatile int32_t x935 = INT32_MIN;
	volatile int64_t t180 = 302801374920LL;

    t180 = (x933%(x934+(x935!=x936)));

    if (t180 != 3LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x937 = 1586967681U;
	uint8_t x938 = 70U;
	uint8_t x939 = UINT8_MAX;
	int32_t x940 = -1;

    t181 = (x937%(x938+(x939!=x940)));

    if (t181 != 34U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x942 = UINT16_MAX;
	int32_t x943 = INT32_MIN;
	volatile int32_t t182 = 1586319;

    t182 = (x941%(x942+(x943!=x944)));

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x945 = INT16_MAX;
	static volatile uint8_t x946 = 0U;
	volatile uint64_t x947 = UINT64_MAX;
	static int64_t x948 = -5LL;
	int32_t t183 = -1727;

    t183 = (x945%(x946+(x947!=x948)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x949 = 34U;
	volatile int64_t x950 = INT64_MIN;
	uint64_t x952 = 147971429LLU;
	static volatile int64_t t184 = 93435121917745LL;

    t184 = (x949%(x950+(x951!=x952)));

    if (t184 != 34LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x954 = 92U;
	int8_t x955 = -3;
	uint16_t x956 = 968U;
	int32_t t185 = 86;

    t185 = (x953%(x954+(x955!=x956)));

    if (t185 != 31) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x957 = 4171362448018850894LL;
	int8_t x958 = INT8_MIN;
	int16_t x960 = INT16_MIN;
	volatile int64_t t186 = -1152441810LL;

    t186 = (x957%(x958+(x959!=x960)));

    if (t186 != 106LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x967 = -1;
	int16_t x968 = -3;
	int64_t t187 = -8056693038899632LL;

    t187 = (x965%(x966+(x967!=x968)));

    if (t187 != 7LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x977 = -1;
	int16_t x978 = INT16_MAX;
	int16_t x979 = INT16_MIN;
	int64_t x980 = INT64_MIN;

    t188 = (x977%(x978+(x979!=x980)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x981 = -2;
	int8_t x982 = INT8_MIN;
	int32_t x984 = INT32_MIN;
	int32_t t189 = 58;

    t189 = (x981%(x982+(x983!=x984)));

    if (t189 != -2) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x985 = INT8_MIN;
	uint16_t x986 = UINT16_MAX;
	int16_t x987 = -1;
	int16_t x988 = INT16_MAX;
	static volatile int32_t t190 = -12990;

    t190 = (x985%(x986+(x987!=x988)));

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x998 = 118U;
	uint32_t x999 = 2716150U;
	static int64_t t191 = 1171LL;

    t191 = (x997%(x998+(x999!=x1000)));

    if (t191 != -43LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1002 = INT8_MIN;
	uint64_t x1003 = 55008012LLU;

    t192 = (x1001%(x1002+(x1003!=x1004)));

    if (t192 != -8) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1005 = 2105LL;
	int8_t x1006 = INT8_MIN;
	volatile uint16_t x1007 = 127U;
	int16_t x1008 = -1;
	volatile int64_t t193 = 10559668LL;

    t193 = (x1005%(x1006+(x1007!=x1008)));

    if (t193 != 73LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1009 = INT64_MIN;
	volatile uint8_t x1010 = 3U;
	static int8_t x1011 = INT8_MIN;
	volatile int8_t x1012 = -1;
	volatile int64_t t194 = 86201206051585LL;

    t194 = (x1009%(x1010+(x1011!=x1012)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1028 = INT64_MIN;
	static volatile int32_t t195 = 21128;

    t195 = (x1025%(x1026+(x1027!=x1028)));

    if (t195 != 201) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1029 = INT16_MIN;
	uint32_t x1032 = UINT32_MAX;
	uint32_t t196 = 3081532U;

    t196 = (x1029%(x1030+(x1031!=x1032)));

    if (t196 != 3U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1035 = INT64_MIN;
	int16_t x1036 = INT16_MIN;
	int32_t t197 = -17290;

    t197 = (x1033%(x1034+(x1035!=x1036)));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1037 = 98U;
	uint64_t x1039 = 2244LLU;

    t198 = (x1037%(x1038+(x1039!=x1040)));

    if (t198 != 14) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1045 = INT16_MAX;
	static int32_t x1047 = -28952;
	volatile int32_t x1048 = INT32_MIN;
	volatile uint64_t t199 = 1041LLU;

    t199 = (x1045%(x1046+(x1047!=x1048)));

    if (t199 != 32767LLU) { NG(); } else { ; }
	
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

