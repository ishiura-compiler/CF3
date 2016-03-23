
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

volatile int8_t x2 = 11;
int8_t x4 = INT8_MAX;
int64_t x5 = INT64_MIN;
volatile uint32_t x6 = 33U;
int32_t t1 = 10133810;
int16_t x9 = INT16_MIN;
uint16_t x14 = 0U;
volatile int64_t t3 = 0LL;
uint16_t x20 = 2U;
int32_t t4 = -2278;
int16_t x21 = INT16_MIN;
uint32_t x23 = UINT32_MAX;
uint8_t x27 = UINT8_MAX;
int64_t x28 = -1LL;
uint64_t x31 = 3LLU;
int16_t x34 = -1;
int16_t x44 = 12902;
uint16_t x50 = 329U;
static uint16_t x53 = 4U;
int8_t x59 = INT8_MAX;
int64_t x68 = INT64_MAX;
static int8_t x70 = INT8_MIN;
uint32_t x83 = 514754300U;
static uint32_t t17 = 658042U;
volatile int32_t x87 = INT32_MIN;
int32_t x91 = 71093;
static uint16_t x94 = UINT16_MAX;
int32_t t20 = 2;
uint64_t x97 = 7LLU;
int32_t x100 = -1;
volatile uint16_t x103 = 28U;
volatile int32_t t22 = -719;
static volatile int32_t x119 = INT32_MIN;
static int64_t x124 = INT64_MAX;
static volatile int64_t x125 = INT64_MIN;
volatile int32_t t27 = 15143559;
int16_t x129 = -1;
int16_t x130 = INT16_MAX;
uint32_t x149 = 1901239120U;
uint16_t x150 = 62U;
volatile int16_t x153 = -1;
int32_t t33 = -7;
int8_t x162 = INT8_MIN;
int64_t x163 = -1456655159131900936LL;
int64_t x164 = -1LL;
uint8_t x165 = UINT8_MAX;
int32_t x180 = -1;
uint64_t x189 = UINT64_MAX;
static volatile int64_t x192 = -1LL;
volatile int64_t x194 = INT64_MAX;
int32_t x201 = 410529;
int8_t x204 = -1;
int16_t x216 = INT16_MAX;
volatile uint64_t x217 = 3764804799536LLU;
volatile uint64_t t48 = 2920550LLU;
int16_t x227 = INT16_MIN;
static volatile int32_t x233 = -1;
volatile int32_t t51 = 746561897;
int32_t t52 = 0;
uint16_t x246 = UINT16_MAX;
int64_t x248 = -1LL;
int64_t t53 = 124LL;
int8_t x249 = 1;
uint64_t x259 = 4730518044181LLU;
int16_t x266 = INT16_MIN;
int32_t t58 = 1094450;
static int64_t x290 = -1LL;
volatile uint32_t t61 = 130212U;
static int16_t x301 = INT16_MAX;
int32_t x306 = -1;
static int16_t x314 = INT16_MIN;
int32_t x321 = -1;
uint64_t x334 = UINT64_MAX;
int64_t x341 = INT64_MIN;
int8_t x344 = 0;
int32_t t69 = -15136219;
volatile int64_t x361 = INT64_MAX;
int32_t x367 = -23;
uint64_t x376 = UINT64_MAX;
static int16_t x381 = INT16_MIN;
int64_t x382 = INT64_MIN;
uint8_t x386 = 26U;
static int8_t x391 = INT8_MAX;
volatile int32_t t77 = 42740;
uint64_t x394 = 2208770LLU;
int8_t x397 = -13;
int32_t x398 = INT32_MIN;
static int32_t t80 = 1565925;
int8_t x409 = INT8_MIN;
int16_t x411 = INT16_MIN;
int64_t x414 = INT64_MAX;
static int32_t t82 = 2;
int8_t x417 = 2;
volatile int32_t t87 = -78;
uint8_t x448 = UINT8_MAX;
static int32_t x449 = INT32_MIN;
int32_t x455 = INT32_MIN;
int32_t t91 = 52812;
int16_t x464 = INT16_MIN;
int32_t t92 = 50084033;
static volatile int8_t x465 = INT8_MIN;
uint64_t x476 = 231289903550264162LLU;
uint32_t x489 = UINT32_MAX;
int32_t x493 = INT32_MIN;
uint32_t x494 = 504U;
int32_t x501 = INT32_MIN;
int8_t x508 = 0;
volatile int32_t t99 = 14342757;
int64_t x509 = 509544686827793571LL;
static volatile int32_t t100 = 26320530;
volatile uint8_t x513 = 12U;
static int8_t x520 = INT8_MAX;
volatile uint32_t t103 = 1725573849U;
int32_t x525 = INT32_MAX;
int32_t x529 = -1;
int32_t x530 = 94469746;
int8_t x531 = INT8_MIN;
static int8_t x537 = INT8_MAX;
volatile int32_t t107 = 15;
static volatile uint64_t x550 = 3437294LLU;
int16_t x556 = INT16_MIN;
uint8_t x557 = 2U;
uint8_t x560 = 7U;
volatile int32_t x563 = 457511612;
int8_t x575 = -1;
uint64_t x579 = 4126283283047LLU;
static volatile uint8_t x580 = 117U;
static int32_t x594 = -1;
static uint8_t x597 = UINT8_MAX;
int64_t x599 = 13451973047142864LL;
int8_t x626 = INT8_MAX;
int64_t x633 = -10LL;
int16_t x641 = INT16_MIN;
int32_t t125 = -1;
uint32_t x646 = 5U;
int64_t x654 = 4155640LL;
int16_t x656 = -1;
volatile int32_t t127 = 964081;
uint8_t x660 = 78U;
uint32_t x667 = UINT32_MAX;
volatile int64_t t129 = -8570LL;
int8_t x674 = INT8_MAX;
uint32_t t131 = 12U;
static volatile uint32_t t133 = 125796747U;
int8_t x687 = INT8_MAX;
int64_t x689 = 0LL;
int8_t x690 = INT8_MIN;
volatile int8_t x695 = 1;
uint32_t x697 = UINT32_MAX;
int32_t x720 = INT32_MAX;
int32_t x722 = -99286;
static uint64_t x723 = UINT64_MAX;
uint64_t t140 = UINT64_MAX;
int32_t t141 = -2712396;
int8_t x733 = -3;
uint64_t x735 = UINT64_MAX;
volatile int32_t t144 = -3;
int16_t x742 = 0;
static volatile int32_t t145 = 1;
volatile uint64_t x751 = 5042LLU;
uint8_t x760 = UINT8_MAX;
int8_t x765 = INT8_MIN;
static volatile int16_t x766 = INT16_MIN;
int64_t x769 = -31685213877230LL;
static volatile int16_t x777 = INT16_MIN;
volatile int64_t t152 = -15615372677936LL;
uint16_t x786 = UINT16_MAX;
int8_t x788 = 1;
int16_t x800 = INT16_MAX;
int32_t t155 = -1;
int64_t x801 = -1739297621217476910LL;
int8_t x802 = 2;
volatile int32_t t156 = -43184;
uint8_t x809 = 1U;
uint64_t x816 = 3213673430396499603LLU;
int8_t x821 = -1;
static int64_t x829 = INT64_MIN;
volatile int8_t x834 = 13;
int8_t x845 = INT8_MIN;
int64_t x846 = INT64_MAX;
int16_t x850 = INT16_MIN;
int16_t x856 = -5708;
int32_t x862 = INT32_MIN;
static volatile int64_t t169 = -54171LL;
int16_t x874 = 1347;
volatile int32_t t170 = 1504521;
int16_t x886 = INT16_MIN;
int32_t t172 = 23289604;
volatile uint32_t t173 = 2U;
int32_t t176 = 3742223;
uint16_t x906 = UINT16_MAX;
volatile int32_t t177 = 6;
int8_t x921 = INT8_MIN;
int8_t x935 = -1;
uint64_t t183 = 21322317862571795LLU;
volatile int32_t t185 = 386623;
volatile int64_t x965 = INT64_MIN;
volatile uint64_t t186 = 11712LLU;
int64_t x970 = -48989LL;
static uint32_t x972 = 161570252U;
volatile int64_t x973 = 86LL;
uint8_t x985 = 52U;
static uint16_t x988 = UINT16_MAX;
int16_t x992 = 314;
volatile int32_t t191 = 3112;
volatile int32_t t192 = -164;
int16_t x999 = INT16_MIN;
int64_t x1001 = INT64_MAX;
uint32_t x1007 = 23007U;
volatile int64_t x1011 = 3503LL;
uint32_t x1019 = 9U;
volatile int16_t x1023 = INT16_MIN;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	volatile int64_t x3 = 6926718LL;
	int32_t t0 = -60427169;

    t0 = ((x1>(x2+x3))-x4);

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x7 = 28U;
	int16_t x8 = INT16_MIN;

    t1 = ((x5>(x6+x7))-x8);

    if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MAX;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -1;

    t2 = ((x9>(x10+x11))-x12);

    if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x13 = -1;
	int8_t x15 = -1;
	int64_t x16 = 33201570LL;

    t3 = ((x13>(x14+x15))-x16);

    if (t3 != -33201570LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	int32_t x18 = -1;
	int8_t x19 = INT8_MAX;

    t4 = ((x17>(x18+x19))-x20);

    if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x22 = INT16_MIN;
	uint32_t x24 = UINT32_MAX;
	uint32_t t5 = 458U;

    t5 = ((x21>(x22+x23))-x24);

    if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x25 = 188U;
	int64_t x26 = 18345352776448616LL;
	static volatile int64_t t6 = -86027999873927251LL;

    t6 = ((x25>(x26+x27))-x28);

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	int8_t x30 = -1;
	uint8_t x32 = 1U;
	int32_t t7 = 62627645;

    t7 = ((x29>(x30+x31))-x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = 97;
	uint64_t x35 = 28045969LLU;
	uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 1406952008851LLU;

    t8 = ((x33>(x34+x35))-x36);

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -220;
	uint32_t x38 = 13162701U;
	uint32_t x39 = UINT32_MAX;
	static uint64_t x40 = 573269366LLU;
	static uint64_t t9 = 203982LLU;

    t9 = ((x37>(x38+x39))-x40);

    if (t9 != 18446744073136282251LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = 25467LL;
	uint64_t x42 = UINT64_MAX;
	volatile int16_t x43 = INT16_MIN;
	volatile int32_t t10 = -2222;

    t10 = ((x41>(x42+x43))-x44);

    if (t10 != -12902) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MAX;
	volatile int32_t t11 = -58;

    t11 = ((x49>(x50+x51))-x52);

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x54 = 9069435U;
	int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MAX;
	volatile int32_t t12 = 700900;

    t12 = ((x53>(x54+x55))-x56);

    if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 3913885LLU;
	uint16_t x58 = 10429U;
	static int64_t x60 = INT64_MAX;
	int64_t t13 = 722842086928891807LL;

    t13 = ((x57>(x58+x59))-x60);

    if (t13 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = UINT16_MAX;
	uint64_t x66 = 245921231646LLU;
	int64_t x67 = 188640437LL;
	int64_t t14 = 304167101113588LL;

    t14 = ((x65>(x66+x67))-x68);

    if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = -1LL;
	static uint64_t x71 = 32376130592LLU;
	volatile int16_t x72 = -79;
	volatile int32_t t15 = -1;

    t15 = ((x69>(x70+x71))-x72);

    if (t15 != 80) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x73 = 34400LLU;
	uint8_t x74 = UINT8_MAX;
	volatile int16_t x75 = INT16_MAX;
	volatile uint32_t x76 = UINT32_MAX;
	volatile uint32_t t16 = 251U;

    t16 = ((x73>(x74+x75))-x76);

    if (t16 != 2U) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x81 = 1U;
	static int64_t x82 = 11262950112586LL;
	uint32_t x84 = UINT32_MAX;

    t17 = ((x81>(x82+x83))-x84);

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x85 = 69620215767272977LLU;
	int16_t x86 = 0;
	int64_t x88 = 34LL;
	volatile int64_t t18 = 256550LL;

    t18 = ((x85>(x86+x87))-x88);

    if (t18 != -34LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x89 = INT64_MAX;
	static int8_t x90 = INT8_MIN;
	int64_t x92 = -1LL;
	int64_t t19 = -338874366LL;

    t19 = ((x89>(x90+x91))-x92);

    if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x93 = INT16_MAX;
	uint16_t x95 = UINT16_MAX;
	uint16_t x96 = 50U;

    t20 = ((x93>(x94+x95))-x96);

    if (t20 != -50) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x98 = 3;
	volatile int16_t x99 = -1;
	volatile int32_t t21 = -153273640;

    t21 = ((x97>(x98+x99))-x100);

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x101 = 10U;
	int64_t x102 = -1718LL;
	uint16_t x104 = UINT16_MAX;

    t22 = ((x101>(x102+x103))-x104);

    if (t22 != -65534) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	int64_t x106 = -1LL;
	int32_t x107 = INT32_MIN;
	uint8_t x108 = UINT8_MAX;
	int32_t t23 = -20;

    t23 = ((x105>(x106+x107))-x108);

    if (t23 != -254) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = -6;
	static int32_t x110 = 29490;
	int64_t x111 = -3239908448664812641LL;
	volatile uint8_t x112 = UINT8_MAX;
	volatile int32_t t24 = 74997684;

    t24 = ((x109>(x110+x111))-x112);

    if (t24 != -254) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x117 = INT32_MIN;
	uint32_t x118 = 244939U;
	int64_t x120 = -1LL;
	volatile int64_t t25 = -28797629831LL;

    t25 = ((x117>(x118+x119))-x120);

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x121 = INT32_MAX;
	int8_t x122 = -38;
	static int16_t x123 = INT16_MAX;
	int64_t t26 = -6142992615228LL;

    t26 = ((x121>(x122+x123))-x124);

    if (t26 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x126 = 2;
	volatile uint32_t x127 = 60041471U;
	static uint16_t x128 = UINT16_MAX;

    t27 = ((x125>(x126+x127))-x128);

    if (t27 != -65535) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x131 = INT16_MIN;
	volatile int16_t x132 = INT16_MIN;
	int32_t t28 = -534;

    t28 = ((x129>(x130+x131))-x132);

    if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x133 = 64702969U;
	uint32_t x134 = 935U;
	int16_t x135 = -213;
	uint32_t x136 = 173916876U;
	volatile uint32_t t29 = 0U;

    t29 = ((x133>(x134+x135))-x136);

    if (t29 != 4121050421U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = -125858536947LL;
	int16_t x138 = -1;
	int16_t x139 = INT16_MIN;
	volatile uint64_t x140 = 3305727741261LLU;
	volatile uint64_t t30 = 12028149LLU;

    t30 = ((x137>(x138+x139))-x140);

    if (t30 != 18446740767981810355LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x151 = INT32_MIN;
	int16_t x152 = -126;
	int32_t t31 = -1;

    t31 = ((x149>(x150+x151))-x152);

    if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x154 = -6396;
	volatile int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MAX;
	volatile int32_t t32 = 201;

    t32 = ((x153>(x154+x155))-x156);

    if (t32 != -126) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x157 = INT8_MIN;
	volatile int8_t x158 = 0;
	static int64_t x159 = 1LL;
	static int8_t x160 = INT8_MIN;

    t33 = ((x157>(x158+x159))-x160);

    if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x161 = INT32_MIN;
	volatile int64_t t34 = 2448LL;

    t34 = ((x161>(x162+x163))-x164);

    if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x166 = -1LL;
	int32_t x167 = -97;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t35 = 30LLU;

    t35 = ((x165>(x166+x167))-x168);

    if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x169 = -1;
	volatile uint64_t x170 = 391661655365824236LLU;
	static uint64_t x171 = 280LLU;
	int64_t x172 = -3670LL;
	int64_t t36 = 53122474525LL;

    t36 = ((x169>(x170+x171))-x172);

    if (t36 != 3671LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x173 = 826U;
	static int16_t x174 = INT16_MIN;
	volatile int32_t x175 = 0;
	uint8_t x176 = 0U;
	volatile int32_t t37 = -18520123;

    t37 = ((x173>(x174+x175))-x176);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = INT16_MIN;
	static int64_t x178 = INT64_MIN;
	static int16_t x179 = INT16_MAX;
	volatile int32_t t38 = 880125472;

    t38 = ((x177>(x178+x179))-x180);

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = -293;
	uint8_t x182 = UINT8_MAX;
	int32_t x183 = INT32_MIN;
	int32_t x184 = -93821901;
	volatile int32_t t39 = 554329;

    t39 = ((x181>(x182+x183))-x184);

    if (t39 != 93821902) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x185 = -1;
	int16_t x186 = 53;
	int16_t x187 = 1;
	static int8_t x188 = -1;
	int32_t t40 = -43588668;

    t40 = ((x185>(x186+x187))-x188);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x190 = -1LL;
	int32_t x191 = -1;
	int64_t t41 = 79LL;

    t41 = ((x189>(x190+x191))-x192);

    if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = -1;
	int8_t x195 = INT8_MIN;
	int64_t x196 = -1LL;
	int64_t t42 = 118231255057744695LL;

    t42 = ((x193>(x194+x195))-x196);

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x197 = 5LLU;
	int32_t x198 = INT32_MAX;
	volatile uint32_t x199 = 3682U;
	volatile int32_t x200 = INT32_MAX;
	int32_t t43 = 1;

    t43 = ((x197>(x198+x199))-x200);

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x202 = 704U;
	uint8_t x203 = 2U;
	int32_t t44 = 3;

    t44 = ((x201>(x202+x203))-x204);

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x205 = -1;
	static int8_t x206 = 2;
	int8_t x207 = 15;
	int32_t x208 = -1;
	volatile int32_t t45 = -923607188;

    t45 = ((x205>(x206+x207))-x208);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x213 = INT32_MIN;
	static volatile int16_t x214 = INT16_MAX;
	static volatile int16_t x215 = -2;
	static volatile int32_t t46 = 97450995;

    t46 = ((x213>(x214+x215))-x216);

    if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x218 = -36;
	uint64_t x219 = UINT64_MAX;
	uint16_t x220 = UINT16_MAX;
	int32_t t47 = -392974137;

    t47 = ((x217>(x218+x219))-x220);

    if (t47 != -65535) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint32_t x221 = 13407950U;
	int64_t x222 = INT64_MIN;
	uint16_t x223 = 0U;
	uint64_t x224 = 22259LLU;

    t48 = ((x221>(x222+x223))-x224);

    if (t48 != 18446744073709529358LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x225 = -1;
	uint8_t x226 = 0U;
	int16_t x228 = INT16_MAX;
	volatile int32_t t49 = 35;

    t49 = ((x225>(x226+x227))-x228);

    if (t49 != -32766) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MAX;
	static uint64_t x231 = 633015LLU;
	uint16_t x232 = 38U;
	volatile int32_t t50 = 20123103;

    t50 = ((x229>(x230+x231))-x232);

    if (t50 != -37) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x234 = 192U;
	int16_t x235 = 6;
	int16_t x236 = INT16_MIN;

    t51 = ((x233>(x234+x235))-x236);

    if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x237 = -1LL;
	static volatile int32_t x238 = -1;
	volatile int32_t x239 = -13;
	static uint8_t x240 = UINT8_MAX;

    t52 = ((x237>(x238+x239))-x240);

    if (t52 != -254) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x245 = 1374LLU;
	int32_t x247 = -1;

    t53 = ((x245>(x246+x247))-x248);

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x250 = INT32_MAX;
	volatile int16_t x251 = INT16_MIN;
	volatile uint8_t x252 = 0U;
	volatile int32_t t54 = -131902;

    t54 = ((x249>(x250+x251))-x252);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x257 = 72678343139789LL;
	uint16_t x258 = 37U;
	uint8_t x260 = UINT8_MAX;
	int32_t t55 = 421;

    t55 = ((x257>(x258+x259))-x260);

    if (t55 != -254) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x261 = INT32_MAX;
	volatile uint16_t x262 = 105U;
	volatile uint32_t x263 = UINT32_MAX;
	volatile int8_t x264 = INT8_MIN;
	int32_t t56 = -159;

    t56 = ((x261>(x262+x263))-x264);

    if (t56 != 129) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x265 = UINT64_MAX;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 753466533LLU;
	volatile uint64_t t57 = 14937031229454334LLU;

    t57 = ((x265>(x266+x267))-x268);

    if (t57 != 18446744072956085084LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x281 = -1;
	static int32_t x282 = 16179311;
	int32_t x283 = INT32_MIN;
	volatile int16_t x284 = -10;

    t58 = ((x281>(x282+x283))-x284);

    if (t58 != 11) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x289 = 8543;
	volatile int32_t x291 = INT32_MIN;
	volatile uint64_t x292 = 19LLU;
	uint64_t t59 = 13LLU;

    t59 = ((x289>(x290+x291))-x292);

    if (t59 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x293 = INT16_MIN;
	volatile int8_t x294 = INT8_MIN;
	uint16_t x295 = 26425U;
	int16_t x296 = 0;
	volatile int32_t t60 = 3213738;

    t60 = ((x293>(x294+x295))-x296);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x297 = 318131LLU;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = 13443627952764LL;
	static uint32_t x300 = UINT32_MAX;

    t61 = ((x297>(x298+x299))-x300);

    if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x302 = INT8_MIN;
	uint64_t x303 = 1930062LLU;
	volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t62 = 86843536690LLU;

    t62 = ((x301>(x302+x303))-x304);

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x305 = 1U;
	int8_t x307 = -8;
	int16_t x308 = -16187;
	volatile int32_t t63 = -4919658;

    t63 = ((x305>(x306+x307))-x308);

    if (t63 != 16188) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x313 = INT64_MIN;
	volatile uint8_t x315 = 0U;
	uint32_t x316 = UINT32_MAX;
	uint32_t t64 = 27U;

    t64 = ((x313>(x314+x315))-x316);

    if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x322 = 76271LL;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = 1947374193U;
	uint32_t t65 = 474490U;

    t65 = ((x321>(x322+x323))-x324);

    if (t65 != 2347593103U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x325 = 0;
	static uint32_t x326 = 559020038U;
	static int32_t x327 = 3;
	uint32_t x328 = UINT32_MAX;
	uint32_t t66 = 53104U;

    t66 = ((x325>(x326+x327))-x328);

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x333 = -104LL;
	static volatile uint32_t x335 = UINT32_MAX;
	volatile int64_t x336 = -80289816343179LL;
	volatile int64_t t67 = -61442LL;

    t67 = ((x333>(x334+x335))-x336);

    if (t67 != 80289816343180LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x337 = INT32_MAX;
	static uint32_t x338 = 12U;
	int32_t x339 = INT32_MIN;
	static uint64_t x340 = UINT64_MAX;
	uint64_t t68 = 2172LLU;

    t68 = ((x337>(x338+x339))-x340);

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x342 = INT8_MAX;
	int64_t x343 = 48873665LL;

    t69 = ((x341>(x342+x343))-x344);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x345 = INT32_MAX;
	uint64_t x346 = 2341642369LLU;
	static int64_t x347 = INT64_MIN;
	int32_t x348 = 7017;
	int32_t t70 = 1;

    t70 = ((x345>(x346+x347))-x348);

    if (t70 != -7017) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x362 = 2;
	int8_t x363 = 1;
	volatile int8_t x364 = INT8_MIN;
	int32_t t71 = 1139;

    t71 = ((x361>(x362+x363))-x364);

    if (t71 != 129) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x365 = 2U;
	int8_t x366 = -1;
	static uint64_t x368 = 948173700112469LLU;
	uint64_t t72 = 25LLU;

    t72 = ((x365>(x366+x367))-x368);

    if (t72 != 18445795900009439148LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x373 = 1U;
	int32_t x374 = 67;
	volatile int64_t x375 = -28648200250LL;
	uint64_t t73 = 105450459605236LLU;

    t73 = ((x373>(x374+x375))-x376);

    if (t73 != 2LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint64_t x377 = UINT64_MAX;
	static int16_t x378 = -1;
	static uint64_t x379 = UINT64_MAX;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t74 = 116295810;

    t74 = ((x377>(x378+x379))-x380);

    if (t74 != 32769) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x383 = 3405793724LL;
	int16_t x384 = INT16_MIN;
	volatile int32_t t75 = 2412;

    t75 = ((x381>(x382+x383))-x384);

    if (t75 != 32769) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x385 = -1;
	static int16_t x387 = INT16_MAX;
	int64_t x388 = -1LL;
	volatile int64_t t76 = -1838766102974LL;

    t76 = ((x385>(x386+x387))-x388);

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	int16_t x392 = -1;

    t77 = ((x389>(x390+x391))-x392);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x393 = INT16_MAX;
	uint32_t x395 = UINT32_MAX;
	uint64_t x396 = 3013297998835LLU;
	uint64_t t78 = 5214044449LLU;

    t78 = ((x393>(x394+x395))-x396);

    if (t78 != 18446741060411552781LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x399 = INT64_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t79 = -4242;

    t79 = ((x397>(x398+x399))-x400);

    if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x405 = UINT16_MAX;
	uint64_t x406 = UINT64_MAX;
	volatile int8_t x407 = INT8_MIN;
	int16_t x408 = INT16_MIN;

    t80 = ((x405>(x406+x407))-x408);

    if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x410 = -1;
	static int8_t x412 = -1;
	static int32_t t81 = -118;

    t81 = ((x409>(x410+x411))-x412);

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x413 = 426U;
	volatile int32_t x415 = -1;
	uint16_t x416 = UINT16_MAX;

    t82 = ((x413>(x414+x415))-x416);

    if (t82 != -65535) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x418 = UINT32_MAX;
	volatile int16_t x419 = -1;
	int8_t x420 = -11;
	int32_t t83 = -1229421;

    t83 = ((x417>(x418+x419))-x420);

    if (t83 != 11) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x425 = INT32_MAX;
	uint32_t x426 = UINT32_MAX;
	uint64_t x427 = 28368LLU;
	uint16_t x428 = UINT16_MAX;
	int32_t t84 = -4;

    t84 = ((x425>(x426+x427))-x428);

    if (t84 != -65535) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x429 = INT32_MIN;
	static volatile uint64_t x430 = 2584116LLU;
	int16_t x431 = INT16_MAX;
	static volatile int64_t x432 = 6429686250595LL;
	int64_t t85 = 70650LL;

    t85 = ((x429>(x430+x431))-x432);

    if (t85 != -6429686250594LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x433 = -1;
	int32_t x434 = 649;
	volatile int32_t x435 = INT32_MIN;
	uint8_t x436 = 109U;
	int32_t t86 = 3105;

    t86 = ((x433>(x434+x435))-x436);

    if (t86 != -108) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MIN;
	static volatile int8_t x439 = 16;
	uint8_t x440 = UINT8_MAX;

    t87 = ((x437>(x438+x439))-x440);

    if (t87 != -254) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x445 = INT8_MAX;
	int8_t x446 = INT8_MIN;
	static uint16_t x447 = 4U;
	int32_t t88 = -2811680;

    t88 = ((x445>(x446+x447))-x448);

    if (t88 != -254) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x450 = -1LL;
	int64_t x451 = -1LL;
	volatile int64_t x452 = 404075LL;
	int64_t t89 = 16831755LL;

    t89 = ((x449>(x450+x451))-x452);

    if (t89 != -404075LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x453 = 10U;
	volatile int64_t x454 = -1LL;
	uint8_t x456 = 1U;
	volatile int32_t t90 = -33159;

    t90 = ((x453>(x454+x455))-x456);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x457 = 22024U;
	int32_t x458 = INT32_MIN;
	uint8_t x459 = 2U;
	int16_t x460 = INT16_MIN;

    t91 = ((x457>(x458+x459))-x460);

    if (t91 != 32769) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x461 = INT16_MIN;
	uint16_t x462 = 1303U;
	volatile int16_t x463 = -1;

    t92 = ((x461>(x462+x463))-x464);

    if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x466 = UINT8_MAX;
	volatile int8_t x467 = -1;
	volatile int16_t x468 = INT16_MAX;
	volatile int32_t t93 = -15;

    t93 = ((x465>(x466+x467))-x468);

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x469 = -3965896;
	volatile int16_t x470 = INT16_MIN;
	int64_t x471 = 42LL;
	int64_t x472 = -1LL;
	int64_t t94 = -1100063LL;

    t94 = ((x469>(x470+x471))-x472);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x473 = -1;
	int64_t x474 = INT64_MIN;
	uint16_t x475 = 0U;
	uint64_t t95 = 220051898334LLU;

    t95 = ((x473>(x474+x475))-x476);

    if (t95 != 18215454170159287455LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x490 = 644226676U;
	volatile int16_t x491 = INT16_MAX;
	static int8_t x492 = 0;
	int32_t t96 = 511;

    t96 = ((x489>(x490+x491))-x492);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x495 = 0;
	uint8_t x496 = UINT8_MAX;
	int32_t t97 = -4032;

    t97 = ((x493>(x494+x495))-x496);

    if (t97 != -254) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x502 = INT16_MIN;
	uint64_t x503 = 9675311LLU;
	uint16_t x504 = 8187U;
	volatile int32_t t98 = -61;

    t98 = ((x501>(x502+x503))-x504);

    if (t98 != -8186) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x505 = 1569624;
	uint8_t x506 = 6U;
	uint32_t x507 = 0U;

    t99 = ((x505>(x506+x507))-x508);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x510 = 4;
	uint8_t x511 = 6U;
	int8_t x512 = INT8_MIN;

    t100 = ((x509>(x510+x511))-x512);

    if (t100 != 129) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x514 = -1LL;
	int64_t x515 = -1LL;
	uint8_t x516 = 23U;
	volatile int32_t t101 = 7029;

    t101 = ((x513>(x514+x515))-x516);

    if (t101 != -22) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x517 = INT8_MAX;
	uint16_t x518 = 32U;
	uint64_t x519 = 1LLU;
	static int32_t t102 = 24385;

    t102 = ((x517>(x518+x519))-x520);

    if (t102 != -126) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x521 = 677400935;
	int32_t x522 = INT32_MAX;
	uint32_t x523 = 31662351U;
	uint32_t x524 = 16392U;

    t103 = ((x521>(x522+x523))-x524);

    if (t103 != 4294950904U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x526 = 57U;
	volatile int16_t x527 = INT16_MAX;
	uint64_t x528 = UINT64_MAX;
	volatile uint64_t t104 = 1LLU;

    t104 = ((x525>(x526+x527))-x528);

    if (t104 != 2LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x532 = 12891U;
	volatile uint32_t t105 = 38908U;

    t105 = ((x529>(x530+x531))-x532);

    if (t105 != 4294954405U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x533 = INT8_MIN;
	volatile uint16_t x534 = 25520U;
	static volatile uint64_t x535 = UINT64_MAX;
	uint32_t x536 = UINT32_MAX;
	static uint32_t t106 = 10U;

    t106 = ((x533>(x534+x535))-x536);

    if (t106 != 2U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x538 = INT32_MIN;
	volatile uint32_t x539 = UINT32_MAX;
	int32_t x540 = 30;

    t107 = ((x537>(x538+x539))-x540);

    if (t107 != -30) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x545 = 0U;
	int32_t x546 = -48482;
	static int8_t x547 = 53;
	int32_t x548 = -1;
	int32_t t108 = -5618;

    t108 = ((x545>(x546+x547))-x548);

    if (t108 != 2) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile int16_t x551 = -201;
	static volatile int32_t x552 = -1;
	int32_t t109 = -1;

    t109 = ((x549>(x550+x551))-x552);

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x553 = -1;
	volatile int64_t x554 = -1LL;
	int16_t x555 = INT16_MIN;
	volatile int32_t t110 = 1747911;

    t110 = ((x553>(x554+x555))-x556);

    if (t110 != 32769) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x558 = INT64_MIN;
	uint8_t x559 = UINT8_MAX;
	int32_t t111 = 0;

    t111 = ((x557>(x558+x559))-x560);

    if (t111 != -6) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x561 = 0;
	static volatile int16_t x562 = INT16_MAX;
	uint16_t x564 = 210U;
	int32_t t112 = 3;

    t112 = ((x561>(x562+x563))-x564);

    if (t112 != -210) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x573 = 2014592644U;
	uint64_t x574 = 35LLU;
	int64_t x576 = INT64_MAX;
	volatile int64_t t113 = 13410397011LL;

    t113 = ((x573>(x574+x575))-x576);

    if (t113 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x577 = -2178699830167918LL;
	int16_t x578 = INT16_MAX;
	static int32_t t114 = 69;

    t114 = ((x577>(x578+x579))-x580);

    if (t114 != -116) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x581 = UINT16_MAX;
	int64_t x582 = 475875650528670LL;
	int64_t x583 = -3783981497088LL;
	volatile int32_t x584 = -1;
	volatile int32_t t115 = 192119674;

    t115 = ((x581>(x582+x583))-x584);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	int32_t x595 = INT32_MAX;
	int8_t x596 = INT8_MIN;
	int32_t t116 = 66;

    t116 = ((x593>(x594+x595))-x596);

    if (t116 != 128) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x598 = INT64_MIN;
	int16_t x600 = 3;
	volatile int32_t t117 = -945488;

    t117 = ((x597>(x598+x599))-x600);

    if (t117 != -2) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x601 = INT64_MIN;
	uint32_t x602 = UINT32_MAX;
	int32_t x603 = INT32_MIN;
	volatile uint32_t x604 = 94U;
	uint32_t t118 = 31U;

    t118 = ((x601>(x602+x603))-x604);

    if (t118 != 4294967202U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x609 = INT16_MAX;
	static uint8_t x610 = UINT8_MAX;
	int8_t x611 = 1;
	int64_t x612 = -38217612LL;
	volatile int64_t t119 = 64680048624LL;

    t119 = ((x609>(x610+x611))-x612);

    if (t119 != 38217613LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = -1;
	int16_t x615 = INT16_MAX;
	int64_t x616 = -8515386583463060LL;
	int64_t t120 = 15906LL;

    t120 = ((x613>(x614+x615))-x616);

    if (t120 != 8515386583463060LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint32_t x617 = UINT32_MAX;
	static volatile int8_t x618 = INT8_MIN;
	uint32_t x619 = 100U;
	uint32_t x620 = 372U;
	static uint32_t t121 = 43044U;

    t121 = ((x617>(x618+x619))-x620);

    if (t121 != 4294966925U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x625 = 491314675059848LL;
	int64_t x627 = 2LL;
	static int64_t x628 = -25912206906LL;
	static int64_t t122 = 2081LL;

    t122 = ((x625>(x626+x627))-x628);

    if (t122 != 25912206907LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x629 = -149618;
	volatile int16_t x630 = INT16_MIN;
	static int16_t x631 = INT16_MIN;
	int64_t x632 = INT64_MAX;
	static volatile int64_t t123 = 0LL;

    t123 = ((x629>(x630+x631))-x632);

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x634 = INT32_MIN;
	static uint16_t x635 = 13U;
	int8_t x636 = INT8_MAX;
	int32_t t124 = -139062264;

    t124 = ((x633>(x634+x635))-x636);

    if (t124 != -126) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x642 = 1;
	int32_t x643 = -1;
	static int16_t x644 = INT16_MAX;

    t125 = ((x641>(x642+x643))-x644);

    if (t125 != -32767) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x645 = INT64_MIN;
	uint64_t x647 = 220842LLU;
	static int8_t x648 = -1;
	static int32_t t126 = -460;

    t126 = ((x645>(x646+x647))-x648);

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x653 = -1;
	uint16_t x655 = 9U;

    t127 = ((x653>(x654+x655))-x656);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x657 = UINT16_MAX;
	volatile int64_t x658 = -7998057044023520LL;
	int32_t x659 = -1;
	int32_t t128 = 3852;

    t128 = ((x657>(x658+x659))-x660);

    if (t128 != -77) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x665 = UINT8_MAX;
	volatile int32_t x666 = 5;
	int64_t x668 = 1263897LL;

    t129 = ((x665>(x666+x667))-x668);

    if (t129 != -1263896LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x669 = -1;
	int8_t x670 = -1;
	static uint32_t x671 = UINT32_MAX;
	volatile int64_t x672 = INT64_MAX;
	static int64_t t130 = 10979507LL;

    t130 = ((x669>(x670+x671))-x672);

    if (t130 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x673 = INT8_MIN;
	static int64_t x675 = -1LL;
	volatile uint32_t x676 = 498U;

    t131 = ((x673>(x674+x675))-x676);

    if (t131 != 4294966798U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x677 = 20U;
	uint16_t x678 = 627U;
	static int32_t x679 = INT32_MIN;
	int16_t x680 = INT16_MIN;
	volatile int32_t t132 = -11949;

    t132 = ((x677>(x678+x679))-x680);

    if (t132 != 32769) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x681 = 1;
	uint64_t x682 = 176719479LLU;
	volatile int64_t x683 = -1LL;
	static uint32_t x684 = 8999U;

    t133 = ((x681>(x682+x683))-x684);

    if (t133 != 4294958297U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x685 = UINT32_MAX;
	static volatile int64_t x686 = -2099512075568LL;
	uint32_t x688 = 7U;
	volatile uint32_t t134 = 5024706U;

    t134 = ((x685>(x686+x687))-x688);

    if (t134 != 4294967290U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x691 = -4LL;
	int16_t x692 = 124;
	static int32_t t135 = -10;

    t135 = ((x689>(x690+x691))-x692);

    if (t135 != -123) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x694 = -13;
	static volatile int8_t x696 = -1;
	volatile int32_t t136 = -64163431;

    t136 = ((x693>(x694+x695))-x696);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x698 = 92U;
	volatile uint32_t x699 = UINT32_MAX;
	uint32_t x700 = 75940U;
	static uint32_t t137 = 2U;

    t137 = ((x697>(x698+x699))-x700);

    if (t137 != 4294891357U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x709 = UINT8_MAX;
	uint64_t x710 = 63LLU;
	uint16_t x711 = UINT16_MAX;
	uint16_t x712 = 343U;
	static int32_t t138 = -44467109;

    t138 = ((x709>(x710+x711))-x712);

    if (t138 != -343) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x717 = -1;
	int16_t x718 = INT16_MIN;
	volatile int8_t x719 = INT8_MIN;
	int32_t t139 = -243577150;

    t139 = ((x717>(x718+x719))-x720);

    if (t139 != -2147483646) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x721 = 1U;
	uint64_t x724 = 1LLU;

    t140 = ((x721>(x722+x723))-x724);

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x725 = -10301561685LL;
	volatile int64_t x726 = -158419LL;
	int16_t x727 = 23;
	static volatile int8_t x728 = 63;

    t141 = ((x725>(x726+x727))-x728);

    if (t141 != -63) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x729 = 1982U;
	uint32_t x730 = 1519348U;
	int8_t x731 = -1;
	uint8_t x732 = 1U;
	int32_t t142 = 100;

    t142 = ((x729>(x730+x731))-x732);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x734 = INT16_MIN;
	volatile int8_t x736 = INT8_MIN;
	volatile int32_t t143 = -3087;

    t143 = ((x733>(x734+x735))-x736);

    if (t143 != 129) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x737 = 10U;
	static volatile uint64_t x738 = 147734173602LLU;
	static volatile uint64_t x739 = 20590324199996LLU;
	uint16_t x740 = 6U;

    t144 = ((x737>(x738+x739))-x740);

    if (t144 != -6) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x741 = 15928005U;
	volatile uint8_t x743 = 7U;
	volatile int16_t x744 = -59;

    t145 = ((x741>(x742+x743))-x744);

    if (t145 != 60) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x745 = 27U;
	uint16_t x746 = 17875U;
	uint16_t x747 = UINT16_MAX;
	int16_t x748 = INT16_MAX;
	int32_t t146 = 1;

    t146 = ((x745>(x746+x747))-x748);

    if (t146 != -32767) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x749 = 157992077058487047LL;
	uint64_t x750 = 36LLU;
	int32_t x752 = 62;
	int32_t t147 = 26;

    t147 = ((x749>(x750+x751))-x752);

    if (t147 != -61) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint32_t x757 = 46439U;
	static int16_t x758 = -1;
	volatile int8_t x759 = 1;
	int32_t t148 = -262495408;

    t148 = ((x757>(x758+x759))-x760);

    if (t148 != -254) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x761 = -26;
	static uint64_t x762 = UINT64_MAX;
	int16_t x763 = -1;
	int32_t x764 = -6528271;
	static int32_t t149 = -970;

    t149 = ((x761>(x762+x763))-x764);

    if (t149 != 6528271) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x767 = 119U;
	int32_t x768 = -3;
	int32_t t150 = -6773677;

    t150 = ((x765>(x766+x767))-x768);

    if (t150 != 4) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x770 = 2577U;
	int8_t x771 = -1;
	int16_t x772 = -3;
	volatile int32_t t151 = 126;

    t151 = ((x769>(x770+x771))-x772);

    if (t151 != 3) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x778 = UINT16_MAX;
	static uint64_t x779 = UINT64_MAX;
	int64_t x780 = INT64_MAX;

    t152 = ((x777>(x778+x779))-x780);

    if (t152 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x781 = 191LLU;
	int8_t x782 = INT8_MAX;
	static int64_t x783 = 12440204790441416LL;
	int8_t x784 = 9;
	int32_t t153 = -53;

    t153 = ((x781>(x782+x783))-x784);

    if (t153 != -9) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x785 = 652U;
	int32_t x787 = 2367;
	static volatile int32_t t154 = 356;

    t154 = ((x785>(x786+x787))-x788);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x797 = -8161;
	int8_t x798 = INT8_MAX;
	int64_t x799 = -1LL;

    t155 = ((x797>(x798+x799))-x800);

    if (t155 != -32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x803 = -22398159194180LL;
	int8_t x804 = 0;

    t156 = ((x801>(x802+x803))-x804);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x810 = 20703250488776454LLU;
	volatile uint64_t x811 = 123395390LLU;
	int8_t x812 = INT8_MIN;
	volatile int32_t t157 = -28393140;

    t157 = ((x809>(x810+x811))-x812);

    if (t157 != 128) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x813 = 55126U;
	int32_t x814 = 60;
	static uint64_t x815 = UINT64_MAX;
	uint64_t t158 = 25807563LLU;

    t158 = ((x813>(x814+x815))-x816);

    if (t158 != 15233070643313052014LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x817 = 2U;
	static int8_t x818 = INT8_MIN;
	volatile int32_t x819 = INT32_MAX;
	uint8_t x820 = 1U;
	volatile int32_t t159 = -11457935;

    t159 = ((x817>(x818+x819))-x820);

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x822 = 2789737LLU;
	static volatile int16_t x823 = INT16_MIN;
	int16_t x824 = 121;
	volatile int32_t t160 = 31110;

    t160 = ((x821>(x822+x823))-x824);

    if (t160 != -120) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x825 = 1;
	volatile uint16_t x826 = UINT16_MAX;
	int16_t x827 = INT16_MIN;
	int64_t x828 = -16920657811283LL;
	volatile int64_t t161 = 249LL;

    t161 = ((x825>(x826+x827))-x828);

    if (t161 != 16920657811283LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x830 = INT8_MAX;
	uint32_t x831 = 52U;
	volatile int16_t x832 = INT16_MAX;
	volatile int32_t t162 = -5;

    t162 = ((x829>(x830+x831))-x832);

    if (t162 != -32767) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x833 = INT32_MIN;
	static volatile int64_t x835 = 156336641843092166LL;
	int8_t x836 = -1;
	int32_t t163 = 472857;

    t163 = ((x833>(x834+x835))-x836);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x837 = INT8_MIN;
	volatile int32_t x838 = -1;
	uint64_t x839 = 7694LLU;
	uint32_t x840 = 183U;
	volatile uint32_t t164 = 5064U;

    t164 = ((x837>(x838+x839))-x840);

    if (t164 != 4294967114U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x841 = 21U;
	uint32_t x842 = 210U;
	static uint8_t x843 = 2U;
	uint32_t x844 = 1006U;
	static volatile uint32_t t165 = 61282U;

    t165 = ((x841>(x842+x843))-x844);

    if (t165 != 4294966290U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x847 = -167;
	static volatile int16_t x848 = -6117;
	volatile int32_t t166 = -139;

    t166 = ((x845>(x846+x847))-x848);

    if (t166 != 6117) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x849 = 21548986242728LLU;
	volatile int16_t x851 = -43;
	int8_t x852 = INT8_MIN;
	int32_t t167 = -4;

    t167 = ((x849>(x850+x851))-x852);

    if (t167 != 128) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x853 = INT16_MAX;
	uint16_t x854 = 1028U;
	uint8_t x855 = UINT8_MAX;
	static int32_t t168 = -8321;

    t168 = ((x853>(x854+x855))-x856);

    if (t168 != 5709) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x861 = INT64_MIN;
	static uint16_t x863 = 9340U;
	int64_t x864 = 18LL;

    t169 = ((x861>(x862+x863))-x864);

    if (t169 != -18LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x873 = 12U;
	int32_t x875 = INT32_MIN;
	int32_t x876 = INT32_MAX;

    t170 = ((x873>(x874+x875))-x876);

    if (t170 != -2147483646) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x881 = -1;
	int8_t x882 = 1;
	int64_t x883 = -1045806105130396357LL;
	uint16_t x884 = 26802U;
	static int32_t t171 = 404308;

    t171 = ((x881>(x882+x883))-x884);

    if (t171 != -26801) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x885 = INT8_MAX;
	int64_t x887 = 12374059LL;
	int8_t x888 = -1;

    t172 = ((x885>(x886+x887))-x888);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x889 = UINT16_MAX;
	uint16_t x890 = UINT16_MAX;
	volatile uint8_t x891 = UINT8_MAX;
	uint32_t x892 = 428392U;

    t173 = ((x889>(x890+x891))-x892);

    if (t173 != 4294538904U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x893 = INT16_MIN;
	int16_t x894 = INT16_MIN;
	static int64_t x895 = -1898096137LL;
	int8_t x896 = INT8_MIN;
	int32_t t174 = -2;

    t174 = ((x893>(x894+x895))-x896);

    if (t174 != 129) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x897 = INT8_MIN;
	static int64_t x898 = INT64_MIN;
	static uint16_t x899 = 5163U;
	volatile int16_t x900 = -448;
	int32_t t175 = 203427269;

    t175 = ((x897>(x898+x899))-x900);

    if (t175 != 449) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x901 = -17;
	static int64_t x902 = INT64_MAX;
	int64_t x903 = -89377241514206061LL;
	static volatile int8_t x904 = -1;

    t176 = ((x901>(x902+x903))-x904);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x905 = INT32_MAX;
	int32_t x907 = INT32_MIN;
	uint16_t x908 = UINT16_MAX;

    t177 = ((x905>(x906+x907))-x908);

    if (t177 != -65534) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x913 = 3378U;
	int64_t x914 = -1LL;
	int8_t x915 = -1;
	volatile int64_t x916 = -1LL;
	int64_t t178 = 4313786747007494818LL;

    t178 = ((x913>(x914+x915))-x916);

    if (t178 != 2LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x922 = 10547;
	static int32_t x923 = -15625;
	volatile int8_t x924 = -1;
	volatile int32_t t179 = 2909;

    t179 = ((x921>(x922+x923))-x924);

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x933 = -1LL;
	int8_t x934 = INT8_MIN;
	static uint32_t x936 = 803786U;
	volatile uint32_t t180 = 167113961U;

    t180 = ((x933>(x934+x935))-x936);

    if (t180 != 4294163511U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x937 = INT64_MIN;
	int32_t x938 = 1296872;
	int16_t x939 = 0;
	static int8_t x940 = 0;
	static volatile int32_t t181 = 73530171;

    t181 = ((x937>(x938+x939))-x940);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x941 = INT16_MIN;
	int16_t x942 = INT16_MIN;
	static uint64_t x943 = 1626LLU;
	static uint64_t x944 = UINT64_MAX;
	volatile uint64_t t182 = 174322LLU;

    t182 = ((x941>(x942+x943))-x944);

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x945 = UINT16_MAX;
	int16_t x946 = INT16_MIN;
	static volatile int16_t x947 = 1229;
	uint64_t x948 = 32LLU;

    t183 = ((x945>(x946+x947))-x948);

    if (t183 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x949 = 3U;
	volatile uint8_t x950 = 1U;
	uint64_t x951 = 11180354079LLU;
	int8_t x952 = 1;
	static volatile int32_t t184 = -58;

    t184 = ((x949>(x950+x951))-x952);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x957 = INT8_MIN;
	static int16_t x958 = INT16_MIN;
	static int32_t x959 = -1;
	static uint8_t x960 = UINT8_MAX;

    t185 = ((x957>(x958+x959))-x960);

    if (t185 != -254) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x966 = 1711775157U;
	static volatile uint32_t x967 = UINT32_MAX;
	uint64_t x968 = 5LLU;

    t186 = ((x965>(x966+x967))-x968);

    if (t186 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x969 = UINT32_MAX;
	int8_t x971 = INT8_MAX;
	uint32_t t187 = 2690165U;

    t187 = ((x969>(x970+x971))-x972);

    if (t187 != 4133397045U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x974 = 0U;
	int64_t x975 = -1LL;
	volatile int16_t x976 = INT16_MIN;
	volatile int32_t t188 = -96411869;

    t188 = ((x973>(x974+x975))-x976);

    if (t188 != 32769) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x981 = INT32_MIN;
	int8_t x982 = -13;
	static uint8_t x983 = 3U;
	int64_t x984 = 1949267362518843LL;
	volatile int64_t t189 = -8782LL;

    t189 = ((x981>(x982+x983))-x984);

    if (t189 != -1949267362518843LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x986 = INT8_MIN;
	uint32_t x987 = 31U;
	volatile int32_t t190 = 483255;

    t190 = ((x985>(x986+x987))-x988);

    if (t190 != -65535) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x989 = INT16_MIN;
	int16_t x990 = INT16_MIN;
	volatile int8_t x991 = -1;

    t191 = ((x989>(x990+x991))-x992);

    if (t191 != -313) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x993 = -1626541LL;
	int16_t x994 = 10174;
	static int16_t x995 = INT16_MAX;
	static uint16_t x996 = UINT16_MAX;

    t192 = ((x993>(x994+x995))-x996);

    if (t192 != -65535) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x997 = 4364U;
	uint32_t x998 = UINT32_MAX;
	int16_t x1000 = -2563;
	volatile int32_t t193 = 590509;

    t193 = ((x997>(x998+x999))-x1000);

    if (t193 != 2563) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1002 = 10875LL;
	uint16_t x1003 = UINT16_MAX;
	int64_t x1004 = 34785275021499LL;
	volatile int64_t t194 = -1957LL;

    t194 = ((x1001>(x1002+x1003))-x1004);

    if (t194 != -34785275021498LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1005 = INT16_MAX;
	int16_t x1006 = -1;
	static int64_t x1008 = INT64_MAX;
	int64_t t195 = -3LL;

    t195 = ((x1005>(x1006+x1007))-x1008);

    if (t195 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x1009 = 5688200;
	int16_t x1010 = INT16_MIN;
	int32_t x1012 = 310030117;
	volatile int32_t t196 = 2064929;

    t196 = ((x1009>(x1010+x1011))-x1012);

    if (t196 != -310030116) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1013 = INT32_MAX;
	volatile int16_t x1014 = -1;
	static volatile uint64_t x1015 = UINT64_MAX;
	volatile int16_t x1016 = INT16_MIN;
	volatile int32_t t197 = -785906888;

    t197 = ((x1013>(x1014+x1015))-x1016);

    if (t197 != 32768) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1017 = -32475;
	int64_t x1018 = 8474881851729LL;
	uint64_t x1020 = 133499364122LLU;
	uint64_t t198 = 536LLU;

    t198 = ((x1017>(x1018+x1019))-x1020);

    if (t198 != 18446743940210187494LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x1021 = 40U;
	uint64_t x1022 = 70512LLU;
	int64_t x1024 = INT64_MAX;
	volatile int64_t t199 = -6LL;

    t199 = ((x1021>(x1022+x1023))-x1024);

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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

