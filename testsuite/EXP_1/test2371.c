
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

int8_t x7 = 9;
int64_t x13 = -102LL;
static uint16_t x16 = UINT16_MAX;
volatile int8_t x23 = INT8_MIN;
volatile int32_t x31 = INT32_MIN;
uint16_t x34 = UINT16_MAX;
uint32_t x35 = UINT32_MAX;
int64_t x37 = INT64_MIN;
static uint16_t x41 = 82U;
int8_t x46 = INT8_MIN;
static uint32_t x48 = 1992U;
int16_t x54 = -120;
uint32_t x62 = 0U;
volatile int32_t t15 = -22777;
uint64_t x75 = 25566255597444LLU;
volatile int16_t x83 = INT16_MAX;
volatile uint64_t x85 = 300279350226955909LLU;
volatile uint8_t x88 = 5U;
int32_t x93 = INT32_MIN;
int16_t x100 = 5;
int8_t x107 = INT8_MIN;
int64_t x109 = -1LL;
static int16_t x112 = -1;
volatile int32_t x117 = 28;
static volatile int64_t t28 = 2492192639LL;
int32_t x125 = INT32_MAX;
uint8_t x135 = UINT8_MAX;
static int16_t x143 = INT16_MIN;
int32_t x144 = INT32_MIN;
volatile uint64_t t35 = 91415343857511LLU;
uint16_t x156 = 464U;
int32_t x159 = INT32_MIN;
int32_t x177 = 3752406;
int64_t x178 = 448430570674LL;
int8_t x182 = 15;
int32_t t43 = -192429625;
int8_t x195 = 8;
volatile uint32_t x200 = UINT32_MAX;
volatile int32_t x201 = INT32_MAX;
volatile uint64_t t48 = 25912804084292LLU;
volatile uint64_t x224 = 58987637460021LLU;
uint32_t t53 = 3104U;
int16_t x241 = -428;
uint8_t x243 = 6U;
int8_t x272 = -1;
int64_t x274 = -1LL;
static int32_t x275 = INT32_MIN;
volatile int8_t x283 = INT8_MIN;
volatile int16_t x289 = INT16_MIN;
uint32_t x290 = UINT32_MAX;
volatile int32_t x297 = INT32_MIN;
int64_t t69 = -12482120LL;
int16_t x312 = -1;
int64_t x323 = 51983560LL;
uint64_t x328 = 4455756874799096659LLU;
uint64_t t75 = 5LLU;
static uint32_t x333 = 6877U;
static volatile int16_t x336 = -1;
int16_t x342 = -4;
int32_t x345 = INT32_MIN;
uint64_t x348 = 5457529975LLU;
int8_t x354 = INT8_MIN;
int8_t x359 = INT8_MAX;
uint16_t x362 = UINT16_MAX;
int64_t x364 = -964848005LL;
static int64_t x370 = -1LL;
volatile int64_t t85 = 33651191421352LL;
static volatile int64_t x378 = INT64_MIN;
static uint64_t x379 = UINT64_MAX;
uint8_t x386 = UINT8_MAX;
uint32_t x388 = 22449U;
volatile int8_t x390 = -3;
int32_t x398 = -1;
static uint64_t t92 = 16178675LLU;
int32_t x406 = -1980995;
static int64_t x409 = INT64_MAX;
volatile uint64_t t95 = 217190095588LLU;
int8_t x416 = -3;
int16_t x418 = INT16_MAX;
int16_t x421 = INT16_MIN;
uint32_t t99 = 1662795U;
static uint64_t x432 = UINT64_MAX;
volatile uint16_t x438 = UINT16_MAX;
int32_t x445 = 48605281;
volatile int8_t x454 = 44;
int8_t x456 = INT8_MAX;
uint16_t x460 = UINT16_MAX;
static volatile int64_t t107 = -1LL;
static volatile int32_t t108 = -8989139;
int64_t t112 = 439185759842LL;
volatile uint8_t x496 = UINT8_MAX;
int64_t t113 = 1LL;
uint64_t x500 = UINT64_MAX;
static uint16_t x501 = UINT16_MAX;
uint64_t t116 = 17494427942LLU;
static volatile int32_t x511 = -32220;
int32_t x519 = INT32_MAX;
uint16_t x522 = UINT16_MAX;
int16_t x528 = INT16_MIN;
uint8_t x530 = 12U;
uint64_t t122 = 44462670375015LLU;
static int64_t t123 = -20LL;
uint16_t x540 = UINT16_MAX;
int8_t x552 = INT8_MAX;
static uint16_t x560 = 8U;
static uint64_t x565 = 688259214276396LLU;
static int32_t x567 = 882604;
static uint64_t x571 = 93378703238629LLU;
uint8_t x575 = 1U;
volatile uint16_t x577 = UINT16_MAX;
static int64_t x587 = INT64_MIN;
static volatile int32_t x592 = -2;
volatile int32_t t137 = -13;
volatile uint16_t x596 = 380U;
static int64_t t139 = 2091746523LL;
uint16_t x601 = 3U;
int32_t x602 = -27906;
static int64_t x609 = -1LL;
volatile int16_t x611 = 0;
uint64_t t142 = 14594147310746LLU;
uint8_t x621 = 11U;
uint64_t x622 = 2675975400105094965LLU;
uint64_t t144 = 26478504106315LLU;
int32_t x625 = INT32_MAX;
volatile int32_t t145 = -2086;
volatile uint32_t x629 = UINT32_MAX;
static uint64_t t146 = 22291439416074307LLU;
static uint64_t x645 = 229304767342343LLU;
uint32_t t151 = 206553877U;
int16_t x657 = -1;
static int32_t x660 = INT32_MIN;
int64_t t152 = 0LL;
volatile uint16_t x667 = 281U;
int64_t x672 = INT64_MIN;
int64_t x673 = INT64_MIN;
static int64_t t155 = -3608389548LL;
static int16_t x677 = INT16_MAX;
volatile uint64_t x680 = UINT64_MAX;
int16_t x687 = -263;
int8_t x689 = -1;
static int64_t x704 = INT64_MAX;
int16_t x709 = INT16_MAX;
volatile uint32_t t163 = 737529U;
int16_t x713 = INT16_MIN;
static int64_t t164 = -16299194043LL;
volatile int32_t t165 = 231387370;
volatile uint32_t t166 = 1257154U;
volatile uint64_t t167 = 95227281551412LLU;
static int64_t x733 = -1LL;
uint64_t x735 = 78661LLU;
int64_t t170 = -27953991LL;
int64_t x743 = -1LL;
int64_t t171 = -2719894957LL;
uint64_t x749 = 61289LLU;
int8_t x753 = INT8_MIN;
uint64_t t177 = 8755626957LLU;
int8_t x789 = 44;
uint32_t x791 = UINT32_MAX;
volatile uint32_t t180 = 1027972U;
int16_t x796 = -6500;
volatile uint64_t t181 = 2693LLU;
uint32_t x799 = 2U;
int16_t x800 = INT16_MIN;
int16_t x809 = INT16_MIN;
uint8_t x810 = 12U;
int64_t t187 = 317113435383530442LL;
int64_t x827 = 97LL;
int8_t x830 = INT8_MAX;
uint16_t x831 = 2U;
uint32_t x833 = 4U;
int32_t x835 = 3156;
volatile uint32_t t191 = 5345196U;
static uint8_t x838 = 62U;
int16_t x842 = -1;
volatile int32_t t193 = 101;
int16_t x854 = INT16_MAX;
int64_t x861 = INT64_MAX;
uint16_t x864 = 108U;
volatile int64_t t198 = 1502344453728LL;
static volatile int16_t x865 = 11820;
static int64_t x868 = -1216LL;


void f0(void) {
    	uint16_t x1 = 7814U;
	uint16_t x2 = UINT16_MAX;
	static uint16_t x3 = UINT16_MAX;
	volatile int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -48;

    t0 = (((x1|x2)-x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x5 = 2U;
	uint32_t x6 = 1139U;
	uint16_t x8 = 50U;
	uint32_t t1 = 8675U;

    t1 = (((x5|x6)-x7)%x8);

    if (t1 != 30U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 25350545LLU;
	volatile int8_t x10 = -27;
	static volatile int8_t x11 = -1;
	volatile int64_t x12 = -36177922946052LL;
	uint64_t t2 = 45LLU;

    t2 = (((x9|x10)-x11)%x12);

    if (t2 != 36177922946042LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MAX;
	static int32_t x15 = INT32_MIN;
	int64_t t3 = -1971159903061476LL;

    t3 = (((x13|x14)-x15)%x16);

    if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	uint64_t x18 = UINT64_MAX;
	volatile int64_t x19 = INT64_MIN;
	uint32_t x20 = UINT32_MAX;
	volatile uint64_t t4 = 15613675802943LLU;

    t4 = (((x17|x18)-x19)%x20);

    if (t4 != 2147483647LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = UINT8_MAX;
	int16_t x22 = INT16_MIN;
	int32_t x24 = -375239897;
	volatile int32_t t5 = -43323;

    t5 = (((x21|x22)-x23)%x24);

    if (t5 != -32385) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	uint8_t x26 = 40U;
	int64_t x27 = -21686633841314092LL;
	int8_t x28 = INT8_MIN;
	volatile int64_t t6 = -27LL;

    t6 = (((x25|x26)-x27)%x28);

    if (t6 != 43LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 3922U;
	int16_t x30 = INT16_MIN;
	volatile int32_t x32 = -11703891;
	static uint32_t t7 = 97674802U;

    t7 = (((x29|x30)-x31)%x32);

    if (t7 != 2147454802U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -2735;
	int64_t x36 = -1LL;
	int64_t t8 = -4308541416050106362LL;

    t8 = (((x33|x34)-x35)%x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = UINT32_MAX;
	uint32_t x39 = 13566108U;
	uint16_t x40 = 10999U;
	volatile int64_t t9 = 1990LL;

    t9 = (((x37|x38)-x39)%x40);

    if (t9 != -7631LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x42 = INT16_MAX;
	uint16_t x43 = UINT16_MAX;
	int16_t x44 = -1;
	volatile int32_t t10 = 804;

    t10 = (((x41|x42)-x43)%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MAX;
	int64_t x47 = INT64_MIN;
	volatile int64_t t11 = 2294LL;

    t11 = (((x45|x46)-x47)%x48);

    if (t11 != 847LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 64769LLU;
	int8_t x50 = INT8_MIN;
	static int16_t x51 = INT16_MIN;
	static volatile int16_t x52 = INT16_MIN;
	uint64_t t12 = 885258844860794LLU;

    t12 = (((x49|x50)-x51)%x52);

    if (t12 != 32641LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	static int16_t x55 = -1;
	uint64_t x56 = 4540544LLU;
	static volatile uint64_t t13 = 12399877LLU;

    t13 = (((x53|x54)-x55)%x56);

    if (t13 != 3405705LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	uint64_t x63 = 166083LLU;
	uint8_t x64 = 2U;
	static volatile uint64_t t14 = 379834662685LLU;

    t14 = (((x61|x62)-x63)%x64);

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MIN;
	static int32_t x68 = INT32_MIN;

    t15 = (((x65|x66)-x67)%x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x69 = 40;
	volatile int64_t x70 = -12094672178726047LL;
	volatile int16_t x71 = INT16_MIN;
	uint8_t x72 = 5U;
	static volatile int64_t t16 = 29LL;

    t16 = (((x69|x70)-x71)%x72);

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x73 = UINT64_MAX;
	uint64_t x74 = 151144LLU;
	int8_t x76 = INT8_MIN;
	volatile uint64_t t17 = 6612LLU;

    t17 = (((x73|x74)-x75)%x76);

    if (t17 != 18446718507453954171LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	int8_t x79 = -1;
	int16_t x80 = INT16_MIN;
	static int64_t t18 = 108986LL;

    t18 = (((x77|x78)-x79)%x80);

    if (t18 != -32767LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = 2079;
	static int16_t x82 = -1;
	uint64_t x84 = 17339830884530376LLU;
	volatile uint64_t t19 = 1191970885132396677LLU;

    t19 = (((x81|x82)-x83)%x84);

    if (t19 != 14503843453729160LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x86 = -1685;
	int8_t x87 = INT8_MIN;
	uint64_t t20 = 2221149427LLU;

    t20 = (((x85|x86)-x87)%x88);

    if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x89 = 1616691U;
	uint64_t x90 = 12559LLU;
	static int8_t x91 = INT8_MAX;
	uint32_t x92 = 876512U;
	uint64_t t21 = 3316LLU;

    t21 = (((x89|x90)-x91)%x92);

    if (t21 != 744160LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x94 = 20502601U;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = 6U;
	volatile uint32_t t22 = 9862U;

    t22 = (((x93|x94)-x95)%x96);

    if (t22 != 5U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = -48;
	static int64_t x98 = 355404313070022751LL;
	uint32_t x99 = 496094441U;
	int64_t t23 = -211942900492505832LL;

    t23 = (((x97|x98)-x99)%x100);

    if (t23 != -4LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 5U;
	uint32_t x102 = UINT32_MAX;
	uint64_t x103 = 115330670LLU;
	int16_t x104 = INT16_MIN;
	uint64_t t24 = 2LLU;

    t24 = (((x101|x102)-x103)%x104);

    if (t24 != 4179636625LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x105 = 2U;
	static int64_t x106 = INT64_MIN;
	volatile uint8_t x108 = 57U;
	int64_t t25 = -127574160343LL;

    t25 = (((x105|x106)-x107)%x108);

    if (t25 != -40LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x110 = 6U;
	volatile int8_t x111 = 19;
	static volatile int64_t t26 = 24148949LL;

    t26 = (((x109|x110)-x111)%x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 28569U;
	volatile int8_t x114 = INT8_MAX;
	uint64_t x115 = 4LLU;
	int16_t x116 = -1;
	static volatile uint64_t t27 = 954278094727924673LLU;

    t27 = (((x113|x114)-x115)%x116);

    if (t27 != 28667LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x118 = UINT32_MAX;
	static uint16_t x119 = 3U;
	int64_t x120 = INT64_MAX;

    t28 = (((x117|x118)-x119)%x120);

    if (t28 != 4294967292LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MAX;
	int8_t x122 = 7;
	static uint64_t x123 = 905LLU;
	int32_t x124 = INT32_MAX;
	uint64_t t29 = 0LLU;

    t29 = (((x121|x122)-x123)%x124);

    if (t29 != 2147482742LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x126 = 71266468453268833LLU;
	uint32_t x127 = 34763U;
	int64_t x128 = -185LL;
	uint64_t t30 = 25517381529827LLU;

    t30 = (((x125|x126)-x127)%x128);

    if (t30 != 71266469651904564LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = UINT8_MAX;
	int8_t x130 = INT8_MIN;
	static int32_t x131 = INT32_MIN;
	int16_t x132 = 2241;
	int32_t t31 = -60;

    t31 = (((x129|x130)-x131)%x132);

    if (t31 != 577) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = UINT32_MAX;
	static int64_t x134 = INT64_MIN;
	static int64_t x136 = -1LL;
	int64_t t32 = -417LL;

    t32 = (((x133|x134)-x135)%x136);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x137 = INT16_MIN;
	int64_t x138 = 101213747350659824LL;
	int8_t x139 = INT8_MAX;
	volatile int32_t x140 = INT32_MIN;
	int64_t t33 = 562323242671521222LL;

    t33 = (((x137|x138)-x139)%x140);

    if (t33 != -7567LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x141 = INT64_MIN;
	uint64_t x142 = 46520424310LLU;
	uint64_t t34 = 64973652073314287LLU;

    t34 = (((x141|x142)-x143)%x144);

    if (t34 != 9223372083375232886LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x145 = UINT8_MAX;
	static volatile int32_t x146 = 3494;
	int16_t x147 = -1;
	uint64_t x148 = UINT64_MAX;

    t35 = (((x145|x146)-x147)%x148);

    if (t35 != 3584LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	int32_t x150 = -1;
	static uint16_t x151 = 62U;
	static volatile int16_t x152 = -1;
	volatile int64_t t36 = 1LL;

    t36 = (((x149|x150)-x151)%x152);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = -1LL;
	static uint64_t x154 = 20LLU;
	volatile int8_t x155 = -1;
	volatile uint64_t t37 = 1930296071367573576LLU;

    t37 = (((x153|x154)-x155)%x156);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = INT8_MIN;
	static int32_t x158 = INT32_MAX;
	int64_t x160 = INT64_MIN;
	int64_t t38 = 72968898369LL;

    t38 = (((x157|x158)-x159)%x160);

    if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x161 = INT8_MIN;
	uint8_t x162 = UINT8_MAX;
	uint8_t x163 = 3U;
	volatile int64_t x164 = -1LL;
	volatile int64_t t39 = -1897638850027LL;

    t39 = (((x161|x162)-x163)%x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x165 = 57U;
	int64_t x166 = INT64_MIN;
	int8_t x167 = INT8_MIN;
	int64_t x168 = -1LL;
	int64_t t40 = -6281LL;

    t40 = (((x165|x166)-x167)%x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x169 = 14U;
	uint32_t x170 = 103U;
	int64_t x171 = -1LL;
	static int64_t x172 = -1LL;
	int64_t t41 = 426822LL;

    t41 = (((x169|x170)-x171)%x172);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x179 = 56;
	int16_t x180 = INT16_MIN;
	volatile int64_t t42 = 3557524LL;

    t42 = (((x177|x178)-x179)%x180);

    if (t42 != 32190LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = INT16_MIN;
	int8_t x183 = 6;
	static volatile int8_t x184 = -17;

    t43 = (((x181|x182)-x183)%x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x185 = -1;
	volatile uint64_t x186 = 1LLU;
	int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;
	uint64_t t44 = 1LLU;

    t44 = (((x185|x186)-x187)%x188);

    if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = -1;
	int64_t x190 = INT64_MIN;
	int64_t x191 = 9020705572230LL;
	static uint8_t x192 = UINT8_MAX;
	volatile int64_t t45 = -10LL;

    t45 = (((x189|x190)-x191)%x192);

    if (t45 != -136LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x193 = 8157947488LLU;
	volatile int8_t x194 = -20;
	uint64_t x196 = 196056311LLU;
	volatile uint64_t t46 = 1164026132000LLU;

    t46 = (((x193|x194)-x195)%x196);

    if (t46 != 1507824LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = INT64_MAX;
	int8_t x198 = INT8_MIN;
	volatile uint8_t x199 = 1U;
	volatile int64_t t47 = 2447916499061320320LL;

    t47 = (((x197|x198)-x199)%x200);

    if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x202 = 1778414541986326LLU;
	uint32_t x203 = UINT32_MAX;
	uint32_t x204 = UINT32_MAX;

    t48 = (((x201|x202)-x203)%x204);

    if (t48 != 2147897716LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x205 = INT64_MAX;
	int32_t x206 = -22562;
	int32_t x207 = -1;
	int8_t x208 = 1;
	int64_t t49 = 792LL;

    t49 = (((x205|x206)-x207)%x208);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x209 = 1U;
	static uint16_t x210 = UINT16_MAX;
	int64_t x211 = 627136LL;
	uint64_t x212 = 1971474529972578LLU;
	static volatile uint64_t t50 = 38217933154784LLU;

    t50 = (((x209|x210)-x211)%x212);

    if (t50 != 1628371285550247LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x217 = UINT8_MAX;
	static volatile uint16_t x218 = 1U;
	uint64_t x219 = 27132LLU;
	int8_t x220 = -1;
	uint64_t t51 = 502798303LLU;

    t51 = (((x217|x218)-x219)%x220);

    if (t51 != 18446744073709524739LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x221 = INT8_MIN;
	static int8_t x222 = 3;
	int8_t x223 = -3;
	static uint64_t t52 = 1472398037LLU;

    t52 = (((x221|x222)-x223)%x224);

    if (t52 != 12111936864332LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = 6;
	int8_t x226 = -1;
	uint32_t x227 = 6766454U;
	int16_t x228 = -1;

    t53 = (((x225|x226)-x227)%x228);

    if (t53 != 4288200841U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x229 = INT16_MAX;
	int8_t x230 = -21;
	int64_t x231 = INT64_MIN;
	volatile int32_t x232 = INT32_MIN;
	int64_t t54 = 9LL;

    t54 = (((x229|x230)-x231)%x232);

    if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = 2;
	volatile int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MIN;
	static volatile int64_t x236 = 2032738066815883LL;
	static int64_t t55 = 1582403718695965128LL;

    t55 = (((x233|x234)-x235)%x236);

    if (t55 != -839427711081867LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x237 = -1;
	int32_t x238 = -27511;
	volatile int8_t x239 = 54;
	uint32_t x240 = 10831U;
	uint32_t t56 = 201755U;

    t56 = (((x237|x238)-x239)%x240);

    if (t56 != 10008U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x242 = 90853916LLU;
	int8_t x244 = -1;
	uint64_t t57 = 63LLU;

    t57 = (((x241|x242)-x243)%x244);

    if (t57 != 18446744073709551190LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = -1;
	int8_t x246 = 1;
	int32_t x247 = 448;
	volatile int64_t x248 = INT64_MAX;
	int64_t t58 = 290789917705971LL;

    t58 = (((x245|x246)-x247)%x248);

    if (t58 != -449LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x257 = 79;
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = -1808;
	uint16_t x260 = UINT16_MAX;
	static volatile uint32_t t59 = 202556U;

    t59 = (((x257|x258)-x259)%x260);

    if (t59 != 1807U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x261 = 5301923034LLU;
	static int8_t x262 = INT8_MIN;
	int64_t x263 = -2223732094706182LL;
	uint8_t x264 = 9U;
	uint64_t t60 = 12002265224886015LLU;

    t60 = (((x261|x262)-x263)%x264);

    if (t60 != 2LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x265 = 1291LLU;
	int16_t x266 = INT16_MIN;
	volatile uint64_t x267 = 5638LLU;
	volatile uint16_t x268 = 1U;
	uint64_t t61 = 7407053726LLU;

    t61 = (((x265|x266)-x267)%x268);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = 1;
	volatile int16_t x270 = INT16_MIN;
	static uint64_t x271 = UINT64_MAX;
	volatile uint64_t t62 = 13LLU;

    t62 = (((x269|x270)-x271)%x272);

    if (t62 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x273 = -238;
	uint32_t x276 = UINT32_MAX;
	volatile int64_t t63 = -18573828LL;

    t63 = (((x273|x274)-x275)%x276);

    if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x277 = -2;
	static int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	volatile int32_t x280 = INT32_MIN;
	int64_t t64 = 3LL;

    t64 = (((x277|x278)-x279)%x280);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x281 = UINT16_MAX;
	int16_t x282 = -3056;
	int16_t x284 = INT16_MIN;
	volatile int32_t t65 = -48;

    t65 = (((x281|x282)-x283)%x284);

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x291 = 1U;
	static int64_t x292 = INT64_MIN;
	int64_t t66 = -36557357111588683LL;

    t66 = (((x289|x290)-x291)%x292);

    if (t66 != 4294967294LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x293 = INT64_MIN;
	volatile uint8_t x294 = UINT8_MAX;
	volatile int8_t x295 = INT8_MAX;
	int16_t x296 = -22;
	volatile int64_t t67 = -4061326683LL;

    t67 = (((x293|x294)-x295)%x296);

    if (t67 != -12LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x298 = -150583;
	uint16_t x299 = UINT16_MAX;
	volatile int32_t x300 = -1;
	int32_t t68 = 320;

    t68 = (((x297|x298)-x299)%x300);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x301 = -1;
	uint8_t x302 = 19U;
	uint16_t x303 = UINT16_MAX;
	volatile int64_t x304 = INT64_MIN;

    t69 = (((x301|x302)-x303)%x304);

    if (t69 != -65536LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x305 = INT32_MIN;
	volatile uint16_t x306 = 380U;
	uint8_t x307 = 4U;
	volatile int32_t x308 = INT32_MIN;
	int32_t t70 = 46672379;

    t70 = (((x305|x306)-x307)%x308);

    if (t70 != -2147483272) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint8_t x309 = 0U;
	static uint16_t x310 = UINT16_MAX;
	int64_t x311 = INT64_MAX;
	volatile int64_t t71 = -29356380278LL;

    t71 = (((x309|x310)-x311)%x312);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x313 = -1;
	uint64_t x314 = 7639LLU;
	volatile int32_t x315 = INT32_MAX;
	int16_t x316 = INT16_MIN;
	volatile uint64_t t72 = 949990660471LLU;

    t72 = (((x313|x314)-x315)%x316);

    if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x317 = 201U;
	uint8_t x318 = 1U;
	static uint32_t x319 = 442185583U;
	volatile int32_t x320 = INT32_MIN;
	volatile uint32_t t73 = 103434U;

    t73 = (((x317|x318)-x319)%x320);

    if (t73 != 1705298266U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x321 = 5U;
	int16_t x322 = INT16_MIN;
	volatile int32_t x324 = INT32_MIN;
	int64_t t74 = 1LL;

    t74 = (((x321|x322)-x323)%x324);

    if (t74 != -52016323LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x325 = 249LL;
	int64_t x326 = INT64_MIN;
	int16_t x327 = -180;

    t75 = (((x325|x326)-x327)%x328);

    if (t75 != 311858287256582919LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x334 = -1;
	static volatile uint16_t x335 = 24251U;
	uint32_t t76 = 2050U;

    t76 = (((x333|x334)-x335)%x336);

    if (t76 != 4294943044U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x337 = -92304041;
	int64_t x338 = -67LL;
	static uint32_t x339 = UINT32_MAX;
	uint16_t x340 = UINT16_MAX;
	static volatile int64_t t77 = -327827351113LL;

    t77 = (((x337|x338)-x339)%x340);

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x341 = 874LLU;
	volatile int16_t x343 = 24;
	uint16_t x344 = UINT16_MAX;
	volatile uint64_t t78 = 2455712131792LLU;

    t78 = (((x341|x342)-x343)%x344);

    if (t78 != 65510LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x346 = INT8_MIN;
	int32_t x347 = 5748;
	volatile uint64_t t79 = 6255355949302590476LLU;

    t79 = (((x345|x346)-x347)%x348);

    if (t79 != 5386626790LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x349 = INT32_MAX;
	static volatile uint32_t x350 = 714U;
	int16_t x351 = -184;
	int16_t x352 = 3;
	uint32_t t80 = 59U;

    t80 = (((x349|x350)-x351)%x352);

    if (t80 != 2U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x353 = INT16_MIN;
	volatile int32_t x355 = 7;
	int32_t x356 = -1;
	int32_t t81 = 412300;

    t81 = (((x353|x354)-x355)%x356);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x357 = 6745380797081456LLU;
	uint64_t x358 = 358560706577858LLU;
	volatile uint64_t x360 = 444502085924LLU;
	volatile uint64_t t82 = 349LLU;

    t82 = (((x357|x358)-x359)%x360);

    if (t82 != 167432116855LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x361 = 1731U;
	int16_t x363 = INT16_MAX;
	int64_t t83 = 97LL;

    t83 = (((x361|x362)-x363)%x364);

    if (t83 != 32768LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x365 = -1;
	static uint32_t x366 = UINT32_MAX;
	int64_t x367 = 137655953LL;
	int8_t x368 = INT8_MAX;
	int64_t t84 = 3010301892LL;

    t84 = (((x365|x366)-x367)%x368);

    if (t84 != 124LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x369 = INT8_MIN;
	volatile uint16_t x371 = UINT16_MAX;
	static int16_t x372 = -1;

    t85 = (((x369|x370)-x371)%x372);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x373 = UINT32_MAX;
	uint8_t x374 = 0U;
	int64_t x375 = INT64_MAX;
	uint32_t x376 = 2056386U;
	volatile int64_t t86 = 139798LL;

    t86 = (((x373|x374)-x375)%x376);

    if (t86 != -1607908LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x377 = 375U;
	int32_t x380 = INT32_MIN;
	volatile uint64_t t87 = 98LLU;

    t87 = (((x377|x378)-x379)%x380);

    if (t87 != 9223372036854776184LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x381 = UINT32_MAX;
	int8_t x382 = -8;
	int16_t x383 = -102;
	uint8_t x384 = UINT8_MAX;
	static uint32_t t88 = 30476660U;

    t88 = (((x381|x382)-x383)%x384);

    if (t88 != 101U) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x385 = INT64_MIN;
	int8_t x387 = INT8_MIN;
	int64_t t89 = -184446186641006LL;

    t89 = (((x385|x386)-x387)%x388);

    if (t89 != -1641LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x389 = -1;
	int8_t x391 = -2;
	int8_t x392 = 27;
	static int32_t t90 = 8;

    t90 = (((x389|x390)-x391)%x392);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x393 = 1505205U;
	uint32_t x394 = 323829U;
	static int8_t x395 = -1;
	volatile uint64_t x396 = 83LLU;
	uint64_t t91 = 884169294401141LLU;

    t91 = (((x393|x394)-x395)%x396);

    if (t91 != 65LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x397 = 1LL;
	uint64_t x399 = 1LLU;
	volatile int64_t x400 = INT64_MIN;

    t92 = (((x397|x398)-x399)%x400);

    if (t92 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x401 = INT8_MAX;
	static int64_t x402 = -1LL;
	int16_t x403 = INT16_MAX;
	volatile uint8_t x404 = 101U;
	volatile int64_t t93 = -32287137949597LL;

    t93 = (((x401|x402)-x403)%x404);

    if (t93 != -44LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x405 = 245049U;
	uint16_t x407 = 3U;
	int8_t x408 = INT8_MAX;
	uint32_t t94 = 3U;

    t94 = (((x405|x406)-x407)%x408);

    if (t94 != 84U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x410 = INT32_MIN;
	int16_t x411 = 29;
	uint64_t x412 = 1141875LLU;

    t95 = (((x409|x410)-x411)%x412);

    if (t95 != 437836LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x413 = 509;
	static uint8_t x414 = 2U;
	int8_t x415 = -1;
	static volatile int32_t t96 = -8189604;

    t96 = (((x413|x414)-x415)%x416);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x417 = INT16_MIN;
	static int16_t x419 = -7205;
	int16_t x420 = 7792;
	int32_t t97 = -120;

    t97 = (((x417|x418)-x419)%x420);

    if (t97 != 7204) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x422 = -1;
	volatile int8_t x423 = INT8_MIN;
	int32_t x424 = INT32_MIN;
	static volatile int32_t t98 = 0;

    t98 = (((x421|x422)-x423)%x424);

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x425 = UINT32_MAX;
	uint32_t x426 = UINT32_MAX;
	uint8_t x427 = 2U;
	int16_t x428 = INT16_MIN;

    t99 = (((x425|x426)-x427)%x428);

    if (t99 != 32765U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x429 = -165785;
	static uint32_t x430 = 221622U;
	int8_t x431 = INT8_MIN;
	volatile uint64_t t100 = 209573268LLU;

    t100 = (((x429|x430)-x431)%x432);

    if (t100 != 4294933111LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x433 = UINT64_MAX;
	uint8_t x434 = UINT8_MAX;
	uint32_t x435 = UINT32_MAX;
	int64_t x436 = INT64_MIN;
	volatile uint64_t t101 = 19LLU;

    t101 = (((x433|x434)-x435)%x436);

    if (t101 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x437 = 420174312035576LLU;
	uint32_t x439 = 238U;
	uint32_t x440 = UINT32_MAX;
	volatile uint64_t t102 = 32306164709085LLU;

    t102 = (((x437|x438)-x439)%x440);

    if (t102 != 1956543798LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x446 = 13;
	static volatile uint32_t x447 = 6771U;
	volatile int16_t x448 = INT16_MIN;
	volatile uint32_t t103 = 140801U;

    t103 = (((x445|x446)-x447)%x448);

    if (t103 != 48598522U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x449 = INT64_MIN;
	uint8_t x450 = 1U;
	int64_t x451 = INT64_MIN;
	int16_t x452 = INT16_MIN;
	int64_t t104 = -1065LL;

    t104 = (((x449|x450)-x451)%x452);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x453 = -318422609;
	int32_t x455 = -609438865;
	volatile int32_t t105 = -27485;

    t105 = (((x453|x454)-x455)%x456);

    if (t105 != 74) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x457 = 1961;
	int32_t x458 = INT32_MAX;
	int64_t x459 = -19101177LL;
	static int64_t t106 = -4LL;

    t106 = (((x457|x458)-x459)%x460);

    if (t106 != 63259LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x465 = UINT32_MAX;
	int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MAX;
	uint8_t x468 = 44U;

    t107 = (((x465|x466)-x467)%x468);

    if (t107 != -28LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x469 = -3;
	volatile int8_t x470 = 63;
	int8_t x471 = INT8_MAX;
	static int8_t x472 = INT8_MIN;

    t108 = (((x469|x470)-x471)%x472);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x473 = 11U;
	volatile int64_t x474 = -245511804LL;
	static uint32_t x475 = UINT32_MAX;
	uint64_t x476 = 1095363968536419LLU;
	volatile uint64_t t109 = 5882515817658LLU;

    t109 = (((x473|x474)-x475)%x476);

    if (t109 != 814839015776568LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x477 = -1LL;
	int8_t x478 = -1;
	uint32_t x479 = 181459499U;
	volatile int8_t x480 = 1;
	volatile int64_t t110 = -2571361899159LL;

    t110 = (((x477|x478)-x479)%x480);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x485 = 1U;
	int64_t x486 = 5089808343LL;
	int32_t x487 = INT32_MAX;
	int8_t x488 = -1;
	volatile int64_t t111 = 7496914037LL;

    t111 = (((x485|x486)-x487)%x488);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x489 = 2;
	static volatile uint8_t x490 = 29U;
	int32_t x491 = INT32_MAX;
	static volatile int64_t x492 = INT64_MIN;

    t112 = (((x489|x490)-x491)%x492);

    if (t112 != -2147483616LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x493 = UINT16_MAX;
	volatile int8_t x494 = 0;
	int64_t x495 = -1LL;

    t113 = (((x493|x494)-x495)%x496);

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x497 = INT16_MAX;
	uint64_t x498 = 520530LLU;
	static volatile int16_t x499 = -1;
	static uint64_t t114 = 334002674593639740LLU;

    t114 = (((x497|x498)-x499)%x500);

    if (t114 != 524288LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x502 = UINT16_MAX;
	static volatile uint8_t x503 = 10U;
	int64_t x504 = -1LL;
	volatile int64_t t115 = 0LL;

    t115 = (((x501|x502)-x503)%x504);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x505 = 3;
	static volatile uint64_t x506 = 91429755287938674LLU;
	static uint64_t x507 = 6070915514023406991LLU;
	int32_t x508 = INT32_MIN;

    t116 = (((x505|x506)-x507)%x508);

    if (t116 != 12467258314974083300LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x509 = INT32_MIN;
	int16_t x510 = 223;
	int32_t x512 = -1;
	volatile int32_t t117 = 2142633;

    t117 = (((x509|x510)-x511)%x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x513 = INT8_MAX;
	static int8_t x514 = -1;
	static int8_t x515 = -1;
	int8_t x516 = -7;
	volatile int32_t t118 = 12822590;

    t118 = (((x513|x514)-x515)%x516);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x517 = 9LL;
	int16_t x518 = 1;
	static int64_t x520 = INT64_MIN;
	int64_t t119 = -212799LL;

    t119 = (((x517|x518)-x519)%x520);

    if (t119 != -2147483638LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x521 = INT16_MAX;
	int16_t x523 = 1;
	volatile int32_t x524 = 1059229487;
	static int32_t t120 = 1;

    t120 = (((x521|x522)-x523)%x524);

    if (t120 != 65534) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x525 = -154353208898184LL;
	uint8_t x526 = UINT8_MAX;
	uint64_t x527 = 3549292234302354LLU;
	volatile uint64_t t121 = 4710886620374981LLU;

    t121 = (((x525|x526)-x527)%x528);

    if (t121 != 18443040428266351213LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x529 = UINT16_MAX;
	uint64_t x531 = UINT64_MAX;
	uint8_t x532 = UINT8_MAX;

    t122 = (((x529|x530)-x531)%x532);

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x533 = INT64_MIN;
	static int32_t x534 = -1;
	uint16_t x535 = 10361U;
	static volatile int8_t x536 = INT8_MIN;

    t123 = (((x533|x534)-x535)%x536);

    if (t123 != -122LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x537 = -1363;
	int64_t x538 = INT64_MIN;
	static uint16_t x539 = UINT16_MAX;
	static volatile int64_t t124 = 4092800686933600LL;

    t124 = (((x537|x538)-x539)%x540);

    if (t124 != -1363LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x541 = INT8_MIN;
	volatile uint8_t x542 = 0U;
	uint64_t x543 = UINT64_MAX;
	int32_t x544 = -1;
	uint64_t t125 = 60121152LLU;

    t125 = (((x541|x542)-x543)%x544);

    if (t125 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x545 = INT16_MAX;
	volatile int32_t x546 = -110;
	int64_t x547 = INT64_MIN;
	uint32_t x548 = 51358U;
	static volatile int64_t t126 = -1372782415417LL;

    t126 = (((x545|x546)-x547)%x548);

    if (t126 != 8675LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x549 = 3103;
	int16_t x550 = INT16_MIN;
	int16_t x551 = 6;
	int32_t t127 = 3064;

    t127 = (((x549|x550)-x551)%x552);

    if (t127 != -80) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x553 = INT64_MIN;
	int64_t x554 = INT64_MAX;
	uint32_t x555 = UINT32_MAX;
	int8_t x556 = INT8_MIN;
	int64_t t128 = -27848LL;

    t128 = (((x553|x554)-x555)%x556);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x557 = 721U;
	volatile int64_t x558 = 1712LL;
	int32_t x559 = 50791582;
	int64_t t129 = -51LL;

    t129 = (((x557|x558)-x559)%x560);

    if (t129 != -5LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x561 = 4U;
	volatile int8_t x562 = -6;
	int16_t x563 = -6920;
	uint8_t x564 = UINT8_MAX;
	volatile int32_t t130 = 411933;

    t130 = (((x561|x562)-x563)%x564);

    if (t130 != 33) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x566 = 8;
	volatile uint64_t x568 = 4085539800664672782LLU;
	static volatile uint64_t t131 = 314407642747011LLU;

    t131 = (((x565|x566)-x567)%x568);

    if (t131 != 688259213393792LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x569 = INT64_MIN;
	uint32_t x570 = 152U;
	int16_t x572 = -3;
	volatile uint64_t t132 = 41LLU;

    t132 = (((x569|x570)-x571)%x572);

    if (t132 != 9223278658151537331LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x573 = INT16_MAX;
	uint32_t x574 = 4U;
	int64_t x576 = INT64_MAX;
	volatile int64_t t133 = -4528999628LL;

    t133 = (((x573|x574)-x575)%x576);

    if (t133 != 32766LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x578 = INT64_MAX;
	uint64_t x579 = UINT64_MAX;
	int64_t x580 = -1LL;
	volatile uint64_t t134 = 1441661564LLU;

    t134 = (((x577|x578)-x579)%x580);

    if (t134 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x581 = INT8_MAX;
	int16_t x582 = -5132;
	volatile int32_t x583 = -605161998;
	int8_t x584 = INT8_MAX;
	static int32_t t135 = -1;

    t135 = (((x581|x582)-x583)%x584);

    if (t135 != 99) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x585 = -19;
	int64_t x586 = 4345711589593LL;
	volatile int8_t x588 = 61;
	volatile int64_t t136 = 220285152123105686LL;

    t136 = (((x585|x586)-x587)%x588);

    if (t136 != 5LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x589 = UINT8_MAX;
	uint8_t x590 = 47U;
	static volatile uint16_t x591 = 1U;

    t137 = (((x589|x590)-x591)%x592);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x593 = -1;
	uint8_t x594 = UINT8_MAX;
	uint64_t x595 = 64385275LLU;
	uint64_t t138 = 0LLU;

    t138 = (((x593|x594)-x595)%x596);

    if (t138 != 60LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x597 = INT8_MIN;
	volatile int8_t x598 = -11;
	volatile int64_t x599 = -1LL;
	int64_t x600 = -1LL;

    t139 = (((x597|x598)-x599)%x600);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x603 = INT16_MIN;
	int64_t x604 = INT64_MAX;
	volatile int64_t t140 = 0LL;

    t140 = (((x601|x602)-x603)%x604);

    if (t140 != 4863LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x605 = INT16_MIN;
	int8_t x606 = 15;
	int32_t x607 = INT32_MIN;
	uint8_t x608 = UINT8_MAX;
	static volatile int32_t t141 = 156336;

    t141 = (((x605|x606)-x607)%x608);

    if (t141 != 15) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x610 = INT16_MIN;
	uint64_t x612 = UINT64_MAX;

    t142 = (((x609|x610)-x611)%x612);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x613 = -60;
	volatile int32_t x614 = INT32_MIN;
	uint32_t x615 = UINT32_MAX;
	uint16_t x616 = UINT16_MAX;
	static uint32_t t143 = 3U;

    t143 = (((x613|x614)-x615)%x616);

    if (t143 != 65477U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x623 = INT64_MIN;
	volatile int8_t x624 = -14;

    t144 = (((x621|x622)-x623)%x624);

    if (t144 != 11899347436959870783LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x626 = -1;
	uint16_t x627 = UINT16_MAX;
	int16_t x628 = -1;

    t145 = (((x625|x626)-x627)%x628);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x630 = 42LLU;
	int64_t x631 = INT64_MAX;
	int64_t x632 = -7907479LL;

    t146 = (((x629|x630)-x631)%x632);

    if (t146 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x637 = -5980;
	volatile int64_t x638 = INT64_MIN;
	int8_t x639 = 3;
	int16_t x640 = -14927;
	volatile int64_t t147 = -188434095LL;

    t147 = (((x637|x638)-x639)%x640);

    if (t147 != -5983LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x641 = 9076;
	int64_t x642 = -876053266898LL;
	int16_t x643 = INT16_MAX;
	volatile int16_t x644 = -1;
	int64_t t148 = -17224411609739LL;

    t148 = (((x641|x642)-x643)%x644);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x646 = INT64_MIN;
	static uint64_t x647 = UINT64_MAX;
	volatile uint64_t x648 = 25LLU;
	volatile uint64_t t149 = 7940LLU;

    t149 = (((x645|x646)-x647)%x648);

    if (t149 != 2LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x649 = -2LL;
	uint16_t x650 = 196U;
	int32_t x651 = -3;
	static int32_t x652 = INT32_MIN;
	int64_t t150 = 14207LL;

    t150 = (((x649|x650)-x651)%x652);

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x653 = INT16_MIN;
	int16_t x654 = -1;
	uint32_t x655 = 31413116U;
	uint16_t x656 = 19552U;

    t151 = (((x653|x654)-x655)%x656);

    if (t151 != 5955U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x658 = INT8_MIN;
	int64_t x659 = INT64_MIN;

    t152 = (((x657|x658)-x659)%x660);

    if (t152 != 2147483647LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x665 = 17805U;
	static volatile int64_t x666 = 3003872569310778LL;
	int16_t x668 = -1;
	static volatile int64_t t153 = -7295LL;

    t153 = (((x665|x666)-x667)%x668);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x669 = -2021474;
	int16_t x670 = INT16_MAX;
	static int64_t x671 = 1053303775306LL;
	volatile int64_t t154 = 21133518906432529LL;

    t154 = (((x669|x670)-x671)%x672);

    if (t154 != -1053305774155LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x674 = INT32_MIN;
	int64_t x675 = -1LL;
	int32_t x676 = 31758;

    t155 = (((x673|x674)-x675)%x676);

    if (t155 != -7687LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x678 = INT32_MIN;
	int8_t x679 = INT8_MIN;
	uint64_t t156 = 187666043963414LLU;

    t156 = (((x677|x678)-x679)%x680);

    if (t156 != 18446744071562100863LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x681 = UINT16_MAX;
	uint16_t x682 = 126U;
	int64_t x683 = INT64_MAX;
	static int16_t x684 = -1;
	int64_t t157 = 124LL;

    t157 = (((x681|x682)-x683)%x684);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x685 = INT16_MAX;
	uint16_t x686 = UINT16_MAX;
	volatile uint32_t x688 = 2U;
	volatile uint32_t t158 = 2716U;

    t158 = (((x685|x686)-x687)%x688);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x690 = 295U;
	volatile int64_t x691 = -1LL;
	uint16_t x692 = UINT16_MAX;
	static volatile int64_t t159 = 98079632506149330LL;

    t159 = (((x689|x690)-x691)%x692);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x693 = 1U;
	uint64_t x694 = 479201887998717731LLU;
	int8_t x695 = -1;
	static int8_t x696 = INT8_MIN;
	volatile uint64_t t160 = 146546818770LLU;

    t160 = (((x693|x694)-x695)%x696);

    if (t160 != 479201887998717732LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x697 = INT16_MIN;
	int64_t x698 = -222737LL;
	static int16_t x699 = INT16_MAX;
	int8_t x700 = -1;
	volatile int64_t t161 = 3919370LL;

    t161 = (((x697|x698)-x699)%x700);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x701 = -2;
	int8_t x702 = INT8_MIN;
	static uint32_t x703 = 1607U;
	volatile int64_t t162 = -2698102553028340546LL;

    t162 = (((x701|x702)-x703)%x704);

    if (t162 != 4294965687LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x710 = 1;
	uint32_t x711 = 25748U;
	uint8_t x712 = 32U;

    t163 = (((x709|x710)-x711)%x712);

    if (t163 != 11U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x714 = 220U;
	volatile int8_t x715 = INT8_MIN;
	static volatile int64_t x716 = INT64_MAX;

    t164 = (((x713|x714)-x715)%x716);

    if (t164 != -32420LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x717 = -1;
	int16_t x718 = -20;
	int16_t x719 = INT16_MIN;
	int8_t x720 = INT8_MAX;

    t165 = (((x717|x718)-x719)%x720);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x721 = UINT32_MAX;
	volatile int8_t x722 = -1;
	uint32_t x723 = UINT32_MAX;
	static int32_t x724 = -1;

    t166 = (((x721|x722)-x723)%x724);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x725 = INT16_MIN;
	int64_t x726 = -1LL;
	int8_t x727 = -1;
	volatile uint64_t x728 = 1327962206344114LLU;

    t167 = (((x725|x726)-x727)%x728);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x729 = 287150U;
	static uint16_t x730 = 24U;
	int16_t x731 = -28;
	static int32_t x732 = INT32_MIN;
	uint32_t t168 = 6U;

    t168 = (((x729|x730)-x731)%x732);

    if (t168 != 287194U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x734 = 23158U;
	int32_t x736 = -6399;
	static volatile uint64_t t169 = 15963LLU;

    t169 = (((x733|x734)-x735)%x736);

    if (t169 != 18446744073709472954LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x737 = INT32_MAX;
	int64_t x738 = INT64_MIN;
	static int32_t x739 = INT32_MAX;
	uint16_t x740 = 12U;

    t170 = (((x737|x738)-x739)%x740);

    if (t170 != -8LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x741 = INT32_MAX;
	int32_t x742 = INT32_MIN;
	volatile int16_t x744 = INT16_MAX;

    t171 = (((x741|x742)-x743)%x744);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x745 = 1411;
	int16_t x746 = INT16_MIN;
	int8_t x747 = INT8_MIN;
	int64_t x748 = -47242LL;
	volatile int64_t t172 = -30916LL;

    t172 = (((x745|x746)-x747)%x748);

    if (t172 != -31229LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x750 = 2670590902992LLU;
	int32_t x751 = INT32_MIN;
	uint8_t x752 = 2U;
	volatile uint64_t t173 = 7LLU;

    t173 = (((x749|x750)-x751)%x752);

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x754 = UINT64_MAX;
	static volatile uint64_t x755 = 33000376614254121LLU;
	static uint32_t x756 = 40577519U;
	uint64_t t174 = 3252807110734LLU;

    t174 = (((x753|x754)-x755)%x756);

    if (t174 != 36678578LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x765 = INT8_MIN;
	int64_t x766 = INT64_MAX;
	static int16_t x767 = INT16_MIN;
	int64_t x768 = INT64_MIN;
	volatile int64_t t175 = -8438043569LL;

    t175 = (((x765|x766)-x767)%x768);

    if (t175 != 32767LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x769 = 368;
	int64_t x770 = INT64_MIN;
	uint64_t x771 = 202LLU;
	int32_t x772 = INT32_MIN;
	volatile uint64_t t176 = 64316415203LLU;

    t176 = (((x769|x770)-x771)%x772);

    if (t176 != 9223372036854775974LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x773 = 6158294LLU;
	static int32_t x774 = -1;
	volatile int32_t x775 = 279177367;
	uint16_t x776 = 7U;

    t177 = (((x773|x774)-x775)%x776);

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x777 = 0;
	int16_t x778 = INT16_MIN;
	int16_t x779 = -11;
	int64_t x780 = INT64_MIN;
	int64_t t178 = -9933LL;

    t178 = (((x777|x778)-x779)%x780);

    if (t178 != -32757LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x781 = UINT8_MAX;
	uint64_t x782 = UINT64_MAX;
	uint16_t x783 = 117U;
	int32_t x784 = 9;
	volatile uint64_t t179 = 17877932441133959LLU;

    t179 = (((x781|x782)-x783)%x784);

    if (t179 != 6LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x790 = INT8_MIN;
	int16_t x792 = 176;

    t180 = (((x789|x790)-x791)%x792);

    if (t180 != 141U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x793 = INT8_MIN;
	volatile uint64_t x794 = UINT64_MAX;
	int16_t x795 = INT16_MAX;

    t181 = (((x793|x794)-x795)%x796);

    if (t181 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x797 = -1;
	int16_t x798 = INT16_MIN;
	uint32_t t182 = 133536850U;

    t182 = (((x797|x798)-x799)%x800);

    if (t182 != 32765U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x801 = INT32_MIN;
	int64_t x802 = INT64_MIN;
	int16_t x803 = INT16_MIN;
	int8_t x804 = -1;
	static int64_t t183 = -30397625046LL;

    t183 = (((x801|x802)-x803)%x804);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x805 = 44;
	static int64_t x806 = INT64_MAX;
	uint64_t x807 = 15477LLU;
	int8_t x808 = -1;
	volatile uint64_t t184 = 34176231374807129LLU;

    t184 = (((x805|x806)-x807)%x808);

    if (t184 != 9223372036854760330LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x811 = -59LL;
	int32_t x812 = INT32_MIN;
	volatile int64_t t185 = -12481008169773LL;

    t185 = (((x809|x810)-x811)%x812);

    if (t185 != -32697LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x813 = 6U;
	volatile int16_t x814 = -6588;
	volatile int16_t x815 = INT16_MIN;
	volatile uint8_t x816 = UINT8_MAX;
	int32_t t186 = -44;

    t186 = (((x813|x814)-x815)%x816);

    if (t186 != 172) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x817 = INT32_MAX;
	int64_t x818 = -128116372765856283LL;
	volatile int8_t x819 = -3;
	static int8_t x820 = -4;

    t187 = (((x817|x818)-x819)%x820);

    if (t187 != -2LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x821 = UINT32_MAX;
	static volatile uint32_t x822 = UINT32_MAX;
	uint8_t x823 = 23U;
	int16_t x824 = 91;
	static volatile uint32_t t188 = 5U;

    t188 = (((x821|x822)-x823)%x824);

    if (t188 != 50U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x825 = INT32_MIN;
	int8_t x826 = -2;
	static uint16_t x828 = 6617U;
	int64_t t189 = 9529080LL;

    t189 = (((x825|x826)-x827)%x828);

    if (t189 != -99LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x829 = 164130U;
	int16_t x832 = INT16_MAX;
	uint32_t t190 = 19978U;

    t190 = (((x829|x830)-x831)%x832);

    if (t190 != 386U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x834 = -1;
	uint16_t x836 = 15170U;

    t191 = (((x833|x834)-x835)%x836);

    if (t191 != 3399U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x837 = INT32_MIN;
	int32_t x839 = INT32_MIN;
	static int64_t x840 = 3950643026544464LL;
	volatile int64_t t192 = -320984304LL;

    t192 = (((x837|x838)-x839)%x840);

    if (t192 != 62LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x841 = INT8_MIN;
	int32_t x843 = 0;
	int16_t x844 = 1608;

    t193 = (((x841|x842)-x843)%x844);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x845 = INT32_MAX;
	int16_t x846 = INT16_MIN;
	int64_t x847 = INT64_MIN;
	int64_t x848 = -5878158LL;
	int64_t t194 = -665100114LL;

    t194 = (((x845|x846)-x847)%x848);

    if (t194 != 1675681LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x849 = -5397;
	uint64_t x850 = 27918585LLU;
	int16_t x851 = INT16_MIN;
	volatile int16_t x852 = -1;
	uint64_t t195 = 4520171174002679780LLU;

    t195 = (((x849|x850)-x851)%x852);

    if (t195 != 27387LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x853 = INT64_MIN;
	int8_t x855 = INT8_MIN;
	int8_t x856 = INT8_MIN;
	static int64_t t196 = -134226199001042LL;

    t196 = (((x853|x854)-x855)%x856);

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x857 = 26655277745728297LL;
	static volatile uint64_t x858 = 8018010537745LLU;
	int16_t x859 = -1;
	static int8_t x860 = INT8_MIN;
	static uint64_t t197 = 764593247658LLU;

    t197 = (((x857|x858)-x859)%x860);

    if (t197 != 26660820510277434LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x862 = -1;
	static int64_t x863 = INT64_MAX;

    t198 = (((x861|x862)-x863)%x864);

    if (t198 != -80LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x866 = 2;
	int8_t x867 = INT8_MIN;
	volatile int64_t t199 = -534966977036LL;

    t199 = (((x865|x866)-x867)%x868);

    if (t199 != 1006LL) { NG(); } else { ; }
	
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

