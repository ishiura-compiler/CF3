
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

int16_t x4 = INT16_MAX;
int64_t x17 = INT64_MAX;
static uint8_t x20 = UINT8_MAX;
int32_t x23 = 37;
volatile int32_t x24 = INT32_MIN;
volatile int32_t x28 = 561985;
int8_t x31 = INT8_MIN;
uint8_t x32 = 0U;
int64_t x37 = -3721839LL;
uint64_t t9 = 3LLU;
int16_t x55 = 15434;
volatile int32_t t11 = 26539871;
int32_t x61 = -1;
int8_t x63 = -1;
int32_t t12 = -37073033;
int64_t x72 = 1775287770590LL;
int16_t x74 = INT16_MIN;
int64_t x84 = INT64_MIN;
uint32_t x94 = 4318595U;
int16_t x98 = INT16_MAX;
int8_t x99 = INT8_MIN;
static int32_t x105 = INT32_MIN;
uint64_t x131 = UINT64_MAX;
volatile int64_t t28 = 260520929641439732LL;
int16_t x142 = 284;
int16_t x149 = 1692;
volatile int8_t x152 = -1;
volatile int32_t t31 = -411;
int32_t x158 = -1;
volatile int32_t t32 = 208981;
int32_t x165 = INT32_MIN;
int16_t x180 = INT16_MIN;
static int8_t x190 = INT8_MIN;
static uint16_t x204 = 1755U;
int8_t x216 = -1;
volatile int16_t x221 = -227;
static volatile int8_t x239 = -1;
volatile int8_t x245 = -1;
static int8_t x249 = -1;
volatile int32_t x260 = INT32_MAX;
int32_t t49 = INT32_MAX;
uint32_t x261 = UINT32_MAX;
int32_t t51 = 12;
int8_t x275 = -1;
uint8_t x277 = UINT8_MAX;
volatile int32_t x281 = -1521;
int64_t x285 = INT64_MIN;
uint64_t x288 = 112LLU;
volatile int16_t x290 = -1;
int32_t x293 = 16784766;
int16_t x295 = INT16_MAX;
uint64_t x302 = 1596300350197220819LLU;
int32_t x304 = INT32_MAX;
static volatile int64_t x307 = 2168899745062596558LL;
uint16_t x315 = UINT16_MAX;
volatile int32_t t63 = 7223;
int32_t t64 = 92517;
uint32_t x338 = UINT32_MAX;
int32_t t66 = -4059215;
static int16_t x346 = 1;
static uint16_t x354 = 459U;
static uint8_t x357 = 13U;
int32_t t72 = 430;
int8_t x369 = -1;
int8_t x370 = -1;
volatile int32_t t73 = -2;
int32_t t74 = -9802;
int8_t x382 = -14;
uint8_t x387 = 5U;
int16_t x396 = INT16_MIN;
int8_t x397 = 0;
int64_t x404 = -2LL;
int64_t t80 = -399764269507243LL;
volatile int8_t x407 = INT8_MAX;
static int32_t x413 = 217;
volatile int64_t x416 = -180LL;
int16_t x423 = INT16_MIN;
int8_t x440 = INT8_MAX;
static int64_t x446 = 126858596593LL;
uint32_t t89 = 169864150U;
int64_t x455 = 3317151298LL;
uint16_t x460 = 16U;
uint16_t x461 = UINT16_MAX;
int32_t x466 = -1;
uint64_t x473 = 1025880903720LLU;
int32_t x474 = INT32_MIN;
static volatile int32_t x484 = INT32_MIN;
int32_t t97 = -408749;
volatile int32_t x500 = -191018149;
volatile uint32_t t101 = 15733U;
static int32_t x513 = -1;
int64_t x524 = INT64_MAX;
int64_t x525 = -1LL;
static volatile int32_t x541 = 3;
int64_t x544 = 230396805305387LL;
uint64_t x557 = 3098654915LLU;
static uint32_t x583 = 1837722832U;
int32_t t114 = 1;
static volatile uint64_t x601 = UINT64_MAX;
static volatile int16_t x604 = INT16_MIN;
int32_t t115 = 6;
uint8_t x619 = 8U;
volatile int16_t x620 = -1;
int32_t t118 = 2039;
volatile uint64_t x621 = 967393LLU;
int64_t x630 = -1LL;
static uint8_t x636 = 4U;
int32_t t123 = INT32_MAX;
int64_t x659 = 150198LL;
static volatile int32_t t125 = -21;
int16_t x661 = INT16_MIN;
volatile uint16_t x662 = 12294U;
uint8_t x664 = 43U;
static int32_t x685 = INT32_MIN;
int8_t x686 = 46;
int8_t x690 = INT8_MAX;
int8_t x691 = INT8_MIN;
int16_t x709 = -22;
int64_t x710 = -1LL;
int16_t x711 = -2308;
uint8_t x712 = 127U;
uint8_t x724 = 22U;
int16_t x727 = INT16_MAX;
int32_t t137 = 3932909;
int16_t x736 = INT16_MIN;
uint16_t x741 = 2514U;
int8_t x742 = INT8_MIN;
uint32_t t140 = 4U;
static volatile int8_t x746 = INT8_MIN;
uint64_t x749 = UINT64_MAX;
uint8_t x753 = 2U;
static int32_t x756 = -329661;
static int32_t t143 = 201494;
static volatile uint64_t x757 = 25853120148LLU;
uint32_t x759 = 214U;
int32_t x762 = INT32_MIN;
uint32_t x763 = UINT32_MAX;
uint16_t x764 = 20U;
static int32_t t145 = -82585;
uint16_t x765 = 17U;
static int64_t x767 = -1LL;
uint8_t x772 = 15U;
int16_t x778 = INT16_MIN;
static volatile uint32_t x780 = UINT32_MAX;
volatile int64_t x781 = INT64_MIN;
volatile uint8_t x782 = UINT8_MAX;
static uint64_t x785 = 152320LLU;
volatile int32_t t150 = 399174001;
static int32_t x791 = 105413521;
int8_t x794 = INT8_MIN;
uint64_t x804 = UINT64_MAX;
uint16_t x817 = 24296U;
int8_t x820 = 10;
int32_t t156 = -2908;
int32_t t157 = -172142;
volatile int8_t x829 = -1;
int16_t x832 = 16;
int32_t x844 = INT32_MAX;
int32_t t160 = 1;
int64_t x858 = -1LL;
volatile uint16_t x859 = UINT16_MAX;
int32_t t163 = 293955917;
static uint32_t x861 = UINT32_MAX;
uint32_t x863 = UINT32_MAX;
int16_t x876 = INT16_MIN;
static int8_t x888 = -1;
int32_t t168 = 52;
uint32_t x890 = 518882U;
uint8_t x892 = 45U;
uint32_t x895 = UINT32_MAX;
static volatile int64_t t170 = INT64_MAX;
volatile int64_t x905 = INT64_MAX;
uint64_t x915 = 2113006LLU;
uint32_t t174 = 160970972U;
uint64_t t175 = 13537700311866457LLU;
volatile uint32_t x926 = 4U;
static volatile int32_t x928 = -114;
int16_t x929 = INT16_MIN;
volatile uint64_t x932 = 10489895045394776LLU;
uint64_t x937 = 6229171148385LLU;
uint64_t x941 = 1633034776944188845LLU;
int32_t x945 = -1;
int16_t x951 = INT16_MAX;
int16_t x960 = -1;
int8_t x961 = -1;
volatile int8_t x969 = INT8_MIN;
static int8_t x980 = -1;
int32_t t187 = -3345912;
int64_t x990 = 75LL;
int8_t x991 = INT8_MAX;
uint16_t x997 = UINT16_MAX;
uint32_t x999 = 501U;
int64_t x1012 = INT64_MAX;
int64_t x1020 = -1LL;
int64_t t194 = 457590616399463LL;
volatile int32_t t196 = -271492984;
int32_t x1030 = -1;
volatile int64_t x1032 = INT64_MIN;
int64_t t197 = -751LL;
int32_t t198 = 47;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int8_t x2 = -1;
	static uint8_t x3 = 34U;
	static volatile int32_t t0 = 191093;

    t0 = ((x1<=(x2*x3))*x4);

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = 1106169202684LL;
	static uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 4934524391540558LLU;

    t1 = ((x5<=(x6*x7))*x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = -1;
	volatile int16_t x12 = -9268;
	volatile int32_t t2 = -225;

    t2 = ((x9<=(x10*x11))*x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MAX;
	int32_t x14 = -1;
	uint16_t x15 = 3U;
	int16_t x16 = -10;
	static volatile int32_t t3 = -2007;

    t3 = ((x13<=(x14*x15))*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 574173616684783LLU;
	int16_t x19 = INT16_MIN;
	int32_t t4 = -247;

    t4 = ((x17<=(x18*x19))*x20);

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	uint16_t x22 = 331U;
	volatile int32_t t5 = INT32_MIN;

    t5 = ((x21<=(x22*x23))*x24);

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	uint8_t x26 = 37U;
	volatile int8_t x27 = INT8_MIN;
	volatile int32_t t6 = 429403;

    t6 = ((x25<=(x26*x27))*x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	uint16_t x30 = 7600U;
	int32_t t7 = -13492;

    t7 = ((x29<=(x30*x31))*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MAX;
	volatile uint64_t x35 = 128LLU;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 1024964;

    t8 = ((x33<=(x34*x35))*x36);

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x38 = 93U;
	int8_t x39 = 1;
	volatile uint64_t x40 = 2LLU;

    t9 = ((x37<=(x38*x39))*x40);

    if (t9 != 2LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint32_t x42 = 503137U;
	int16_t x43 = -1331;
	static volatile int16_t x44 = -1;
	int32_t t10 = -16386818;

    t10 = ((x41<=(x42*x43))*x44);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x53 = 0U;
	volatile uint16_t x54 = 43U;
	int8_t x56 = 1;

    t11 = ((x53<=(x54*x55))*x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x62 = INT64_MAX;
	static int16_t x64 = INT16_MAX;

    t12 = ((x61<=(x62*x63))*x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x65 = 405U;
	volatile uint32_t x66 = 64678U;
	int16_t x67 = INT16_MIN;
	volatile int32_t x68 = -1;
	int32_t t13 = 55;

    t13 = ((x65<=(x66*x67))*x68);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = -1LL;
	int16_t x70 = -1;
	int64_t x71 = 622737793418976LL;
	volatile int64_t t14 = 357442749976LL;

    t14 = ((x69<=(x70*x71))*x72);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x73 = -1LL;
	int16_t x75 = 85;
	int32_t x76 = INT32_MAX;
	int32_t t15 = 17;

    t15 = ((x73<=(x74*x75))*x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x81 = -1;
	uint16_t x82 = 77U;
	int16_t x83 = INT16_MIN;
	volatile int64_t t16 = 4001096639101846344LL;

    t16 = ((x81<=(x82*x83))*x84);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x85 = -1;
	volatile int8_t x86 = INT8_MIN;
	uint16_t x87 = 15U;
	static uint32_t x88 = 975338889U;
	volatile uint32_t t17 = 13U;

    t17 = ((x85<=(x86*x87))*x88);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = 96;
	static uint16_t x90 = 478U;
	static int8_t x91 = INT8_MIN;
	volatile uint16_t x92 = 11U;
	volatile int32_t t18 = -2331680;

    t18 = ((x89<=(x90*x91))*x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x93 = 359564203840LLU;
	int8_t x95 = INT8_MIN;
	volatile uint64_t x96 = 33642735887118706LLU;
	uint64_t t19 = 260LLU;

    t19 = ((x93<=(x94*x95))*x96);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x97 = 1LLU;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t20 = 0;

    t20 = ((x97<=(x98*x99))*x100);

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x106 = -8572;
	int8_t x107 = INT8_MIN;
	static volatile uint16_t x108 = UINT16_MAX;
	volatile int32_t t21 = -8137;

    t21 = ((x105<=(x106*x107))*x108);

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = INT16_MIN;
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = -1635188743524164LL;
	uint8_t x116 = 1U;
	volatile int32_t t22 = -6954649;

    t22 = ((x113<=(x114*x115))*x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x117 = 32;
	uint8_t x118 = 0U;
	int8_t x119 = INT8_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t23 = -154781LL;

    t23 = ((x117<=(x118*x119))*x120);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x121 = INT32_MAX;
	volatile uint64_t x122 = UINT64_MAX;
	int32_t x123 = INT32_MAX;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t24 = -241415;

    t24 = ((x121<=(x122*x123))*x124);

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x125 = UINT16_MAX;
	volatile int64_t x126 = -3642052499LL;
	static int16_t x127 = -410;
	uint8_t x128 = 109U;
	int32_t t25 = -70;

    t25 = ((x125<=(x126*x127))*x128);

    if (t25 != 109) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x129 = INT32_MAX;
	uint16_t x130 = 15U;
	static int8_t x132 = -1;
	volatile int32_t t26 = -65494;

    t26 = ((x129<=(x130*x131))*x132);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x133 = UINT64_MAX;
	static int8_t x134 = -1;
	uint16_t x135 = 180U;
	int32_t x136 = -1;
	static volatile int32_t t27 = -14;

    t27 = ((x133<=(x134*x135))*x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x137 = 6963;
	static uint8_t x138 = 0U;
	uint8_t x139 = 2U;
	int64_t x140 = INT64_MIN;

    t28 = ((x137<=(x138*x139))*x140);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x141 = INT64_MIN;
	int16_t x143 = -1;
	int64_t x144 = -4028277372881927LL;
	static int64_t t29 = -375521194006467204LL;

    t29 = ((x141<=(x142*x143))*x144);

    if (t29 != -4028277372881927LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x145 = 8142U;
	volatile int32_t x146 = -1;
	int16_t x147 = -5;
	int16_t x148 = -1;
	volatile int32_t t30 = 5;

    t30 = ((x145<=(x146*x147))*x148);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x150 = INT32_MAX;
	volatile uint32_t x151 = 523U;

    t31 = ((x149<=(x150*x151))*x152);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint8_t x157 = 124U;
	int16_t x159 = INT16_MAX;
	int32_t x160 = -4;

    t32 = ((x157<=(x158*x159))*x160);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x166 = UINT64_MAX;
	uint8_t x167 = UINT8_MAX;
	int64_t x168 = -1LL;
	int64_t t33 = 2548267177104796LL;

    t33 = ((x165<=(x166*x167))*x168);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x177 = 106130634154695LLU;
	int16_t x178 = 3;
	int8_t x179 = INT8_MAX;
	int32_t t34 = -86;

    t34 = ((x177<=(x178*x179))*x180);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x181 = -1;
	int16_t x182 = INT16_MAX;
	int32_t x183 = -1;
	uint8_t x184 = 0U;
	static volatile int32_t t35 = 0;

    t35 = ((x181<=(x182*x183))*x184);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MAX;
	uint64_t x187 = UINT64_MAX;
	int8_t x188 = -5;
	static volatile int32_t t36 = 124985;

    t36 = ((x185<=(x186*x187))*x188);

    if (t36 != -5) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x189 = UINT16_MAX;
	int8_t x191 = -1;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t37 = 2245824LLU;

    t37 = ((x189<=(x190*x191))*x192);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x193 = 2734U;
	static int8_t x194 = INT8_MIN;
	uint32_t x195 = UINT32_MAX;
	volatile int16_t x196 = -1;
	int32_t t38 = -418821;

    t38 = ((x193<=(x194*x195))*x196);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x197 = 619;
	int16_t x198 = -1;
	volatile int8_t x199 = -1;
	int64_t x200 = INT64_MIN;
	static volatile int64_t t39 = -897977853722063517LL;

    t39 = ((x197<=(x198*x199))*x200);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x201 = 1710U;
	static volatile uint64_t x202 = 4008289LLU;
	volatile int64_t x203 = INT64_MIN;
	int32_t t40 = -227868;

    t40 = ((x201<=(x202*x203))*x204);

    if (t40 != 1755) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x205 = -1LL;
	static int16_t x206 = INT16_MIN;
	static int16_t x207 = INT16_MIN;
	volatile uint32_t x208 = UINT32_MAX;
	uint32_t t41 = UINT32_MAX;

    t41 = ((x205<=(x206*x207))*x208);

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x213 = -1LL;
	static uint64_t x214 = UINT64_MAX;
	static int8_t x215 = INT8_MIN;
	static int32_t t42 = -679718531;

    t42 = ((x213<=(x214*x215))*x216);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x222 = -1;
	int8_t x223 = INT8_MAX;
	int16_t x224 = -1;
	static int32_t t43 = -954;

    t43 = ((x221<=(x222*x223))*x224);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	static volatile uint8_t x235 = 24U;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t44 = -436513866;

    t44 = ((x233<=(x234*x235))*x236);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x237 = 10627U;
	uint32_t x238 = UINT32_MAX;
	uint32_t x240 = 882897041U;
	static volatile uint32_t t45 = 821745U;

    t45 = ((x237<=(x238*x239))*x240);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x241 = 1U;
	volatile uint64_t x242 = UINT64_MAX;
	static int32_t x243 = INT32_MIN;
	static volatile int8_t x244 = INT8_MAX;
	volatile int32_t t46 = -2;

    t46 = ((x241<=(x242*x243))*x244);

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x246 = -1;
	uint64_t x247 = 70663118108468LLU;
	int32_t x248 = INT32_MIN;
	volatile int32_t t47 = 176;

    t47 = ((x245<=(x246*x247))*x248);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x250 = -219;
	int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t48 = 70;

    t48 = ((x249<=(x250*x251))*x252);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x257 = INT32_MIN;
	uint8_t x258 = 0U;
	int64_t x259 = -211253505LL;

    t49 = ((x257<=(x258*x259))*x260);

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x262 = 870416959U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MAX;
	int64_t t50 = 3151257685LL;

    t50 = ((x261<=(x262*x263))*x264);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x265 = -1;
	uint32_t x266 = 6U;
	static int16_t x267 = -1;
	volatile uint16_t x268 = UINT16_MAX;

    t51 = ((x265<=(x266*x267))*x268);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x273 = 14;
	static uint32_t x274 = 4182191U;
	static int32_t x276 = -1;
	int32_t t52 = -673689;

    t52 = ((x273<=(x274*x275))*x276);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x278 = 60U;
	uint16_t x279 = 22764U;
	int64_t x280 = INT64_MIN;
	volatile int64_t t53 = INT64_MIN;

    t53 = ((x277<=(x278*x279))*x280);

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x282 = -1;
	static uint32_t x283 = UINT32_MAX;
	int16_t x284 = -7;
	static int32_t t54 = -422;

    t54 = ((x281<=(x282*x283))*x284);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x286 = 7LL;
	uint8_t x287 = UINT8_MAX;
	uint64_t t55 = 84512216604643288LLU;

    t55 = ((x285<=(x286*x287))*x288);

    if (t55 != 112LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x289 = UINT64_MAX;
	int64_t x291 = 17728716421318889LL;
	static uint16_t x292 = UINT16_MAX;
	int32_t t56 = -7;

    t56 = ((x289<=(x290*x291))*x292);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint64_t x294 = UINT64_MAX;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t57 = 35368851;

    t57 = ((x293<=(x294*x295))*x296);

    if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x297 = INT32_MAX;
	volatile int8_t x298 = INT8_MAX;
	uint64_t x299 = 173781LLU;
	volatile int16_t x300 = 0;
	int32_t t58 = 343;

    t58 = ((x297<=(x298*x299))*x300);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x301 = -1;
	static int32_t x303 = 2697;
	int32_t t59 = 204907;

    t59 = ((x301<=(x302*x303))*x304);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x305 = INT32_MAX;
	static volatile int8_t x306 = -1;
	static uint64_t x308 = 33425268943389851LLU;
	uint64_t t60 = 600933125LLU;

    t60 = ((x305<=(x306*x307))*x308);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x309 = INT64_MIN;
	static uint64_t x310 = 8582579982006LLU;
	static int16_t x311 = -1;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t61 = UINT32_MAX;

    t61 = ((x309<=(x310*x311))*x312);

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x313 = INT32_MIN;
	static int8_t x314 = INT8_MIN;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t62 = 97148;

    t62 = ((x313<=(x314*x315))*x316);

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	int32_t x323 = 2;
	int32_t x324 = -110;

    t63 = ((x321<=(x322*x323))*x324);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x325 = INT32_MAX;
	int32_t x326 = -1;
	int16_t x327 = INT16_MIN;
	int16_t x328 = INT16_MIN;

    t64 = ((x325<=(x326*x327))*x328);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x329 = INT64_MIN;
	uint8_t x330 = 29U;
	static volatile uint32_t x331 = UINT32_MAX;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t65 = -429620784;

    t65 = ((x329<=(x330*x331))*x332);

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x337 = INT64_MAX;
	int32_t x339 = INT32_MIN;
	int8_t x340 = -30;

    t66 = ((x337<=(x338*x339))*x340);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x341 = 11087LL;
	int16_t x342 = -1;
	uint64_t x343 = 136785638657810139LLU;
	int32_t x344 = -1;
	volatile int32_t t67 = -11;

    t67 = ((x341<=(x342*x343))*x344);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x345 = UINT16_MAX;
	uint8_t x347 = UINT8_MAX;
	static int64_t x348 = -1LL;
	int64_t t68 = 2802LL;

    t68 = ((x345<=(x346*x347))*x348);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x349 = 18571U;
	static int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -1;
	static int32_t t69 = 721013015;

    t69 = ((x349<=(x350*x351))*x352);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x353 = -3037869;
	volatile uint64_t x355 = 141LLU;
	static uint32_t x356 = 22194629U;
	volatile uint32_t t70 = 2549918U;

    t70 = ((x353<=(x354*x355))*x356);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x358 = INT32_MIN;
	volatile uint64_t x359 = UINT64_MAX;
	int32_t x360 = -29848;
	int32_t t71 = -7;

    t71 = ((x357<=(x358*x359))*x360);

    if (t71 != -29848) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x365 = 8111;
	static volatile uint16_t x366 = 1U;
	uint16_t x367 = UINT16_MAX;
	uint16_t x368 = 873U;

    t72 = ((x365<=(x366*x367))*x368);

    if (t72 != 873) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x371 = UINT16_MAX;
	static int32_t x372 = -1;

    t73 = ((x369<=(x370*x371))*x372);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x373 = 430;
	int32_t x374 = -5;
	uint16_t x375 = UINT16_MAX;
	volatile uint8_t x376 = 3U;

    t74 = ((x373<=(x374*x375))*x376);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x377 = 9526U;
	volatile int32_t x378 = -213;
	int16_t x379 = -1;
	int16_t x380 = INT16_MIN;
	int32_t t75 = 20015949;

    t75 = ((x377<=(x378*x379))*x380);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x381 = -1;
	volatile int32_t x383 = -1;
	volatile int64_t x384 = INT64_MIN;
	static volatile int64_t t76 = INT64_MIN;

    t76 = ((x381<=(x382*x383))*x384);

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x385 = INT32_MIN;
	uint16_t x386 = 2U;
	int8_t x388 = INT8_MIN;
	volatile int32_t t77 = 15528763;

    t77 = ((x385<=(x386*x387))*x388);

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x393 = INT8_MIN;
	static int8_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t t78 = -4210;

    t78 = ((x393<=(x394*x395))*x396);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x398 = 23U;
	int32_t x399 = 1;
	int64_t x400 = -1LL;
	int64_t t79 = 2629984227302206LL;

    t79 = ((x397<=(x398*x399))*x400);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x401 = 314;
	uint32_t x402 = 527202892U;
	int16_t x403 = -1;

    t80 = ((x401<=(x402*x403))*x404);

    if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x405 = 0U;
	int32_t x406 = -175;
	int32_t x408 = -1;
	int32_t t81 = -53184;

    t81 = ((x405<=(x406*x407))*x408);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x414 = UINT16_MAX;
	int16_t x415 = INT16_MIN;
	volatile int64_t t82 = -23833722401823176LL;

    t82 = ((x413<=(x414*x415))*x416);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x417 = INT16_MAX;
	volatile uint64_t x418 = 3799050932356LLU;
	uint64_t x419 = 261162506678928LLU;
	int64_t x420 = -3974027863179939LL;
	volatile int64_t t83 = 132174147295232LL;

    t83 = ((x417<=(x418*x419))*x420);

    if (t83 != -3974027863179939LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x421 = INT16_MIN;
	uint32_t x422 = 1029U;
	volatile int8_t x424 = INT8_MAX;
	int32_t t84 = 23;

    t84 = ((x421<=(x422*x423))*x424);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x425 = -1;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = 530459732U;
	static uint64_t x428 = 16482640954974287LLU;
	uint64_t t85 = 857725119351LLU;

    t85 = ((x425<=(x426*x427))*x428);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x437 = INT32_MIN;
	volatile uint32_t x438 = 2420100U;
	static int64_t x439 = 87640672LL;
	static int32_t t86 = -1730753;

    t86 = ((x437<=(x438*x439))*x440);

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x441 = INT32_MIN;
	int64_t x442 = -1LL;
	static volatile int16_t x443 = INT16_MIN;
	int16_t x444 = -1;
	volatile int32_t t87 = -22936224;

    t87 = ((x441<=(x442*x443))*x444);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x445 = 7183214U;
	static int16_t x447 = INT16_MAX;
	int64_t x448 = -1LL;
	int64_t t88 = 33LL;

    t88 = ((x445<=(x446*x447))*x448);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x449 = -2;
	static volatile uint8_t x450 = UINT8_MAX;
	volatile uint8_t x451 = 59U;
	uint32_t x452 = 1223U;

    t89 = ((x449<=(x450*x451))*x452);

    if (t89 != 1223U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x453 = 7096U;
	int16_t x454 = INT16_MIN;
	static int64_t x456 = INT64_MAX;
	int64_t t90 = -11663107958LL;

    t90 = ((x453<=(x454*x455))*x456);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x457 = INT64_MAX;
	uint32_t x458 = 9107U;
	uint32_t x459 = UINT32_MAX;
	int32_t t91 = -1295;

    t91 = ((x457<=(x458*x459))*x460);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x462 = UINT64_MAX;
	static int64_t x463 = INT64_MIN;
	int64_t x464 = INT64_MIN;
	int64_t t92 = INT64_MIN;

    t92 = ((x461<=(x462*x463))*x464);

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x465 = INT8_MAX;
	static volatile int64_t x467 = 1613214689LL;
	int16_t x468 = -987;
	static int32_t t93 = -175613959;

    t93 = ((x465<=(x466*x467))*x468);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x475 = UINT32_MAX;
	int32_t x476 = 3;
	volatile int32_t t94 = 1;

    t94 = ((x473<=(x474*x475))*x476);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x477 = INT16_MIN;
	int64_t x478 = -2LL;
	static int64_t x479 = 360LL;
	uint64_t x480 = 687693767012LLU;
	static uint64_t t95 = 989634423362077LLU;

    t95 = ((x477<=(x478*x479))*x480);

    if (t95 != 687693767012LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x481 = 648U;
	int16_t x482 = -2938;
	uint64_t x483 = 403LLU;
	int32_t t96 = INT32_MIN;

    t96 = ((x481<=(x482*x483))*x484);

    if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x485 = -1;
	uint64_t x486 = UINT64_MAX;
	static int32_t x487 = 1845014;
	volatile uint8_t x488 = UINT8_MAX;

    t97 = ((x485<=(x486*x487))*x488);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x489 = INT64_MIN;
	uint16_t x490 = UINT16_MAX;
	static volatile int32_t x491 = -1;
	static uint8_t x492 = 0U;
	volatile int32_t t98 = 21712;

    t98 = ((x489<=(x490*x491))*x492);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x497 = 3734U;
	int64_t x498 = INT64_MIN;
	uint64_t x499 = UINT64_MAX;
	volatile int32_t t99 = -112311;

    t99 = ((x497<=(x498*x499))*x500);

    if (t99 != -191018149) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x501 = INT8_MAX;
	int16_t x502 = -1;
	uint32_t x503 = UINT32_MAX;
	uint64_t x504 = 800254LLU;
	volatile uint64_t t100 = 2738139642986LLU;

    t100 = ((x501<=(x502*x503))*x504);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x505 = -1;
	static int16_t x506 = INT16_MAX;
	static uint64_t x507 = UINT64_MAX;
	static uint32_t x508 = 847U;

    t101 = ((x505<=(x506*x507))*x508);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x514 = UINT64_MAX;
	int32_t x515 = 4695509;
	volatile uint16_t x516 = 7U;
	static volatile int32_t t102 = 504001486;

    t102 = ((x513<=(x514*x515))*x516);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x521 = 0;
	volatile int32_t x522 = -2839172;
	uint32_t x523 = UINT32_MAX;
	volatile int64_t t103 = INT64_MAX;

    t103 = ((x521<=(x522*x523))*x524);

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x526 = -1;
	uint64_t x527 = 50136837727121021LLU;
	volatile uint64_t x528 = 207950458424LLU;
	static uint64_t t104 = 403299LLU;

    t104 = ((x525<=(x526*x527))*x528);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x529 = -16721632LL;
	uint32_t x530 = UINT32_MAX;
	volatile int16_t x531 = -1;
	uint32_t x532 = UINT32_MAX;
	uint32_t t105 = UINT32_MAX;

    t105 = ((x529<=(x530*x531))*x532);

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x537 = 0U;
	int16_t x538 = INT16_MIN;
	int8_t x539 = INT8_MIN;
	int16_t x540 = INT16_MAX;
	volatile int32_t t106 = -214066244;

    t106 = ((x537<=(x538*x539))*x540);

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x542 = INT16_MAX;
	int16_t x543 = INT16_MAX;
	volatile int64_t t107 = 1064542813570593LL;

    t107 = ((x541<=(x542*x543))*x544);

    if (t107 != 230396805305387LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x545 = 1817U;
	uint64_t x546 = 17374942132537LLU;
	static uint32_t x547 = 469527072U;
	uint16_t x548 = 26U;
	volatile int32_t t108 = 1842384;

    t108 = ((x545<=(x546*x547))*x548);

    if (t108 != 26) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x558 = INT16_MAX;
	int16_t x559 = -533;
	int64_t x560 = -11834615706970177LL;
	volatile int64_t t109 = 754511572LL;

    t109 = ((x557<=(x558*x559))*x560);

    if (t109 != -11834615706970177LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x573 = 1U;
	uint64_t x574 = 6191643829LLU;
	uint64_t x575 = UINT64_MAX;
	volatile int16_t x576 = -101;
	static volatile int32_t t110 = 767186824;

    t110 = ((x573<=(x574*x575))*x576);

    if (t110 != -101) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x577 = 119U;
	int16_t x578 = -1;
	int8_t x579 = -1;
	int8_t x580 = -3;
	static int32_t t111 = -124922;

    t111 = ((x577<=(x578*x579))*x580);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x581 = 59U;
	volatile uint64_t x582 = 163934460992919813LLU;
	static int64_t x584 = INT64_MAX;
	volatile int64_t t112 = INT64_MAX;

    t112 = ((x581<=(x582*x583))*x584);

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x585 = 111627LLU;
	int16_t x586 = INT16_MIN;
	int8_t x587 = -7;
	int32_t x588 = -1;
	int32_t t113 = 2157904;

    t113 = ((x585<=(x586*x587))*x588);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x589 = INT8_MIN;
	uint32_t x590 = UINT32_MAX;
	int8_t x591 = -2;
	uint16_t x592 = UINT16_MAX;

    t114 = ((x589<=(x590*x591))*x592);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x602 = INT64_MAX;
	int16_t x603 = -1;

    t115 = ((x601<=(x602*x603))*x604);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x609 = -1LL;
	int8_t x610 = 0;
	int64_t x611 = 1039577LL;
	static volatile int64_t x612 = INT64_MAX;
	volatile int64_t t116 = INT64_MAX;

    t116 = ((x609<=(x610*x611))*x612);

    if (t116 != INT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x613 = INT16_MIN;
	int32_t x614 = INT32_MIN;
	int64_t x615 = -1LL;
	int16_t x616 = -1;
	volatile int32_t t117 = -1;

    t117 = ((x613<=(x614*x615))*x616);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x617 = INT64_MIN;
	uint16_t x618 = 1U;

    t118 = ((x617<=(x618*x619))*x620);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x622 = INT32_MIN;
	volatile uint32_t x623 = UINT32_MAX;
	int8_t x624 = INT8_MIN;
	volatile int32_t t119 = 7304778;

    t119 = ((x621<=(x622*x623))*x624);

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x625 = 99U;
	static volatile int16_t x626 = INT16_MIN;
	uint16_t x627 = UINT16_MAX;
	uint32_t x628 = 2789506U;
	uint32_t t120 = 1053577053U;

    t120 = ((x625<=(x626*x627))*x628);

    if (t120 != 2789506U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x629 = -3;
	int32_t x631 = INT32_MIN;
	static uint64_t x632 = 170020410683694LLU;
	uint64_t t121 = 60350LLU;

    t121 = ((x629<=(x630*x631))*x632);

    if (t121 != 170020410683694LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x633 = INT16_MAX;
	int8_t x634 = INT8_MIN;
	int16_t x635 = 7;
	int32_t t122 = 0;

    t122 = ((x633<=(x634*x635))*x636);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x637 = INT16_MAX;
	uint8_t x638 = UINT8_MAX;
	int16_t x639 = 14558;
	static int32_t x640 = INT32_MAX;

    t123 = ((x637<=(x638*x639))*x640);

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x641 = INT16_MIN;
	static volatile uint32_t x642 = UINT32_MAX;
	uint64_t x643 = UINT64_MAX;
	volatile int64_t x644 = -1LL;
	static int64_t t124 = -665LL;

    t124 = ((x641<=(x642*x643))*x644);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x657 = 0U;
	int8_t x658 = INT8_MIN;
	uint16_t x660 = 203U;

    t125 = ((x657<=(x658*x659))*x660);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x663 = UINT32_MAX;
	int32_t t126 = 39;

    t126 = ((x661<=(x662*x663))*x664);

    if (t126 != 43) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x665 = 2U;
	static int8_t x666 = -1;
	uint16_t x667 = 13661U;
	int64_t x668 = -1LL;
	int64_t t127 = 15LL;

    t127 = ((x665<=(x666*x667))*x668);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x669 = 8U;
	int8_t x670 = -3;
	int32_t x671 = -1;
	uint64_t x672 = 2750734957239LLU;
	uint64_t t128 = 56054612LLU;

    t128 = ((x669<=(x670*x671))*x672);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x673 = INT32_MIN;
	uint64_t x674 = 68270317965LLU;
	static int32_t x675 = 227618469;
	static int16_t x676 = INT16_MAX;
	static int32_t t129 = 6545;

    t129 = ((x673<=(x674*x675))*x676);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x677 = 750522812LL;
	int64_t x678 = INT64_MAX;
	int64_t x679 = -1LL;
	int16_t x680 = INT16_MAX;
	static int32_t t130 = 0;

    t130 = ((x677<=(x678*x679))*x680);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x687 = 12U;
	static uint32_t x688 = 1U;
	uint32_t t131 = 17630648U;

    t131 = ((x685<=(x686*x687))*x688);

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x689 = 9448238U;
	uint64_t x692 = 26LLU;
	volatile uint64_t t132 = 168152LLU;

    t132 = ((x689<=(x690*x691))*x692);

    if (t132 != 26LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t t133 = 1;

    t133 = ((x709<=(x710*x711))*x712);

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x713 = UINT16_MAX;
	int8_t x714 = INT8_MAX;
	int8_t x715 = -1;
	int64_t x716 = -1LL;
	static volatile int64_t t134 = 38529562LL;

    t134 = ((x713<=(x714*x715))*x716);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x721 = 426558LLU;
	uint16_t x722 = 7534U;
	volatile int16_t x723 = 2;
	volatile int32_t t135 = 7499999;

    t135 = ((x721<=(x722*x723))*x724);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x725 = INT8_MIN;
	uint8_t x726 = 5U;
	int32_t x728 = INT32_MIN;
	int32_t t136 = INT32_MIN;

    t136 = ((x725<=(x726*x727))*x728);

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x729 = 15U;
	static volatile uint32_t x730 = UINT32_MAX;
	volatile int8_t x731 = INT8_MAX;
	static int32_t x732 = -1;

    t137 = ((x729<=(x730*x731))*x732);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x733 = 136LL;
	volatile int16_t x734 = -24;
	int16_t x735 = INT16_MIN;
	int32_t t138 = 73126;

    t138 = ((x733<=(x734*x735))*x736);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x737 = 1;
	uint8_t x738 = 30U;
	volatile uint16_t x739 = 4U;
	int64_t x740 = -743LL;
	static volatile int64_t t139 = -16895720035189LL;

    t139 = ((x737<=(x738*x739))*x740);

    if (t139 != -743LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x743 = UINT64_MAX;
	uint32_t x744 = 1U;

    t140 = ((x741<=(x742*x743))*x744);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x745 = 63;
	static volatile uint64_t x747 = 228378751357450313LLU;
	int64_t x748 = 6104934575LL;
	int64_t t141 = -4LL;

    t141 = ((x745<=(x746*x747))*x748);

    if (t141 != 6104934575LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x750 = INT64_MIN;
	uint64_t x751 = 193183986514613LLU;
	int8_t x752 = -21;
	int32_t t142 = 0;

    t142 = ((x749<=(x750*x751))*x752);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x754 = 7;
	uint8_t x755 = 0U;

    t143 = ((x753<=(x754*x755))*x756);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x758 = 1U;
	static int8_t x760 = INT8_MIN;
	volatile int32_t t144 = -872665;

    t144 = ((x757<=(x758*x759))*x760);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x761 = INT8_MAX;

    t145 = ((x761<=(x762*x763))*x764);

    if (t145 != 20) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x766 = -5;
	int8_t x768 = -1;
	volatile int32_t t146 = 502;

    t146 = ((x765<=(x766*x767))*x768);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x769 = 380636089411882983LLU;
	int8_t x770 = -2;
	int8_t x771 = INT8_MIN;
	int32_t t147 = 1935585;

    t147 = ((x769<=(x770*x771))*x772);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x777 = 7;
	int64_t x779 = -3034076893892LL;
	uint32_t t148 = UINT32_MAX;

    t148 = ((x777<=(x778*x779))*x780);

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x783 = UINT32_MAX;
	int16_t x784 = -39;
	int32_t t149 = -40252443;

    t149 = ((x781<=(x782*x783))*x784);

    if (t149 != -39) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x786 = 1;
	int32_t x787 = 12092128;
	int16_t x788 = -2;

    t150 = ((x785<=(x786*x787))*x788);

    if (t150 != -2) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x789 = UINT32_MAX;
	uint64_t x790 = 2261941003LLU;
	uint32_t x792 = 1046U;
	static uint32_t t151 = 1U;

    t151 = ((x789<=(x790*x791))*x792);

    if (t151 != 1046U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x793 = INT64_MIN;
	volatile uint64_t x795 = 14870962157198LLU;
	int8_t x796 = 5;
	volatile int32_t t152 = 2050;

    t152 = ((x793<=(x794*x795))*x796);

    if (t152 != 5) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x797 = -1;
	static int16_t x798 = -63;
	uint16_t x799 = 12U;
	int64_t x800 = INT64_MIN;
	volatile int64_t t153 = 15LL;

    t153 = ((x797<=(x798*x799))*x800);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x801 = 2U;
	int32_t x802 = INT32_MIN;
	uint64_t x803 = 2791LLU;
	static uint64_t t154 = UINT64_MAX;

    t154 = ((x801<=(x802*x803))*x804);

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x805 = -1;
	int8_t x806 = -1;
	int16_t x807 = INT16_MIN;
	volatile int32_t x808 = INT32_MIN;
	volatile int32_t t155 = INT32_MIN;

    t155 = ((x805<=(x806*x807))*x808);

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x818 = -25192723;
	volatile uint64_t x819 = UINT64_MAX;

    t156 = ((x817<=(x818*x819))*x820);

    if (t156 != 10) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x821 = -1LL;
	uint32_t x822 = UINT32_MAX;
	static volatile uint32_t x823 = UINT32_MAX;
	int16_t x824 = -1;

    t157 = ((x821<=(x822*x823))*x824);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x830 = -1;
	int16_t x831 = -518;
	volatile int32_t t158 = 149;

    t158 = ((x829<=(x830*x831))*x832);

    if (t158 != 16) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x837 = -1;
	static int32_t x838 = -1;
	volatile uint32_t x839 = 5U;
	volatile int16_t x840 = -1;
	volatile int32_t t159 = -3;

    t159 = ((x837<=(x838*x839))*x840);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x841 = INT16_MIN;
	volatile int64_t x842 = INT64_MIN;
	uint64_t x843 = UINT64_MAX;

    t160 = ((x841<=(x842*x843))*x844);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x845 = INT64_MAX;
	volatile int32_t x846 = -2;
	volatile uint32_t x847 = UINT32_MAX;
	uint32_t x848 = 7937U;
	static uint32_t t161 = 3U;

    t161 = ((x845<=(x846*x847))*x848);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x853 = UINT32_MAX;
	int64_t x854 = -1LL;
	int32_t x855 = INT32_MIN;
	int32_t x856 = INT32_MAX;
	volatile int32_t t162 = 1287746;

    t162 = ((x853<=(x854*x855))*x856);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x857 = 157U;
	int8_t x860 = INT8_MAX;

    t163 = ((x857<=(x858*x859))*x860);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x862 = INT32_MIN;
	int32_t x864 = INT32_MIN;
	volatile int32_t t164 = -1759865;

    t164 = ((x861<=(x862*x863))*x864);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x865 = UINT32_MAX;
	int8_t x866 = INT8_MAX;
	static int64_t x867 = 2552768778LL;
	int16_t x868 = -1;
	volatile int32_t t165 = 114283;

    t165 = ((x865<=(x866*x867))*x868);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x869 = 24;
	static volatile int8_t x870 = -1;
	int8_t x871 = 6;
	uint32_t x872 = UINT32_MAX;
	static uint32_t t166 = 12774404U;

    t166 = ((x869<=(x870*x871))*x872);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x873 = 74U;
	int16_t x874 = INT16_MAX;
	volatile uint16_t x875 = UINT16_MAX;
	volatile int32_t t167 = -31772279;

    t167 = ((x873<=(x874*x875))*x876);

    if (t167 != -32768) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x885 = 11U;
	uint64_t x886 = 7770LLU;
	int32_t x887 = INT32_MIN;

    t168 = ((x885<=(x886*x887))*x888);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x889 = 1470352123837678LLU;
	uint64_t x891 = 1290333480526LLU;
	static int32_t t169 = -37551;

    t169 = ((x889<=(x890*x891))*x892);

    if (t169 != 45) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x893 = 10998U;
	volatile int8_t x894 = INT8_MAX;
	int64_t x896 = INT64_MAX;

    t170 = ((x893<=(x894*x895))*x896);

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x901 = INT32_MIN;
	int8_t x902 = -1;
	int64_t x903 = -1LL;
	uint8_t x904 = 4U;
	static volatile int32_t t171 = -30807145;

    t171 = ((x901<=(x902*x903))*x904);

    if (t171 != 4) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x906 = 10957722LLU;
	volatile int8_t x907 = 7;
	int32_t x908 = INT32_MAX;
	int32_t t172 = -516;

    t172 = ((x905<=(x906*x907))*x908);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x909 = INT32_MIN;
	int16_t x910 = INT16_MIN;
	uint64_t x911 = 451221LLU;
	volatile int32_t x912 = 102599;
	volatile int32_t t173 = 13645;

    t173 = ((x909<=(x910*x911))*x912);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x913 = UINT8_MAX;
	uint16_t x914 = UINT16_MAX;
	volatile uint32_t x916 = 325U;

    t174 = ((x913<=(x914*x915))*x916);

    if (t174 != 325U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x917 = 1;
	volatile int8_t x918 = -12;
	int64_t x919 = -430LL;
	uint64_t x920 = 7942762377085LLU;

    t175 = ((x917<=(x918*x919))*x920);

    if (t175 != 7942762377085LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x925 = INT32_MIN;
	volatile uint32_t x927 = 59926896U;
	volatile int32_t t176 = 2528;

    t176 = ((x925<=(x926*x927))*x928);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x930 = 32U;
	int16_t x931 = -1;
	static uint64_t t177 = 8844LLU;

    t177 = ((x929<=(x930*x931))*x932);

    if (t177 != 10489895045394776LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x933 = 65227719LL;
	uint32_t x934 = 21782783U;
	volatile int32_t x935 = 1;
	int32_t x936 = -27;
	volatile int32_t t178 = -1;

    t178 = ((x933<=(x934*x935))*x936);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x938 = -1;
	int64_t x939 = 1979370710222LL;
	int64_t x940 = INT64_MIN;
	volatile int64_t t179 = INT64_MIN;

    t179 = ((x937<=(x938*x939))*x940);

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x942 = 0;
	int8_t x943 = INT8_MIN;
	int16_t x944 = INT16_MAX;
	static int32_t t180 = -33820619;

    t180 = ((x941<=(x942*x943))*x944);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x946 = 2005227299154778LLU;
	static int64_t x947 = -421550406965326LL;
	static int16_t x948 = -11;
	volatile int32_t t181 = 6650294;

    t181 = ((x945<=(x946*x947))*x948);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x949 = 1963904;
	volatile int16_t x950 = INT16_MAX;
	int64_t x952 = INT64_MIN;
	static int64_t t182 = INT64_MIN;

    t182 = ((x949<=(x950*x951))*x952);

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x957 = -9;
	int16_t x958 = 6;
	static volatile uint8_t x959 = UINT8_MAX;
	volatile int32_t t183 = 916887;

    t183 = ((x957<=(x958*x959))*x960);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x962 = 417LLU;
	uint8_t x963 = UINT8_MAX;
	static uint16_t x964 = UINT16_MAX;
	static volatile int32_t t184 = 48054;

    t184 = ((x961<=(x962*x963))*x964);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x965 = INT8_MAX;
	int16_t x966 = INT16_MIN;
	uint32_t x967 = UINT32_MAX;
	uint64_t x968 = UINT64_MAX;
	volatile uint64_t t185 = UINT64_MAX;

    t185 = ((x965<=(x966*x967))*x968);

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x970 = 7U;
	static volatile int32_t x971 = -236;
	int32_t x972 = INT32_MIN;
	int32_t t186 = -5038614;

    t186 = ((x969<=(x970*x971))*x972);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x977 = INT64_MIN;
	int16_t x978 = 56;
	int16_t x979 = 1;

    t187 = ((x977<=(x978*x979))*x980);

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x985 = -2;
	static int8_t x986 = -1;
	volatile int32_t x987 = -1;
	uint32_t x988 = 1712381698U;
	uint32_t t188 = 1837U;

    t188 = ((x985<=(x986*x987))*x988);

    if (t188 != 1712381698U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x989 = INT8_MIN;
	int8_t x992 = INT8_MIN;
	volatile int32_t t189 = 3266;

    t189 = ((x989<=(x990*x991))*x992);

    if (t189 != -128) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x993 = 3854;
	int64_t x994 = 58468490959LL;
	uint16_t x995 = 1U;
	static uint64_t x996 = UINT64_MAX;
	uint64_t t190 = UINT64_MAX;

    t190 = ((x993<=(x994*x995))*x996);

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x998 = 9U;
	uint32_t x1000 = 42U;
	static volatile uint32_t t191 = 0U;

    t191 = ((x997<=(x998*x999))*x1000);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1009 = INT8_MIN;
	int16_t x1010 = INT16_MIN;
	static int8_t x1011 = 4;
	int64_t t192 = -210140292690320224LL;

    t192 = ((x1009<=(x1010*x1011))*x1012);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x1013 = 57U;
	int64_t x1014 = INT64_MIN;
	uint64_t x1015 = UINT64_MAX;
	volatile uint64_t x1016 = 508437487314490966LLU;
	static uint64_t t193 = 1490200LLU;

    t193 = ((x1013<=(x1014*x1015))*x1016);

    if (t193 != 508437487314490966LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1017 = INT16_MAX;
	uint64_t x1018 = 83358273LLU;
	int16_t x1019 = 1004;

    t194 = ((x1017<=(x1018*x1019))*x1020);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1021 = 44;
	int16_t x1022 = INT16_MIN;
	int32_t x1023 = -1;
	static uint32_t x1024 = 15U;
	volatile uint32_t t195 = 168U;

    t195 = ((x1021<=(x1022*x1023))*x1024);

    if (t195 != 15U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1025 = INT32_MIN;
	static int64_t x1026 = 204205926LL;
	uint8_t x1027 = UINT8_MAX;
	uint8_t x1028 = 1U;

    t196 = ((x1025<=(x1026*x1027))*x1028);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1029 = 2LL;
	int16_t x1031 = INT16_MAX;

    t197 = ((x1029<=(x1030*x1031))*x1032);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1033 = INT64_MIN;
	volatile uint64_t x1034 = UINT64_MAX;
	volatile uint64_t x1035 = 4585LLU;
	static volatile int8_t x1036 = -1;

    t198 = ((x1033<=(x1034*x1035))*x1036);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1037 = -1;
	uint64_t x1038 = 22655486146LLU;
	int8_t x1039 = 1;
	volatile int32_t x1040 = INT32_MAX;
	volatile int32_t t199 = 42547;

    t199 = ((x1037<=(x1038*x1039))*x1040);

    if (t199 != 0) { NG(); } else { ; }
	
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

